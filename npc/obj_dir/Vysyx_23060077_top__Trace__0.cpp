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
    VlWide<13>/*415:0*/ __Vtemp_h087321c3__0;
    VlWide<7>/*223:0*/ __Vtemp_h86f1ea95__0;
    VlWide<9>/*287:0*/ __Vtemp_hf0a01500__0;
    VlWide<6>/*191:0*/ __Vtemp_hed5adefe__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[0]),4);
        bufp->chgCData(oldp+1,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[1]),4);
        bufp->chgCData(oldp+2,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[2]),4);
        bufp->chgCData(oldp+3,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[3]),4);
        bufp->chgCData(oldp+4,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[4]),4);
        bufp->chgCData(oldp+5,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[5]),4);
        bufp->chgCData(oldp+6,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[6]),4);
        bufp->chgCData(oldp+7,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[7]),4);
        bufp->chgCData(oldp+8,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[8]),4);
        bufp->chgCData(oldp+9,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[9]),4);
        bufp->chgCData(oldp+10,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[10]),4);
        bufp->chgCData(oldp+11,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[0]),4);
        bufp->chgCData(oldp+12,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[1]),4);
        bufp->chgCData(oldp+13,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[2]),4);
        bufp->chgCData(oldp+14,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[3]),4);
        bufp->chgCData(oldp+15,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[4]),4);
        bufp->chgCData(oldp+16,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[5]),4);
        bufp->chgCData(oldp+17,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list[0]),2);
        bufp->chgCData(oldp+18,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list[1]),2);
        bufp->chgCData(oldp+19,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list[2]),2);
        bufp->chgCData(oldp+20,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list[3]),2);
        bufp->chgSData(oldp+21,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[0]),9);
        bufp->chgSData(oldp+22,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[1]),9);
        bufp->chgSData(oldp+23,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[2]),9);
        bufp->chgSData(oldp+24,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[3]),9);
        bufp->chgSData(oldp+25,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[4]),9);
        bufp->chgSData(oldp+26,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[5]),9);
        bufp->chgSData(oldp+27,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[6]),9);
        bufp->chgSData(oldp+28,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[7]),9);
        bufp->chgSData(oldp+29,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[8]),9);
        bufp->chgSData(oldp+30,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[9]),9);
        bufp->chgSData(oldp+31,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[10]),9);
        bufp->chgCData(oldp+32,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[0]),7);
        bufp->chgCData(oldp+33,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[1]),7);
        bufp->chgCData(oldp+34,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[2]),7);
        bufp->chgCData(oldp+35,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[3]),7);
        bufp->chgCData(oldp+36,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[4]),7);
        bufp->chgCData(oldp+37,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[5]),7);
        bufp->chgCData(oldp+38,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[6]),7);
        bufp->chgCData(oldp+39,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[7]),7);
        bufp->chgCData(oldp+40,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[8]),7);
        bufp->chgCData(oldp+41,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[9]),7);
        bufp->chgCData(oldp+42,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[10]),7);
        bufp->chgCData(oldp+43,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[0]),2);
        bufp->chgCData(oldp+44,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[1]),2);
        bufp->chgCData(oldp+45,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[2]),2);
        bufp->chgCData(oldp+46,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[3]),2);
        bufp->chgCData(oldp+47,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[4]),2);
        bufp->chgCData(oldp+48,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[5]),2);
        bufp->chgCData(oldp+49,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[6]),2);
        bufp->chgCData(oldp+50,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[7]),2);
        bufp->chgCData(oldp+51,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[8]),2);
        bufp->chgCData(oldp+52,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[9]),2);
        bufp->chgCData(oldp+53,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[10]),2);
        bufp->chgSData(oldp+54,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__pair_list[0]),9);
        bufp->chgSData(oldp+55,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__pair_list[1]),9);
        bufp->chgSData(oldp+56,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__pair_list[2]),9);
        bufp->chgCData(oldp+57,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list[0]),7);
        bufp->chgCData(oldp+58,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list[1]),7);
        bufp->chgCData(oldp+59,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list[2]),7);
        bufp->chgCData(oldp+60,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__data_list[0]),2);
        bufp->chgCData(oldp+61,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__data_list[1]),2);
        bufp->chgCData(oldp+62,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__data_list[2]),2);
        bufp->chgCData(oldp+63,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[0]),7);
        bufp->chgCData(oldp+64,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[1]),7);
        bufp->chgCData(oldp+65,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[2]),7);
        bufp->chgCData(oldp+66,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[3]),7);
        bufp->chgCData(oldp+67,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[4]),7);
        bufp->chgCData(oldp+68,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[5]),7);
        bufp->chgCData(oldp+69,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[6]),7);
        bufp->chgCData(oldp+70,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[7]),7);
        bufp->chgCData(oldp+71,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[8]),7);
        bufp->chgCData(oldp+72,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[9]),7);
        bufp->chgCData(oldp+73,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[10]),7);
        bufp->chgCData(oldp+74,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list[0]),5);
        bufp->chgCData(oldp+75,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list[1]),5);
        bufp->chgCData(oldp+76,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list[2]),5);
        bufp->chgCData(oldp+77,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list[3]),5);
        bufp->chgCData(oldp+78,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list[4]),5);
        bufp->chgQData(oldp+79,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__pair_list[0]),37);
        bufp->chgQData(oldp+81,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__pair_list[1]),37);
        bufp->chgQData(oldp+83,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__pair_list[2]),37);
        bufp->chgCData(oldp+85,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list[0]),5);
        bufp->chgCData(oldp+86,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list[1]),5);
        bufp->chgCData(oldp+87,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list[2]),5);
        bufp->chgIData(oldp+88,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__data_list[0]),32);
        bufp->chgIData(oldp+89,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__data_list[1]),32);
        bufp->chgIData(oldp+90,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__data_list[2]),32);
        bufp->chgIData(oldp+91,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+92,(vlSelf->ysyx_23060077_top__DOT__ifu_pc_lst),32);
        bufp->chgIData(oldp+93,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r),32);
        bufp->chgIData(oldp+94,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r),32);
        bufp->chgBit(oldp+95,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i));
        bufp->chgIData(oldp+96,(((IData)(vlSelf->ysyx_23060077_top__DOT__csr_mret)
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
        bufp->chgBit(oldp+97,(((IData)(vlSelf->ysyx_23060077_top__DOT__csr_mret) 
                               | ((IData)(vlSelf->ysyx_23060077_top__DOT__csr_ecall) 
                                  | ((IData)(vlSelf->ysyx_23060077_top__DOT____VdfgTmp_h15124160__0) 
                                     | (0x67U == (0x7fU 
                                                  & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)))))));
        bufp->chgBit(oldp+98,(vlSelf->ysyx_23060077_top__DOT__stall));
        bufp->chgBit(oldp+99,((0x63U == (0x7fU & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r))));
        bufp->chgBit(oldp+100,((0x6fU == (0x7fU & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r))));
        bufp->chgBit(oldp+101,((0x67U == (0x7fU & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r))));
        bufp->chgCData(oldp+102,((0x1fU & ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                                           >> 1U))),5);
        bufp->chgBit(oldp+103,((1U & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out))));
        bufp->chgCData(oldp+104,((0x1fU & ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                                           >> 0xbU))),5);
        bufp->chgCData(oldp+105,((0x1fU & ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                                           >> 6U))),5);
        bufp->chgIData(oldp+106,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r),32);
        bufp->chgCData(oldp+107,(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt),4);
        bufp->chgCData(oldp+108,(vlSelf->ysyx_23060077_top__DOT__idu_src_sel),2);
        bufp->chgCData(oldp+109,(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt),2);
        bufp->chgCData(oldp+110,((7U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                        >> 0xcU))),3);
        bufp->chgIData(oldp+111,(vlSelf->ysyx_23060077_top__DOT__src1),32);
        bufp->chgIData(oldp+112,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wdata),32);
        bufp->chgBit(oldp+113,((1U & (~ (IData)((0U 
                                                 != vlSelf->ysyx_23060077_top__DOT__exu_result))))));
        bufp->chgIData(oldp+114,(vlSelf->ysyx_23060077_top__DOT__exu_result),32);
        bufp->chgIData(oldp+115,(vlSelf->ysyx_23060077_top__DOT__lsu_result),32);
        bufp->chgBit(oldp+116,(vlSelf->ysyx_23060077_top__DOT__lsu_rd_wen));
        bufp->chgBit(oldp+117,(((0U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
                                 ? (IData)(vlSelf->ysyx_23060077_top__DOT____Vcellinp__riscv_wbu_u0__idu_rd_wen)
                                 : ((3U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
                                     ? (IData)(vlSelf->ysyx_23060077_top__DOT____Vcellinp__riscv_wbu_u0__idu_rd_wen)
                                     : (IData)(vlSelf->ysyx_23060077_top__DOT__lsu_rd_wen)))));
        bufp->chgBit(oldp+118,(vlSelf->ysyx_23060077_top__DOT__csr_ecall));
        bufp->chgBit(oldp+119,(vlSelf->ysyx_23060077_top__DOT__csr_mret));
        bufp->chgIData(oldp+120,(vlSelf->ysyx_23060077_top__DOT__wr_csr_data),32);
        bufp->chgIData(oldp+121,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                                 [0x300U]),32);
        bufp->chgIData(oldp+122,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                                 [0x305U]),32);
        bufp->chgIData(oldp+123,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                                 [0x341U]),32);
        bufp->chgBit(oldp+124,((vlSelf->ysyx_23060077_top__DOT__ifu_pc_lst 
                                != vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r)));
        bufp->chgSData(oldp+125,((0xfffU & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)),12);
        bufp->chgBit(oldp+126,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_en));
        bufp->chgIData(oldp+127,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_data_r),32);
        bufp->chgIData(oldp+128,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__temp),32);
        bufp->chgIData(oldp+129,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__mepc_inst_r),32);
        bufp->chgIData(oldp+130,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                                 [0x342U]),32);
        bufp->chgIData(oldp+131,((IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+132,((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)),32);
        bufp->chgIData(oldp+133,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data),32);
        bufp->chgBit(oldp+134,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag));
        bufp->chgQData(oldp+135,((((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                               >> 0x3fU))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                                >> 0x20U))))),33);
        bufp->chgQData(oldp+137,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t),33);
        bufp->chgQData(oldp+139,((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag))),33);
        bufp->chgQData(oldp+141,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out),33);
        bufp->chgBit(oldp+143,((1U & (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+144,((1U & (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+145,((1U & (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+146,((1U & (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+147,((1U & VL_REDXOR_64((0x180000000ULL 
                                                   & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out)))));
        bufp->chgBit(oldp+148,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__carry_flag));
        bufp->chgIData(oldp+149,((IData)(((((QData)((IData)(
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
        __Vtemp_h087321c3__0[0U] = (IData)((0xb00000000ULL 
                                            | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out))));
        __Vtemp_h087321c3__0[1U] = ((((IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                               >> 0x20U)) 
                                      & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)) 
                                     << 4U) | (IData)(
                                                      ((0xb00000000ULL 
                                                        | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out))) 
                                                       >> 0x20U)));
        __Vtemp_h087321c3__0[2U] = (0xa0U | ((((IData)(
                                                       (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                        >> 0x20U)) 
                                               | (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)) 
                                              << 8U) 
                                             | (((IData)(
                                                         (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                          >> 0x20U)) 
                                                 & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)) 
                                                >> 0x1cU)));
        __Vtemp_h087321c3__0[3U] = (0x900U | (((IData)(
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
        __Vtemp_h087321c3__0[4U] = (0x8000U | ((((0x1fU 
                                                  >= 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
                                                  ? 
                                                 ((IData)(
                                                          (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                           >> 0x20U)) 
                                                  >> 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
                                                  : 0U) 
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
        __Vtemp_h087321c3__0[5U] = (0x70000U | ((((IData)(
                                                          (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                           >> 0x20U)) 
                                                  ^ (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)) 
                                                 << 0x14U) 
                                                | (((0x1fU 
                                                     >= 
                                                     (0x3fU 
                                                      & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
                                                     ? 
                                                    ((IData)(
                                                             (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                              >> 0x20U)) 
                                                     >> 
                                                     (0x3fU 
                                                      & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
                                                     : 0U) 
                                                   >> 0x10U)));
        __Vtemp_h087321c3__0[6U] = (0x600000U | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__carry_flag) 
                                                  << 0x18U) 
                                                 | (((IData)(
                                                             (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                              >> 0x20U)) 
                                                     ^ (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)) 
                                                    >> 0xcU)));
        __Vtemp_h087321c3__0[7U] = (0x5000000U | ((IData)(vlSelf->__VdfgTmp_h29117f5a__0) 
                                                  << 0x1cU));
        __Vtemp_h087321c3__0[8U] = 0x40000000U;
        __Vtemp_h087321c3__0[9U] = ((0x1fU >= (0x3fU 
                                               & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
                                     ? ((IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                 >> 0x20U)) 
                                        << (0x3fU & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
                                     : 0U);
        __Vtemp_h087321c3__0[0xaU] = (3U | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out) 
                                            << 4U));
        __Vtemp_h087321c3__0[0xbU] = (0x20U | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out) 
                                                << 8U) 
                                               | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out) 
                                                  >> 0x1cU)));
        __Vtemp_h087321c3__0[0xcU] = (0x100U | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out) 
                                                >> 0x18U));
        bufp->chgWData(oldp+150,(__Vtemp_h087321c3__0),396);
        bufp->chgQData(oldp+163,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[0]),36);
        bufp->chgQData(oldp+165,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[1]),36);
        bufp->chgQData(oldp+167,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[2]),36);
        bufp->chgQData(oldp+169,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[3]),36);
        bufp->chgQData(oldp+171,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[4]),36);
        bufp->chgQData(oldp+173,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[5]),36);
        bufp->chgQData(oldp+175,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[6]),36);
        bufp->chgQData(oldp+177,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[7]),36);
        bufp->chgQData(oldp+179,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[8]),36);
        bufp->chgQData(oldp+181,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[9]),36);
        bufp->chgQData(oldp+183,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[10]),36);
        bufp->chgIData(oldp+185,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[0]),32);
        bufp->chgIData(oldp+186,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[1]),32);
        bufp->chgIData(oldp+187,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[2]),32);
        bufp->chgIData(oldp+188,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[3]),32);
        bufp->chgIData(oldp+189,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[4]),32);
        bufp->chgIData(oldp+190,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[5]),32);
        bufp->chgIData(oldp+191,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[6]),32);
        bufp->chgIData(oldp+192,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[7]),32);
        bufp->chgIData(oldp+193,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[8]),32);
        bufp->chgIData(oldp+194,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[9]),32);
        bufp->chgIData(oldp+195,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[10]),32);
        bufp->chgIData(oldp+196,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out),32);
        bufp->chgBit(oldp+197,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit));
        bufp->chgCData(oldp+198,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key),4);
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
        bufp->chgWData(oldp+199,(__Vtemp_h86f1ea95__0),216);
        bufp->chgQData(oldp+206,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[0]),36);
        bufp->chgQData(oldp+208,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[1]),36);
        bufp->chgQData(oldp+210,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[2]),36);
        bufp->chgQData(oldp+212,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[3]),36);
        bufp->chgQData(oldp+214,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[4]),36);
        bufp->chgQData(oldp+216,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[5]),36);
        bufp->chgIData(oldp+218,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[0]),32);
        bufp->chgIData(oldp+219,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[1]),32);
        bufp->chgIData(oldp+220,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[2]),32);
        bufp->chgIData(oldp+221,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[3]),32);
        bufp->chgIData(oldp+222,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[4]),32);
        bufp->chgIData(oldp+223,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[5]),32);
        bufp->chgIData(oldp+224,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out),32);
        bufp->chgBit(oldp+225,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit));
        bufp->chgQData(oldp+226,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out),64);
        __Vtemp_hf0a01500__0[0U] = (IData)((((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r))));
        __Vtemp_hf0a01500__0[1U] = (IData)(((((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r))) 
                                            >> 0x20U));
        __Vtemp_hf0a01500__0[2U] = 0x13U;
        __Vtemp_hf0a01500__0[3U] = (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r 
                                    << 2U);
        __Vtemp_hf0a01500__0[4U] = (8U | (((IData)(
                                                   (((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__src1)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)))) 
                                           << 4U) | 
                                          (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r 
                                           >> 0x1eU)));
        __Vtemp_hf0a01500__0[5U] = (((IData)((((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__src1)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)))) 
                                     >> 0x1cU) | ((IData)(
                                                          ((((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__src1)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r))) 
                                                           >> 0x20U)) 
                                                  << 4U));
        __Vtemp_hf0a01500__0[6U] = (0x10U | (((IData)(
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
        __Vtemp_hf0a01500__0[7U] = (((IData)((((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__src1)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wdata)))) 
                                     >> 0x1aU) | ((IData)(
                                                          ((((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__src1)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wdata))) 
                                                           >> 0x20U)) 
                                                  << 6U));
        __Vtemp_hf0a01500__0[8U] = ((IData)(((((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__src1)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wdata))) 
                                             >> 0x20U)) 
                                    >> 0x1aU);
        bufp->chgWData(oldp+228,(__Vtemp_hf0a01500__0),264);
        bufp->chgWData(oldp+237,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[0]),66);
        bufp->chgWData(oldp+240,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[1]),66);
        bufp->chgWData(oldp+243,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[2]),66);
        bufp->chgWData(oldp+246,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[3]),66);
        bufp->chgQData(oldp+249,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[0]),64);
        bufp->chgQData(oldp+251,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[1]),64);
        bufp->chgQData(oldp+253,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[2]),64);
        bufp->chgQData(oldp+255,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[3]),64);
        bufp->chgQData(oldp+257,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out),64);
        bufp->chgBit(oldp+259,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit));
        bufp->chgCData(oldp+260,((0x7fU & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)),7);
        bufp->chgCData(oldp+261,((vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                  >> 0x19U)),7);
        bufp->chgIData(oldp+262,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI),32);
        bufp->chgIData(oldp+263,((0xfffff000U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)),32);
        bufp->chgIData(oldp+264,((((- (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                     >> 7U))))),32);
        bufp->chgIData(oldp+265,((((- (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
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
        bufp->chgIData(oldp+266,((((- (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
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
        bufp->chgSData(oldp+267,(((0x1000U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                              >> 0x13U)) 
                                  | ((0x800U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                << 4U)) 
                                     | ((0x7e0U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                            >> 7U)))))),13);
        bufp->chgSData(oldp+268,((vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                  >> 0x14U)),12);
        bufp->chgIData(oldp+269,(((0x100000U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                >> 0xbU)) 
                                  | ((0xff000U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r) 
                                     | ((0x800U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                   >> 9U)) 
                                        | (0x7feU & 
                                           (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                            >> 0x14U)))))),21);
        bufp->chgSData(oldp+270,(((0xfe0U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                             >> 0x14U)) 
                                  | (0x1fU & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                              >> 7U)))),12);
        bufp->chgCData(oldp+271,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out),2);
        bufp->chgBit(oldp+272,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit));
        bufp->chgCData(oldp+273,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__lut_out),2);
        bufp->chgBit(oldp+274,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__hit));
        bufp->chgSData(oldp+275,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out),16);
        bufp->chgWData(oldp+276,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellinp__riscv_mux_id_reg__lut),253);
        bufp->chgIData(oldp+284,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[0]),23);
        bufp->chgIData(oldp+285,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[1]),23);
        bufp->chgIData(oldp+286,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[2]),23);
        bufp->chgIData(oldp+287,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[3]),23);
        bufp->chgIData(oldp+288,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[4]),23);
        bufp->chgIData(oldp+289,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[5]),23);
        bufp->chgIData(oldp+290,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[6]),23);
        bufp->chgIData(oldp+291,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[7]),23);
        bufp->chgIData(oldp+292,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[8]),23);
        bufp->chgIData(oldp+293,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[9]),23);
        bufp->chgIData(oldp+294,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[10]),23);
        bufp->chgSData(oldp+295,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[0]),16);
        bufp->chgSData(oldp+296,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[1]),16);
        bufp->chgSData(oldp+297,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[2]),16);
        bufp->chgSData(oldp+298,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[3]),16);
        bufp->chgSData(oldp+299,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[4]),16);
        bufp->chgSData(oldp+300,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[5]),16);
        bufp->chgSData(oldp+301,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[6]),16);
        bufp->chgSData(oldp+302,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[7]),16);
        bufp->chgSData(oldp+303,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[8]),16);
        bufp->chgSData(oldp+304,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[9]),16);
        bufp->chgSData(oldp+305,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[10]),16);
        bufp->chgSData(oldp+306,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out),16);
        bufp->chgBit(oldp+307,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit));
        bufp->chgIData(oldp+308,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc),32);
        bufp->chgIData(oldp+309,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_r_data_o_r),32);
        bufp->chgBit(oldp+310,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_r_valid_o_r));
        bufp->chgBit(oldp+311,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_b_valid_o_r));
        bufp->chgBit(oldp+312,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_aw_ready_o_r));
        bufp->chgBit(oldp+313,((1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state))));
        bufp->chgBit(oldp+314,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_w_ready_o_r));
        bufp->chgBit(oldp+315,((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state))));
        bufp->chgBit(oldp+316,((3U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state))));
        bufp->chgBit(oldp+317,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_ar_ready_o_r));
        bufp->chgBit(oldp+318,((1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state))));
        bufp->chgBit(oldp+319,((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state))));
        bufp->chgCData(oldp+320,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state),3);
        bufp->chgCData(oldp+321,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state),2);
        bufp->chgCData(oldp+322,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_w_state),3);
        bufp->chgIData(oldp+323,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_addr),32);
        bufp->chgIData(oldp+324,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_data),32);
        bufp->chgIData(oldp+325,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_mask),32);
        bufp->chgCData(oldp+326,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_r_state),2);
        bufp->chgIData(oldp+327,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__r_addr),32);
        bufp->chgIData(oldp+328,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__r_data),32);
        bufp->chgCData(oldp+329,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__r_delay_cnt),4);
        bufp->chgIData(oldp+330,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__raddr),32);
        bufp->chgIData(oldp+331,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_r_data_o_r),32);
        bufp->chgIData(oldp+332,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__mask),32);
        bufp->chgBit(oldp+333,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__ren));
        bufp->chgBit(oldp+334,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wen));
        bufp->chgBit(oldp+335,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_r_valid_o_r));
        bufp->chgBit(oldp+336,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_b_valid_o_r));
        bufp->chgCData(oldp+337,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key),5);
        __Vtemp_hed5adefe__0[0U] = (IData)((0xd00000000ULL 
                                            | (((QData)((IData)(
                                                                (0xffU 
                                                                 & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_r_data_o_r))) 
                                                << 0x25U) 
                                               | (QData)((IData)(
                                                                 (0xffffU 
                                                                  & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_r_data_o_r))))));
        __Vtemp_hed5adefe__0[1U] = (IData)(((0xd00000000ULL 
                                             | (((QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_r_data_o_r))) 
                                                 << 0x25U) 
                                                | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_r_data_o_r))))) 
                                            >> 0x20U));
        __Vtemp_hed5adefe__0[2U] = (0x180U | (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_r_data_o_r 
                                              << 0xaU));
        __Vtemp_hed5adefe__0[3U] = (0x2800U | ((0xffff8000U 
                                                & (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_r_data_o_r 
                                                                   >> 0xfU)))) 
                                                    << 0x1fU) 
                                                   | (0x7fff8000U 
                                                      & (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_r_data_o_r 
                                                         << 0xfU)))) 
                                               | (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_r_data_o_r 
                                                  >> 0x16U)));
        __Vtemp_hed5adefe__0[4U] = (0x48000U | ((0xfff00000U 
                                                 & (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_r_data_o_r 
                                                                    >> 7U)))) 
                                                     << 0x1cU) 
                                                    | (0xff00000U 
                                                       & (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_r_data_o_r 
                                                          << 0x14U)))) 
                                                | (0x7fffU 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_r_data_o_r 
                                                                     >> 0xfU)))) 
                                                      >> 1U))));
        __Vtemp_hed5adefe__0[5U] = (0x800000U | (0xfffffU 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_r_data_o_r 
                                                                   >> 7U)))) 
                                                    >> 4U)));
        bufp->chgWData(oldp+338,(__Vtemp_hed5adefe__0),185);
        bufp->chgQData(oldp+344,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[0]),37);
        bufp->chgQData(oldp+346,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[1]),37);
        bufp->chgQData(oldp+348,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[2]),37);
        bufp->chgQData(oldp+350,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[3]),37);
        bufp->chgQData(oldp+352,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[4]),37);
        bufp->chgIData(oldp+354,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[0]),32);
        bufp->chgIData(oldp+355,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[1]),32);
        bufp->chgIData(oldp+356,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[2]),32);
        bufp->chgIData(oldp+357,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[3]),32);
        bufp->chgIData(oldp+358,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[4]),32);
        bufp->chgIData(oldp+359,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out),32);
        bufp->chgBit(oldp+360,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit));
        bufp->chgIData(oldp+361,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__lut_out),32);
        bufp->chgBit(oldp+362,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__hit));
        bufp->chgCData(oldp+363,((7U & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__mask)),3);
        bufp->chgBit(oldp+364,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_aw_ready_o_r));
        bufp->chgBit(oldp+365,((1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state))));
        bufp->chgBit(oldp+366,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_w_ready_o_r));
        bufp->chgBit(oldp+367,((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state))));
        bufp->chgBit(oldp+368,((3U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state))));
        bufp->chgBit(oldp+369,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_ar_ready_o_r));
        bufp->chgBit(oldp+370,((1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state))));
        bufp->chgBit(oldp+371,((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state))));
        bufp->chgCData(oldp+372,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state),3);
        bufp->chgCData(oldp+373,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state),2);
        bufp->chgCData(oldp+374,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_w_state),3);
        bufp->chgIData(oldp+375,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_addr),32);
        bufp->chgIData(oldp+376,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_data),32);
        bufp->chgIData(oldp+377,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_mask),32);
        bufp->chgCData(oldp+378,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_r_state),2);
        bufp->chgIData(oldp+379,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__r_addr),32);
        bufp->chgIData(oldp+380,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__r_data),32);
        bufp->chgCData(oldp+381,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__r_delay_cnt),4);
        bufp->chgIData(oldp+382,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[0]),32);
        bufp->chgIData(oldp+383,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[1]),32);
        bufp->chgIData(oldp+384,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[2]),32);
        bufp->chgIData(oldp+385,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[3]),32);
        bufp->chgIData(oldp+386,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[4]),32);
        bufp->chgIData(oldp+387,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[5]),32);
        bufp->chgIData(oldp+388,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[6]),32);
        bufp->chgIData(oldp+389,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[7]),32);
        bufp->chgIData(oldp+390,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[8]),32);
        bufp->chgIData(oldp+391,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[9]),32);
        bufp->chgIData(oldp+392,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[10]),32);
        bufp->chgIData(oldp+393,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[11]),32);
        bufp->chgIData(oldp+394,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[12]),32);
        bufp->chgIData(oldp+395,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[13]),32);
        bufp->chgIData(oldp+396,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[14]),32);
        bufp->chgIData(oldp+397,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[15]),32);
        bufp->chgIData(oldp+398,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[16]),32);
        bufp->chgIData(oldp+399,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[17]),32);
        bufp->chgIData(oldp+400,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[18]),32);
        bufp->chgIData(oldp+401,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[19]),32);
        bufp->chgIData(oldp+402,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[20]),32);
        bufp->chgIData(oldp+403,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[21]),32);
        bufp->chgIData(oldp+404,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[22]),32);
        bufp->chgIData(oldp+405,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[23]),32);
        bufp->chgIData(oldp+406,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[24]),32);
        bufp->chgIData(oldp+407,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[25]),32);
        bufp->chgIData(oldp+408,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[26]),32);
        bufp->chgIData(oldp+409,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[27]),32);
        bufp->chgIData(oldp+410,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[28]),32);
        bufp->chgIData(oldp+411,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[29]),32);
        bufp->chgIData(oldp+412,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[30]),32);
        bufp->chgIData(oldp+413,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[31]),32);
        bufp->chgBit(oldp+414,(vlSelf->ysyx_23060077_top__DOT____Vcellinp__riscv_wbu_u0__idu_rd_wen));
    }
    bufp->chgBit(oldp+415,(vlSelf->clk));
    bufp->chgBit(oldp+416,(vlSelf->rst_n));
    bufp->chgIData(oldp+417,(((0U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
                               ? vlSelf->ysyx_23060077_top__DOT__exu_result
                               : ((3U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
                                   ? ((IData)(vlSelf->rst_n)
                                       ? ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_en)
                                           ? vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                                          [(0xfffU 
                                            & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)]
                                           : 0U) : 0U)
                                   : vlSelf->ysyx_23060077_top__DOT__lsu_result))),32);
    bufp->chgIData(oldp+418,(((IData)(vlSelf->rst_n)
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
