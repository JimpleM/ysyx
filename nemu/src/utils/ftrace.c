#include <utils.h>
#include <common.h>
#include <elf.h>

FILE *elf_fp = NULL;

// static int ReadDataFromFile(FILE)


void init_ftrace(const char *elf_file){
	elf_fp = stdout;
	if (elf_fp != NULL) {
		FILE *fp = fopen(elf_file, "r");
		Assert(fp, "Can not open '%s'", elf_file);
		elf_fp = fp;
	}
	Log("ELF is read from %s", elf_file ? elf_file : "stdout");

	// uint8_t buffer[1024] = {0};
	Elf32_Ehdr ehdr = {0};      // ELF文件信息头
	// const Elf32_Phdr* pPhdr = (const Elf32_Phdr *) buffer;
	// const Elf32_Shdr* pShdr = (const Elf32_Shdr *) buffer;
	Elf32_Shdr shdr = {0};  
	if(fread(&ehdr, sizeof(Elf32_Ehdr), 1, elf_fp) == 1){
		printf("%d\n",ehdr.e_phoff);
	}
	for(int i=0; i<ehdr.e_shnum;i++){
		if(fread(&shdr, sizeof(Elf32_Shdr), 1, elf_fp) == 1){
			printf("%d\n",shdr.sh_addr);
		}
	}
	

	
}
