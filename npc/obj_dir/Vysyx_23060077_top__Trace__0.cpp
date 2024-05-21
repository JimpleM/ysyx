// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_23060077_top__Syms.h"


void Vysyx_23060077_top___024root__trace_chg_sub_0(Vysyx_23060077_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_23060077_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077_top___024root__trace_chg_top_0\n"); );
    // Init
    Vysyx_23060077_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060077_top___024root*>(voidSelf);
    Vysyx_23060077_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_23060077_top___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_23060077_top___024root__trace_chg_sub_0(Vysyx_23060077_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+1,(vlSelf->ysyx_23060077_top__DOT__ifu_pc_lst),32);
        bufp->chgIData(oldp+2,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r),32);
        bufp->chgIData(oldp+3,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r),32);
        bufp->chgBit(oldp+4,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i));
        bufp->chgIData(oldp+5,(((IData)(vlSelf->ysyx_23060077_top__DOT__csr_mret)
                                 ? vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                                [0x341U] : ((IData)(vlSelf->ysyx_23060077_top__DOT__csr_ecall)
                                             ? vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                                            [0x305U]
                                             : ((IData)(vlSelf->ysyx_23060077_top__DOT____VdfgTmp_h15124160__0)
                                                 ? 
                                                (vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r 
                                                 + vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r)
                                                 : 
                                                ((0x67U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r))
                                                  ? vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__raddr
                                                  : 0U))))),32);
        bufp->chgBit(oldp+6,(((IData)(vlSelf->ysyx_23060077_top__DOT__csr_mret) 
                              | ((IData)(vlSelf->ysyx_23060077_top__DOT__csr_ecall) 
                                 | ((IData)(vlSelf->ysyx_23060077_top__DOT____VdfgTmp_h15124160__0) 
                                    | (0x67U == (0x7fU 
                                                 & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)))))));
        bufp->chgBit(oldp+7,(vlSelf->ysyx_23060077_top__DOT__stall));
        bufp->chgIData(oldp+8,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc),32);
        bufp->chgBit(oldp+9,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_ready_o));
        bufp->chgIData(oldp+10,(((1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state))
                                  ? vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_r_data_o_r
                                  : 0U)),32);
        bufp->chgBit(oldp+11,((0x63U == (0x7fU & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r))));
        bufp->chgBit(oldp+12,((0x6fU == (0x7fU & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r))));
        bufp->chgBit(oldp+13,((0x67U == (0x7fU & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r))));
        bufp->chgCData(oldp+14,(vlSelf->ysyx_23060077_top__DOT__idu_rd),5);
        bufp->chgBit(oldp+15,(vlSelf->ysyx_23060077_top__DOT__idu_rd_wen));
        bufp->chgCData(oldp+16,(vlSelf->ysyx_23060077_top__DOT__idu_rs1),5);
        bufp->chgCData(oldp+17,(vlSelf->ysyx_23060077_top__DOT__idu_rs2),5);
        bufp->chgIData(oldp+18,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r),32);
        bufp->chgCData(oldp+19,(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt),4);
        bufp->chgCData(oldp+20,(vlSelf->ysyx_23060077_top__DOT__idu_src_sel),2);
        bufp->chgCData(oldp+21,(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt),2);
        bufp->chgCData(oldp+22,((7U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                       >> 0xcU))),3);
        bufp->chgIData(oldp+23,(vlSelf->ysyx_23060077_top__DOT__src1),32);
        bufp->chgIData(oldp+24,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wdata),32);
        bufp->chgBit(oldp+25,((1U & (~ (IData)((0U 
                                                != vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__exu_result_r))))));
        bufp->chgIData(oldp+26,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__exu_result_r),32);
        bufp->chgIData(oldp+27,(((2U & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
                                  ? 0U : ((1U & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
                                           ? ((0x4000U 
                                               & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                               ? ((0x2000U 
                                                   & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                                   ? 0U
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                                    ? (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____VdfgTmp_h56d28e90__0)
                                                    : (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____VdfgTmp_h56d2889a__0)))
                                               : ((0x2000U 
                                                   & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state))
                                                     ? vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_r_data_o_r
                                                     : 0U))
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                                    ? 
                                                   (((- (IData)(
                                                                ((2U 
                                                                  == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state)) 
                                                                 & (vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_r_data_o_r 
                                                                    >> 0xfU)))) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____VdfgTmp_h56d28e90__0))
                                                    : 
                                                   (((- (IData)(
                                                                ((2U 
                                                                  == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state)) 
                                                                 & (vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_r_data_o_r 
                                                                    >> 7U)))) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____VdfgTmp_h56d2889a__0)))))
                                           : 0U))),32);
        bufp->chgBit(oldp+28,(vlSelf->ysyx_23060077_top__DOT__lsu_rd_wen));
        bufp->chgBit(oldp+29,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__ren));
        bufp->chgIData(oldp+30,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__raddr),32);
        bufp->chgBit(oldp+31,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__lsu_rd_wen_r));
        bufp->chgIData(oldp+32,(((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state))
                                  ? vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_r_data_o_r
                                  : 0U)),32);
        bufp->chgBit(oldp+33,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wen));
        bufp->chgBit(oldp+34,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__lsu_rd_wen_w));
        bufp->chgCData(oldp+35,(((0x10U == (((IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt) 
                                             << 3U) 
                                            | (7U & 
                                               (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                >> 0xcU))))
                                  ? 1U : ((0x11U == 
                                           (((IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt) 
                                             << 3U) 
                                            | (7U & 
                                               (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                >> 0xcU))))
                                           ? 2U : (
                                                   (0x12U 
                                                    == 
                                                    (((IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt) 
                                                      << 3U) 
                                                     | (7U 
                                                        & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                           >> 0xcU))))
                                                    ? 4U
                                                    : 0U)))),3);
        bufp->chgBit(oldp+36,(((0U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
                                ? (IData)(vlSelf->ysyx_23060077_top__DOT____Vcellinp__riscv_wbu_u0__idu_rd_wen)
                                : ((3U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
                                    ? (IData)(vlSelf->ysyx_23060077_top__DOT____Vcellinp__riscv_wbu_u0__idu_rd_wen)
                                    : (IData)(vlSelf->ysyx_23060077_top__DOT__lsu_rd_wen)))));
        bufp->chgBit(oldp+37,(vlSelf->ysyx_23060077_top__DOT__csr_ecall));
        bufp->chgBit(oldp+38,(vlSelf->ysyx_23060077_top__DOT__csr_mret));
        bufp->chgIData(oldp+39,(vlSelf->ysyx_23060077_top__DOT__wr_csr_data),32);
        bufp->chgIData(oldp+40,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                                [0x300U]),32);
        bufp->chgIData(oldp+41,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                                [0x305U]),32);
        bufp->chgIData(oldp+42,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                                [0x341U]),32);
        bufp->chgBit(oldp+43,((vlSelf->ysyx_23060077_top__DOT__ifu_pc_lst 
                               != vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r)));
        bufp->chgBit(oldp+44,((1U & ((1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state))
                                      ? (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i)
                                      : ((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state))
                                          ? (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__ren)
                                          : 0U)))));
        bufp->chgIData(oldp+45,(((1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state))
                                  ? vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc
                                  : vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_w_addr_o)),32);
        bufp->chgBit(oldp+46,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_r_valid_o_r));
        bufp->chgIData(oldp+47,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_r_data_o_r),32);
        bufp->chgBit(oldp+48,(((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state)) 
                               & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wen))));
        bufp->chgIData(oldp+49,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_w_addr_o),32);
        bufp->chgBit(oldp+50,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_b_valid_o_r));
        bufp->chgIData(oldp+51,(((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state))
                                  ? vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wdata
                                  : 0U)),32);
        bufp->chgCData(oldp+52,(((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state))
                                  ? ((0x10U == (((IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt) 
                                                 << 3U) 
                                                | (7U 
                                                   & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                      >> 0xcU))))
                                      ? 1U : ((0x11U 
                                               == (
                                                   ((IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt) 
                                                    << 3U) 
                                                   | (7U 
                                                      & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                         >> 0xcU))))
                                               ? 2U
                                               : ((0x12U 
                                                   == 
                                                   (((IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt) 
                                                     << 3U) 
                                                    | (7U 
                                                       & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                          >> 0xcU))))
                                                   ? 4U
                                                   : 0U)))
                                  : 0U)),3);
        bufp->chgCData(oldp+53,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state),2);
        bufp->chgBit(oldp+54,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_aw_ready_o_r));
        bufp->chgBit(oldp+55,((1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state))));
        bufp->chgBit(oldp+56,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_w_ready_o_r));
        bufp->chgBit(oldp+57,((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state))));
        bufp->chgBit(oldp+58,((3U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state))));
        bufp->chgBit(oldp+59,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_ar_ready_o_r));
        bufp->chgBit(oldp+60,((1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state))));
        bufp->chgBit(oldp+61,((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state))));
        bufp->chgCData(oldp+62,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__lfsr_out),6);
        bufp->chgCData(oldp+63,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__r_delay_cnt),6);
        bufp->chgCData(oldp+64,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__w_delay_cnt),6);
        bufp->chgCData(oldp+65,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state),3);
        bufp->chgCData(oldp+66,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state_nxt),3);
        bufp->chgCData(oldp+67,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state),2);
        bufp->chgCData(oldp+68,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state_nxt),2);
        bufp->chgCData(oldp+69,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__lfsr_out),6);
        bufp->chgCData(oldp+70,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__r_delay_cnt),6);
        bufp->chgCData(oldp+71,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_delay_cnt),6);
        bufp->chgCData(oldp+72,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_w_state),3);
        bufp->chgIData(oldp+73,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_addr),32);
        bufp->chgIData(oldp+74,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_data),32);
        bufp->chgIData(oldp+75,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_mask),32);
        bufp->chgCData(oldp+76,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_r_state),2);
        bufp->chgIData(oldp+77,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__r_addr),32);
        bufp->chgIData(oldp+78,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__r_data),32);
        bufp->chgSData(oldp+79,((0xfffU & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)),12);
        bufp->chgBit(oldp+80,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_en));
        bufp->chgIData(oldp+81,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_data_r),32);
        bufp->chgIData(oldp+82,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__temp),32);
        bufp->chgIData(oldp+83,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__mepc_inst_r),32);
        bufp->chgIData(oldp+84,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                                [0x342U]),32);
        bufp->chgIData(oldp+85,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_a_data),32);
        bufp->chgIData(oldp+86,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_b_data),32);
        bufp->chgIData(oldp+87,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_out_data_r),32);
        bufp->chgBit(oldp+88,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag));
        bufp->chgQData(oldp+89,((((QData)((IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_a_data 
                                                   >> 0x1fU))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_a_data)))),33);
        bufp->chgQData(oldp+91,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t),33);
        bufp->chgQData(oldp+93,((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag))),33);
        bufp->chgQData(oldp+95,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out),33);
        bufp->chgBit(oldp+97,((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_a_data 
                               >> 0x1fU)));
        bufp->chgBit(oldp+98,((1U & (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t 
                                             >> 0x20U)))));
        bufp->chgBit(oldp+99,((1U & (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                             >> 0x20U)))));
        bufp->chgBit(oldp+100,((1U & (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+101,((1U & VL_REDXOR_64((0x180000000ULL 
                                                   & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out)))));
        bufp->chgBit(oldp+102,((1U & ((((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_a_data 
                                         >> 0x1fU) 
                                        | ((IData)(
                                                   (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t 
                                                    >> 0x20U)) 
                                           | (IData)(
                                                     (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                                      >> 0x20U)))) 
                                       & (((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_a_data 
                                            >> 0x1fU) 
                                           | ((~ (IData)(
                                                         (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t 
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
                                      ^ (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag)))));
        bufp->chgIData(oldp+103,((IData)(((((QData)((IData)(
                                                            (- (IData)(
                                                                       (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_a_data 
                                                                        >> 0x1fU))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_a_data))) 
                                          >> (0x3fU 
                                              & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_b_data)))),32);
        bufp->chgCData(oldp+104,((0x7fU & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)),7);
        bufp->chgCData(oldp+105,((vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                  >> 0x19U)),7);
        bufp->chgIData(oldp+106,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI),32);
        bufp->chgIData(oldp+107,((0xfffff000U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)),32);
        bufp->chgIData(oldp+108,((((- (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                     >> 7U))))),32);
        bufp->chgIData(oldp+109,((((- (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
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
                                                           >> 7U))))))),32);
        bufp->chgIData(oldp+110,((((- (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
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
                                                            >> 0x14U))))))),32);
        bufp->chgSData(oldp+111,(((0x1000U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                              >> 0x13U)) 
                                  | ((0x800U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                << 4U)) 
                                     | ((0x7e0U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                            >> 7U)))))),13);
        bufp->chgSData(oldp+112,((vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                  >> 0x14U)),12);
        bufp->chgIData(oldp+113,(((0x100000U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                >> 0xbU)) 
                                  | ((0xff000U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r) 
                                     | ((0x800U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                   >> 9U)) 
                                        | (0x7feU & 
                                           (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                            >> 0x14U)))))),21);
        bufp->chgSData(oldp+114,(((0xfe0U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                             >> 0x14U)) 
                                  | (0x1fU & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                              >> 7U)))),12);
        bufp->chgIData(oldp+115,(((0x10U == (((IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt) 
                                              << 3U) 
                                             | (7U 
                                                & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                   >> 0xcU))))
                                   ? 1U : ((0x11U == 
                                            (((IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt) 
                                              << 3U) 
                                             | (7U 
                                                & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                   >> 0xcU))))
                                            ? 2U : 
                                           ((0x12U 
                                             == (((IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt) 
                                                  << 3U) 
                                                 | (7U 
                                                    & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                       >> 0xcU))))
                                             ? 4U : 0U)))),32);
        bufp->chgIData(oldp+116,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[0]),32);
        bufp->chgIData(oldp+117,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[1]),32);
        bufp->chgIData(oldp+118,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[2]),32);
        bufp->chgIData(oldp+119,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[3]),32);
        bufp->chgIData(oldp+120,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[4]),32);
        bufp->chgIData(oldp+121,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[5]),32);
        bufp->chgIData(oldp+122,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[6]),32);
        bufp->chgIData(oldp+123,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[7]),32);
        bufp->chgIData(oldp+124,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[8]),32);
        bufp->chgIData(oldp+125,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[9]),32);
        bufp->chgIData(oldp+126,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[10]),32);
        bufp->chgIData(oldp+127,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[11]),32);
        bufp->chgIData(oldp+128,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[12]),32);
        bufp->chgIData(oldp+129,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[13]),32);
        bufp->chgIData(oldp+130,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[14]),32);
        bufp->chgIData(oldp+131,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[15]),32);
        bufp->chgIData(oldp+132,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[16]),32);
        bufp->chgIData(oldp+133,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[17]),32);
        bufp->chgIData(oldp+134,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[18]),32);
        bufp->chgIData(oldp+135,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[19]),32);
        bufp->chgIData(oldp+136,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[20]),32);
        bufp->chgIData(oldp+137,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[21]),32);
        bufp->chgIData(oldp+138,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[22]),32);
        bufp->chgIData(oldp+139,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[23]),32);
        bufp->chgIData(oldp+140,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[24]),32);
        bufp->chgIData(oldp+141,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[25]),32);
        bufp->chgIData(oldp+142,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[26]),32);
        bufp->chgIData(oldp+143,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[27]),32);
        bufp->chgIData(oldp+144,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[28]),32);
        bufp->chgIData(oldp+145,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[29]),32);
        bufp->chgIData(oldp+146,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[30]),32);
        bufp->chgIData(oldp+147,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[31]),32);
        bufp->chgBit(oldp+148,(vlSelf->ysyx_23060077_top__DOT____Vcellinp__riscv_wbu_u0__idu_rd_wen));
    }
    bufp->chgBit(oldp+149,(vlSelf->clk));
    bufp->chgBit(oldp+150,(vlSelf->rst_n));
    bufp->chgIData(oldp+151,(((0U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
                               ? vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__exu_result_r
                               : ((3U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
                                   ? ((IData)(vlSelf->rst_n)
                                       ? ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_en)
                                           ? vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                                          [(0xfffU 
                                            & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)]
                                           : 0U) : 0U)
                                   : ((2U & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
                                       ? 0U : ((1U 
                                                & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
                                                ? (
                                                   (0x4000U 
                                                    & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                                    ? 
                                                   ((0x2000U 
                                                     & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                                     ? 0U
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                                      ? (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____VdfgTmp_h56d28e90__0)
                                                      : (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____VdfgTmp_h56d2889a__0)))
                                                    : 
                                                   ((0x2000U 
                                                     & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state))
                                                       ? vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_r_data_o_r
                                                       : 0U))
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                                      ? 
                                                     (((- (IData)(
                                                                  ((2U 
                                                                    == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state)) 
                                                                   & (vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_r_data_o_r 
                                                                      >> 0xfU)))) 
                                                       << 0x10U) 
                                                      | (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____VdfgTmp_h56d28e90__0))
                                                      : 
                                                     (((- (IData)(
                                                                  ((2U 
                                                                    == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state)) 
                                                                   & (vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_r_data_o_r 
                                                                      >> 7U)))) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____VdfgTmp_h56d2889a__0)))))
                                                : 0U))))),32);
    bufp->chgIData(oldp+152,(((IData)(vlSelf->rst_n)
                               ? ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_en)
                                   ? vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                                  [(0xfffU & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)]
                                   : 0U) : 0U)),32);
}

void Vysyx_23060077_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077_top___024root__trace_cleanup\n"); );
    // Init
    Vysyx_23060077_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060077_top___024root*>(voidSelf);
    Vysyx_23060077_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
