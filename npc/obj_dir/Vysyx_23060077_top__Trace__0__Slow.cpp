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
    tracep->declBit(c+414,"clk", false,-1);
    tracep->declBit(c+415,"rst_n", false,-1);
    tracep->pushNamePrefix("ysyx_23060077_top ");
    tracep->declBit(c+414,"clk", false,-1);
    tracep->declBit(c+415,"rst_n", false,-1);
    tracep->declBus(c+93,"ifu_pc_lst", false,-1, 31,0);
    tracep->declBus(c+94,"ifu_pc", false,-1, 31,0);
    tracep->declBus(c+95,"ifu_inst", false,-1, 31,0);
    tracep->declBus(c+418,"ifu_inst_t", false,-1, 31,0);
    tracep->declBit(c+96,"ifu_stall", false,-1);
    tracep->declBus(c+97,"jump_pc", false,-1, 31,0);
    tracep->declBit(c+98,"jump_pc_valid", false,-1);
    tracep->declBit(c+99,"stall", false,-1);
    tracep->declBit(c+96,"ifu_r_valid_o", false,-1);
    tracep->declBus(c+100,"ifu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+101,"ifu_r_ready_i", false,-1);
    tracep->declBus(c+102,"ifu_r_data_i", false,-1, 31,0);
    tracep->declBit(c+103,"idu_branch", false,-1);
    tracep->declBit(c+104,"idu_jal", false,-1);
    tracep->declBit(c+105,"idu_jalr", false,-1);
    tracep->declBus(c+106,"idu_rd", false,-1, 4,0);
    tracep->declBit(c+107,"idu_rd_wen", false,-1);
    tracep->declBus(c+108,"idu_rs1", false,-1, 4,0);
    tracep->declBus(c+109,"idu_rs2", false,-1, 4,0);
    tracep->declBus(c+110,"idu_imm", false,-1, 31,0);
    tracep->declBus(c+111,"idu_alu_opt", false,-1, 3,0);
    tracep->declBus(c+112,"idu_src_sel", false,-1, 1,0);
    tracep->declBus(c+113,"idu_lsu_opt", false,-1, 1,0);
    tracep->declBus(c+114,"idu_funct3", false,-1, 2,0);
    tracep->declBus(c+115,"src1", false,-1, 31,0);
    tracep->declBus(c+116,"src2", false,-1, 31,0);
    tracep->declBus(c+416,"rd_data", false,-1, 31,0);
    tracep->declBit(c+117,"zero_flag", false,-1);
    tracep->declBus(c+118,"exu_result", false,-1, 31,0);
    tracep->declBus(c+419,"exu_result_t", false,-1, 31,0);
    tracep->declBus(c+119,"lsu_result", false,-1, 31,0);
    tracep->declBit(c+99,"mem_stall", false,-1);
    tracep->declBit(c+120,"lsu_rd_wen", false,-1);
    tracep->declBit(c+121,"lsu_r_valid_o", false,-1);
    tracep->declBus(c+122,"lsu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+123,"lsu_r_ready_i", false,-1);
    tracep->declBus(c+124,"lsu_r_data_i", false,-1, 31,0);
    tracep->declBit(c+125,"lsu_w_valid_o", false,-1);
    tracep->declBus(c+122,"lsu_w_addr_o", false,-1, 31,0);
    tracep->declBit(c+126,"lsu_w_ready_i", false,-1);
    tracep->declBus(c+116,"lsu_w_data_o", false,-1, 31,0);
    tracep->declBus(c+127,"lsu_w_strb_o", false,-1, 2,0);
    tracep->declBit(c+128,"wbu_rd_wen", false,-1);
    tracep->declBit(c+129,"csr_ecall", false,-1);
    tracep->declBit(c+130,"csr_mret", false,-1);
    tracep->declBus(c+131,"wr_csr_data", false,-1, 31,0);
    tracep->declBus(c+417,"rd_csr_data", false,-1, 31,0);
    tracep->declBus(c+132,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+133,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+134,"csr_mpec", false,-1, 31,0);
    tracep->declBit(c+135,"diff_pc", false,-1);
    tracep->pushNamePrefix("riscv_axi_arbiter_u0 ");
    tracep->declBit(c+414,"aclk", false,-1);
    tracep->declBit(c+415,"areset_n", false,-1);
    tracep->declBit(c+96,"ifu_r_valid_i", false,-1);
    tracep->declBus(c+100,"ifu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+101,"ifu_r_ready_o", false,-1);
    tracep->declBus(c+102,"ifu_r_data_o", false,-1, 31,0);
    tracep->declBit(c+121,"lsu_r_valid_i", false,-1);
    tracep->declBus(c+122,"lsu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+123,"lsu_r_ready_o", false,-1);
    tracep->declBus(c+124,"lsu_r_data_o", false,-1, 31,0);
    tracep->declBit(c+125,"lsu_w_valid_i", false,-1);
    tracep->declBus(c+122,"lsu_w_addr_i", false,-1, 31,0);
    tracep->declBit(c+126,"lsu_w_ready_o", false,-1);
    tracep->declBus(c+116,"lsu_w_data_i", false,-1, 31,0);
    tracep->declBus(c+127,"lsu_w_strb_i", false,-1, 2,0);
    tracep->declBit(c+136,"cpu_r_valid_o", false,-1);
    tracep->declBus(c+137,"cpu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+138,"cpu_r_ready_i", false,-1);
    tracep->declBus(c+139,"cpu_r_data_i", false,-1, 31,0);
    tracep->declBit(c+140,"cpu_w_valid_o", false,-1);
    tracep->declBus(c+141,"cpu_w_addr_o", false,-1, 31,0);
    tracep->declBit(c+142,"cpu_w_ready_i", false,-1);
    tracep->declBus(c+143,"cpu_w_data_o", false,-1, 31,0);
    tracep->declBus(c+144,"cpu_w_strb_o", false,-1, 2,0);
    tracep->declBus(c+145,"arbiter_state", false,-1, 1,0);
    tracep->declBus(c+420,"ARB_IDLE", false,-1, 1,0);
    tracep->declBus(c+421,"ARB_IFU", false,-1, 1,0);
    tracep->declBus(c+422,"ARB_LSU", false,-1, 1,0);
    tracep->pushNamePrefix("u_ysyx_23060077_riscv_axi_lite ");
    tracep->declBit(c+414,"aclk", false,-1);
    tracep->declBit(c+415,"areset_n", false,-1);
    tracep->declBit(c+136,"cpu_r_valid_i", false,-1);
    tracep->declBus(c+137,"cpu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+138,"cpu_r_ready_o", false,-1);
    tracep->declBus(c+139,"cpu_r_data_o", false,-1, 31,0);
    tracep->declBit(c+140,"cpu_w_valid_i", false,-1);
    tracep->declBus(c+141,"cpu_w_addr_i", false,-1, 31,0);
    tracep->declBit(c+142,"cpu_w_ready_o", false,-1);
    tracep->declBus(c+143,"cpu_w_data_i", false,-1, 31,0);
    tracep->declBus(c+144,"cpu_w_strb_i", false,-1, 2,0);
    tracep->declBit(c+146,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+147,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+423,"axi_aw_port_o", false,-1, 2,0);
    tracep->declBus(c+141,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBit(c+148,"axi_w_ready_i", false,-1);
    tracep->declBit(c+149,"axi_w_valid_o", false,-1);
    tracep->declBus(c+144,"axi_w_strb_o", false,-1, 2,0);
    tracep->declBus(c+143,"axi_w_data_o", false,-1, 31,0);
    tracep->declBus(c+424,"axi_b_resp_i", false,-1, 2,0);
    tracep->declBit(c+142,"axi_b_valid_i", false,-1);
    tracep->declBit(c+150,"axi_b_ready_o", false,-1);
    tracep->declBit(c+151,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+152,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+423,"axi_ar_port_o", false,-1, 2,0);
    tracep->declBus(c+137,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBit(c+153,"axi_r_ready_o", false,-1);
    tracep->declBit(c+138,"axi_r_valid_i", false,-1);
    tracep->declBus(c+425,"axi_r_resp_i", false,-1, 2,0);
    tracep->declBus(c+139,"axi_r_data_i", false,-1, 31,0);
    tracep->pushNamePrefix("u_ysyx_23060077_riscv_axi ");
    tracep->declBit(c+414,"aclk", false,-1);
    tracep->declBit(c+415,"areset_n", false,-1);
    tracep->declBit(c+136,"cpu_r_valid_i", false,-1);
    tracep->declBus(c+137,"cpu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+138,"cpu_r_ready_o", false,-1);
    tracep->declBus(c+139,"cpu_r_data_o", false,-1, 31,0);
    tracep->declBit(c+140,"cpu_w_valid_i", false,-1);
    tracep->declBus(c+141,"cpu_w_addr_i", false,-1, 31,0);
    tracep->declBit(c+142,"cpu_w_ready_o", false,-1);
    tracep->declBus(c+143,"cpu_w_data_i", false,-1, 31,0);
    tracep->declBus(c+144,"cpu_w_strb_i", false,-1, 2,0);
    tracep->declBit(c+146,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+147,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+423,"axi_aw_port_o", false,-1, 2,0);
    tracep->declBus(c+141,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBit(c+148,"axi_w_ready_i", false,-1);
    tracep->declBit(c+149,"axi_w_valid_o", false,-1);
    tracep->declBus(c+144,"axi_w_strb_o", false,-1, 2,0);
    tracep->declBus(c+143,"axi_w_data_o", false,-1, 31,0);
    tracep->declBus(c+424,"axi_b_resp_i", false,-1, 2,0);
    tracep->declBit(c+142,"axi_b_valid_i", false,-1);
    tracep->declBit(c+150,"axi_b_ready_o", false,-1);
    tracep->declBit(c+151,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+152,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+423,"axi_ar_port_o", false,-1, 2,0);
    tracep->declBus(c+137,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBit(c+153,"axi_r_ready_o", false,-1);
    tracep->declBit(c+138,"axi_r_valid_i", false,-1);
    tracep->declBus(c+425,"axi_r_resp_i", false,-1, 2,0);
    tracep->declBus(c+139,"axi_r_data_i", false,-1, 31,0);
    tracep->declBus(c+154,"lfsr_out", false,-1, 5,0);
    tracep->declBus(c+155,"r_delay_cnt", false,-1, 5,0);
    tracep->declBus(c+156,"w_delay_cnt", false,-1, 5,0);
    tracep->declBus(c+157,"axi_w_state", false,-1, 2,0);
    tracep->declBus(c+158,"axi_w_state_nxt", false,-1, 2,0);
    tracep->declBus(c+423,"AXI_W_IDLE", false,-1, 2,0);
    tracep->declBus(c+426,"AXI_W_ADDR", false,-1, 2,0);
    tracep->declBus(c+427,"AXI_W_DATA", false,-1, 2,0);
    tracep->declBus(c+428,"AXI_W_RESP", false,-1, 2,0);
    tracep->declBus(c+429,"AXI_W_DELAY", false,-1, 2,0);
    tracep->declBus(c+159,"axi_r_state", false,-1, 1,0);
    tracep->declBus(c+160,"axi_r_state_nxt", false,-1, 1,0);
    tracep->declBus(c+420,"AXI_R_IDLE", false,-1, 1,0);
    tracep->declBus(c+421,"AXI_R_ADDR", false,-1, 1,0);
    tracep->declBus(c+422,"AXI_R_DATA", false,-1, 1,0);
    tracep->declBus(c+430,"AXI_R_DELAY", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_23060077_riscv_axi_sram ");
    tracep->declBit(c+414,"aclk", false,-1);
    tracep->declBit(c+415,"areset_n", false,-1);
    tracep->declBit(c+146,"axi_aw_ready_o", false,-1);
    tracep->declBit(c+147,"axi_aw_valid_i", false,-1);
    tracep->declBus(c+423,"axi_aw_port_i", false,-1, 2,0);
    tracep->declBus(c+141,"axi_aw_addr_i", false,-1, 31,0);
    tracep->declBit(c+148,"axi_w_ready_o", false,-1);
    tracep->declBit(c+149,"axi_w_valid_i", false,-1);
    tracep->declBus(c+144,"axi_w_strb_i", false,-1, 2,0);
    tracep->declBus(c+143,"axi_w_data_i", false,-1, 31,0);
    tracep->declBus(c+424,"axi_b_resp_o", false,-1, 2,0);
    tracep->declBit(c+142,"axi_b_valid_o", false,-1);
    tracep->declBit(c+150,"axi_b_ready_i", false,-1);
    tracep->declBit(c+151,"axi_ar_ready_o", false,-1);
    tracep->declBit(c+152,"axi_ar_valid_i", false,-1);
    tracep->declBus(c+423,"axi_ar_port_i", false,-1, 2,0);
    tracep->declBus(c+137,"axi_ar_addr_i", false,-1, 31,0);
    tracep->declBit(c+153,"axi_r_ready_i", false,-1);
    tracep->declBit(c+138,"axi_r_valid_o", false,-1);
    tracep->declBus(c+425,"axi_r_resp_o", false,-1, 2,0);
    tracep->declBus(c+139,"axi_r_data_o", false,-1, 31,0);
    tracep->declBus(c+161,"lfsr_out", false,-1, 5,0);
    tracep->declBus(c+162,"r_delay_cnt", false,-1, 5,0);
    tracep->declBus(c+163,"w_delay_cnt", false,-1, 5,0);
    tracep->declBus(c+164,"sram_w_state", false,-1, 2,0);
    tracep->declBus(c+423,"SRAM_W_IDLE", false,-1, 2,0);
    tracep->declBus(c+426,"SRAM_W_ADDR", false,-1, 2,0);
    tracep->declBus(c+427,"SRAM_W_DATA", false,-1, 2,0);
    tracep->declBus(c+428,"SRAM_W_RESP", false,-1, 2,0);
    tracep->declBus(c+165,"w_addr", false,-1, 31,0);
    tracep->declBus(c+166,"w_data", false,-1, 31,0);
    tracep->declBus(c+167,"w_mask", false,-1, 31,0);
    tracep->declBit(c+146,"axi_aw_ready_o_r", false,-1);
    tracep->declBit(c+148,"axi_w_ready_o_r", false,-1);
    tracep->declBit(c+142,"axi_b_valid_o_r", false,-1);
    tracep->declBus(c+168,"sram_r_state", false,-1, 1,0);
    tracep->declBus(c+420,"SRAM_R_IDLE", false,-1, 1,0);
    tracep->declBus(c+421,"SRAM_R_ADDR", false,-1, 1,0);
    tracep->declBus(c+422,"SRAM_R_DATA", false,-1, 1,0);
    tracep->declBus(c+169,"r_addr", false,-1, 31,0);
    tracep->declBus(c+170,"r_data", false,-1, 31,0);
    tracep->declBit(c+151,"axi_ar_ready_o_r", false,-1);
    tracep->declBit(c+138,"axi_r_valid_o_r", false,-1);
    tracep->declBus(c+139,"axi_r_data_o_r", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("riscv_csr_u0 ");
    tracep->declBit(c+414,"clk", false,-1);
    tracep->declBit(c+415,"rst_n", false,-1);
    tracep->declBus(c+171,"wr_addr", false,-1, 11,0);
    tracep->declBus(c+131,"wr_data", false,-1, 31,0);
    tracep->declBus(c+171,"rd_addr", false,-1, 11,0);
    tracep->declBus(c+417,"rd_data", false,-1, 31,0);
    tracep->declBit(c+129,"i_csr_ecall", false,-1);
    tracep->declBit(c+130,"i_csr_mret", false,-1);
    tracep->declBus(c+95,"i_inst", false,-1, 31,0);
    tracep->declBus(c+94,"i_pc", false,-1, 31,0);
    tracep->declBus(c+132,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+133,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+134,"o_mpec", false,-1, 31,0);
    tracep->declBus(c+417,"rd_data_r", false,-1, 31,0);
    tracep->declBit(c+172,"wr_en", false,-1);
    tracep->declBit(c+172,"rd_en", false,-1);
    tracep->declBus(c+173,"wr_data_r", false,-1, 31,0);
    tracep->declBus(c+174,"temp", false,-1, 31,0);
    tracep->declBus(c+132,"o_mstatus_r", false,-1, 31,0);
    tracep->declBus(c+175,"mepc_inst_r", false,-1, 31,0);
    tracep->declBus(c+176,"mcause", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("riscv_exu_u0 ");
    tracep->declBus(c+94,"pc", false,-1, 31,0);
    tracep->declBus(c+115,"src1", false,-1, 31,0);
    tracep->declBus(c+116,"src2", false,-1, 31,0);
    tracep->declBus(c+110,"imm", false,-1, 31,0);
    tracep->declBit(c+103,"branch", false,-1);
    tracep->declBus(c+111,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+112,"src_sel", false,-1, 1,0);
    tracep->declBus(c+114,"funct3", false,-1, 2,0);
    tracep->declBit(c+117,"zero_flag", false,-1);
    tracep->declBus(c+118,"exu_result", false,-1, 31,0);
    tracep->declBus(c+177,"alu_a_data", false,-1, 31,0);
    tracep->declBus(c+178,"alu_b_data", false,-1, 31,0);
    tracep->declBus(c+179,"alu_out_data", false,-1, 31,0);
    tracep->declBit(c+431,"carry_flag", false,-1);
    tracep->declBit(c+432,"signed_flag", false,-1);
    tracep->pushNamePrefix("riscv_ex_alu ");
    tracep->declBus(c+111,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+177,"alu_a_data", false,-1, 31,0);
    tracep->declBus(c+178,"alu_b_data", false,-1, 31,0);
    tracep->declBus(c+179,"alu_out_data", false,-1, 31,0);
    tracep->declBit(c+180,"sub_flag", false,-1);
    tracep->declQuad(c+181,"alu_a_t", false,-1, 32,0);
    tracep->declQuad(c+183,"alu_b_t", false,-1, 32,0);
    tracep->declQuad(c+185,"cin", false,-1, 32,0);
    tracep->declQuad(c+187,"add_out", false,-1, 32,0);
    tracep->declBit(c+189,"top_A", false,-1);
    tracep->declBit(c+190,"top_B", false,-1);
    tracep->declBit(c+191,"top_C", false,-1);
    tracep->declBit(c+192,"sign_flag", false,-1);
    tracep->declBit(c+193,"over_flag", false,-1);
    tracep->declBit(c+194,"carry_flag", false,-1);
    tracep->declBus(c+195,"sra_result", false,-1, 31,0);
    tracep->pushNamePrefix("riscv_mux_ex_data ");
    tracep->declBus(c+433,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+434,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+435,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+179,"out", false,-1, 31,0);
    tracep->declBus(c+111,"key", false,-1, 3,0);
    tracep->declBus(c+436,"default_out", false,-1, 31,0);
    tracep->declArray(c+196,"lut", false,-1, 395,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+433,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+434,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+435,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+437,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+179,"out", false,-1, 31,0);
    tracep->declBus(c+111,"key", false,-1, 3,0);
    tracep->declBus(c+436,"default_out", false,-1, 31,0);
    tracep->declArray(c+196,"lut", false,-1, 395,0);
    tracep->declBus(c+438,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+209+i*2,"pair_list", true,(i+0), 35,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+231+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+242,"lut_out", false,-1, 31,0);
    tracep->declBit(c+243,"hit", false,-1);
    tracep->declBus(c+439,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("riscv_mux_ex_branch ");
    tracep->declBus(c+440,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+434,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+435,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+118,"out", false,-1, 31,0);
    tracep->declBus(c+244,"key", false,-1, 3,0);
    tracep->declBus(c+179,"default_out", false,-1, 31,0);
    tracep->declArray(c+245,"lut", false,-1, 215,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+440,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+434,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+435,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+437,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+118,"out", false,-1, 31,0);
    tracep->declBus(c+244,"key", false,-1, 3,0);
    tracep->declBus(c+179,"default_out", false,-1, 31,0);
    tracep->declArray(c+245,"lut", false,-1, 215,0);
    tracep->declBus(c+438,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+252+i*2,"pair_list", true,(i+0), 35,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+12+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+264+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+270,"lut_out", false,-1, 31,0);
    tracep->declBit(c+271,"hit", false,-1);
    tracep->declBus(c+441,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("riscv_mux_ex_src_sel ");
    tracep->declBus(c+434,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+442,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+443,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+272,"out", false,-1, 63,0);
    tracep->declBus(c+112,"key", false,-1, 1,0);
    tracep->declQuad(c+444,"default_out", false,-1, 63,0);
    tracep->declArray(c+274,"lut", false,-1, 263,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+434,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+442,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+443,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+437,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+272,"out", false,-1, 63,0);
    tracep->declBus(c+112,"key", false,-1, 1,0);
    tracep->declQuad(c+444,"default_out", false,-1, 63,0);
    tracep->declArray(c+274,"lut", false,-1, 263,0);
    tracep->declBus(c+446,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+283+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+18+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+295+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+303,"lut_out", false,-1, 63,0);
    tracep->declBit(c+305,"hit", false,-1);
    tracep->declBus(c+447,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("riscv_idu_u0 ");
    tracep->declBus(c+95,"inst", false,-1, 31,0);
    tracep->declBit(c+103,"branch", false,-1);
    tracep->declBit(c+104,"jal", false,-1);
    tracep->declBit(c+105,"jalr", false,-1);
    tracep->declBus(c+106,"rd", false,-1, 4,0);
    tracep->declBit(c+107,"rd_wen", false,-1);
    tracep->declBus(c+108,"rs1", false,-1, 4,0);
    tracep->declBus(c+109,"rs2", false,-1, 4,0);
    tracep->declBus(c+110,"imm", false,-1, 31,0);
    tracep->declBus(c+111,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+112,"src_sel", false,-1, 1,0);
    tracep->declBus(c+113,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+114,"funct3", false,-1, 2,0);
    tracep->declBus(c+306,"opcode", false,-1, 6,0);
    tracep->declBus(c+307,"funct7", false,-1, 6,0);
    tracep->declBus(c+448,"reg_zero", false,-1, 4,0);
    tracep->pushNamePrefix("riscv_id_imm_idu ");
    tracep->declBus(c+95,"inst", false,-1, 31,0);
    tracep->declBus(c+110,"imm", false,-1, 31,0);
    tracep->declBus(c+110,"imm_r", false,-1, 31,0);
    tracep->declBus(c+308,"imm_typeI", false,-1, 31,0);
    tracep->declBus(c+309,"imm_typeU", false,-1, 31,0);
    tracep->declBus(c+310,"imm_typeS", false,-1, 31,0);
    tracep->declBus(c+311,"imm_typeB", false,-1, 31,0);
    tracep->declBus(c+312,"imm_typeJ", false,-1, 31,0);
    tracep->declBus(c+449,"imm_typeR", false,-1, 31,0);
    tracep->declBus(c+449,"imm_type_NONE", false,-1, 31,0);
    tracep->pushNamePrefix("riscv_id_imm_ext_typeB ");
    tracep->declBus(c+450,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+313,"imm_in", false,-1, 12,0);
    tracep->declBus(c+311,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("riscv_id_imm_ext_typeI ");
    tracep->declBus(c+451,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+314,"imm_in", false,-1, 11,0);
    tracep->declBus(c+308,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("riscv_id_imm_ext_typeJ ");
    tracep->declBus(c+452,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+315,"imm_in", false,-1, 20,0);
    tracep->declBus(c+312,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("riscv_id_imm_ext_typeS ");
    tracep->declBus(c+451,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+316,"imm_in", false,-1, 11,0);
    tracep->declBus(c+310,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("riscv_id_imm_ext_typeU ");
    tracep->declBus(c+435,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+309,"imm_in", false,-1, 31,0);
    tracep->declBus(c+309,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("riscv_id_opt_idu ");
    tracep->declBus(c+306,"opcode", false,-1, 6,0);
    tracep->declBus(c+114,"funct3", false,-1, 2,0);
    tracep->declBus(c+307,"funct7", false,-1, 6,0);
    tracep->declBus(c+111,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+112,"src_sel", false,-1, 1,0);
    tracep->declBus(c+113,"lsu_opt", false,-1, 1,0);
    tracep->pushNamePrefix("riscv_mux_id_src_sel ");
    tracep->declBus(c+433,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+453,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+442,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+112,"out", false,-1, 1,0);
    tracep->declBus(c+306,"key", false,-1, 6,0);
    tracep->declBus(c+421,"default_out", false,-1, 1,0);
    tracep->declArray(c+454,"lut", false,-1, 98,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+433,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+453,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+442,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+437,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+112,"out", false,-1, 1,0);
    tracep->declBus(c+306,"key", false,-1, 6,0);
    tracep->declBus(c+421,"default_out", false,-1, 1,0);
    tracep->declArray(c+454,"lut", false,-1, 98,0);
    tracep->declBus(c+458,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+22+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+33+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+44+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+317,"lut_out", false,-1, 1,0);
    tracep->declBit(c+318,"hit", false,-1);
    tracep->declBus(c+439,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ysyx_23060077_riscv_mux_id_lsu_opt ");
    tracep->declBus(c+459,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+453,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+442,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+113,"out", false,-1, 1,0);
    tracep->declBus(c+306,"key", false,-1, 6,0);
    tracep->declBus(c+420,"default_out", false,-1, 1,0);
    tracep->declBus(c+460,"lut", false,-1, 26,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+459,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+453,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+442,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+437,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+113,"out", false,-1, 1,0);
    tracep->declBus(c+306,"key", false,-1, 6,0);
    tracep->declBus(c+420,"default_out", false,-1, 1,0);
    tracep->declBus(c+460,"lut", false,-1, 26,0);
    tracep->declBus(c+458,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+55+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+58+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+61+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+319,"lut_out", false,-1, 1,0);
    tracep->declBit(c+320,"hit", false,-1);
    tracep->declBus(c+461,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("riscv_mux_id_reg ");
    tracep->declBus(c+433,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+453,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+462,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+321,"out", false,-1, 15,0);
    tracep->declBus(c+306,"key", false,-1, 6,0);
    tracep->declBus(c+463,"default_out", false,-1, 15,0);
    tracep->declArray(c+322,"lut", false,-1, 252,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+433,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+453,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+462,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+437,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+321,"out", false,-1, 15,0);
    tracep->declBus(c+306,"key", false,-1, 6,0);
    tracep->declBus(c+463,"default_out", false,-1, 15,0);
    tracep->declArray(c+322,"lut", false,-1, 252,0);
    tracep->declBus(c+464,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+330+i*1,"pair_list", true,(i+0), 22,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+64+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+341+i*1,"data_list", true,(i+0), 15,0);
    }
    tracep->declBus(c+352,"lut_out", false,-1, 15,0);
    tracep->declBit(c+353,"hit", false,-1);
    tracep->declBus(c+439,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("riscv_ifu_u0 ");
    tracep->declBit(c+414,"clk", false,-1);
    tracep->declBit(c+415,"rst_n", false,-1);
    tracep->declBus(c+97,"jump_pc", false,-1, 31,0);
    tracep->declBit(c+98,"jump_pc_valid", false,-1);
    tracep->declBit(c+99,"stall", false,-1);
    tracep->declBit(c+120,"wbu_stall", false,-1);
    tracep->declBit(c+96,"ifu_r_valid_o", false,-1);
    tracep->declBus(c+100,"ifu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+101,"ifu_r_ready_i", false,-1);
    tracep->declBus(c+102,"ifu_r_data_i", false,-1, 31,0);
    tracep->declBit(c+96,"ifu_stall", false,-1);
    tracep->declBus(c+94,"ifu_pc_o", false,-1, 31,0);
    tracep->declBus(c+95,"ifu_inst_o", false,-1, 31,0);
    tracep->declBus(c+94,"ifu_pc_o_r", false,-1, 31,0);
    tracep->declBus(c+95,"ifu_inst_o_r", false,-1, 31,0);
    tracep->declBus(c+100,"pc", false,-1, 31,0);
    tracep->declBus(c+102,"inst", false,-1, 31,0);
    tracep->declBit(c+96,"cpu_r_valid_i", false,-1);
    tracep->declBit(c+101,"cpu_r_ready_o", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("riscv_lsu_u0 ");
    tracep->declBit(c+414,"clk", false,-1);
    tracep->declBit(c+415,"rst_n", false,-1);
    tracep->declBus(c+115,"src1", false,-1, 31,0);
    tracep->declBus(c+116,"src2", false,-1, 31,0);
    tracep->declBus(c+110,"imm", false,-1, 31,0);
    tracep->declBus(c+113,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+114,"funct3", false,-1, 2,0);
    tracep->declBit(c+96,"ifu_stall", false,-1);
    tracep->declBit(c+121,"lsu_r_valid_o", false,-1);
    tracep->declBus(c+122,"lsu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+123,"lsu_r_ready_i", false,-1);
    tracep->declBus(c+124,"lsu_r_data_i", false,-1, 31,0);
    tracep->declBit(c+125,"lsu_w_valid_o", false,-1);
    tracep->declBus(c+122,"lsu_w_addr_o", false,-1, 31,0);
    tracep->declBit(c+126,"lsu_w_ready_i", false,-1);
    tracep->declBus(c+116,"lsu_w_data_o", false,-1, 31,0);
    tracep->declBus(c+127,"lsu_w_strb_o", false,-1, 2,0);
    tracep->declBit(c+99,"mem_stall", false,-1);
    tracep->declBit(c+120,"lsu_rd_wen", false,-1);
    tracep->declBus(c+119,"lsu_result", false,-1, 31,0);
    tracep->declBus(c+122,"raddr", false,-1, 31,0);
    tracep->declBus(c+124,"rdata", false,-1, 31,0);
    tracep->declBus(c+122,"waddr", false,-1, 31,0);
    tracep->declBus(c+116,"wdata", false,-1, 31,0);
    tracep->declBus(c+354,"wmask", false,-1, 31,0);
    tracep->declBus(c+354,"mask", false,-1, 31,0);
    tracep->declBit(c+121,"ren", false,-1);
    tracep->declBit(c+125,"wen", false,-1);
    tracep->declBit(c+123,"lsu_rd_wen_r", false,-1);
    tracep->declBit(c+126,"lsu_rd_wen_w", false,-1);
    tracep->pushNamePrefix("riscv_mux_ls_lsu_opt ");
    tracep->declBus(c+465,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+465,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+435,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+119,"out", false,-1, 31,0);
    tracep->declBus(c+355,"key", false,-1, 4,0);
    tracep->declBus(c+436,"default_out", false,-1, 31,0);
    tracep->declArray(c+356,"lut", false,-1, 184,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+465,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+465,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+435,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+437,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+119,"out", false,-1, 31,0);
    tracep->declBus(c+355,"key", false,-1, 4,0);
    tracep->declBus(c+436,"default_out", false,-1, 31,0);
    tracep->declArray(c+356,"lut", false,-1, 184,0);
    tracep->declBus(c+466,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+362+i*2,"pair_list", true,(i+0), 36,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+75+i*1,"key_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+372+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+377,"lut_out", false,-1, 31,0);
    tracep->declBit(c+378,"hit", false,-1);
    tracep->declBus(c+467,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("riscv_mux_ls_wmask ");
    tracep->declBus(c+459,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+465,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+435,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+354,"out", false,-1, 31,0);
    tracep->declBus(c+355,"key", false,-1, 4,0);
    tracep->declBus(c+436,"default_out", false,-1, 31,0);
    tracep->declArray(c+468,"lut", false,-1, 110,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+459,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+465,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+435,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+437,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+354,"out", false,-1, 31,0);
    tracep->declBus(c+355,"key", false,-1, 4,0);
    tracep->declBus(c+436,"default_out", false,-1, 31,0);
    tracep->declArray(c+468,"lut", false,-1, 110,0);
    tracep->declBus(c+466,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+80+i*2,"pair_list", true,(i+0), 36,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+86+i*1,"key_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+89+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+379,"lut_out", false,-1, 31,0);
    tracep->declBit(c+380,"hit", false,-1);
    tracep->declBus(c+461,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("riscv_regfile_u0 ");
    tracep->declBit(c+414,"clk", false,-1);
    tracep->declBit(c+415,"rst_n", false,-1);
    tracep->declBus(c+108,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+115,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+109,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+116,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+128,"rd_en", false,-1);
    tracep->declBus(c+106,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+416,"rd_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+381+i*1,"gpr", true,(i+0), 31,0);
    }
    tracep->declBus(c+92,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("riscv_wbu_u0 ");
    tracep->declBus(c+113,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+118,"exu_result", false,-1, 31,0);
    tracep->declBus(c+119,"lsu_result", false,-1, 31,0);
    tracep->declBus(c+417,"csr_result", false,-1, 31,0);
    tracep->declBit(c+120,"lsu_rd_wen", false,-1);
    tracep->declBit(c+413,"idu_rd_wen", false,-1);
    tracep->declBit(c+128,"wbu_rd_wen", false,-1);
    tracep->declBus(c+416,"wbu_result", false,-1, 31,0);
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
    VlWide<6>/*191:0*/ __Vtemp_h6a9af6f0__0;
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
    bufp->fullIData(oldp+95,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r),32);
    bufp->fullBit(oldp+96,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i));
    bufp->fullIData(oldp+97,(((IData)(vlSelf->ysyx_23060077_top__DOT__csr_mret)
                               ? vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                              [0x341U] : ((IData)(vlSelf->ysyx_23060077_top__DOT__csr_ecall)
                                           ? vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                                          [0x305U] : 
                                          ((IData)(vlSelf->ysyx_23060077_top__DOT____VdfgTmp_h15124160__0)
                                            ? (vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r 
                                               + vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r)
                                            : ((0x67U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r))
                                                ? vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__raddr
                                                : 0U))))),32);
    bufp->fullBit(oldp+98,(((IData)(vlSelf->ysyx_23060077_top__DOT__csr_mret) 
                            | ((IData)(vlSelf->ysyx_23060077_top__DOT__csr_ecall) 
                               | ((IData)(vlSelf->ysyx_23060077_top__DOT____VdfgTmp_h15124160__0) 
                                  | (0x67U == (0x7fU 
                                               & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)))))));
    bufp->fullBit(oldp+99,(vlSelf->ysyx_23060077_top__DOT__stall));
    bufp->fullIData(oldp+100,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc),32);
    bufp->fullBit(oldp+101,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_ready_o));
    bufp->fullIData(oldp+102,(((1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state))
                                ? vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_r_data_o_r
                                : 0U)),32);
    bufp->fullBit(oldp+103,((0x63U == (0x7fU & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r))));
    bufp->fullBit(oldp+104,((0x6fU == (0x7fU & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r))));
    bufp->fullBit(oldp+105,((0x67U == (0x7fU & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r))));
    bufp->fullCData(oldp+106,((0x1fU & ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                                        >> 1U))),5);
    bufp->fullBit(oldp+107,((1U & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out))));
    bufp->fullCData(oldp+108,((0x1fU & ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                                        >> 0xbU))),5);
    bufp->fullCData(oldp+109,((0x1fU & ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                                        >> 6U))),5);
    bufp->fullIData(oldp+110,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r),32);
    bufp->fullCData(oldp+111,(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt),4);
    bufp->fullCData(oldp+112,(vlSelf->ysyx_23060077_top__DOT__idu_src_sel),2);
    bufp->fullCData(oldp+113,(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt),2);
    bufp->fullCData(oldp+114,((7U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                     >> 0xcU))),3);
    bufp->fullIData(oldp+115,(vlSelf->ysyx_23060077_top__DOT__src1),32);
    bufp->fullIData(oldp+116,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wdata),32);
    bufp->fullBit(oldp+117,((1U & (~ (IData)((0U != vlSelf->ysyx_23060077_top__DOT__exu_result))))));
    bufp->fullIData(oldp+118,(vlSelf->ysyx_23060077_top__DOT__exu_result),32);
    bufp->fullIData(oldp+119,(vlSelf->ysyx_23060077_top__DOT__lsu_result),32);
    bufp->fullBit(oldp+120,(vlSelf->ysyx_23060077_top__DOT__lsu_rd_wen));
    bufp->fullBit(oldp+121,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__ren));
    bufp->fullIData(oldp+122,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__raddr),32);
    bufp->fullBit(oldp+123,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__lsu_rd_wen_r));
    bufp->fullIData(oldp+124,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata),32);
    bufp->fullBit(oldp+125,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wen));
    bufp->fullBit(oldp+126,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__lsu_rd_wen_w));
    bufp->fullCData(oldp+127,((7U & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__mask)),3);
    bufp->fullBit(oldp+128,(((0U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
                              ? (IData)(vlSelf->ysyx_23060077_top__DOT____Vcellinp__riscv_wbu_u0__idu_rd_wen)
                              : ((3U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
                                  ? (IData)(vlSelf->ysyx_23060077_top__DOT____Vcellinp__riscv_wbu_u0__idu_rd_wen)
                                  : (IData)(vlSelf->ysyx_23060077_top__DOT__lsu_rd_wen)))));
    bufp->fullBit(oldp+129,(vlSelf->ysyx_23060077_top__DOT__csr_ecall));
    bufp->fullBit(oldp+130,(vlSelf->ysyx_23060077_top__DOT__csr_mret));
    bufp->fullIData(oldp+131,(vlSelf->ysyx_23060077_top__DOT__wr_csr_data),32);
    bufp->fullIData(oldp+132,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                              [0x300U]),32);
    bufp->fullIData(oldp+133,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                              [0x305U]),32);
    bufp->fullIData(oldp+134,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                              [0x341U]),32);
    bufp->fullBit(oldp+135,((vlSelf->ysyx_23060077_top__DOT__ifu_pc_lst 
                             != vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r)));
    bufp->fullBit(oldp+136,((1U & ((1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state))
                                    ? (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i)
                                    : ((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state))
                                        ? (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__ren)
                                        : 0U)))));
    bufp->fullIData(oldp+137,(((1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state))
                                ? vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc
                                : vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_w_addr_o)),32);
    bufp->fullBit(oldp+138,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_r_valid_o_r));
    bufp->fullIData(oldp+139,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_r_data_o_r),32);
    bufp->fullBit(oldp+140,(((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state)) 
                             & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wen))));
    bufp->fullIData(oldp+141,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_w_addr_o),32);
    bufp->fullBit(oldp+142,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_b_valid_o_r));
    bufp->fullIData(oldp+143,(((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state))
                                ? vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wdata
                                : 0U)),32);
    bufp->fullCData(oldp+144,(((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state))
                                ? (7U & vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__mask)
                                : 0U)),3);
    bufp->fullCData(oldp+145,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state),2);
    bufp->fullBit(oldp+146,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_aw_ready_o_r));
    bufp->fullBit(oldp+147,((1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state))));
    bufp->fullBit(oldp+148,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_w_ready_o_r));
    bufp->fullBit(oldp+149,((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state))));
    bufp->fullBit(oldp+150,((3U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state))));
    bufp->fullBit(oldp+151,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_ar_ready_o_r));
    bufp->fullBit(oldp+152,((1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state))));
    bufp->fullBit(oldp+153,((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state))));
    bufp->fullCData(oldp+154,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__lfsr_out),6);
    bufp->fullCData(oldp+155,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__r_delay_cnt),6);
    bufp->fullCData(oldp+156,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__w_delay_cnt),6);
    bufp->fullCData(oldp+157,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state),3);
    bufp->fullCData(oldp+158,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state_nxt),3);
    bufp->fullCData(oldp+159,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state),2);
    bufp->fullCData(oldp+160,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state_nxt),2);
    bufp->fullCData(oldp+161,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__lfsr_out),6);
    bufp->fullCData(oldp+162,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__r_delay_cnt),6);
    bufp->fullCData(oldp+163,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_delay_cnt),6);
    bufp->fullCData(oldp+164,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_w_state),3);
    bufp->fullIData(oldp+165,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_addr),32);
    bufp->fullIData(oldp+166,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_data),32);
    bufp->fullIData(oldp+167,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_mask),32);
    bufp->fullCData(oldp+168,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_r_state),2);
    bufp->fullIData(oldp+169,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__r_addr),32);
    bufp->fullIData(oldp+170,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__r_data),32);
    bufp->fullSData(oldp+171,((0xfffU & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)),12);
    bufp->fullBit(oldp+172,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_en));
    bufp->fullIData(oldp+173,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_data_r),32);
    bufp->fullIData(oldp+174,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__temp),32);
    bufp->fullIData(oldp+175,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__mepc_inst_r),32);
    bufp->fullIData(oldp+176,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                              [0x342U]),32);
    bufp->fullIData(oldp+177,((IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+178,((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)),32);
    bufp->fullIData(oldp+179,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_out_data),32);
    bufp->fullBit(oldp+180,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag));
    bufp->fullQData(oldp+181,((((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                            >> 0x3fU))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                             >> 0x20U))))),33);
    bufp->fullQData(oldp+183,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t),33);
    bufp->fullQData(oldp+185,((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag))),33);
    bufp->fullQData(oldp+187,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out),33);
    bufp->fullBit(oldp+189,((1U & (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                           >> 0x3fU)))));
    bufp->fullBit(oldp+190,((1U & (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+191,((1U & (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+192,((1U & (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+193,((1U & VL_REDXOR_64((0x180000000ULL 
                                                & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out)))));
    bufp->fullBit(oldp+194,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__carry_flag));
    bufp->fullIData(oldp+195,((IData)(((((QData)((IData)(
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
    bufp->fullWData(oldp+196,(__Vtemp_h087321c3__0),396);
    bufp->fullQData(oldp+209,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[0]),36);
    bufp->fullQData(oldp+211,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[1]),36);
    bufp->fullQData(oldp+213,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[2]),36);
    bufp->fullQData(oldp+215,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[3]),36);
    bufp->fullQData(oldp+217,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[4]),36);
    bufp->fullQData(oldp+219,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[5]),36);
    bufp->fullQData(oldp+221,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[6]),36);
    bufp->fullQData(oldp+223,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[7]),36);
    bufp->fullQData(oldp+225,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[8]),36);
    bufp->fullQData(oldp+227,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[9]),36);
    bufp->fullQData(oldp+229,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[10]),36);
    bufp->fullIData(oldp+231,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[0]),32);
    bufp->fullIData(oldp+232,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[1]),32);
    bufp->fullIData(oldp+233,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[2]),32);
    bufp->fullIData(oldp+234,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[3]),32);
    bufp->fullIData(oldp+235,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[4]),32);
    bufp->fullIData(oldp+236,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[5]),32);
    bufp->fullIData(oldp+237,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[6]),32);
    bufp->fullIData(oldp+238,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[7]),32);
    bufp->fullIData(oldp+239,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[8]),32);
    bufp->fullIData(oldp+240,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[9]),32);
    bufp->fullIData(oldp+241,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[10]),32);
    bufp->fullIData(oldp+242,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out),32);
    bufp->fullBit(oldp+243,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit));
    bufp->fullCData(oldp+244,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key),4);
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
    bufp->fullWData(oldp+245,(__Vtemp_h86f1ea95__0),216);
    bufp->fullQData(oldp+252,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[0]),36);
    bufp->fullQData(oldp+254,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[1]),36);
    bufp->fullQData(oldp+256,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[2]),36);
    bufp->fullQData(oldp+258,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[3]),36);
    bufp->fullQData(oldp+260,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[4]),36);
    bufp->fullQData(oldp+262,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[5]),36);
    bufp->fullIData(oldp+264,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[0]),32);
    bufp->fullIData(oldp+265,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[1]),32);
    bufp->fullIData(oldp+266,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[2]),32);
    bufp->fullIData(oldp+267,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[3]),32);
    bufp->fullIData(oldp+268,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[4]),32);
    bufp->fullIData(oldp+269,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[5]),32);
    bufp->fullIData(oldp+270,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out),32);
    bufp->fullBit(oldp+271,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit));
    bufp->fullQData(oldp+272,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out),64);
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
    bufp->fullWData(oldp+274,(__Vtemp_hf0a01500__0),264);
    bufp->fullWData(oldp+283,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+286,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+289,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[2]),66);
    bufp->fullWData(oldp+292,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[3]),66);
    bufp->fullQData(oldp+295,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[0]),64);
    bufp->fullQData(oldp+297,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[1]),64);
    bufp->fullQData(oldp+299,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[2]),64);
    bufp->fullQData(oldp+301,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[3]),64);
    bufp->fullQData(oldp+303,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out),64);
    bufp->fullBit(oldp+305,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit));
    bufp->fullCData(oldp+306,((0x7fU & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)),7);
    bufp->fullCData(oldp+307,((vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                               >> 0x19U)),7);
    bufp->fullIData(oldp+308,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI),32);
    bufp->fullIData(oldp+309,((0xfffff000U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)),32);
    bufp->fullIData(oldp+310,((((- (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+311,((((- (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
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
    bufp->fullIData(oldp+312,((((- (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
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
    bufp->fullSData(oldp+313,(((0x1000U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                           >> 0x13U)) 
                               | ((0x800U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                             << 4U)) 
                                  | ((0x7e0U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                >> 0x14U)) 
                                     | (0x1eU & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                 >> 7U)))))),13);
    bufp->fullSData(oldp+314,((vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+315,(((0x100000U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                             >> 0xbU)) 
                               | ((0xff000U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r) 
                                  | ((0x800U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                >> 9U)) 
                                     | (0x7feU & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                  >> 0x14U)))))),21);
    bufp->fullSData(oldp+316,(((0xfe0U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                           >> 7U)))),12);
    bufp->fullCData(oldp+317,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out),2);
    bufp->fullBit(oldp+318,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit));
    bufp->fullCData(oldp+319,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__lut_out),2);
    bufp->fullBit(oldp+320,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__ysyx_23060077_riscv_mux_id_lsu_opt__DOT__i1__DOT__hit));
    bufp->fullSData(oldp+321,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out),16);
    bufp->fullWData(oldp+322,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT____Vcellinp__riscv_mux_id_reg__lut),253);
    bufp->fullIData(oldp+330,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[0]),23);
    bufp->fullIData(oldp+331,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[1]),23);
    bufp->fullIData(oldp+332,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[2]),23);
    bufp->fullIData(oldp+333,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[3]),23);
    bufp->fullIData(oldp+334,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[4]),23);
    bufp->fullIData(oldp+335,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[5]),23);
    bufp->fullIData(oldp+336,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[6]),23);
    bufp->fullIData(oldp+337,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[7]),23);
    bufp->fullIData(oldp+338,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[8]),23);
    bufp->fullIData(oldp+339,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[9]),23);
    bufp->fullIData(oldp+340,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[10]),23);
    bufp->fullSData(oldp+341,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[0]),16);
    bufp->fullSData(oldp+342,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[1]),16);
    bufp->fullSData(oldp+343,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[2]),16);
    bufp->fullSData(oldp+344,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[3]),16);
    bufp->fullSData(oldp+345,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[4]),16);
    bufp->fullSData(oldp+346,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[5]),16);
    bufp->fullSData(oldp+347,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[6]),16);
    bufp->fullSData(oldp+348,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[7]),16);
    bufp->fullSData(oldp+349,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[8]),16);
    bufp->fullSData(oldp+350,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[9]),16);
    bufp->fullSData(oldp+351,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[10]),16);
    bufp->fullSData(oldp+352,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out),16);
    bufp->fullBit(oldp+353,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit));
    bufp->fullIData(oldp+354,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__mask),32);
    bufp->fullCData(oldp+355,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key),5);
    __Vtemp_h6a9af6f0__0[0U] = (IData)((0xd00000000ULL 
                                        | (((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____VdfgTmp_h56d2889a__0)) 
                                            << 0x25U) 
                                           | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____VdfgTmp_h56d28e90__0)))));
    __Vtemp_h6a9af6f0__0[1U] = (IData)(((0xd00000000ULL 
                                         | (((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____VdfgTmp_h56d2889a__0)) 
                                             << 0x25U) 
                                            | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____VdfgTmp_h56d28e90__0)))) 
                                        >> 0x20U));
    __Vtemp_h6a9af6f0__0[2U] = (0x180U | (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata 
                                          << 0xaU));
    __Vtemp_h6a9af6f0__0[3U] = (0x2800U | ((0xffff8000U 
                                            & (((IData)(vlSelf->__VdfgTmp_hf63fc74a__0) 
                                                << 0x1fU) 
                                               | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____VdfgTmp_h56d28e90__0) 
                                                  << 0xfU))) 
                                           | (vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__rdata 
                                              >> 0x16U)));
    __Vtemp_h6a9af6f0__0[4U] = (0x48000U | ((0xfff00000U 
                                             & ((vlSelf->__VdfgTmp_hf7f8a1b3__0 
                                                 << 0x1cU) 
                                                | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____VdfgTmp_h56d2889a__0) 
                                                   << 0x14U))) 
                                            | (0x7fffU 
                                               & ((0x7fffU 
                                                   & ((IData)(vlSelf->__VdfgTmp_hf63fc74a__0) 
                                                      >> 1U)) 
                                                  | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____VdfgTmp_h56d28e90__0) 
                                                     >> 0x11U)))));
    __Vtemp_h6a9af6f0__0[5U] = (0x800000U | (0xfffffU 
                                             & ((0xfffffU 
                                                 & (vlSelf->__VdfgTmp_hf7f8a1b3__0 
                                                    >> 4U)) 
                                                | ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____VdfgTmp_h56d2889a__0) 
                                                   >> 0xcU))));
    bufp->fullWData(oldp+356,(__Vtemp_h6a9af6f0__0),185);
    bufp->fullQData(oldp+362,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[0]),37);
    bufp->fullQData(oldp+364,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[1]),37);
    bufp->fullQData(oldp+366,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[2]),37);
    bufp->fullQData(oldp+368,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[3]),37);
    bufp->fullQData(oldp+370,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[4]),37);
    bufp->fullIData(oldp+372,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[0]),32);
    bufp->fullIData(oldp+373,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[1]),32);
    bufp->fullIData(oldp+374,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[2]),32);
    bufp->fullIData(oldp+375,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[3]),32);
    bufp->fullIData(oldp+376,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[4]),32);
    bufp->fullIData(oldp+377,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out),32);
    bufp->fullBit(oldp+378,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit));
    bufp->fullIData(oldp+379,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__lut_out),32);
    bufp->fullBit(oldp+380,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__hit));
    bufp->fullIData(oldp+381,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[0]),32);
    bufp->fullIData(oldp+382,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[1]),32);
    bufp->fullIData(oldp+383,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[2]),32);
    bufp->fullIData(oldp+384,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[3]),32);
    bufp->fullIData(oldp+385,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[4]),32);
    bufp->fullIData(oldp+386,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[5]),32);
    bufp->fullIData(oldp+387,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[6]),32);
    bufp->fullIData(oldp+388,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[7]),32);
    bufp->fullIData(oldp+389,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[8]),32);
    bufp->fullIData(oldp+390,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[9]),32);
    bufp->fullIData(oldp+391,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[10]),32);
    bufp->fullIData(oldp+392,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[11]),32);
    bufp->fullIData(oldp+393,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[12]),32);
    bufp->fullIData(oldp+394,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[13]),32);
    bufp->fullIData(oldp+395,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[14]),32);
    bufp->fullIData(oldp+396,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[15]),32);
    bufp->fullIData(oldp+397,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[16]),32);
    bufp->fullIData(oldp+398,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[17]),32);
    bufp->fullIData(oldp+399,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[18]),32);
    bufp->fullIData(oldp+400,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[19]),32);
    bufp->fullIData(oldp+401,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[20]),32);
    bufp->fullIData(oldp+402,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[21]),32);
    bufp->fullIData(oldp+403,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[22]),32);
    bufp->fullIData(oldp+404,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[23]),32);
    bufp->fullIData(oldp+405,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[24]),32);
    bufp->fullIData(oldp+406,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[25]),32);
    bufp->fullIData(oldp+407,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[26]),32);
    bufp->fullIData(oldp+408,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[27]),32);
    bufp->fullIData(oldp+409,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[28]),32);
    bufp->fullIData(oldp+410,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[29]),32);
    bufp->fullIData(oldp+411,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[30]),32);
    bufp->fullIData(oldp+412,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[31]),32);
    bufp->fullBit(oldp+413,(vlSelf->ysyx_23060077_top__DOT____Vcellinp__riscv_wbu_u0__idu_rd_wen));
    bufp->fullBit(oldp+414,(vlSelf->clk));
    bufp->fullBit(oldp+415,(vlSelf->rst_n));
    bufp->fullIData(oldp+416,(((0U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
                                ? vlSelf->ysyx_23060077_top__DOT__exu_result
                                : ((3U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
                                    ? ((IData)(vlSelf->rst_n)
                                        ? ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_en)
                                            ? vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                                           [(0xfffU 
                                             & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)]
                                            : 0U) : 0U)
                                    : vlSelf->ysyx_23060077_top__DOT__lsu_result))),32);
    bufp->fullIData(oldp+417,(((IData)(vlSelf->rst_n)
                                ? ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_en)
                                    ? vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                                   [(0xfffU & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)]
                                    : 0U) : 0U)),32);
    bufp->fullIData(oldp+418,(vlSelf->ysyx_23060077_top__DOT__ifu_inst_t),32);
    bufp->fullIData(oldp+419,(vlSelf->ysyx_23060077_top__DOT__exu_result_t),32);
    bufp->fullCData(oldp+420,(0U),2);
    bufp->fullCData(oldp+421,(1U),2);
    bufp->fullCData(oldp+422,(2U),2);
    bufp->fullCData(oldp+423,(0U),3);
    bufp->fullCData(oldp+424,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__axi_b_resp_i),3);
    bufp->fullCData(oldp+425,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_lite__DOT__axi_r_resp_i),3);
    bufp->fullCData(oldp+426,(1U),3);
    bufp->fullCData(oldp+427,(2U),3);
    bufp->fullCData(oldp+428,(3U),3);
    bufp->fullCData(oldp+429,(4U),3);
    bufp->fullCData(oldp+430,(3U),2);
    bufp->fullBit(oldp+431,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__carry_flag));
    bufp->fullBit(oldp+432,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__signed_flag));
    bufp->fullIData(oldp+433,(0xbU),32);
    bufp->fullIData(oldp+434,(4U),32);
    bufp->fullIData(oldp+435,(0x20U),32);
    bufp->fullIData(oldp+436,(0U),32);
    bufp->fullIData(oldp+437,(1U),32);
    bufp->fullIData(oldp+438,(0x24U),32);
    bufp->fullIData(oldp+439,(0xbU),32);
    bufp->fullIData(oldp+440,(6U),32);
    bufp->fullIData(oldp+441,(6U),32);
    bufp->fullIData(oldp+442,(2U),32);
    bufp->fullIData(oldp+443,(0x40U),32);
    bufp->fullQData(oldp+444,(0ULL),64);
    bufp->fullIData(oldp+446,(0x42U),32);
    bufp->fullIData(oldp+447,(4U),32);
    bufp->fullCData(oldp+448,(0U),5);
    bufp->fullIData(oldp+449,(0U),32);
    bufp->fullIData(oldp+450,(0xdU),32);
    bufp->fullIData(oldp+451,(0xcU),32);
    bufp->fullIData(oldp+452,(0x15U),32);
    bufp->fullIData(oldp+453,(7U),32);
    __Vtemp_h8c90ec6d__0[0U] = 0x6b307bcdU;
    __Vtemp_h8c90ec6d__0[1U] = 0x6301a8d2U;
    __Vtemp_h8c90ec6d__0[2U] = 0x74bfbecfU;
    __Vtemp_h8c90ec6d__0[3U] = 3U;
    bufp->fullWData(oldp+454,(__Vtemp_h8c90ec6d__0),99);
    bufp->fullIData(oldp+458,(9U),32);
    bufp->fullIData(oldp+459,(3U),32);
    bufp->fullIData(oldp+460,(0x351dcfU),27);
    bufp->fullIData(oldp+461,(3U),32);
    bufp->fullIData(oldp+462,(0x10U),32);
    bufp->fullSData(oldp+463,(0U),16);
    bufp->fullIData(oldp+464,(0x17U),32);
    bufp->fullIData(oldp+465,(5U),32);
    bufp->fullIData(oldp+466,(0x25U),32);
    bufp->fullIData(oldp+467,(5U),32);
    __Vtemp_heb927861__0[0U] = 4U;
    __Vtemp_heb927861__0[1U] = 0x52U;
    __Vtemp_heb927861__0[2U] = 0x620U;
    __Vtemp_heb927861__0[3U] = 0x4000U;
    bufp->fullWData(oldp+468,(__Vtemp_heb927861__0),111);
}
