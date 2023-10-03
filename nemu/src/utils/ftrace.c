#include <utils.h>
#include <common.h>
#include <elf.h>

FILE *elf_fp = NULL;

void init_ftrace(const char *elf_file){
	elf_fp = stdout;
	if (elf_fp != NULL) {
		FILE *fp = fopen(elf_file, "r");
		Assert(fp, "Can not open '%s'", elf_file);
		elf_fp = fp;
	}
	Log("ELF is read from %s", elf_file ? elf_file : "stdout");

	uint8_t buffer[1024] = {0};
	Elf32_Ehdr ehdr = {0};      // ELF文件信息头
	// const Elf32_Phdr* pPhdr = (const Elf32_Phdr *) buffer;
	// const Elf32_Shdr* pShdr = (const Elf32_Shdr *) buffer;

	if(fread(&ehdr, sizeof(Elf32_Ehdr), 1, elf_fp) == 1){
		printf("%d\n",ehdr.e_phoff);
	}

	if(fread(&buffer, sizeof(Elf32_Phdr), 1, elf_fp) == 1){
		printf("%s\n",buffer);
	}

	
}
