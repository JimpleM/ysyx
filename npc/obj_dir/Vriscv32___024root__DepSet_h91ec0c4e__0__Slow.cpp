// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv32.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vriscv32__Syms.h"
#include "Vriscv32___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv32___024root___dump_triggers__stl(Vriscv32___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vriscv32___024root___eval_triggers__stl(Vriscv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv32___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
    vlSelf->__VstlTriggered.at(1U) = vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr.neq(vlSelf->__Vtrigrprev__TOP__riscv32__DOT__riscv_regfile_u0__DOT__gpr);
    vlSelf->__VstlTriggered.at(2U) = (vlSelf->riscv32__DOT__src1 
                                      != vlSelf->__Vtrigrprev__TOP__riscv32__DOT__src1);
    vlSelf->__VstlTriggered.at(3U) = ((vlSelf->riscv32__DOT__src1 
                                       != vlSelf->__Vtrigrprev__TOP__riscv32__DOT__src1) 
                                      | (vlSelf->riscv32__DOT__src2 
                                         != vlSelf->__Vtrigrprev__TOP__riscv32__DOT__src2));
    vlSelf->__Vtrigrprev__TOP__riscv32__DOT__riscv_regfile_u0__DOT__gpr.assign(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr);
    vlSelf->__Vtrigrprev__TOP__riscv32__DOT__src1 = vlSelf->riscv32__DOT__src1;
    vlSelf->__Vtrigrprev__TOP__riscv32__DOT__src2 = vlSelf->riscv32__DOT__src2;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.at(1U) = 1U;
        vlSelf->__VstlTriggered.at(2U) = 1U;
        vlSelf->__VstlTriggered.at(3U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vriscv32___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
