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
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+410,"rst_n", false,-1);
    tracep->pushNamePrefix("riscv32 ");
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+410,"rst_n", false,-1);
    tracep->declBus(c+401,"ifu_pc", false,-1, 31,0);
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
    tracep->declBus(c+111,"idu_src_sel", false,-1, 1,0);
    tracep->declBus(c+112,"idu_lsu_opt", false,-1, 1,0);
    tracep->declBus(c+113,"idu_funct3", false,-1, 2,0);
    tracep->declBus(c+114,"src1", false,-1, 31,0);
    tracep->declBus(c+115,"src2", false,-1, 31,0);
    tracep->declBus(c+116,"rd_data", false,-1, 31,0);
    tracep->declBit(c+117,"zero_flag", false,-1);
    tracep->declBus(c+118,"exu_result", false,-1, 31,0);
    tracep->declBus(c+119,"lsu_result", false,-1, 31,0);
    tracep->pushNamePrefix("riscv_bpu_u0 ");
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+410,"rst_n", false,-1);
    tracep->declBit(c+117,"zero_flag", false,-1);
    tracep->declBit(c+102,"branch", false,-1);
    tracep->declBit(c+103,"jal", false,-1);
    tracep->declBit(c+104,"jalr", false,-1);
    tracep->declBus(c+114,"src1", false,-1, 31,0);
    tracep->declBus(c+109,"imm", false,-1, 31,0);
    tracep->declBus(c+401,"pc", false,-1, 31,0);
    tracep->declBus(c+120,"npc", false,-1, 31,0);
    tracep->pushNamePrefix("riscv_dff_pc ");
    tracep->declBus(c+412,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+413,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+411,"rst", false,-1);
    tracep->declBit(c+414,"wen", false,-1);
    tracep->declBus(c+120,"din", false,-1, 31,0);
    tracep->declBus(c+401,"dout", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("riscv_exu_u0 ");
    tracep->declBus(c+401,"pc", false,-1, 31,0);
    tracep->declBus(c+114,"src1", false,-1, 31,0);
    tracep->declBus(c+115,"src2", false,-1, 31,0);
    tracep->declBus(c+109,"imm", false,-1, 31,0);
    tracep->declBit(c+102,"branch", false,-1);
    tracep->declBus(c+110,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+111,"src_sel", false,-1, 1,0);
    tracep->declBus(c+113,"funct3", false,-1, 2,0);
    tracep->declBit(c+117,"zero_flag", false,-1);
    tracep->declBus(c+118,"exu_result", false,-1, 31,0);
    tracep->declBus(c+121,"alu_a_data", false,-1, 31,0);
    tracep->declBus(c+122,"alu_b_data", false,-1, 31,0);
    tracep->declBus(c+123,"alu_out_data", false,-1, 31,0);
    tracep->declBit(c+124,"carry_flag", false,-1);
    tracep->pushNamePrefix("riscv_ex_alu ");
    tracep->declBus(c+110,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+121,"alu_a_data", false,-1, 31,0);
    tracep->declBus(c+122,"alu_b_data", false,-1, 31,0);
    tracep->declBit(c+124,"carry_flag", false,-1);
    tracep->declBus(c+123,"alu_out_data", false,-1, 31,0);
    tracep->declBus(c+125,"add_data", false,-1, 31,0);
    tracep->declBus(c+126,"sub_data", false,-1, 31,0);
    tracep->declBus(c+126,"usub_data", false,-1, 31,0);
    tracep->pushNamePrefix("riscv_mux_ex_data ");
    tracep->declBus(c+415,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+416,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+412,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+123,"out", false,-1, 31,0);
    tracep->declBus(c+110,"key", false,-1, 3,0);
    tracep->declBus(c+417,"default_out", false,-1, 31,0);
    tracep->declArray(c+127,"lut", false,-1, 395,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+415,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+416,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+412,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+418,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+123,"out", false,-1, 31,0);
    tracep->declBus(c+110,"key", false,-1, 3,0);
    tracep->declBus(c+417,"default_out", false,-1, 31,0);
    tracep->declArray(c+127,"lut", false,-1, 395,0);
    tracep->declBus(c+419,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+140+i*2,"pair_list", true,(i+0), 35,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+162+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+173,"lut_out", false,-1, 31,0);
    tracep->declBit(c+174,"hit", false,-1);
    tracep->declBus(c+420,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("riscv_mux_ex_branch ");
    tracep->declBus(c+421,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+416,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+412,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+118,"out", false,-1, 31,0);
    tracep->declBus(c+175,"key", false,-1, 3,0);
    tracep->declBus(c+123,"default_out", false,-1, 31,0);
    tracep->declArray(c+176,"lut", false,-1, 215,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+421,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+416,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+412,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+418,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+118,"out", false,-1, 31,0);
    tracep->declBus(c+175,"key", false,-1, 3,0);
    tracep->declBus(c+123,"default_out", false,-1, 31,0);
    tracep->declArray(c+176,"lut", false,-1, 215,0);
    tracep->declBus(c+419,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+183+i*2,"pair_list", true,(i+0), 35,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+12+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+195+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+201,"lut_out", false,-1, 31,0);
    tracep->declBit(c+202,"hit", false,-1);
    tracep->declBus(c+422,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("riscv_mux_ex_src_sel ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+423,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+424,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+203,"out", false,-1, 63,0);
    tracep->declBus(c+111,"key", false,-1, 1,0);
    tracep->declQuad(c+425,"default_out", false,-1, 63,0);
    tracep->declArray(c+205,"lut", false,-1, 263,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+416,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+423,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+424,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+418,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+203,"out", false,-1, 63,0);
    tracep->declBus(c+111,"key", false,-1, 1,0);
    tracep->declQuad(c+425,"default_out", false,-1, 63,0);
    tracep->declArray(c+205,"lut", false,-1, 263,0);
    tracep->declBus(c+427,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+214+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+18+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+226+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+234,"lut_out", false,-1, 63,0);
    tracep->declBit(c+236,"hit", false,-1);
    tracep->declBus(c+428,"i", false,-1, 31,0);
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
    tracep->declBus(c+111,"src_sel", false,-1, 1,0);
    tracep->declBus(c+112,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+113,"funct3", false,-1, 2,0);
    tracep->declBus(c+237,"opcode", false,-1, 6,0);
    tracep->declBus(c+238,"funct7", false,-1, 6,0);
    tracep->declBus(c+429,"reg_zero", false,-1, 4,0);
    tracep->pushNamePrefix("riscv_id_imm_idu ");
    tracep->declBus(c+101,"inst", false,-1, 31,0);
    tracep->declBus(c+109,"imm", false,-1, 31,0);
    tracep->declBus(c+239,"imm_typeI", false,-1, 31,0);
    tracep->declBus(c+240,"imm_typeU", false,-1, 31,0);
    tracep->declBus(c+241,"imm_typeS", false,-1, 31,0);
    tracep->declBus(c+242,"imm_typeB", false,-1, 31,0);
    tracep->declBus(c+243,"imm_typeJ", false,-1, 31,0);
    tracep->declBus(c+430,"imm_typeR", false,-1, 31,0);
    tracep->declBus(c+430,"imm_type_NONE", false,-1, 31,0);
    tracep->pushNamePrefix("riscv_id_imm_ext_typeB ");
    tracep->declBus(c+431,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+244,"imm_in", false,-1, 12,0);
    tracep->declBus(c+242,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("riscv_id_imm_ext_typeI ");
    tracep->declBus(c+432,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+245,"imm_in", false,-1, 11,0);
    tracep->declBus(c+239,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("riscv_id_imm_ext_typeJ ");
    tracep->declBus(c+433,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+246,"imm_in", false,-1, 20,0);
    tracep->declBus(c+243,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("riscv_id_imm_ext_typeS ");
    tracep->declBus(c+432,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+247,"imm_in", false,-1, 11,0);
    tracep->declBus(c+241,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("riscv_id_imm_ext_typeU ");
    tracep->declBus(c+412,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+240,"imm_in", false,-1, 31,0);
    tracep->declBus(c+240,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("riscv_mux_id_imm ");
    tracep->declBus(c+415,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+434,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+412,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+109,"out", false,-1, 31,0);
    tracep->declBus(c+237,"key", false,-1, 6,0);
    tracep->declBus(c+417,"default_out", false,-1, 31,0);
    tracep->declArray(c+248,"lut", false,-1, 428,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+415,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+434,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+412,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+418,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+109,"out", false,-1, 31,0);
    tracep->declBus(c+237,"key", false,-1, 6,0);
    tracep->declBus(c+417,"default_out", false,-1, 31,0);
    tracep->declArray(c+248,"lut", false,-1, 428,0);
    tracep->declBus(c+435,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+262+i*2,"pair_list", true,(i+0), 38,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+22+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+284+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+295,"lut_out", false,-1, 31,0);
    tracep->declBit(c+296,"hit", false,-1);
    tracep->declBus(c+420,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("riscv_id_opt_idu ");
    tracep->declBus(c+237,"opcode", false,-1, 6,0);
    tracep->declBus(c+113,"funct3", false,-1, 2,0);
    tracep->declBus(c+238,"funct7", false,-1, 6,0);
    tracep->declBus(c+110,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+111,"src_sel", false,-1, 1,0);
    tracep->declBus(c+112,"lsu_opt", false,-1, 1,0);
    tracep->pushNamePrefix("riscv_mux_id_alu_opt ");
    tracep->declBus(c+436,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+437,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+416,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+110,"out", false,-1, 3,0);
    tracep->declBus(c+297,"key", false,-1, 16,0);
    tracep->declBus(c+438,"default_out", false,-1, 3,0);
    tracep->declArray(c+439,"lut", false,-1, 692,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+436,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+437,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+416,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+418,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+110,"out", false,-1, 3,0);
    tracep->declBus(c+297,"key", false,-1, 16,0);
    tracep->declBus(c+438,"default_out", false,-1, 3,0);
    tracep->declArray(c+439,"lut", false,-1, 692,0);
    tracep->declBus(c+433,"PAIR_LEN", false,-1, 31,0);
    tracep->declBus(c+298,"lut_out", false,-1, 3,0);
    tracep->declBit(c+299,"hit", false,-1);
    tracep->declBus(c+461,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("riscv_mux_id_lsu_opt ");
    tracep->declBus(c+423,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+434,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+423,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+112,"out", false,-1, 1,0);
    tracep->declBus(c+237,"key", false,-1, 6,0);
    tracep->declBus(c+462,"default_out", false,-1, 1,0);
    tracep->declBus(c+463,"lut", false,-1, 17,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+423,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+434,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+423,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+418,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+112,"out", false,-1, 1,0);
    tracep->declBus(c+237,"key", false,-1, 6,0);
    tracep->declBus(c+462,"default_out", false,-1, 1,0);
    tracep->declBus(c+463,"lut", false,-1, 17,0);
    tracep->declBus(c+464,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+33+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+35+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+37+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+300,"lut_out", false,-1, 1,0);
    tracep->declBit(c+301,"hit", false,-1);
    tracep->declBus(c+465,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("riscv_mux_id_src_sel ");
    tracep->declBus(c+415,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+434,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+423,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+111,"out", false,-1, 1,0);
    tracep->declBus(c+237,"key", false,-1, 6,0);
    tracep->declBus(c+466,"default_out", false,-1, 1,0);
    tracep->declArray(c+467,"lut", false,-1, 98,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+415,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+434,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+423,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+418,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+111,"out", false,-1, 1,0);
    tracep->declBus(c+237,"key", false,-1, 6,0);
    tracep->declBus(c+466,"default_out", false,-1, 1,0);
    tracep->declArray(c+467,"lut", false,-1, 98,0);
    tracep->declBus(c+464,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+39+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+50+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+61+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+302,"lut_out", false,-1, 1,0);
    tracep->declBit(c+303,"hit", false,-1);
    tracep->declBus(c+420,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("riscv_mux_id_reg ");
    tracep->declBus(c+415,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+434,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+471,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+304,"out", false,-1, 15,0);
    tracep->declBus(c+237,"key", false,-1, 6,0);
    tracep->declBus(c+472,"default_out", false,-1, 15,0);
    tracep->declArray(c+305,"lut", false,-1, 252,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+415,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+434,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+471,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+418,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+304,"out", false,-1, 15,0);
    tracep->declBus(c+237,"key", false,-1, 6,0);
    tracep->declBus(c+472,"default_out", false,-1, 15,0);
    tracep->declArray(c+305,"lut", false,-1, 252,0);
    tracep->declBus(c+473,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+313+i*1,"pair_list", true,(i+0), 22,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+72+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+324+i*1,"data_list", true,(i+0), 15,0);
    }
    tracep->declBus(c+335,"lut_out", false,-1, 15,0);
    tracep->declBit(c+336,"hit", false,-1);
    tracep->declBus(c+420,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("riscv_ifu_u0 ");
    tracep->declBit(c+410,"rst_n", false,-1);
    tracep->declBus(c+401,"pc", false,-1, 31,0);
    tracep->declBus(c+101,"inst", false,-1, 31,0);
    tracep->declBus(c+401,"raddr", false,-1, 31,0);
    tracep->declBus(c+101,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("riscv_lsu_u0 ");
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+410,"rst_n", false,-1);
    tracep->declBus(c+118,"exu_result", false,-1, 31,0);
    tracep->declBus(c+115,"src2", false,-1, 31,0);
    tracep->declBus(c+112,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+113,"funct3", false,-1, 2,0);
    tracep->declBus(c+119,"lsu_result", false,-1, 31,0);
    tracep->declBit(c+337,"ren", false,-1);
    tracep->declBus(c+118,"raddr", false,-1, 31,0);
    tracep->declBus(c+338,"rdata", false,-1, 31,0);
    tracep->declBus(c+402,"waddr", false,-1, 31,0);
    tracep->declBus(c+403,"wdata", false,-1, 31,0);
    tracep->declBus(c+404,"wmask", false,-1, 31,0);
    tracep->declBus(c+339,"mask", false,-1, 31,0);
    tracep->pushNamePrefix("riscv_dff_pc ");
    tracep->declBus(c+474,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+417,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+411,"rst", false,-1);
    tracep->declBit(c+414,"wen", false,-1);
    tracep->declArray(c+340,"din", false,-1, 95,0);
    tracep->declArray(c+405,"dout", false,-1, 95,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("riscv_mux_ls_lsu_opt ");
    tracep->declBus(c+475,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+475,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+412,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+119,"out", false,-1, 31,0);
    tracep->declBus(c+343,"key", false,-1, 4,0);
    tracep->declBus(c+417,"default_out", false,-1, 31,0);
    tracep->declArray(c+344,"lut", false,-1, 184,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+475,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+475,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+412,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+418,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+119,"out", false,-1, 31,0);
    tracep->declBus(c+343,"key", false,-1, 4,0);
    tracep->declBus(c+417,"default_out", false,-1, 31,0);
    tracep->declArray(c+344,"lut", false,-1, 184,0);
    tracep->declBus(c+476,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+350+i*2,"pair_list", true,(i+0), 36,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+83+i*1,"key_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+360+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+365,"lut_out", false,-1, 31,0);
    tracep->declBit(c+366,"hit", false,-1);
    tracep->declBus(c+477,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("riscv_mux_ls_wmask ");
    tracep->declBus(c+478,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+475,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+412,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+339,"out", false,-1, 31,0);
    tracep->declBus(c+343,"key", false,-1, 4,0);
    tracep->declBus(c+417,"default_out", false,-1, 31,0);
    tracep->declArray(c+479,"lut", false,-1, 110,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+478,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+475,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+412,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+418,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+339,"out", false,-1, 31,0);
    tracep->declBus(c+343,"key", false,-1, 4,0);
    tracep->declBus(c+417,"default_out", false,-1, 31,0);
    tracep->declArray(c+479,"lut", false,-1, 110,0);
    tracep->declBus(c+476,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+88+i*2,"pair_list", true,(i+0), 36,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+94+i*1,"key_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+97+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+367,"lut_out", false,-1, 31,0);
    tracep->declBit(c+368,"hit", false,-1);
    tracep->declBus(c+483,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("riscv_regfile_u0 ");
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+410,"rst_n", false,-1);
    tracep->declBus(c+107,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+114,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+108,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+115,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+106,"rd_en", false,-1);
    tracep->declBus(c+105,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+116,"rd_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+369+i*1,"gpr", true,(i+0), 31,0);
    }
    tracep->declBus(c+100,"i", false,-1, 31,0);
    tracep->pushNamePrefix("riscv_dff_pc ");
    tracep->declBus(c+412,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+430,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+409,"clk", false,-1);
    tracep->declBit(c+411,"rst", false,-1);
    tracep->declBit(c+106,"wen", false,-1);
    tracep->declBus(c+116,"din", false,-1, 31,0);
    tracep->declBus(c+408,"dout", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("riscv_wbu_u0 ");
    tracep->declBus(c+112,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+118,"exu_result", false,-1, 31,0);
    tracep->declBus(c+119,"lsu_result", false,-1, 31,0);
    tracep->declBus(c+116,"wbu_result", false,-1, 31,0);
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
    VlWide<13>/*415:0*/ __Vtemp_h14f39f00__0;
    VlWide<7>/*223:0*/ __Vtemp_h39041830__0;
    VlWide<9>/*287:0*/ __Vtemp_hd9d822d0__0;
    VlWide<14>/*447:0*/ __Vtemp_hb7d0ae78__0;
    VlWide<3>/*95:0*/ __Vtemp_h8c6da091__0;
    VlWide<6>/*191:0*/ __Vtemp_h82212276__0;
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
    bufp->fullCData(oldp+72,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[0]),7);
    bufp->fullCData(oldp+73,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[1]),7);
    bufp->fullCData(oldp+74,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[2]),7);
    bufp->fullCData(oldp+75,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[3]),7);
    bufp->fullCData(oldp+76,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[4]),7);
    bufp->fullCData(oldp+77,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[5]),7);
    bufp->fullCData(oldp+78,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[6]),7);
    bufp->fullCData(oldp+79,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[7]),7);
    bufp->fullCData(oldp+80,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[8]),7);
    bufp->fullCData(oldp+81,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[9]),7);
    bufp->fullCData(oldp+82,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[10]),7);
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
    bufp->fullCData(oldp+105,((0x1fU & ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                                        >> 1U))),5);
    bufp->fullBit(oldp+106,((1U & (IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out))));
    bufp->fullCData(oldp+107,((0x1fU & ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                                        >> 0xbU))),5);
    bufp->fullCData(oldp+108,((0x1fU & ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                                        >> 6U))),5);
    bufp->fullIData(oldp+109,(vlSelf->riscv32__DOT__idu_imm),32);
    bufp->fullCData(oldp+110,(vlSelf->riscv32__DOT__idu_alu_opt),4);
    bufp->fullCData(oldp+111,(vlSelf->riscv32__DOT__idu_src_sel),2);
    bufp->fullCData(oldp+112,(vlSelf->riscv32__DOT__idu_lsu_opt),2);
    bufp->fullCData(oldp+113,((7U & (vlSelf->riscv32__DOT__riscv_ifu_u0__DOT__rdata 
                                     >> 0xcU))),3);
    bufp->fullIData(oldp+114,(vlSelf->riscv32__DOT__src1),32);
    bufp->fullIData(oldp+115,(vlSelf->riscv32__DOT__src2),32);
    bufp->fullIData(oldp+116,(((0U == (IData)(vlSelf->riscv32__DOT__idu_lsu_opt))
                                ? vlSelf->riscv32__DOT__exu_result
                                : vlSelf->riscv32__DOT__lsu_result)),32);
    bufp->fullBit(oldp+117,((1U & (~ (IData)((0U != vlSelf->riscv32__DOT__exu_result))))));
    bufp->fullIData(oldp+118,(vlSelf->riscv32__DOT__exu_result),32);
    bufp->fullIData(oldp+119,(vlSelf->riscv32__DOT__lsu_result),32);
    bufp->fullIData(oldp+120,(((((0U != vlSelf->riscv32__DOT__exu_result) 
                                 & (0x6fU == (0x7fU 
                                              & vlSelf->riscv32__DOT__riscv_ifu_u0__DOT__rdata))) 
                                | (0x17U == (0x7fU 
                                             & vlSelf->riscv32__DOT__riscv_ifu_u0__DOT__rdata)))
                                ? (vlSelf->riscv32__DOT__idu_imm 
                                   + vlSelf->riscv32__DOT__ifu_pc)
                                : ((0x33U == (0x7fU 
                                              & vlSelf->riscv32__DOT__riscv_ifu_u0__DOT__rdata))
                                    ? (vlSelf->riscv32__DOT__idu_imm 
                                       + vlSelf->riscv32__DOT__src1)
                                    : ((IData)(4U) 
                                       + vlSelf->riscv32__DOT__ifu_pc)))),32);
    bufp->fullIData(oldp+121,((IData)((vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+122,((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)),32);
    bufp->fullIData(oldp+123,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data),32);
    bufp->fullBit(oldp+124,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__carry_flag));
    bufp->fullIData(oldp+125,(((IData)((vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                        >> 0x20U)) 
                               + (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out))),32);
    bufp->fullIData(oldp+126,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_data),32);
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
    bufp->fullWData(oldp+127,(__Vtemp_h14f39f00__0),396);
    bufp->fullQData(oldp+140,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[0]),36);
    bufp->fullQData(oldp+142,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[1]),36);
    bufp->fullQData(oldp+144,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[2]),36);
    bufp->fullQData(oldp+146,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[3]),36);
    bufp->fullQData(oldp+148,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[4]),36);
    bufp->fullQData(oldp+150,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[5]),36);
    bufp->fullQData(oldp+152,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[6]),36);
    bufp->fullQData(oldp+154,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[7]),36);
    bufp->fullQData(oldp+156,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[8]),36);
    bufp->fullQData(oldp+158,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[9]),36);
    bufp->fullQData(oldp+160,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[10]),36);
    bufp->fullIData(oldp+162,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[0]),32);
    bufp->fullIData(oldp+163,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[1]),32);
    bufp->fullIData(oldp+164,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[2]),32);
    bufp->fullIData(oldp+165,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[3]),32);
    bufp->fullIData(oldp+166,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[4]),32);
    bufp->fullIData(oldp+167,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[5]),32);
    bufp->fullIData(oldp+168,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[6]),32);
    bufp->fullIData(oldp+169,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[7]),32);
    bufp->fullIData(oldp+170,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[8]),32);
    bufp->fullIData(oldp+171,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[9]),32);
    bufp->fullIData(oldp+172,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[10]),32);
    bufp->fullIData(oldp+173,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out),32);
    bufp->fullBit(oldp+174,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit));
    bufp->fullCData(oldp+175,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key),4);
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
    __Vtemp_h39041830__0[2U] = (0xe0U | (0x100U & (
                                                   (~ 
                                                    (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data 
                                                     >> 0x1fU)) 
                                                   << 8U)));
    __Vtemp_h39041830__0[3U] = (0xd00U | (0x1000U & 
                                          (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data 
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
    bufp->fullWData(oldp+176,(__Vtemp_h39041830__0),216);
    bufp->fullQData(oldp+183,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[0]),36);
    bufp->fullQData(oldp+185,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[1]),36);
    bufp->fullQData(oldp+187,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[2]),36);
    bufp->fullQData(oldp+189,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[3]),36);
    bufp->fullQData(oldp+191,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[4]),36);
    bufp->fullQData(oldp+193,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[5]),36);
    bufp->fullIData(oldp+195,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[0]),32);
    bufp->fullIData(oldp+196,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[1]),32);
    bufp->fullIData(oldp+197,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[2]),32);
    bufp->fullIData(oldp+198,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[3]),32);
    bufp->fullIData(oldp+199,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[4]),32);
    bufp->fullIData(oldp+200,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[5]),32);
    bufp->fullIData(oldp+201,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out),32);
    bufp->fullBit(oldp+202,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit));
    bufp->fullQData(oldp+203,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out),64);
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
    bufp->fullWData(oldp+205,(__Vtemp_hd9d822d0__0),264);
    bufp->fullWData(oldp+214,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+217,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+220,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[2]),66);
    bufp->fullWData(oldp+223,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[3]),66);
    bufp->fullQData(oldp+226,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[0]),64);
    bufp->fullQData(oldp+228,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[1]),64);
    bufp->fullQData(oldp+230,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[2]),64);
    bufp->fullQData(oldp+232,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[3]),64);
    bufp->fullQData(oldp+234,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out),64);
    bufp->fullBit(oldp+236,(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit));
    bufp->fullCData(oldp+237,((0x7fU & vlSelf->riscv32__DOT__riscv_ifu_u0__DOT__rdata)),7);
    bufp->fullCData(oldp+238,((vlSelf->riscv32__DOT__riscv_ifu_u0__DOT__rdata 
                               >> 0x19U)),7);
    bufp->fullIData(oldp+239,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI),32);
    bufp->fullIData(oldp+240,((0xfffff000U & vlSelf->riscv32__DOT__riscv_ifu_u0__DOT__rdata)),32);
    bufp->fullIData(oldp+241,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeS),32);
    bufp->fullIData(oldp+242,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeB),32);
    bufp->fullIData(oldp+243,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeJ),32);
    bufp->fullSData(oldp+244,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____Vcellinp__riscv_id_imm_ext_typeB__imm_in),13);
    bufp->fullSData(oldp+245,((vlSelf->riscv32__DOT__riscv_ifu_u0__DOT__rdata 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+246,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____Vcellinp__riscv_id_imm_ext_typeJ__imm_in),21);
    bufp->fullSData(oldp+247,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____Vcellinp__riscv_id_imm_ext_typeS__imm_in),12);
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
    bufp->fullWData(oldp+248,(__Vtemp_hb7d0ae78__0),429);
    bufp->fullQData(oldp+262,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+264,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+266,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+268,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+270,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+272,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+274,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[6]),39);
    bufp->fullQData(oldp+276,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[7]),39);
    bufp->fullQData(oldp+278,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[8]),39);
    bufp->fullQData(oldp+280,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[9]),39);
    bufp->fullQData(oldp+282,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[10]),39);
    bufp->fullIData(oldp+284,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[0]),32);
    bufp->fullIData(oldp+285,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[1]),32);
    bufp->fullIData(oldp+286,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[2]),32);
    bufp->fullIData(oldp+287,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[3]),32);
    bufp->fullIData(oldp+288,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[4]),32);
    bufp->fullIData(oldp+289,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[5]),32);
    bufp->fullIData(oldp+290,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[6]),32);
    bufp->fullIData(oldp+291,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[7]),32);
    bufp->fullIData(oldp+292,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[8]),32);
    bufp->fullIData(oldp+293,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[9]),32);
    bufp->fullIData(oldp+294,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[10]),32);
    bufp->fullIData(oldp+295,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out),32);
    bufp->fullBit(oldp+296,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit));
    bufp->fullIData(oldp+297,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT____Vcellinp__riscv_mux_id_alu_opt__key),17);
    bufp->fullCData(oldp+298,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_alu_opt__DOT__i1__DOT__lut_out),4);
    bufp->fullBit(oldp+299,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_alu_opt__DOT__i1__DOT__hit));
    bufp->fullCData(oldp+300,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__lut_out),2);
    bufp->fullBit(oldp+301,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__hit));
    bufp->fullCData(oldp+302,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out),2);
    bufp->fullBit(oldp+303,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit));
    bufp->fullSData(oldp+304,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out),16);
    bufp->fullWData(oldp+305,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellinp__riscv_mux_id_reg__lut),253);
    bufp->fullIData(oldp+313,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[0]),23);
    bufp->fullIData(oldp+314,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[1]),23);
    bufp->fullIData(oldp+315,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[2]),23);
    bufp->fullIData(oldp+316,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[3]),23);
    bufp->fullIData(oldp+317,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[4]),23);
    bufp->fullIData(oldp+318,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[5]),23);
    bufp->fullIData(oldp+319,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[6]),23);
    bufp->fullIData(oldp+320,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[7]),23);
    bufp->fullIData(oldp+321,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[8]),23);
    bufp->fullIData(oldp+322,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[9]),23);
    bufp->fullIData(oldp+323,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[10]),23);
    bufp->fullSData(oldp+324,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[0]),16);
    bufp->fullSData(oldp+325,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[1]),16);
    bufp->fullSData(oldp+326,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[2]),16);
    bufp->fullSData(oldp+327,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[3]),16);
    bufp->fullSData(oldp+328,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[4]),16);
    bufp->fullSData(oldp+329,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[5]),16);
    bufp->fullSData(oldp+330,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[6]),16);
    bufp->fullSData(oldp+331,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[7]),16);
    bufp->fullSData(oldp+332,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[8]),16);
    bufp->fullSData(oldp+333,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[9]),16);
    bufp->fullSData(oldp+334,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[10]),16);
    bufp->fullSData(oldp+335,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out),16);
    bufp->fullBit(oldp+336,(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit));
    bufp->fullBit(oldp+337,((0U != (IData)(vlSelf->riscv32__DOT__idu_lsu_opt))));
    bufp->fullIData(oldp+338,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata),32);
    bufp->fullIData(oldp+339,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__mask),32);
    __Vtemp_h8c6da091__0[0U] = vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__mask;
    __Vtemp_h8c6da091__0[1U] = (IData)((((QData)((IData)(vlSelf->riscv32__DOT__exu_result)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->riscv32__DOT__src2))));
    __Vtemp_h8c6da091__0[2U] = (IData)(((((QData)((IData)(vlSelf->riscv32__DOT__exu_result)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->riscv32__DOT__src2))) 
                                        >> 0x20U));
    bufp->fullWData(oldp+340,(__Vtemp_h8c6da091__0),96);
    bufp->fullCData(oldp+343,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key),5);
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
    bufp->fullWData(oldp+344,(__Vtemp_h82212276__0),185);
    bufp->fullQData(oldp+350,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[0]),37);
    bufp->fullQData(oldp+352,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[1]),37);
    bufp->fullQData(oldp+354,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[2]),37);
    bufp->fullQData(oldp+356,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[3]),37);
    bufp->fullQData(oldp+358,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[4]),37);
    bufp->fullIData(oldp+360,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[0]),32);
    bufp->fullIData(oldp+361,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[1]),32);
    bufp->fullIData(oldp+362,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[2]),32);
    bufp->fullIData(oldp+363,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[3]),32);
    bufp->fullIData(oldp+364,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[4]),32);
    bufp->fullIData(oldp+365,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out),32);
    bufp->fullBit(oldp+366,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit));
    bufp->fullIData(oldp+367,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__lut_out),32);
    bufp->fullBit(oldp+368,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__hit));
    bufp->fullIData(oldp+369,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[0]),32);
    bufp->fullIData(oldp+370,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[1]),32);
    bufp->fullIData(oldp+371,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[2]),32);
    bufp->fullIData(oldp+372,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[3]),32);
    bufp->fullIData(oldp+373,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[4]),32);
    bufp->fullIData(oldp+374,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[5]),32);
    bufp->fullIData(oldp+375,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[6]),32);
    bufp->fullIData(oldp+376,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[7]),32);
    bufp->fullIData(oldp+377,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[8]),32);
    bufp->fullIData(oldp+378,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[9]),32);
    bufp->fullIData(oldp+379,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[10]),32);
    bufp->fullIData(oldp+380,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[11]),32);
    bufp->fullIData(oldp+381,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[12]),32);
    bufp->fullIData(oldp+382,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[13]),32);
    bufp->fullIData(oldp+383,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[14]),32);
    bufp->fullIData(oldp+384,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[15]),32);
    bufp->fullIData(oldp+385,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[16]),32);
    bufp->fullIData(oldp+386,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[17]),32);
    bufp->fullIData(oldp+387,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[18]),32);
    bufp->fullIData(oldp+388,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[19]),32);
    bufp->fullIData(oldp+389,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[20]),32);
    bufp->fullIData(oldp+390,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[21]),32);
    bufp->fullIData(oldp+391,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[22]),32);
    bufp->fullIData(oldp+392,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[23]),32);
    bufp->fullIData(oldp+393,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[24]),32);
    bufp->fullIData(oldp+394,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[25]),32);
    bufp->fullIData(oldp+395,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[26]),32);
    bufp->fullIData(oldp+396,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[27]),32);
    bufp->fullIData(oldp+397,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[28]),32);
    bufp->fullIData(oldp+398,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[29]),32);
    bufp->fullIData(oldp+399,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[30]),32);
    bufp->fullIData(oldp+400,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[31]),32);
    bufp->fullIData(oldp+401,(vlSelf->riscv32__DOT__ifu_pc),32);
    bufp->fullIData(oldp+402,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellout__riscv_dff_pc__dout[2U]),32);
    bufp->fullIData(oldp+403,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellout__riscv_dff_pc__dout[1U]),32);
    bufp->fullIData(oldp+404,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellout__riscv_dff_pc__dout[0U]),32);
    bufp->fullWData(oldp+405,(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellout__riscv_dff_pc__dout),96);
    bufp->fullIData(oldp+408,(vlSelf->riscv32__DOT__riscv_regfile_u0__DOT____Vcellout__riscv_dff_pc__dout),32);
    bufp->fullBit(oldp+409,(vlSelf->clk));
    bufp->fullBit(oldp+410,(vlSelf->rst_n));
    bufp->fullBit(oldp+411,((1U & (~ (IData)(vlSelf->rst_n)))));
    bufp->fullIData(oldp+412,(0x20U),32);
    bufp->fullIData(oldp+413,(0x80000000U),32);
    bufp->fullBit(oldp+414,(1U));
    bufp->fullIData(oldp+415,(0xbU),32);
    bufp->fullIData(oldp+416,(4U),32);
    bufp->fullIData(oldp+417,(0U),32);
    bufp->fullIData(oldp+418,(1U),32);
    bufp->fullIData(oldp+419,(0x24U),32);
    bufp->fullIData(oldp+420,(0xbU),32);
    bufp->fullIData(oldp+421,(6U),32);
    bufp->fullIData(oldp+422,(6U),32);
    bufp->fullIData(oldp+423,(2U),32);
    bufp->fullIData(oldp+424,(0x40U),32);
    bufp->fullQData(oldp+425,(0ULL),64);
    bufp->fullIData(oldp+427,(0x42U),32);
    bufp->fullIData(oldp+428,(4U),32);
    bufp->fullCData(oldp+429,(0U),5);
    bufp->fullIData(oldp+430,(0U),32);
    bufp->fullIData(oldp+431,(0xdU),32);
    bufp->fullIData(oldp+432,(0xcU),32);
    bufp->fullIData(oldp+433,(0x15U),32);
    bufp->fullIData(oldp+434,(7U),32);
    bufp->fullIData(oldp+435,(0x27U),32);
    bufp->fullIData(oldp+436,(0x21U),32);
    bufp->fullIData(oldp+437,(0x11U),32);
    bufp->fullCData(oldp+438,(1U),4);
    bufp->fullWData(oldp+439,(Vriscv32__ConstPool__CONST_he6306ab7_0),693);
    bufp->fullIData(oldp+461,(0x21U),32);
    bufp->fullCData(oldp+462,(0U),2);
    bufp->fullIData(oldp+463,(0x33b8eU),18);
    bufp->fullIData(oldp+464,(9U),32);
    bufp->fullIData(oldp+465,(2U),32);
    bufp->fullCData(oldp+466,(1U),2);
    __Vtemp_h9be1f35c__0[0U] = 0x6a307bcdU;
    __Vtemp_h9be1f35c__0[1U] = 0x6f33b8d0U;
    __Vtemp_h9be1f35c__0[2U] = 0x35be5e67U;
    __Vtemp_h9be1f35c__0[3U] = 1U;
    bufp->fullWData(oldp+467,(__Vtemp_h9be1f35c__0),99);
    bufp->fullIData(oldp+471,(0x10U),32);
    bufp->fullSData(oldp+472,(0U),16);
    bufp->fullIData(oldp+473,(0x17U),32);
    bufp->fullIData(oldp+474,(0x60U),32);
    bufp->fullIData(oldp+475,(5U),32);
    bufp->fullIData(oldp+476,(0x25U),32);
    bufp->fullIData(oldp+477,(5U),32);
    bufp->fullIData(oldp+478,(3U),32);
    __Vtemp_h559e3450__0[0U] = 0xffffffffU;
    __Vtemp_h559e3450__0[1U] = 0x1ffff2U;
    __Vtemp_h559e3450__0[2U] = 0x3fe20U;
    __Vtemp_h559e3450__0[3U] = 0x4000U;
    bufp->fullWData(oldp+479,(__Vtemp_h559e3450__0),111);
    bufp->fullIData(oldp+483,(3U),32);
}
