// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060077_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_23060077_top___024root.h"

void Vysyx_23060077_top___024root____Vdpiimwrap_ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__get_riscv32_rst_TOP(CData/*0:0*/ rst_n);

VL_INLINE_OPT void Vysyx_23060077_top___024root___ico_sequent__TOP__0(Vysyx_23060077_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077_top___024root___ico_sequent__TOP__0\n"); );
    // Body
    Vysyx_23060077_top___024root____Vdpiimwrap_ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__get_riscv32_rst_TOP(vlSelf->rst_n);
}

void Vysyx_23060077_top___024root___eval_ico(Vysyx_23060077_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077_top___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vysyx_23060077_top___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vysyx_23060077_top___024root___eval_act(Vysyx_23060077_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077_top___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*5:0*/, 512> Vysyx_23060077_top__ConstPool__TABLE_h405c7660_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vysyx_23060077_top__ConstPool__TABLE_hb12ea2fc_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vysyx_23060077_top__ConstPool__TABLE_hceb771da_0;
void Vysyx_23060077_top___024root____Vdpiimwrap_ysyx_23060077_top__DOT__set_pc_ptr_TOP(IData/*31:0*/ pc, CData/*0:0*/ valid);
extern const VlUnpacked<CData/*1:0*/, 128> Vysyx_23060077_top__ConstPool__TABLE_he62748b3_0;
void Vysyx_23060077_top___024root____Vdpiimwrap_ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__riscv_uart_write_TOP(IData/*31:0*/ wdata, CData/*0:0*/ wen);
void Vysyx_23060077_top___024root____Vdpiimwrap_ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__riscv_pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata, CData/*0:0*/ ren);
void Vysyx_23060077_top___024root____Vdpiimwrap_ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__riscv_pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ wmask, CData/*0:0*/ wen);

