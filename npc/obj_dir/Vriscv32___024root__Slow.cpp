// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv32.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vriscv32__Syms.h"
#include "Vriscv32___024root.h"

void Vriscv32___024root___ctor_var_reset(Vriscv32___024root* vlSelf);

Vriscv32___024root::Vriscv32___024root(Vriscv32__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vriscv32___024root___ctor_var_reset(this);
}

void Vriscv32___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vriscv32___024root::~Vriscv32___024root() {
}
