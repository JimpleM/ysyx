// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv32.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vriscv32__Syms.h"
#include "Vriscv32___024root.h"

extern "C" void riscv_pmem_read(int raddr, int* rdata, svLogic ren);

VL_INLINE_OPT void Vriscv32___024root____Vdpiimwrap_riscv32__DOT__riscv_ifu_u0__DOT__riscv_pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata, CData/*0:0*/ ren) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv32___024root____Vdpiimwrap_riscv32__DOT__riscv_ifu_u0__DOT__riscv_pmem_read_TOP\n"); );
    // Body
    int raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    int rdata__Vcvt;
    svLogic ren__Vcvt;
    for (size_t ren__Vidx = 0; ren__Vidx < 1; ++ren__Vidx) ren__Vcvt = ren;
    riscv_pmem_read(raddr__Vcvt, &rdata__Vcvt, ren__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void riscv_pmem_write(int waddr, int wdata, int wmask);

VL_INLINE_OPT void Vriscv32___024root____Vdpiimwrap_riscv32__DOT__riscv_lsu_u0__DOT__riscv_pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv32___024root____Vdpiimwrap_riscv32__DOT__riscv_lsu_u0__DOT__riscv_pmem_write_TOP\n"); );
    // Body
    int waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    int wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    int wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    riscv_pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv32___024root___dump_triggers__ico(Vriscv32___024root* vlSelf);
#endif  // VL_DEBUG

void Vriscv32___024root___eval_triggers__ico(Vriscv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv32___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vriscv32___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv32___024root___dump_triggers__act(Vriscv32___024root* vlSelf);
#endif  // VL_DEBUG

void Vriscv32___024root___eval_triggers__act(Vriscv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv32___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (vlSelf->__VdfgTmp_h62b6ca21__0 
                                      != vlSelf->__Vtrigrprev__TOP____VdfgTmp_h62b6ca21__0);
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP____VdfgTmp_h62b6ca21__0 
        = vlSelf->__VdfgTmp_h62b6ca21__0;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(0U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vriscv32___024root___dump_triggers__act(vlSelf);
    }
#endif
}
