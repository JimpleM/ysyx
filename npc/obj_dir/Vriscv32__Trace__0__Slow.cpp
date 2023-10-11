// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vriscv32__Syms.h"


VL_ATTR_COLD void Vriscv32___024root__trace_init_sub__TOP__0(Vriscv32___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv32___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+418,"clk", false,-1);
    tracep->declBit(c+419,"rst_n", false,-1);
    tracep->pushNamePrefix("riscv32 ");
    tracep->declBit(c+418,"clk", false,-1);
    tracep->declBit(c+419,"rst_n", false,-1);
    tracep->declBus(c+421,"ifu_pc", false,-1, 31,0);
    tracep->declBus(c+101,"ifu_inst", false,-1, 31,0);
    tracep->declBit(c+102,"idu_branch", false,-1);
    tracep->declBit(c+103,"idu_jal", false,-1);
    tracep->declBit(c+104,"idu_jalr", false,-1);
    tracep->declBus(c+105,"idu_rd", false,-1, 4,0);
    tracep->declBit(c+106,"idu_rd_wen", false,-1);
    tracep->declBus(c+107,"idu_rs1", false,-1, 4,0);
    tracep->declBus(c+108,"idu_rs2", false,-1, 4,0);
    tracep->declBus(c+109,"idu_imm", false,-1, 31,0);
    tracep->declBus(c+110,"idu_alu_opt", false,-1, 3,0);
    tracep->declBus(c+422,"idu_src_sel", false,-1, 1,0);
    tracep->declBus(c+111,"idu_lsu_opt", false,-1, 1,0);
    tracep->declBus(c+112,"idu_func_code", false,-1, 2,0);
    tracep->declBus(c+294,"src1", false,-1, 31,0);
    tracep->declBus(c+295,"src2", false,-1, 31,0);
    tracep->declBus(c+218,"rd_data", false,-1, 31,0);
    tracep->declBit(c+219,"zero_flag", false,-1);
    tracep->declBus(c+220,"exu_result", false,-1, 31,0);
    tracep->declBus(c+221,"lsu_result", false,-1, 31,0);
    tracep->pushNamePrefix("riscv_exu_u0 ");
    tracep->declBus(c+421,"pc", false,-1, 31,0);
    tracep->declBus(c+294,"src1", false,-1, 31,0);
    tracep->declBus(c+295,"src2", false,-1, 31,0);
    tracep->declBus(c+109,"imm", false,-1, 31,0);
    tracep->declBit(c+102,"branch", false,-1);
    tracep->declBus(c+110,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+422,"src_sel", false,-1, 1,0);
    tracep->declBus(c+112,"func_code", false,-1, 2,0);
    tracep->declBit(c+219,"zero_flag", false,-1);
    tracep->declBus(c+220,"exu_result", false,-1, 31,0);
    tracep->declBus(c+296,"alu_a_data", false,-1, 31,0);
    tracep->declBus(c+297,"alu_b_data", false,-1, 31,0);
    tracep->declBus(c+298,"alu_out_data", false,-1, 31,0);
    tracep->declBit(c+299,"carry_flag", false,-1);
    tracep->pushNamePrefix("riscv_ex_alu ");
    tracep->declBus(c+110,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+296,"alu_a_data", false,-1, 31,0);
    tracep->declBus(c+297,"alu_b_data", false,-1, 31,0);
    tracep->declBit(c+299,"carry_flag", false,-1);
    tracep->declBus(c+298,"alu_out_data", false,-1, 31,0);
    tracep->declBus(c+300,"add_data", false,-1, 31,0);
    tracep->declBus(c+301,"sub_data", false,-1, 31,0);
    tracep->declBus(c+301,"usub_data", false,-1, 31,0);
    tracep->pushNamePrefix("riscv_mux_ex_data ");
    tracep->declBus(c+423,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+424,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+425,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+298,"out", false,-1, 31,0);
    tracep->declBus(c+110,"key", false,-1, 3,0);
    tracep->declBus(c+426,"default_out", false,-1, 31,0);
    tracep->declArray(c+302,"lut", false,-1, 395,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+423,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+424,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+425,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+427,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+298,"out", false,-1, 31,0);
    tracep->declBus(c+110,"key", false,-1, 3,0);
    tracep->declBus(c+426,"default_out", false,-1, 31,0);
    tracep->declArray(c+302,"lut", false,-1, 395,0);
    tracep->declBus(c+428,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+315+i*2,"pair_list", true,(i+0), 35,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+337+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+348,"lut_out", false,-1, 31,0);
    tracep->declBit(c+349,"hit", false,-1);
    tracep->declBus(c+429,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("riscv_mux_ex_branch ");
    tracep->declBus(c+430,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+424,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+431,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+222,"out", false,-1, 63,0);
    tracep->declBus(c+113,"key", false,-1, 3,0);
    tracep->declQuad(c+350,"default_out", false,-1, 63,0);
    tracep->declArray(c+224,"lut", false,-1, 407,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+430,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+424,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+431,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+427,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+222,"out", false,-1, 63,0);
    tracep->declBus(c+113,"key", false,-1, 3,0);
    tracep->declQuad(c+350,"default_out", false,-1, 63,0);
    tracep->declArray(c+224,"lut", false,-1, 407,0);
    tracep->declBus(c+432,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declArray(c+237+i*3,"pair_list", true,(i+0), 67,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+12+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+255+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+267,"lut_out", false,-1, 63,0);
    tracep->declBit(c+269,"hit", false,-1);
    tracep->declBus(c+433,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("riscv_mux_ex_src_sel ");
    tracep->declBus(c+424,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+434,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+431,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+352,"out", false,-1, 63,0);
    tracep->declBus(c+422,"key", false,-1, 1,0);
    tracep->declQuad(c+435,"default_out", false,-1, 63,0);
    tracep->declArray(c+354,"lut", false,-1, 263,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+424,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+434,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+431,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+427,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+352,"out", false,-1, 63,0);
    tracep->declBus(c+422,"key", false,-1, 1,0);
    tracep->declQuad(c+435,"default_out", false,-1, 63,0);
    tracep->declArray(c+354,"lut", false,-1, 263,0);
    tracep->declBus(c+437,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+363+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+18+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+375+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+383,"lut_out", false,-1, 63,0);
    tracep->declBit(c+385,"hit", false,-1);
    tracep->declBus(c+438,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("riscv_idu_u0 ");
    tracep->declBus(c+101,"inst", false,-1, 31,0);
    tracep->declBit(c+102,"branch", false,-1);
    tracep->declBit(c+103,"jal", false,-1);
    tracep->declBit(c+104,"jalr", false,-1);
    tracep->declBus(c+105,"rd", false,-1, 4,0);
    tracep->declBit(c+106,"rd_wen", false,-1);
    tracep->declBus(c+107,"rs1", false,-1, 4,0);
    tracep->declBus(c+108,"rs2", false,-1, 4,0);
    tracep->declBus(c+109,"imm", false,-1, 31,0);
    tracep->declBus(c+110,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+422,"src_sel", false,-1, 1,0);
    tracep->declBus(c+111,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+112,"func_code", false,-1, 2,0);
    tracep->pushNamePrefix("riscv_id_imm_idu ");
    tracep->declBus(c+101,"inst", false,-1, 31,0);
    tracep->declBus(c+109,"imm", false,-1, 31,0);
    tracep->declBus(c+114,"imm_typeI", false,-1, 31,0);
    tracep->declBus(c+115,"imm_typeU", false,-1, 31,0);
    tracep->declBus(c+116,"imm_typeS", false,-1, 31,0);
    tracep->declBus(c+117,"imm_typeB", false,-1, 31,0);
    tracep->declBus(c+118,"imm_typeJ", false,-1, 31,0);
    tracep->declBus(c+439,"imm_typeR", false,-1, 31,0);
    tracep->declBus(c+439,"imm_type_NONE", false,-1, 31,0);
    tracep->pushNamePrefix("riscv_id_imm_ext_typeB ");
    tracep->declBus(c+440,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+119,"imm_in", false,-1, 12,0);
    tracep->declBus(c+117,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("riscv_id_imm_ext_typeI ");
    tracep->declBus(c+441,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+120,"imm_in", false,-1, 11,0);
    tracep->declBus(c+114,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("riscv_id_imm_ext_typeJ ");
    tracep->declBus(c+442,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+121,"imm_in", false,-1, 20,0);
    tracep->declBus(c+118,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("riscv_id_imm_ext_typeS ");
    tracep->declBus(c+441,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+122,"imm_in", false,-1, 11,0);
    tracep->declBus(c+116,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("riscv_id_imm_ext_typeU ");
    tracep->declBus(c+425,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+115,"imm_in", false,-1, 31,0);
    tracep->declBus(c+115,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("riscv_mux_id_imm ");
    tracep->declBus(c+423,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+443,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+425,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+109,"out", false,-1, 31,0);
    tracep->declBus(c+123,"key", false,-1, 6,0);
    tracep->declBus(c+426,"default_out", false,-1, 31,0);
    tracep->declArray(c+124,"lut", false,-1, 428,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+423,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+443,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+425,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+427,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+109,"out", false,-1, 31,0);
    tracep->declBus(c+123,"key", false,-1, 6,0);
    tracep->declBus(c+426,"default_out", false,-1, 31,0);
    tracep->declArray(c+124,"lut", false,-1, 428,0);
    tracep->declBus(c+444,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+138+i*2,"pair_list", true,(i+0), 38,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+22+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+160+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+171,"lut_out", false,-1, 31,0);
    tracep->declBit(c+172,"hit", false,-1);
    tracep->declBus(c+429,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("riscv_id_opt_idu ");
    tracep->declBus(c+101,"inst", false,-1, 31,0);
    tracep->declBus(c+110,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+422,"src_sel", false,-1, 1,0);
    tracep->declBus(c+111,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+112,"func_code", false,-1, 2,0);
    tracep->pushNamePrefix("riscv_mux_id_alu_opt ");
    tracep->declBus(c+445,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+446,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+424,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+110,"out", false,-1, 3,0);
    tracep->declBus(c+173,"key", false,-1, 16,0);
    tracep->declBus(c+447,"default_out", false,-1, 3,0);
    tracep->declArray(c+448,"lut", false,-1, 692,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+445,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+446,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+424,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+427,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+110,"out", false,-1, 3,0);
    tracep->declBus(c+173,"key", false,-1, 16,0);
    tracep->declBus(c+447,"default_out", false,-1, 3,0);
    tracep->declArray(c+448,"lut", false,-1, 692,0);
    tracep->declBus(c+442,"PAIR_LEN", false,-1, 31,0);
    tracep->declBus(c+174,"lut_out", false,-1, 3,0);
    tracep->declBit(c+175,"hit", false,-1);
    tracep->declBus(c+470,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("riscv_mux_id_lsu_opt ");
    tracep->declBus(c+434,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+443,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+434,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+111,"out", false,-1, 1,0);
    tracep->declBus(c+123,"key", false,-1, 6,0);
    tracep->declBus(c+471,"default_out", false,-1, 1,0);
    tracep->declBus(c+472,"lut", false,-1, 17,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+434,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+443,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+434,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+427,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+111,"out", false,-1, 1,0);
    tracep->declBus(c+123,"key", false,-1, 6,0);
    tracep->declBus(c+471,"default_out", false,-1, 1,0);
    tracep->declBus(c+472,"lut", false,-1, 17,0);
    tracep->declBus(c+473,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+33+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+35+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+37+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+176,"lut_out", false,-1, 1,0);
    tracep->declBit(c+177,"hit", false,-1);
    tracep->declBus(c+474,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("riscv_mux_id_src_sel ");
    tracep->declBus(c+423,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+443,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+434,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+111,"out", false,-1, 1,0);
    tracep->declBus(c+123,"key", false,-1, 6,0);
    tracep->declBus(c+475,"default_out", false,-1, 1,0);
    tracep->declArray(c+476,"lut", false,-1, 98,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+423,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+443,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+434,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+427,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+111,"out", false,-1, 1,0);
    tracep->declBus(c+123,"key", false,-1, 6,0);
    tracep->declBus(c+475,"default_out", false,-1, 1,0);
    tracep->declArray(c+476,"lut", false,-1, 98,0);
    tracep->declBus(c+473,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+39+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+50+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+61+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+178,"lut_out", false,-1, 1,0);
    tracep->declBit(c+179,"hit", false,-1);
    tracep->declBus(c+429,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("riscv_id_reg_idu ");
    tracep->declBus(c+101,"inst", false,-1, 31,0);
    tracep->declBus(c+105,"rd", false,-1, 4,0);
    tracep->declBit(c+106,"rd_wen", false,-1);
    tracep->declBus(c+107,"rs1", false,-1, 4,0);
    tracep->declBus(c+108,"rs2", false,-1, 4,0);
    tracep->declBus(c+480,"reg_zero", false,-1, 4,0);
    tracep->pushNamePrefix("riscv_mux_id_reg ");
    tracep->declBus(c+423,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+443,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+481,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+180,"out", false,-1, 15,0);
    tracep->declBus(c+123,"key", false,-1, 6,0);
    tracep->declBus(c+482,"default_out", false,-1, 15,0);
    tracep->declArray(c+181,"lut", false,-1, 252,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+423,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+443,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+481,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+427,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+180,"out", false,-1, 15,0);
    tracep->declBus(c+123,"key", false,-1, 6,0);
    tracep->declBus(c+482,"default_out", false,-1, 15,0);
    tracep->declArray(c+181,"lut", false,-1, 252,0);
    tracep->declBus(c+483,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+189+i*1,"pair_list", true,(i+0), 22,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+72+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+200+i*1,"data_list", true,(i+0), 15,0);
    }
    tracep->declBus(c+211,"lut_out", false,-1, 15,0);
    tracep->declBit(c+212,"hit", false,-1);
    tracep->declBus(c+429,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("riscv_ifu_u0 ");
    tracep->declBit(c+419,"rst_n", false,-1);
    tracep->declBus(c+421,"pc", false,-1, 31,0);
    tracep->declBus(c+101,"inst", false,-1, 31,0);
    tracep->declBus(c+421,"raddr", false,-1, 31,0);
    tracep->declBus(c+101,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("riscv_lsu_u0 ");
    tracep->declBus(c+220,"exu_result", false,-1, 31,0);
    tracep->declBus(c+295,"src2", false,-1, 31,0);
    tracep->declBus(c+111,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+112,"func_code", false,-1, 2,0);
    tracep->declBus(c+221,"lsu_result", false,-1, 31,0);
    tracep->declBit(c+213,"ren", false,-1);
    tracep->declBus(c+220,"raddr", false,-1, 31,0);
    tracep->declBus(c+270,"rdata", false,-1, 31,0);
    tracep->declBus(c+220,"waddr", false,-1, 31,0);
    tracep->declBus(c+484,"wdata", false,-1, 31,0);
    tracep->declBus(c+214,"wmask", false,-1, 31,0);
    tracep->pushNamePrefix("riscv_mux_ls_lsu_opt ");
    tracep->declBus(c+485,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+485,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+425,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+221,"out", false,-1, 31,0);
    tracep->declBus(c+215,"key", false,-1, 4,0);
    tracep->declBus(c+426,"default_out", false,-1, 31,0);
    tracep->declArray(c+271,"lut", false,-1, 184,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+485,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+485,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+425,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+427,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+221,"out", false,-1, 31,0);
    tracep->declBus(c+215,"key", false,-1, 4,0);
    tracep->declBus(c+426,"default_out", false,-1, 31,0);
    tracep->declArray(c+271,"lut", false,-1, 184,0);
    tracep->declBus(c+486,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+277+i*2,"pair_list", true,(i+0), 36,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+83+i*1,"key_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+287+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+292,"lut_out", false,-1, 31,0);
    tracep->declBit(c+293,"hit", false,-1);
    tracep->declBus(c+487,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("riscv_mux_ls_wmask ");
    tracep->declBus(c+488,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+485,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+425,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+214,"out", false,-1, 31,0);
    tracep->declBus(c+215,"key", false,-1, 4,0);
    tracep->declBus(c+426,"default_out", false,-1, 31,0);
    tracep->declArray(c+489,"lut", false,-1, 110,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+488,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+485,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+425,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+427,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+214,"out", false,-1, 31,0);
    tracep->declBus(c+215,"key", false,-1, 4,0);
    tracep->declBus(c+426,"default_out", false,-1, 31,0);
    tracep->declArray(c+489,"lut", false,-1, 110,0);
    tracep->declBus(c+486,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+88+i*2,"pair_list", true,(i+0), 36,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+94+i*1,"key_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+97+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+216,"lut_out", false,-1, 31,0);
    tracep->declBit(c+217,"hit", false,-1);
    tracep->declBus(c+493,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("riscv_regfile_u0 ");
    tracep->declBit(c+418,"clk", false,-1);
    tracep->declBus(c+107,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+294,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+108,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+295,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+106,"rd_en", false,-1);
    tracep->declBus(c+105,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+218,"rd_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+386+i*1,"gpr", true,(i+0), 31,0);
    }
    tracep->declBus(c+100,"i", false,-1, 31,0);
    tracep->pushNamePrefix("riscv_dff_rd ");
    tracep->declBus(c+425,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+439,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+418,"clk", false,-1);
    tracep->declBit(c+494,"rst", false,-1);
    tracep->declBit(c+106,"wen", false,-1);
    tracep->declBus(c+218,"din", false,-1, 31,0);
    tracep->declBus(c+420,"dout", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("riscv_wbu_u0 ");
    tracep->declBus(c+111,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+220,"exu_result", false,-1, 31,0);
    tracep->declBus(c+221,"lsu_result", false,-1, 31,0);
    tracep->declBus(c+218,"wbu_result", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vriscv32___024root__trace_init_top(Vriscv32___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv32___024root__trace_init_top\n"); );
    // Body
    Vriscv32___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vriscv32___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vriscv32___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vriscv32___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vriscv32___024root__trace_register(Vriscv32___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv32___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vriscv32___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vriscv32___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vriscv32___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vriscv32___024root__trace_full_sub_0(Vriscv32___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vriscv32___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv32___024root__trace_full_top_0\n"); );
    // Init
    Vriscv32___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv32___024root*>(voidSelf);
    Vriscv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vriscv32___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<22>/*703:0*/ Vriscv32__ConstPool__CONST_he6306ab7_0;

VL_ATTR_COLD void Vriscv32___024root__trace_full_sub_0(Vriscv32___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv32___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<14>/*447:0*/ __Vtemp_hb7d0ae78__0;
    VlWide<13>/*415:0*/ __Vtemp_hb3e20443__0;
    VlWide<6>/*191:0*/ __Vtemp_h82212276__0;
    VlWide<13>/*415:0*/ __Vtemp_h14f39f00__0;
    VlWide<9>/*287:0*/ __Vtemp_hd9d822d0__0;
    VlWide<4>/*127:0*/ __Vtemp_h9be1f35c__0;
    VlWide<4>/*127:0*/ __Vtemp_h559e3450__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[0]),4);
    bufp->fullCData(oldp+2,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[1]),4);
    bufp->fullCData(oldp+3,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[2]),4);
    bufp->fullCData(oldp+4,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[3]),4);
    bufp->fullCData(oldp+5,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[4]),4);
    bufp->fullCData(oldp+6,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[5]),4);
    bufp->fullCData(oldp+7,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[6]),4);
    bufp->fullCData(oldp+8,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[7]),4);
    bufp->fullCData(oldp+9,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[8]),4);
    bufp->fullCData(oldp+10,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[9]),4);
    bufp->fullCData(oldp+11,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[10]),4);
    bufp->fullCData(oldp+12,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[0]),4);
    bufp->fullCData(oldp+13,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[1]),4);
    bufp->fullCData(oldp+14,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[2]),4);
    bufp->fullCData(oldp+15,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[3]),4);
    bufp->fullCData(oldp+16,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[4]),4);
    bufp->fullCData(oldp+17,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[5]),4);
    bufp->fullCData(oldp+18,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list[0]),2);
    bufp->fullCData(oldp+19,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list[1]),2);
    bufp->fullCData(oldp+20,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list[2]),2);
    bufp->fullCData(oldp+21,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list[3]),2);
    bufp->fullCData(oldp+22,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list[0]),7);
    bufp->fullCData(oldp+23,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list[1]),7);
    bufp->fullCData(oldp+24,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list[2]),7);
    bufp->fullCData(oldp+25,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list[3]),7);
    bufp->fullCData(oldp+26,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list[4]),7);
    bufp->fullCData(oldp+27,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list[5]),7);
    bufp->fullCData(oldp+28,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list[6]),7);
    bufp->fullCData(oldp+29,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list[7]),7);
    bufp->fullCData(oldp+30,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list[8]),7);
    bufp->fullCData(oldp+31,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list[9]),7);
    bufp->fullCData(oldp+32,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list[10]),7);
    bufp->fullSData(oldp+33,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__pair_list[0]),9);
    bufp->fullSData(oldp+34,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__pair_list[1]),9);
    bufp->fullCData(oldp+35,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list[0]),7);
    bufp->fullCData(oldp+36,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list[1]),7);
    bufp->fullCData(oldp+37,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__data_list[0]),2);
    bufp->fullCData(oldp+38,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__data_list[1]),2);
    bufp->fullSData(oldp+39,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[0]),9);
    bufp->fullSData(oldp+40,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[1]),9);
    bufp->fullSData(oldp+41,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[2]),9);
    bufp->fullSData(oldp+42,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[3]),9);
    bufp->fullSData(oldp+43,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[4]),9);
    bufp->fullSData(oldp+44,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[5]),9);
    bufp->fullSData(oldp+45,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[6]),9);
    bufp->fullSData(oldp+46,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[7]),9);
    bufp->fullSData(oldp+47,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[8]),9);
    bufp->fullSData(oldp+48,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[9]),9);
    bufp->fullSData(oldp+49,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[10]),9);
    bufp->fullCData(oldp+50,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[0]),7);
    bufp->fullCData(oldp+51,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[1]),7);
    bufp->fullCData(oldp+52,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[2]),7);
    bufp->fullCData(oldp+53,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[3]),7);
    bufp->fullCData(oldp+54,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[4]),7);
    bufp->fullCData(oldp+55,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[5]),7);
    bufp->fullCData(oldp+56,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[6]),7);
    bufp->fullCData(oldp+57,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[7]),7);
    bufp->fullCData(oldp+58,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[8]),7);
    bufp->fullCData(oldp+59,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[9]),7);
    bufp->fullCData(oldp+60,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[10]),7);
    bufp->fullCData(oldp+61,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[0]),2);
    bufp->fullCData(oldp+62,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[1]),2);
    bufp->fullCData(oldp+63,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[2]),2);
    bufp->fullCData(oldp+64,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[3]),2);
    bufp->fullCData(oldp+65,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[4]),2);
    bufp->fullCData(oldp+66,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[5]),2);
    bufp->fullCData(oldp+67,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[6]),2);
    bufp->fullCData(oldp+68,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[7]),2);
    bufp->fullCData(oldp+69,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[8]),2);
    bufp->fullCData(oldp+70,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[9]),2);
    bufp->fullCData(oldp+71,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[10]),2);
    bufp->fullCData(oldp+72,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_reg_idu__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[0]),7);
    bufp->fullCData(oldp+73,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_reg_idu__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[1]),7);
    bufp->fullCData(oldp+74,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_reg_idu__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[2]),7);
    bufp->fullCData(oldp+75,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_reg_idu__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[3]),7);
    bufp->fullCData(oldp+76,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_reg_idu__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[4]),7);
    bufp->fullCData(oldp+77,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_reg_idu__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[5]),7);
    bufp->fullCData(oldp+78,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_reg_idu__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[6]),7);
    bufp->fullCData(oldp+79,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_reg_idu__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[7]),7);
    bufp->fullCData(oldp+80,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_reg_idu__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[8]),7);
    bufp->fullCData(oldp+81,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_reg_idu__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[9]),7);
    bufp->fullCData(oldp+82,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_reg_idu__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[10]),7);
    bufp->fullCData(oldp+83,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list[0]),5);
    bufp->fullCData(oldp+84,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list[1]),5);
    bufp->fullCData(oldp+85,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list[2]),5);
    bufp->fullCData(oldp+86,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list[3]),5);
    bufp->fullCData(oldp+87,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list[4]),5);
    bufp->fullQData(oldp+88,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__pair_list[0]),37);
    bufp->fullQData(oldp+90,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__pair_list[1]),37);
    bufp->fullQData(oldp+92,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__pair_list[2]),37);
    bufp->fullCData(oldp+94,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list[0]),5);
    bufp->fullCData(oldp+95,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list[1]),5);
    bufp->fullCData(oldp+96,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list[2]),5);
    bufp->fullIData(oldp+97,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__data_list[0]),32);
    bufp->fullIData(oldp+98,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__data_list[1]),32);
    bufp->fullIData(oldp+99,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__data_list[2]),32);
    bufp->fullIData(oldp+100,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__i),32);
    bufp->fullIData(oldp+101,(vlSelf->riscv32__DOT__riscv_ifu_u0__DOT__rdata),32);
    bufp->fullBit(oldp+102,((0x6fU == (0x7fU & vlSelf->riscv32__DOT__riscv_ifu_u0__DOT__rdata))));
    bufp->fullBit(oldp+103,((0x17U == (0x7fU & vlSelf->riscv32__DOT__riscv_ifu_u0__DOT__rdata))));
    bufp->fullBit(oldp+104,((0x33U == (0x7fU & vlSelf->riscv32__DOT__riscv_ifu_u0__DOT__rdata))));
    bufp->fullCData(oldp+105,((0x1fU & ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_reg_idu__DOT____Vcellout__riscv_mux_id_reg__out) 
                                        >> 1U))),5);
    bufp->fullBit(oldp+106,((1U & (IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_reg_idu__DOT____Vcellout__riscv_mux_id_reg__out))));
    bufp->fullCData(oldp+107,((0x1fU & ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_reg_idu__DOT____Vcellout__riscv_mux_id_reg__out) 
                                        >> 0xbU))),5);
    bufp->fullCData(oldp+108,((0x1fU & ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_reg_idu__DOT____Vcellout__riscv_mux_id_reg__out) 
                                        >> 6U))),5);
    bufp->fullIData(oldp+109,(vlSelf->riscv32__DOT__idu_imm),32);
    bufp->fullCData(oldp+110,(vlSelf->riscv32__DOT__idu_alu_opt),4);
    bufp->fullCData(oldp+111,(vlSelf->riscv32__DOT__idu_lsu_opt),2);
    bufp->fullCData(oldp+112,((7U & (vlSelf->riscv32__DOT__riscv_ifu_u0__DOT__rdata 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+113,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key),4);
    bufp->fullIData(oldp+114,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI),32);
    bufp->fullIData(oldp+115,((0xfffff000U & vlSelf->riscv32__DOT__riscv_ifu_u0__DOT__rdata)),32);
    bufp->fullIData(oldp+116,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeS),32);
    bufp->fullIData(oldp+117,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeB),32);
    bufp->fullIData(oldp+118,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeJ),32);
    bufp->fullSData(oldp+119,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____Vcellinp__riscv_id_imm_ext_typeB__imm_in),13);
    bufp->fullSData(oldp+120,((vlSelf->riscv32__DOT__riscv_ifu_u0__DOT__rdata 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+121,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____Vcellinp__riscv_id_imm_ext_typeJ__imm_in),21);
    bufp->fullSData(oldp+122,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____Vcellinp__riscv_id_imm_ext_typeS__imm_in),12);
    bufp->fullCData(oldp+123,((0x7fU & vlSelf->riscv32__DOT__riscv_ifu_u0__DOT__rdata)),7);
    __Vtemp_hb7d0ae78__0[0U] = 0U;
    __Vtemp_hb7d0ae78__0[1U] = 0x73U;
    __Vtemp_hb7d0ae78__0[2U] = 0x780U;
    __Vtemp_hb7d0ae78__0[3U] = (0x8c000U | (vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI 
                                            << 0x15U));
    __Vtemp_hb7d0ae78__0[4U] = (0x600000U | ((vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeS 
                                              << 0x1cU) 
                                             | (vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI 
                                                >> 0xbU)));
    __Vtemp_hb7d0ae78__0[5U] = (0x30000000U | (vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeS 
                                               >> 4U));
    __Vtemp_hb7d0ae78__0[6U] = (6U | (vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI 
                                      << 3U));
    __Vtemp_hb7d0ae78__0[7U] = (0x338U | ((vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeB 
                                           << 0xaU) 
                                          | (vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI 
                                             >> 0x1dU)));
    __Vtemp_hb7d0ae78__0[8U] = (0x1bc00U | ((vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI 
                                             << 0x11U) 
                                            | (vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeB 
                                               >> 0x16U)));
    __Vtemp_hb7d0ae78__0[9U] = (0x660000U | ((vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeJ 
                                              << 0x18U) 
                                             | (vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI 
                                                >> 0xfU)));
    __Vtemp_hb7d0ae78__0[0xaU] = (0x17000000U | (vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeJ 
                                                 >> 8U));
    __Vtemp_hb7d0ae78__0[0xbU] = (0x80000000U | (0x7ffff800U 
                                                 & (vlSelf->riscv32__DOT__riscv_ifu_u0__DOT__rdata 
                                                    >> 1U)));
    __Vtemp_hb7d0ae78__0[0xcU] = (0x1bU | (0xfffc0000U 
                                           & (vlSelf->riscv32__DOT__riscv_ifu_u0__DOT__rdata 
                                              << 6U)));
    __Vtemp_hb7d0ae78__0[0xdU] = (0x4c0U | (vlSelf->riscv32__DOT__riscv_ifu_u0__DOT__rdata 
                                            >> 0x1aU));
    bufp->fullWData(oldp+124,(__Vtemp_hb7d0ae78__0),429);
    bufp->fullQData(oldp+138,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+140,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+142,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+144,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+146,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+148,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+150,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[6]),39);
    bufp->fullQData(oldp+152,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[7]),39);
    bufp->fullQData(oldp+154,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[8]),39);
    bufp->fullQData(oldp+156,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[9]),39);
    bufp->fullQData(oldp+158,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[10]),39);
    bufp->fullIData(oldp+160,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[0]),32);
    bufp->fullIData(oldp+161,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[1]),32);
    bufp->fullIData(oldp+162,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[2]),32);
    bufp->fullIData(oldp+163,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[3]),32);
    bufp->fullIData(oldp+164,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[4]),32);
    bufp->fullIData(oldp+165,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[5]),32);
    bufp->fullIData(oldp+166,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[6]),32);
    bufp->fullIData(oldp+167,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[7]),32);
    bufp->fullIData(oldp+168,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[8]),32);
    bufp->fullIData(oldp+169,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[9]),32);
    bufp->fullIData(oldp+170,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[10]),32);
    bufp->fullIData(oldp+171,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out),32);
    bufp->fullBit(oldp+172,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit));
    bufp->fullIData(oldp+173,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT____Vcellinp__riscv_mux_id_alu_opt__key),17);
    bufp->fullCData(oldp+174,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_alu_opt__DOT__i1__DOT__lut_out),4);
    bufp->fullBit(oldp+175,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_alu_opt__DOT__i1__DOT__hit));
    bufp->fullCData(oldp+176,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__lut_out),2);
    bufp->fullBit(oldp+177,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__hit));
    bufp->fullCData(oldp+178,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out),2);
    bufp->fullBit(oldp+179,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit));
    bufp->fullSData(oldp+180,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_reg_idu__DOT____Vcellout__riscv_mux_id_reg__out),16);
    bufp->fullWData(oldp+181,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_reg_idu__DOT____Vcellinp__riscv_mux_id_reg__lut),253);
    bufp->fullIData(oldp+189,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_reg_idu__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[0]),23);
    bufp->fullIData(oldp+190,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_reg_idu__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[1]),23);
    bufp->fullIData(oldp+191,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_reg_idu__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[2]),23);
    bufp->fullIData(oldp+192,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_reg_idu__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[3]),23);
    bufp->fullIData(oldp+193,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_reg_idu__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[4]),23);
    bufp->fullIData(oldp+194,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_reg_idu__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[5]),23);
    bufp->fullIData(oldp+195,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_reg_idu__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[6]),23);
    bufp->fullIData(oldp+196,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_reg_idu__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[7]),23);
    bufp->fullIData(oldp+197,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_reg_idu__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[8]),23);
    bufp->fullIData(oldp+198,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_reg_idu__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[9]),23);
    bufp->fullIData(oldp+199,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_reg_idu__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[10]),23);
    bufp->fullSData(oldp+200,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_reg_idu__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[0]),16);
    bufp->fullSData(oldp+201,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_reg_idu__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[1]),16);
    bufp->fullSData(oldp+202,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_reg_idu__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[2]),16);
    bufp->fullSData(oldp+203,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_reg_idu__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[3]),16);
    bufp->fullSData(oldp+204,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_reg_idu__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[4]),16);
    bufp->fullSData(oldp+205,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_reg_idu__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[5]),16);
    bufp->fullSData(oldp+206,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_reg_idu__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[6]),16);
    bufp->fullSData(oldp+207,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_reg_idu__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[7]),16);
    bufp->fullSData(oldp+208,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_reg_idu__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[8]),16);
    bufp->fullSData(oldp+209,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_reg_idu__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[9]),16);
    bufp->fullSData(oldp+210,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_reg_idu__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[10]),16);
    bufp->fullSData(oldp+211,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_reg_idu__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out),16);
    bufp->fullBit(oldp+212,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_reg_idu__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit));
    bufp->fullBit(oldp+213,((0U != (IData)(vlSelf->riscv32__DOT__idu_lsu_opt))));
    bufp->fullIData(oldp+214,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__wmask),32);
    bufp->fullCData(oldp+215,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key),5);
    bufp->fullIData(oldp+216,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__lut_out),32);
    bufp->fullBit(oldp+217,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__hit));
    bufp->fullIData(oldp+218,(((0U == (IData)(vlSelf->riscv32__DOT__idu_lsu_opt))
                                ? (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_branch__out)
                                : vlSelf->riscv32__DOT__lsu_result)),32);
    bufp->fullBit(oldp+219,((1U & (~ (IData)((0U != (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_branch__out)))))));
    bufp->fullIData(oldp+220,((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_branch__out)),32);
    bufp->fullIData(oldp+221,(vlSelf->riscv32__DOT__lsu_result),32);
    bufp->fullQData(oldp+222,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_branch__out),64);
    __Vtemp_hb3e20443__0[0U] = (IData)(vlSelf->__VdfgTmp_h25847f12__0);
    __Vtemp_hb3e20443__0[1U] = (0x800U | (IData)((vlSelf->__VdfgTmp_h25847f12__0 
                                                  >> 0x20U)));
    __Vtemp_hb3e20443__0[2U] = (0x10380U | (0x400U 
                                            & ((~ (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data 
                                                   >> 0x1fU)) 
                                               << 0xaU)));
    __Vtemp_hb3e20443__0[3U] = (0x206800U | (0x8000U 
                                             & (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data 
                                                >> 0x10U)));
    __Vtemp_hb3e20443__0[4U] = (0x40c0000U | ((IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_branch__out))) 
                                              << 0x14U));
    __Vtemp_hb3e20443__0[5U] = (0x81200000U | (0x2000000U 
                                               & ((~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_branch__out)))) 
                                                  << 0x19U)));
    __Vtemp_hb3e20443__0[6U] = 0x20000000U;
    __Vtemp_hb3e20443__0[7U] = 0U;
    __Vtemp_hb3e20443__0[8U] = 0U;
    __Vtemp_hb3e20443__0[9U] = 0U;
    __Vtemp_hb3e20443__0[0xaU] = 0U;
    __Vtemp_hb3e20443__0[0xbU] = 0U;
    __Vtemp_hb3e20443__0[0xcU] = 0U;
    bufp->fullWData(oldp+224,(__Vtemp_hb3e20443__0),408);
    bufp->fullWData(oldp+237,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[0]),68);
    bufp->fullWData(oldp+240,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[1]),68);
    bufp->fullWData(oldp+243,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[2]),68);
    bufp->fullWData(oldp+246,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[3]),68);
    bufp->fullWData(oldp+249,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[4]),68);
    bufp->fullWData(oldp+252,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[5]),68);
    bufp->fullQData(oldp+255,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[0]),64);
    bufp->fullQData(oldp+257,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[1]),64);
    bufp->fullQData(oldp+259,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[2]),64);
    bufp->fullQData(oldp+261,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[3]),64);
    bufp->fullQData(oldp+263,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[4]),64);
    bufp->fullQData(oldp+265,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[5]),64);
    bufp->fullQData(oldp+267,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out),64);
    bufp->fullBit(oldp+269,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit));
    bufp->fullIData(oldp+270,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata),32);
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
    bufp->fullWData(oldp+271,(__Vtemp_h82212276__0),185);
    bufp->fullQData(oldp+277,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[0]),37);
    bufp->fullQData(oldp+279,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[1]),37);
    bufp->fullQData(oldp+281,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[2]),37);
    bufp->fullQData(oldp+283,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[3]),37);
    bufp->fullQData(oldp+285,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[4]),37);
    bufp->fullIData(oldp+287,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[0]),32);
    bufp->fullIData(oldp+288,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[1]),32);
    bufp->fullIData(oldp+289,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[2]),32);
    bufp->fullIData(oldp+290,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[3]),32);
    bufp->fullIData(oldp+291,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[4]),32);
    bufp->fullIData(oldp+292,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out),32);
    bufp->fullBit(oldp+293,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit));
    bufp->fullIData(oldp+294,(vlSelf->riscv32__DOT__src1),32);
    bufp->fullIData(oldp+295,(vlSelf->riscv32__DOT__src2),32);
    bufp->fullIData(oldp+296,((IData)((vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+297,((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)),32);
    bufp->fullIData(oldp+298,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data),32);
    bufp->fullBit(oldp+299,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__carry_flag));
    bufp->fullIData(oldp+300,(((IData)((vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                        >> 0x20U)) 
                               + (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out))),32);
    bufp->fullIData(oldp+301,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_data),32);
    __Vtemp_h14f39f00__0[0U] = (IData)((0xb00000000ULL 
                                        | (QData)((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_data))));
    __Vtemp_h14f39f00__0[1U] = ((((IData)((vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                           >> 0x20U)) 
                                  & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)) 
                                 << 4U) | (IData)((
                                                   (0xb00000000ULL 
                                                    | (QData)((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_data))) 
                                                   >> 0x20U)));
    __Vtemp_h14f39f00__0[2U] = (0xa0U | ((((IData)(
                                                   (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                    >> 0x20U)) 
                                           | (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)) 
                                          << 8U) | 
                                         (((IData)(
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
                                              >= (0x3fU 
                                                  & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
                                              ? ((IData)(
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
    __Vtemp_h14f39f00__0[9U] = ((0x1fU >= (0x3fU & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
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
    bufp->fullWData(oldp+302,(__Vtemp_h14f39f00__0),396);
    bufp->fullQData(oldp+315,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[0]),36);
    bufp->fullQData(oldp+317,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[1]),36);
    bufp->fullQData(oldp+319,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[2]),36);
    bufp->fullQData(oldp+321,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[3]),36);
    bufp->fullQData(oldp+323,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[4]),36);
    bufp->fullQData(oldp+325,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[5]),36);
    bufp->fullQData(oldp+327,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[6]),36);
    bufp->fullQData(oldp+329,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[7]),36);
    bufp->fullQData(oldp+331,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[8]),36);
    bufp->fullQData(oldp+333,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[9]),36);
    bufp->fullQData(oldp+335,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[10]),36);
    bufp->fullIData(oldp+337,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[0]),32);
    bufp->fullIData(oldp+338,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[1]),32);
    bufp->fullIData(oldp+339,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[2]),32);
    bufp->fullIData(oldp+340,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[3]),32);
    bufp->fullIData(oldp+341,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[4]),32);
    bufp->fullIData(oldp+342,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[5]),32);
    bufp->fullIData(oldp+343,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[6]),32);
    bufp->fullIData(oldp+344,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[7]),32);
    bufp->fullIData(oldp+345,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[8]),32);
    bufp->fullIData(oldp+346,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[9]),32);
    bufp->fullIData(oldp+347,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[10]),32);
    bufp->fullIData(oldp+348,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out),32);
    bufp->fullBit(oldp+349,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit));
    bufp->fullQData(oldp+350,((QData)((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data))),64);
    bufp->fullQData(oldp+352,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out),64);
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
    __Vtemp_hd9d822d0__0[4U] = (8U | (((IData)((((QData)((IData)(vlSelf->riscv32__DOT__src1)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->riscv32__DOT__idu_imm)))) 
                                       << 4U) | (vlSelf->riscv32__DOT__ifu_pc 
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
    __Vtemp_hd9d822d0__0[6U] = (0x10U | (((IData)((
                                                   ((QData)((IData)(vlSelf->riscv32__DOT__src1)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->riscv32__DOT__src2)))) 
                                          << 6U) | 
                                         ((IData)((
                                                   (((QData)((IData)(vlSelf->riscv32__DOT__src1)) 
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
    bufp->fullWData(oldp+354,(__Vtemp_hd9d822d0__0),264);
    bufp->fullWData(oldp+363,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+366,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+369,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[2]),66);
    bufp->fullWData(oldp+372,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[3]),66);
    bufp->fullQData(oldp+375,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[0]),64);
    bufp->fullQData(oldp+377,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[1]),64);
    bufp->fullQData(oldp+379,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[2]),64);
    bufp->fullQData(oldp+381,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[3]),64);
    bufp->fullQData(oldp+383,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out),64);
    bufp->fullBit(oldp+385,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit));
    bufp->fullIData(oldp+386,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[0]),32);
    bufp->fullIData(oldp+387,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[1]),32);
    bufp->fullIData(oldp+388,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[2]),32);
    bufp->fullIData(oldp+389,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[3]),32);
    bufp->fullIData(oldp+390,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[4]),32);
    bufp->fullIData(oldp+391,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[5]),32);
    bufp->fullIData(oldp+392,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[6]),32);
    bufp->fullIData(oldp+393,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[7]),32);
    bufp->fullIData(oldp+394,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[8]),32);
    bufp->fullIData(oldp+395,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[9]),32);
    bufp->fullIData(oldp+396,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[10]),32);
    bufp->fullIData(oldp+397,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[11]),32);
    bufp->fullIData(oldp+398,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[12]),32);
    bufp->fullIData(oldp+399,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[13]),32);
    bufp->fullIData(oldp+400,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[14]),32);
    bufp->fullIData(oldp+401,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[15]),32);
    bufp->fullIData(oldp+402,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[16]),32);
    bufp->fullIData(oldp+403,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[17]),32);
    bufp->fullIData(oldp+404,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[18]),32);
    bufp->fullIData(oldp+405,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[19]),32);
    bufp->fullIData(oldp+406,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[20]),32);
    bufp->fullIData(oldp+407,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[21]),32);
    bufp->fullIData(oldp+408,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[22]),32);
    bufp->fullIData(oldp+409,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[23]),32);
    bufp->fullIData(oldp+410,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[24]),32);
    bufp->fullIData(oldp+411,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[25]),32);
    bufp->fullIData(oldp+412,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[26]),32);
    bufp->fullIData(oldp+413,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[27]),32);
    bufp->fullIData(oldp+414,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[28]),32);
    bufp->fullIData(oldp+415,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[29]),32);
    bufp->fullIData(oldp+416,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[30]),32);
    bufp->fullIData(oldp+417,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[31]),32);
    bufp->fullBit(oldp+418,(vlSelf->clk));
    bufp->fullBit(oldp+419,(vlSelf->rst_n));
    bufp->fullIData(oldp+420,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT____Vcellout__riscv_dff_rd____pinNumber5),32);
    bufp->fullIData(oldp+421,(vlSelf->riscv32__DOT__ifu_pc),32);
    bufp->fullCData(oldp+422,(vlSelf->riscv32__DOT__idu_src_sel),2);
    bufp->fullIData(oldp+423,(0xbU),32);
    bufp->fullIData(oldp+424,(4U),32);
    bufp->fullIData(oldp+425,(0x20U),32);
    bufp->fullIData(oldp+426,(0U),32);
    bufp->fullIData(oldp+427,(1U),32);
    bufp->fullIData(oldp+428,(0x24U),32);
    bufp->fullIData(oldp+429,(0xbU),32);
    bufp->fullIData(oldp+430,(6U),32);
    bufp->fullIData(oldp+431,(0x40U),32);
    bufp->fullIData(oldp+432,(0x44U),32);
    bufp->fullIData(oldp+433,(6U),32);
    bufp->fullIData(oldp+434,(2U),32);
    bufp->fullQData(oldp+435,(0ULL),64);
    bufp->fullIData(oldp+437,(0x42U),32);
    bufp->fullIData(oldp+438,(4U),32);
    bufp->fullIData(oldp+439,(0U),32);
    bufp->fullIData(oldp+440,(0xdU),32);
    bufp->fullIData(oldp+441,(0xcU),32);
    bufp->fullIData(oldp+442,(0x15U),32);
    bufp->fullIData(oldp+443,(7U),32);
    bufp->fullIData(oldp+444,(0x27U),32);
    bufp->fullIData(oldp+445,(0x21U),32);
    bufp->fullIData(oldp+446,(0x11U),32);
    bufp->fullCData(oldp+447,(1U),4);
    bufp->fullWData(oldp+448,(Vriscv32__ConstPool__CONST_he6306ab7_0),693);
    bufp->fullIData(oldp+470,(0x21U),32);
    bufp->fullCData(oldp+471,(0U),2);
    bufp->fullIData(oldp+472,(0x33b8eU),18);
    bufp->fullIData(oldp+473,(9U),32);
    bufp->fullIData(oldp+474,(2U),32);
    bufp->fullCData(oldp+475,(1U),2);
    __Vtemp_h9be1f35c__0[0U] = 0x6a307bcdU;
    __Vtemp_h9be1f35c__0[1U] = 0x6f33b8d0U;
    __Vtemp_h9be1f35c__0[2U] = 0x35be5e67U;
    __Vtemp_h9be1f35c__0[3U] = 1U;
    bufp->fullWData(oldp+476,(__Vtemp_h9be1f35c__0),99);
    bufp->fullCData(oldp+480,(0U),5);
    bufp->fullIData(oldp+481,(0x10U),32);
    bufp->fullSData(oldp+482,(0U),16);
    bufp->fullIData(oldp+483,(0x17U),32);
    bufp->fullIData(oldp+484,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__wdata),32);
    bufp->fullIData(oldp+485,(5U),32);
    bufp->fullIData(oldp+486,(0x25U),32);
    bufp->fullIData(oldp+487,(5U),32);
    bufp->fullIData(oldp+488,(3U),32);
    __Vtemp_h559e3450__0[0U] = 0xffffffffU;
    __Vtemp_h559e3450__0[1U] = 0x1ffff2U;
    __Vtemp_h559e3450__0[2U] = 0x3fe20U;
    __Vtemp_h559e3450__0[3U] = 0x4000U;
    bufp->fullWData(oldp+489,(__Vtemp_h559e3450__0),111);
    bufp->fullIData(oldp+493,(3U),32);
    bufp->fullBit(oldp+494,(0U));
}
