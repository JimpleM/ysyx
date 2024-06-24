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
    VlWide<13>/*415:0*/ __Vtemp_h853fad15__0;
    VlWide<7>/*223:0*/ __Vtemp_h86f1ea95__0;
    VlWide<9>/*287:0*/ __Vtemp_ha3c88b17__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,((0x1fU & ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                                         >> 1U))),5);
        bufp->chgBit(oldp+1,((1U & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out))));
        bufp->chgCData(oldp+2,((0x1fU & ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                                         >> 0xbU))),5);
        bufp->chgCData(oldp+3,((0x1fU & ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                                         >> 6U))),5);
        bufp->chgIData(oldp+4,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r),32);
        bufp->chgCData(oldp+5,(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt),4);
        bufp->chgCData(oldp+6,(vlSelf->ysyx_23060077_top__DOT__idu_src_sel),2);
        bufp->chgCData(oldp+7,(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt),2);
        bufp->chgIData(oldp+8,(vlSelf->ysyx_23060077_top__DOT__lsu_result),32);
        bufp->chgBit(oldp+9,(vlSelf->ysyx_23060077_top__DOT__csr_ecall));
        bufp->chgBit(oldp+10,(vlSelf->ysyx_23060077_top__DOT__csr_mret));
        bufp->chgSData(oldp+11,((0xfffU & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)),12);
        bufp->chgBit(oldp+12,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_en));
        bufp->chgBit(oldp+13,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag));
        bufp->chgQData(oldp+14,((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag))),33);
        bufp->chgCData(oldp+16,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[0]),4);
        bufp->chgCData(oldp+17,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[1]),4);
        bufp->chgCData(oldp+18,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[2]),4);
        bufp->chgCData(oldp+19,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[3]),4);
        bufp->chgCData(oldp+20,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[4]),4);
        bufp->chgCData(oldp+21,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[5]),4);
        bufp->chgCData(oldp+22,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[6]),4);
        bufp->chgCData(oldp+23,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[7]),4);
        bufp->chgCData(oldp+24,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[8]),4);
        bufp->chgCData(oldp+25,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[9]),4);
        bufp->chgCData(oldp+26,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[10]),4);
        bufp->chgCData(oldp+27,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key),4);
        bufp->chgCData(oldp+28,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[0]),4);
        bufp->chgCData(oldp+29,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[1]),4);
        bufp->chgCData(oldp+30,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[2]),4);
        bufp->chgCData(oldp+31,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[3]),4);
        bufp->chgCData(oldp+32,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[4]),4);
        bufp->chgCData(oldp+33,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[5]),4);
        bufp->chgCData(oldp+34,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list[0]),2);
        bufp->chgCData(oldp+35,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list[1]),2);
        bufp->chgCData(oldp+36,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list[2]),2);
        bufp->chgCData(oldp+37,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list[3]),2);
        bufp->chgIData(oldp+38,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI),32);
        bufp->chgSData(oldp+39,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[0]),9);
        bufp->chgSData(oldp+40,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[1]),9);
        bufp->chgSData(oldp+41,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[2]),9);
        bufp->chgSData(oldp+42,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[3]),9);
        bufp->chgSData(oldp+43,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[4]),9);
        bufp->chgSData(oldp+44,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[5]),9);
        bufp->chgSData(oldp+45,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[6]),9);
        bufp->chgSData(oldp+46,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[7]),9);
        bufp->chgSData(oldp+47,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[8]),9);
        bufp->chgSData(oldp+48,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[9]),9);
        bufp->chgSData(oldp+49,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[10]),9);
        bufp->chgCData(oldp+50,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[0]),7);
        bufp->chgCData(oldp+51,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[1]),7);
        bufp->chgCData(oldp+52,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[2]),7);
        bufp->chgCData(oldp+53,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[3]),7);
        bufp->chgCData(oldp+54,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[4]),7);
        bufp->chgCData(oldp+55,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[5]),7);
        bufp->chgCData(oldp+56,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[6]),7);
        bufp->chgCData(oldp+57,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[7]),7);
        bufp->chgCData(oldp+58,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[8]),7);
        bufp->chgCData(oldp+59,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[9]),7);
        bufp->chgCData(oldp+60,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[10]),7);
        bufp->chgCData(oldp+61,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[0]),2);
        bufp->chgCData(oldp+62,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[1]),2);
        bufp->chgCData(oldp+63,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[2]),2);
        bufp->chgCData(oldp+64,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[3]),2);
        bufp->chgCData(oldp+65,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[4]),2);
        bufp->chgCData(oldp+66,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[5]),2);
        bufp->chgCData(oldp+67,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[6]),2);
        bufp->chgCData(oldp+68,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[7]),2);
        bufp->chgCData(oldp+69,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[8]),2);
        bufp->chgCData(oldp+70,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[9]),2);
        bufp->chgCData(oldp+71,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[10]),2);
        bufp->chgCData(oldp+72,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out),2);
        bufp->chgBit(oldp+73,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit));
        bufp->chgSData(oldp+74,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__pair_list[0]),9);
        bufp->chgSData(oldp+75,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__pair_list[1]),9);
        bufp->chgSData(oldp+76,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__pair_list[2]),9);
        bufp->chgCData(oldp+77,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list[0]),7);
        bufp->chgCData(oldp+78,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list[1]),7);
        bufp->chgCData(oldp+79,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list[2]),7);
        bufp->chgCData(oldp+80,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__data_list[0]),2);
        bufp->chgCData(oldp+81,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__data_list[1]),2);
        bufp->chgCData(oldp+82,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__data_list[2]),2);
        bufp->chgCData(oldp+83,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__lut_out),2);
        bufp->chgBit(oldp+84,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__hit));
        bufp->chgSData(oldp+85,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out),16);
        bufp->chgWData(oldp+86,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellinp__riscv_mux_id_reg__lut),253);
        bufp->chgIData(oldp+94,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[0]),23);
        bufp->chgIData(oldp+95,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[1]),23);
        bufp->chgIData(oldp+96,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[2]),23);
        bufp->chgIData(oldp+97,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[3]),23);
        bufp->chgIData(oldp+98,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[4]),23);
        bufp->chgIData(oldp+99,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[5]),23);
        bufp->chgIData(oldp+100,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[6]),23);
        bufp->chgIData(oldp+101,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[7]),23);
        bufp->chgIData(oldp+102,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[8]),23);
        bufp->chgIData(oldp+103,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[9]),23);
        bufp->chgIData(oldp+104,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[10]),23);
        bufp->chgCData(oldp+105,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[0]),7);
        bufp->chgCData(oldp+106,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[1]),7);
        bufp->chgCData(oldp+107,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[2]),7);
        bufp->chgCData(oldp+108,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[3]),7);
        bufp->chgCData(oldp+109,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[4]),7);
        bufp->chgCData(oldp+110,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[5]),7);
        bufp->chgCData(oldp+111,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[6]),7);
        bufp->chgCData(oldp+112,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[7]),7);
        bufp->chgCData(oldp+113,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[8]),7);
        bufp->chgCData(oldp+114,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[9]),7);
        bufp->chgCData(oldp+115,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[10]),7);
        bufp->chgSData(oldp+116,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[0]),16);
        bufp->chgSData(oldp+117,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[1]),16);
        bufp->chgSData(oldp+118,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[2]),16);
        bufp->chgSData(oldp+119,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[3]),16);
        bufp->chgSData(oldp+120,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[4]),16);
        bufp->chgSData(oldp+121,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[5]),16);
        bufp->chgSData(oldp+122,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[6]),16);
        bufp->chgSData(oldp+123,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[7]),16);
        bufp->chgSData(oldp+124,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[8]),16);
        bufp->chgSData(oldp+125,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[9]),16);
        bufp->chgSData(oldp+126,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[10]),16);
        bufp->chgSData(oldp+127,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out),16);
        bufp->chgBit(oldp+128,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit));
        bufp->chgBit(oldp+129,((1U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))));
        bufp->chgBit(oldp+130,((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))));
        bufp->chgIData(oldp+131,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__mask),32);
        bufp->chgIData(oldp+132,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rlen),32);
        bufp->chgCData(oldp+133,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key),5);
        bufp->chgQData(oldp+134,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[0]),37);
        bufp->chgQData(oldp+136,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[1]),37);
        bufp->chgQData(oldp+138,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[2]),37);
        bufp->chgQData(oldp+140,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[3]),37);
        bufp->chgQData(oldp+142,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[4]),37);
        bufp->chgCData(oldp+144,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list[0]),5);
        bufp->chgCData(oldp+145,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list[1]),5);
        bufp->chgCData(oldp+146,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list[2]),5);
        bufp->chgCData(oldp+147,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list[3]),5);
        bufp->chgCData(oldp+148,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list[4]),5);
        bufp->chgIData(oldp+149,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[0]),32);
        bufp->chgIData(oldp+150,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[1]),32);
        bufp->chgIData(oldp+151,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[2]),32);
        bufp->chgIData(oldp+152,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[3]),32);
        bufp->chgIData(oldp+153,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[4]),32);
        bufp->chgIData(oldp+154,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out),32);
        bufp->chgBit(oldp+155,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit));
        bufp->chgQData(oldp+156,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__pair_list[0]),37);
        bufp->chgQData(oldp+158,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__pair_list[1]),37);
        bufp->chgQData(oldp+160,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__pair_list[2]),37);
        bufp->chgCData(oldp+162,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list[0]),5);
        bufp->chgCData(oldp+163,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list[1]),5);
        bufp->chgCData(oldp+164,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list[2]),5);
        bufp->chgIData(oldp+165,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__data_list[0]),32);
        bufp->chgIData(oldp+166,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__data_list[1]),32);
        bufp->chgIData(oldp+167,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__data_list[2]),32);
        bufp->chgIData(oldp+168,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__lut_out),32);
        bufp->chgBit(oldp+169,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__hit));
        bufp->chgIData(oldp+170,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__i),32);
        bufp->chgCData(oldp+171,(((0x20U & ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                                            << 5U)) 
                                  | (0x1fU & ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                                              >> 1U)))),6);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+172,(vlSelf->ysyx_23060077_top__DOT__ifu_pc),32);
        bufp->chgIData(oldp+173,(vlSelf->ysyx_23060077_top__DOT__src1),32);
        bufp->chgIData(oldp+174,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wdata),32);
        bufp->chgBit(oldp+175,((1U & (~ (IData)((0U 
                                                 != vlSelf->ysyx_23060077_top__DOT__exu_result))))));
        bufp->chgIData(oldp+176,(vlSelf->ysyx_23060077_top__DOT__exu_result),32);
        bufp->chgIData(oldp+177,(vlSelf->ysyx_23060077_top__DOT__wr_csr_data),32);
        bufp->chgIData(oldp+178,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                                 [0x300U]),32);
        bufp->chgIData(oldp+179,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                                 [0x305U]),32);
        bufp->chgIData(oldp+180,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                                 [0x341U]),32);
        bufp->chgIData(oldp+181,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_data_r),32);
        bufp->chgIData(oldp+182,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__temp),32);
        bufp->chgIData(oldp+183,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__mepc_inst_r),32);
        bufp->chgIData(oldp+184,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                                 [0x342U]),32);
        bufp->chgIData(oldp+185,((IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+186,((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)),32);
        bufp->chgIData(oldp+187,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data),32);
        bufp->chgQData(oldp+188,((((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                               >> 0x3fU))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                                >> 0x20U))))),33);
        bufp->chgQData(oldp+190,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t),33);
        bufp->chgQData(oldp+192,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out),33);
        bufp->chgBit(oldp+194,((1U & (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+195,((1U & (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+196,((1U & (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+197,((1U & (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+198,((1U & VL_REDXOR_64((0x180000000ULL 
                                                   & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out)))));
        bufp->chgBit(oldp+199,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__carry_flag));
        bufp->chgIData(oldp+200,((IData)(((((QData)((IData)(
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
                                              & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out))))),32);
        __Vtemp_h853fad15__0[0U] = (IData)((0xb00000000ULL 
                                            | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out))));
        __Vtemp_h853fad15__0[1U] = ((((IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                               >> 0x20U)) 
                                      & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)) 
                                     << 4U) | (IData)(
                                                      ((0xb00000000ULL 
                                                        | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out))) 
                                                       >> 0x20U)));
        __Vtemp_h853fad15__0[2U] = (0xa0U | ((((IData)(
                                                       (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                        >> 0x20U)) 
                                               | (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)) 
                                              << 8U) 
                                             | (((IData)(
                                                         (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                          >> 0x20U)) 
                                                 & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)) 
                                                >> 0x1cU)));
        __Vtemp_h853fad15__0[3U] = (0x900U | (((IData)(
                                                       ((((QData)((IData)(
                                                                          (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                                                >> 0x3fU))))))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                                            >> 0x20U)))) 
                                                        >> 
                                                        (0x3fU 
                                                         & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))) 
                                               << 0xcU) 
                                              | (((IData)(
                                                          (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                           >> 0x20U)) 
                                                  | (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)) 
                                                 >> 0x18U)));
        __Vtemp_h853fad15__0[4U] = (0x8000U | ((((IData)(
                                                         (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                          >> 0x20U)) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out))) 
                                                << 0x10U) 
                                               | ((IData)(
                                                          ((((QData)((IData)(
                                                                             (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                                                >> 0x3fU))))))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                                               >> 0x20U)))) 
                                                           >> 
                                                           (0x3fU 
                                                            & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))) 
                                                  >> 0x14U)));
        __Vtemp_h853fad15__0[5U] = (0x70000U | ((((IData)(
                                                          (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                           >> 0x20U)) 
                                                  ^ (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)) 
                                                 << 0x14U) 
                                                | (((IData)(
                                                            (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                             >> 0x20U)) 
                                                    >> 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out))) 
                                                   >> 0x10U)));
        __Vtemp_h853fad15__0[6U] = (0x600000U | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__carry_flag) 
                                                  << 0x18U) 
                                                 | (((IData)(
                                                             (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                              >> 0x20U)) 
                                                     ^ (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)) 
                                                    >> 0xcU)));
        __Vtemp_h853fad15__0[7U] = (0x5000000U | ((IData)(vlSelf->__VdfgTmp_h29117f5a__0) 
                                                  << 0x1cU));
        __Vtemp_h853fad15__0[8U] = 0x40000000U;
        __Vtemp_h853fad15__0[9U] = ((IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                             >> 0x20U)) 
                                    << (0x1fU & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)));
        __Vtemp_h853fad15__0[0xaU] = (3U | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out) 
                                            << 4U));
        __Vtemp_h853fad15__0[0xbU] = (0x20U | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out) 
                                                << 8U) 
                                               | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out) 
                                                  >> 0x1cU)));
        __Vtemp_h853fad15__0[0xcU] = (0x100U | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out) 
                                                >> 0x18U));
        bufp->chgWData(oldp+201,(__Vtemp_h853fad15__0),396);
        bufp->chgQData(oldp+214,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[0]),36);
        bufp->chgQData(oldp+216,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[1]),36);
        bufp->chgQData(oldp+218,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[2]),36);
        bufp->chgQData(oldp+220,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[3]),36);
        bufp->chgQData(oldp+222,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[4]),36);
        bufp->chgQData(oldp+224,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[5]),36);
        bufp->chgQData(oldp+226,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[6]),36);
        bufp->chgQData(oldp+228,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[7]),36);
        bufp->chgQData(oldp+230,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[8]),36);
        bufp->chgQData(oldp+232,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[9]),36);
        bufp->chgQData(oldp+234,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[10]),36);
        bufp->chgIData(oldp+236,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[0]),32);
        bufp->chgIData(oldp+237,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[1]),32);
        bufp->chgIData(oldp+238,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[2]),32);
        bufp->chgIData(oldp+239,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[3]),32);
        bufp->chgIData(oldp+240,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[4]),32);
        bufp->chgIData(oldp+241,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[5]),32);
        bufp->chgIData(oldp+242,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[6]),32);
        bufp->chgIData(oldp+243,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[7]),32);
        bufp->chgIData(oldp+244,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[8]),32);
        bufp->chgIData(oldp+245,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[9]),32);
        bufp->chgIData(oldp+246,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[10]),32);
        bufp->chgIData(oldp+247,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out),32);
        bufp->chgBit(oldp+248,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit));
        __Vtemp_h86f1ea95__0[0U] = (IData)((0xf00000000ULL 
                                            | (QData)((IData)(
                                                              (1U 
                                                               & (~ vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data))))));
        __Vtemp_h86f1ea95__0[1U] = ((0x10U & (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data 
                                              << 4U)) 
                                    | (IData)(((0xf00000000ULL 
                                                | (QData)((IData)(
                                                                  (1U 
                                                                   & (~ vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data))))) 
                                               >> 0x20U)));
        __Vtemp_h86f1ea95__0[2U] = (0xe0U | (0x100U 
                                             & ((~ vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data) 
                                                << 8U)));
        __Vtemp_h86f1ea95__0[3U] = (0xd00U | (0x1000U 
                                              & (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data 
                                                 << 0xcU)));
        __Vtemp_h86f1ea95__0[4U] = (0xc000U | ((IData)(
                                                       (0U 
                                                        != vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data)) 
                                               << 0x10U));
        __Vtemp_h86f1ea95__0[5U] = (0x90000U | (0x100000U 
                                                & ((~ (IData)(
                                                              (0U 
                                                               != vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data))) 
                                                   << 0x14U)));
        __Vtemp_h86f1ea95__0[6U] = 0x800000U;
        bufp->chgWData(oldp+249,(__Vtemp_h86f1ea95__0),216);
        bufp->chgQData(oldp+256,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[0]),36);
        bufp->chgQData(oldp+258,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[1]),36);
        bufp->chgQData(oldp+260,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[2]),36);
        bufp->chgQData(oldp+262,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[3]),36);
        bufp->chgQData(oldp+264,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[4]),36);
        bufp->chgQData(oldp+266,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[5]),36);
        bufp->chgIData(oldp+268,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[0]),32);
        bufp->chgIData(oldp+269,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[1]),32);
        bufp->chgIData(oldp+270,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[2]),32);
        bufp->chgIData(oldp+271,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[3]),32);
        bufp->chgIData(oldp+272,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[4]),32);
        bufp->chgIData(oldp+273,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[5]),32);
        bufp->chgIData(oldp+274,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out),32);
        bufp->chgBit(oldp+275,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit));
        bufp->chgQData(oldp+276,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out),64);
        __Vtemp_ha3c88b17__0[0U] = (IData)((((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__ifu_pc)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r))));
        __Vtemp_ha3c88b17__0[1U] = (IData)(((((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__ifu_pc)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r))) 
                                            >> 0x20U));
        __Vtemp_ha3c88b17__0[2U] = 0x13U;
        __Vtemp_ha3c88b17__0[3U] = (vlSelf->ysyx_23060077_top__DOT__ifu_pc 
                                    << 2U);
        __Vtemp_ha3c88b17__0[4U] = (8U | (((IData)(
                                                   (((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__src1)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)))) 
                                           << 4U) | 
                                          (vlSelf->ysyx_23060077_top__DOT__ifu_pc 
                                           >> 0x1eU)));
        __Vtemp_ha3c88b17__0[5U] = (((IData)((((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__src1)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)))) 
                                     >> 0x1cU) | ((IData)(
                                                          ((((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__src1)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r))) 
                                                           >> 0x20U)) 
                                                  << 4U));
        __Vtemp_ha3c88b17__0[6U] = (0x10U | (((IData)(
                                                      (((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__src1)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wdata)))) 
                                              << 6U) 
                                             | ((IData)(
                                                        ((((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__src1)) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r))) 
                                                         >> 0x20U)) 
                                                >> 0x1cU)));
        __Vtemp_ha3c88b17__0[7U] = (((IData)((((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__src1)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wdata)))) 
                                     >> 0x1aU) | ((IData)(
                                                          ((((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__src1)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wdata))) 
                                                           >> 0x20U)) 
                                                  << 6U));
        __Vtemp_ha3c88b17__0[8U] = ((IData)(((((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__src1)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wdata))) 
                                             >> 0x20U)) 
                                    >> 0x1aU);
        bufp->chgWData(oldp+278,(__Vtemp_ha3c88b17__0),264);
        bufp->chgWData(oldp+287,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[0]),66);
        bufp->chgWData(oldp+290,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[1]),66);
        bufp->chgWData(oldp+293,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[2]),66);
        bufp->chgWData(oldp+296,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[3]),66);
        bufp->chgQData(oldp+299,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[0]),64);
        bufp->chgQData(oldp+301,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[1]),64);
        bufp->chgQData(oldp+303,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[2]),64);
        bufp->chgQData(oldp+305,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[3]),64);
        bufp->chgQData(oldp+307,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out),64);
        bufp->chgBit(oldp+309,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit));
        bufp->chgIData(oldp+310,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[0]),32);
        bufp->chgIData(oldp+311,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[1]),32);
        bufp->chgIData(oldp+312,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[2]),32);
        bufp->chgIData(oldp+313,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[3]),32);
        bufp->chgIData(oldp+314,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[4]),32);
        bufp->chgIData(oldp+315,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[5]),32);
        bufp->chgIData(oldp+316,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[6]),32);
        bufp->chgIData(oldp+317,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[7]),32);
        bufp->chgIData(oldp+318,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[8]),32);
        bufp->chgIData(oldp+319,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[9]),32);
        bufp->chgIData(oldp+320,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[10]),32);
        bufp->chgIData(oldp+321,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[11]),32);
        bufp->chgIData(oldp+322,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[12]),32);
        bufp->chgIData(oldp+323,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[13]),32);
        bufp->chgIData(oldp+324,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[14]),32);
        bufp->chgIData(oldp+325,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[15]),32);
        bufp->chgIData(oldp+326,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[16]),32);
        bufp->chgIData(oldp+327,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[17]),32);
        bufp->chgIData(oldp+328,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[18]),32);
        bufp->chgIData(oldp+329,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[19]),32);
        bufp->chgIData(oldp+330,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[20]),32);
        bufp->chgIData(oldp+331,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[21]),32);
        bufp->chgIData(oldp+332,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[22]),32);
        bufp->chgIData(oldp+333,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[23]),32);
        bufp->chgIData(oldp+334,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[24]),32);
        bufp->chgIData(oldp+335,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[25]),32);
        bufp->chgIData(oldp+336,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[26]),32);
        bufp->chgIData(oldp+337,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[27]),32);
        bufp->chgIData(oldp+338,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[28]),32);
        bufp->chgIData(oldp+339,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[29]),32);
        bufp->chgIData(oldp+340,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[30]),32);
        bufp->chgIData(oldp+341,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[31]),32);
        bufp->chgCData(oldp+342,((0x1fU & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT____Vcellout__riscv_dff_reg_t__dout))),5);
        bufp->chgBit(oldp+343,((1U & ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT____Vcellout__riscv_dff_reg_t__dout) 
                                      >> 5U))));
        bufp->chgCData(oldp+344,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT____Vcellout__riscv_dff_reg_t__dout),6);
    }
    bufp->chgBit(oldp+345,(vlSelf->clock));
    bufp->chgBit(oldp+346,(vlSelf->rst_n));
    bufp->chgIData(oldp+347,(((0U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
                               ? vlSelf->ysyx_23060077_top__DOT__exu_result
                               : ((3U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
                                   ? ((IData)(vlSelf->rst_n)
                                       ? ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_en)
                                           ? vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                                          [(0xfffU 
                                            & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)]
                                           : 0U) : 0U)
                                   : vlSelf->ysyx_23060077_top__DOT__lsu_result))),32);
    bufp->chgIData(oldp+348,(((IData)(vlSelf->rst_n)
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
