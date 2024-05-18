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

extern const VlUnpacked<CData/*0:0*/, 2048> Vysyx_23060077_top__ConstPool__TABLE_he23d5ffb_0;
extern const VlUnpacked<CData/*2:0*/, 2048> Vysyx_23060077_top__ConstPool__TABLE_h628ec700_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vysyx_23060077_top__ConstPool__TABLE_ha6bf8fb0_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vysyx_23060077_top__ConstPool__TABLE_h200589c1_0;
void Vysyx_23060077_top___024root____Vdpiimwrap_ysyx_23060077_top__DOT__set_pc_ptr_TOP(IData/*31:0*/ pc, CData/*0:0*/ valid);
void Vysyx_23060077_top___024root____Vdpiimwrap_ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__riscv_pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata, CData/*0:0*/ ren);
void Vysyx_23060077_top___024root____Vdpiimwrap_ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__riscv_pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ wmask, CData/*0:0*/ wen);

VL_INLINE_OPT void Vysyx_23060077_top___024root___nba_sequent__TOP__0(Vysyx_23060077_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    IData/*31:0*/ __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc;
    __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc = 0;
    CData/*0:0*/ __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i;
    __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i = 0;
    IData/*31:0*/ __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r;
    __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r = 0;
    CData/*2:0*/ __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state;
    __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state = 0;
    CData/*1:0*/ __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state;
    __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state = 0;
    CData/*2:0*/ __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_w_state;
    __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_w_state = 0;
    CData/*1:0*/ __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_r_state;
    __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_r_state = 0;
    CData/*0:0*/ __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_ar_ready_o_r;
    __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_ar_ready_o_r = 0;
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
    // Body
    __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_r_state 
        = vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_r_state;
    __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_w_state 
        = vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_w_state;
    __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_ar_ready_o_r 
        = vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_ar_ready_o_r;
    __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state 
        = vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state;
    __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r 
        = vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r;
    __Vdlyvset__ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr__v0 = 0U;
    __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state 
        = vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state;
    __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc 
        = vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc;
    __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i 
        = vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i;
    __Vtableidx1 = (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__cpu_w_valid_i) 
                     << 0xaU) | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_aw_ready_o_r) 
                                  << 9U) | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__axi_aw_valid_o) 
                                             << 8U) 
                                            | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_w_ready_o_r) 
                                                << 7U) 
                                               | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__axi_w_valid_o) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_b_valid_o_r) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__axi_b_ready_o) 
                                                         << 4U) 
                                                        | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->rst_n)))))))));
    if (Vysyx_23060077_top__ConstPool__TABLE_he23d5ffb_0
        [__Vtableidx1]) {
        __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state 
            = Vysyx_23060077_top__ConstPool__TABLE_h628ec700_0
            [__Vtableidx1];
    }
    if (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_r_valid_o_r) {
        __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r 
            = vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc;
        vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
            = vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_r_data_o_r;
    } else {
        __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r 
            = vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r;
        vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
            = vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r;
    }
    if ((1U & ((0U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
                ? (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out)
                : ((3U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
                    ? (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out)
                    : (IData)(vlSelf->ysyx_23060077_top__DOT__mem_stall))))) {
        __Vdlyvval__ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr__v0 
            = ((0U == (0x1fU & ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                                >> 1U))) ? 0U : ((0U 
                                                  == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
                                                  ? vlSelf->ysyx_23060077_top__DOT__exu_result
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
                                                   ? 
                                                  ((IData)(vlSelf->rst_n)
                                                    ? 
                                                   ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_en)
                                                     ? 
                                                    vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                                                    [
                                                    (0xfffU 
                                                     & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)]
                                                     : 0U)
                                                    : 0U)
                                                   : vlSelf->ysyx_23060077_top__DOT__lsu_result)));
        __Vdlyvset__ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr__v0 = 1U;
        __Vdlyvdim0__ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr__v0 
            = (0x1fU & ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                        >> 1U));
    }
    __Vtableidx2 = (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_r_valid_o_r) 
                     << 7U) | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__axi_r_ready_o) 
                                << 6U) | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_ar_ready_o_r) 
                                           << 5U) | 
                                          (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__axi_ar_valid_o) 
                                            << 4U) 
                                           | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i) 
                                               << 3U) 
                                              | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->rst_n)))))));
    if (vlSelf->rst_n) {
        if (vlSelf->ysyx_23060077_top__DOT__csr_ecall) {
            vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__mepc_inst_r 
                = vlSelf->ysyx_23060077_top__DOT__ifu_inst;
            __Vdlyvval__ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg__v3 = 0xbU;
            __Vdlyvval__ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg__v0 
                = (0x1800U | vlSelf->ysyx_23060077_top__DOT__csr_mstatus);
            __Vdlyvval__ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg__v2 
                = vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r;
        } else {
            vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__mepc_inst_r 
                = vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__mepc_inst_r;
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
        }
        __Vdlyvval__ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg__v1 
            = (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_en) 
                & (0x305U == (0xfffU & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)))
                ? vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_data_r
                : vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
               [0x305U]);
        if (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_r_valid_o_r) {
            __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc 
                = vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc;
            __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i = 0U;
        } else if (((IData)(vlSelf->ysyx_23060077_top__DOT__stall) 
                    | (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i))) {
            __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc 
                = vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc;
        } else if (((IData)(vlSelf->ysyx_23060077_top__DOT__csr_mret) 
                    | ((IData)(vlSelf->ysyx_23060077_top__DOT__csr_ecall) 
                       | ((IData)(vlSelf->ysyx_23060077_top__DOT____VdfgTmp_h15124160__0) 
                          | (0x67U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode)))))) {
            __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc 
                = ((IData)(vlSelf->ysyx_23060077_top__DOT__csr_mret)
                    ? vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                   [0x341U] : ((IData)(vlSelf->ysyx_23060077_top__DOT__csr_ecall)
                                ? vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                               [0x305U] : ((IData)(vlSelf->ysyx_23060077_top__DOT____VdfgTmp_h15124160__0)
                                            ? (vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r 
                                               + vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r)
                                            : ((0x67U 
                                                == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode))
                                                ? vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__raddr
                                                : 0U))));
            __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i = 1U;
        } else {
            __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc 
                = ((IData)(4U) + vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc);
            __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i = 1U;
        }
        vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata_r 
            = ((1U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
                ? vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata_t
                : 0U);
        vlSelf->ysyx_23060077_top__DOT__commit_valid_t 
            = ((~ (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i)) 
               & (IData)(vlSelf->ysyx_23060077_top__DOT__stall));
        vlSelf->ysyx_23060077_top__DOT__commit_pc_t 
            = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i)
                ? 0U : ((IData)(vlSelf->ysyx_23060077_top__DOT__stall)
                         ? vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r
                         : 0U));
        if ((4U & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_w_state))) {
            __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_w_state = 0U;
        } else if ((2U & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_w_state))) {
            if ((1U & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_w_state))) {
                vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_b_valid_o_r = 0U;
                __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_w_state = 0U;
            } else {
                vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_w_ready_o_r = 0U;
                if ((3U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state))) {
                    __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_w_state = 3U;
                    vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_b_valid_o_r = 1U;
                }
            }
        } else if ((1U & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_w_state))) {
            vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_aw_ready_o_r = 0U;
            if ((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state))) {
                __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_w_state = 2U;
                vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_data 
                    = vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__cpu_w_data_i;
                vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_mask 
                    = ((0xfffffff8U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_mask) 
                       | (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__cpu_w_strb_i));
                vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_w_ready_o_r = 1U;
            }
        } else if ((1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state))) {
            __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_w_state = 1U;
            vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_addr 
                = vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__cpu_w_addr_i;
            vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_aw_ready_o_r = 1U;
        }
        if ((0U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_r_state))) {
            if ((1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state))) {
                __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_r_state = 1U;
                vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__r_addr 
                    = vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc;
                __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_ar_ready_o_r = 1U;
            }
        } else if ((1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_r_state))) {
            if (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_ar_ready_o_r) {
                vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_r_data_o_r 
                    = vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__r_data;
            }
            if ((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state))) {
                __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_r_state = 2U;
                vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_r_valid_o_r = 1U;
            }
            __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_ar_ready_o_r = 0U;
        } else if ((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_r_state))) {
            __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_r_state = 0U;
            vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_r_valid_o_r = 0U;
        } else {
            __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_r_state = 0U;
        }
    } else {
        vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__mepc_inst_r = 0U;
        __Vdlyvval__ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg__v1 = 0U;
        __Vdlyvval__ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg__v3 = 0U;
        __Vdlyvval__ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg__v0 = 0U;
        __Vdlyvval__ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg__v2 = 0U;
        __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc = 0x80000000U;
        __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i = 1U;
        vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata_r = 0U;
        vlSelf->ysyx_23060077_top__DOT__commit_pc_t 
            = vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r;
        __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_w_state = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_addr = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_aw_ready_o_r = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_data = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_mask = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_w_ready_o_r = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_b_valid_o_r = 0U;
        __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_r_state = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__r_addr = 0U;
        __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_ar_ready_o_r = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_r_data_o_r = 0U;
    }
    if (Vysyx_23060077_top__ConstPool__TABLE_ha6bf8fb0_0
        [__Vtableidx2]) {
        __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state 
            = Vysyx_23060077_top__ConstPool__TABLE_h200589c1_0
            [__Vtableidx2];
    }
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wen_t 
        = ((IData)(vlSelf->rst_n) & (2U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt)));
    vlSelf->ysyx_23060077_top__DOT__ifu_pc_lst = vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r;
    if (__Vdlyvset__ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr__v0) {
        vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[__Vdlyvdim0__ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr__v0] 
            = __Vdlyvval__ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr__v0;
    }
    vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg[0x300U] 
        = __Vdlyvval__ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg__v0;
    vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg[0x305U] 
        = __Vdlyvval__ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg__v1;
    vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg[0x341U] 
        = __Vdlyvval__ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg__v2;
    vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg[0x342U] 
        = __Vdlyvval__ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg__v3;
    vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r 
        = __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r;
    vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i 
        = __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i;
    vlSelf->ysyx_23060077_top__DOT__csr_mstatus = vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
        [0x300U];
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[0U] 
        = (0xd00000000ULL | (QData)((IData)((0xffffU 
                                             & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata_r))));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[1U] 
        = (0xc00000000ULL | (QData)((IData)((0xffU 
                                             & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata_r))));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[2U] 
        = (0xa00000000ULL | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata_r)));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[3U] 
        = (0x900000000ULL | (QData)((IData)((((- (IData)(
                                                         (1U 
                                                          & (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata_r 
                                                             >> 0xfU)))) 
                                              << 0x10U) 
                                             | (0xffffU 
                                                & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata_r)))));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[4U] 
        = (0x800000000ULL | (QData)((IData)((((- (IData)(
                                                         (1U 
                                                          & (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata_r 
                                                             >> 7U)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata_r)))));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[0U] 
        = (0xffffU & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata_r);
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[1U] 
        = (0xffU & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata_r);
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[2U] 
        = vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata_r;
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[3U] 
        = (((- (IData)((1U & (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata_r 
                              >> 0xfU)))) << 0x10U) 
           | (0xffffU & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata_r));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[4U] 
        = (((- (IData)((1U & (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata_r 
                              >> 7U)))) << 8U) | (0xffU 
                                                  & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata_r));
    Vysyx_23060077_top___024root____Vdpiimwrap_ysyx_23060077_top__DOT__set_pc_ptr_TOP(
                                                                                ((IData)(vlSelf->ysyx_23060077_top__DOT__commit_valid_t)
                                                                                 ? vlSelf->ysyx_23060077_top__DOT__commit_pc_t
                                                                                 : vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r), 
                                                                                ((IData)(vlSelf->ysyx_23060077_top__DOT__commit_valid_t)
                                                                                 ? (IData)(vlSelf->ysyx_23060077_top__DOT__commit_valid_t)
                                                                                 : 
                                                                                (0U 
                                                                                != vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r)));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[1U][0U] 
        = (IData)((4ULL | ((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r)) 
                           << 0x20U)));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[1U][1U] 
        = (IData)(((4ULL | ((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r)) 
                            << 0x20U)) >> 0x20U));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[1U][2U] = 2U;
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[1U] 
        = (4ULL | ((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r)) 
                   << 0x20U));
    if (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i) {
        vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT____VdfgTmp_hdcaab2b0__0 = 0U;
        vlSelf->ysyx_23060077_top__DOT__idu_funct3 = 0U;
        vlSelf->ysyx_23060077_top__DOT__ifu_inst = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____Vcellinp__riscv_id_imm_ext_typeI__imm_in = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__funct7 = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdce6b952__0 = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc59ca0f__0 = 0U;
        vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc3969ba__0 = 0U;
    } else {
        vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT____VdfgTmp_hdcaab2b0__0 
            = (3U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                     >> 0xcU));
        vlSelf->ysyx_23060077_top__DOT__idu_funct3 
            = (7U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                     >> 0xcU));
        vlSelf->ysyx_23060077_top__DOT__ifu_inst = vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r;
        vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____Vcellinp__riscv_id_imm_ext_typeI__imm_in 
            = (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
               >> 0x14U);
        vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__funct7 
            = (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
               >> 0x19U);
        vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode 
            = (0x7fU & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r);
        vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdce6b952__0 
            = (0x1fU & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                        >> 0x14U));
        vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc59ca0f__0 
            = (0x1fU & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                        >> 0xfU));
        vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc3969ba__0 
            = (0x1fU & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                        >> 7U));
    }
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeU 
        = (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i)
             ? 0U : (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                     >> 0xcU)) << 0xcU);
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____VdfgTmp_hdcea48d4__0 
        = ((~ (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i)) 
           & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
              >> 0x1fU));
    vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_w_state 
        = __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_w_state;
    vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state 
        = __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state;
    vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_r_state 
        = __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_r_state;
    vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc 
        = __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc;
    vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state 
        = __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state;
    vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_ar_ready_o_r 
        = __Vdly__ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_ar_ready_o_r;
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI 
        = (((- (IData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____VdfgTmp_hdcea48d4__0))) 
            << 0xcU) | (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____Vcellinp__riscv_id_imm_ext_typeI__imm_in));
    vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_en 
        = ((0x73U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode)) 
           & (0U != (IData)(vlSelf->ysyx_23060077_top__DOT__idu_funct3)));
    vlSelf->ysyx_23060077_top__DOT____VdfgTmp_hfaaa6831__0 
        = ((0x73U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode)) 
           & (0U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_funct3)));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key 
        = (((0x63U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode)) 
            << 3U) | (IData)(vlSelf->ysyx_23060077_top__DOT__idu_funct3));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
                       == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
           == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__hit)
                                                    ? (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__lut_out)
                                                    : 0U);
    vlSelf->ysyx_23060077_top__DOT__idu_alu_opt = (
                                                   (0x40U 
                                                    & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode))
                                                    ? 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode))
                                                          ? 0xaU
                                                          : 0U)
                                                         : 0U)))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode))
                                                          ? 1U
                                                          : 0U)
                                                         : 0U)
                                                        : 0U)
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode))
                                                          ? 1U
                                                          : 0U)
                                                         : 0U)
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode))
                                                          ? 
                                                         ((4U 
                                                           & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_funct3))
                                                           ? 
                                                          ((2U 
                                                            & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_funct3))
                                                            ? 5U
                                                            : 4U)
                                                           : 
                                                          ((2U 
                                                            & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_funct3))
                                                            ? 0U
                                                            : 2U))
                                                          : 0U)
                                                         : 0U))))
                                                     : 0U)
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode))
                                                          ? 1U
                                                          : 0U)
                                                         : 0U)
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode))
                                                          ? 
                                                         ((4U 
                                                           & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_funct3))
                                                           ? 
                                                          ((2U 
                                                            & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_funct3))
                                                            ? 
                                                           ((1U 
                                                             & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_funct3))
                                                             ? 0xaU
                                                             : 9U)
                                                            : 
                                                           ((1U 
                                                             & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_funct3))
                                                             ? 
                                                            ((0U 
                                                              == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__funct7))
                                                              ? 7U
                                                              : 
                                                             ((0x20U 
                                                               == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__funct7))
                                                               ? 8U
                                                               : 0U))
                                                             : 6U))
                                                           : 
                                                          ((2U 
                                                            & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_funct3))
                                                            ? 
                                                           ((1U 
                                                             & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_funct3))
                                                             ? 5U
                                                             : 4U)
                                                            : 
                                                           ((1U 
                                                             & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_funct3))
                                                             ? 3U
                                                             : 
                                                            ((0U 
                                                              == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__funct7))
                                                              ? 1U
                                                              : 
                                                             ((0x20U 
                                                               == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__funct7))
                                                               ? 2U
                                                               : 0U)))))
                                                          : 0U)
                                                         : 0U)))
                                                      : 0U)
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode))
                                                          ? 1U
                                                          : 0U)
                                                         : 0U)
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode))
                                                          ? 
                                                         ((4U 
                                                           & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_funct3))
                                                           ? 
                                                          ((2U 
                                                            & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_funct3))
                                                            ? 
                                                           ((1U 
                                                             & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_funct3))
                                                             ? 0xaU
                                                             : 9U)
                                                            : 
                                                           ((1U 
                                                             & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_funct3))
                                                             ? 
                                                            ((0U 
                                                              == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__funct7))
                                                              ? 7U
                                                              : 
                                                             ((0x20U 
                                                               == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__funct7))
                                                               ? 8U
                                                               : 0U))
                                                             : 6U))
                                                           : 
                                                          ((2U 
                                                            & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_funct3))
                                                            ? 
                                                           ((1U 
                                                             & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_funct3))
                                                             ? 5U
                                                             : 2U)
                                                            : 
                                                           ((1U 
                                                             & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_funct3))
                                                             ? 3U
                                                             : 1U)))
                                                          : 0U)
                                                         : 0U)))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode))
                                                          ? 0xaU
                                                          : 0U)
                                                         : 0U)
                                                        : 0U)
                                                       : 0U))));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
                       == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
           == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                          [3U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                          [4U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
              [4U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
              [4U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                          [5U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
              [5U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
              [5U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                          [6U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
              [6U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
              [6U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                          [7U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
              [7U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
              [7U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                          [8U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
              [8U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
              [8U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                          [9U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
              [9U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
              [9U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                          [0xaU]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
              [0xaU]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
              [0xaU]));
    vlSelf->ysyx_23060077_top__DOT__idu_src_sel = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit)
                                                    ? (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out)
                                                    : 1U);
    vlSelf->__VdfgTmp_h7c9f55bf__0 = (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc59ca0f__0) 
                                       << 0xbU) | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdce6b952__0) 
                                                   << 6U));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[4U] 
        = (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc59ca0f__0) 
            << 0xbU) | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdce6b952__0) 
                        << 6U));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[6U] 
        = (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc59ca0f__0) 
            << 0xbU) | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdce6b952__0) 
                        << 6U));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[8U] 
        = (0x6f0001U | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc3969ba__0) 
                        << 1U));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[9U] 
        = (0x170001U | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc3969ba__0) 
                        << 1U));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[0xaU] 
        = (0x370001U | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc3969ba__0) 
                        << 1U));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[2U] 
        = (0x330001U | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc59ca0f__0) 
                         << 0xbU) | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdce6b952__0) 
                                      << 6U) | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc3969ba__0) 
                                                << 1U))));
    vlSelf->__VdfgTmp_h96487c18__0 = (1U | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc59ca0f__0) 
                                             << 0xbU) 
                                            | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc3969ba__0) 
                                               << 1U)));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[8U] 
        = (1U | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc3969ba__0) 
                 << 1U));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[9U] 
        = (1U | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc3969ba__0) 
                 << 1U));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[0xaU] 
        = (1U | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc3969ba__0) 
                 << 1U));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[0U] 
        = (1U | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc59ca0f__0) 
                  << 0xbU) | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc3969ba__0) 
                              << 1U)));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[3U] 
        = (1U | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc59ca0f__0) 
                  << 0xbU) | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc3969ba__0) 
                              << 1U)));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[5U] 
        = (1U | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc59ca0f__0) 
                  << 0xbU) | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc3969ba__0) 
                              << 1U)));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[7U] 
        = (1U | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc59ca0f__0) 
                  << 0xbU) | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc3969ba__0) 
                              << 1U)));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[2U] 
        = (1U | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc59ca0f__0) 
                  << 0xbU) | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdce6b952__0) 
                               << 6U) | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc3969ba__0) 
                                         << 1U))));
    vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__axi_aw_valid_o 
        = (1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state));
    vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__axi_w_valid_o 
        = (2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state));
    vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__axi_b_ready_o 
        = (3U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state));
    vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__axi_ar_valid_o 
        = (1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state));
    vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__axi_r_ready_o 
        = (2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state));
    Vysyx_23060077_top___024root____Vdpiimwrap_ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__riscv_pmem_read_TOP(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__r_addr, vlSelf->__Vtask_ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__riscv_pmem_read__2__rdata, (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_ar_ready_o_r));
    vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__r_data 
        = vlSelf->__Vtask_ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__riscv_pmem_read__2__rdata;
    Vysyx_23060077_top___024root____Vdpiimwrap_ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__riscv_pmem_write_TOP(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_addr, vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_data, vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_mask, (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_w_ready_o_r));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r 
        = ((0x40U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
            ? ((0x20U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                ? ((0x10U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                    ? ((8U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                        ? 0U : ((4U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                                 ? 0U : ((2U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                                          ? ((1U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                                              ? vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI
                                              : 0U)
                                          : 0U))) : 
                   ((8U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                     ? ((4U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                         ? ((2U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                             ? ((1U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                                 ? (((- (IData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____VdfgTmp_hdcea48d4__0))) 
                                     << 0x15U) | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____VdfgTmp_hdcea48d4__0) 
                                                   << 0x14U) 
                                                  | ((((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i)
                                                        ? 0U
                                                        : 
                                                       (0xffU 
                                                        & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                           >> 0xcU))) 
                                                      << 0xcU) 
                                                     | ((0x800U 
                                                         & (((~ (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i)) 
                                                             << 0xbU) 
                                                            & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                               >> 9U))) 
                                                        | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i)
                                                             ? 0U
                                                             : 
                                                            (0x3ffU 
                                                             & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                                >> 0x15U))) 
                                                           << 1U)))))
                                 : 0U) : 0U) : 0U) : 
                    ((4U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                      ? ((2U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                          ? ((1U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                              ? vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI
                              : 0U) : 0U) : ((2U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                                              ? ((1U 
                                                  & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                                                  ? 
                                                 (((- (IData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____VdfgTmp_hdcea48d4__0))) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____VdfgTmp_hdcea48d4__0) 
                                                      << 0xcU) 
                                                     | ((0x800U 
                                                         & (((~ (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i)) 
                                                             << 0xbU) 
                                                            & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                               << 4U))) 
                                                        | ((((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i)
                                                              ? 0U
                                                              : 
                                                             (0x3fU 
                                                              & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                                 >> 0x19U))) 
                                                            << 5U) 
                                                           | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i)
                                                                ? 0U
                                                                : 
                                                               (0xfU 
                                                                & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                                   >> 8U))) 
                                                              << 1U)))))
                                                  : 0U)
                                              : 0U))))
                : 0U) : ((0x20U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                          ? ((0x10U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                              ? ((8U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                                  ? 0U : ((4U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                                           ? ((2U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                                               ? ((1U 
                                                   & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                                                   ? vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeU
                                                   : 0U)
                                               : 0U)
                                           : 0U)) : 
                             ((8U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                               ? 0U : ((4U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                                        ? 0U : ((2U 
                                                 & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                                                 ? 
                                                ((1U 
                                                  & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                                                  ? 
                                                 (((- (IData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____VdfgTmp_hdcea48d4__0))) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__funct7) 
                                                      << 5U) 
                                                     | (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc3969ba__0)))
                                                  : 0U)
                                                 : 0U))))
                          : ((0x10U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                              ? ((8U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                                  ? 0U : ((4U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                                           ? ((2U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                                               ? ((1U 
                                                   & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                                                   ? vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeU
                                                   : 0U)
                                               : 0U)
                                           : ((2U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                                               ? ((1U 
                                                   & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                                                   ? vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI
                                                   : 0U)
                                               : 0U)))
                              : ((8U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                                  ? 0U : ((4U & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                                           ? 0U : (
                                                   (2U 
                                                    & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->ysyx_23060077_top__DOT__ifu_inst)
                                                     ? vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI
                                                     : 0U)
                                                    : 0U))))));
    vlSelf->ysyx_23060077_top__DOT__csr_mret = ((IData)(vlSelf->ysyx_23060077_top__DOT____VdfgTmp_hfaaa6831__0) 
                                                & (0x302U 
                                                   == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____Vcellinp__riscv_id_imm_ext_typeI__imm_in)));
    vlSelf->ysyx_23060077_top__DOT__csr_ecall = ((IData)(vlSelf->ysyx_23060077_top__DOT____VdfgTmp_hfaaa6831__0) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____Vcellinp__riscv_id_imm_ext_typeI__imm_in)));
    vlSelf->ysyx_23060077_top__DOT__mem_stall = ((1U 
                                                  == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt)) 
                                                 | (2U 
                                                    == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt)));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key 
        = (((IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt) 
            << 3U) | (IData)(vlSelf->ysyx_23060077_top__DOT__idu_funct3));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag 
        = ((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt)) 
           | ((4U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt)) 
              | (5U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt))));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[4U] 
        = (0x230000U | (IData)(vlSelf->__VdfgTmp_h7c9f55bf__0));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[6U] 
        = (0x630000U | (IData)(vlSelf->__VdfgTmp_h7c9f55bf__0));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[0U] 
        = (0x730000U | (IData)(vlSelf->__VdfgTmp_h96487c18__0));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[3U] 
        = (0x130000U | (IData)(vlSelf->__VdfgTmp_h96487c18__0));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[5U] 
        = (0x30000U | (IData)(vlSelf->__VdfgTmp_h96487c18__0));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[7U] 
        = (0x670000U | (IData)(vlSelf->__VdfgTmp_h96487c18__0));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
                       == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
           == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                          [3U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                          [4U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
              [4U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
              [4U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                          [5U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
              [5U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
              [5U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                          [6U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
              [6U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
              [6U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                          [7U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
              [7U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
              [7U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                          [8U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
              [8U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
              [8U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                          [9U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
              [9U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
              [9U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                          [0xaU]))) & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
              [0xaU]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
              [0xaU]));
    vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit)
            ? (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out)
            : 0U);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[0U][0U] 
        = (IData)((((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r)) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r))));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[0U][1U] 
        = (IData)(((((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r)) 
                     << 0x20U) | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r))) 
                   >> 0x20U));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[0U][2U] = 3U;
    vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__temp 
        = vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
        [(0xfffU & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)];
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r)) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)));
    vlSelf->ysyx_23060077_top__DOT__stall = ((IData)(vlSelf->ysyx_23060077_top__DOT__mem_stall) 
                                             & (vlSelf->ysyx_23060077_top__DOT__ifu_pc_lst 
                                                != vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
                       == vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
           == vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list
                          [3U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list
                          [4U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list
              [4U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list
              [4U]));
    vlSelf->ysyx_23060077_top__DOT__lsu_result = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit)
                                                   ? vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out
                                                   : 0U);
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
                       == vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
           == vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__mask 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__hit)
            ? vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__lut_out
            : 0U);
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wdata 
        = vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr
        [(0x1fU & ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                   >> 6U))];
    vlSelf->ysyx_23060077_top__DOT__src1 = vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr
        [(0x1fU & ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                   >> 0xbU))];
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[2U][0U] 
        = (IData)((((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__src1)) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r))));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[2U][1U] 
        = (IData)(((((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__src1)) 
                     << 0x20U) | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r))) 
                   >> 0x20U));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[2U][2U] = 1U;
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[3U][0U] 
        = (IData)((((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__src1)) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wdata))));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[3U][1U] 
        = (IData)(((((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__src1)) 
                     << 0x20U) | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wdata))) 
                   >> 0x20U));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[3U][2U] = 0U;
    vlSelf->ysyx_23060077_top__DOT__wr_csr_data = (
                                                   (1U 
                                                    & ((~ (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i)) 
                                                       & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                          >> 0xeU)))
                                                    ? (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc59ca0f__0)
                                                    : vlSelf->ysyx_23060077_top__DOT__src1);
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__raddr 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r 
           + vlSelf->ysyx_23060077_top__DOT__src1);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__src1)) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__src1)) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wdata)));
    vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_data_r 
        = ((1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT____VdfgTmp_hdcaab2b0__0))
            ? vlSelf->ysyx_23060077_top__DOT__wr_csr_data
            : ((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT____VdfgTmp_hdcaab2b0__0))
                ? (vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__temp 
                   | vlSelf->ysyx_23060077_top__DOT__wr_csr_data)
                : ((~ vlSelf->ysyx_23060077_top__DOT__wr_csr_data) 
                   & vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__temp)));
    Vysyx_23060077_top___024root____Vdpiimwrap_ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__riscv_pmem_read_TOP(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__raddr, vlSelf->__Vtask_ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_pmem_read__5__rdata, 
                                                                                (1U 
                                                                                == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt)));
    vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata_t 
        = vlSelf->__Vtask_ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_pmem_read__5__rdata;
    Vysyx_23060077_top___024root____Vdpiimwrap_ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__riscv_pmem_write_TOP(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__raddr, vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wdata, vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__mask, (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wen_t));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__idu_src_sel) 
                               == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list
                               [0U])))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__idu_src_sel) 
           == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__idu_src_sel) 
                                  == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list
                                  [1U])))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__idu_src_sel) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__idu_src_sel) 
                                  == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list
                                  [2U])))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__idu_src_sel) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__idu_src_sel) 
                                  == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list
                                  [3U])))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__idu_src_sel) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit)
            ? vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out
            : 0ULL);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[1U] 
        = (0xa00000000ULL | (QData)((IData)(((IData)(
                                                     (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                      >> 0x20U)) 
                                             & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[2U] 
        = (0x900000000ULL | (QData)((IData)(((IData)(
                                                     (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                      >> 0x20U)) 
                                             | (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[3U] 
        = (0x800000000ULL | (QData)((IData)(((((QData)((IData)(
                                                               (- (IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                                                >> 0x3fU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                                 >> 0x20U)))) 
                                             >> (0x3fU 
                                                 & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out))))));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[4U] 
        = (0x700000000ULL | (QData)((IData)(((0x1fU 
                                              >= (0x3fU 
                                                  & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
                                              ? ((IData)(
                                                         (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                          >> 0x20U)) 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
                                              : 0U))));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[5U] 
        = (0x600000000ULL | (QData)((IData)(((IData)(
                                                     (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                      >> 0x20U)) 
                                             ^ (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[8U] 
        = (0x300000000ULL | (QData)((IData)(((0x1fU 
                                              >= (0x3fU 
                                                  & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
                                              ? ((IData)(
                                                         (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                          >> 0x20U)) 
                                                 << 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
                                              : 0U))));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[1U] 
        = ((IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                    >> 0x20U)) & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[2U] 
        = ((IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                    >> 0x20U)) | (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[3U] 
        = (IData)(((((QData)((IData)((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                            >> 0x3fU))))))) 
                     << 0x20U) | (QData)((IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                  >> 0x20U)))) 
                   >> (0x3fU & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out))));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[4U] 
        = ((0x1fU >= (0x3fU & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
            ? ((IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                        >> 0x20U)) >> (0x3fU & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
            : 0U);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[5U] 
        = ((IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                    >> 0x20U)) ^ (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[8U] 
        = ((0x1fU >= (0x3fU & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
            ? ((IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                        >> 0x20U)) << (0x3fU & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
            : 0U);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t 
        = (0x1ffffffffULL & ((((QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                           >> 0x1fU))))) 
                               << 0x20U) | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out))) 
                             ^ (- (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag)))));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
        = (0x1ffffffffULL & ((((QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                           >> 0x3fU))))) 
                               << 0x20U) | (QData)((IData)(
                                                           (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                            >> 0x20U)))) 
                             + (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t 
                                + (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag)))));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[0U] 
        = (0xb00000000ULL | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out)));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[9U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out)));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[0xaU] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out)));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[0U] 
        = (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[9U] 
        = (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[0xaU] 
        = (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out);
    vlSelf->__VdfgTmp_h29117f5a__0 = (1U & (IData)(
                                                   (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                                    >> 0x20U)));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__carry_flag 
        = (1U & ((((IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                            >> 0x3fU)) | ((IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t 
                                                   >> 0x20U)) 
                                          | (IData)(
                                                    (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                                     >> 0x20U)))) 
                  & (((IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                               >> 0x3fU)) | ((~ (IData)(
                                                        (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t 
                                                         >> 0x20U))) 
                                             | (~ (IData)(
                                                          (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                                           >> 0x20U))))) 
                     & ((~ (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                    >> 0x3fU))) | (
                                                   ((~ (IData)(
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
                 ^ (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag)));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[7U] 
        = (0x400000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h29117f5a__0)));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[7U] 
        = vlSelf->__VdfgTmp_h29117f5a__0;
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[6U] 
        = (0x500000000ULL | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__carry_flag)));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[6U] 
        = vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__carry_flag;
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
                       == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
           == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                          [3U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                          [4U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
              [4U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
              [4U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                          [5U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
              [5U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
              [5U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                          [6U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
              [6U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
              [6U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                          [7U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
              [7U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
              [7U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                          [8U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
              [8U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
              [8U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                          [9U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
              [9U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
              [9U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                          [0xaU]))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
              [0xaU]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
              [0xaU]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit)
            ? vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out
            : 0U);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[0U] 
        = (0xf00000000ULL | (QData)((IData)((1U & (~ vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data)))));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[1U] 
        = (0xe00000000ULL | (QData)((IData)((1U & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data))));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[2U] 
        = (0xd00000000ULL | (QData)((IData)((1U & (~ vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data)))));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[3U] 
        = (0xc00000000ULL | (QData)((IData)((1U & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data))));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[4U] 
        = (0x900000000ULL | (QData)((IData)((0U != vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data))));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[5U] 
        = (0x800000000ULL | (QData)((IData)((1U & (~ (IData)(
                                                             (0U 
                                                              != vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data)))))));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[0U] 
        = (1U & (~ vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[1U] 
        = (1U & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[2U] 
        = (1U & (~ vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[3U] 
        = (1U & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[4U] 
        = (0U != vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[5U] 
        = (1U & (~ (IData)((0U != vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data))));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
                       == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
           == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
                          [3U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
                          [4U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list
              [4U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
              [4U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
        = (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
                          == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
                          [5U]))) & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list
              [5U]));
    vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
              == vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
              [5U]));
    vlSelf->ysyx_23060077_top__DOT__exu_result = ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit)
                                                   ? vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out
                                                   : vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data);
    vlSelf->ysyx_23060077_top__DOT____VdfgTmp_h15124160__0 
        = (((0U != vlSelf->ysyx_23060077_top__DOT__exu_result) 
            & (0x63U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode))) 
           | (0x6fU == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode)));
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
                VL_FATAL_MT("/home/jimple/Documents/ysyx/ysyx-workbench/npc/vsrc/ysyx_23060077_top.v", 1, "", "Input combinational region did not converge.");
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
                    VL_FATAL_MT("/home/jimple/Documents/ysyx/ysyx-workbench/npc/vsrc/ysyx_23060077_top.v", 1, "", "Active region did not converge.");
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
                VL_FATAL_MT("/home/jimple/Documents/ysyx/ysyx-workbench/npc/vsrc/ysyx_23060077_top.v", 1, "", "NBA region did not converge.");
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
