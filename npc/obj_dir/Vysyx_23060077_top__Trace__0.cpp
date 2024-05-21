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
        bufp->chgIData(oldp+1,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r),32);
        bufp->chgIData(oldp+2,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r),32);
        bufp->chgBit(oldp+3,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i));
        bufp->chgIData(oldp+4,(((IData)(vlSelf->ysyx_23060077_top__DOT__csr_mret)
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
        bufp->chgBit(oldp+5,(((IData)(vlSelf->ysyx_23060077_top__DOT__csr_mret) 
                              | ((IData)(vlSelf->ysyx_23060077_top__DOT__csr_ecall) 
                                 | ((IData)(vlSelf->ysyx_23060077_top__DOT____VdfgTmp_h15124160__0) 
                                    | (0x67U == (0x7fU 
                                                 & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)))))));
        bufp->chgBit(oldp+6,(vlSelf->ysyx_23060077_top__DOT__stall));
        bufp->chgIData(oldp+7,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc),32);
        bufp->chgBit(oldp+8,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_ready_o));
        bufp->chgIData(oldp+9,(((1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state))
                                 ? vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_r_data_i
                                 : 0U)),32);
        bufp->chgBit(oldp+10,((0x63U == (0x7fU & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r))));
        bufp->chgBit(oldp+11,((0x6fU == (0x7fU & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r))));
        bufp->chgBit(oldp+12,((0x67U == (0x7fU & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r))));
        bufp->chgCData(oldp+13,(vlSelf->ysyx_23060077_top__DOT__idu_rd),5);
        bufp->chgBit(oldp+14,(vlSelf->ysyx_23060077_top__DOT__idu_rd_wen));
        bufp->chgCData(oldp+15,(vlSelf->ysyx_23060077_top__DOT__idu_rs1),5);
        bufp->chgCData(oldp+16,(vlSelf->ysyx_23060077_top__DOT__idu_rs2),5);
        bufp->chgIData(oldp+17,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r),32);
        bufp->chgCData(oldp+18,(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt),4);
        bufp->chgCData(oldp+19,(vlSelf->ysyx_23060077_top__DOT__idu_src_sel),2);
        bufp->chgCData(oldp+20,(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt),2);
        bufp->chgCData(oldp+21,((7U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                       >> 0xcU))),3);
        bufp->chgIData(oldp+22,(vlSelf->ysyx_23060077_top__DOT__src1),32);
        bufp->chgIData(oldp+23,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wdata),32);
        bufp->chgBit(oldp+24,((1U & (~ (IData)((0U 
                                                != vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__exu_result_r))))));
        bufp->chgIData(oldp+25,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__exu_result_r),32);
        bufp->chgIData(oldp+26,(((2U & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
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
                                                     ? vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_r_data_i
                                                     : 0U))
                                                   : 
                                                  ((0x1000U 
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
                                           : 0U))),32);
        bufp->chgBit(oldp+27,(vlSelf->ysyx_23060077_top__DOT__lsu_rd_wen));
        bufp->chgBit(oldp+28,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__ren));
        bufp->chgIData(oldp+29,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__raddr),32);
        bufp->chgBit(oldp+30,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__lsu_rd_wen_r));
        bufp->chgIData(oldp+31,(((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state))
                                  ? vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_r_data_i
                                  : 0U)),32);
        bufp->chgBit(oldp+32,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wen));
        bufp->chgBit(oldp+33,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__lsu_rd_wen_w));
        bufp->chgCData(oldp+34,(((0x10U == (((IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt) 
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
        bufp->chgBit(oldp+35,(((0U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
                                ? (IData)(vlSelf->ysyx_23060077_top__DOT____Vcellinp__riscv_wbu_u0__idu_rd_wen)
                                : ((3U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
                                    ? (IData)(vlSelf->ysyx_23060077_top__DOT____Vcellinp__riscv_wbu_u0__idu_rd_wen)
                                    : (IData)(vlSelf->ysyx_23060077_top__DOT__lsu_rd_wen)))));
        bufp->chgBit(oldp+36,(vlSelf->ysyx_23060077_top__DOT__csr_ecall));
        bufp->chgBit(oldp+37,(vlSelf->ysyx_23060077_top__DOT__csr_mret));
        bufp->chgIData(oldp+38,(vlSelf->ysyx_23060077_top__DOT__wr_csr_data),32);
        bufp->chgIData(oldp+39,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                                [0x300U]),32);
        bufp->chgIData(oldp+40,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                                [0x305U]),32);
        bufp->chgIData(oldp+41,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                                [0x341U]),32);
        bufp->chgBit(oldp+42,((1U & ((1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state))
                                      ? (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i)
                                      : ((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state))
                                          ? (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__ren)
                                          : 0U)))));
        bufp->chgIData(oldp+43,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_r_addr_o),32);
        bufp->chgBit(oldp+44,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_r_valid_i));
        bufp->chgIData(oldp+45,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_r_data_i),32);
        bufp->chgBit(oldp+46,(((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state)) 
                               & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wen))));
        bufp->chgIData(oldp+47,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_w_addr_o),32);
        bufp->chgBit(oldp+48,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_b_valid_i));
        bufp->chgIData(oldp+49,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_w_data_o),32);
        bufp->chgCData(oldp+50,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_w_strb_o),3);
        bufp->chgCData(oldp+51,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state),2);
        bufp->chgBit(oldp+52,(((0xa00003f8U == vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_w_addr_o)
                                ? (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__axi_uart_aw_ready_o_r)
                                : (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_aw_ready_o_r))));
        bufp->chgBit(oldp+53,((1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state))));
        bufp->chgBit(oldp+54,(((0xa00003f8U == vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_w_addr_o)
                                ? (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__axi_uart_w_ready_o_r)
                                : (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_w_ready_o_r))));
        bufp->chgBit(oldp+55,((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state))));
        bufp->chgCData(oldp+56,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_b_resp_i),3);
        bufp->chgBit(oldp+57,((3U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state))));
        bufp->chgBit(oldp+58,(((0xa00003f8U != vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_r_addr_o) 
                               & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_ar_ready_o_r))));
        bufp->chgBit(oldp+59,((1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state))));
        bufp->chgBit(oldp+60,((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state))));
        bufp->chgCData(oldp+61,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_r_resp_i),3);
        bufp->chgCData(oldp+62,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__lfsr_out),6);
        bufp->chgCData(oldp+63,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__r_delay_cnt),6);
        bufp->chgCData(oldp+64,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__w_delay_cnt),6);
        bufp->chgCData(oldp+65,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state),3);
        bufp->chgCData(oldp+66,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state_nxt),3);
        bufp->chgCData(oldp+67,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state),2);
        bufp->chgCData(oldp+68,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state_nxt),2);
        bufp->chgBit(oldp+69,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_aw_ready_o_r));
        bufp->chgBit(oldp+70,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_sram_aw_valid_i));
        bufp->chgIData(oldp+71,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_sram_aw_addr_i),32);
        bufp->chgBit(oldp+72,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_w_ready_o_r));
        bufp->chgBit(oldp+73,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_sram_w_valid_i));
        bufp->chgCData(oldp+74,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_sram_w_strb_i),3);
        bufp->chgIData(oldp+75,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_sram_w_data_i),32);
        bufp->chgBit(oldp+76,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_b_valid_o_r));
        bufp->chgBit(oldp+77,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_sram_b_ready_i));
        bufp->chgBit(oldp+78,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_ar_ready_o_r));
        bufp->chgBit(oldp+79,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_sram_ar_valid_i));
        bufp->chgIData(oldp+80,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_sram_ar_addr_i),32);
        bufp->chgBit(oldp+81,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_sram_r_ready_i));
        bufp->chgBit(oldp+82,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_r_valid_o_r));
        bufp->chgIData(oldp+83,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_r_data_o_r),32);
        bufp->chgBit(oldp+84,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__axi_uart_aw_ready_o_r));
        bufp->chgBit(oldp+85,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_uart_aw_valid_i));
        bufp->chgIData(oldp+86,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_uart_aw_addr_i),32);
        bufp->chgBit(oldp+87,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__axi_uart_w_ready_o_r));
        bufp->chgBit(oldp+88,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_uart_w_valid_i));
        bufp->chgCData(oldp+89,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_uart_w_strb_i),3);
        bufp->chgIData(oldp+90,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_uart_w_data_i),32);
        bufp->chgBit(oldp+91,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__axi_uart_b_valid_o_r));
        bufp->chgBit(oldp+92,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__axi_uart_b_ready_i));
        bufp->chgCData(oldp+93,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__lfsr_out),6);
        bufp->chgCData(oldp+94,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__r_delay_cnt),6);
        bufp->chgCData(oldp+95,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_delay_cnt),6);
        bufp->chgCData(oldp+96,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_w_state),3);
        bufp->chgIData(oldp+97,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_addr),32);
        bufp->chgIData(oldp+98,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_data),32);
        bufp->chgIData(oldp+99,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_mask),32);
        bufp->chgCData(oldp+100,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_r_state),2);
        bufp->chgIData(oldp+101,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__r_addr),32);
        bufp->chgIData(oldp+102,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__r_data),32);
        bufp->chgCData(oldp+103,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__lfsr_out),6);
        bufp->chgCData(oldp+104,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__w_delay_cnt),6);
        bufp->chgCData(oldp+105,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__uart_w_state),3);
        bufp->chgIData(oldp+106,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__w_addr),32);
        bufp->chgIData(oldp+107,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_uart__DOT__w_data),32);
        bufp->chgSData(oldp+108,((0xfffU & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)),12);
        bufp->chgBit(oldp+109,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_en));
        bufp->chgIData(oldp+110,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_data_r),32);
        bufp->chgIData(oldp+111,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__temp),32);
        bufp->chgIData(oldp+112,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__mepc_inst_r),32);
        bufp->chgIData(oldp+113,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                                 [0x342U]),32);
        bufp->chgIData(oldp+114,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_a_data),32);
        bufp->chgIData(oldp+115,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_b_data),32);
        bufp->chgIData(oldp+116,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_out_data_r),32);
        bufp->chgBit(oldp+117,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag));
        bufp->chgQData(oldp+118,((((QData)((IData)(
                                                   (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_a_data 
                                                    >> 0x1fU))) 
                                   << 0x20U) | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_a_data)))),33);
        bufp->chgQData(oldp+120,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t),33);
        bufp->chgQData(oldp+122,((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag))),33);
        bufp->chgQData(oldp+124,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out),33);
        bufp->chgBit(oldp+126,((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_a_data 
                                >> 0x1fU)));
        bufp->chgBit(oldp+127,((1U & (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+128,((1U & (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+129,((1U & (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+130,((1U & VL_REDXOR_64((0x180000000ULL 
                                                   & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out)))));
        bufp->chgBit(oldp+131,((1U & ((((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_a_data 
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
        bufp->chgIData(oldp+132,((IData)(((((QData)((IData)(
                                                            (- (IData)(
                                                                       (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_a_data 
                                                                        >> 0x1fU))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_a_data))) 
                                          >> (0x3fU 
                                              & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_b_data)))),32);
        bufp->chgCData(oldp+133,((0x7fU & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)),7);
        bufp->chgCData(oldp+134,((vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                  >> 0x19U)),7);
        bufp->chgIData(oldp+135,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI),32);
        bufp->chgIData(oldp+136,((0xfffff000U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)),32);
        bufp->chgIData(oldp+137,((((- (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                     >> 7U))))),32);
        bufp->chgIData(oldp+138,((((- (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
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
        bufp->chgIData(oldp+139,((((- (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
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
        bufp->chgSData(oldp+140,(((0x1000U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                              >> 0x13U)) 
                                  | ((0x800U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                << 4U)) 
                                     | ((0x7e0U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                            >> 7U)))))),13);
        bufp->chgSData(oldp+141,((vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                  >> 0x14U)),12);
        bufp->chgIData(oldp+142,(((0x100000U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                >> 0xbU)) 
                                  | ((0xff000U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r) 
                                     | ((0x800U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                   >> 9U)) 
                                        | (0x7feU & 
                                           (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                            >> 0x14U)))))),21);
        bufp->chgSData(oldp+143,(((0xfe0U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                             >> 0x14U)) 
                                  | (0x1fU & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                              >> 7U)))),12);
        bufp->chgIData(oldp+144,(((0x10U == (((IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt) 
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
        bufp->chgIData(oldp+145,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[0]),32);
        bufp->chgIData(oldp+146,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[1]),32);
        bufp->chgIData(oldp+147,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[2]),32);
        bufp->chgIData(oldp+148,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[3]),32);
        bufp->chgIData(oldp+149,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[4]),32);
        bufp->chgIData(oldp+150,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[5]),32);
        bufp->chgIData(oldp+151,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[6]),32);
        bufp->chgIData(oldp+152,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[7]),32);
        bufp->chgIData(oldp+153,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[8]),32);
        bufp->chgIData(oldp+154,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[9]),32);
        bufp->chgIData(oldp+155,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[10]),32);
        bufp->chgIData(oldp+156,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[11]),32);
        bufp->chgIData(oldp+157,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[12]),32);
        bufp->chgIData(oldp+158,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[13]),32);
        bufp->chgIData(oldp+159,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[14]),32);
        bufp->chgIData(oldp+160,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[15]),32);
        bufp->chgIData(oldp+161,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[16]),32);
        bufp->chgIData(oldp+162,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[17]),32);
        bufp->chgIData(oldp+163,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[18]),32);
        bufp->chgIData(oldp+164,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[19]),32);
        bufp->chgIData(oldp+165,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[20]),32);
        bufp->chgIData(oldp+166,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[21]),32);
        bufp->chgIData(oldp+167,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[22]),32);
        bufp->chgIData(oldp+168,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[23]),32);
        bufp->chgIData(oldp+169,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[24]),32);
        bufp->chgIData(oldp+170,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[25]),32);
        bufp->chgIData(oldp+171,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[26]),32);
        bufp->chgIData(oldp+172,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[27]),32);
        bufp->chgIData(oldp+173,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[28]),32);
        bufp->chgIData(oldp+174,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[29]),32);
        bufp->chgIData(oldp+175,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[30]),32);
        bufp->chgIData(oldp+176,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[31]),32);
        bufp->chgBit(oldp+177,(vlSelf->ysyx_23060077_top__DOT____Vcellinp__riscv_wbu_u0__idu_rd_wen));
    }
    bufp->chgBit(oldp+178,(vlSelf->clk));
    bufp->chgBit(oldp+179,(vlSelf->rst_n));
    bufp->chgIData(oldp+180,(((0U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
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
                                                       ? vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_r_data_i
                                                       : 0U))
                                                     : 
                                                    ((0x1000U 
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
                                                : 0U))))),32);
    bufp->chgIData(oldp+181,(((IData)(vlSelf->rst_n)
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
