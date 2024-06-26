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

  fs_read(fd,&ehdr,sizeof(Elf_Ehdr));
  // printf("%x\n",*(uint32_t *)ehdr.e_ident);
  assert(*(uint32_t *)ehdr.e_ident == 0x464C457F);
  assert(ehdr.e_machine == EXPECT_TYPE);

  // 读取每一个需要加载的段
  for(int i=0; i<ehdr.e_phnum; i++){
    fs_lseek(fd,ehdr.e_phoff+ehdr.e_phentsize*i,SEEK_SET);
    fs_read(fd,&phdr,sizeof(Elf_Phdr));
    // ramdisk_read(&phdr,ehdr.e_phoff+ehdr.e_phentsize*i,sizeof(Elf_Phdr));
    
    if(phdr.p_type == PT_LOAD){
      Log("VirtAddr:[0x%x - 0x%x]",phdr.p_vaddr,phdr.p_vaddr+phdr.p_memsz);
      // 将程序读取到phdr.p_vaddr，大小为phdr.p_filesz
      fs_lseek(fd,phdr.p_offset,SEEK_SET);
      fs_read(fd,(void *)phdr.p_vaddr,phdr.p_filesz);
      // ramdisk_read((void *)phdr.p_vaddr, phdr.p_offset, phdr.p_filesz);
      // 因为p_memsz>=p_filesz，多出来的部分为BSS段要清零
      // Log("phdr.p_files[%x] %x %x",phdr.p_filesz,phdr.p_vaddr+phdr.p_filesz,phdr.p_memsz-phdr.p_filesz);
      memset((void *)(phdr.p_vaddr+phdr.p_filesz),0,phdr.p_memsz-phdr.p_filesz);
    }
  }
  // printf("%x\n",*(uint32_t *)ehdr.e_entry);
  //启动程序
  return ehdr.e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

