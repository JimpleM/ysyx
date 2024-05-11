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
    VlWide<13>/*415:0*/ __Vtemp_ha5d6b912__0;
    VlWide<7>/*223:0*/ __Vtemp_hcb26cac4__0;
    VlWide<9>/*287:0*/ __Vtemp_h0a03d7de__0;
    VlWide<6>/*191:0*/ __Vtemp_h82212276__0;
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
        bufp->chgSData(oldp+21,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__pair_list[0]),9);
        bufp->chgSData(oldp+22,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__pair_list[1]),9);
        bufp->chgSData(oldp+23,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__pair_list[2]),9);
        bufp->chgCData(oldp+24,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list[0]),7);
        bufp->chgCData(oldp+25,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list[1]),7);
        bufp->chgCData(oldp+26,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list[2]),7);
        bufp->chgCData(oldp+27,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__data_list[0]),2);
        bufp->chgCData(oldp+28,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__data_list[1]),2);
        bufp->chgCData(oldp+29,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__data_list[2]),2);
        bufp->chgSData(oldp+30,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[0]),9);
        bufp->chgSData(oldp+31,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[1]),9);
        bufp->chgSData(oldp+32,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[2]),9);
        bufp->chgSData(oldp+33,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[3]),9);
        bufp->chgSData(oldp+34,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[4]),9);
        bufp->chgSData(oldp+35,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[5]),9);
        bufp->chgSData(oldp+36,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[6]),9);
        bufp->chgSData(oldp+37,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[7]),9);
        bufp->chgSData(oldp+38,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[8]),9);
        bufp->chgSData(oldp+39,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[9]),9);
        bufp->chgSData(oldp+40,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[10]),9);
        bufp->chgCData(oldp+41,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[0]),7);
        bufp->chgCData(oldp+42,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[1]),7);
        bufp->chgCData(oldp+43,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[2]),7);
        bufp->chgCData(oldp+44,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[3]),7);
        bufp->chgCData(oldp+45,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[4]),7);
        bufp->chgCData(oldp+46,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[5]),7);
        bufp->chgCData(oldp+47,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[6]),7);
        bufp->chgCData(oldp+48,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[7]),7);
        bufp->chgCData(oldp+49,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[8]),7);
        bufp->chgCData(oldp+50,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[9]),7);
        bufp->chgCData(oldp+51,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[10]),7);
        bufp->chgCData(oldp+52,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[0]),2);
        bufp->chgCData(oldp+53,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[1]),2);
        bufp->chgCData(oldp+54,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[2]),2);
        bufp->chgCData(oldp+55,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[3]),2);
        bufp->chgCData(oldp+56,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[4]),2);
        bufp->chgCData(oldp+57,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[5]),2);
        bufp->chgCData(oldp+58,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[6]),2);
        bufp->chgCData(oldp+59,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[7]),2);
        bufp->chgCData(oldp+60,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[8]),2);
        bufp->chgCData(oldp+61,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[9]),2);
        bufp->chgCData(oldp+62,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[10]),2);
        bufp->chgCData(oldp+63,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[0]),7);
        bufp->chgCData(oldp+64,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[1]),7);
        bufp->chgCData(oldp+65,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[2]),7);
        bufp->chgCData(oldp+66,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[3]),7);
        bufp->chgCData(oldp+67,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[4]),7);
        bufp->chgCData(oldp+68,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[5]),7);
        bufp->chgCData(oldp+69,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[6]),7);
        bufp->chgCData(oldp+70,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[7]),7);
        bufp->chgCData(oldp+71,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[8]),7);
        bufp->chgCData(oldp+72,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[9]),7);
        bufp->chgCData(oldp+73,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[10]),7);
        bufp->chgCData(oldp+74,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list[0]),5);
        bufp->chgCData(oldp+75,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list[1]),5);
        bufp->chgCData(oldp+76,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list[2]),5);
        bufp->chgCData(oldp+77,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list[3]),5);
        bufp->chgCData(oldp+78,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list[4]),5);
        bufp->chgQData(oldp+79,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__pair_list[0]),37);
        bufp->chgQData(oldp+81,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__pair_list[1]),37);
        bufp->chgQData(oldp+83,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__pair_list[2]),37);
        bufp->chgCData(oldp+85,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list[0]),5);
        bufp->chgCData(oldp+86,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list[1]),5);
        bufp->chgCData(oldp+87,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list[2]),5);
        bufp->chgIData(oldp+88,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__data_list[0]),32);
        bufp->chgIData(oldp+89,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__data_list[1]),32);
        bufp->chgIData(oldp+90,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__data_list[2]),32);
        bufp->chgIData(oldp+91,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+92,(vlSelf->riscv32__DOT__ifu_inst),32);
        bufp->chgBit(oldp+93,((0x63U == (0x7fU & vlSelf->riscv32__DOT__ifu_inst))));
        bufp->chgBit(oldp+94,((0x6fU == (0x7fU & vlSelf->riscv32__DOT__ifu_inst))));
        bufp->chgBit(oldp+95,((0x67U == (0x7fU & vlSelf->riscv32__DOT__ifu_inst))));
        bufp->chgCData(oldp+96,((0x1fU & ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                                          >> 1U))),5);
        bufp->chgBit(oldp+97,((1U & (IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out))));
        bufp->chgCData(oldp+98,((0x1fU & ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                                          >> 0xbU))),5);
        bufp->chgCData(oldp+99,((0x1fU & ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                                          >> 6U))),5);
        bufp->chgIData(oldp+100,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r),32);
        bufp->chgCData(oldp+101,(vlSelf->riscv32__DOT__idu_alu_opt),4);
        bufp->chgCData(oldp+102,(vlSelf->riscv32__DOT__idu_src_sel),2);
        bufp->chgCData(oldp+103,(vlSelf->riscv32__DOT__idu_lsu_opt),2);
        bufp->chgCData(oldp+104,((7U & (vlSelf->riscv32__DOT__ifu_inst 
                                        >> 0xcU))),3);
        bufp->chgIData(oldp+105,(vlSelf->riscv32__DOT__src1),32);
        bufp->chgIData(oldp+106,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__wdata),32);
        bufp->chgBit(oldp+107,((1U & (~ (IData)((0U 
                                                 != vlSelf->riscv32__DOT__exu_result))))));
        bufp->chgIData(oldp+108,(vlSelf->riscv32__DOT__exu_result),32);
        bufp->chgIData(oldp+109,(vlSelf->riscv32__DOT__lsu_result),32);
        bufp->chgBit(oldp+110,(vlSelf->riscv32__DOT__csr_ecall));
        bufp->chgBit(oldp+111,(vlSelf->riscv32__DOT__csr_mret));
        bufp->chgIData(oldp+112,(vlSelf->riscv32__DOT__wr_csr_data),32);
        bufp->chgSData(oldp+113,((0xfffU & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)),12);
        bufp->chgBit(oldp+114,(vlSelf->riscv32__DOT__riscv_csr_u0__DOT__wr_en));
        bufp->chgIData(oldp+115,(vlSelf->riscv32__DOT__riscv_csr_u0__DOT__wr_data_r),32);
        bufp->chgIData(oldp+116,(vlSelf->riscv32__DOT__riscv_csr_u0__DOT__temp),32);
        bufp->chgIData(oldp+117,((IData)((vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+118,((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)),32);
        bufp->chgIData(oldp+119,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data),32);
        bufp->chgBit(oldp+120,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag));
        bufp->chgQData(oldp+121,((((QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                               >> 0x3fU))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                                >> 0x20U))))),33);
        bufp->chgQData(oldp+123,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t),33);
        bufp->chgQData(oldp+125,((QData)((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag))),33);
        bufp->chgQData(oldp+127,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out),33);
        bufp->chgBit(oldp+129,((1U & (IData)((vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+130,((1U & (IData)((vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+131,((1U & (IData)((vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+132,((1U & (IData)((vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+133,((1U & VL_REDXOR_64((0x180000000ULL 
                                                   & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out)))));
        bufp->chgBit(oldp+134,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__carry_flag));
        bufp->chgIData(oldp+135,((IData)(((((QData)((IData)(
                                                            (- (IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                                                >> 0x3fU))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                              >> 0x20U)))) 
                                          >> (0x3fU 
                                              & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out))))),32);
        __Vtemp_ha5d6b912__0[0U] = (IData)((0xb00000000ULL 
                                            | (QData)((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out))));
        __Vtemp_ha5d6b912__0[1U] = ((((IData)((vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                               >> 0x20U)) 
                                      & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)) 
                                     << 4U) | (IData)(
                                                      ((0xb00000000ULL 
                                                        | (QData)((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out))) 
                                                       >> 0x20U)));
        __Vtemp_ha5d6b912__0[2U] = (0xa0U | ((((IData)(
                                                       (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                        >> 0x20U)) 
                                               | (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)) 
                                              << 8U) 
                                             | (((IData)(
                                                         (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                          >> 0x20U)) 
                                                 & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)) 
                                                >> 0x1cU)));
        __Vtemp_ha5d6b912__0[3U] = (0x900U | (((IData)(
                                                       ((((QData)((IData)(
                                                                          (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                                                >> 0x3fU))))))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                                            >> 0x20U)))) 
                                                        >> 
                                                        (0x3fU 
                                                         & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))) 
                                               << 0xcU) 
                                              | (((IData)(
                                                          (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                           >> 0x20U)) 
                                                  | (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)) 
                                                 >> 0x18U)));
        __Vtemp_ha5d6b912__0[4U] = (0x8000U | ((((0x1fU 
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
                                               | ((IData)(
                                                          ((((QData)((IData)(
                                                                             (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                                                >> 0x3fU))))))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                                               >> 0x20U)))) 
                                                           >> 
                                                           (0x3fU 
                                                            & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))) 
                                                  >> 0x14U)));
        __Vtemp_ha5d6b912__0[5U] = (0x70000U | ((((IData)(
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
        __Vtemp_ha5d6b912__0[6U] = (0x600000U | (((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__carry_flag) 
                                                  << 0x18U) 
                                                 | (((IData)(
                                                             (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                              >> 0x20U)) 
                                                     ^ (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)) 
                                                    >> 0xcU)));
        __Vtemp_ha5d6b912__0[7U] = (0x5000000U | ((IData)(vlSelf->__VdfgTmp_h39dd3dac__0) 
                                                  << 0x1cU));
        __Vtemp_ha5d6b912__0[8U] = 0x40000000U;
        __Vtemp_ha5d6b912__0[9U] = ((0x1fU >= (0x3fU 
                                               & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
                                     ? ((IData)((vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                 >> 0x20U)) 
                                        << (0x3fU & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
                                     : 0U);
        __Vtemp_ha5d6b912__0[0xaU] = (3U | ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out) 
                                            << 4U));
        __Vtemp_ha5d6b912__0[0xbU] = (0x20U | (((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out) 
                                                << 8U) 
                                               | ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out) 
                                                  >> 0x1cU)));
        __Vtemp_ha5d6b912__0[0xcU] = (0x100U | ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out) 
                                                >> 0x18U));
        bufp->chgWData(oldp+136,(__Vtemp_ha5d6b912__0),396);
        bufp->chgQData(oldp+149,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[0]),36);
        bufp->chgQData(oldp+151,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[1]),36);
        bufp->chgQData(oldp+153,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[2]),36);
        bufp->chgQData(oldp+155,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[3]),36);
        bufp->chgQData(oldp+157,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[4]),36);
        bufp->chgQData(oldp+159,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[5]),36);
        bufp->chgQData(oldp+161,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[6]),36);
        bufp->chgQData(oldp+163,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[7]),36);
        bufp->chgQData(oldp+165,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[8]),36);
        bufp->chgQData(oldp+167,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[9]),36);
        bufp->chgQData(oldp+169,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[10]),36);
        bufp->chgIData(oldp+171,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[0]),32);
        bufp->chgIData(oldp+172,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[1]),32);
        bufp->chgIData(oldp+173,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[2]),32);
        bufp->chgIData(oldp+174,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[3]),32);
        bufp->chgIData(oldp+175,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[4]),32);
        bufp->chgIData(oldp+176,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[5]),32);
        bufp->chgIData(oldp+177,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[6]),32);
        bufp->chgIData(oldp+178,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[7]),32);
        bufp->chgIData(oldp+179,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[8]),32);
        bufp->chgIData(oldp+180,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[9]),32);
        bufp->chgIData(oldp+181,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[10]),32);
        bufp->chgIData(oldp+182,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out),32);
        bufp->chgBit(oldp+183,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit));
        bufp->chgCData(oldp+184,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key),4);
        __Vtemp_hcb26cac4__0[0U] = (IData)((0xf00000000ULL 
                                            | (QData)((IData)(
                                                              (1U 
                                                               & (~ vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data))))));
        __Vtemp_hcb26cac4__0[1U] = ((0x10U & (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data 
                                              << 4U)) 
                                    | (IData)(((0xf00000000ULL 
                                                | (QData)((IData)(
                                                                  (1U 
                                                                   & (~ vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data))))) 
                                               >> 0x20U)));
        __Vtemp_hcb26cac4__0[2U] = (0xe0U | (0x100U 
                                             & ((~ vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data) 
                                                << 8U)));
        __Vtemp_hcb26cac4__0[3U] = (0xd00U | (0x1000U 
                                              & (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data 
                                                 << 0xcU)));
        __Vtemp_hcb26cac4__0[4U] = (0xc000U | ((IData)(
                                                       (0U 
                                                        != vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data)) 
                                               << 0x10U));
        __Vtemp_hcb26cac4__0[5U] = (0x90000U | (0x100000U 
                                                & ((~ (IData)(
                                                              (0U 
                                                               != vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data))) 
                                                   << 0x14U)));
        __Vtemp_hcb26cac4__0[6U] = 0x800000U;
        bufp->chgWData(oldp+185,(__Vtemp_hcb26cac4__0),216);
        bufp->chgQData(oldp+192,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[0]),36);
        bufp->chgQData(oldp+194,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[1]),36);
        bufp->chgQData(oldp+196,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[2]),36);
        bufp->chgQData(oldp+198,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[3]),36);
        bufp->chgQData(oldp+200,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[4]),36);
        bufp->chgQData(oldp+202,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[5]),36);
        bufp->chgIData(oldp+204,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[0]),32);
        bufp->chgIData(oldp+205,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[1]),32);
        bufp->chgIData(oldp+206,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[2]),32);
        bufp->chgIData(oldp+207,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[3]),32);
        bufp->chgIData(oldp+208,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[4]),32);
        bufp->chgIData(oldp+209,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[5]),32);
        bufp->chgIData(oldp+210,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out),32);
        bufp->chgBit(oldp+211,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit));
        bufp->chgQData(oldp+212,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out),64);
        __Vtemp_h0a03d7de__0[0U] = (IData)((((QData)((IData)(vlSelf->riscv32__DOT__ifu_pc)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r))));
        __Vtemp_h0a03d7de__0[1U] = (IData)(((((QData)((IData)(vlSelf->riscv32__DOT__ifu_pc)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r))) 
                                            >> 0x20U));
        __Vtemp_h0a03d7de__0[2U] = 0x13U;
        __Vtemp_h0a03d7de__0[3U] = (vlSelf->riscv32__DOT__ifu_pc 
                                    << 2U);
        __Vtemp_h0a03d7de__0[4U] = (8U | (((IData)(
                                                   (((QData)((IData)(vlSelf->riscv32__DOT__src1)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)))) 
                                           << 4U) | 
                                          (vlSelf->riscv32__DOT__ifu_pc 
                                           >> 0x1eU)));
        __Vtemp_h0a03d7de__0[5U] = (((IData)((((QData)((IData)(vlSelf->riscv32__DOT__src1)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)))) 
                                     >> 0x1cU) | ((IData)(
                                                          ((((QData)((IData)(vlSelf->riscv32__DOT__src1)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r))) 
                                                           >> 0x20U)) 
                                                  << 4U));
        __Vtemp_h0a03d7de__0[6U] = (0x10U | (((IData)(
                                                      (((QData)((IData)(vlSelf->riscv32__DOT__src1)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__wdata)))) 
                                              << 6U) 
                                             | ((IData)(
                                                        ((((QData)((IData)(vlSelf->riscv32__DOT__src1)) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r))) 
                                                         >> 0x20U)) 
                                                >> 0x1cU)));
        __Vtemp_h0a03d7de__0[7U] = (((IData)((((QData)((IData)(vlSelf->riscv32__DOT__src1)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__wdata)))) 
                                     >> 0x1aU) | ((IData)(
                                                          ((((QData)((IData)(vlSelf->riscv32__DOT__src1)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__wdata))) 
                                                           >> 0x20U)) 
                                                  << 6U));
        __Vtemp_h0a03d7de__0[8U] = ((IData)(((((QData)((IData)(vlSelf->riscv32__DOT__src1)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__wdata))) 
                                             >> 0x20U)) 
                                    >> 0x1aU);
        bufp->chgWData(oldp+214,(__Vtemp_h0a03d7de__0),264);
        bufp->chgWData(oldp+223,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[0]),66);
        bufp->chgWData(oldp+226,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[1]),66);
        bufp->chgWData(oldp+229,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[2]),66);
        bufp->chgWData(oldp+232,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[3]),66);
        bufp->chgQData(oldp+235,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[0]),64);
        bufp->chgQData(oldp+237,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[1]),64);
        bufp->chgQData(oldp+239,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[2]),64);
        bufp->chgQData(oldp+241,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[3]),64);
        bufp->chgQData(oldp+243,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out),64);
        bufp->chgBit(oldp+245,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit));
        bufp->chgCData(oldp+246,((0x7fU & vlSelf->riscv32__DOT__ifu_inst)),7);
        bufp->chgCData(oldp+247,((vlSelf->riscv32__DOT__ifu_inst 
                                  >> 0x19U)),7);
        bufp->chgIData(oldp+248,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI),32);
        bufp->chgIData(oldp+249,((0xfffff000U & vlSelf->riscv32__DOT__ifu_inst)),32);
        bufp->chgIData(oldp+250,((((- (IData)((vlSelf->riscv32__DOT__ifu_inst 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSelf->riscv32__DOT__ifu_inst 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->riscv32__DOT__ifu_inst 
                                                     >> 7U))))),32);
        bufp->chgIData(oldp+251,((((- (IData)((vlSelf->riscv32__DOT__ifu_inst 
                                               >> 0x1fU))) 
                                   << 0xdU) | ((0x1000U 
                                                & (vlSelf->riscv32__DOT__ifu_inst 
                                                   >> 0x13U)) 
                                               | ((0x800U 
                                                   & (vlSelf->riscv32__DOT__ifu_inst 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSelf->riscv32__DOT__ifu_inst 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSelf->riscv32__DOT__ifu_inst 
                                                           >> 7U))))))),32);
        bufp->chgIData(oldp+252,((((- (IData)((vlSelf->riscv32__DOT__ifu_inst 
                                               >> 0x1fU))) 
                                   << 0x15U) | ((0x100000U 
                                                 & (vlSelf->riscv32__DOT__ifu_inst 
                                                    >> 0xbU)) 
                                                | ((0xff000U 
                                                    & vlSelf->riscv32__DOT__ifu_inst) 
                                                   | ((0x800U 
                                                       & (vlSelf->riscv32__DOT__ifu_inst 
                                                          >> 9U)) 
                                                      | (0x7feU 
                                                         & (vlSelf->riscv32__DOT__ifu_inst 
                                                            >> 0x14U))))))),32);
        bufp->chgSData(oldp+253,(((0x1000U & (vlSelf->riscv32__DOT__ifu_inst 
                                              >> 0x13U)) 
                                  | ((0x800U & (vlSelf->riscv32__DOT__ifu_inst 
                                                << 4U)) 
                                     | ((0x7e0U & (vlSelf->riscv32__DOT__ifu_inst 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->riscv32__DOT__ifu_inst 
                                            >> 7U)))))),13);
        bufp->chgSData(oldp+254,((vlSelf->riscv32__DOT__ifu_inst 
                                  >> 0x14U)),12);
        bufp->chgIData(oldp+255,(((0x100000U & (vlSelf->riscv32__DOT__ifu_inst 
                                                >> 0xbU)) 
                                  | ((0xff000U & vlSelf->riscv32__DOT__ifu_inst) 
                                     | ((0x800U & (vlSelf->riscv32__DOT__ifu_inst 
                                                   >> 9U)) 
                                        | (0x7feU & 
                                           (vlSelf->riscv32__DOT__ifu_inst 
                                            >> 0x14U)))))),21);
        bufp->chgSData(oldp+256,(((0xfe0U & (vlSelf->riscv32__DOT__ifu_inst 
                                             >> 0x14U)) 
                                  | (0x1fU & (vlSelf->riscv32__DOT__ifu_inst 
                                              >> 7U)))),12);
        bufp->chgCData(oldp+257,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__lut_out),2);
        bufp->chgBit(oldp+258,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__hit));
        bufp->chgCData(oldp+259,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out),2);
        bufp->chgBit(oldp+260,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit));
        bufp->chgSData(oldp+261,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out),16);
        bufp->chgWData(oldp+262,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellinp__riscv_mux_id_reg__lut),253);
        bufp->chgIData(oldp+270,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[0]),23);
        bufp->chgIData(oldp+271,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[1]),23);
        bufp->chgIData(oldp+272,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[2]),23);
        bufp->chgIData(oldp+273,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[3]),23);
        bufp->chgIData(oldp+274,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[4]),23);
        bufp->chgIData(oldp+275,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[5]),23);
        bufp->chgIData(oldp+276,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[6]),23);
        bufp->chgIData(oldp+277,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[7]),23);
        bufp->chgIData(oldp+278,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[8]),23);
        bufp->chgIData(oldp+279,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[9]),23);
        bufp->chgIData(oldp+280,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[10]),23);
        bufp->chgSData(oldp+281,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[0]),16);
        bufp->chgSData(oldp+282,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[1]),16);
        bufp->chgSData(oldp+283,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[2]),16);
        bufp->chgSData(oldp+284,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[3]),16);
        bufp->chgSData(oldp+285,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[4]),16);
        bufp->chgSData(oldp+286,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[5]),16);
        bufp->chgSData(oldp+287,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[6]),16);
        bufp->chgSData(oldp+288,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[7]),16);
        bufp->chgSData(oldp+289,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[8]),16);
        bufp->chgSData(oldp+290,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[9]),16);
        bufp->chgSData(oldp+291,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[10]),16);
        bufp->chgSData(oldp+292,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out),16);
        bufp->chgBit(oldp+293,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit));
        bufp->chgBit(oldp+294,((1U == (IData)(vlSelf->riscv32__DOT__idu_lsu_opt))));
        bufp->chgBit(oldp+295,((2U == (IData)(vlSelf->riscv32__DOT__idu_lsu_opt))));
        bufp->chgIData(oldp+296,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata),32);
        bufp->chgIData(oldp+297,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__mask),32);
        bufp->chgCData(oldp+298,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key),5);
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
        bufp->chgWData(oldp+299,(__Vtemp_h82212276__0),185);
        bufp->chgQData(oldp+305,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[0]),37);
        bufp->chgQData(oldp+307,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[1]),37);
        bufp->chgQData(oldp+309,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[2]),37);
        bufp->chgQData(oldp+311,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[3]),37);
        bufp->chgQData(oldp+313,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[4]),37);
        bufp->chgIData(oldp+315,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[0]),32);
        bufp->chgIData(oldp+316,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[1]),32);
        bufp->chgIData(oldp+317,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[2]),32);
        bufp->chgIData(oldp+318,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[3]),32);
        bufp->chgIData(oldp+319,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[4]),32);
        bufp->chgIData(oldp+320,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out),32);
        bufp->chgBit(oldp+321,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit));
        bufp->chgIData(oldp+322,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__lut_out),32);
        bufp->chgBit(oldp+323,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__hit));
        bufp->chgCData(oldp+324,(((0x20U & ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                                            << 5U)) 
                                  | (0x1fU & ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                                              >> 1U)))),6);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+325,(vlSelf->riscv32__DOT__ifu_pc),32);
        bufp->chgIData(oldp+326,(vlSelf->riscv32__DOT__riscv_csr_u0__DOT__csr_reg
                                 [0x300U]),32);
        bufp->chgIData(oldp+327,(vlSelf->riscv32__DOT__riscv_csr_u0__DOT__csr_reg
                                 [0x305U]),32);
        bufp->chgIData(oldp+328,(vlSelf->riscv32__DOT__riscv_csr_u0__DOT__csr_reg
                                 [0x341U]),32);
        bufp->chgIData(oldp+329,(vlSelf->riscv32__DOT__riscv_csr_u0__DOT__mepc_inst_r),32);
        bufp->chgIData(oldp+330,(vlSelf->riscv32__DOT__riscv_csr_u0__DOT__csr_reg
                                 [0x342U]),32);
        bufp->chgIData(oldp+331,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[0]),32);
        bufp->chgIData(oldp+332,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[1]),32);
        bufp->chgIData(oldp+333,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[2]),32);
        bufp->chgIData(oldp+334,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[3]),32);
        bufp->chgIData(oldp+335,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[4]),32);
        bufp->chgIData(oldp+336,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[5]),32);
        bufp->chgIData(oldp+337,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[6]),32);
        bufp->chgIData(oldp+338,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[7]),32);
        bufp->chgIData(oldp+339,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[8]),32);
        bufp->chgIData(oldp+340,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[9]),32);
        bufp->chgIData(oldp+341,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[10]),32);
        bufp->chgIData(oldp+342,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[11]),32);
        bufp->chgIData(oldp+343,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[12]),32);
        bufp->chgIData(oldp+344,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[13]),32);
        bufp->chgIData(oldp+345,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[14]),32);
        bufp->chgIData(oldp+346,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[15]),32);
        bufp->chgIData(oldp+347,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[16]),32);
        bufp->chgIData(oldp+348,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[17]),32);
        bufp->chgIData(oldp+349,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[18]),32);
        bufp->chgIData(oldp+350,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[19]),32);
        bufp->chgIData(oldp+351,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[20]),32);
        bufp->chgIData(oldp+352,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[21]),32);
        bufp->chgIData(oldp+353,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[22]),32);
        bufp->chgIData(oldp+354,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[23]),32);
        bufp->chgIData(oldp+355,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[24]),32);
        bufp->chgIData(oldp+356,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[25]),32);
        bufp->chgIData(oldp+357,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[26]),32);
        bufp->chgIData(oldp+358,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[27]),32);
        bufp->chgIData(oldp+359,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[28]),32);
        bufp->chgIData(oldp+360,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[29]),32);
        bufp->chgIData(oldp+361,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[30]),32);
        bufp->chgIData(oldp+362,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[31]),32);
        bufp->chgCData(oldp+363,((0x1fU & (IData)(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT____Vcellout__riscv_dff_reg_t__dout))),5);
        bufp->chgBit(oldp+364,((1U & ((IData)(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT____Vcellout__riscv_dff_reg_t__dout) 
                                      >> 5U))));
        bufp->chgCData(oldp+365,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT____Vcellout__riscv_dff_reg_t__dout),6);
    }
    bufp->chgBit(oldp+366,(vlSelf->clk));
    bufp->chgBit(oldp+367,(vlSelf->rst_n));
    bufp->chgIData(oldp+368,(((0U == (IData)(vlSelf->riscv32__DOT__idu_lsu_opt))
                               ? vlSelf->riscv32__DOT__exu_result
                               : ((3U == (IData)(vlSelf->riscv32__DOT__idu_lsu_opt))
                                   ? ((IData)(vlSelf->rst_n)
                                       ? ((IData)(vlSelf->riscv32__DOT__riscv_csr_u0__DOT__wr_en)
                                           ? vlSelf->riscv32__DOT__riscv_csr_u0__DOT__csr_reg
                                          [(0xfffU 
                                            & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)]
                                           : 0U) : 0U)
                                   : vlSelf->riscv32__DOT__lsu_result))),32);
    bufp->chgIData(oldp+369,(((IData)(vlSelf->rst_n)
                               ? ((IData)(vlSelf->riscv32__DOT__riscv_csr_u0__DOT__wr_en)
                                   ? vlSelf->riscv32__DOT__riscv_csr_u0__DOT__csr_reg
                                  [(0xfffU & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)]
                                   : 0U) : 0U)),32);
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
}
