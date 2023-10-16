#ifndef __ITRACE_H__
#define __ITRACE_H__

#include <inttypes.h>


//disasm
void init_disasm(const char *triple);
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);


#endif

