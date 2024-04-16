#include <stdio.h>
#include <string.h>

typedef unsigned int		uintptr_t;
#define NR_REGS 32
struct Context {
  // TODO: fix the order of these members to match trap.S
  // uintptr_t gpr[NR_REGS], mcause, mstatus, mepc;
  void *pdir;
};
#define STACK_SIZE (4096 * 8)
typedef union {
  uint8_t stack[STACK_SIZE];
  struct { Context *cp; };
} PCB;
static PCB pcb[2];
int main(){
    printf("%x %x\n",(unsigned int)pcb[0].stack,(unsigned int)&pcb[0] + 1);
    return 0;
}