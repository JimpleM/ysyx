#include <utils.h>
#include <common.h>
#include <elf.h>

FILE *elf_fp = NULL;

static void ReadDataFromFile(void *buffer,uint32_t size, uint32_t n, uint32_t offset, FILE *elf_fp){
	int ret = 0;
	ret = fseek(elf_fp, offset, SEEK_SET);
	assert(ret < 0);
	ret = fread(buffer, size, n, elf_fp);
	assert(ret != n);
}


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
	Elf32_Shdr ShdrSym = {0};   // 符号表头
  	Elf32_Shdr ShdrStr = {0};   // 字符串表头
	// const Elf32_Phdr* pPhdr = (const Elf32_Phdr *) buffer;
	const Elf32_Shdr* pShdr = (const Elf32_Shdr *) buffer;
	// Elf32_Shdr shdr = {0};  
	
	ReadDataFromFile(&ehdr,sizeof(Elf32_Ehdr), 1, 0, elf_fp);
	printf("%d\n",ehdr.e_phoff);

	if(fread(&buffer, sizeof(Elf32_Phdr), ehdr.e_phnum, elf_fp) == ehdr.e_phnum){

	}


	ReadDataFromFile(&buffer,sizeof(Elf32_Shdr), ehdr.e_shnum, ehdr.e_shoff, elf_fp);
	// 查找符号表头并拷贝出来备用
	for (int i = 0; i < ehdr.e_shnum; i++)
	{
		if (pShdr[i].sh_type == SHT_SYMTAB)
		{
			printf("%d\n",pShdr[i].sh_type);
			memcpy(&ShdrSym, &pShdr[i], sizeof(Elf32_Shdr));

			// 查找字符串表头并拷贝出来备用
			if (pShdr[ShdrSym.sh_link].sh_type == SHT_STRTAB)
			{
				memcpy(&ShdrStr, &pShdr[ShdrSym.sh_link], sizeof(Elf32_Shdr));
				// found = 1;
				printf("%d\n",i);
				break;
			}
		}
	}
	

	
}
