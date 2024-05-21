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
    tracep->declBit(c+150,"clk", false,-1);
    tracep->declBit(c+151,"rst_n", false,-1);
    tracep->pushNamePrefix("ysyx_23060077_top ");
    tracep->declBit(c+150,"clk", false,-1);
    tracep->declBit(c+151,"rst_n", false,-1);
    tracep->declBus(c+2,"ifu_pc_lst", false,-1, 31,0);
    tracep->declBus(c+3,"ifu_pc", false,-1, 31,0);
    tracep->declBus(c+4,"ifu_inst", false,-1, 31,0);
    tracep->declBus(c+154,"ifu_inst_t", false,-1, 31,0);
    tracep->declBit(c+5,"ifu_stall", false,-1);
    tracep->declBus(c+6,"jump_pc", false,-1, 31,0);
    tracep->declBit(c+7,"jump_pc_valid", false,-1);
    tracep->declBit(c+8,"stall", false,-1);
    tracep->declBit(c+5,"ifu_r_valid_o", false,-1);
    tracep->declBus(c+9,"ifu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+10,"ifu_r_ready_i", false,-1);
    tracep->declBus(c+11,"ifu_r_data_i", false,-1, 31,0);
    tracep->declBit(c+12,"idu_branch", false,-1);
    tracep->declBit(c+13,"idu_jal", false,-1);
    tracep->declBit(c+14,"idu_jalr", false,-1);
    tracep->declBus(c+15,"idu_rd", false,-1, 4,0);
    tracep->declBit(c+16,"idu_rd_wen", false,-1);
    tracep->declBus(c+17,"idu_rs1", false,-1, 4,0);
    tracep->declBus(c+18,"idu_rs2", false,-1, 4,0);
    tracep->declBus(c+19,"idu_imm", false,-1, 31,0);
    tracep->declBus(c+20,"idu_alu_opt", false,-1, 3,0);
    tracep->declBus(c+21,"idu_src_sel", false,-1, 1,0);
    tracep->declBus(c+22,"idu_lsu_opt", false,-1, 1,0);
    tracep->declBus(c+23,"idu_funct3", false,-1, 2,0);
    tracep->declBus(c+24,"src1", false,-1, 31,0);
    tracep->declBus(c+25,"src2", false,-1, 31,0);
    tracep->declBus(c+152,"rd_data", false,-1, 31,0);
    tracep->declBit(c+26,"zero_flag", false,-1);
    tracep->declBus(c+27,"exu_result", false,-1, 31,0);
    tracep->declBus(c+155,"exu_result_t", false,-1, 31,0);
    tracep->declBus(c+28,"lsu_result", false,-1, 31,0);
    tracep->declBit(c+8,"mem_stall", false,-1);
    tracep->declBit(c+29,"lsu_rd_wen", false,-1);
    tracep->declBit(c+30,"lsu_r_valid_o", false,-1);
    tracep->declBus(c+31,"lsu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+32,"lsu_r_ready_i", false,-1);
    tracep->declBus(c+33,"lsu_r_data_i", false,-1, 31,0);
    tracep->declBit(c+34,"lsu_w_valid_o", false,-1);
    tracep->declBus(c+31,"lsu_w_addr_o", false,-1, 31,0);
    tracep->declBit(c+35,"lsu_w_ready_i", false,-1);
    tracep->declBus(c+25,"lsu_w_data_o", false,-1, 31,0);
    tracep->declBus(c+36,"lsu_w_strb_o", false,-1, 2,0);
    tracep->declBit(c+37,"wbu_rd_wen", false,-1);
    tracep->declBit(c+38,"csr_ecall", false,-1);
    tracep->declBit(c+39,"csr_mret", false,-1);
    tracep->declBus(c+40,"wr_csr_data", false,-1, 31,0);
    tracep->declBus(c+153,"rd_csr_data", false,-1, 31,0);
    tracep->declBus(c+41,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+42,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+43,"csr_mpec", false,-1, 31,0);
    tracep->declBit(c+44,"diff_pc", false,-1);
    tracep->pushNamePrefix("riscv_axi_arbiter_u0 ");
    tracep->declBit(c+150,"aclk", false,-1);
    tracep->declBit(c+151,"areset_n", false,-1);
    tracep->declBit(c+5,"ifu_r_valid_i", false,-1);
    tracep->declBus(c+9,"ifu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+10,"ifu_r_ready_o", false,-1);
    tracep->declBus(c+11,"ifu_r_data_o", false,-1, 31,0);
    tracep->declBit(c+30,"lsu_r_valid_i", false,-1);
    tracep->declBus(c+31,"lsu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+32,"lsu_r_ready_o", false,-1);
    tracep->declBus(c+33,"lsu_r_data_o", false,-1, 31,0);
    tracep->declBit(c+34,"lsu_w_valid_i", false,-1);
    tracep->declBus(c+31,"lsu_w_addr_i", false,-1, 31,0);
    tracep->declBit(c+35,"lsu_w_ready_o", false,-1);
    tracep->declBus(c+25,"lsu_w_data_i", false,-1, 31,0);
    tracep->declBus(c+36,"lsu_w_strb_i", false,-1, 2,0);
    tracep->declBit(c+45,"cpu_r_valid_o", false,-1);
    tracep->declBus(c+46,"cpu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+47,"cpu_r_ready_i", false,-1);
    tracep->declBus(c+48,"cpu_r_data_i", false,-1, 31,0);
    tracep->declBit(c+49,"cpu_w_valid_o", false,-1);
    tracep->declBus(c+50,"cpu_w_addr_o", false,-1, 31,0);
    tracep->declBit(c+51,"cpu_w_ready_i", false,-1);
    tracep->declBus(c+52,"cpu_w_data_o", false,-1, 31,0);
    tracep->declBus(c+53,"cpu_w_strb_o", false,-1, 2,0);
    tracep->declBus(c+54,"arbiter_state", false,-1, 1,0);
    tracep->declBus(c+156,"ARB_IDLE", false,-1, 1,0);
    tracep->declBus(c+157,"ARB_IFU", false,-1, 1,0);
    tracep->declBus(c+158,"ARB_LSU", false,-1, 1,0);
    tracep->declBit(c+55,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+56,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+159,"axi_aw_port_o", false,-1, 2,0);
    tracep->declBus(c+50,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBit(c+57,"axi_w_ready_i", false,-1);
    tracep->declBit(c+58,"axi_w_valid_o", false,-1);
    tracep->declBus(c+53,"axi_w_strb_o", false,-1, 2,0);
    tracep->declBus(c+52,"axi_w_data_o", false,-1, 31,0);
    tracep->declBus(c+160,"axi_b_resp_i", false,-1, 2,0);
    tracep->declBit(c+51,"axi_b_valid_i", false,-1);
    tracep->declBit(c+59,"axi_b_ready_o", false,-1);
    tracep->declBit(c+60,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+61,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+159,"axi_ar_port_o", false,-1, 2,0);
    tracep->declBus(c+46,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBit(c+62,"axi_r_ready_o", false,-1);
    tracep->declBit(c+47,"axi_r_valid_i", false,-1);
    tracep->declBus(c+161,"axi_r_resp_i", false,-1, 2,0);
    tracep->declBus(c+48,"axi_r_data_i", false,-1, 31,0);
    tracep->pushNamePrefix("u_ysyx_23060077_riscv_axi ");
    tracep->declBit(c+150,"aclk", false,-1);
    tracep->declBit(c+151,"areset_n", false,-1);
    tracep->declBit(c+45,"cpu_r_valid_i", false,-1);
    tracep->declBus(c+46,"cpu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+47,"cpu_r_ready_o", false,-1);
    tracep->declBus(c+48,"cpu_r_data_o", false,-1, 31,0);
    tracep->declBit(c+49,"cpu_w_valid_i", false,-1);
    tracep->declBus(c+50,"cpu_w_addr_i", false,-1, 31,0);
    tracep->declBit(c+51,"cpu_w_ready_o", false,-1);
    tracep->declBus(c+52,"cpu_w_data_i", false,-1, 31,0);
    tracep->declBus(c+53,"cpu_w_strb_i", false,-1, 2,0);
    tracep->declBit(c+55,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+56,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+159,"axi_aw_port_o", false,-1, 2,0);
    tracep->declBus(c+50,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBit(c+57,"axi_w_ready_i", false,-1);
    tracep->declBit(c+58,"axi_w_valid_o", false,-1);
    tracep->declBus(c+53,"axi_w_strb_o", false,-1, 2,0);
    tracep->declBus(c+52,"axi_w_data_o", false,-1, 31,0);
    tracep->declBus(c+160,"axi_b_resp_i", false,-1, 2,0);
    tracep->declBit(c+51,"axi_b_valid_i", false,-1);
    tracep->declBit(c+59,"axi_b_ready_o", false,-1);
    tracep->declBit(c+60,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+61,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+159,"axi_ar_port_o", false,-1, 2,0);
    tracep->declBus(c+46,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBit(c+62,"axi_r_ready_o", false,-1);
    tracep->declBit(c+47,"axi_r_valid_i", false,-1);
    tracep->declBus(c+161,"axi_r_resp_i", false,-1, 2,0);
    tracep->declBus(c+48,"axi_r_data_i", false,-1, 31,0);
    tracep->declBus(c+63,"lfsr_out", false,-1, 5,0);
    tracep->declBus(c+64,"r_delay_cnt", false,-1, 5,0);
    tracep->declBus(c+65,"w_delay_cnt", false,-1, 5,0);
    tracep->declBus(c+66,"axi_w_state", false,-1, 2,0);
    tracep->declBus(c+67,"axi_w_state_nxt", false,-1, 2,0);
    tracep->declBus(c+159,"AXI_W_IDLE", false,-1, 2,0);
    tracep->declBus(c+162,"AXI_W_ADDR", false,-1, 2,0);
    tracep->declBus(c+163,"AXI_W_DATA", false,-1, 2,0);
    tracep->declBus(c+164,"AXI_W_RESP", false,-1, 2,0);
    tracep->declBus(c+165,"AXI_W_DELAY", false,-1, 2,0);
    tracep->declBus(c+68,"axi_r_state", false,-1, 1,0);
    tracep->declBus(c+69,"axi_r_state_nxt", false,-1, 1,0);
    tracep->declBus(c+156,"AXI_R_IDLE", false,-1, 1,0);
    tracep->declBus(c+157,"AXI_R_ADDR", false,-1, 1,0);
    tracep->declBus(c+158,"AXI_R_DATA", false,-1, 1,0);
    tracep->declBus(c+166,"AXI_R_DELAY", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_23060077_riscv_axi_xbar ");
    tracep->declBit(c+150,"aclk", false,-1);
    tracep->declBit(c+151,"areset_n", false,-1);
    tracep->declBit(c+55,"axi_aw_ready_o", false,-1);
    tracep->declBit(c+56,"axi_aw_valid_i", false,-1);
    tracep->declBus(c+159,"axi_aw_port_i", false,-1, 2,0);
    tracep->declBus(c+50,"axi_aw_addr_i", false,-1, 31,0);
    tracep->declBit(c+57,"axi_w_ready_o", false,-1);
    tracep->declBit(c+58,"axi_w_valid_i", false,-1);
    tracep->declBus(c+53,"axi_w_strb_i", false,-1, 2,0);
    tracep->declBus(c+52,"axi_w_data_i", false,-1, 31,0);
    tracep->declBus(c+160,"axi_b_resp_o", false,-1, 2,0);
    tracep->declBit(c+51,"axi_b_valid_o", false,-1);
    tracep->declBit(c+59,"axi_b_ready_i", false,-1);
    tracep->declBit(c+60,"axi_ar_ready_o", false,-1);
    tracep->declBit(c+61,"axi_ar_valid_i", false,-1);
    tracep->declBus(c+159,"axi_ar_port_i", false,-1, 2,0);
    tracep->declBus(c+46,"axi_ar_addr_i", false,-1, 31,0);
    tracep->declBit(c+62,"axi_r_ready_i", false,-1);
    tracep->declBit(c+47,"axi_r_valid_o", false,-1);
    tracep->declBus(c+161,"axi_r_resp_o", false,-1, 2,0);
    tracep->declBus(c+48,"axi_r_data_o", false,-1, 31,0);
    tracep->pushNamePrefix("u_ysyx_23060077_riscv_axi_sram ");
    tracep->declBit(c+150,"aclk", false,-1);
    tracep->declBit(c+151,"areset_n", false,-1);
    tracep->declBit(c+55,"axi_sram_aw_ready_o", false,-1);
    tracep->declBit(c+56,"axi_sram_aw_valid_i", false,-1);
    tracep->declBus(c+159,"axi_sram_aw_port_i", false,-1, 2,0);
    tracep->declBus(c+50,"axi_sram_aw_addr_i", false,-1, 31,0);
    tracep->declBit(c+57,"axi_sram_w_ready_o", false,-1);
    tracep->declBit(c+58,"axi_sram_w_valid_i", false,-1);
    tracep->declBus(c+53,"axi_sram_w_strb_i", false,-1, 2,0);
    tracep->declBus(c+52,"axi_sram_w_data_i", false,-1, 31,0);
    tracep->declBus(c+160,"axi_sram_b_resp_o", false,-1, 2,0);
    tracep->declBit(c+51,"axi_sram_b_valid_o", false,-1);
    tracep->declBit(c+59,"axi_sram_b_ready_i", false,-1);
    tracep->declBit(c+60,"axi_sram_ar_ready_o", false,-1);
    tracep->declBit(c+61,"axi_sram_ar_valid_i", false,-1);
    tracep->declBus(c+159,"axi_sram_ar_port_i", false,-1, 2,0);
    tracep->declBus(c+46,"axi_sram_ar_addr_i", false,-1, 31,0);
    tracep->declBit(c+62,"axi_sram_r_ready_i", false,-1);
    tracep->declBit(c+47,"axi_sram_r_valid_o", false,-1);
    tracep->declBus(c+161,"axi_sram_r_resp_o", false,-1, 2,0);
    tracep->declBus(c+48,"axi_sram_r_data_o", false,-1, 31,0);
    tracep->declBus(c+70,"lfsr_out", false,-1, 5,0);
    tracep->declBus(c+71,"r_delay_cnt", false,-1, 5,0);
    tracep->declBus(c+72,"w_delay_cnt", false,-1, 5,0);
    tracep->declBus(c+73,"sram_w_state", false,-1, 2,0);
    tracep->declBus(c+159,"SRAM_W_IDLE", false,-1, 2,0);
    tracep->declBus(c+162,"SRAM_W_ADDR", false,-1, 2,0);
    tracep->declBus(c+163,"SRAM_W_DATA", false,-1, 2,0);
    tracep->declBus(c+164,"SRAM_W_RESP", false,-1, 2,0);
    tracep->declBus(c+74,"w_addr", false,-1, 31,0);
    tracep->declBus(c+75,"w_data", false,-1, 31,0);
    tracep->declBus(c+76,"w_mask", false,-1, 31,0);
    tracep->declBit(c+55,"axi_sram_aw_ready_o_r", false,-1);
    tracep->declBit(c+57,"axi_sram_w_ready_o_r", false,-1);
    tracep->declBit(c+51,"axi_sram_b_valid_o_r", false,-1);
    tracep->declBus(c+77,"sram_r_state", false,-1, 1,0);
    tracep->declBus(c+156,"SRAM_R_IDLE", false,-1, 1,0);
    tracep->declBus(c+157,"SRAM_R_ADDR", false,-1, 1,0);
    tracep->declBus(c+158,"SRAM_R_DATA", false,-1, 1,0);
    tracep->declBus(c+78,"r_addr", false,-1, 31,0);
    tracep->declBus(c+79,"r_data", false,-1, 31,0);
    tracep->declBit(c+60,"axi_sram_ar_ready_o_r", false,-1);
    tracep->declBit(c+47,"axi_sram_r_valid_o_r", false,-1);
    tracep->declBus(c+48,"axi_sram_r_data_o_r", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("riscv_csr_u0 ");
    tracep->declBit(c+150,"clk", false,-1);
    tracep->declBit(c+151,"rst_n", false,-1);
    tracep->declBus(c+80,"wr_addr", false,-1, 11,0);
    tracep->declBus(c+40,"wr_data", false,-1, 31,0);
    tracep->declBus(c+80,"rd_addr", false,-1, 11,0);
    tracep->declBus(c+153,"rd_data", false,-1, 31,0);
    tracep->declBit(c+38,"i_csr_ecall", false,-1);
    tracep->declBit(c+39,"i_csr_mret", false,-1);
    tracep->declBus(c+4,"i_inst", false,-1, 31,0);
    tracep->declBus(c+3,"i_pc", false,-1, 31,0);
    tracep->declBus(c+41,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+42,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+43,"o_mpec", false,-1, 31,0);
    tracep->declBus(c+153,"rd_data_r", false,-1, 31,0);
    tracep->declBit(c+81,"wr_en", false,-1);
    tracep->declBit(c+81,"rd_en", false,-1);
    tracep->declBus(c+82,"wr_data_r", false,-1, 31,0);
    tracep->declBus(c+83,"temp", false,-1, 31,0);
    tracep->declBus(c+41,"o_mstatus_r", false,-1, 31,0);
    tracep->declBus(c+84,"mepc_inst_r", false,-1, 31,0);
    tracep->declBus(c+85,"mcause", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("riscv_exu_u0 ");
    tracep->declBus(c+3,"pc", false,-1, 31,0);
    tracep->declBus(c+24,"src1", false,-1, 31,0);
    tracep->declBus(c+25,"src2", false,-1, 31,0);
    tracep->declBus(c+19,"imm", false,-1, 31,0);
    tracep->declBit(c+12,"branch", false,-1);
    tracep->declBus(c+20,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+21,"src_sel", false,-1, 1,0);
    tracep->declBus(c+23,"funct3", false,-1, 2,0);
    tracep->declBit(c+26,"zero_flag", false,-1);
    tracep->declBus(c+27,"exu_result", false,-1, 31,0);
    tracep->declBus(c+86,"alu_a_data", false,-1, 31,0);
    tracep->declBus(c+87,"alu_b_data", false,-1, 31,0);
    tracep->declBus(c+88,"alu_out_data", false,-1, 31,0);
    tracep->declBit(c+167,"carry_flag", false,-1);
    tracep->declBit(c+168,"signed_flag", false,-1);
    tracep->declBus(c+27,"exu_result_r", false,-1, 31,0);
    tracep->pushNamePrefix("riscv_ex_alu ");
    tracep->declBus(c+20,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+86,"alu_a_data", false,-1, 31,0);
    tracep->declBus(c+87,"alu_b_data", false,-1, 31,0);
    tracep->declBus(c+88,"alu_out_data", false,-1, 31,0);
    tracep->declBit(c+89,"sub_flag", false,-1);
    tracep->declQuad(c+90,"alu_a_t", false,-1, 32,0);
    tracep->declQuad(c+92,"alu_b_t", false,-1, 32,0);
    tracep->declQuad(c+94,"cin", false,-1, 32,0);
    tracep->declQuad(c+96,"add_out", false,-1, 32,0);
    tracep->declBit(c+98,"top_A", false,-1);
    tracep->declBit(c+99,"top_B", false,-1);
    tracep->declBit(c+100,"top_C", false,-1);
    tracep->declBit(c+101,"sign_flag", false,-1);
    tracep->declBit(c+102,"over_flag", false,-1);
    tracep->declBit(c+103,"carry_flag", false,-1);
    tracep->declBus(c+104,"sra_result", false,-1, 31,0);
    tracep->declBus(c+88,"alu_out_data_r", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("riscv_idu_u0 ");
    tracep->declBus(c+4,"inst", false,-1, 31,0);
    tracep->declBit(c+12,"branch", false,-1);
    tracep->declBit(c+13,"jal", false,-1);
    tracep->declBit(c+14,"jalr", false,-1);
    tracep->declBus(c+15,"rd", false,-1, 4,0);
    tracep->declBit(c+16,"rd_wen", false,-1);
    tracep->declBus(c+17,"rs1", false,-1, 4,0);
    tracep->declBus(c+18,"rs2", false,-1, 4,0);
    tracep->declBus(c+19,"imm", false,-1, 31,0);
    tracep->declBus(c+20,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+21,"src_sel", false,-1, 1,0);
    tracep->declBus(c+22,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+23,"funct3", false,-1, 2,0);
    tracep->declBus(c+105,"opcode", false,-1, 6,0);
    tracep->declBus(c+106,"funct7", false,-1, 6,0);
    tracep->declBus(c+169,"reg_zero", false,-1, 4,0);
    tracep->pushNamePrefix("riscv_id_imm_idu ");
    tracep->declBus(c+4,"inst", false,-1, 31,0);
    tracep->declBus(c+19,"imm", false,-1, 31,0);
    tracep->declBus(c+19,"imm_r", false,-1, 31,0);
    tracep->declBus(c+107,"imm_typeI", false,-1, 31,0);
    tracep->declBus(c+108,"imm_typeU", false,-1, 31,0);
    tracep->declBus(c+109,"imm_typeS", false,-1, 31,0);
    tracep->declBus(c+110,"imm_typeB", false,-1, 31,0);
    tracep->declBus(c+111,"imm_typeJ", false,-1, 31,0);
    tracep->declBus(c+170,"imm_typeR", false,-1, 31,0);
    tracep->declBus(c+170,"imm_type_NONE", false,-1, 31,0);
    tracep->pushNamePrefix("riscv_id_imm_ext_typeB ");
    tracep->declBus(c+171,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+112,"imm_in", false,-1, 12,0);
    tracep->declBus(c+110,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("riscv_id_imm_ext_typeI ");
    tracep->declBus(c+172,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+113,"imm_in", false,-1, 11,0);
    tracep->declBus(c+107,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("riscv_id_imm_ext_typeJ ");
    tracep->declBus(c+173,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"imm_in", false,-1, 20,0);
    tracep->declBus(c+111,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("riscv_id_imm_ext_typeS ");
    tracep->declBus(c+172,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+115,"imm_in", false,-1, 11,0);
    tracep->declBus(c+109,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("riscv_id_imm_ext_typeU ");
    tracep->declBus(c+174,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+108,"imm_in", false,-1, 31,0);
    tracep->declBus(c+108,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("riscv_id_opt_idu ");
    tracep->declBus(c+105,"opcode", false,-1, 6,0);
    tracep->declBus(c+23,"funct3", false,-1, 2,0);
    tracep->declBus(c+106,"funct7", false,-1, 6,0);
    tracep->declBus(c+20,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+21,"src_sel", false,-1, 1,0);
    tracep->declBus(c+22,"lsu_opt", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("riscv_ifu_u0 ");
    tracep->declBit(c+150,"clk", false,-1);
    tracep->declBit(c+151,"rst_n", false,-1);
    tracep->declBus(c+6,"jump_pc", false,-1, 31,0);
    tracep->declBit(c+7,"jump_pc_valid", false,-1);
    tracep->declBit(c+8,"stall", false,-1);
    tracep->declBit(c+29,"wbu_stall", false,-1);
    tracep->declBit(c+5,"ifu_r_valid_o", false,-1);
    tracep->declBus(c+9,"ifu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+10,"ifu_r_ready_i", false,-1);
    tracep->declBus(c+11,"ifu_r_data_i", false,-1, 31,0);
    tracep->declBit(c+5,"ifu_stall", false,-1);
    tracep->declBus(c+3,"ifu_pc_o", false,-1, 31,0);
    tracep->declBus(c+4,"ifu_inst_o", false,-1, 31,0);
    tracep->declBus(c+3,"ifu_pc_o_r", false,-1, 31,0);
    tracep->declBus(c+4,"ifu_inst_o_r", false,-1, 31,0);
    tracep->declBus(c+9,"pc", false,-1, 31,0);
    tracep->declBus(c+11,"inst", false,-1, 31,0);
    tracep->declBit(c+5,"cpu_r_valid_i", false,-1);
    tracep->declBit(c+10,"cpu_r_ready_o", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("riscv_lsu_u0 ");
    tracep->declBit(c+150,"clk", false,-1);
    tracep->declBit(c+151,"rst_n", false,-1);
    tracep->declBus(c+24,"src1", false,-1, 31,0);
    tracep->declBus(c+25,"src2", false,-1, 31,0);
    tracep->declBus(c+19,"imm", false,-1, 31,0);
    tracep->declBus(c+22,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+23,"funct3", false,-1, 2,0);
    tracep->declBit(c+5,"ifu_stall", false,-1);
    tracep->declBit(c+30,"lsu_r_valid_o", false,-1);
    tracep->declBus(c+31,"lsu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+32,"lsu_r_ready_i", false,-1);
    tracep->declBus(c+33,"lsu_r_data_i", false,-1, 31,0);
    tracep->declBit(c+34,"lsu_w_valid_o", false,-1);
    tracep->declBus(c+31,"lsu_w_addr_o", false,-1, 31,0);
    tracep->declBit(c+35,"lsu_w_ready_i", false,-1);
    tracep->declBus(c+25,"lsu_w_data_o", false,-1, 31,0);
    tracep->declBus(c+36,"lsu_w_strb_o", false,-1, 2,0);
    tracep->declBit(c+8,"mem_stall", false,-1);
    tracep->declBit(c+29,"lsu_rd_wen", false,-1);
    tracep->declBus(c+28,"lsu_result", false,-1, 31,0);
    tracep->declBus(c+31,"raddr", false,-1, 31,0);
    tracep->declBus(c+33,"rdata", false,-1, 31,0);
    tracep->declBus(c+31,"waddr", false,-1, 31,0);
    tracep->declBus(c+25,"wdata", false,-1, 31,0);
    tracep->declBus(c+116,"wmask", false,-1, 31,0);
    tracep->declBus(c+116,"mask", false,-1, 31,0);
    tracep->declBus(c+28,"lsu_result_r", false,-1, 31,0);
    tracep->declBit(c+30,"ren", false,-1);
    tracep->declBit(c+34,"wen", false,-1);
    tracep->declBit(c+32,"lsu_rd_wen_r", false,-1);
    tracep->declBit(c+35,"lsu_rd_wen_w", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("riscv_regfile_u0 ");
    tracep->declBit(c+150,"clk", false,-1);
    tracep->declBit(c+151,"rst_n", false,-1);
    tracep->declBus(c+17,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+24,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+18,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+25,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+37,"rd_en", false,-1);
    tracep->declBus(c+15,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+152,"rd_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+117+i*1,"gpr", true,(i+0), 31,0);
    }
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("riscv_wbu_u0 ");
    tracep->declBus(c+22,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+27,"exu_result", false,-1, 31,0);
    tracep->declBus(c+28,"lsu_result", false,-1, 31,0);
    tracep->declBus(c+153,"csr_result", false,-1, 31,0);
    tracep->declBit(c+29,"lsu_rd_wen", false,-1);
    tracep->declBit(c+149,"idu_rd_wen", false,-1);
    tracep->declBit(c+37,"wbu_rd_wen", false,-1);
    tracep->declBus(c+152,"wbu_result", false,-1, 31,0);
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
    // Body
    bufp->fullIData(oldp+1,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelf->ysyx_23060077_top__DOT__ifu_pc_lst),32);
    bufp->fullIData(oldp+3,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r),32);
    bufp->fullIData(oldp+4,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r),32);
    bufp->fullBit(oldp+5,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i));
    bufp->fullIData(oldp+6,(((IData)(vlSelf->ysyx_23060077_top__DOT__csr_mret)
                              ? vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                             [0x341U] : ((IData)(vlSelf->ysyx_23060077_top__DOT__csr_ecall)
                                          ? vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                                         [0x305U] : 
                                         ((IData)(vlSelf->ysyx_23060077_top__DOT____VdfgTmp_h15124160__0)
                                           ? (vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r 
                                              + vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r)
                                           : ((0x67U 
                                               == (0x7fU 
                                                   & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r))
                                               ? vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__raddr
                                               : 0U))))),32);
    bufp->fullBit(oldp+7,(((IData)(vlSelf->ysyx_23060077_top__DOT__csr_mret) 
                           | ((IData)(vlSelf->ysyx_23060077_top__DOT__csr_ecall) 
                              | ((IData)(vlSelf->ysyx_23060077_top__DOT____VdfgTmp_h15124160__0) 
                                 | (0x67U == (0x7fU 
                                              & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)))))));
    bufp->fullBit(oldp+8,(vlSelf->ysyx_23060077_top__DOT__stall));
    bufp->fullIData(oldp+9,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc),32);
    bufp->fullBit(oldp+10,(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_ready_o));
    bufp->fullIData(oldp+11,(((1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state))
                               ? vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_r_data_o_r
                               : 0U)),32);
    bufp->fullBit(oldp+12,((0x63U == (0x7fU & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r))));
    bufp->fullBit(oldp+13,((0x6fU == (0x7fU & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r))));
    bufp->fullBit(oldp+14,((0x67U == (0x7fU & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r))));
    bufp->fullCData(oldp+15,(vlSelf->ysyx_23060077_top__DOT__idu_rd),5);
    bufp->fullBit(oldp+16,(vlSelf->ysyx_23060077_top__DOT__idu_rd_wen));
    bufp->fullCData(oldp+17,(vlSelf->ysyx_23060077_top__DOT__idu_rs1),5);
    bufp->fullCData(oldp+18,(vlSelf->ysyx_23060077_top__DOT__idu_rs2),5);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r),32);
    bufp->fullCData(oldp+20,(vlSelf->ysyx_23060077_top__DOT__idu_alu_opt),4);
    bufp->fullCData(oldp+21,(vlSelf->ysyx_23060077_top__DOT__idu_src_sel),2);
    bufp->fullCData(oldp+22,(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt),2);
    bufp->fullCData(oldp+23,((7U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                    >> 0xcU))),3);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_23060077_top__DOT__src1),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wdata),32);
    bufp->fullBit(oldp+26,((1U & (~ (IData)((0U != vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__exu_result_r))))));
    bufp->fullIData(oldp+27,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__exu_result_r),32);
    bufp->fullIData(oldp+28,(((2U & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
                               ? 0U : ((1U & (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
                                        ? ((0x4000U 
                                            & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                            ? ((0x2000U 
                                                & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                                ? 0U
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                                    ? (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____VdfgTmp_h56d28e90__0)
                                                    : (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT____VdfgTmp_h56d2889a__0)))
                                            : ((0x2000U 
                                                & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                                ? (
                                                   (0x1000U 
                                                    & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state))
                                                     ? vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_r_data_o_r
                                                     : 0U))
                                                : (
                                                   (0x1000U 
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
    bufp->fullBit(oldp+29,(vlSelf->ysyx_23060077_top__DOT__lsu_rd_wen));
    bufp->fullBit(oldp+30,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__ren));
    bufp->fullIData(oldp+31,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__raddr),32);
    bufp->fullBit(oldp+32,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__lsu_rd_wen_r));
    bufp->fullIData(oldp+33,(((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state))
                               ? vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_r_data_o_r
                               : 0U)),32);
    bufp->fullBit(oldp+34,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wen));
    bufp->fullBit(oldp+35,(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__lsu_rd_wen_w));
    bufp->fullCData(oldp+36,(((0x10U == (((IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt) 
                                          << 3U) | 
                                         (7U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                >> 0xcU))))
                               ? 1U : ((0x11U == (((IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt) 
                                                   << 3U) 
                                                  | (7U 
                                                     & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                        >> 0xcU))))
                                        ? 2U : ((0x12U 
                                                 == 
                                                 (((IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt) 
                                                   << 3U) 
                                                  | (7U 
                                                     & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                        >> 0xcU))))
                                                 ? 4U
                                                 : 0U)))),3);
    bufp->fullBit(oldp+37,(((0U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
                             ? (IData)(vlSelf->ysyx_23060077_top__DOT____Vcellinp__riscv_wbu_u0__idu_rd_wen)
                             : ((3U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
                                 ? (IData)(vlSelf->ysyx_23060077_top__DOT____Vcellinp__riscv_wbu_u0__idu_rd_wen)
                                 : (IData)(vlSelf->ysyx_23060077_top__DOT__lsu_rd_wen)))));
    bufp->fullBit(oldp+38,(vlSelf->ysyx_23060077_top__DOT__csr_ecall));
    bufp->fullBit(oldp+39,(vlSelf->ysyx_23060077_top__DOT__csr_mret));
    bufp->fullIData(oldp+40,(vlSelf->ysyx_23060077_top__DOT__wr_csr_data),32);
    bufp->fullIData(oldp+41,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                             [0x300U]),32);
    bufp->fullIData(oldp+42,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                             [0x305U]),32);
    bufp->fullIData(oldp+43,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                             [0x341U]),32);
    bufp->fullBit(oldp+44,((vlSelf->ysyx_23060077_top__DOT__ifu_pc_lst 
                            != vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_pc_o_r)));
    bufp->fullBit(oldp+45,((1U & ((1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state))
                                   ? (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__cpu_r_valid_i)
                                   : ((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state))
                                       ? (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__ren)
                                       : 0U)))));
    bufp->fullIData(oldp+46,(((1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state))
                               ? vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__pc
                               : vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_w_addr_o)),32);
    bufp->fullBit(oldp+47,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_r_valid_o_r));
    bufp->fullIData(oldp+48,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_r_data_o_r),32);
    bufp->fullBit(oldp+49,(((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state)) 
                            & (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wen))));
    bufp->fullIData(oldp+50,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__cpu_w_addr_o),32);
    bufp->fullBit(oldp+51,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_b_valid_o_r));
    bufp->fullIData(oldp+52,(((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state))
                               ? vlSelf->ysyx_23060077_top__DOT__riscv_lsu_u0__DOT__wdata
                               : 0U)),32);
    bufp->fullCData(oldp+53,(((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state))
                               ? ((0x10U == (((IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt) 
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
                                             ? 4U : 0U)))
                               : 0U)),3);
    bufp->fullCData(oldp+54,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__arbiter_state),2);
    bufp->fullBit(oldp+55,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_aw_ready_o_r));
    bufp->fullBit(oldp+56,((1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state))));
    bufp->fullBit(oldp+57,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_w_ready_o_r));
    bufp->fullBit(oldp+58,((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state))));
    bufp->fullBit(oldp+59,((3U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state))));
    bufp->fullBit(oldp+60,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__axi_sram_ar_ready_o_r));
    bufp->fullBit(oldp+61,((1U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state))));
    bufp->fullBit(oldp+62,((2U == (IData)(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state))));
    bufp->fullCData(oldp+63,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__lfsr_out),6);
    bufp->fullCData(oldp+64,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__r_delay_cnt),6);
    bufp->fullCData(oldp+65,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__w_delay_cnt),6);
    bufp->fullCData(oldp+66,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state),3);
    bufp->fullCData(oldp+67,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_w_state_nxt),3);
    bufp->fullCData(oldp+68,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state),2);
    bufp->fullCData(oldp+69,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi__DOT__axi_r_state_nxt),2);
    bufp->fullCData(oldp+70,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__lfsr_out),6);
    bufp->fullCData(oldp+71,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__r_delay_cnt),6);
    bufp->fullCData(oldp+72,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_delay_cnt),6);
    bufp->fullCData(oldp+73,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_w_state),3);
    bufp->fullIData(oldp+74,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_addr),32);
    bufp->fullIData(oldp+75,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_data),32);
    bufp->fullIData(oldp+76,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__w_mask),32);
    bufp->fullCData(oldp+77,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__sram_r_state),2);
    bufp->fullIData(oldp+78,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__r_addr),32);
    bufp->fullIData(oldp+79,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__u_ysyx_23060077_riscv_axi_xbar__DOT__u_ysyx_23060077_riscv_axi_sram__DOT__r_data),32);
    bufp->fullSData(oldp+80,((0xfffU & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)),12);
    bufp->fullBit(oldp+81,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_en));
    bufp->fullIData(oldp+82,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_data_r),32);
    bufp->fullIData(oldp+83,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__temp),32);
    bufp->fullIData(oldp+84,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__mepc_inst_r),32);
    bufp->fullIData(oldp+85,(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                             [0x342U]),32);
    bufp->fullIData(oldp+86,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_a_data),32);
    bufp->fullIData(oldp+87,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_b_data),32);
    bufp->fullIData(oldp+88,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_out_data_r),32);
    bufp->fullBit(oldp+89,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag));
    bufp->fullQData(oldp+90,((((QData)((IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_a_data 
                                                >> 0x1fU))) 
                               << 0x20U) | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_a_data)))),33);
    bufp->fullQData(oldp+92,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t),33);
    bufp->fullQData(oldp+94,((QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag))),33);
    bufp->fullQData(oldp+96,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out),33);
    bufp->fullBit(oldp+98,((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_a_data 
                            >> 0x1fU)));
    bufp->fullBit(oldp+99,((1U & (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t 
                                          >> 0x20U)))));
    bufp->fullBit(oldp+100,((1U & (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+101,((1U & (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+102,((1U & VL_REDXOR_64((0x180000000ULL 
                                                & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out)))));
    bufp->fullBit(oldp+103,((1U & ((((vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_a_data 
                                      >> 0x1fU) | ((IData)(
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
    bufp->fullIData(oldp+104,((IData)(((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_a_data 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_a_data))) 
                                       >> (0x3fU & vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__alu_b_data)))),32);
    bufp->fullCData(oldp+105,((0x7fU & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)),7);
    bufp->fullCData(oldp+106,((vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                               >> 0x19U)),7);
    bufp->fullIData(oldp+107,(vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI),32);
    bufp->fullIData(oldp+108,((0xfffff000U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r)),32);
    bufp->fullIData(oldp+109,((((- (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+110,((((- (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
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
    bufp->fullIData(oldp+111,((((- (IData)((vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
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
    bufp->fullSData(oldp+112,(((0x1000U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                           >> 0x13U)) 
                               | ((0x800U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                             << 4U)) 
                                  | ((0x7e0U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                >> 0x14U)) 
                                     | (0x1eU & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                 >> 7U)))))),13);
    bufp->fullSData(oldp+113,((vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+114,(((0x100000U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                             >> 0xbU)) 
                               | ((0xff000U & vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r) 
                                  | ((0x800U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                >> 9U)) 
                                     | (0x7feU & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                  >> 0x14U)))))),21);
    bufp->fullSData(oldp+115,(((0xfe0U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                           >> 7U)))),12);
    bufp->fullIData(oldp+116,(((0x10U == (((IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt) 
                                           << 3U) | 
                                          (7U & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                 >> 0xcU))))
                                ? 1U : ((0x11U == (
                                                   ((IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt) 
                                                    << 3U) 
                                                   | (7U 
                                                      & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                         >> 0xcU))))
                                         ? 2U : ((0x12U 
                                                  == 
                                                  (((IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt) 
                                                    << 3U) 
                                                   | (7U 
                                                      & (vlSelf->ysyx_23060077_top__DOT__riscv_ifu_u0__DOT__ifu_inst_o_r 
                                                         >> 0xcU))))
                                                  ? 4U
                                                  : 0U)))),32);
    bufp->fullIData(oldp+117,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[0]),32);
    bufp->fullIData(oldp+118,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[1]),32);
    bufp->fullIData(oldp+119,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[2]),32);
    bufp->fullIData(oldp+120,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[3]),32);
    bufp->fullIData(oldp+121,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[4]),32);
    bufp->fullIData(oldp+122,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[5]),32);
    bufp->fullIData(oldp+123,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[6]),32);
    bufp->fullIData(oldp+124,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[7]),32);
    bufp->fullIData(oldp+125,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[8]),32);
    bufp->fullIData(oldp+126,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[9]),32);
    bufp->fullIData(oldp+127,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[10]),32);
    bufp->fullIData(oldp+128,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[11]),32);
    bufp->fullIData(oldp+129,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[12]),32);
    bufp->fullIData(oldp+130,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[13]),32);
    bufp->fullIData(oldp+131,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[14]),32);
    bufp->fullIData(oldp+132,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[15]),32);
    bufp->fullIData(oldp+133,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[16]),32);
    bufp->fullIData(oldp+134,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[17]),32);
    bufp->fullIData(oldp+135,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[18]),32);
    bufp->fullIData(oldp+136,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[19]),32);
    bufp->fullIData(oldp+137,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[20]),32);
    bufp->fullIData(oldp+138,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[21]),32);
    bufp->fullIData(oldp+139,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[22]),32);
    bufp->fullIData(oldp+140,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[23]),32);
    bufp->fullIData(oldp+141,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[24]),32);
    bufp->fullIData(oldp+142,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[25]),32);
    bufp->fullIData(oldp+143,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[26]),32);
    bufp->fullIData(oldp+144,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[27]),32);
    bufp->fullIData(oldp+145,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[28]),32);
    bufp->fullIData(oldp+146,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[29]),32);
    bufp->fullIData(oldp+147,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[30]),32);
    bufp->fullIData(oldp+148,(vlSelf->ysyx_23060077_top__DOT__riscv_regfile_u0__DOT__gpr[31]),32);
    bufp->fullBit(oldp+149,(vlSelf->ysyx_23060077_top__DOT____Vcellinp__riscv_wbu_u0__idu_rd_wen));
    bufp->fullBit(oldp+150,(vlSelf->clk));
    bufp->fullBit(oldp+151,(vlSelf->rst_n));
    bufp->fullIData(oldp+152,(((0U == (IData)(vlSelf->ysyx_23060077_top__DOT__idu_lsu_opt))
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
                                                 ? 
                                                ((0x4000U 
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
    bufp->fullIData(oldp+153,(((IData)(vlSelf->rst_n)
                                ? ((IData)(vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__wr_en)
                                    ? vlSelf->ysyx_23060077_top__DOT__riscv_csr_u0__DOT__csr_reg
                                   [(0xfffU & vlSelf->ysyx_23060077_top__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_r)]
                                    : 0U) : 0U)),32);
    bufp->fullIData(oldp+154,(vlSelf->ysyx_23060077_top__DOT__ifu_inst_t),32);
    bufp->fullIData(oldp+155,(vlSelf->ysyx_23060077_top__DOT__exu_result_t),32);
    bufp->fullCData(oldp+156,(0U),2);
    bufp->fullCData(oldp+157,(1U),2);
    bufp->fullCData(oldp+158,(2U),2);
    bufp->fullCData(oldp+159,(0U),3);
    bufp->fullCData(oldp+160,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_b_resp_i),3);
    bufp->fullCData(oldp+161,(vlSelf->ysyx_23060077_top__DOT__riscv_axi_arbiter_u0__DOT__axi_r_resp_i),3);
    bufp->fullCData(oldp+162,(1U),3);
    bufp->fullCData(oldp+163,(2U),3);
    bufp->fullCData(oldp+164,(3U),3);
    bufp->fullCData(oldp+165,(4U),3);
    bufp->fullCData(oldp+166,(3U),2);
    bufp->fullBit(oldp+167,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__carry_flag));
    bufp->fullBit(oldp+168,(vlSelf->ysyx_23060077_top__DOT__riscv_exu_u0__DOT__signed_flag));
    bufp->fullCData(oldp+169,(0U),5);
    bufp->fullIData(oldp+170,(0U),32);
    bufp->fullIData(oldp+171,(0xdU),32);
    bufp->fullIData(oldp+172,(0xcU),32);
    bufp->fullIData(oldp+173,(0x15U),32);
    bufp->fullIData(oldp+174,(0x20U),32);
}
