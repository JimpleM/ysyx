// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vriscv32__Syms.h"


void Vriscv32___024root__trace_chg_sub_0(Vriscv32___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vriscv32___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv32___024root__trace_chg_top_0\n"); );
    // Init
    Vriscv32___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv32___024root*>(voidSelf);
    Vriscv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vriscv32___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vriscv32___024root__trace_chg_sub_0(Vriscv32___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv32___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<9>/*287:0*/ __Vtemp_hd9d822d0__0;
    VlWide<13>/*415:0*/ __Vtemp_h14f39f00__0;
    VlWide<7>/*223:0*/ __Vtemp_h39041830__0;
    VlWide<6>/*191:0*/ __Vtemp_h82212276__0;
    VlWide<14>/*447:0*/ __Vtemp_h56c4ca1e__0;
    VlWide<3>/*95:0*/ __Vtemp_h8c6da091__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[0]),4);
        bufp->chgCData(oldp+1,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[1]),4);
        bufp->chgCData(oldp+2,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[2]),4);
        bufp->chgCData(oldp+3,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[3]),4);
        bufp->chgCData(oldp+4,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[4]),4);
        bufp->chgCData(oldp+5,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[5]),4);
        bufp->chgCData(oldp+6,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[6]),4);
        bufp->chgCData(oldp+7,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[7]),4);
        bufp->chgCData(oldp+8,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[8]),4);
        bufp->chgCData(oldp+9,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[9]),4);
        bufp->chgCData(oldp+10,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[10]),4);
        bufp->chgCData(oldp+11,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[0]),4);
        bufp->chgCData(oldp+12,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[1]),4);
        bufp->chgCData(oldp+13,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[2]),4);
        bufp->chgCData(oldp+14,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[3]),4);
        bufp->chgCData(oldp+15,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[4]),4);
        bufp->chgCData(oldp+16,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[5]),4);
        bufp->chgCData(oldp+17,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list[0]),2);
        bufp->chgCData(oldp+18,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list[1]),2);
        bufp->chgCData(oldp+19,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list[2]),2);
        bufp->chgCData(oldp+20,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list[3]),2);
        bufp->chgCData(oldp+21,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list[0]),7);
        bufp->chgCData(oldp+22,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list[1]),7);
        bufp->chgCData(oldp+23,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list[2]),7);
        bufp->chgCData(oldp+24,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list[3]),7);
        bufp->chgCData(oldp+25,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list[4]),7);
        bufp->chgCData(oldp+26,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list[5]),7);
        bufp->chgCData(oldp+27,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list[6]),7);
        bufp->chgCData(oldp+28,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list[7]),7);
        bufp->chgCData(oldp+29,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list[8]),7);
        bufp->chgCData(oldp+30,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list[9]),7);
        bufp->chgCData(oldp+31,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list[10]),7);
        bufp->chgSData(oldp+32,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__pair_list[0]),9);
        bufp->chgSData(oldp+33,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__pair_list[1]),9);
        bufp->chgCData(oldp+34,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list[0]),7);
        bufp->chgCData(oldp+35,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list[1]),7);
        bufp->chgCData(oldp+36,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__data_list[0]),2);
        bufp->chgCData(oldp+37,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__data_list[1]),2);
        bufp->chgSData(oldp+38,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[0]),9);
        bufp->chgSData(oldp+39,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[1]),9);
        bufp->chgSData(oldp+40,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[2]),9);
        bufp->chgSData(oldp+41,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[3]),9);
        bufp->chgSData(oldp+42,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[4]),9);
        bufp->chgSData(oldp+43,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[5]),9);
        bufp->chgSData(oldp+44,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[6]),9);
        bufp->chgSData(oldp+45,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[7]),9);
        bufp->chgSData(oldp+46,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[8]),9);
        bufp->chgSData(oldp+47,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[9]),9);
        bufp->chgSData(oldp+48,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[10]),9);
        bufp->chgCData(oldp+49,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[0]),7);
        bufp->chgCData(oldp+50,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[1]),7);
        bufp->chgCData(oldp+51,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[2]),7);
        bufp->chgCData(oldp+52,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[3]),7);
        bufp->chgCData(oldp+53,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[4]),7);
        bufp->chgCData(oldp+54,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[5]),7);
        bufp->chgCData(oldp+55,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[6]),7);
        bufp->chgCData(oldp+56,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[7]),7);
        bufp->chgCData(oldp+57,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[8]),7);
        bufp->chgCData(oldp+58,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[9]),7);
        bufp->chgCData(oldp+59,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[10]),7);
        bufp->chgCData(oldp+60,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[0]),2);
        bufp->chgCData(oldp+61,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[1]),2);
        bufp->chgCData(oldp+62,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[2]),2);
        bufp->chgCData(oldp+63,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[3]),2);
        bufp->chgCData(oldp+64,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[4]),2);
        bufp->chgCData(oldp+65,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[5]),2);
        bufp->chgCData(oldp+66,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[6]),2);
        bufp->chgCData(oldp+67,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[7]),2);
        bufp->chgCData(oldp+68,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[8]),2);
        bufp->chgCData(oldp+69,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[9]),2);
        bufp->chgCData(oldp+70,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[10]),2);
        bufp->chgCData(oldp+71,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[0]),7);
        bufp->chgCData(oldp+72,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[1]),7);
        bufp->chgCData(oldp+73,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[2]),7);
        bufp->chgCData(oldp+74,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[3]),7);
        bufp->chgCData(oldp+75,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[4]),7);
        bufp->chgCData(oldp+76,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[5]),7);
        bufp->chgCData(oldp+77,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[6]),7);
        bufp->chgCData(oldp+78,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[7]),7);
        bufp->chgCData(oldp+79,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[8]),7);
        bufp->chgCData(oldp+80,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[9]),7);
        bufp->chgCData(oldp+81,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[10]),7);
        bufp->chgCData(oldp+82,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list[0]),5);
        bufp->chgCData(oldp+83,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list[1]),5);
        bufp->chgCData(oldp+84,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list[2]),5);
        bufp->chgCData(oldp+85,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list[3]),5);
        bufp->chgCData(oldp+86,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list[4]),5);
        bufp->chgQData(oldp+87,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__pair_list[0]),37);
        bufp->chgQData(oldp+89,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__pair_list[1]),37);
        bufp->chgQData(oldp+91,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__pair_list[2]),37);
        bufp->chgCData(oldp+93,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list[0]),5);
        bufp->chgCData(oldp+94,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list[1]),5);
        bufp->chgCData(oldp+95,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list[2]),5);
        bufp->chgIData(oldp+96,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__data_list[0]),32);
        bufp->chgIData(oldp+97,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__data_list[1]),32);
        bufp->chgIData(oldp+98,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__data_list[2]),32);
        bufp->chgIData(oldp+99,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[4U]) 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        __Vtemp_hd9d822d0__0[0U] = (IData)((((QData)((IData)(vlSelf->riscv32__DOT__ifu_pc)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->riscv32__DOT__idu_imm))));
        __Vtemp_hd9d822d0__0[1U] = (IData)(((((QData)((IData)(vlSelf->riscv32__DOT__ifu_pc)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->riscv32__DOT__idu_imm))) 
                                            >> 0x20U));
        __Vtemp_hd9d822d0__0[2U] = 0x13U;
        __Vtemp_hd9d822d0__0[3U] = (vlSelf->riscv32__DOT__ifu_pc 
                                    << 2U);
        __Vtemp_hd9d822d0__0[4U] = (8U | (((IData)(
                                                   (((QData)((IData)(vlSelf->riscv32__DOT__src1)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->riscv32__DOT__idu_imm)))) 
                                           << 4U) | 
                                          (vlSelf->riscv32__DOT__ifu_pc 
                                           >> 0x1eU)));
        __Vtemp_hd9d822d0__0[5U] = (((IData)((((QData)((IData)(vlSelf->riscv32__DOT__src1)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->riscv32__DOT__idu_imm)))) 
                                     >> 0x1cU) | ((IData)(
                                                          ((((QData)((IData)(vlSelf->riscv32__DOT__src1)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->riscv32__DOT__idu_imm))) 
                                                           >> 0x20U)) 
                                                  << 4U));
        __Vtemp_hd9d822d0__0[6U] = (0x10U | (((IData)(
                                                      (((QData)((IData)(vlSelf->riscv32__DOT__src1)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->riscv32__DOT__src2)))) 
                                              << 6U) 
                                             | ((IData)(
                                                        ((((QData)((IData)(vlSelf->riscv32__DOT__src1)) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(vlSelf->riscv32__DOT__idu_imm))) 
                                                         >> 0x20U)) 
                                                >> 0x1cU)));
        __Vtemp_hd9d822d0__0[7U] = (((IData)((((QData)((IData)(vlSelf->riscv32__DOT__src1)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->riscv32__DOT__src2)))) 
                                     >> 0x1aU) | ((IData)(
                                                          ((((QData)((IData)(vlSelf->riscv32__DOT__src1)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->riscv32__DOT__src2))) 
                                                           >> 0x20U)) 
                                                  << 6U));
        __Vtemp_hd9d822d0__0[8U] = ((IData)(((((QData)((IData)(vlSelf->riscv32__DOT__src1)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->riscv32__DOT__src2))) 
                                             >> 0x20U)) 
                                    >> 0x1aU);
        bufp->chgWData(oldp+100,(__Vtemp_hd9d822d0__0),264);
        bufp->chgWData(oldp+109,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[0]),66);
        bufp->chgWData(oldp+112,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[1]),66);
        bufp->chgWData(oldp+115,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[2]),66);
        bufp->chgWData(oldp+118,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[3]),66);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgIData(oldp+121,(vlSelf->riscv32__DOT__rd_data),32);
        bufp->chgBit(oldp+122,((1U & (~ (IData)((0U 
                                                 != vlSelf->riscv32__DOT__exu_result))))));
        bufp->chgIData(oldp+123,(vlSelf->riscv32__DOT__exu_result),32);
        bufp->chgIData(oldp+124,(vlSelf->riscv32__DOT__lsu_result),32);
        bufp->chgIData(oldp+125,((IData)((vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+126,((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)),32);
        bufp->chgIData(oldp+127,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data),32);
        bufp->chgBit(oldp+128,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__carry_flag));
        bufp->chgIData(oldp+129,(((IData)((vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                           >> 0x20U)) 
                                  + (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out))),32);
        bufp->chgIData(oldp+130,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_data),32);
        __Vtemp_h14f39f00__0[0U] = (IData)((0xb00000000ULL 
                                            | (QData)((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_data))));
        __Vtemp_h14f39f00__0[1U] = ((((IData)((vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                               >> 0x20U)) 
                                      & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)) 
                                     << 4U) | (IData)(
                                                      ((0xb00000000ULL 
                                                        | (QData)((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_data))) 
                                                       >> 0x20U)));
        __Vtemp_h14f39f00__0[2U] = (0xa0U | ((((IData)(
                                                       (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                        >> 0x20U)) 
                                               | (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)) 
                                              << 8U) 
                                             | (((IData)(
                                                         (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                          >> 0x20U)) 
                                                 & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)) 
                                                >> 0x1cU)));
        __Vtemp_h14f39f00__0[3U] = (0x900U | ((vlSelf->__VdfgTmp_ha3892a3b__0 
                                               << 0xcU) 
                                              | (((IData)(
                                                          (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                           >> 0x20U)) 
                                                  | (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)) 
                                                 >> 0x18U)));
        __Vtemp_h14f39f00__0[4U] = (0x8000U | ((((0x1fU 
                                                  >= 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
                                                  ? 
                                                 ((IData)(
                                                          (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                           >> 0x20U)) 
                                                  >> 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
                                                  : 0U) 
                                                << 0x10U) 
                                               | (0xfffU 
                                                  & ((0x800U 
                                                      & ((IData)(
                                                                 (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                                  >> 0x3fU)) 
                                                         << 0xbU)) 
                                                     | (vlSelf->__VdfgTmp_ha3892a3b__0 
                                                        >> 0x14U)))));
        __Vtemp_h14f39f00__0[5U] = (0x70000U | ((((IData)(
                                                          (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                           >> 0x20U)) 
                                                  ^ (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)) 
                                                 << 0x14U) 
                                                | (((0x1fU 
                                                     >= 
                                                     (0x3fU 
                                                      & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
                                                     ? 
                                                    ((IData)(
                                                             (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                              >> 0x20U)) 
                                                     >> 
                                                     (0x3fU 
                                                      & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
                                                     : 0U) 
                                                   >> 0x10U)));
        __Vtemp_h14f39f00__0[6U] = (0x600000U | (((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__carry_flag) 
                                                  << 0x18U) 
                                                 | (((IData)(
                                                             (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                              >> 0x20U)) 
                                                     ^ (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)) 
                                                    >> 0xcU)));
        __Vtemp_h14f39f00__0[7U] = (0x5000000U | (0x10000000U 
                                                  & (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_data 
                                                     >> 3U)));
        __Vtemp_h14f39f00__0[8U] = 0x40000000U;
        __Vtemp_h14f39f00__0[9U] = ((0x1fU >= (0x3fU 
                                               & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
                                     ? ((IData)((vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                 >> 0x20U)) 
                                        << (0x3fU & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
                                     : 0U);
        __Vtemp_h14f39f00__0[0xaU] = (3U | (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_data 
                                            << 4U));
        __Vtemp_h14f39f00__0[0xbU] = (0x20U | ((((IData)(
                                                         (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                          >> 0x20U)) 
                                                 + (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)) 
                                                << 8U) 
                                               | (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_data 
                                                  >> 0x1cU)));
        __Vtemp_h14f39f00__0[0xcU] = (0x100U | (((IData)(
                                                         (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                          >> 0x20U)) 
                                                 + (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)) 
                                                >> 0x18U));
        bufp->chgWData(oldp+131,(__Vtemp_h14f39f00__0),396);
        bufp->chgQData(oldp+144,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[0]),36);
        bufp->chgQData(oldp+146,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[1]),36);
        bufp->chgQData(oldp+148,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[2]),36);
        bufp->chgQData(oldp+150,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[3]),36);
        bufp->chgQData(oldp+152,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[4]),36);
        bufp->chgQData(oldp+154,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[5]),36);
        bufp->chgQData(oldp+156,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[6]),36);
        bufp->chgQData(oldp+158,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[7]),36);
        bufp->chgQData(oldp+160,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[8]),36);
        bufp->chgQData(oldp+162,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[9]),36);
        bufp->chgQData(oldp+164,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[10]),36);
        bufp->chgIData(oldp+166,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[0]),32);
        bufp->chgIData(oldp+167,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[1]),32);
        bufp->chgIData(oldp+168,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[2]),32);
        bufp->chgIData(oldp+169,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[3]),32);
        bufp->chgIData(oldp+170,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[4]),32);
        bufp->chgIData(oldp+171,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[5]),32);
        bufp->chgIData(oldp+172,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[6]),32);
        bufp->chgIData(oldp+173,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[7]),32);
        bufp->chgIData(oldp+174,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[8]),32);
        bufp->chgIData(oldp+175,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[9]),32);
        bufp->chgIData(oldp+176,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[10]),32);
        bufp->chgIData(oldp+177,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out),32);
        bufp->chgBit(oldp+178,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit));
        __Vtemp_h39041830__0[0U] = (IData)((0xf00000000ULL 
                                            | (((QData)((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__carry_flag)) 
                                                << 0x24U) 
                                               | (QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__carry_flag))))))));
        __Vtemp_h39041830__0[1U] = (IData)(((0xf00000000ULL 
                                             | (((QData)((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__carry_flag)) 
                                                 << 0x24U) 
                                                | (QData)((IData)(
                                                                  (1U 
                                                                   & (~ (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__carry_flag))))))) 
                                            >> 0x20U));
        __Vtemp_h39041830__0[2U] = (0xe0U | (0x100U 
                                             & ((~ 
                                                 (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data 
                                                  >> 0x1fU)) 
                                                << 8U)));
        __Vtemp_h39041830__0[3U] = (0xd00U | (0x1000U 
                                              & (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data 
                                                 >> 0x13U)));
        __Vtemp_h39041830__0[4U] = (0xc000U | ((IData)(
                                                       (0U 
                                                        != vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data)) 
                                               << 0x10U));
        __Vtemp_h39041830__0[5U] = (0x90000U | (0x100000U 
                                                & ((~ (IData)(
                                                              (0U 
                                                               != vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data))) 
                                                   << 0x14U)));
        __Vtemp_h39041830__0[6U] = 0x800000U;
        bufp->chgWData(oldp+179,(__Vtemp_h39041830__0),216);
        bufp->chgQData(oldp+186,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[0]),36);
        bufp->chgQData(oldp+188,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[1]),36);
        bufp->chgQData(oldp+190,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[2]),36);
        bufp->chgQData(oldp+192,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[3]),36);
        bufp->chgQData(oldp+194,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[4]),36);
        bufp->chgQData(oldp+196,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[5]),36);
        bufp->chgIData(oldp+198,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[0]),32);
        bufp->chgIData(oldp+199,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[1]),32);
        bufp->chgIData(oldp+200,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[2]),32);
        bufp->chgIData(oldp+201,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[3]),32);
        bufp->chgIData(oldp+202,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[4]),32);
        bufp->chgIData(oldp+203,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[5]),32);
        bufp->chgIData(oldp+204,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out),32);
        bufp->chgBit(oldp+205,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit));
        bufp->chgQData(oldp+206,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out),64);
        bufp->chgQData(oldp+208,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out),64);
        bufp->chgBit(oldp+210,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit));
        bufp->chgIData(oldp+211,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata),32);
        __Vtemp_h82212276__0[0U] = (IData)((0xd00000000ULL 
                                            | (((QData)((IData)(
                                                                (0xffU 
                                                                 & vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata))) 
                                                << 0x25U) 
                                               | (QData)((IData)(
                                                                 (0xffffU 
                                                                  & vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata))))));
        __Vtemp_h82212276__0[1U] = (IData)(((0xd00000000ULL 
                                             | (((QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata))) 
                                                 << 0x25U) 
                                                | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata))))) 
                                            >> 0x20U));
        __Vtemp_h82212276__0[2U] = (0x180U | (vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata 
                                              << 0xaU));
        __Vtemp_h82212276__0[3U] = (0x2800U | ((0xffff8000U 
                                                & (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata 
                                                                   >> 0xfU)))) 
                                                    << 0x1fU) 
                                                   | (0x7fff8000U 
                                                      & (vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata 
                                                         << 0xfU)))) 
                                               | (vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata 
                                                  >> 0x16U)));
        __Vtemp_h82212276__0[4U] = (0x48000U | ((0xfff00000U 
                                                 & (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata 
                                                                    >> 7U)))) 
                                                     << 0x1cU) 
                                                    | (0xff00000U 
                                                       & (vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata 
                                                          << 0x14U)))) 
                                                | (0x7fffU 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata 
                                                                     >> 0xfU)))) 
                                                      >> 1U))));
        __Vtemp_h82212276__0[5U] = (0x800000U | (0xfffffU 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata 
                                                                   >> 7U)))) 
                                                    >> 4U)));
        bufp->chgWData(oldp+212,(__Vtemp_h82212276__0),185);
        bufp->chgQData(oldp+218,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[0]),37);
        bufp->chgQData(oldp+220,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[1]),37);
        bufp->chgQData(oldp+222,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[2]),37);
        bufp->chgQData(oldp+224,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[3]),37);
        bufp->chgQData(oldp+226,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[4]),37);
        bufp->chgIData(oldp+228,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[0]),32);
        bufp->chgIData(oldp+229,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[1]),32);
        bufp->chgIData(oldp+230,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[2]),32);
        bufp->chgIData(oldp+231,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[3]),32);
        bufp->chgIData(oldp+232,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[4]),32);
        bufp->chgIData(oldp+233,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out),32);
        bufp->chgBit(oldp+234,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgIData(oldp+235,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[0]),32);
        bufp->chgIData(oldp+236,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[1]),32);
        bufp->chgIData(oldp+237,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[2]),32);
        bufp->chgIData(oldp+238,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[3]),32);
        bufp->chgIData(oldp+239,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[4]),32);
        bufp->chgIData(oldp+240,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[5]),32);
        bufp->chgIData(oldp+241,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[6]),32);
        bufp->chgIData(oldp+242,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[7]),32);
        bufp->chgIData(oldp+243,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[8]),32);
        bufp->chgIData(oldp+244,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[9]),32);
        bufp->chgIData(oldp+245,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[10]),32);
        bufp->chgIData(oldp+246,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[11]),32);
        bufp->chgIData(oldp+247,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[12]),32);
        bufp->chgIData(oldp+248,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[13]),32);
        bufp->chgIData(oldp+249,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[14]),32);
        bufp->chgIData(oldp+250,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[15]),32);
        bufp->chgIData(oldp+251,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[16]),32);
        bufp->chgIData(oldp+252,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[17]),32);
        bufp->chgIData(oldp+253,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[18]),32);
        bufp->chgIData(oldp+254,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[19]),32);
        bufp->chgIData(oldp+255,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[20]),32);
        bufp->chgIData(oldp+256,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[21]),32);
        bufp->chgIData(oldp+257,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[22]),32);
        bufp->chgIData(oldp+258,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[23]),32);
        bufp->chgIData(oldp+259,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[24]),32);
        bufp->chgIData(oldp+260,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[25]),32);
        bufp->chgIData(oldp+261,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[26]),32);
        bufp->chgIData(oldp+262,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[27]),32);
        bufp->chgIData(oldp+263,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[28]),32);
        bufp->chgIData(oldp+264,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[29]),32);
        bufp->chgIData(oldp+265,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[30]),32);
        bufp->chgIData(oldp+266,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+267,(vlSelf->riscv32__DOT__rst_n));
        bufp->chgIData(oldp+268,(vlSelf->riscv32__DOT__ifu_pc),32);
        bufp->chgIData(oldp+269,(vlSelf->riscv32__DOT__ifu_inst),32);
        bufp->chgBit(oldp+270,((0x63U == (0x7fU & vlSelf->riscv32__DOT__ifu_inst))));
        bufp->chgBit(oldp+271,((0x6fU == (0x7fU & vlSelf->riscv32__DOT__ifu_inst))));
        bufp->chgBit(oldp+272,((0x67U == (0x7fU & vlSelf->riscv32__DOT__ifu_inst))));
        bufp->chgCData(oldp+273,((0x1fU & ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                                           >> 1U))),5);
        bufp->chgBit(oldp+274,((1U & (IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out))));
        bufp->chgCData(oldp+275,((0x1fU & ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                                           >> 0xbU))),5);
        bufp->chgCData(oldp+276,((0x1fU & ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                                           >> 6U))),5);
        bufp->chgIData(oldp+277,(vlSelf->riscv32__DOT__idu_imm),32);
        bufp->chgCData(oldp+278,(vlSelf->riscv32__DOT__idu_alu_opt),4);
        bufp->chgCData(oldp+279,(vlSelf->riscv32__DOT__idu_src_sel),2);
        bufp->chgCData(oldp+280,(vlSelf->riscv32__DOT__idu_lsu_opt),2);
        bufp->chgCData(oldp+281,((7U & (vlSelf->riscv32__DOT__ifu_inst 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+282,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key),4);
        bufp->chgCData(oldp+283,((0x7fU & vlSelf->riscv32__DOT__ifu_inst)),7);
        bufp->chgCData(oldp+284,((vlSelf->riscv32__DOT__ifu_inst 
                                  >> 0x19U)),7);
        bufp->chgIData(oldp+285,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI),32);
        bufp->chgIData(oldp+286,((0xfffff000U & vlSelf->riscv32__DOT__ifu_inst)),32);
        bufp->chgIData(oldp+287,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeS),32);
        bufp->chgIData(oldp+288,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeB),32);
        bufp->chgIData(oldp+289,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeJ),32);
        bufp->chgSData(oldp+290,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____Vcellinp__riscv_id_imm_ext_typeB__imm_in),13);
        bufp->chgSData(oldp+291,((vlSelf->riscv32__DOT__ifu_inst 
                                  >> 0x14U)),12);
        bufp->chgIData(oldp+292,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____Vcellinp__riscv_id_imm_ext_typeJ__imm_in),21);
        bufp->chgSData(oldp+293,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____Vcellinp__riscv_id_imm_ext_typeS__imm_in),12);
        __Vtemp_h56c4ca1e__0[0U] = 0U;
        __Vtemp_h56c4ca1e__0[1U] = 0x73U;
        __Vtemp_h56c4ca1e__0[2U] = 0x780U;
        __Vtemp_h56c4ca1e__0[3U] = (0xcc000U | (vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI 
                                                << 0x15U));
        __Vtemp_h56c4ca1e__0[4U] = (0x2600000U | ((vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeS 
                                                   << 0x1cU) 
                                                  | (vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI 
                                                     >> 0xbU)));
        __Vtemp_h56c4ca1e__0[5U] = (0x30000000U | (vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeS 
                                                   >> 4U));
        __Vtemp_h56c4ca1e__0[6U] = (2U | (vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI 
                                          << 3U));
        __Vtemp_h56c4ca1e__0[7U] = (0x18U | ((vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeB 
                                              << 0xaU) 
                                             | (vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI 
                                                >> 0x1dU)));
        __Vtemp_h56c4ca1e__0[8U] = (0x18c00U | ((vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI 
                                                 << 0x11U) 
                                                | (vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeB 
                                                   >> 0x16U)));
        __Vtemp_h56c4ca1e__0[9U] = (0xce0000U | ((vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeJ 
                                                  << 0x18U) 
                                                 | (vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI 
                                                    >> 0xfU)));
        __Vtemp_h56c4ca1e__0[0xaU] = (0x6f000000U | 
                                      (vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeJ 
                                       >> 8U));
        __Vtemp_h56c4ca1e__0[0xbU] = (0x80000000U | 
                                      (0x7ffff800U 
                                       & (vlSelf->riscv32__DOT__ifu_inst 
                                          >> 1U)));
        __Vtemp_h56c4ca1e__0[0xcU] = (0xbU | (0xfffc0000U 
                                              & (vlSelf->riscv32__DOT__ifu_inst 
                                                 << 6U)));
        __Vtemp_h56c4ca1e__0[0xdU] = (0xdc0U | (vlSelf->riscv32__DOT__ifu_inst 
                                                >> 0x1aU));
        bufp->chgWData(oldp+294,(__Vtemp_h56c4ca1e__0),429);
        bufp->chgQData(oldp+308,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[0]),39);
        bufp->chgQData(oldp+310,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[1]),39);
        bufp->chgQData(oldp+312,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[2]),39);
        bufp->chgQData(oldp+314,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[3]),39);
        bufp->chgQData(oldp+316,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[4]),39);
        bufp->chgQData(oldp+318,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[5]),39);
        bufp->chgQData(oldp+320,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[6]),39);
        bufp->chgQData(oldp+322,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[7]),39);
        bufp->chgQData(oldp+324,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[8]),39);
        bufp->chgQData(oldp+326,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[9]),39);
        bufp->chgQData(oldp+328,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[10]),39);
        bufp->chgIData(oldp+330,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[0]),32);
        bufp->chgIData(oldp+331,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[1]),32);
        bufp->chgIData(oldp+332,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[2]),32);
        bufp->chgIData(oldp+333,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[3]),32);
        bufp->chgIData(oldp+334,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[4]),32);
        bufp->chgIData(oldp+335,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[5]),32);
        bufp->chgIData(oldp+336,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[6]),32);
        bufp->chgIData(oldp+337,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[7]),32);
        bufp->chgIData(oldp+338,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[8]),32);
        bufp->chgIData(oldp+339,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[9]),32);
        bufp->chgIData(oldp+340,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[10]),32);
        bufp->chgIData(oldp+341,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out),32);
        bufp->chgBit(oldp+342,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit));
        bufp->chgIData(oldp+343,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT____Vcellinp__riscv_mux_id_alu_opt__key),17);
        bufp->chgCData(oldp+344,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_alu_opt__DOT__i1__DOT__lut_out),4);
        bufp->chgBit(oldp+345,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_alu_opt__DOT__i1__DOT__hit));
        bufp->chgCData(oldp+346,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__lut_out),2);
        bufp->chgBit(oldp+347,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__hit));
        bufp->chgCData(oldp+348,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out),2);
        bufp->chgBit(oldp+349,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit));
        bufp->chgSData(oldp+350,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out),16);
        bufp->chgWData(oldp+351,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellinp__riscv_mux_id_reg__lut),253);
        bufp->chgIData(oldp+359,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[0]),23);
        bufp->chgIData(oldp+360,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[1]),23);
        bufp->chgIData(oldp+361,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[2]),23);
        bufp->chgIData(oldp+362,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[3]),23);
        bufp->chgIData(oldp+363,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[4]),23);
        bufp->chgIData(oldp+364,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[5]),23);
        bufp->chgIData(oldp+365,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[6]),23);
        bufp->chgIData(oldp+366,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[7]),23);
        bufp->chgIData(oldp+367,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[8]),23);
        bufp->chgIData(oldp+368,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[9]),23);
        bufp->chgIData(oldp+369,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[10]),23);
        bufp->chgSData(oldp+370,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[0]),16);
        bufp->chgSData(oldp+371,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[1]),16);
        bufp->chgSData(oldp+372,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[2]),16);
        bufp->chgSData(oldp+373,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[3]),16);
        bufp->chgSData(oldp+374,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[4]),16);
        bufp->chgSData(oldp+375,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[5]),16);
        bufp->chgSData(oldp+376,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[6]),16);
        bufp->chgSData(oldp+377,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[7]),16);
        bufp->chgSData(oldp+378,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[8]),16);
        bufp->chgSData(oldp+379,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[9]),16);
        bufp->chgSData(oldp+380,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[10]),16);
        bufp->chgSData(oldp+381,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out),16);
        bufp->chgBit(oldp+382,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit));
        bufp->chgBit(oldp+383,((0U != (IData)(vlSelf->riscv32__DOT__idu_lsu_opt))));
        bufp->chgIData(oldp+384,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellout__riscv_dff_pc__dout[2U]),32);
        bufp->chgIData(oldp+385,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellout__riscv_dff_pc__dout[1U]),32);
        bufp->chgIData(oldp+386,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellout__riscv_dff_pc__dout[0U]),32);
        bufp->chgIData(oldp+387,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__mask),32);
        bufp->chgWData(oldp+388,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellout__riscv_dff_pc__dout),96);
        bufp->chgCData(oldp+391,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key),5);
        bufp->chgIData(oldp+392,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__lut_out),32);
        bufp->chgBit(oldp+393,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__hit));
        bufp->chgCData(oldp+394,((0x1fU & (IData)(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT____Vcellout__riscv_dff_reg_t__dout))),5);
        bufp->chgBit(oldp+395,((1U & ((IData)(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT____Vcellout__riscv_dff_reg_t__dout) 
                                      >> 5U))));
        bufp->chgCData(oldp+396,(((0x20U & ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                                            << 5U)) 
                                  | (0x1fU & ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                                              >> 1U)))),6);
        bufp->chgCData(oldp+397,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT____Vcellout__riscv_dff_reg_t__dout),6);
    }
    bufp->chgBit(oldp+398,(vlSelf->clk));
    bufp->chgBit(oldp+399,(vlSelf->i_rst_n));
    bufp->chgIData(oldp+400,(vlSelf->riscv32__DOT__src1),32);
    bufp->chgIData(oldp+401,(vlSelf->riscv32__DOT__src2),32);
    bufp->chgIData(oldp+402,(((((0U != vlSelf->riscv32__DOT__exu_result) 
                                & (0x63U == (0x7fU 
                                             & vlSelf->riscv32__DOT__ifu_inst))) 
                               | (0x6fU == (0x7fU & vlSelf->riscv32__DOT__ifu_inst)))
                               ? (vlSelf->riscv32__DOT__idu_imm 
                                  + vlSelf->riscv32__DOT__ifu_pc)
                               : ((0x67U == (0x7fU 
                                             & vlSelf->riscv32__DOT__ifu_inst))
                                   ? (vlSelf->riscv32__DOT__idu_imm 
                                      + vlSelf->riscv32__DOT__src1)
                                   : ((IData)(4U) + vlSelf->riscv32__DOT__ifu_pc)))),32);
    bufp->chgQData(oldp+403,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[0]),64);
    bufp->chgQData(oldp+405,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[1]),64);
    bufp->chgQData(oldp+407,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[2]),64);
    bufp->chgQData(oldp+409,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[3]),64);
    __Vtemp_h8c6da091__0[0U] = vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__mask;
    __Vtemp_h8c6da091__0[1U] = (IData)((((QData)((IData)(vlSelf->riscv32__DOT__exu_result)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->riscv32__DOT__src2))));
    __Vtemp_h8c6da091__0[2U] = (IData)(((((QData)((IData)(vlSelf->riscv32__DOT__exu_result)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->riscv32__DOT__src2))) 
                                        >> 0x20U));
    bufp->chgWData(oldp+411,(__Vtemp_h8c6da091__0),96);
}

void Vriscv32___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv32___024root__trace_cleanup\n"); );
    // Init
    Vriscv32___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv32___024root*>(voidSelf);
    Vriscv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
}
