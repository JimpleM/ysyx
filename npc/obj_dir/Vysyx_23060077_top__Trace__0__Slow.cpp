// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_23060077_top__Syms.h"


VL_ATTR_COLD void Vysyx_23060077_top___024root__trace_init_sub__TOP__0(Vysyx_23060077_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+397,"clk", false,-1);
    tracep->declBit(c+398,"rst_n", false,-1);
    tracep->pushNamePrefix("ysyx_23060077_top ");
    tracep->declBit(c+397,"clk", false,-1);
    tracep->declBit(c+398,"rst_n", false,-1);
    tracep->declBus(c+93,"ifu_pc_lst", false,-1, 31,0);
    tracep->declBus(c+94,"ifu_pc", false,-1, 31,0);
    tracep->declBus(c+95,"ifu_inst", false,-1, 31,0);
    tracep->declBus(c+96,"ifu_inst_t", false,-1, 31,0);
    tracep->declBit(c+97,"ifu_stall", false,-1);
    tracep->declBus(c+98,"jump_pc", false,-1, 31,0);
    tracep->declBit(c+99,"jump_pc_valid", false,-1);
    tracep->declBit(c+100,"stall", false,-1);
    tracep->declBit(c+101,"idu_branch", false,-1);
    tracep->declBit(c+102,"idu_jal", false,-1);
    tracep->declBit(c+103,"idu_jalr", false,-1);
    tracep->declBus(c+104,"idu_rd", false,-1, 4,0);
    tracep->declBit(c+105,"idu_rd_wen", false,-1);
    tracep->declBus(c+106,"idu_rs1", false,-1, 4,0);
    tracep->declBus(c+107,"idu_rs2", false,-1, 4,0);
    tracep->declBus(c+108,"idu_imm", false,-1, 31,0);
    tracep->declBus(c+109,"idu_alu_opt", false,-1, 3,0);
    tracep->declBus(c+110,"idu_src_sel", false,-1, 1,0);
    tracep->declBus(c+111,"idu_lsu_opt", false,-1, 1,0);
    tracep->declBus(c+112,"idu_funct3", false,-1, 2,0);
    tracep->declBus(c+113,"src1", false,-1, 31,0);
    tracep->declBus(c+114,"src2", false,-1, 31,0);
    tracep->declBus(c+399,"rd_data", false,-1, 31,0);
    tracep->declBit(c+115,"zero_flag", false,-1);
    tracep->declBus(c+116,"exu_result", false,-1, 31,0);
    tracep->declBus(c+117,"lsu_result", false,-1, 31,0);
    tracep->declBit(c+118,"mem_stall", false,-1);
    tracep->declBit(c+119,"csr_ecall", false,-1);
    tracep->declBit(c+120,"csr_mret", false,-1);
    tracep->declBus(c+121,"wr_csr_data", false,-1, 31,0);
    tracep->declBus(c+400,"rd_csr_data", false,-1, 31,0);
    tracep->declBus(c+122,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+123,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+124,"csr_mpec", false,-1, 31,0);
    tracep->declBus(c+125,"commit_pc_t", false,-1, 31,0);
    tracep->declBit(c+126,"commit_valid_t", false,-1);
    tracep->declBit(c+127,"commit_valid", false,-1);
    tracep->declBus(c+128,"commit_pc", false,-1, 31,0);
    tracep->pushNamePrefix("riscv_csr_u0 ");
    tracep->declBit(c+397,"clk", false,-1);
    tracep->declBit(c+398,"rst_n", false,-1);
    tracep->declBus(c+129,"wr_addr", false,-1, 11,0);
    tracep->declBus(c+121,"wr_data", false,-1, 31,0);
    tracep->declBus(c+129,"rd_addr", false,-1, 11,0);
    tracep->declBus(c+400,"rd_data", false,-1, 31,0);
    tracep->declBit(c+119,"i_csr_ecall", false,-1);
    tracep->declBit(c+120,"i_csr_mret", false,-1);
    tracep->declBus(c+95,"i_inst", false,-1, 31,0);
    tracep->declBus(c+94,"i_pc", false,-1, 31,0);
    tracep->declBus(c+122,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+123,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+124,"o_mpec", false,-1, 31,0);
    tracep->declBus(c+400,"rd_data_r", false,-1, 31,0);
    tracep->declBit(c+130,"wr_en", false,-1);
    tracep->declBit(c+130,"rd_en", false,-1);
    tracep->declBus(c+131,"wr_data_r", false,-1, 31,0);
    tracep->declBus(c+132,"temp", false,-1, 31,0);
    tracep->declBus(c+122,"o_mstatus_r", false,-1, 31,0);
    tracep->declBus(c+133,"mepc_inst_r", false,-1, 31,0);
    tracep->declBus(c+134,"mcause", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("riscv_exu_u0 ");
    tracep->declBus(c+94,"pc", false,-1, 31,0);
    tracep->declBus(c+113,"src1", false,-1, 31,0);
    tracep->declBus(c+114,"src2", false,-1, 31,0);
    tracep->declBus(c+108,"imm", false,-1, 31,0);
    tracep->declBit(c+101,"branch", false,-1);
    tracep->declBus(c+109,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+110,"src_sel", false,-1, 1,0);
    tracep->declBus(c+112,"funct3", false,-1, 2,0);
    tracep->declBit(c+115,"zero_flag", false,-1);
    tracep->declBus(c+116,"exu_result", false,-1, 31,0);
    tracep->declBus(c+135,"alu_a_data", false,-1, 31,0);
    tracep->declBus(c+136,"alu_b_data", false,-1, 31,0);
    tracep->declBus(c+137,"alu_out_data", false,-1, 31,0);
    tracep->declBit(c+401,"carry_flag", false,-1);
    tracep->declBit(c+402,"signed_flag", false,-1);
    tracep->pushNamePrefix("riscv_ex_alu ");
    tracep->declBus(c+109,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+135,"alu_a_data", false,-1, 31,0);
    tracep->declBus(c+136,"alu_b_data", false,-1, 31,0);
    tracep->declBus(c+137,"alu_out_data", false,-1, 31,0);
    tracep->declBit(c+138,"sub_flag", false,-1);
    tracep->declQuad(c+139,"alu_a_t", false,-1, 32,0);
    tracep->declQuad(c+141,"alu_b_t", false,-1, 32,0);
    tracep->declQuad(c+143,"cin", false,-1, 32,0);
    tracep->declQuad(c+145,"add_out", false,-1, 32,0);
    tracep->declBit(c+147,"top_A", false,-1);
    tracep->declBit(c+148,"top_B", false,-1);
    tracep->declBit(c+149,"top_C", false,-1);
    tracep->declBit(c+150,"sign_flag", false,-1);
    tracep->declBit(c+151,"over_flag", false,-1);
    tracep->declBit(c+152,"carry_flag", false,-1);
    tracep->declBus(c+153,"sra_result", false,-1, 31,0);
    tracep->pushNamePrefix("riscv_mux_ex_data ");
    tracep->declBus(c+403,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+404,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+405,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+137,"out", false,-1, 31,0);
    tracep->declBus(c+109,"key", false,-1, 3,0);
    tracep->declBus(c+406,"default_out", false,-1, 31,0);
    tracep->declArray(c+154,"lut", false,-1, 395,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+403,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+404,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+405,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+407,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+137,"out", false,-1, 31,0);
    tracep->declBus(c+109,"key", false,-1, 3,0);
    tracep->declBus(c+406,"default_out", false,-1, 31,0);
    tracep->declArray(c+154,"lut", false,-1, 395,0);
    tracep->declBus(c+408,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+167+i*2,"pair_list", true,(i+0), 35,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+189+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+200,"lut_out", false,-1, 31,0);
    tracep->declBit(c+201,"hit", false,-1);
    tracep->declBus(c+409,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("riscv_mux_ex_branch ");
    tracep->declBus(c+410,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+404,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+405,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+116,"out", false,-1, 31,0);
    tracep->declBus(c+202,"key", false,-1, 3,0);
    tracep->declBus(c+137,"default_out", false,-1, 31,0);
    tracep->declArray(c+203,"lut", false,-1, 215,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+410,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+404,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+405,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+407,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+116,"out", false,-1, 31,0);
    tracep->declBus(c+202,"key", false,-1, 3,0);
    tracep->declBus(c+137,"default_out", false,-1, 31,0);
    tracep->declArray(c+203,"lut", false,-1, 215,0);
    tracep->declBus(c+408,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+210+i*2,"pair_list", true,(i+0), 35,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+12+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+222+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+228,"lut_out", false,-1, 31,0);
    tracep->declBit(c+229,"hit", false,-1);
    tracep->declBus(c+411,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("riscv_mux_ex_src_sel ");
    tracep->declBus(c+404,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+230,"out", false,-1, 63,0);
    tracep->declBus(c+110,"key", false,-1, 1,0);
    tracep->declQuad(c+414,"default_out", false,-1, 63,0);
    tracep->declArray(c+232,"lut", false,-1, 263,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+404,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+412,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+407,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+230,"out", false,-1, 63,0);
    tracep->declBus(c+110,"key", false,-1, 1,0);
    tracep->declQuad(c+414,"default_out", false,-1, 63,0);
    tracep->declArray(c+232,"lut", false,-1, 263,0);
    tracep->declBus(c+416,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+241+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+18+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+253+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+261,"lut_out", false,-1, 63,0);
    tracep->declBit(c+263,"hit", false,-1);
    tracep->declBus(c+417,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("riscv_idu_u0 ");
    tracep->declBus(c+95,"inst", false,-1, 31,0);
    tracep->declBit(c+101,"branch", false,-1);
    tracep->declBit(c+102,"jal", false,-1);
    tracep->declBit(c+103,"jalr", false,-1);
    tracep->declBus(c+104,"rd", false,-1, 4,0);
    tracep->declBit(c+105,"rd_wen", false,-1);
    tracep->declBus(c+106,"rs1", false,-1, 4,0);
    tracep->declBus(c+107,"rs2", false,-1, 4,0);
    tracep->declBus(c+108,"imm", false,-1, 31,0);
    tracep->declBus(c+109,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+110,"src_sel", false,-1, 1,0);
    tracep->declBus(c+111,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+112,"funct3", false,-1, 2,0);
    tracep->declBus(c+264,"opcode", false,-1, 6,0);
    tracep->declBus(c+265,"funct7", false,-1, 6,0);
    tracep->declBus(c+418,"reg_zero", false,-1, 4,0);
    tracep->pushNamePrefix("riscv_id_imm_idu ");
    tracep->declBus(c+95,"inst", false,-1, 31,0);
    tracep->declBus(c+108,"imm", false,-1, 31,0);
    tracep->declBus(c+108,"imm_r", false,-1, 31,0);
    tracep->declBus(c+266,"imm_typeI", false,-1, 31,0);
    tracep->declBus(c+267,"imm_typeU", false,-1, 31,0);
    tracep->declBus(c+268,"imm_typeS", false,-1, 31,0);
    tracep->declBus(c+269,"imm_typeB", false,-1, 31,0);
    tracep->declBus(c+270,"imm_typeJ", false,-1, 31,0);
    tracep->declBus(c+419,"imm_typeR", false,-1, 31,0);
    tracep->declBus(c+419,"imm_type_NONE", false,-1, 31,0);
    tracep->pushNamePrefix("riscv_id_imm_ext_typeB ");
    tracep->declBus(c+420,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+271,"imm_in", false,-1, 12,0);
    tracep->declBus(c+269,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("riscv_id_imm_ext_typeI ");
    tracep->declBus(c+421,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+272,"imm_in", false,-1, 11,0);
    tracep->declBus(c+266,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("riscv_id_imm_ext_typeJ ");
    tracep->declBus(c+422,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+273,"imm_in", false,-1, 20,0);
    tracep->declBus(c+270,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("riscv_id_imm_ext_typeS ");
    tracep->declBus(c+421,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+274,"imm_in", false,-1, 11,0);
    tracep->declBus(c+268,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("riscv_id_imm_ext_typeU ");
    tracep->declBus(c+405,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+267,"imm_in", false,-1, 31,0);
    tracep->declBus(c+267,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("riscv_id_opt_idu ");
    tracep->declBus(c+264,"opcode", false,-1, 6,0);
    tracep->declBus(c+112,"funct3", false,-1, 2,0);
    tracep->declBus(c+265,"funct7", false,-1, 6,0);
    tracep->declBus(c+109,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+110,"src_sel", false,-1, 1,0);
    tracep->declBus(c+111,"lsu_opt", false,-1, 1,0);
    tracep->pushNamePrefix("riscv_mux_id_src_sel ");
    tracep->declBus(c+403,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+423,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+412,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+110,"out", false,-1, 1,0);
    tracep->declBus(c+264,"key", false,-1, 6,0);
    tracep->declBus(c+424,"default_out", false,-1, 1,0);
    tracep->declArray(c+425,"lut", false,-1, 98,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+403,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+423,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+412,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+407,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+110,"out", false,-1, 1,0);
    tracep->declBus(c+264,"key", false,-1, 6,0);
    tracep->declBus(c+424,"default_out", false,-1, 1,0);
    tracep->declArray(c+425,"lut", false,-1, 98,0);
    tracep->declBus(c+429,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+22+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+33+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+44+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+275,"lut_out", false,-1, 1,0);
    tracep->declBit(c+276,"hit", false,-1);
    tracep->declBus(c+409,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ysyx_23060077_riscv_mux_id_lsu_opt ");
    tracep->declBus(c+430,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+423,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+412,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+111,"out", false,-1, 1,0);
    tracep->declBus(c+264,"key", false,-1, 6,0);
    tracep->declBus(c+431,"default_out", false,-1, 1,0);
    tracep->declBus(c+432,"lut", false,-1, 26,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+430,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+423,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+412,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+407,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+111,"out", false,-1, 1,0);
    tracep->declBus(c+264,"key", false,-1, 6,0);
    tracep->declBus(c+431,"default_out", false,-1, 1,0);
    tracep->declBus(c+432,"lut", false,-1, 26,0);
    tracep->declBus(c+429,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+55+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+58+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+61+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+277,"lut_out", false,-1, 1,0);
    tracep->declBit(c+278,"hit", false,-1);
    tracep->declBus(c+433,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("riscv_mux_id_reg ");
    tracep->declBus(c+403,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+423,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+434,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+279,"out", false,-1, 15,0);
    tracep->declBus(c+264,"key", false,-1, 6,0);
    tracep->declBus(c+435,"default_out", false,-1, 15,0);
    tracep->declArray(c+280,"lut", false,-1, 252,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+403,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+423,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+434,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+407,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+279,"out", false,-1, 15,0);
    tracep->declBus(c+264,"key", false,-1, 6,0);
    tracep->declBus(c+435,"default_out", false,-1, 15,0);
    tracep->declArray(c+280,"lut", false,-1, 252,0);
    tracep->declBus(c+436,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+288+i*1,"pair_list", true,(i+0), 22,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+64+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+299+i*1,"data_list", true,(i+0), 15,0);
    }
    tracep->declBus(c+310,"lut_out", false,-1, 15,0);
    tracep->declBit(c+311,"hit", false,-1);
    tracep->declBus(c+409,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("riscv_ifu_u0 ");
    tracep->declBit(c+397,"clk", false,-1);
    tracep->declBit(c+398,"rst_n", false,-1);
    tracep->declBus(c+98,"jump_pc", false,-1, 31,0);
    tracep->declBit(c+99,"jump_pc_valid", false,-1);
    tracep->declBit(c+100,"stall", false,-1);
    tracep->declBit(c+97,"ifu_stall", false,-1);
    tracep->declBus(c+94,"ifu_pc_o", false,-1, 31,0);
    tracep->declBus(c+96,"ifu_inst_o", false,-1, 31,0);
    tracep->declBus(c+94,"ifu_pc_o_r", false,-1, 31,0);
    tracep->declBus(c+96,"ifu_inst_o_r", false,-1, 31,0);
    tracep->declBus(c+312,"pc", false,-1, 31,0);
    tracep->declBus(c+313,"inst", false,-1, 31,0);
    tracep->declBit(c+97,"cpu_r_valid_i", false,-1);
    tracep->declBit(c+314,"cpu_r_ready_o", false,-1);
    tracep->pushNamePrefix("u_ysyx_23060077_riscv_axi_lite ");
    tracep->declBit(c+397,"aclk", false,-1);
    tracep->declBit(c+398,"areset_n", false,-1);
    tracep->declBit(c+97,"cpu_r_valid_i", false,-1);
    tracep->declBus(c+312,"cpu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+314,"cpu_r_ready_o", false,-1);
    tracep->declBus(c+313,"cpu_r_data_o", false,-1, 31,0);
    tracep->declBit(c+437,"cpu_w_valid_i", false,-1);
    tracep->declBus(c+438,"cpu_w_addr_i", false,-1, 31,0);
    tracep->declBit(c+315,"cpu_w_ready_o", false,-1);
    tracep->declBus(c+439,"cpu_w_data_i", false,-1, 31,0);
    tracep->declBus(c+440,"cpu_w_strb_i", false,-1, 2,0);
    tracep->declBit(c+316,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+317,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+441,"axi_aw_port_o", false,-1, 2,0);
    tracep->declBus(c+438,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBit(c+318,"axi_w_ready_i", false,-1);
    tracep->declBit(c+319,"axi_w_valid_o", false,-1);
    tracep->declBus(c+440,"axi_w_strb_o", false,-1, 2,0);
    tracep->declBus(c+439,"axi_w_data_o", false,-1, 31,0);
    tracep->declBus(c+442,"axi_b_resp_i", false,-1, 2,0);
    tracep->declBit(c+315,"axi_b_valid_i", false,-1);
    tracep->declBit(c+320,"axi_b_ready_o", false,-1);
    tracep->declBit(c+321,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+322,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+441,"axi_ar_port_o", false,-1, 2,0);
    tracep->declBus(c+312,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBit(c+323,"axi_r_ready_o", false,-1);
    tracep->declBit(c+314,"axi_r_valid_i", false,-1);
    tracep->declBus(c+443,"axi_r_resp_i", false,-1, 2,0);
    tracep->declBus(c+313,"axi_r_data_i", false,-1, 31,0);
    tracep->pushNamePrefix("u_ysyx_23060077_riscv_axi ");
    tracep->declBit(c+397,"aclk", false,-1);
    tracep->declBit(c+398,"areset_n", false,-1);
    tracep->declBit(c+97,"cpu_r_valid_i", false,-1);
    tracep->declBus(c+312,"cpu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+314,"cpu_r_ready_o", false,-1);
    tracep->declBus(c+313,"cpu_r_data_o", false,-1, 31,0);
    tracep->declBit(c+437,"cpu_w_valid_i", false,-1);
    tracep->declBus(c+438,"cpu_w_addr_i", false,-1, 31,0);
    tracep->declBit(c+315,"cpu_w_ready_o", false,-1);
    tracep->declBus(c+439,"cpu_w_data_i", false,-1, 31,0);
    tracep->declBus(c+440,"cpu_w_strb_i", false,-1, 2,0);
    tracep->declBit(c+316,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+317,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+441,"axi_aw_port_o", false,-1, 2,0);
    tracep->declBus(c+438,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBit(c+318,"axi_w_ready_i", false,-1);
    tracep->declBit(c+319,"axi_w_valid_o", false,-1);
    tracep->declBus(c+440,"axi_w_strb_o", false,-1, 2,0);
    tracep->declBus(c+439,"axi_w_data_o", false,-1, 31,0);
    tracep->declBus(c+442,"axi_b_resp_i", false,-1, 2,0);
    tracep->declBit(c+315,"axi_b_valid_i", false,-1);
    tracep->declBit(c+320,"axi_b_ready_o", false,-1);
    tracep->declBit(c+321,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+322,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+441,"axi_ar_port_o", false,-1, 2,0);
    tracep->declBus(c+312,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBit(c+323,"axi_r_ready_o", false,-1);
    tracep->declBit(c+314,"axi_r_valid_i", false,-1);
    tracep->declBus(c+443,"axi_r_resp_i", false,-1, 2,0);
    tracep->declBus(c+313,"axi_r_data_i", false,-1, 31,0);
    tracep->declBus(c+324,"axi_w_state", false,-1, 2,0);
    tracep->declBus(c+441,"AXI_W_IDLE", false,-1, 2,0);
    tracep->declBus(c+444,"AXI_W_ADDR", false,-1, 2,0);
    tracep->declBus(c+445,"AXI_W_DATA", false,-1, 2,0);
    tracep->declBus(c+446,"AXI_W_RESP", false,-1, 2,0);
    tracep->declBus(c+325,"axi_r_state", false,-1, 1,0);
    tracep->declBus(c+431,"AXI_R_IDLE", false,-1, 1,0);
    tracep->declBus(c+424,"AXI_R_ADDR", false,-1, 1,0);
    tracep->declBus(c+447,"AXI_R_DATA", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_23060077_riscv_axi_sram ");
    tracep->declBit(c+397,"aclk", false,-1);
    tracep->declBit(c+398,"areset_n", false,-1);
    tracep->declBit(c+316,"axi_aw_ready_o", false,-1);
    tracep->declBit(c+317,"axi_aw_valid_i", false,-1);
    tracep->declBus(c+441,"axi_aw_port_i", false,-1, 2,0);
    tracep->declBus(c+438,"axi_aw_addr_i", false,-1, 31,0);
    tracep->declBit(c+318,"axi_w_ready_o", false,-1);
    tracep->declBit(c+319,"axi_w_valid_i", false,-1);
    tracep->declBus(c+440,"axi_w_strb_i", false,-1, 2,0);
    tracep->declBus(c+439,"axi_w_data_i", false,-1, 31,0);
    tracep->declBus(c+442,"axi_b_resp_o", false,-1, 2,0);
    tracep->declBit(c+315,"axi_b_valid_o", false,-1);
    tracep->declBit(c+320,"axi_b_ready_i", false,-1);
    tracep->declBit(c+321,"axi_ar_ready_o", false,-1);
    tracep->declBit(c+322,"axi_ar_valid_i", false,-1);
    tracep->declBus(c+441,"axi_ar_port_i", false,-1, 2,0);
    tracep->declBus(c+312,"axi_ar_addr_i", false,-1, 31,0);
    tracep->declBit(c+323,"axi_r_ready_i", false,-1);
    tracep->declBit(c+314,"axi_r_valid_o", false,-1);
    tracep->declBus(c+443,"axi_r_resp_o", false,-1, 2,0);
    tracep->declBus(c+313,"axi_r_data_o", false,-1, 31,0);
    tracep->declBus(c+326,"sram_w_state", false,-1, 2,0);
    tracep->declBus(c+441,"SRAM_W_IDLE", false,-1, 2,0);
    tracep->declBus(c+444,"SRAM_W_ADDR", false,-1, 2,0);
    tracep->declBus(c+445,"SRAM_W_DATA", false,-1, 2,0);
    tracep->declBus(c+446,"SRAM_W_RESP", false,-1, 2,0);
    tracep->declBus(c+327,"w_addr", false,-1, 31,0);
    tracep->declBus(c+328,"w_data", false,-1, 31,0);
    tracep->declBus(c+329,"w_mask", false,-1, 31,0);
    tracep->declBit(c+316,"axi_aw_ready_o_r", false,-1);
    tracep->declBit(c+318,"axi_w_ready_o_r", false,-1);
    tracep->declBit(c+315,"axi_b_valid_o_r", false,-1);
    tracep->declBus(c+330,"sram_r_state", false,-1, 1,0);
    tracep->declBus(c+431,"SRAM_R_IDLE", false,-1, 1,0);
    tracep->declBus(c+424,"SRAM_R_ADDR", false,-1, 1,0);
    tracep->declBus(c+447,"SRAM_R_DATA", false,-1, 1,0);
    tracep->declBus(c+331,"r_addr", false,-1, 31,0);
    tracep->declBus(c+332,"r_data", false,-1, 31,0);
    tracep->declBit(c+321,"axi_ar_ready_o_r", false,-1);
    tracep->declBit(c+314,"axi_r_valid_o_r", false,-1);
    tracep->declBus(c+313,"axi_r_data_o_r", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("riscv_lsu_u0 ");
    tracep->declBit(c+397,"clk", false,-1);
    tracep->declBit(c+398,"rst_n", false,-1);
    tracep->declBus(c+116,"exu_result", false,-1, 31,0);
    tracep->declBus(c+114,"src2", false,-1, 31,0);
    tracep->declBus(c+111,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+112,"funct3", false,-1, 2,0);
    tracep->declBit(c+118,"mem_stall", false,-1);
    tracep->declBus(c+117,"lsu_result", false,-1, 31,0);
    tracep->declBit(c+333,"ren", false,-1);
    tracep->declBit(c+334,"wen", false,-1);
    tracep->declBus(c+116,"raddr", false,-1, 31,0);
    tracep->declBus(c+335,"rdata", false,-1, 31,0);
    tracep->declBus(c+116,"waddr", false,-1, 31,0);
    tracep->declBus(c+114,"wdata", false,-1, 31,0);
    tracep->declBus(c+336,"wmask", false,-1, 31,0);
    tracep->declBus(c+336,"mask", false,-1, 31,0);
    tracep->declBus(c+337,"rdata_t", false,-1, 31,0);
    tracep->declBus(c+335,"rdata_r", false,-1, 31,0);
    tracep->declBit(c+338,"wen_t", false,-1);
    tracep->pushNamePrefix("riscv_mux_ls_lsu_opt ");
    tracep->declBus(c+448,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+448,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+405,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+117,"out", false,-1, 31,0);
    tracep->declBus(c+339,"key", false,-1, 4,0);
    tracep->declBus(c+406,"default_out", false,-1, 31,0);
    tracep->declArray(c+340,"lut", false,-1, 184,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+448,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+448,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+405,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+407,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+117,"out", false,-1, 31,0);
    tracep->declBus(c+339,"key", false,-1, 4,0);
    tracep->declBus(c+406,"default_out", false,-1, 31,0);
    tracep->declArray(c+340,"lut", false,-1, 184,0);
    tracep->declBus(c+449,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+346+i*2,"pair_list", true,(i+0), 36,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+75+i*1,"key_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+356+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+361,"lut_out", false,-1, 31,0);
    tracep->declBit(c+362,"hit", false,-1);
    tracep->declBus(c+450,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("riscv_mux_ls_wmask ");
    tracep->declBus(c+430,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+448,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+405,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+336,"out", false,-1, 31,0);
    tracep->declBus(c+339,"key", false,-1, 4,0);
    tracep->declBus(c+406,"default_out", false,-1, 31,0);
    tracep->declArray(c+451,"lut", false,-1, 110,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+430,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+448,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+405,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+407,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+336,"out", false,-1, 31,0);
    tracep->declBus(c+339,"key", false,-1, 4,0);
    tracep->declBus(c+406,"default_out", false,-1, 31,0);
    tracep->declArray(c+451,"lut", false,-1, 110,0);
    tracep->declBus(c+449,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+80+i*2,"pair_list", true,(i+0), 36,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+86+i*1,"key_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+89+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+363,"lut_out", false,-1, 31,0);
    tracep->declBit(c+364,"hit", false,-1);
    tracep->declBus(c+433,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("riscv_regfile_u0 ");
    tracep->declBit(c+397,"clk", false,-1);
    tracep->declBit(c+398,"rst_n", false,-1);
    tracep->declBus(c+106,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+113,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+107,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+114,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+105,"rd_en", false,-1);
    tracep->declBus(c+104,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+399,"rd_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+365+i*1,"gpr", true,(i+0), 31,0);
    }
    tracep->declBus(c+92,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("riscv_wbu_u0 ");
    tracep->declBus(c+111,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+116,"exu_result", false,-1, 31,0);
    tracep->declBus(c+117,"lsu_result", false,-1, 31,0);
    tracep->declBus(c+400,"csr_result", false,-1, 31,0);
    tracep->declBus(c+399,"wbu_result", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vysyx_23060077_top___024root__trace_init_top(Vysyx_23060077_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077_top___024root__trace_init_top\n"); );
    // Body
    Vysyx_23060077_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_23060077_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_23060077_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_23060077_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_23060077_top___024root__trace_register(Vysyx_23060077_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_23060077_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_23060077_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vysyx_23060077_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_23060077_top___024root__trace_full_sub_0(Vysyx_23060077_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_23060077_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077_top___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_23060077_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060077_top___024root*>(voidSelf);
    Vysyx_23060077_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_23060077_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_23060077_top___024root__trace_full_sub_0(Vysyx_23060077_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060077_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060077_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<13>/*415:0*/ __Vtemp_h087321c3__0;
    VlWide<7>/*223:0*/ __Vtemp_h86f1ea95__0;
    VlWide<9>/*287:0*/ __Vtemp_hf0a01500__0;
    VlWide<8>/*255:0*/ __Vtemp_hfeb391ef__0;
    VlWide<6>/*191:0*/ __Vtemp_hd085f0ef__0;
    VlWide<4>/*127:0*/ __Vtemp_h8c90ec6d__0;
    VlWide<4>/*127:0*/ __Vtemp_heb927861__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[0]),4);
    bufp->fullCData(oldp+2,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[1]),4);
    bufp->fullCData(oldp+3,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[2]),4);
    bufp->fullCData(oldp+4,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[3]),4);
    bufp->fullCData(oldp+5,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[4]),4);
    bufp->fullCData(oldp+6,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[5]),4);
    bufp->fullCData(oldp+7,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[6]),4);
    bufp->fullCData(oldp+8,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[7]),4);
    bufp->fullCData(oldp+9,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[8]),4);
    bufp->fullCData(oldp+10,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[9]),4);
    bufp->fullCData(oldp+11,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list[10]),4);
    bufp->fullCData(oldp+12,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[0]),4);
    bufp->fullCData(oldp+13,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[1]),4);
    bufp->fullCData(oldp+14,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[2]),4);
    bufp->fullCData(oldp+15,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[3]),4);
    bufp->fullCData(oldp+16,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[4]),4);
    bufp->fullCData(oldp+17,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list[5]),4);
    bufp->fullCData(oldp+18,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list[0]),2);
    bufp->fullCData(oldp+19,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list[1]),2);
    bufp->fullCData(oldp+20,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list[2]),2);
    bufp->fullCData(oldp+21,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list[3]),2);
    bufp->fullSData(oldp+22,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[0]),9);
    bufp->fullSData(oldp+23,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[1]),9);
    bufp->fullSData(oldp+24,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[2]),9);
    bufp->fullSData(oldp+25,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[3]),9);
    bufp->fullSData(oldp+26,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[4]),9);
    bufp->fullSData(oldp+27,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[5]),9);
    bufp->fullSData(oldp+28,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[6]),9);
    bufp->fullSData(oldp+29,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[7]),9);
    bufp->fullSData(oldp+30,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[8]),9);
    bufp->fullSData(oldp+31,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[9]),9);
    bufp->fullSData(oldp+32,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__pair_list[10]),9);
    bufp->fullCData(oldp+33,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[0]),7);
    bufp->fullCData(oldp+34,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[1]),7);
    bufp->fullCData(oldp+35,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[2]),7);
    bufp->fullCData(oldp+36,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[3]),7);
    bufp->fullCData(oldp+37,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[4]),7);
    bufp->fullCData(oldp+38,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[5]),7);
    bufp->fullCData(oldp+39,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[6]),7);
    bufp->fullCData(oldp+40,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[7]),7);
    bufp->fullCData(oldp+41,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[8]),7);
    bufp->fullCData(oldp+42,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[9]),7);
    bufp->fullCData(oldp+43,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list[10]),7);
    bufp->fullCData(oldp+44,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[0]),2);
    bufp->fullCData(oldp+45,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[1]),2);
    bufp->fullCData(oldp+46,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[2]),2);
    bufp->fullCData(oldp+47,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[3]),2);
    bufp->fullCData(oldp+48,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[4]),2);
    bufp->fullCData(oldp+49,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[5]),2);
    bufp->fullCData(oldp+50,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[6]),2);
    bufp->fullCData(oldp+51,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[7]),2);
    bufp->fullCData(oldp+52,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[8]),2);
    bufp->fullCData(oldp+53,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[9]),2);
    bufp->fullCData(oldp+54,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list[10]),2);
    bufp->fullSData(oldp+55,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__pair_list[0]),9);
    bufp->fullSData(oldp+56,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__pair_list[1]),9);
    bufp->fullSData(oldp+57,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__pair_list[2]),9);
    bufp->fullCData(oldp+58,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list[0]),7);
    bufp->fullCData(oldp+59,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list[1]),7);
    bufp->fullCData(oldp+60,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list[2]),7);
    bufp->fullCData(oldp+61,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__data_list[0]),2);
    bufp->fullCData(oldp+62,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__data_list[1]),2);
    bufp->fullCData(oldp+63,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__data_list[2]),2);
    bufp->fullCData(oldp+64,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[0]),7);
    bufp->fullCData(oldp+65,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[1]),7);
    bufp->fullCData(oldp+66,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[2]),7);
    bufp->fullCData(oldp+67,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[3]),7);
    bufp->fullCData(oldp+68,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[4]),7);
    bufp->fullCData(oldp+69,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[5]),7);
    bufp->fullCData(oldp+70,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[6]),7);
    bufp->fullCData(oldp+71,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[7]),7);
    bufp->fullCData(oldp+72,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[8]),7);
    bufp->fullCData(oldp+73,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[9]),7);
    bufp->fullCData(oldp+74,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list[10]),7);
    bufp->fullCData(oldp+75,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list[0]),5);
    bufp->fullCData(oldp+76,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list[1]),5);
    bufp->fullCData(oldp+77,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list[2]),5);
    bufp->fullCData(oldp+78,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list[3]),5);
    bufp->fullCData(oldp+79,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list[4]),5);
    bufp->fullQData(oldp+80,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__pair_list[0]),37);
    bufp->fullQData(oldp+82,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__pair_list[1]),37);
    bufp->fullQData(oldp+84,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__pair_list[2]),37);
    bufp->fullCData(oldp+86,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list[0]),5);
    bufp->fullCData(oldp+87,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list[1]),5);
    bufp->fullCData(oldp+88,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list[2]),5);
    bufp->fullIData(oldp+89,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__data_list[0]),32);
    bufp->fullIData(oldp+90,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__data_list[1]),32);
    bufp->fullIData(oldp+91,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__data_list[2]),32);
    bufp->fullIData(oldp+92,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__i),32);
    bufp->fullIData(oldp+93,(vlSelf->ysyx_23060077_top__DOT__ifu_pc_lst),32);
    bufp->fullIData(oldp+94,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r),32);
    bufp->fullIData(oldp+95,(vlSelf->ysyx_23060077_top__DOT__ifu_inst),32);
    bufp->fullIData(oldp+96,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r),32);
    bufp->fullBit(oldp+97,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i));
    bufp->fullIData(oldp+98,(((IData)(vlSelf->ysyx_23060077_top__DOT__csr_mret)
                               ? vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                              [0x341U] : ((IData)(vlSelf->ysyx_23060077_top__DOT__csr_ecall)
                                           ? vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                                          [0x305U] : 
                                          ((IData)(vlSelf->ysyx_23060077_top__DOT____VdfgTmp_h15124160__0)
                                            ? (vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r 
                                               + vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r)
                                            : ((0x67U 
                                                == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode))
                                                ? (vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r 
                                                   + vlSelf->ysyx_23060077_top__DOT__src1)
                                                : 0U))))),32);
    bufp->fullBit(oldp+99,(((IData)(vlSelf->ysyx_23060077_top__DOT__csr_mret) 
                            | ((IData)(vlSelf->ysyx_23060077_top__DOT__csr_ecall) 
                               | ((IData)(vlSelf->ysyx_23060077_top__DOT____VdfgTmp_h15124160__0) 
                                  | (0x67U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode)))))));
    bufp->fullBit(oldp+100,(vlSelf->ysyx_23060077_top__DOT__stall));
    bufp->fullBit(oldp+101,((0x63U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode))));
    bufp->fullBit(oldp+102,((0x6fU == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode))));
    bufp->fullBit(oldp+103,((0x67U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode))));
    bufp->fullCData(oldp+104,((0x1fU & ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                                        >> 1U))),5);
    bufp->fullBit(oldp+105,((1U & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out))));
    bufp->fullCData(oldp+106,((0x1fU & ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                                        >> 0xbU))),5);
    bufp->fullCData(oldp+107,((0x1fU & ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                                        >> 6U))),5);
    bufp->fullIData(oldp+108,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r),32);
    bufp->fullCData(oldp+109,(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt),4);
    bufp->fullCData(oldp+110,(vlSelf->ysyx_23060077_top__DOT__idu_src_sel),2);
    bufp->fullCData(oldp+111,(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt),2);
    bufp->fullCData(oldp+112,(vlSelf->ysyx_23060077_top__DOT__idu_funct3),3);
    bufp->fullIData(oldp+113,(vlSelf->ysyx_23060077_top__DOT__src1),32);
    bufp->fullIData(oldp+114,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wdata),32);
    bufp->fullBit(oldp+115,((1U & (~ (IData)((0U != vlSelf->ysyx_23060077_top__DOT__exu_result))))));
    bufp->fullIData(oldp+116,(vlSelf->ysyx_23060077_top__DOT__exu_result),32);
    bufp->fullIData(oldp+117,(vlSelf->ysyx_23060077_top__DOT__lsu_result),32);
    bufp->fullBit(oldp+118,(((1U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt)) 
                             | (2U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt)))));
    bufp->fullBit(oldp+119,(vlSelf->ysyx_23060077_top__DOT__csr_ecall));
    bufp->fullBit(oldp+120,(vlSelf->ysyx_23060077_top__DOT__csr_mret));
    bufp->fullIData(oldp+121,(vlSelf->ysyx_23060077_top__DOT__wr_csr_data),32);
    bufp->fullIData(oldp+122,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                              [0x300U]),32);
    bufp->fullIData(oldp+123,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                              [0x305U]),32);
    bufp->fullIData(oldp+124,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                              [0x341U]),32);
    bufp->fullIData(oldp+125,(vlSelf->ysyx_23060077_top__DOT__commit_pc_t),32);
    bufp->fullBit(oldp+126,(vlSelf->ysyx_23060077_top__DOT__commit_valid_t));
    bufp->fullBit(oldp+127,(((IData)(vlSelf->ysyx_23060077_top__DOT__commit_valid_t)
                              ? (IData)(vlSelf->ysyx_23060077_top__DOT__commit_valid_t)
                              : (0U != vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r))));
    bufp->fullIData(oldp+128,(((IData)(vlSelf->ysyx_23060077_top__DOT__commit_valid_t)
                                ? vlSelf->ysyx_23060077_top__DOT__commit_pc_t
                                : vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r)),32);
    bufp->fullSData(oldp+129,((0xfffU & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)),12);
    bufp->fullBit(oldp+130,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_en));
    bufp->fullIData(oldp+131,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_data_r),32);
    bufp->fullIData(oldp+132,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__temp),32);
    bufp->fullIData(oldp+133,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__mepc_inst_r),32);
    bufp->fullIData(oldp+134,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                              [0x342U]),32);
    bufp->fullIData(oldp+135,((IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+136,((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)),32);
    bufp->fullIData(oldp+137,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data),32);
    bufp->fullBit(oldp+138,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag));
    bufp->fullQData(oldp+139,((((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                            >> 0x3fU))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                             >> 0x20U))))),33);
    bufp->fullQData(oldp+141,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t),33);
    bufp->fullQData(oldp+143,((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag))),33);
    bufp->fullQData(oldp+145,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out),33);
    bufp->fullBit(oldp+147,((1U & (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                           >> 0x3fU)))));
    bufp->fullBit(oldp+148,((1U & (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+149,((1U & (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+150,((1U & (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+151,((1U & VL_REDXOR_64((0x180000000ULL 
                                                & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out)))));
    bufp->fullBit(oldp+152,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__carry_flag));
    bufp->fullIData(oldp+153,((IData)(((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                                                >> 0x3fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                           >> 0x20U)))) 
                                       >> (0x3fU & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out))))),32);
    __Vtemp_h087321c3__0[0U] = (IData)((0xb00000000ULL 
                                        | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out))));
    __Vtemp_h087321c3__0[1U] = ((((IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                           >> 0x20U)) 
                                  & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)) 
                                 << 4U) | (IData)((
                                                   (0xb00000000ULL 
                                                    | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out))) 
                                                   >> 0x20U)));
    __Vtemp_h087321c3__0[2U] = (0xa0U | ((((IData)(
                                                   (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                    >> 0x20U)) 
                                           | (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)) 
                                          << 8U) | 
                                         (((IData)(
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
                                              >= (0x3fU 
                                                  & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
                                              ? ((IData)(
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
    __Vtemp_h087321c3__0[9U] = ((0x1fU >= (0x3fU & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
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
    bufp->fullWData(oldp+154,(__Vtemp_h087321c3__0),396);
    bufp->fullQData(oldp+167,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[0]),36);
    bufp->fullQData(oldp+169,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[1]),36);
    bufp->fullQData(oldp+171,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[2]),36);
    bufp->fullQData(oldp+173,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[3]),36);
    bufp->fullQData(oldp+175,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[4]),36);
    bufp->fullQData(oldp+177,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[5]),36);
    bufp->fullQData(oldp+179,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[6]),36);
    bufp->fullQData(oldp+181,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[7]),36);
    bufp->fullQData(oldp+183,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[8]),36);
    bufp->fullQData(oldp+185,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[9]),36);
    bufp->fullQData(oldp+187,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[10]),36);
    bufp->fullIData(oldp+189,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[0]),32);
    bufp->fullIData(oldp+190,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[1]),32);
    bufp->fullIData(oldp+191,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[2]),32);
    bufp->fullIData(oldp+192,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[3]),32);
    bufp->fullIData(oldp+193,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[4]),32);
    bufp->fullIData(oldp+194,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[5]),32);
    bufp->fullIData(oldp+195,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[6]),32);
    bufp->fullIData(oldp+196,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[7]),32);
    bufp->fullIData(oldp+197,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[8]),32);
    bufp->fullIData(oldp+198,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[9]),32);
    bufp->fullIData(oldp+199,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[10]),32);
    bufp->fullIData(oldp+200,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out),32);
    bufp->fullBit(oldp+201,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit));
    bufp->fullCData(oldp+202,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key),4);
    __Vtemp_h86f1ea95__0[0U] = (IData)((0xf00000000ULL 
                                        | (QData)((IData)(
                                                          (1U 
                                                           & (~ vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data))))));
    __Vtemp_h86f1ea95__0[1U] = ((0x10U & (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data 
                                          << 4U)) | (IData)(
                                                            ((0xf00000000ULL 
                                                              | (QData)((IData)(
                                                                                (1U 
                                                                                & (~ vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data))))) 
                                                             >> 0x20U)));
    __Vtemp_h86f1ea95__0[2U] = (0xe0U | (0x100U & (
                                                   (~ vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data) 
                                                   << 8U)));
    __Vtemp_h86f1ea95__0[3U] = (0xd00U | (0x1000U & 
                                          (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data 
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
    bufp->fullWData(oldp+203,(__Vtemp_h86f1ea95__0),216);
    bufp->fullQData(oldp+210,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[0]),36);
    bufp->fullQData(oldp+212,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[1]),36);
    bufp->fullQData(oldp+214,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[2]),36);
    bufp->fullQData(oldp+216,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[3]),36);
    bufp->fullQData(oldp+218,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[4]),36);
    bufp->fullQData(oldp+220,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[5]),36);
    bufp->fullIData(oldp+222,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[0]),32);
    bufp->fullIData(oldp+223,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[1]),32);
    bufp->fullIData(oldp+224,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[2]),32);
    bufp->fullIData(oldp+225,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[3]),32);
    bufp->fullIData(oldp+226,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[4]),32);
    bufp->fullIData(oldp+227,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[5]),32);
    bufp->fullIData(oldp+228,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out),32);
    bufp->fullBit(oldp+229,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit));
    bufp->fullQData(oldp+230,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out),64);
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
    __Vtemp_hf0a01500__0[4U] = (8U | (((IData)((((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__src1)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)))) 
                                       << 4U) | (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r 
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
    __Vtemp_hf0a01500__0[6U] = (0x10U | (((IData)((
                                                   ((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__src1)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wdata)))) 
                                          << 6U) | 
                                         ((IData)((
                                                   (((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__src1)) 
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
    bufp->fullWData(oldp+232,(__Vtemp_hf0a01500__0),264);
    bufp->fullWData(oldp+241,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+244,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+247,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[2]),66);
    bufp->fullWData(oldp+250,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[3]),66);
    bufp->fullQData(oldp+253,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[0]),64);
    bufp->fullQData(oldp+255,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[1]),64);
    bufp->fullQData(oldp+257,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[2]),64);
    bufp->fullQData(oldp+259,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[3]),64);
    bufp->fullQData(oldp+261,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out),64);
    bufp->fullBit(oldp+263,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit));
    bufp->fullCData(oldp+264,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__opcode),7);
    bufp->fullCData(oldp+265,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__funct7),7);
    bufp->fullIData(oldp+266,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI),32);
    bufp->fullIData(oldp+267,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeU),32);
    bufp->fullIData(oldp+268,((((- (IData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____VdfgTmp_hdcea48d4__0))) 
                                << 0xcU) | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__funct7) 
                                             << 5U) 
                                            | (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc3969ba__0)))),32);
    bufp->fullIData(oldp+269,((((- (IData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____VdfgTmp_hdcea48d4__0))) 
                                << 0xdU) | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____VdfgTmp_hdcea48d4__0) 
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
                                                     << 1U)))))),32);
    bufp->fullIData(oldp+270,((((- (IData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____VdfgTmp_hdcea48d4__0))) 
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
                                                      << 1U)))))),32);
    bufp->fullSData(oldp+271,((((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____VdfgTmp_hdcea48d4__0) 
                                << 0xcU) | ((0x800U 
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
                                                  << 1U))))),13);
    bufp->fullSData(oldp+272,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____Vcellinp__riscv_id_imm_ext_typeI__imm_in),12);
    bufp->fullIData(oldp+273,((((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____VdfgTmp_hdcea48d4__0) 
                                << 0x14U) | ((((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i)
                                                ? 0U
                                                : (0xffU 
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
                                                   << 1U))))),21);
    bufp->fullSData(oldp+274,((((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__funct7) 
                                << 5U) | (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc3969ba__0))),12);
    bufp->fullCData(oldp+275,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out),2);
    bufp->fullBit(oldp+276,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit));
    bufp->fullCData(oldp+277,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__lut_out),2);
    bufp->fullBit(oldp+278,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__hit));
    bufp->fullSData(oldp+279,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out),16);
    __Vtemp_hfeb391ef__0[0U] = (IData)((0x478000730000ULL 
                                        | (((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc59ca0f__0)) 
                                            << 0x39U) 
                                           | (((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdce6b952__0)) 
                                               << 0x34U) 
                                              | (((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc3969ba__0)) 
                                                  << 0x2fU) 
                                                 | (QData)((IData)(vlSelf->__VdfgTmp_h96487c18__0)))))));
    __Vtemp_hfeb391ef__0[1U] = (0xc0000000U | (IData)(
                                                      ((0x478000730000ULL 
                                                        | (((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc59ca0f__0)) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdce6b952__0)) 
                                                               << 0x34U) 
                                                              | (((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc3969ba__0)) 
                                                                  << 0x2fU) 
                                                                 | (QData)((IData)(vlSelf->__VdfgTmp_h96487c18__0)))))) 
                                                       >> 0x20U)));
    __Vtemp_hfeb391ef__0[2U] = (0x260000cU | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc59ca0f__0) 
                                               << 0x10U) 
                                              | (0xffffffe0U 
                                                 & (0x20U 
                                                    | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc3969ba__0) 
                                                       << 6U)))));
    __Vtemp_hfeb391ef__0[3U] = (0x23000U | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc59ca0f__0) 
                                             << 0x1eU) 
                                            | ((0xfff80000U 
                                                & (0x80000U 
                                                   | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc3969ba__0) 
                                                      << 0x14U))) 
                                               | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc59ca0f__0) 
                                                   << 7U) 
                                                  | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdce6b952__0) 
                                                     << 2U)))));
    __Vtemp_hfeb391ef__0[4U] = (0x8c000018U | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc59ca0f__0) 
                                                << 0x15U) 
                                               | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdce6b952__0) 
                                                   << 0x10U) 
                                                  | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc59ca0f__0) 
                                                     >> 2U))));
    __Vtemp_hfeb391ef__0[5U] = (0x1ce0001U | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc3969ba__0) 
                                               << 0x19U) 
                                              | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc59ca0f__0) 
                                                  << 0xcU) 
                                                 | (0xfffffffeU 
                                                    & (2U 
                                                       | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc3969ba__0) 
                                                          << 2U))))));
    __Vtemp_hfeb391ef__0[6U] = (0x8000ef00U | (((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc3969ba__0) 
                                                << 0x10U) 
                                               | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc3969ba__0) 
                                                  >> 7U)));
    __Vtemp_hfeb391ef__0[7U] = (0xdc0004bU | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____VdfgTmp_hdc3969ba__0) 
                                              << 7U));
    bufp->fullWData(oldp+280,(__Vtemp_hfeb391ef__0),253);
    bufp->fullIData(oldp+288,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[0]),23);
    bufp->fullIData(oldp+289,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[1]),23);
    bufp->fullIData(oldp+290,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[2]),23);
    bufp->fullIData(oldp+291,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[3]),23);
    bufp->fullIData(oldp+292,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[4]),23);
    bufp->fullIData(oldp+293,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[5]),23);
    bufp->fullIData(oldp+294,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[6]),23);
    bufp->fullIData(oldp+295,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[7]),23);
    bufp->fullIData(oldp+296,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[8]),23);
    bufp->fullIData(oldp+297,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[9]),23);
    bufp->fullIData(oldp+298,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[10]),23);
    bufp->fullSData(oldp+299,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[0]),16);
    bufp->fullSData(oldp+300,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[1]),16);
    bufp->fullSData(oldp+301,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[2]),16);
    bufp->fullSData(oldp+302,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[3]),16);
    bufp->fullSData(oldp+303,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[4]),16);
    bufp->fullSData(oldp+304,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[5]),16);
    bufp->fullSData(oldp+305,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[6]),16);
    bufp->fullSData(oldp+306,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[7]),16);
    bufp->fullSData(oldp+307,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[8]),16);
    bufp->fullSData(oldp+308,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[9]),16);
    bufp->fullSData(oldp+309,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[10]),16);
    bufp->fullSData(oldp+310,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out),16);
    bufp->fullBit(oldp+311,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit));
    bufp->fullIData(oldp+312,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc),32);
    bufp->fullIData(oldp+313,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_r_data_o_r),32);
    bufp->fullBit(oldp+314,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_r_valid_o_r));
    bufp->fullBit(oldp+315,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_b_valid_o_r));
    bufp->fullBit(oldp+316,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_aw_ready_o_r));
    bufp->fullBit(oldp+317,((1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state))));
    bufp->fullBit(oldp+318,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_w_ready_o_r));
    bufp->fullBit(oldp+319,((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state))));
    bufp->fullBit(oldp+320,((3U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state))));
    bufp->fullBit(oldp+321,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_ar_ready_o_r));
    bufp->fullBit(oldp+322,((1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state))));
    bufp->fullBit(oldp+323,((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state))));
    bufp->fullCData(oldp+324,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state),3);
    bufp->fullCData(oldp+325,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state),2);
    bufp->fullCData(oldp+326,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_w_state),3);
    bufp->fullIData(oldp+327,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_addr),32);
    bufp->fullIData(oldp+328,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_data),32);
    bufp->fullIData(oldp+329,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_mask),32);
    bufp->fullCData(oldp+330,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_r_state),2);
    bufp->fullIData(oldp+331,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__r_addr),32);
    bufp->fullIData(oldp+332,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__r_data),32);
    bufp->fullBit(oldp+333,((1U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))));
    bufp->fullBit(oldp+334,((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))));
    bufp->fullIData(oldp+335,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata_r),32);
    bufp->fullIData(oldp+336,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__mask),32);
    bufp->fullIData(oldp+337,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata_t),32);
    bufp->fullBit(oldp+338,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wen_t));
    bufp->fullCData(oldp+339,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key),5);
    __Vtemp_hd085f0ef__0[0U] = (IData)((0xd00000000ULL 
                                        | (((QData)((IData)(
                                                            (0xffU 
                                                             & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata_r))) 
                                            << 0x25U) 
                                           | (QData)((IData)(
                                                             (0xffffU 
                                                              & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata_r))))));
    __Vtemp_hd085f0ef__0[1U] = (IData)(((0xd00000000ULL 
                                         | (((QData)((IData)(
                                                             (0xffU 
                                                              & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata_r))) 
                                             << 0x25U) 
                                            | (QData)((IData)(
                                                              (0xffffU 
                                                               & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata_r))))) 
                                        >> 0x20U));
    __Vtemp_hd085f0ef__0[2U] = (0x180U | (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata_r 
                                          << 0xaU));
    __Vtemp_hd085f0ef__0[3U] = (0x2800U | ((0xffff8000U 
                                            & (((- (IData)(
                                                           (1U 
                                                            & (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata_r 
                                                               >> 0xfU)))) 
                                                << 0x1fU) 
                                               | (0x7fff8000U 
                                                  & (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata_r 
                                                     << 0xfU)))) 
                                           | (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata_r 
                                              >> 0x16U)));
    __Vtemp_hd085f0ef__0[4U] = (0x48000U | ((0xfff00000U 
                                             & (((- (IData)(
                                                            (1U 
                                                             & (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata_r 
                                                                >> 7U)))) 
                                                 << 0x1cU) 
                                                | (0xff00000U 
                                                   & (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata_r 
                                                      << 0x14U)))) 
                                            | (0x7fffU 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata_r 
                                                                 >> 0xfU)))) 
                                                  >> 1U))));
    __Vtemp_hd085f0ef__0[5U] = (0x800000U | (0xfffffU 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata_r 
                                                               >> 7U)))) 
                                                >> 4U)));
    bufp->fullWData(oldp+340,(__Vtemp_hd085f0ef__0),185);
    bufp->fullQData(oldp+346,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[0]),37);
    bufp->fullQData(oldp+348,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[1]),37);
    bufp->fullQData(oldp+350,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[2]),37);
    bufp->fullQData(oldp+352,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[3]),37);
    bufp->fullQData(oldp+354,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[4]),37);
    bufp->fullIData(oldp+356,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[0]),32);
    bufp->fullIData(oldp+357,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[1]),32);
    bufp->fullIData(oldp+358,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[2]),32);
    bufp->fullIData(oldp+359,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[3]),32);
    bufp->fullIData(oldp+360,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[4]),32);
    bufp->fullIData(oldp+361,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out),32);
    bufp->fullBit(oldp+362,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit));
    bufp->fullIData(oldp+363,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__lut_out),32);
    bufp->fullBit(oldp+364,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__hit));
    bufp->fullIData(oldp+365,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[0]),32);
    bufp->fullIData(oldp+366,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[1]),32);
    bufp->fullIData(oldp+367,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[2]),32);
    bufp->fullIData(oldp+368,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[3]),32);
    bufp->fullIData(oldp+369,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[4]),32);
    bufp->fullIData(oldp+370,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[5]),32);
    bufp->fullIData(oldp+371,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[6]),32);
    bufp->fullIData(oldp+372,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[7]),32);
    bufp->fullIData(oldp+373,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[8]),32);
    bufp->fullIData(oldp+374,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[9]),32);
    bufp->fullIData(oldp+375,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[10]),32);
    bufp->fullIData(oldp+376,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[11]),32);
    bufp->fullIData(oldp+377,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[12]),32);
    bufp->fullIData(oldp+378,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[13]),32);
    bufp->fullIData(oldp+379,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[14]),32);
    bufp->fullIData(oldp+380,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[15]),32);
    bufp->fullIData(oldp+381,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[16]),32);
    bufp->fullIData(oldp+382,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[17]),32);
    bufp->fullIData(oldp+383,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[18]),32);
    bufp->fullIData(oldp+384,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[19]),32);
    bufp->fullIData(oldp+385,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[20]),32);
    bufp->fullIData(oldp+386,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[21]),32);
    bufp->fullIData(oldp+387,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[22]),32);
    bufp->fullIData(oldp+388,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[23]),32);
    bufp->fullIData(oldp+389,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[24]),32);
    bufp->fullIData(oldp+390,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[25]),32);
    bufp->fullIData(oldp+391,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[26]),32);
    bufp->fullIData(oldp+392,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[27]),32);
    bufp->fullIData(oldp+393,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[28]),32);
    bufp->fullIData(oldp+394,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[29]),32);
    bufp->fullIData(oldp+395,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[30]),32);
    bufp->fullIData(oldp+396,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[31]),32);
    bufp->fullBit(oldp+397,(vlSelf->clk));
    bufp->fullBit(oldp+398,(vlSelf->rst_n));
    bufp->fullIData(oldp+399,(((0U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
                                ? vlSelf->ysyx_23060077_top__DOT__exu_result
                                : ((3U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
                                    ? ((IData)(vlSelf->rst_n)
                                        ? ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_en)
                                            ? vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                                           [(0xfffU 
                                             & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)]
                                            : 0U) : 0U)
                                    : vlSelf->ysyx_23060077_top__DOT__lsu_result))),32);
    bufp->fullIData(oldp+400,(((IData)(vlSelf->rst_n)
                                ? ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_en)
                                    ? vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                                   [(0xfffU & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)]
                                    : 0U) : 0U)),32);
    bufp->fullBit(oldp+401,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__carry_flag));
    bufp->fullBit(oldp+402,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__signed_flag));
    bufp->fullIData(oldp+403,(0xbU),32);
    bufp->fullIData(oldp+404,(4U),32);
    bufp->fullIData(oldp+405,(0x20U),32);
    bufp->fullIData(oldp+406,(0U),32);
    bufp->fullIData(oldp+407,(1U),32);
    bufp->fullIData(oldp+408,(0x24U),32);
    bufp->fullIData(oldp+409,(0xbU),32);
    bufp->fullIData(oldp+410,(6U),32);
    bufp->fullIData(oldp+411,(6U),32);
    bufp->fullIData(oldp+412,(2U),32);
    bufp->fullIData(oldp+413,(0x40U),32);
    bufp->fullQData(oldp+414,(0ULL),64);
    bufp->fullIData(oldp+416,(0x42U),32);
    bufp->fullIData(oldp+417,(4U),32);
    bufp->fullCData(oldp+418,(0U),5);
    bufp->fullIData(oldp+419,(0U),32);
    bufp->fullIData(oldp+420,(0xdU),32);
    bufp->fullIData(oldp+421,(0xcU),32);
    bufp->fullIData(oldp+422,(0x15U),32);
    bufp->fullIData(oldp+423,(7U),32);
    bufp->fullCData(oldp+424,(1U),2);
    __Vtemp_h8c90ec6d__0[0U] = 0x6b307bcdU;
    __Vtemp_h8c90ec6d__0[1U] = 0x6301a8d2U;
    __Vtemp_h8c90ec6d__0[2U] = 0x74bfbecfU;
    __Vtemp_h8c90ec6d__0[3U] = 3U;
    bufp->fullWData(oldp+425,(__Vtemp_h8c90ec6d__0),99);
    bufp->fullIData(oldp+429,(9U),32);
    bufp->fullIData(oldp+430,(3U),32);
    bufp->fullCData(oldp+431,(0U),2);
    bufp->fullIData(oldp+432,(0x351dcfU),27);
    bufp->fullIData(oldp+433,(3U),32);
    bufp->fullIData(oldp+434,(0x10U),32);
    bufp->fullSData(oldp+435,(0U),16);
    bufp->fullIData(oldp+436,(0x17U),32);
    bufp->fullBit(oldp+437,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__cpu_w_valid_i));
    bufp->fullIData(oldp+438,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__cpu_w_addr_i),32);
    bufp->fullIData(oldp+439,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__cpu_w_data_i),32);
    bufp->fullCData(oldp+440,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__cpu_w_strb_i),3);
    bufp->fullCData(oldp+441,(0U),3);
    bufp->fullCData(oldp+442,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__axi_b_resp_i),3);
    bufp->fullCData(oldp+443,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__axi_r_resp_i),3);
    bufp->fullCData(oldp+444,(1U),3);
    bufp->fullCData(oldp+445,(2U),3);
    bufp->fullCData(oldp+446,(3U),3);
    bufp->fullCData(oldp+447,(2U),2);
    bufp->fullIData(oldp+448,(5U),32);
    bufp->fullIData(oldp+449,(0x25U),32);
    bufp->fullIData(oldp+450,(5U),32);
    __Vtemp_heb927861__0[0U] = 4U;
    __Vtemp_heb927861__0[1U] = 0x52U;
    __Vtemp_heb927861__0[2U] = 0x620U;
    __Vtemp_heb927861__0[3U] = 0x4000U;
    bufp->fullWData(oldp+451,(__Vtemp_heb927861__0),111);
}
