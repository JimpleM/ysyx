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
    // DPI import at /home/jimple/Documents/ysyx/ysyx-workbench/npc/vsrc/riscv_ifu.v:17:30
    extern void riscv_pmem_read(int raddr, int* rdata, svLogic ren);
    // DPI import at /home/jimple/Documents/ysyx/ysyx-workbench/npc/vsrc/riscv_lsu.v:69:30
    extern void riscv_pmem_write(int waddr, int wdata, int wmask);

#ifdef __cplusplus
}
#endif

#endif  // guard
