// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VRISCV32__DPI_H_
#define VERILATED_VRISCV32__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/jimple/Documents/ysyx/ysyx-workbench/npc/vsrc/riscv_ifu.v:12:30
    extern void get_riscv32_rst(svBit rst_n);
    // DPI import at /home/jimple/Documents/ysyx/ysyx-workbench/npc/vsrc/riscv_ifu.v:10:30
    extern void riscv_pmem_read(int raddr, int* rdata, svLogic ren);
    // DPI import at /home/jimple/Documents/ysyx/ysyx-workbench/npc/vsrc/riscv_lsu.v:73:30
    extern void riscv_pmem_write(int waddr, int wdata, int wmask);
    // DPI import at /home/jimple/Documents/ysyx/ysyx-workbench/npc/vsrc/riscv_gpr_regfile.v:71:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);
    // DPI import at /home/jimple/Documents/ysyx/ysyx-workbench/npc/vsrc/riscv_ifu.v:11:30
    extern void set_pc_ptr(int pc);

#ifdef __cplusplus
}
#endif

#endif  // guard
