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
      uintptr_t vir_addr_begin  = phdr.p_vaddr & (~0xfff);
      uintptr_t vir_addr_offset = phdr.p_vaddr & (0xfff);
      //减一是为了在刚好在大小是PGSIZE的倍数时，少一页，然后后面统一将page_num加1
      uintptr_t vir_addr_end   = (phdr.p_vaddr+phdr.p_memsz - 1) & (~0xfff); 
      int page_num = ((vir_addr_end - vir_addr_begin) >> 12) + 1;
      uintptr_t page_ptr = (uintptr_t)new_page(page_num);

      Log("VirtAddr:[0x%x - 0x%x] page_num:%d",vir_addr_begin,vir_addr_begin+page_num*PGSIZE,page_num);

      for(int j=0; j<page_num; j++){
        map(&pcb->as,(void *)(vir_addr_begin+(j << 12)),(void *)(page_ptr+(j << 12)),PAGE_READ|PAGE_WRITE|PAGE_EXEC|PAGE_USER);
      }

      // 将程序读取到对应的物理地址page_ptr + vir_addr_offset，大小为phdr.p_filesz
      fs_lseek(fd,phdr.p_offset,SEEK_SET);
      fs_read(fd,(void *)(page_ptr + vir_addr_offset),phdr.p_filesz);
      // 因为new_page的时候清0了，这里就不用请零0
      // memset((void *)(phdr.p_vaddr+phdr.p_filesz),0,phdr.p_memsz-phdr.p_filesz);

      // 只为当前新program break超过max_brk部分的虚拟地址空间分配物理页
      // max_brk记录了最后一页的地址
      pcb->max_brk = vir_addr_begin + page_num * PGSIZE;
    }
  }
  // printf("ehdr.e_entry:%x\n",(uint32_t *)ehdr.e_entry);
#if defined(__ISA_RISCV32__) || defined (__ISA_RISCV64__)
  asm volatile("fence.i");
#endif
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
  printf("context_kload[%x - %x]\n",pcb->stack,pcb->stack + STACK_SIZE);
  printf("context_kload.pdir %x context:%x\n",pcb->cp->pdir,pcb->cp);
}
// 要和naive_load一样
void context_uload(PCB *pcb, const char *filename, char *const argv[], char *const envp[]){
  protect(&pcb->as);
  char *ustack_start = (char *)new_page(8);
  char *ustack_end   = (char *)(ustack_start + 8 * PGSIZE);
  printf("ustack_end:%x\n",ustack_end);

  for(int i=8; i>0; i--){
    printf("va:%x  pa:%x\n",pcb->as.area.end-i*PGSIZE,ustack_end-i*PGSIZE);
    map(&pcb->as,(void *)(pcb->as.area.end-i*PGSIZE),(void *)(ustack_end-i*PGSIZE),PAGE_READ|PAGE_WRITE|PAGE_EXEC|PAGE_USER);
  }

  char *ustack_map   = (char *)(pcb->as.area.end);
  printf("ustack_map:%x\n",ustack_map);

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
// 数据还是存在ustack中
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


//下面存放string的指针要存放映射后的指针
  // 二级指针，这里面存放string_area_p的指针
  char **point_area_start = (char **)point_area_end;
  char *string_area_p = string_area_start;

  char *string_map_p  = (char *)(ustack_map - (ustack_end - string_area_start));
  size_t len = 0;

  *(--point_area_start) = NULL;
  for(size_t i = 0; i < envp_cnt; i++){
    *(--point_area_start) = string_map_p;
    printf("%p map ->%p\n",string_area_p,string_map_p);
    printf("envp:%s\n",string_area_p);
    len = strlen(string_area_p) + 1;
    string_area_p += len;
    string_map_p  += len;
  }
  *(--point_area_start) = NULL;
  for(size_t i = 0; i < argv_cnt; i++){
    *(--point_area_start) = string_map_p;
    printf("%p map ->%p\n",string_area_p,string_map_p);
    printf("argv:%s\n",string_area_p);
    len = strlen(string_area_p) + 1;
    string_area_p += len;
    string_map_p  += len;
  }
  // 下面point_area_start不能再更改了
  assert(string_area_p == ustack_end);
  assert((uintptr_t)point_area_start + (argv_cnt + envp_cnt + 2)*sizeof(uintptr_t) == (uintptr_t)point_area_end);

  // 放入argv_cnt
  uintptr_t *argc_area_start = (uintptr_t *)(point_area_start - 1);
  *argc_area_start = argv_cnt;
  uintptr_t *argc_map_p = (uintptr_t *)(ustack_map - (ustack_end - (char *)argc_area_start));

printf("argc_area_start:%x\n",argc_area_start);
printf("argc_map_p:%x\n",argc_map_p);

  uintptr_t entry = loader(pcb, filename);
  pcb->cp = ucontext(&pcb->as,RANGE(pcb->stack,pcb->stack + STACK_SIZE),(void *)entry);
  // printf("%x\n",pcb->cp);
  pcb->cp->GPRx = (uintptr_t)argc_map_p;

printf("context_uload.pdir %x context:%x\n",pcb->cp->pdir,pcb->cp);
printf("pcb->max_brk:%x\n",pcb->max_brk);
  // pcb->cp->GPRx = (uintptr_t)ustack_map;

  // printf("%x %x\n",argc_area_start,point_area_start);

// 看一下写入的结果是否对
  // uintptr_t test_cnt = *(uintptr_t *) pcb->cp->GPRx;
  // printf("%d\n",test_cnt);
  // uintptr_t *test_p = (uintptr_t *) (pcb->cp->GPRx + sizeof(uintptr_t));
  // for(size_t i = 0; i < 5; i++){
  //   printf("%d,%x\n",i,test_p+i);
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