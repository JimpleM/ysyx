#include "include/risc32_lib.h"
#include "verilated_dpi.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

// uint64_t *cpu_gpr = NULL;
// extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
//   cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
// }