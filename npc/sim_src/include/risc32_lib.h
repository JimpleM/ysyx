#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "difftest.h"
#include "config.h"
#include "common.h"
#include "debug.h"
#include "Vriscv32.h"
#include "Vriscv32__Dpi.h"




typedef struct{
    uint32_t gpr[32];
    uint32_t pc;
}CPU_state;



void init_npc(int argc, char *argv[]);

//pmem
uint8_t* guest_to_host(paddr_t paddr);
uint32_t pmem_read(uint32_t addr, int len);
void pmem_write(uint32_t addr, uint32_t data, int len);

//reg
void isa_reg_display();
CPU_state package_cpu(uint32_t *gpr, uint32_t pc);
bool isa_difftest_checkregs(CPU_state *ref);