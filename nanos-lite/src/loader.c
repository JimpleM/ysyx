#include <proc.h>
#include <elf.h>
#include <fs.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

#if defined(__ISA_AM_NATIVE__)
# define EXPECT_TYPE EM_X86_64
#elif defined(__ISA_RISCV32__) || defined (__ISA_RISCV64__)
# define EXPECT_TYPE EM_RISCV
#else
# error Unsupported ISA
#endif

// extern size_t ramdisk_read(void *buf, size_t offset, size_t len);
// extern size_t ramdisk_write(const void *buf, size_t offset, size_t len);
// extern size_t get_ramdisk_size();



static uintptr_t loader(PCB *pcb, const char *filename) {
  // TODO();
  // Log("loader%d\n",get_ramdisk_size());
  Elf_Ehdr ehdr = {};
  Elf_Phdr phdr = {};
  assert(filename!=NULL);
  Log("%s",filename);

  int fd = fs_open(filename,0,0);
  fs_lseek(fd,0,SEEK_SET);
  fs_read(fd,&ehdr,sizeof(Elf_Ehdr));
  // printf("%x\n",*(uint32_t *)ehdr.e_ident);
  // printf("%d\n",ehdr.e_machine);
  assert(*(uint32_t *)ehdr.e_ident == 0x464C457F);
  assert(ehdr.e_machine == EXPECT_TYPE);

  // 读取每一个需要加载的段
  for(int i=0; i<ehdr.e_phnum; i++){
    fs_lseek(fd,ehdr.e_phoff+ehdr.e_phentsize*i,SEEK_SET);
    fs_read(fd,&phdr,sizeof(Elf_Phdr));
    
    if(phdr.p_type == PT_LOAD){
      Log("VirtAddr:[0x%x - 0x%x]",phdr.p_vaddr,phdr.p_vaddr+phdr.p_memsz);
      // 将程序读取到phdr.p_vaddr，大小为phdr.p_filesz
      fs_lseek(fd,phdr.p_offset,SEEK_SET);
      fs_read(fd,(void *)phdr.p_vaddr,phdr.p_filesz);
      // 因为p_memsz>=p_filesz，多出来的部分为BSS段要清零
      // Log("phdr.p_files[%x] %x %x",phdr.p_filesz,phdr.p_vaddr+phdr.p_filesz,phdr.p_memsz-phdr.p_filesz);
      memset((void *)(phdr.p_vaddr+phdr.p_filesz),0,phdr.p_memsz-phdr.p_filesz);
    }
  }
  printf("ehdr.e_entry:%x\n",(uint32_t *)ehdr.e_entry);

  asm volatile("fence.i");
  //启动程序
  return ehdr.e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

void context_kload(PCB *pcb, void (*entry)(void *), void *arg){
  pcb->cp = kcontext(RANGE(pcb->stack,pcb->stack + STACK_SIZE),entry,arg);
}
// 要和naive_load一样
void context_uload(PCB *pcb, const char *filename, char *const argv[], char *const envp[]){
  char *ustack_start = (char *)new_page(8);
  char *ustack_end   = (char *)(ustack_start + 8 * PGSIZE);

  // printf("ustack_end:%x\n",ustack_end);

  int argv_cnt = 0;
  int envp_cnt = 0;
  if(argv != NULL){
    while(argv[argv_cnt] != NULL){
      argv_cnt++;
    }
  }
  if(envp != NULL){
    while(envp[envp_cnt] != NULL){
      envp_cnt++;
    }
  }
  Log("argv_cnt:%d,envp_cnt:%d",argv_cnt,envp_cnt);

  char *string_area_start = ustack_end;
  for(size_t i = 0; i < argv_cnt; i++){
    string_area_start -= (strlen(argv[i]) + 1); //要算上\0的位置
    strcpy(string_area_start,argv[i]);
  }
  for(size_t i = 0; i < envp_cnt; i++){
    string_area_start -= (strlen(envp[i]) + 1); //要算上\0的位置
    strcpy(string_area_start,envp[i]);
  }
  // 下面string_area_start不能再更改了
  // 有Unspecified 需要对地址向下对齐，考虑到native64位这里进行8字节对齐
  char *point_area_end = (char *)ROUNDDOWN(string_area_start,8);

  // 二级指针，这里面存放string_area_p的指针
  char **point_area_start = (char **)point_area_end;
  char *string_area_p = string_area_start;

  *(--point_area_start) = NULL;
  for(size_t i = 0; i < envp_cnt; i++){
    *(--point_area_start) = string_area_p;
    // printf("%p %p %x\n",point_area_start,string_area_p,*point_area_start);
    printf("envp:%s\n",string_area_p);
    string_area_p += strlen(string_area_p) + 1;
  }
  *(--point_area_start) = NULL;
  for(size_t i = 0; i < argv_cnt; i++){
    *(--point_area_start) = string_area_p;
    // printf("%p %p %x\n",point_area_start,string_area_p,*point_area_start);
    printf("argv:%s\n",string_area_p);
    string_area_p += strlen(string_area_p) + 1;
  }
  // 下面point_area_start不能再更改了
  assert(string_area_p == ustack_end);
  assert((uintptr_t)point_area_start + (argv_cnt + envp_cnt + 2)*sizeof(uintptr_t) == (uintptr_t)point_area_end);

  // 放入argv_cnt
  uintptr_t *argc_area_start = (uintptr_t *)(point_area_start - 1);
  *argc_area_start = argv_cnt;


  uintptr_t entry = loader(pcb, filename);
  pcb->cp = ucontext(&pcb->as,RANGE(pcb->stack,pcb->stack + STACK_SIZE),(void *)entry);
  printf("%x\n",pcb->cp);
  pcb->cp->GPRx = (uintptr_t)argc_area_start;

  printf("%x %x\n",argc_area_start,point_area_start);

// 看一下写入的结果是否对
  // uintptr_t test_cnt = *(uintptr_t *) pcb->cp->GPRx;
  // printf("%d\n",test_cnt);
  // uintptr_t *test_p = (uintptr_t *) (pcb->cp->GPRx + sizeof(uintptr_t));
  // for(size_t i = 0; i < test_cnt+1+envp_cnt+2; i++){
  //   printf("%d,%x,%x\n",i,test_p+i,*(test_p+i));
  // }
}

/*
|               |
+---------------+ <---- ustack.end
|  Unspecified  |
+---------------+
|               | <----------+
|    string     | <--------+ |
|     area      | <------+ | |
|               | <----+ | | |
|               | <--+ | | | |
+---------------+    | | | | |
|  Unspecified  |    | | | | |
+---------------+    | | | | |
|     NULL      |    | | | | |
+---------------+    | | | | |
|    ......     |    | | | | |
+---------------+    | | | | |
|    envp[1]    | ---+ | | | |
+---------------+      | | | |
|    envp[0]    | -----+ | | |
+---------------+        | | |
|     NULL      |        | | |
+---------------+        | | |
| argv[argc-1]  | -------+ | |
+---------------+          | |
|    ......     |          | |
+---------------+          | |
|    argv[1]    | ---------+ |
+---------------+            |
|    argv[0]    | -----------+
+---------------+
|      argc     |
+---------------+ <---- cp->GPRx
|               |
*/