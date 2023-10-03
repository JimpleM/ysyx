#include <utils.h>
#include <common.h>
#include <elf.h>

FILE *elf_fp = NULL;

static void ReadDataFromFile(void *buffer,uint32_t size, uint32_t n, uint32_t offset, FILE *elf_fp){
	int ret = 0;
	ret = fseek(elf_fp, offset, SEEK_SET);
	assert(ret >= 0);
	ret = fread(buffer, size, n, elf_fp);
	assert(ret == n);
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
	Elf32_Ehdr elf_hdr = {0};      // ELF文件信息头
	Elf32_Shdr sym_hdr = {0};   // 符号表头
  	Elf32_Shdr str_hdr = {0};   // 字符串表头
	
	// Read ELF Header
	ReadDataFromFile(&elf_hdr,sizeof(Elf32_Ehdr), 1, 0, elf_fp);

	// Read Section Headers
	ReadDataFromFile(&buffer,sizeof(Elf32_Shdr), elf_hdr.e_shnum, elf_hdr.e_shoff, elf_fp);
	
	const Elf32_Shdr* pShdr = (const Elf32_Shdr *) buffer;
	for (int i = 0; i < elf_hdr.e_shnum; i++){
		// Search for symbol tab
		if (pShdr[i].sh_type == SHT_SYMTAB){
			memcpy(&sym_hdr, &pShdr[i], sizeof(Elf32_Shdr));
		}
		// Search for string tab
		if (pShdr[i].sh_type == SHT_STRTAB){
			memcpy(&str_hdr, &pShdr[i], sizeof(Elf32_Shdr));
			break;	// don't found shshtrtab
		}
	}
	// Read symtab
	int number = sym_hdr.sh_size/sizeof(Elf32_Sym);
	ReadDataFromFile(&buffer, sizeof(Elf32_Sym), number, sym_hdr.sh_offset, elf_fp);
	const Elf32_Sym* pSym = (const Elf32_Sym *) buffer;
	for(int i=0; i<number; i++){
		// if(pSym[i].st_info)
		printf("%x %x\n",pSym[i].st_value,pSym[i].st_info);
	}
	// STT_FUNC
}