VL_INLINE_OPT void Vysyx_23060077_top___024root___nba_sequent__TOP__0(Vysyx_23060077_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*8:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    IData/*31:0*/ __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc;
    __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc = 0;
    CData/*0:0*/ __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i;
    __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i = 0;
    IData/*31:0*/ __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r;
    __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r = 0;
    CData/*4:0*/ __Vdlyvdim0__ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr__v0;
    __Vdlyvdim0__ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr__v0;
    __Vdlyvval__ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr__v0;
    __Vdlyvset__ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg__v0;
    __Vdlyvval__ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg__v1;
    __Vdlyvval__ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg__v1 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg__v2;
    __Vdlyvval__ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg__v2 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg__v3;
    __Vdlyvval__ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg__v3 = 0;
    CData/*1:0*/ __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state;
    __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state = 0;
    CData/*5:0*/ __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__lfsr_out;
    __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__lfsr_out = 0;
    CData/*2:0*/ __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state;
    __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state = 0;
    CData/*1:0*/ __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state;
    __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state = 0;
    CData/*5:0*/ __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__lfsr_out;
    __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__lfsr_out = 0;
    CData/*2:0*/ __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_w_state;
    __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_w_state = 0;
    CData/*1:0*/ __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_r_state;
    __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_r_state = 0;
    CData/*5:0*/ __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__lfsr_out;
    __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__lfsr_out = 0;
    CData/*2:0*/ __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__uart_w_state;
    __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__uart_w_state = 0;
    // Body
    __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__lfsr_out 
        = vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__lfsr_out;
    __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__lfsr_out 
        = vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__lfsr_out;
    __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__lfsr_out 
        = vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__lfsr_out;
    __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_r_state 
        = vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_r_state;
    __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__uart_w_state 
        = vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__uart_w_state;
    __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_w_state 
        = vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_w_state;
    __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r 
        = vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r;
    __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state 
        = vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state;
    __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state 
        = vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state;
    __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state 
        = vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state;
    __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i 
        = vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i;
    __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc 
        = vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc;
    __Vdlyvset__ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr__v0 = 0U;
    __Vtableidx3 = (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__lfsr_out) 
                     << 3U) | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_sram_r_ready_i) 
                                << 2U) | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_sram_b_ready_i) 
                                           << 1U) | (IData)(vlSelf->rst_n))));
    __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__lfsr_out 
        = Vysyx_23060077_top__ConstPool__TABLE_h405c7660_0
        [__Vtableidx3];
    __Vtableidx2 = (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_b_valid_i) 
                     << 7U) | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_r_valid_i) 
                                << 6U) | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wen) 
                                           << 5U) | 
                                          (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__ren) 
                                            << 4U) 
                                           | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i) 
                                               << 3U) 
                                              | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->rst_n)))))));
    if (Vysyx_23060077_top__ConstPool__TABLE_hb12ea2fc_0
        [__Vtableidx2]) {
        __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state 
            = Vysyx_23060077_top__ConstPool__TABLE_hceb771da_0
            [__Vtableidx2];
    }
    if (((0U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
          ? (IData)(vlSelf->ysyx_23060077_top__DOT____Vcellinp__riscv_wbu_u0__idu_rd_wen)
          : ((3U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
              ? (IData)(vlSelf->ysyx_23060077_top__DOT____Vcellinp__riscv_wbu_u0__idu_rd_wen)
              : (IData)(vlSelf->ysyx_23060077_top__DOT__lsu_rd_wen)))) {
        __Vdlyvval__ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr__v0 
            = ((0U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_rd))
                ? 0U : ((0U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
                         ? vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__exu_result_r
                         : ((3U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
                             ? ((IData)(vlSelf->rst_n)
                                 ? ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_en)
                                     ? vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                                    [(0xfffU & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)]
                                     : 0U) : 0U) : 
                            ((2U & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
                              ? 0U : ((1U & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
                                       ? ((0x4000U 
                                           & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                           ? ((0x2000U 
                                               & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                               ? 0U
                                               : ((0x1000U 
                                                   & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                                   ? (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____VdfgTmp_h56d28e90__0)
                                                   : (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____VdfgTmp_h56d2889a__0)))
                                           : ((0x2000U 
                                               & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                               ? ((0x1000U 
                                                   & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state))
                                                    ? vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_r_data_i
                                                    : 0U))
                                               : ((0x1000U 
                                                   & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                                   ? 
                                                  (((- (IData)(
                                                               ((2U 
                                                                 == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state)) 
                                                                & (vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_r_data_i 
                                                                   >> 0xfU)))) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____VdfgTmp_h56d28e90__0))
                                                   : 
                                                  (((- (IData)(
                                                               ((2U 
                                                                 == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state)) 
                                                                & (vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_r_data_i 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____VdfgTmp_h56d2889a__0)))))
                                       : 0U)))));
        __Vdlyvset__ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr__v0 = 1U;
        __Vdlyvdim0__ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr__v0 
            = vlSelf->ysyx_23060077_top__DOT__idu_rd;
    }
    __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__stall)
            ? vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r
            : ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_ready_o)
                ? vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc
                : vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r));
    if (vlSelf->rst_n) {
        __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__lfsr_out 
            = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_uart_b_ready_i)
                ? (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__lfsr_out)
                : 1U);
        __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__lfsr_out 
            = (((4U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state)) 
                | (3U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state)))
                ? (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__lfsr_out)
                : ((0x3eU & ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__lfsr_out) 
                             << 1U)) | (1U & VL_REDXOR_8(
                                                         (0x19U 
                                                          & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__lfsr_out))))));
        __Vdlyvval__ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg__v1 
            = (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_en) 
                & (0x305U == (0xfffU & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)))
                ? vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_data_r
                : vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
               [0x305U]);
        if (vlSelf->ysyx_23060077_top__DOT__csr_ecall) {
            __Vdlyvval__ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg__v3 = 0xbU;
            __Vdlyvval__ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg__v0 
                = (0x1800U | vlSelf->ysyx_23060077_top__DOT__csr_mstatus);
            __Vdlyvval__ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg__v2 
                = vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r;
            vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__mepc_inst_r 
                = vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r;
        } else {
            __Vdlyvval__ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg__v3 
                = (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_en) 
                    & (0x342U == (0xfffU & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)))
                    ? vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_data_r
                    : vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                   [0x342U]);
            __Vdlyvval__ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg__v0 
                = ((IData)(vlSelf->ysyx_23060077_top__DOT__csr_mret)
                    ? (0xffffe7ffU & vlSelf->ysyx_23060077_top__DOT__csr_mstatus)
                    : (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_en) 
                        & (0x300U == (0xfffU & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)))
                        ? vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_data_r
                        : vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                       [0x300U]));
            __Vdlyvval__ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg__v2 
                = (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_en) 
                    & (0x341U == (0xfffU & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)))
                    ? vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_data_r
                    : vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                   [0x341U]);
            vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__mepc_inst_r 
                = vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__mepc_inst_r;
        }
        if ((2U & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state))) {
            if ((1U & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state))) {
                if (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__r_delay_cnt) 
                     < (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__lfsr_out))) {
                    vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__r_delay_cnt 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__r_delay_cnt)));
                } else {
                    vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__r_delay_cnt = 0U;
                    __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state 
                        = vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state_nxt;
                }
            } else if (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_r_ready_o) 
                        & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_r_valid_i))) {
                vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state_nxt = 0U;
                __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state = 3U;
            }
        } else if ((1U & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state))) {
            if (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_ar_valid_o) 
                 & ((0xa00003f8U != vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_r_addr_o) 
                    & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_ar_ready_o_r)))) {
                vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state_nxt = 2U;
                __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state = 3U;
            }
        } else if ((1U & ((1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state))
                           ? (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i)
                           : ((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state))
                               ? (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__ren)
                               : 0U)))) {
            vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state_nxt = 1U;
            __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state = 3U;
        }
        if ((4U & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state))) {
            if ((2U & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state))) {
                __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state = 0U;
            } else if ((1U & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state))) {
                __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state = 0U;
            } else if (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__w_delay_cnt) 
                        < (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__lfsr_out))) {
                vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__w_delay_cnt 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__w_delay_cnt)));
            } else {
                vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__w_delay_cnt = 0U;
                __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state 
                    = vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state_nxt;
            }
        } else if ((2U & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state))) {
            if ((1U & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state))) {
                if (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_b_ready_o) 
                     & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_b_valid_i))) {
                    __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state = 0U;
                }
            } else if (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_w_valid_o) 
                        & ((0xa00003f8U == vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_w_addr_o)
                            ? (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__axi_uart_w_ready_o_r)
                            : (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_w_ready_o_r)))) {
                vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state_nxt = 3U;
                __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state = 4U;
            }
        } else if ((1U & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state))) {
            if (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_aw_valid_o) 
                 & ((0xa00003f8U == vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_w_addr_o)
                     ? (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__axi_uart_aw_ready_o_r)
                     : (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_aw_ready_o_r)))) {
                vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state_nxt = 2U;
                __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state = 4U;
            }
        } else if (((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state)) 
                    & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wen))) {
            vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state_nxt = 1U;
            __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state = 4U;
        }
        if (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_ready_o) {
            __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc 
                = vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc;
            __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i = 0U;
        } else if (((IData)(vlSelf->ysyx_23060077_top__DOT__stall) 
                    | (IData)(vlSelf->ysyx_23060077_top__DOT__lsu_rd_wen))) {
            __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc 
                = vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc;
        } else if (((IData)(vlSelf->ysyx_23060077_top__DOT__csr_mret) 
                    | ((IData)(vlSelf->ysyx_23060077_top__DOT__csr_ecall) 
                       | ((IData)(vlSelf->ysyx_23060077_top__DOT____VdfgTmp_h15124160__0) 
                          | (0x67U == (0x7fU & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)))))) {
            __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc 
                = ((IData)(vlSelf->ysyx_23060077_top__DOT__csr_mret)
                    ? vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                   [0x341U] : ((IData)(vlSelf->ysyx_23060077_top__DOT__csr_ecall)
                                ? vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                               [0x305U] : ((IData)(vlSelf->ysyx_23060077_top__DOT____VdfgTmp_h15124160__0)
                                            ? (vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r 
                                               + vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r)
                                            : ((0x67U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r))
                                                ? vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__raddr
                                                : 0U))));
            __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i = 1U;
        } else if (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i) {
            __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc 
                = vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc;
        } else {
            __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc 
                = ((IData)(4U) + vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc);
            __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i = 1U;
        }
    } else {
        __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__lfsr_out = 1U;
        __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__lfsr_out = 1U;
        __Vdlyvval__ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg__v1 = 0U;
        __Vdlyvval__ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg__v3 = 0U;
        __Vdlyvval__ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg__v0 = 0U;
        __Vdlyvval__ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg__v2 = 0U;
        __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__mepc_inst_r = 0U;
        __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state_nxt = 0U;
        __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc = 0x80000000U;
        __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i = 1U;
    }
    vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__stall)
            ? vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r
            : ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_ready_o)
                ? ((1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state))
                    ? vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_r_data_i
                    : 0U) : vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r));
    vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state 
        = __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state;
    vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__lfsr_out 
        = __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__lfsr_out;
    vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state 
        = __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state;
    vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r 
        = __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r;
    vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc 
        = __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc;
    vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg[0x300U] 
        = __Vdlyvval__ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg__v0;
    vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg[0x305U] 
        = __Vdlyvval__ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg__v1;
    vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg[0x341U] 
        = __Vdlyvval__ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg__v2;
    vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg[0x342U] 
        = __Vdlyvval__ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg__v3;
    if (__Vdlyvset__ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr__v0) {
        vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[__Vdlyvdim0__ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr__v0] 
            = __Vdlyvval__ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr__v0;
    }
    vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state 
        = __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state;
    vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_ar_valid_o 
        = (1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state));
    vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_r_ready_o 
        = (2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state));
    vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_aw_valid_o 
        = (1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state));
    vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_w_valid_o 
        = (2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state));
    vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_b_ready_o 
        = (3U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state));
    if (vlSelf->rst_n) {
        if (vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_uart_aw_valid_i) {
            vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__w_addr 
                = vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_uart_aw_addr_i;
        }
        if (vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_uart_w_valid_i) {
            vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__w_data 
                = vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_uart_w_data_i;
        }
        if (vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_sram_ar_valid_i) {
            vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__r_addr 
                = vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_sram_ar_addr_i;
        }
        if (vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_sram_aw_valid_i) {
            vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_addr 
                = vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_sram_aw_addr_i;
        }
        if (vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_sram_w_valid_i) {
            vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_mask 
                = ((0xfffffff8U & vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_mask) 
                   | (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_sram_w_strb_i));
            vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_data 
                = vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_sram_w_data_i;
        }
        if (vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_ar_ready_o_r) {
            vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_r_data_o_r 
                = vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__r_data;
        }
        if (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__lsu_rd_wen_r) {
            vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__ren = 0U;
        } else if (((1U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt)) 
                    & (~ (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i)))) {
            vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__ren = 1U;
        }
        if (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__lsu_rd_wen_w) {
            vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wen = 0U;
        } else if (((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt)) 
                    & (~ (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i)))) {
            vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wen = 1U;
        }
        if ((4U & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__uart_w_state))) {
            __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__uart_w_state = 0U;
        } else if ((2U & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__uart_w_state))) {
            if ((1U & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__uart_w_state))) {
                vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__axi_uart_b_valid_o_r = 0U;
                __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__uart_w_state = 0U;
            } else {
                vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__axi_uart_w_ready_o_r = 0U;
                if (vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_uart_b_ready_i) {
                    if (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__w_delay_cnt) 
                         < (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__lfsr_out))) {
                        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__w_delay_cnt 
                            = (0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__w_delay_cnt)));
                    } else {
                        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__w_delay_cnt = 0U;
                        __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__uart_w_state = 3U;
                        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__axi_uart_b_valid_o_r = 1U;
                    }
                }
            }
        } else if ((1U & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__uart_w_state))) {
            vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__axi_uart_aw_ready_o_r = 0U;
            if (vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_uart_w_valid_i) {
                __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__uart_w_state = 2U;
                vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__axi_uart_w_ready_o_r = 1U;
            }
        } else if (vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_uart_aw_valid_i) {
            __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__uart_w_state = 1U;
            vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__axi_uart_aw_ready_o_r = 1U;
        }
        if ((4U & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_w_state))) {
            __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_w_state = 0U;
        } else if ((2U & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_w_state))) {
            if ((1U & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_w_state))) {
                vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_b_valid_o_r = 0U;
                __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_w_state = 0U;
            } else {
                vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_w_ready_o_r = 0U;
                if (vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_sram_b_ready_i) {
                    if (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_delay_cnt) 
                         < (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__lfsr_out))) {
                        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_delay_cnt 
                            = (0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_delay_cnt)));
                    } else {
                        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_delay_cnt = 0U;
                        __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_w_state = 3U;
                        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_b_valid_o_r = 1U;
                    }
                }
            }
        } else if ((1U & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_w_state))) {
            vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_aw_ready_o_r = 0U;
            if (vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_sram_w_valid_i) {
                __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_w_state = 2U;
                vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_w_ready_o_r = 1U;
            }
        } else if (vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_sram_aw_valid_i) {
            __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_w_state = 1U;
            vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_aw_ready_o_r = 1U;
        }
    } else {
        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__w_addr = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__w_data = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__r_addr = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_addr = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_mask = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_data = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_r_data_o_r = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__ren = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wen = 0U;
        __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__uart_w_state = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__axi_uart_aw_ready_o_r = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__axi_uart_w_ready_o_r = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__axi_uart_b_valid_o_r = 0U;
        __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_w_state = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_aw_ready_o_r = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_w_ready_o_r = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_b_valid_o_r = 0U;
    }
    Vysyx_23060077_top___024root____Vdpiimwrap_ysyx_23060077_top__DOT__set_pc_ptr_TOP(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r, 1U);
    if (vlSelf->rst_n) {
        if ((0U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_r_state))) {
            if (vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_sram_ar_valid_i) {
                __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_r_state = 1U;
                vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_ar_ready_o_r = 1U;
            }
        } else if ((1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_r_state))) {
            vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_ar_ready_o_r = 0U;
            if (vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_sram_r_ready_i) {
                if (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__r_delay_cnt) 
                     < (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__lfsr_out))) {
                    vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__r_delay_cnt 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__r_delay_cnt)));
                } else {
                    vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__r_delay_cnt = 0U;
                    __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_r_state = 2U;
                    vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_r_valid_o_r = 1U;
                }
            }
        } else if ((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_r_state))) {
            __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_r_state = 0U;
            vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_r_valid_o_r = 0U;
        } else {
            __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_r_state = 0U;
        }
    } else {
        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__r_delay_cnt = 0U;
        __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_r_state = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_ar_ready_o_r = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_r_valid_o_r = 0U;
    }
    vlSelf->ysyx_23060077_top__DOT__csr_mstatus = vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
        [0x300U];
    vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_en 
        = ((0x73U == (0x7fU & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)) 
           & (0U != (7U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                           >> 0xcU))));
    vlSelf->ysyx_23060077_top__DOT____VdfgTmp_h05e9e7e0__0 
        = (IData)((0x73U == (0x707fU & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)));
    vlSelf->__Vtableidx1 = (0x7fU & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r);
    vlSelf->ysyx_23060077_top__DOT__idu_src_sel = Vysyx_23060077_top__ConstPool__TABLE_he62748b3_0
        [vlSelf->__Vtableidx1];
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI 
        = (((- (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                >> 0x14U));
    if ((0x40U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)) {
        if ((0x20U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)) {
            if ((0x10U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)) {
                if ((8U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)) {
                    vlSelf->ysyx_23060077_top__DOT__idu_rd 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077_top__DOT__idu_rs2 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
                    vlSelf->ysyx_23060077_top__DOT__idu_rs1 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
                } else if ((4U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)) {
                    vlSelf->ysyx_23060077_top__DOT__idu_rd 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077_top__DOT__idu_rs2 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
                    vlSelf->ysyx_23060077_top__DOT__idu_rs1 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
                } else if ((2U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)) {
                    if ((1U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)) {
                        vlSelf->ysyx_23060077_top__DOT__idu_rd 
                            = (0x1fU & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                        >> 7U));
                        vlSelf->ysyx_23060077_top__DOT__idu_rs2 
                            = (0x1fU & 0U);
                        vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0xaU;
                        vlSelf->ysyx_23060077_top__DOT__idu_rs1 
                            = (0x1fU & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                        >> 0xfU));
                        vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r 
                            = vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI;
                    } else {
                        vlSelf->ysyx_23060077_top__DOT__idu_rd 
                            = (0x1fU & 0U);
                        vlSelf->ysyx_23060077_top__DOT__idu_rs2 
                            = (0x1fU & 0U);
                        vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
                        vlSelf->ysyx_23060077_top__DOT__idu_rs1 
                            = (0x1fU & 0U);
                        vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
                    }
                } else {
                    vlSelf->ysyx_23060077_top__DOT__idu_rd 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077_top__DOT__idu_rs2 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
                    vlSelf->ysyx_23060077_top__DOT__idu_rs1 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
                }
            } else if ((8U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)) {
                if ((4U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)) {
                    if ((2U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)) {
                        if ((1U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)) {
                            vlSelf->ysyx_23060077_top__DOT__idu_rd 
                                = (0x1fU & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                            >> 7U));
                            vlSelf->ysyx_23060077_top__DOT__idu_rs2 
                                = (0x1fU & 0U);
                            vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 1U;
                            vlSelf->ysyx_23060077_top__DOT__idu_rs1 
                                = (0x1fU & 0U);
                            vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r 
                                = (((- (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                >> 0x1fU))) 
                                    << 0x15U) | ((0x100000U 
                                                  & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                     >> 0xbU)) 
                                                 | ((0xff000U 
                                                     & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r) 
                                                    | ((0x800U 
                                                        & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                             >> 0x14U))))));
                        } else {
                            vlSelf->ysyx_23060077_top__DOT__idu_rd 
                                = (0x1fU & 0U);
                            vlSelf->ysyx_23060077_top__DOT__idu_rs2 
                                = (0x1fU & 0U);
                            vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
                            vlSelf->ysyx_23060077_top__DOT__idu_rs1 
                                = (0x1fU & 0U);
                            vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
                        }
                    } else {
                        vlSelf->ysyx_23060077_top__DOT__idu_rd 
                            = (0x1fU & 0U);
                        vlSelf->ysyx_23060077_top__DOT__idu_rs2 
                            = (0x1fU & 0U);
                        vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
                        vlSelf->ysyx_23060077_top__DOT__idu_rs1 
                            = (0x1fU & 0U);
                        vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
                    }
                } else {
                    vlSelf->ysyx_23060077_top__DOT__idu_rd 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077_top__DOT__idu_rs2 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
                    vlSelf->ysyx_23060077_top__DOT__idu_rs1 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
                }
            } else if ((4U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)) {
                if ((2U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)) {
                    if ((1U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)) {
                        vlSelf->ysyx_23060077_top__DOT__idu_rd 
                            = (0x1fU & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                        >> 7U));
                        vlSelf->ysyx_23060077_top__DOT__idu_rs2 
                            = (0x1fU & 0U);
                        vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 1U;
                        vlSelf->ysyx_23060077_top__DOT__idu_rs1 
                            = (0x1fU & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                        >> 0xfU));
                        vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r 
                            = vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI;
                    } else {
                        vlSelf->ysyx_23060077_top__DOT__idu_rd 
                            = (0x1fU & 0U);
                        vlSelf->ysyx_23060077_top__DOT__idu_rs2 
                            = (0x1fU & 0U);
                        vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
                        vlSelf->ysyx_23060077_top__DOT__idu_rs1 
                            = (0x1fU & 0U);
                        vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
                    }
                } else {
                    vlSelf->ysyx_23060077_top__DOT__idu_rd 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077_top__DOT__idu_rs2 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
                    vlSelf->ysyx_23060077_top__DOT__idu_rs1 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
                }
            } else {
                vlSelf->ysyx_23060077_top__DOT__idu_rd 
                    = (0x1fU & 0U);
                if ((2U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)) {
                    if ((1U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)) {
                        vlSelf->ysyx_23060077_top__DOT__idu_rs2 
                            = (0x1fU & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                        >> 0x14U));
                        vlSelf->ysyx_23060077_top__DOT__idu_alu_opt 
                            = ((0x4000U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                ? ((0x2000U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                    ? 5U : 4U) : ((0x2000U 
                                                   & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                                   ? 0U
                                                   : 2U));
                        vlSelf->ysyx_23060077_top__DOT__idu_rs1 
                            = (0x1fU & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                        >> 0xfU));
                        vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r 
                            = (((- (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                            >> 0x1fU))) 
                                << 0xdU) | ((0x1000U 
                                             & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                >> 0x13U)) 
                                            | ((0x800U 
                                                & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                        >> 7U))))));
                    } else {
                        vlSelf->ysyx_23060077_top__DOT__idu_rs2 
                            = (0x1fU & 0U);
                        vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
                        vlSelf->ysyx_23060077_top__DOT__idu_rs1 
                            = (0x1fU & 0U);
                        vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
                    }
                } else {
                    vlSelf->ysyx_23060077_top__DOT__idu_rs2 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
                    vlSelf->ysyx_23060077_top__DOT__idu_rs1 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
                }
            }
        } else {
            vlSelf->ysyx_23060077_top__DOT__idu_rd 
                = (0x1fU & 0U);
            vlSelf->ysyx_23060077_top__DOT__idu_rs2 
                = (0x1fU & 0U);
            vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
            vlSelf->ysyx_23060077_top__DOT__idu_rs1 
                = (0x1fU & 0U);
            vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
        }
        vlSelf->ysyx_23060077_top__DOT__idu_rd_wen 
            = (1U & ((vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                      >> 5U) & ((0x10U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                 ? (IData)((3U == (0xfU 
                                                   & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)))
                                 : ((8U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                     ? (IData)((7U 
                                                == 
                                                (7U 
                                                 & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)))
                                     : (IData)((7U 
                                                == 
                                                (7U 
                                                 & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)))))));
    } else if ((0x20U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)) {
        if ((0x10U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)) {
            if ((8U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)) {
                vlSelf->ysyx_23060077_top__DOT__idu_rd 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060077_top__DOT__idu_rs2 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
                vlSelf->ysyx_23060077_top__DOT__idu_rs1 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
            } else if ((4U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)) {
                if ((2U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)) {
                    if ((1U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)) {
                        vlSelf->ysyx_23060077_top__DOT__idu_rd 
                            = (0x1fU & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                        >> 7U));
                        vlSelf->ysyx_23060077_top__DOT__idu_rs2 
                            = (0x1fU & 0U);
                        vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 1U;
                        vlSelf->ysyx_23060077_top__DOT__idu_rs1 
                            = (0x1fU & 0U);
                        vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r 
                            = (0xfffff000U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r);
                    } else {
                        vlSelf->ysyx_23060077_top__DOT__idu_rd 
                            = (0x1fU & 0U);
                        vlSelf->ysyx_23060077_top__DOT__idu_rs2 
                            = (0x1fU & 0U);
                        vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
                        vlSelf->ysyx_23060077_top__DOT__idu_rs1 
                            = (0x1fU & 0U);
                        vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
                    }
                } else {
                    vlSelf->ysyx_23060077_top__DOT__idu_rd 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077_top__DOT__idu_rs2 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
                    vlSelf->ysyx_23060077_top__DOT__idu_rs1 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
                }
            } else {
                if ((2U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)) {
                    if ((1U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)) {
                        vlSelf->ysyx_23060077_top__DOT__idu_rd 
                            = (0x1fU & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                        >> 7U));
                        vlSelf->ysyx_23060077_top__DOT__idu_rs2 
                            = (0x1fU & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                        >> 0x14U));
                        vlSelf->ysyx_23060077_top__DOT__idu_alu_opt 
                            = ((0x4000U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                ? ((0x2000U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                    ? ((0x1000U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                        ? 0xaU : 9U)
                                    : ((0x1000U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                        ? ((0U == (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                   >> 0x19U))
                                            ? 7U : 
                                           ((0x20U 
                                             == (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                 >> 0x19U))
                                             ? 8U : 0U))
                                        : 6U)) : ((0x2000U 
                                                   & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                                    ? 5U
                                                    : 4U)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                                    ? 3U
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                      >> 0x19U))
                                                     ? 1U
                                                     : 
                                                    ((0x20U 
                                                      == 
                                                      (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                       >> 0x19U))
                                                      ? 2U
                                                      : 0U)))));
                        vlSelf->ysyx_23060077_top__DOT__idu_rs1 
                            = (0x1fU & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                        >> 0xfU));
                    } else {
                        vlSelf->ysyx_23060077_top__DOT__idu_rd 
                            = (0x1fU & 0U);
                        vlSelf->ysyx_23060077_top__DOT__idu_rs2 
                            = (0x1fU & 0U);
                        vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
                        vlSelf->ysyx_23060077_top__DOT__idu_rs1 
                            = (0x1fU & 0U);
                    }
                } else {
                    vlSelf->ysyx_23060077_top__DOT__idu_rd 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077_top__DOT__idu_rs2 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
                    vlSelf->ysyx_23060077_top__DOT__idu_rs1 
                        = (0x1fU & 0U);
                }
                vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
            }
        } else {
            vlSelf->ysyx_23060077_top__DOT__idu_rd 
                = (0x1fU & 0U);
            if ((8U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)) {
                vlSelf->ysyx_23060077_top__DOT__idu_rs2 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060077_top__DOT__idu_rs1 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
            } else if ((4U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)) {
                vlSelf->ysyx_23060077_top__DOT__idu_rs2 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060077_top__DOT__idu_rs1 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
            } else if ((2U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)) {
                if ((1U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)) {
                    vlSelf->ysyx_23060077_top__DOT__idu_rs2 
                        = (0x1fU & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                    >> 0x14U));
                    vlSelf->ysyx_23060077_top__DOT__idu_rs1 
                        = (0x1fU & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                    >> 0xfU));
                    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r 
                        = (((- (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                        >> 0x1fU))) 
                            << 0xcU) | ((0xfe0U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                            >> 7U))));
                } else {
                    vlSelf->ysyx_23060077_top__DOT__idu_rs2 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077_top__DOT__idu_rs1 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
                }
            } else {
                vlSelf->ysyx_23060077_top__DOT__idu_rs2 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060077_top__DOT__idu_rs1 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
            }
            vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
        }
        vlSelf->ysyx_23060077_top__DOT__idu_rd_wen 
            = (1U & (IData)(((0x10U == (0x18U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)) 
                             & ((4U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                 ? ((vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                     >> 1U) & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                 : ((vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                     >> 1U) & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)))));
    } else if ((0x10U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)) {
        if ((8U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)) {
            vlSelf->ysyx_23060077_top__DOT__idu_rd 
                = (0x1fU & 0U);
            vlSelf->ysyx_23060077_top__DOT__idu_rs2 
                = (0x1fU & 0U);
            vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
            vlSelf->ysyx_23060077_top__DOT__idu_rs1 
                = (0x1fU & 0U);
            vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
        } else if ((4U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)) {
            if ((2U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)) {
                if ((1U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)) {
                    vlSelf->ysyx_23060077_top__DOT__idu_rd 
                        = (0x1fU & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                    >> 7U));
                    vlSelf->ysyx_23060077_top__DOT__idu_rs2 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 1U;
                    vlSelf->ysyx_23060077_top__DOT__idu_rs1 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r 
                        = (0xfffff000U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r);
                } else {
                    vlSelf->ysyx_23060077_top__DOT__idu_rd 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077_top__DOT__idu_rs2 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
                    vlSelf->ysyx_23060077_top__DOT__idu_rs1 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
                }
            } else {
                vlSelf->ysyx_23060077_top__DOT__idu_rd 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060077_top__DOT__idu_rs2 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
                vlSelf->ysyx_23060077_top__DOT__idu_rs1 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
            }
        } else if ((2U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)) {
            if ((1U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)) {
                vlSelf->ysyx_23060077_top__DOT__idu_rd 
                    = (0x1fU & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                >> 7U));
                vlSelf->ysyx_23060077_top__DOT__idu_rs2 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060077_top__DOT__idu_alu_opt 
                    = ((0x4000U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                        ? ((0x2000U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                            ? ((0x1000U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                ? 0xaU : 9U) : ((0x1000U 
                                                 & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                   >> 0x19U))
                                                  ? 7U
                                                  : 
                                                 ((0x20U 
                                                   == 
                                                   (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                    >> 0x19U))
                                                   ? 8U
                                                   : 0U))
                                                 : 6U))
                        : ((0x2000U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                            ? ((0x1000U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                ? 5U : 2U) : ((0x1000U 
                                               & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                               ? 3U
                                               : 1U)));
                vlSelf->ysyx_23060077_top__DOT__idu_rs1 
                    = (0x1fU & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                >> 0xfU));
                vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r 
                    = vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI;
            } else {
                vlSelf->ysyx_23060077_top__DOT__idu_rd 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060077_top__DOT__idu_rs2 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
                vlSelf->ysyx_23060077_top__DOT__idu_rs1 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
            }
        } else {
            vlSelf->ysyx_23060077_top__DOT__idu_rd 
                = (0x1fU & 0U);
            vlSelf->ysyx_23060077_top__DOT__idu_rs2 
                = (0x1fU & 0U);
            vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
            vlSelf->ysyx_23060077_top__DOT__idu_rs1 
                = (0x1fU & 0U);
            vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
        }
        vlSelf->ysyx_23060077_top__DOT__idu_rd_wen 
            = (1U & ((~ (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                         >> 3U)) & ((4U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                     ? ((vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                         >> 1U) & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                     : ((vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                         >> 1U) & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r))));
    } else {
        if ((8U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)) {
            vlSelf->ysyx_23060077_top__DOT__idu_rd 
                = (0x1fU & 0U);
            vlSelf->ysyx_23060077_top__DOT__idu_rs2 
                = (0x1fU & 0U);
            vlSelf->ysyx_23060077_top__DOT__idu_alu_opt 
                = ((4U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                    ? ((2U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                        ? ((1U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                            ? 0xaU : 0U) : 0U) : 0U);
            vlSelf->ysyx_23060077_top__DOT__idu_rs1 
                = (0x1fU & 0U);
            vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
        } else {
            if ((4U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)) {
                vlSelf->ysyx_23060077_top__DOT__idu_rd 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060077_top__DOT__idu_rs2 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060077_top__DOT__idu_rs1 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
            } else if ((2U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)) {
                if ((1U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)) {
                    vlSelf->ysyx_23060077_top__DOT__idu_rd 
                        = (0x1fU & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                    >> 7U));
                    vlSelf->ysyx_23060077_top__DOT__idu_rs2 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077_top__DOT__idu_rs1 
                        = (0x1fU & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                    >> 0xfU));
                    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r 
                        = vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI;
                } else {
                    vlSelf->ysyx_23060077_top__DOT__idu_rd 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077_top__DOT__idu_rs2 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077_top__DOT__idu_rs1 
                        = (0x1fU & 0U);
                    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
                }
            } else {
                vlSelf->ysyx_23060077_top__DOT__idu_rd 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060077_top__DOT__idu_rs2 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060077_top__DOT__idu_rs1 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r = 0U;
            }
            vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = 0U;
        }
        vlSelf->ysyx_23060077_top__DOT__idu_rd_wen 
            = (1U & (IData)((3U == (0xfU & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r))));
    }
    vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i 
        = __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i;
    vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt = (
                                                   (3U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r))
                                                    ? 1U
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r))
                                                     ? 2U
                                                     : 
                                                    ((0x73U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r))
                                                      ? 3U
                                                      : 0U)));
    vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__uart_w_state 
        = __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__uart_w_state;
    vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__lfsr_out 
        = __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__lfsr_out;
    vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_w_state 
        = __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_w_state;
    vlSelf->ysyx_23060077_top__DOT__csr_mret = ((IData)(vlSelf->ysyx_23060077_top__DOT____VdfgTmp_h05e9e7e0__0) 
                                                & (0x302U 
                                                   == 
                                                   (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                    >> 0x14U)));
    vlSelf->ysyx_23060077_top__DOT__csr_ecall = ((IData)(vlSelf->ysyx_23060077_top__DOT____VdfgTmp_h05e9e7e0__0) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                     >> 0x14U)));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wdata 
        = vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr
        [vlSelf->ysyx_23060077_top__DOT__idu_rs2];
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag 
        = ((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt)) 
           | ((4U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt)) 
              | (5U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt))));
    vlSelf->ysyx_23060077_top__DOT__src1 = vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr
        [vlSelf->ysyx_23060077_top__DOT__idu_rs1];
    vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_r_state 
        = __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_r_state;
    vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__lfsr_out 
        = __Vdly__ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__lfsr_out;
    vlSelf->ysyx_23060077_top__DOT____Vcellinp__riscv_wbu_u0__idu_rd_wen 
        = ((~ (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i)) 
           & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_rd_wen));
    vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_w_strb_o 
        = ((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state))
            ? ((0x10U == (((IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt) 
                           << 3U) | (7U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                           >> 0xcU))))
                ? 1U : ((0x11U == (((IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt) 
                                    << 3U) | (7U & 
                                              (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                               >> 0xcU))))
                         ? 2U : ((0x12U == (((IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt) 
                                             << 3U) 
                                            | (7U & 
                                               (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                >> 0xcU))))
                                  ? 4U : 0U))) : 0U);
    Vysyx_23060077_top___024root____Vdpiimwrap_ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__riscv_uart_write_TOP(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__w_data, (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__axi_uart_w_ready_o_r));
    vlSelf->ysyx_23060077_top__DOT__wr_csr_data = (
                                                   (0x4000U 
                                                    & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                                    ? 
                                                   (0x1fU 
                                                    & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                       >> 0xfU))
                                                    : vlSelf->ysyx_23060077_top__DOT__src1);
    if ((2U & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_src_sel))) {
        vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_a_data 
            = vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r;
        vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_b_data 
            = ((1U & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_src_sel))
                ? vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r
                : 4U);
    } else {
        vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_a_data 
            = vlSelf->ysyx_23060077_top__DOT__src1;
        vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_b_data 
            = ((1U & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_src_sel))
                ? vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r
                : vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wdata);
    }
    vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__temp 
        = vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
        [(0xfffU & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)];
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__raddr 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r 
           + vlSelf->ysyx_23060077_top__DOT__src1);
    vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_w_data_o 
        = ((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state))
            ? vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wdata
            : 0U);
    Vysyx_23060077_top___024root____Vdpiimwrap_ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__riscv_pmem_read_TOP(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__r_addr, vlSelf->__Vtask_ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__riscv_pmem_read__4__rdata, (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_ar_ready_o_r));
    vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__r_data 
        = vlSelf->__Vtask_ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__riscv_pmem_read__4__rdata;
    Vysyx_23060077_top___024root____Vdpiimwrap_ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__riscv_pmem_write_TOP(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_addr, vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_data, vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_mask, (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_w_ready_o_r));
    vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_data_r 
        = ((1U == (3U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                         >> 0xcU))) ? vlSelf->ysyx_23060077_top__DOT__wr_csr_data
            : ((2U == (3U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                             >> 0xcU))) ? (vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__temp 
                                           | vlSelf->ysyx_23060077_top__DOT__wr_csr_data)
                : ((~ vlSelf->ysyx_23060077_top__DOT__wr_csr_data) 
                   & vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__temp)));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t 
        = (0x1ffffffffULL & ((((QData)((IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_b_data 
                                                >> 0x1fU))) 
                               << 0x20U) | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_b_data))) 
                             ^ (- (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag)))));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
        = (0x1ffffffffULL & ((((QData)((IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_a_data 
                                                >> 0x1fU))) 
                               << 0x20U) | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_a_data))) 
                             + (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t 
                                + (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag)))));
    vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_w_addr_o 
        = ((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state))
            ? vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__raddr
            : 0U);
    if ((0xa00003f8U == vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_w_addr_o)) {
        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_uart_aw_addr_i 
            = vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_w_addr_o;
        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_sram_aw_addr_i = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_uart_w_data_i 
            = vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_w_data_o;
        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_uart_w_strb_i 
            = vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_w_strb_o;
        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_sram_w_strb_i = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_sram_w_data_i = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_b_resp_i 
            = vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_uart_b_resp_o;
        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_b_valid_i 
            = vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__axi_uart_b_valid_o_r;
        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_uart_w_valid_i 
            = (2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state));
    } else {
        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_uart_aw_addr_i = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_sram_aw_addr_i 
            = vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_w_addr_o;
        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_uart_w_data_i = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_uart_w_strb_i = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_sram_w_strb_i 
            = vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_w_strb_o;
        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_sram_w_data_i 
            = vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_w_data_o;
        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_b_resp_i 
            = vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_sram_b_resp_o;
        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_b_valid_i 
            = vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_b_valid_o_r;
        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_uart_w_valid_i = 0U;
    }
    vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_sram_w_valid_i 
        = ((0xa00003f8U != vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_w_addr_o) 
           & ((0x80000000U == (0xf0000000U & vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_w_addr_o))
               ? (2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state))
               : (2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state))));
    vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_sram_aw_valid_i 
        = ((0xa00003f8U != vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_w_addr_o) 
           & ((0x80000000U == (0xf0000000U & vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_w_addr_o))
               ? (1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state))
               : (1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state))));
    vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_uart_aw_valid_i 
        = ((0xa00003f8U == vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_w_addr_o) 
           & (1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state)));
    vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_uart_b_ready_i 
        = ((0xa00003f8U == vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_w_addr_o) 
           & (3U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state)));
    vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_sram_b_ready_i 
        = ((0xa00003f8U != vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_w_addr_o) 
           & ((0x80000000U == (0xf0000000U & vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_w_addr_o))
               ? (3U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state))
               : (3U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state))));
    vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_r_addr_o 
        = ((1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state))
            ? vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc
            : vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_w_addr_o);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_out_data_r 
        = ((8U & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt))
            ? ((4U & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt))
                ? 0U : ((2U & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt))
                         ? ((1U & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt))
                             ? (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out)
                             : (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_a_data 
                                & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_b_data))
                         : ((1U & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt))
                             ? (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_a_data 
                                | vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_b_data)
                             : (IData)(((((QData)((IData)(
                                                          (- (IData)(
                                                                     (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_a_data 
                                                                      >> 0x1fU))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_a_data))) 
                                        >> (0x3fU & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_b_data))))))
            : ((4U & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt))
                ? ((2U & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt))
                    ? ((1U & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt))
                        ? ((0x1fU >= (0x3fU & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_b_data))
                            ? (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_a_data 
                               >> (0x3fU & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_b_data))
                            : 0U) : (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_a_data 
                                     ^ vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_b_data))
                    : ((1U & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt))
                        ? (1U & ((((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_a_data 
                                    >> 0x1fU) | ((IData)(
                                                         (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t 
                                                          >> 0x20U)) 
                                                 | (IData)(
                                                           (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                                            >> 0x20U)))) 
                                  & (((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_a_data 
                                       >> 0x1fU) | 
                                      ((~ (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t 
                                                   >> 0x20U))) 
                                       | (~ (IData)(
                                                    (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                                     >> 0x20U))))) 
                                     & ((~ (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_a_data 
                                            >> 0x1fU)) 
                                        | (((~ (IData)(
                                                       (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                                        >> 0x20U))) 
                                            | (IData)(
                                                      (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t 
                                                       >> 0x20U))) 
                                           & ((~ (IData)(
                                                         (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t 
                                                          >> 0x20U))) 
                                              | (IData)(
                                                        (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                                         >> 0x20U))))))) 
                                 ^ (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag)))
                        : (1U & (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                         >> 0x20U)))))
                : ((2U & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt))
                    ? ((1U & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt))
                        ? ((0x1fU >= (0x3fU & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_b_data))
                            ? (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_a_data 
                               << (0x3fU & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_b_data))
                            : 0U) : (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out))
                    : ((1U & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt))
                        ? (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out)
                        : 0U))));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__lsu_rd_wen_w 
        = ((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state)) 
           & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_b_valid_i));
    if ((0xa00003f8U == vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_r_addr_o)) {
        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_sram_ar_addr_i = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_r_resp_i = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_r_data_i = 0U;
    } else {
        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_sram_ar_addr_i 
            = vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_r_addr_o;
        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_r_resp_i 
            = vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_sram_r_resp_o;
        vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_r_data_i 
            = vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_r_data_o_r;
    }
    if ((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state))) {
        vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____VdfgTmp_h56d2889a__0 
            = (0xffU & vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_r_data_i);
        vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____VdfgTmp_h56d28e90__0 
            = (0xffffU & vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_r_data_i);
    } else {
        vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____VdfgTmp_h56d2889a__0 = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____VdfgTmp_h56d28e90__0 = 0U;
    }
    vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_sram_ar_valid_i 
        = ((0xa00003f8U != vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_r_addr_o) 
           & ((0x80000000U == (0xf0000000U & vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_r_addr_o))
               ? (1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state))
               : (1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state))));
    vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_sram_r_ready_i 
        = ((0xa00003f8U != vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_r_addr_o) 
           & ((0x80000000U == (0xf0000000U & vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_r_addr_o))
               ? (2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state))
               : (2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state))));
    vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_r_valid_i 
        = ((0xa00003f8U != vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_r_addr_o) 
           & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_r_valid_o_r));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__exu_result_r 
        = ((0x63U == (0x7fU & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r))
            ? ((0x4000U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                ? ((0x2000U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                    ? ((0x1000U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                        ? (1U & (~ vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_out_data_r))
                        : (1U & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_out_data_r))
                    : ((0x1000U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                        ? (1U & (~ vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_out_data_r))
                        : (1U & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_out_data_r)))
                : ((0x2000U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                    ? vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_out_data_r
                    : ((0x1000U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                        ? (0U != vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_out_data_r)
                        : (1U & (~ (IData)((0U != vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_out_data_r)))))))
            : vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_out_data_r);
    vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_ready_o 
        = ((1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state)) 
           & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_r_valid_i));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__lsu_rd_wen_r 
        = ((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state)) 
           & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_r_valid_i));
    vlSelf->ysyx_23060077_top__DOT____VdfgTmp_h15124160__0 
        = (((0U != vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__exu_result_r) 
            & (0x63U == (0x7fU & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r))) 
           | (0x6fU == (0x7fU & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)));
    vlSelf->ysyx_23060077_top__DOT__lsu_rd_wen = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__lsu_rd_wen_r) 
                                                  | (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__lsu_rd_wen_w));
    vlSelf->ysyx_23060077_top__DOT__stall = ((~ (IData)(vlSelf->ysyx_23060077_top__DOT__lsu_rd_wen)) 
                                             & ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__ren) 
                                                | (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wen)));
}

void Vysyx_23060077_top___024root___eval_nba(Vysyx_23060077_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077_top___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_23060077_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vysyx_23060077_top___024root___eval_triggers__ico(Vysyx_23060077_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060077_top___024root___dump_triggers__ico(Vysyx_23060077_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_23060077_top___024root___eval_triggers__act(Vysyx_23060077_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060077_top___024root___dump_triggers__act(Vysyx_23060077_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060077_top___024root___dump_triggers__nba(Vysyx_23060077_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_23060077_top___024root___eval(Vysyx_23060077_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077_top___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vysyx_23060077_top___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vysyx_23060077_top___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/jimple/Documents/ysyx/ysyx-workbench/npc/vsrc/ysyx_23060077_top.v", 2, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vysyx_23060077_top___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vysyx_23060077_top___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vysyx_23060077_top___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/jimple/Documents/ysyx/ysyx-workbench/npc/vsrc/ysyx_23060077_top.v", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vysyx_23060077_top___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vysyx_23060077_top___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/jimple/Documents/ysyx/ysyx-workbench/npc/vsrc/ysyx_23060077_top.v", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vysyx_23060077_top___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vysyx_23060077_top___024root___eval_debug_assertions(Vysyx_23060077_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
}
#endif  // VL_DEBUG
