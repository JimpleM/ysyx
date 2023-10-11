#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


#include "common.h"
#include "debug.h"
#include "Vriscv32.h"
#include "Vriscv32__Dpi.h"

#define DIFFTEST 1

#define PMEM_LEFT  0x80000000
#define PMEM_RIGHT 0x8fffffff
#define PMEM_SIZE   PMEM_RIGHT-PMEM_LEFT+1
#define RESET_VECTOR PMEM_LEFT

typedef struct{
    uint32_t gpr[32];
    uint32_t pc;
}CPU_state;


void init_npc(int argc, char *argv[]);

//pmem
uint8_t* guest_to_host(paddr_t paddr)
uint32_t pmem_read(uint32_t addr, int len);
void pmem_write(uint32_t addr, uint32_t data, int len);