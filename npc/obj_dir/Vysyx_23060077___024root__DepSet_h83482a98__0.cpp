// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060077.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_23060077__Syms.h"
#include "Vysyx_23060077___024root.h"

extern "C" void set_pc_ptr(int pc, svBit valid);

VL_INLINE_OPT void Vysyx_23060077___024root____Vdpiimwrap_ysyx_23060077__DOT__set_pc_ptr_TOP(IData/*31:0*/ pc, CData/*0:0*/ valid) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077___024root____Vdpiimwrap_ysyx_23060077__DOT__set_pc_ptr_TOP\n"); );
    // Body
    int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    svBit valid__Vcvt;
    for (size_t valid__Vidx = 0; valid__Vidx < 1; ++valid__Vidx) valid__Vcvt = valid;
    set_pc_ptr(pc__Vcvt, valid__Vcvt);
}

extern "C" void get_riscv32_rst(svBit reset);

VL_INLINE_OPT void Vysyx_23060077___024root____Vdpiimwrap_ysyx_23060077__DOT__ifu_u0__DOT__get_riscv32_rst_TOP(CData/*0:0*/ reset) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077___024root____Vdpiimwrap_ysyx_23060077__DOT__ifu_u0__DOT__get_riscv32_rst_TOP\n"); );
    // Body
    svBit reset__Vcvt;
    for (size_t reset__Vidx = 0; reset__Vidx < 1; ++reset__Vidx) reset__Vcvt = reset;
    get_riscv32_rst(reset__Vcvt);
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_23060077___024root____Vdpiimwrap_ysyx_23060077__DOT__regfile_u0__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<IData/*31:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077___024root____Vdpiimwrap_ysyx_23060077__DOT__regfile_u0__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT32, VLVD_IN, VerilatedVarProps::Packed(), 31, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

extern "C" void set_csr_ptr(const svOpenArrayHandle csr_reg);

VL_INLINE_OPT void Vysyx_23060077___024root____Vdpiimwrap_ysyx_23060077__DOT__csr_u0__DOT__set_csr_ptr__Vdpioc2_TOP(const VlUnpacked<IData/*31:0*/, 4096> &csr_reg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077___024root____Vdpiimwrap_ysyx_23060077__DOT__csr_u0__DOT__set_csr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int csr_reg__Vopenprops__ulims[2] = {4095, 0};
    static const VerilatedVarProps csr_reg__Vopenprops(VLVT_UINT32, VLVD_IN, VerilatedVarProps::Packed(), 31, 0, VerilatedVarProps::Unpacked(), 1, csr_reg__Vopenprops__ulims);
    VerilatedDpiOpenVar csr_reg__Vopenarray (&csr_reg__Vopenprops, &csr_reg);
    set_csr_ptr(&csr_reg__Vopenarray);
}

extern "C" void riscv_pmem_read(int raddr, int* rdata, svLogic ren);

VL_INLINE_OPT void Vysyx_23060077___024root____Vdpiimwrap_ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__riscv_pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata, CData/*0:0*/ ren) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077___024root____Vdpiimwrap_ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__riscv_pmem_read_TOP\n"); );
    // Body
    int raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    int rdata__Vcvt;
    svLogic ren__Vcvt;
    for (size_t ren__Vidx = 0; ren__Vidx < 1; ++ren__Vidx) ren__Vcvt = ren;
    riscv_pmem_read(raddr__Vcvt, &rdata__Vcvt, ren__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void riscv_pmem_write(int waddr, int wdata, int wmask, svLogic wen);

VL_INLINE_OPT void Vysyx_23060077___024root____Vdpiimwrap_ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__riscv_pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ wmask, CData/*0:0*/ wen) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077___024root____Vdpiimwrap_ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_sram__DOT__riscv_pmem_write_TOP\n"); );
    // Body
    int waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    int wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    int wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    svLogic wen__Vcvt;
    for (size_t wen__Vidx = 0; wen__Vidx < 1; ++wen__Vidx) wen__Vcvt = wen;
    riscv_pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt, wen__Vcvt);
}

extern "C" void riscv_uart_write(int wdata, svLogic wen);

VL_INLINE_OPT void Vysyx_23060077___024root____Vdpiimwrap_ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_uart__DOT__riscv_uart_write_TOP(IData/*31:0*/ wdata, CData/*0:0*/ wen) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077___024root____Vdpiimwrap_ysyx_23060077__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_uart__DOT__riscv_uart_write_TOP\n"); );
    // Body
    int wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    svLogic wen__Vcvt;
    for (size_t wen__Vidx = 0; wen__Vidx < 1; ++wen__Vidx) wen__Vcvt = wen;
    riscv_uart_write(wdata__Vcvt, wen__Vcvt);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060077___024root___dump_triggers__ico(Vysyx_23060077___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_23060077___024root___eval_triggers__ico(Vysyx_23060077___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_23060077___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060077___024root___dump_triggers__act(Vysyx_23060077___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_23060077___024root___eval_triggers__act(Vysyx_23060077___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clock)));
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_23060077___024root___dump_triggers__act(vlSelf);
    }
#endif
}
