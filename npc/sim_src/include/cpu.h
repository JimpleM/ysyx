#ifndef __CPU_H__
#define __CPU_H__


#include "common.h"


// cpu
int is_exit_status_bad();
void reset();
void cpu_exec(uint64_t n);

//disasm
void init_disasm(const char *triple);
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);

#endif