// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "Vtop.h"
#include "Vtop__Syms.h"
#include "verilated_dpi.h"


void Vtop::publicSetBool(svBit in_bool) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::publicSetBool\n"); );
    // Init
    CData/*0:0*/ in_bool__Vcvt;
    in_bool__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("publicSetBool");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_publicSetBool_t __Vcb = (Vtop__Vcb_publicSetBool_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    in_bool__Vcvt = (1U & in_bool);
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()), in_bool__Vcvt);
}
