#include <utils.h>
#include <common.h>
#include <elf.h>

#define SYM_NUM	50
int sym_cnt = 0;
Elf32_Sym symbol[SYM_NUM] = {0};

FILE *elf_fp = NULL;

static void ReadDataFromFile(void *buffer,uint32_t size, uint32_t n, uint32_t offset, FILE *elf_fp){
	int ret = 0;
	ret = fseek(elf_fp, offset, SEEK_SET);
	Assert(ret >= 0, "The offset of fseek elf_file is out of range!\n");
	ret = fread(buffer, size, n, elf_fp);
	Assert(ret == n, "The size of fread elf_file is not equal!\n");
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
	Assert(strstr((char *)elf_hdr.e_ident,"ELF")!=NULL,"The type of file is not elf\n");

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
	Assert(sym_hdr.sh_offset != 0, "The symbol header is not found\n");
	Assert(str_hdr.sh_offset != 0, "The string header is not found\n");

	// Read symtab
	int number = sym_hdr.sh_size/sizeof(Elf32_Sym);
	ReadDataFromFile(&buffer, sizeof(Elf32_Sym), number, sym_hdr.sh_offset, elf_fp);
	const Elf32_Sym* pSym = (const Elf32_Sym *) buffer;
	for(int i=0; i<number; i++){
		if((pSym[i].st_info & 0x0f) == STT_FUNC){
			printf("%x %x\n",pSym[i].st_value,pSym[i].st_info);
			memcpy(&symbol[sym_cnt++], &pSym[i], sizeof(Elf32_Sym));
		}
	}
	Assert(sym_cnt < SYM_NUM, "The number of symbol is out of range, please increse the SYM_NUM\n");

	ReadDataFromFile(&buffer, str_hdr.sh_size, 1, str_hdr.sh_offset, elf_fp);
	for(int i=0; i<str_hdr.sh_size; i++){
		if(buffer[i] == '\0'){
			buffer[i] = '\n';
		}
	}
	buffer[str_hdr.sh_size] = '\0';
	printf("%s\n",buffer);
	// STT_FUNC
}
