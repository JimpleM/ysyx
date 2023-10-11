#include "include/risc32_lib.h"
#include "verilated_dpi.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

uint32_t cpu_pc;
extern "C" void set_pc_ptr(int pc) {
  cpu_pc = (uint32_t) pc;
}

uint32_t *cpu_gpr = NULL;
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint32_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

void isa_reg_display() {
  printf("------------------------------reg display start ---------------------------\n");
  for(int i=0; i<8; i++){
    printf("%3s : 0x%08x  ",regs[4*i+0],cpu_gpr[4*i+0]);
    printf("%3s : 0x%08x  ",regs[4*i+1],cpu_gpr[4*i+1]);
    printf("%3s : 0x%08x  ",regs[4*i+2],cpu_gpr[4*i+2]);
    printf("%3s : 0x%08x  ",regs[4*i+3],cpu_gpr[4*i+3]);
    printf("\n");
  }
//   printf("$pc : 0x%08x\n",cpu.pc);
//   printf("------------------------------reg display end -----------------------------\n");
}

CPU_state read_dut_regs()
