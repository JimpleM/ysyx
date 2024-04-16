#include <stdio.h>
#include <inttypes.h>
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
    
    uint64_t t =  ((uint64_t)inl(RTC_ADDR) + (uint64_t)inl(RTC_ADDR+4)<<32);
    printf("%ld",t);
    return 0;
}