// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VysyxSoCFull__Syms.h"


VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBus(c+992,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+993,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+994,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+995,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+996,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+997,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+998,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+999,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1000,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1001,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1002,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1003,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1004,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1005,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1006,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1007,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1008,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1009,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1010,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1011,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBus(c+992,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+993,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+994,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+995,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+996,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+997,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+998,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+999,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1000,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1001,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1002,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1003,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1004,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1005,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1006,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1007,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1008,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1009,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1010,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1011,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+757,"spi_sck", false,-1);
    tracep->declBus(c+758,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+11,"spi_mosi", false,-1);
    tracep->declBit(c+1012,"spi_miso", false,-1);
    tracep->declBit(c+1010,"uart_rx", false,-1);
    tracep->declBit(c+1011,"uart_tx", false,-1);
    tracep->declBit(c+884,"psram_sck", false,-1);
    tracep->declBit(c+885,"psram_ce_n", false,-1);
    tracep->declBus(c+1013,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1014,"sdram_clk", false,-1);
    tracep->declBit(c+12,"sdram_cke", false,-1);
    tracep->declBit(c+13,"sdram_cs", false,-1);
    tracep->declBit(c+14,"sdram_ras", false,-1);
    tracep->declBit(c+15,"sdram_cas", false,-1);
    tracep->declBit(c+16,"sdram_we", false,-1);
    tracep->declBus(c+17,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+18,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+19,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+20,"sdram_dq", false,-1, 15,0);
    tracep->declBus(c+992,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+993,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+994,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+995,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+996,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+997,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+998,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+999,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1000,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1001,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1002,"ps2_clk", false,-1);
    tracep->declBit(c+1003,"ps2_data", false,-1);
    tracep->declBus(c+1004,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1005,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1006,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1007,"vga_hsync", false,-1);
    tracep->declBit(c+1008,"vga_vsync", false,-1);
    tracep->declBit(c+1009,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBus(c+851,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+171,"in_psel", false,-1);
    tracep->declBit(c+172,"in_penable", false,-1);
    tracep->declBus(c+1042,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+173,"in_pwrite", false,-1);
    tracep->declBus(c+174,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+175,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+886,"in_pready", false,-1);
    tracep->declBus(c+887,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+852,"in_pslverr", false,-1);
    tracep->declBus(c+851,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+171,"out_psel", false,-1);
    tracep->declBit(c+172,"out_penable", false,-1);
    tracep->declBus(c+1042,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+173,"out_pwrite", false,-1);
    tracep->declBus(c+174,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+175,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+886,"out_pready", false,-1);
    tracep->declBus(c+887,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+852,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+171,"auto_in_psel", false,-1);
    tracep->declBit(c+172,"auto_in_penable", false,-1);
    tracep->declBit(c+173,"auto_in_pwrite", false,-1);
    tracep->declBus(c+851,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1042,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+174,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+175,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+886,"auto_in_pready", false,-1);
    tracep->declBit(c+852,"auto_in_pslverr", false,-1);
    tracep->declBus(c+887,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+697,"auto_out_6_psel", false,-1);
    tracep->declBit(c+698,"auto_out_6_penable", false,-1);
    tracep->declBit(c+173,"auto_out_6_pwrite", false,-1);
    tracep->declBus(c+851,"auto_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1042,"auto_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+174,"auto_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+175,"auto_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+759,"auto_out_6_pready", false,-1);
    tracep->declBit(c+1043,"auto_out_6_pslverr", false,-1);
    tracep->declBus(c+21,"auto_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+699,"auto_out_5_psel", false,-1);
    tracep->declBit(c+700,"auto_out_5_penable", false,-1);
    tracep->declBit(c+173,"auto_out_5_pwrite", false,-1);
    tracep->declBus(c+853,"auto_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1042,"auto_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+174,"auto_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+175,"auto_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1044,"auto_out_5_pready", false,-1);
    tracep->declBit(c+1045,"auto_out_5_pslverr", false,-1);
    tracep->declBus(c+1046,"auto_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+701,"auto_out_4_psel", false,-1);
    tracep->declBit(c+702,"auto_out_4_penable", false,-1);
    tracep->declBit(c+173,"auto_out_4_pwrite", false,-1);
    tracep->declBus(c+854,"auto_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1042,"auto_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+174,"auto_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+175,"auto_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1047,"auto_out_4_pready", false,-1);
    tracep->declBit(c+1048,"auto_out_4_pslverr", false,-1);
    tracep->declBus(c+1049,"auto_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+703,"auto_out_3_psel", false,-1);
    tracep->declBit(c+704,"auto_out_3_penable", false,-1);
    tracep->declBit(c+173,"auto_out_3_pwrite", false,-1);
    tracep->declBus(c+854,"auto_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1042,"auto_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+174,"auto_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+175,"auto_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1050,"auto_out_3_pready", false,-1);
    tracep->declBit(c+1051,"auto_out_3_pslverr", false,-1);
    tracep->declBus(c+1052,"auto_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+855,"auto_out_2_psel", false,-1);
    tracep->declBit(c+705,"auto_out_2_penable", false,-1);
    tracep->declBit(c+173,"auto_out_2_pwrite", false,-1);
    tracep->declBus(c+851,"auto_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1042,"auto_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+174,"auto_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+175,"auto_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1015,"auto_out_2_pready", false,-1);
    tracep->declBit(c+1043,"auto_out_2_pslverr", false,-1);
    tracep->declBus(c+176,"auto_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+856,"auto_out_1_psel", false,-1);
    tracep->declBit(c+857,"auto_out_1_penable", false,-1);
    tracep->declBit(c+173,"auto_out_1_pwrite", false,-1);
    tracep->declBus(c+854,"auto_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1042,"auto_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+174,"auto_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+175,"auto_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+858,"auto_out_1_pready", false,-1);
    tracep->declBit(c+1043,"auto_out_1_pslverr", false,-1);
    tracep->declBus(c+1016,"auto_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+859,"auto_out_0_psel", false,-1);
    tracep->declBit(c+706,"auto_out_0_penable", false,-1);
    tracep->declBit(c+173,"auto_out_0_pwrite", false,-1);
    tracep->declBus(c+853,"auto_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1042,"auto_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+174,"auto_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+175,"auto_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1017,"auto_out_0_pready", false,-1);
    tracep->declBit(c+1043,"auto_out_0_pslverr", false,-1);
    tracep->declBus(c+1018,"auto_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+860,"sel_0", false,-1);
    tracep->declBit(c+861,"sel_1", false,-1);
    tracep->declBit(c+862,"sel_2", false,-1);
    tracep->declBit(c+863,"sel_3", false,-1);
    tracep->declBit(c+864,"sel_4", false,-1);
    tracep->declBit(c+865,"sel_5", false,-1);
    tracep->declBit(c+866,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+177,"auto_in_awready", false,-1);
    tracep->declBit(c+178,"auto_in_awvalid", false,-1);
    tracep->declBus(c+179,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+180,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+181,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+177,"auto_in_wready", false,-1);
    tracep->declBit(c+182,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+183,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+185,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+888,"auto_in_bready", false,-1);
    tracep->declBit(c+889,"auto_in_bvalid", false,-1);
    tracep->declBus(c+186,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+707,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+187,"auto_in_arready", false,-1);
    tracep->declBit(c+188,"auto_in_arvalid", false,-1);
    tracep->declBus(c+189,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+190,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+191,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+890,"auto_in_rready", false,-1);
    tracep->declBit(c+891,"auto_in_rvalid", false,-1);
    tracep->declBus(c+192,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+708,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+707,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+171,"auto_out_psel", false,-1);
    tracep->declBit(c+172,"auto_out_penable", false,-1);
    tracep->declBit(c+173,"auto_out_pwrite", false,-1);
    tracep->declBus(c+851,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+174,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+175,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+886,"auto_out_pready", false,-1);
    tracep->declBit(c+852,"auto_out_pslverr", false,-1);
    tracep->declBus(c+887,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+172,"nodeOut_penable", false,-1);
    tracep->declBus(c+193,"state", false,-1, 1,0);
    tracep->declBit(c+187,"accept_read", false,-1);
    tracep->declBit(c+177,"accept_write", false,-1);
    tracep->declBit(c+194,"is_write_r", false,-1);
    tracep->declBit(c+173,"is_write", false,-1);
    tracep->declBus(c+192,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+186,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+195,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+196,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+197,"awaddr_reg", false,-1, 31,0);
    tracep->declQuad(c+198,"wdata_reg_r", false,-1, 63,0);
    tracep->declQuad(c+200,"wdata_reg", false,-1, 63,0);
    tracep->declBus(c+202,"wstrb_reg_r", false,-1, 7,0);
    tracep->declBus(c+203,"wstrb_reg", false,-1, 7,0);
    tracep->declBus(c+867,"resp", false,-1, 1,0);
    tracep->declBus(c+204,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+707,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+891,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+205,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+889,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+206,"auto_in_awready", false,-1);
    tracep->declBit(c+207,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1053,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+208,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1054,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+209,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1055,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+210,"auto_in_wready", false,-1);
    tracep->declBit(c+211,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+212,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+214,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+215,"auto_in_wlast", false,-1);
    tracep->declBit(c+216,"auto_in_bready", false,-1);
    tracep->declBit(c+892,"auto_in_bvalid", false,-1);
    tracep->declBus(c+893,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+710,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+217,"auto_in_arready", false,-1);
    tracep->declBit(c+218,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1053,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+219,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1054,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+220,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1055,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+221,"auto_in_rready", false,-1);
    tracep->declBit(c+894,"auto_in_rvalid", false,-1);
    tracep->declBus(c+895,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+711,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+1019,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+896,"auto_in_rlast", false,-1);
    tracep->declBit(c+897,"auto_out_awready", false,-1);
    tracep->declBit(c+222,"auto_out_awvalid", false,-1);
    tracep->declBus(c+179,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+180,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+181,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+223,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+898,"auto_out_wready", false,-1);
    tracep->declBit(c+224,"auto_out_wvalid", false,-1);
    tracep->declQuad(c+183,"auto_out_wdata", false,-1, 63,0);
    tracep->declBus(c+185,"auto_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+225,"auto_out_wlast", false,-1);
    tracep->declBit(c+899,"auto_out_bready", false,-1);
    tracep->declBit(c+900,"auto_out_bvalid", false,-1);
    tracep->declBus(c+893,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+901,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+902,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+903,"auto_out_arready", false,-1);
    tracep->declBit(c+226,"auto_out_arvalid", false,-1);
    tracep->declBus(c+189,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+190,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+191,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+227,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+221,"auto_out_rready", false,-1);
    tracep->declBit(c+894,"auto_out_rvalid", false,-1);
    tracep->declBus(c+895,"auto_out_rid", false,-1, 3,0);
    tracep->declQuad(c+711,"auto_out_rdata", false,-1, 63,0);
    tracep->declBus(c+1019,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+713,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+904,"auto_out_rlast", false,-1);
    tracep->declBit(c+224,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+228,"w_idle", false,-1);
    tracep->declBit(c+905,"in_awready", false,-1);
    tracep->declBit(c+229,"busy", false,-1);
    tracep->declBus(c+230,"r_addr", false,-1, 31,0);
    tracep->declBus(c+231,"r_len", false,-1, 7,0);
    tracep->declBus(c+232,"len", false,-1, 7,0);
    tracep->declBus(c+233,"addr", false,-1, 31,0);
    tracep->declBit(c+234,"busy_1", false,-1);
    tracep->declBus(c+235,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+236,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+237,"len_1", false,-1, 7,0);
    tracep->declBus(c+238,"addr_1", false,-1, 31,0);
    tracep->declBit(c+239,"wbeats_latched", false,-1);
    tracep->declBit(c+222,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+240,"wbeats_valid", false,-1);
    tracep->declBus(c+241,"w_counter", false,-1, 8,0);
    tracep->declBus(c+242,"w_todo", false,-1, 8,0);
    tracep->declBit(c+225,"w_last", false,-1);
    tracep->declBit(c+899,"nodeOut_bready", false,-1);
    tracep->declBus(c+243,"error_0", false,-1, 1,0);
    tracep->declBus(c+244,"error_1", false,-1, 1,0);
    tracep->declBus(c+245,"error_2", false,-1, 1,0);
    tracep->declBus(c+246,"error_3", false,-1, 1,0);
    tracep->declBus(c+247,"error_4", false,-1, 1,0);
    tracep->declBus(c+248,"error_5", false,-1, 1,0);
    tracep->declBus(c+249,"error_6", false,-1, 1,0);
    tracep->declBus(c+250,"error_7", false,-1, 1,0);
    tracep->declBus(c+251,"error_8", false,-1, 1,0);
    tracep->declBus(c+252,"error_9", false,-1, 1,0);
    tracep->declBus(c+253,"error_10", false,-1, 1,0);
    tracep->declBus(c+254,"error_11", false,-1, 1,0);
    tracep->declBus(c+255,"error_12", false,-1, 1,0);
    tracep->declBus(c+256,"error_13", false,-1, 1,0);
    tracep->declBus(c+257,"error_14", false,-1, 1,0);
    tracep->declBus(c+258,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+217,"io_enq_ready", false,-1);
    tracep->declBit(c+218,"io_enq_valid", false,-1);
    tracep->declBus(c+1053,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+219,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1054,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+220,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1055,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+906,"io_deq_ready", false,-1);
    tracep->declBit(c+226,"io_deq_valid", false,-1);
    tracep->declBus(c+189,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+259,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+260,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+191,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+261,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+262,"ram", false,-1, 48,0);
    tracep->declBit(c+264,"full", false,-1);
    tracep->declBit(c+226,"io_deq_valid_0", false,-1);
    tracep->declBit(c+907,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+206,"io_enq_ready", false,-1);
    tracep->declBit(c+207,"io_enq_valid", false,-1);
    tracep->declBus(c+1053,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+208,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1054,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+209,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1055,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+908,"io_deq_ready", false,-1);
    tracep->declBit(c+265,"io_deq_valid", false,-1);
    tracep->declBus(c+179,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+266,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+267,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+181,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+268,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+269,"ram", false,-1, 48,0);
    tracep->declBit(c+271,"full", false,-1);
    tracep->declBit(c+265,"io_deq_valid_0", false,-1);
    tracep->declBit(c+909,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+210,"io_enq_ready", false,-1);
    tracep->declBit(c+211,"io_enq_valid", false,-1);
    tracep->declQuad(c+212,"io_enq_bits_data", false,-1, 63,0);
    tracep->declBus(c+214,"io_enq_bits_strb", false,-1, 7,0);
    tracep->declBit(c+215,"io_enq_bits_last", false,-1);
    tracep->declBit(c+910,"io_deq_ready", false,-1);
    tracep->declBit(c+272,"io_deq_valid", false,-1);
    tracep->declQuad(c+183,"io_deq_bits_data", false,-1, 63,0);
    tracep->declBus(c+185,"io_deq_bits_strb", false,-1, 7,0);
    tracep->declBit(c+273,"io_deq_bits_last", false,-1);
    tracep->declArray(c+274,"ram", false,-1, 72,0);
    tracep->declBit(c+277,"full", false,-1);
    tracep->declBit(c+272,"io_deq_valid_0", false,-1);
    tracep->declBit(c+911,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("unnamedblk7 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4ram ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+912,"auto_in_awready", false,-1);
    tracep->declBit(c+278,"auto_in_awvalid", false,-1);
    tracep->declBus(c+179,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+279,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+714,"auto_in_wready", false,-1);
    tracep->declBit(c+280,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+183,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+185,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+913,"auto_in_bready", false,-1);
    tracep->declBit(c+281,"auto_in_bvalid", false,-1);
    tracep->declBus(c+282,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+283,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+914,"auto_in_arready", false,-1);
    tracep->declBit(c+284,"auto_in_arvalid", false,-1);
    tracep->declBus(c+189,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+285,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+915,"auto_in_rready", false,-1);
    tracep->declBit(c+286,"auto_in_rvalid", false,-1);
    tracep->declBus(c+287,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+288,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+290,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+914,"nodeIn_arready", false,-1);
    tracep->declBit(c+912,"nodeIn_awready", false,-1);
    tracep->declBit(c+291,"w_sel0", false,-1);
    tracep->declBit(c+281,"w_full", false,-1);
    tracep->declBus(c+282,"w_id", false,-1, 3,0);
    tracep->declBit(c+292,"r_sel1", false,-1);
    tracep->declBit(c+293,"w_sel1", false,-1);
    tracep->declBit(c+286,"r_full", false,-1);
    tracep->declBus(c+287,"r_id", false,-1, 3,0);
    tracep->declBit(c+916,"ren", false,-1);
    tracep->declBit(c+294,"rdata_REG", false,-1);
    tracep->declBus(c+295,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+296,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+297,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+298,"rdata_r3", false,-1, 7,0);
    tracep->declBus(c+299,"rdata_r4", false,-1, 7,0);
    tracep->declBus(c+300,"rdata_r5", false,-1, 7,0);
    tracep->declBus(c+301,"rdata_r6", false,-1, 7,0);
    tracep->declBus(c+302,"rdata_r7", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+303,"R0_addr", false,-1, 9,0);
    tracep->declBit(c+916,"R0_en", false,-1);
    tracep->declBit(c+990,"R0_clk", false,-1);
    tracep->declQuad(c+304,"R0_data", false,-1, 63,0);
    tracep->declBus(c+306,"W0_addr", false,-1, 9,0);
    tracep->declBit(c+917,"W0_en", false,-1);
    tracep->declBit(c+990,"W0_clk", false,-1);
    tracep->declQuad(c+183,"W0_data", false,-1, 63,0);
    tracep->declBus(c+185,"W0_mask", false,-1, 7,0);
    tracep->declBit(c+307,"W0_en_t", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+206,"auto_in_awready", false,-1);
    tracep->declBit(c+207,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1053,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+208,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1054,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+209,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1055,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+210,"auto_in_wready", false,-1);
    tracep->declBit(c+211,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+212,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+214,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+215,"auto_in_wlast", false,-1);
    tracep->declBit(c+216,"auto_in_bready", false,-1);
    tracep->declBit(c+892,"auto_in_bvalid", false,-1);
    tracep->declBus(c+893,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+710,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+217,"auto_in_arready", false,-1);
    tracep->declBit(c+218,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1053,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+219,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1054,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+220,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1055,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+221,"auto_in_rready", false,-1);
    tracep->declBit(c+894,"auto_in_rvalid", false,-1);
    tracep->declBus(c+895,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+711,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+1019,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+896,"auto_in_rlast", false,-1);
    tracep->declBit(c+206,"auto_out_awready", false,-1);
    tracep->declBit(c+207,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1053,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+208,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1054,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+209,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1055,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+210,"auto_out_wready", false,-1);
    tracep->declBit(c+211,"auto_out_wvalid", false,-1);
    tracep->declQuad(c+212,"auto_out_wdata", false,-1, 63,0);
    tracep->declBus(c+214,"auto_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+215,"auto_out_wlast", false,-1);
    tracep->declBit(c+216,"auto_out_bready", false,-1);
    tracep->declBit(c+892,"auto_out_bvalid", false,-1);
    tracep->declBus(c+893,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+710,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+217,"auto_out_arready", false,-1);
    tracep->declBit(c+218,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1053,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+219,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1054,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+220,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1055,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+221,"auto_out_rready", false,-1);
    tracep->declBit(c+894,"auto_out_rvalid", false,-1);
    tracep->declBus(c+895,"auto_out_rid", false,-1, 3,0);
    tracep->declQuad(c+711,"auto_out_rdata", false,-1, 63,0);
    tracep->declBus(c+1019,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+896,"auto_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+918,"auto_in_awready", false,-1);
    tracep->declBit(c+308,"auto_in_awvalid", false,-1);
    tracep->declBus(c+179,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+180,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+181,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+898,"auto_in_wready", false,-1);
    tracep->declBit(c+224,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+183,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+185,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+225,"auto_in_wlast", false,-1);
    tracep->declBit(c+899,"auto_in_bready", false,-1);
    tracep->declBit(c+900,"auto_in_bvalid", false,-1);
    tracep->declBus(c+893,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+901,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+919,"auto_in_arready", false,-1);
    tracep->declBit(c+309,"auto_in_arvalid", false,-1);
    tracep->declBus(c+189,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+190,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+191,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+221,"auto_in_rready", false,-1);
    tracep->declBit(c+894,"auto_in_rvalid", false,-1);
    tracep->declBus(c+895,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+711,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+1019,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+904,"auto_in_rlast", false,-1);
    tracep->declBit(c+912,"auto_out_2_awready", false,-1);
    tracep->declBit(c+278,"auto_out_2_awvalid", false,-1);
    tracep->declBus(c+179,"auto_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+279,"auto_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+714,"auto_out_2_wready", false,-1);
    tracep->declBit(c+280,"auto_out_2_wvalid", false,-1);
    tracep->declQuad(c+183,"auto_out_2_wdata", false,-1, 63,0);
    tracep->declBus(c+185,"auto_out_2_wstrb", false,-1, 7,0);
    tracep->declBit(c+913,"auto_out_2_bready", false,-1);
    tracep->declBit(c+281,"auto_out_2_bvalid", false,-1);
    tracep->declBus(c+282,"auto_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+283,"auto_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+914,"auto_out_2_arready", false,-1);
    tracep->declBit(c+284,"auto_out_2_arvalid", false,-1);
    tracep->declBus(c+189,"auto_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+285,"auto_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+915,"auto_out_2_rready", false,-1);
    tracep->declBit(c+286,"auto_out_2_rvalid", false,-1);
    tracep->declBus(c+287,"auto_out_2_rid", false,-1, 3,0);
    tracep->declQuad(c+288,"auto_out_2_rdata", false,-1, 63,0);
    tracep->declBus(c+290,"auto_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+310,"auto_out_1_awvalid", false,-1);
    tracep->declBit(c+311,"auto_out_1_wvalid", false,-1);
    tracep->declBit(c+312,"auto_out_1_arready", false,-1);
    tracep->declBit(c+313,"auto_out_1_arvalid", false,-1);
    tracep->declBus(c+189,"auto_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+314,"auto_out_1_araddr", false,-1, 29,0);
    tracep->declBus(c+191,"auto_out_1_arsize", false,-1, 2,0);
    tracep->declBit(c+715,"auto_out_1_rready", false,-1);
    tracep->declBit(c+315,"auto_out_1_rvalid", false,-1);
    tracep->declBus(c+316,"auto_out_1_rid", false,-1, 3,0);
    tracep->declQuad(c+317,"auto_out_1_rdata", false,-1, 63,0);
    tracep->declBit(c+177,"auto_out_0_awready", false,-1);
    tracep->declBit(c+178,"auto_out_0_awvalid", false,-1);
    tracep->declBus(c+179,"auto_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+180,"auto_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+181,"auto_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+177,"auto_out_0_wready", false,-1);
    tracep->declBit(c+182,"auto_out_0_wvalid", false,-1);
    tracep->declQuad(c+183,"auto_out_0_wdata", false,-1, 63,0);
    tracep->declBus(c+185,"auto_out_0_wstrb", false,-1, 7,0);
    tracep->declBit(c+888,"auto_out_0_bready", false,-1);
    tracep->declBit(c+889,"auto_out_0_bvalid", false,-1);
    tracep->declBus(c+186,"auto_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+707,"auto_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+187,"auto_out_0_arready", false,-1);
    tracep->declBit(c+188,"auto_out_0_arvalid", false,-1);
    tracep->declBus(c+189,"auto_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+190,"auto_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+191,"auto_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+890,"auto_out_0_rready", false,-1);
    tracep->declBit(c+891,"auto_out_0_rvalid", false,-1);
    tracep->declBus(c+192,"auto_out_0_rid", false,-1, 3,0);
    tracep->declQuad(c+708,"auto_out_0_rdata", false,-1, 63,0);
    tracep->declBus(c+707,"auto_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+900,"in_0_bvalid", false,-1);
    tracep->declBit(c+894,"in_0_rvalid", false,-1);
    tracep->declBit(c+918,"nodeIn_awready", false,-1);
    tracep->declBit(c+319,"requestARIO_0_0", false,-1);
    tracep->declBit(c+320,"requestARIO_0_1", false,-1);
    tracep->declBit(c+321,"requestARIO_0_2", false,-1);
    tracep->declBit(c+322,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+323,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+324,"requestAWIO_0_2", false,-1);
    tracep->declBit(c+325,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+326,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+327,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+328,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+329,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+330,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+331,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+332,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+333,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+334,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+335,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+336,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+337,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+338,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+339,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+340,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+341,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+342,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+343,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+344,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+345,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+346,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+347,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+348,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+349,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+350,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+351,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+352,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+353,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+354,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+355,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+356,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+357,"latched", false,-1);
    tracep->declBit(c+358,"in_0_awvalid", false,-1);
    tracep->declBit(c+359,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+360,"in_0_wvalid", false,-1);
    tracep->declBit(c+361,"idle_3", false,-1);
    tracep->declBit(c+920,"anyValid", false,-1);
    tracep->declBus(c+921,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+362,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+922,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+923,"prefixOR_1", false,-1);
    tracep->declBit(c+924,"winner_3_1", false,-1);
    tracep->declBit(c+925,"winner_3_2", false,-1);
    tracep->declBit(c+363,"state_3_0", false,-1);
    tracep->declBit(c+364,"state_3_1", false,-1);
    tracep->declBit(c+365,"state_3_2", false,-1);
    tracep->declBit(c+926,"muxState_3_0", false,-1);
    tracep->declBit(c+927,"muxState_3_1", false,-1);
    tracep->declBit(c+928,"muxState_3_2", false,-1);
    tracep->declBit(c+366,"idle_4", false,-1);
    tracep->declBit(c+929,"anyValid_1", false,-1);
    tracep->declBus(c+930,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+367,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+931,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+932,"winner_4_0", false,-1);
    tracep->declBit(c+933,"winner_4_2", false,-1);
    tracep->declBit(c+368,"state_4_0", false,-1);
    tracep->declBit(c+369,"state_4_2", false,-1);
    tracep->declBit(c+934,"muxState_4_0", false,-1);
    tracep->declBit(c+935,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+370,"io_enq_ready", false,-1);
    tracep->declBit(c+359,"io_enq_valid", false,-1);
    tracep->declBus(c+371,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+936,"io_deq_ready", false,-1);
    tracep->declBit(c+372,"io_deq_valid", false,-1);
    tracep->declBus(c+373,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+374,"wrap", false,-1);
    tracep->declBit(c+375,"wrap_1", false,-1);
    tracep->declBit(c+376,"maybe_full", false,-1);
    tracep->declBit(c+377,"ptr_match", false,-1);
    tracep->declBit(c+378,"empty", false,-1);
    tracep->declBit(c+379,"full", false,-1);
    tracep->declBit(c+372,"io_deq_valid_0", false,-1);
    tracep->declBit(c+937,"do_deq", false,-1);
    tracep->declBit(c+938,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+375,"R0_addr", false,-1);
    tracep->declBit(c+1056,"R0_en", false,-1);
    tracep->declBit(c+990,"R0_clk", false,-1);
    tracep->declBus(c+380,"R0_data", false,-1, 2,0);
    tracep->declBit(c+374,"W0_addr", false,-1);
    tracep->declBit(c+938,"W0_en", false,-1);
    tracep->declBit(c+990,"W0_clk", false,-1);
    tracep->declBus(c+371,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+381+i*1,"Memory", true,(i+0), 2,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4yank ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+897,"auto_in_awready", false,-1);
    tracep->declBit(c+222,"auto_in_awvalid", false,-1);
    tracep->declBus(c+179,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+180,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+181,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+223,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+898,"auto_in_wready", false,-1);
    tracep->declBit(c+224,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+183,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+185,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+225,"auto_in_wlast", false,-1);
    tracep->declBit(c+899,"auto_in_bready", false,-1);
    tracep->declBit(c+900,"auto_in_bvalid", false,-1);
    tracep->declBus(c+893,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+901,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+902,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+903,"auto_in_arready", false,-1);
    tracep->declBit(c+226,"auto_in_arvalid", false,-1);
    tracep->declBus(c+189,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+190,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+191,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+227,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+221,"auto_in_rready", false,-1);
    tracep->declBit(c+894,"auto_in_rvalid", false,-1);
    tracep->declBus(c+895,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+711,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+1019,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+713,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+904,"auto_in_rlast", false,-1);
    tracep->declBit(c+918,"auto_out_awready", false,-1);
    tracep->declBit(c+308,"auto_out_awvalid", false,-1);
    tracep->declBus(c+179,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+180,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+181,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+898,"auto_out_wready", false,-1);
    tracep->declBit(c+224,"auto_out_wvalid", false,-1);
    tracep->declQuad(c+183,"auto_out_wdata", false,-1, 63,0);
    tracep->declBus(c+185,"auto_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+225,"auto_out_wlast", false,-1);
    tracep->declBit(c+899,"auto_out_bready", false,-1);
    tracep->declBit(c+900,"auto_out_bvalid", false,-1);
    tracep->declBus(c+893,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+901,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+919,"auto_out_arready", false,-1);
    tracep->declBit(c+309,"auto_out_arvalid", false,-1);
    tracep->declBus(c+189,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+190,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+191,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+221,"auto_out_rready", false,-1);
    tracep->declBit(c+894,"auto_out_rvalid", false,-1);
    tracep->declBus(c+895,"auto_out_rid", false,-1, 3,0);
    tracep->declQuad(c+711,"auto_out_rdata", false,-1, 63,0);
    tracep->declBus(c+1019,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+904,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+383,"io_enq_ready", false,-1);
    tracep->declBit(c+716,"io_enq_valid", false,-1);
    tracep->declBit(c+227,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+939,"io_deq_ready", false,-1);
    tracep->declBit(c+384,"io_deq_valid", false,-1);
    tracep->declBit(c+385,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+385,"ram_real_last", false,-1);
    tracep->declBit(c+384,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+386,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+387,"io_enq_ready", false,-1);
    tracep->declBit(c+717,"io_enq_valid", false,-1);
    tracep->declBit(c+227,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+940,"io_deq_ready", false,-1);
    tracep->declBit(c+388,"io_deq_valid", false,-1);
    tracep->declBit(c+389,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+389,"ram_real_last", false,-1);
    tracep->declBit(c+388,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+390,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+391,"io_enq_ready", false,-1);
    tracep->declBit(c+718,"io_enq_valid", false,-1);
    tracep->declBit(c+227,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+941,"io_deq_ready", false,-1);
    tracep->declBit(c+392,"io_deq_valid", false,-1);
    tracep->declBit(c+393,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+393,"ram_real_last", false,-1);
    tracep->declBit(c+392,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+394,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+395,"io_enq_ready", false,-1);
    tracep->declBit(c+719,"io_enq_valid", false,-1);
    tracep->declBit(c+227,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+942,"io_deq_ready", false,-1);
    tracep->declBit(c+396,"io_deq_valid", false,-1);
    tracep->declBit(c+397,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+397,"ram_real_last", false,-1);
    tracep->declBit(c+396,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+398,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+399,"io_enq_ready", false,-1);
    tracep->declBit(c+720,"io_enq_valid", false,-1);
    tracep->declBit(c+227,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+943,"io_deq_ready", false,-1);
    tracep->declBit(c+400,"io_deq_valid", false,-1);
    tracep->declBit(c+401,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+401,"ram_real_last", false,-1);
    tracep->declBit(c+400,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+402,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+403,"io_enq_ready", false,-1);
    tracep->declBit(c+721,"io_enq_valid", false,-1);
    tracep->declBit(c+227,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+944,"io_deq_ready", false,-1);
    tracep->declBit(c+404,"io_deq_valid", false,-1);
    tracep->declBit(c+405,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+405,"ram_real_last", false,-1);
    tracep->declBit(c+404,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+406,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+407,"io_enq_ready", false,-1);
    tracep->declBit(c+722,"io_enq_valid", false,-1);
    tracep->declBit(c+227,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+945,"io_deq_ready", false,-1);
    tracep->declBit(c+408,"io_deq_valid", false,-1);
    tracep->declBit(c+409,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+409,"ram_real_last", false,-1);
    tracep->declBit(c+408,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+410,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+411,"io_enq_ready", false,-1);
    tracep->declBit(c+723,"io_enq_valid", false,-1);
    tracep->declBit(c+227,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+946,"io_deq_ready", false,-1);
    tracep->declBit(c+412,"io_deq_valid", false,-1);
    tracep->declBit(c+413,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+413,"ram_real_last", false,-1);
    tracep->declBit(c+412,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+414,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+415,"io_enq_ready", false,-1);
    tracep->declBit(c+724,"io_enq_valid", false,-1);
    tracep->declBit(c+223,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+947,"io_deq_ready", false,-1);
    tracep->declBit(c+416,"io_deq_valid", false,-1);
    tracep->declBit(c+417,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+417,"ram_real_last", false,-1);
    tracep->declBit(c+416,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+418,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+419,"io_enq_ready", false,-1);
    tracep->declBit(c+725,"io_enq_valid", false,-1);
    tracep->declBit(c+223,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+948,"io_deq_ready", false,-1);
    tracep->declBit(c+420,"io_deq_valid", false,-1);
    tracep->declBit(c+421,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+421,"ram_real_last", false,-1);
    tracep->declBit(c+420,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+422,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+423,"io_enq_ready", false,-1);
    tracep->declBit(c+726,"io_enq_valid", false,-1);
    tracep->declBit(c+223,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+949,"io_deq_ready", false,-1);
    tracep->declBit(c+424,"io_deq_valid", false,-1);
    tracep->declBit(c+425,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+425,"ram_real_last", false,-1);
    tracep->declBit(c+424,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+426,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+427,"io_enq_ready", false,-1);
    tracep->declBit(c+727,"io_enq_valid", false,-1);
    tracep->declBit(c+223,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+950,"io_deq_ready", false,-1);
    tracep->declBit(c+428,"io_deq_valid", false,-1);
    tracep->declBit(c+429,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+429,"ram_real_last", false,-1);
    tracep->declBit(c+428,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+430,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+431,"io_enq_ready", false,-1);
    tracep->declBit(c+728,"io_enq_valid", false,-1);
    tracep->declBit(c+227,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+951,"io_deq_ready", false,-1);
    tracep->declBit(c+432,"io_deq_valid", false,-1);
    tracep->declBit(c+433,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+433,"ram_real_last", false,-1);
    tracep->declBit(c+432,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+434,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+435,"io_enq_ready", false,-1);
    tracep->declBit(c+729,"io_enq_valid", false,-1);
    tracep->declBit(c+223,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+952,"io_deq_ready", false,-1);
    tracep->declBit(c+436,"io_deq_valid", false,-1);
    tracep->declBit(c+437,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+437,"ram_real_last", false,-1);
    tracep->declBit(c+436,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+438,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+439,"io_enq_ready", false,-1);
    tracep->declBit(c+730,"io_enq_valid", false,-1);
    tracep->declBit(c+223,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+953,"io_deq_ready", false,-1);
    tracep->declBit(c+440,"io_deq_valid", false,-1);
    tracep->declBit(c+441,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+441,"ram_real_last", false,-1);
    tracep->declBit(c+440,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+442,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+443,"io_enq_ready", false,-1);
    tracep->declBit(c+731,"io_enq_valid", false,-1);
    tracep->declBit(c+223,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+954,"io_deq_ready", false,-1);
    tracep->declBit(c+444,"io_deq_valid", false,-1);
    tracep->declBit(c+445,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+445,"ram_real_last", false,-1);
    tracep->declBit(c+444,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+446,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+447,"io_enq_ready", false,-1);
    tracep->declBit(c+732,"io_enq_valid", false,-1);
    tracep->declBit(c+223,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+955,"io_deq_ready", false,-1);
    tracep->declBit(c+448,"io_deq_valid", false,-1);
    tracep->declBit(c+449,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+449,"ram_real_last", false,-1);
    tracep->declBit(c+448,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+450,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+451,"io_enq_ready", false,-1);
    tracep->declBit(c+733,"io_enq_valid", false,-1);
    tracep->declBit(c+223,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+956,"io_deq_ready", false,-1);
    tracep->declBit(c+452,"io_deq_valid", false,-1);
    tracep->declBit(c+453,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+453,"ram_real_last", false,-1);
    tracep->declBit(c+452,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+454,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+455,"io_enq_ready", false,-1);
    tracep->declBit(c+734,"io_enq_valid", false,-1);
    tracep->declBit(c+223,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+957,"io_deq_ready", false,-1);
    tracep->declBit(c+456,"io_deq_valid", false,-1);
    tracep->declBit(c+457,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+457,"ram_real_last", false,-1);
    tracep->declBit(c+456,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+458,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+459,"io_enq_ready", false,-1);
    tracep->declBit(c+735,"io_enq_valid", false,-1);
    tracep->declBit(c+223,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+958,"io_deq_ready", false,-1);
    tracep->declBit(c+460,"io_deq_valid", false,-1);
    tracep->declBit(c+461,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+461,"ram_real_last", false,-1);
    tracep->declBit(c+460,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+462,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+463,"io_enq_ready", false,-1);
    tracep->declBit(c+736,"io_enq_valid", false,-1);
    tracep->declBit(c+223,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+959,"io_deq_ready", false,-1);
    tracep->declBit(c+464,"io_deq_valid", false,-1);
    tracep->declBit(c+465,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+465,"ram_real_last", false,-1);
    tracep->declBit(c+464,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+466,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+467,"io_enq_ready", false,-1);
    tracep->declBit(c+737,"io_enq_valid", false,-1);
    tracep->declBit(c+223,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+960,"io_deq_ready", false,-1);
    tracep->declBit(c+468,"io_deq_valid", false,-1);
    tracep->declBit(c+469,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+469,"ram_real_last", false,-1);
    tracep->declBit(c+468,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+470,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+471,"io_enq_ready", false,-1);
    tracep->declBit(c+738,"io_enq_valid", false,-1);
    tracep->declBit(c+223,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+961,"io_deq_ready", false,-1);
    tracep->declBit(c+472,"io_deq_valid", false,-1);
    tracep->declBit(c+473,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+473,"ram_real_last", false,-1);
    tracep->declBit(c+472,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+474,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+475,"io_enq_ready", false,-1);
    tracep->declBit(c+739,"io_enq_valid", false,-1);
    tracep->declBit(c+227,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+962,"io_deq_ready", false,-1);
    tracep->declBit(c+476,"io_deq_valid", false,-1);
    tracep->declBit(c+477,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+477,"ram_real_last", false,-1);
    tracep->declBit(c+476,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+478,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+479,"io_enq_ready", false,-1);
    tracep->declBit(c+740,"io_enq_valid", false,-1);
    tracep->declBit(c+223,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+963,"io_deq_ready", false,-1);
    tracep->declBit(c+480,"io_deq_valid", false,-1);
    tracep->declBit(c+481,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+481,"ram_real_last", false,-1);
    tracep->declBit(c+480,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+482,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+483,"io_enq_ready", false,-1);
    tracep->declBit(c+741,"io_enq_valid", false,-1);
    tracep->declBit(c+223,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+964,"io_deq_ready", false,-1);
    tracep->declBit(c+484,"io_deq_valid", false,-1);
    tracep->declBit(c+485,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+485,"ram_real_last", false,-1);
    tracep->declBit(c+484,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+486,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+487,"io_enq_ready", false,-1);
    tracep->declBit(c+742,"io_enq_valid", false,-1);
    tracep->declBit(c+227,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+965,"io_deq_ready", false,-1);
    tracep->declBit(c+488,"io_deq_valid", false,-1);
    tracep->declBit(c+489,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+489,"ram_real_last", false,-1);
    tracep->declBit(c+488,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+490,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+491,"io_enq_ready", false,-1);
    tracep->declBit(c+743,"io_enq_valid", false,-1);
    tracep->declBit(c+227,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+966,"io_deq_ready", false,-1);
    tracep->declBit(c+492,"io_deq_valid", false,-1);
    tracep->declBit(c+493,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+493,"ram_real_last", false,-1);
    tracep->declBit(c+492,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+494,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+495,"io_enq_ready", false,-1);
    tracep->declBit(c+744,"io_enq_valid", false,-1);
    tracep->declBit(c+227,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+967,"io_deq_ready", false,-1);
    tracep->declBit(c+496,"io_deq_valid", false,-1);
    tracep->declBit(c+497,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+497,"ram_real_last", false,-1);
    tracep->declBit(c+496,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+498,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+499,"io_enq_ready", false,-1);
    tracep->declBit(c+745,"io_enq_valid", false,-1);
    tracep->declBit(c+227,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+968,"io_deq_ready", false,-1);
    tracep->declBit(c+500,"io_deq_valid", false,-1);
    tracep->declBit(c+501,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+501,"ram_real_last", false,-1);
    tracep->declBit(c+500,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+502,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+503,"io_enq_ready", false,-1);
    tracep->declBit(c+746,"io_enq_valid", false,-1);
    tracep->declBit(c+227,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+969,"io_deq_ready", false,-1);
    tracep->declBit(c+504,"io_deq_valid", false,-1);
    tracep->declBit(c+505,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+505,"ram_real_last", false,-1);
    tracep->declBit(c+504,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+506,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+507,"io_enq_ready", false,-1);
    tracep->declBit(c+747,"io_enq_valid", false,-1);
    tracep->declBit(c+227,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+970,"io_deq_ready", false,-1);
    tracep->declBit(c+508,"io_deq_valid", false,-1);
    tracep->declBit(c+509,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+509,"ram_real_last", false,-1);
    tracep->declBit(c+508,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+510,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+1020,"reset", false,-1);
    tracep->declBit(c+206,"auto_master_out_awready", false,-1);
    tracep->declBit(c+207,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1053,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+208,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1054,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+209,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1055,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+210,"auto_master_out_wready", false,-1);
    tracep->declBit(c+211,"auto_master_out_wvalid", false,-1);
    tracep->declQuad(c+212,"auto_master_out_wdata", false,-1, 63,0);
    tracep->declBus(c+214,"auto_master_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+215,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+216,"auto_master_out_bready", false,-1);
    tracep->declBit(c+892,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+893,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+710,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+217,"auto_master_out_arready", false,-1);
    tracep->declBit(c+218,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1053,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+219,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1054,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+220,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1055,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+221,"auto_master_out_rready", false,-1);
    tracep->declBit(c+894,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+895,"auto_master_out_rid", false,-1, 3,0);
    tracep->declQuad(c+711,"auto_master_out_rdata", false,-1, 63,0);
    tracep->declBus(c+1019,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+896,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+1020,"reset", false,-1);
    tracep->declBit(c+1043,"io_interrupt", false,-1);
    tracep->declBit(c+206,"io_master_awready", false,-1);
    tracep->declBit(c+207,"io_master_awvalid", false,-1);
    tracep->declBus(c+208,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1053,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1054,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+209,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1055,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+210,"io_master_wready", false,-1);
    tracep->declBit(c+211,"io_master_wvalid", false,-1);
    tracep->declQuad(c+212,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+214,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+215,"io_master_wlast", false,-1);
    tracep->declBit(c+216,"io_master_bready", false,-1);
    tracep->declBit(c+892,"io_master_bvalid", false,-1);
    tracep->declBus(c+710,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+893,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+217,"io_master_arready", false,-1);
    tracep->declBit(c+218,"io_master_arvalid", false,-1);
    tracep->declBus(c+219,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1053,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1054,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+220,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1055,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+221,"io_master_rready", false,-1);
    tracep->declBit(c+894,"io_master_rvalid", false,-1);
    tracep->declBus(c+1019,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+711,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+896,"io_master_rlast", false,-1);
    tracep->declBus(c+895,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1057,"io_slave_awready", false,-1);
    tracep->declBit(c+1043,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1058,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1053,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1054,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1059,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1060,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1061,"io_slave_wready", false,-1);
    tracep->declBit(c+1043,"io_slave_wvalid", false,-1);
    tracep->declQuad(c+1062,"io_slave_wdata", false,-1, 63,0);
    tracep->declBus(c+1054,"io_slave_wstrb", false,-1, 7,0);
    tracep->declBit(c+1043,"io_slave_wlast", false,-1);
    tracep->declBit(c+1043,"io_slave_bready", false,-1);
    tracep->declBit(c+1064,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1065,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1066,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1067,"io_slave_arready", false,-1);
    tracep->declBit(c+1043,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1058,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1053,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1054,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1059,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1060,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1043,"io_slave_rready", false,-1);
    tracep->declBit(c+1068,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1069,"io_slave_rresp", false,-1, 1,0);
    tracep->declQuad(c+1070,"io_slave_rdata", false,-1, 63,0);
    tracep->declBit(c+1072,"io_slave_rlast", false,-1);
    tracep->declBus(c+1073,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+511,"ifu_pc", false,-1, 31,0);
    tracep->declBus(c+512,"ifu_inst", false,-1, 31,0);
    tracep->declBus(c+1074,"ifu_inst_t", false,-1, 31,0);
    tracep->declBit(c+513,"ifu_stall", false,-1);
    tracep->declBus(c+514,"jump_pc", false,-1, 31,0);
    tracep->declBit(c+515,"jump_pc_valid", false,-1);
    tracep->declBit(c+971,"stall", false,-1);
    tracep->declBit(c+516,"ifu_r_valid_o", false,-1);
    tracep->declBus(c+517,"ifu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+972,"ifu_r_ready_i", false,-1);
    tracep->declBus(c+973,"ifu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+1054,"ifu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+974,"ifu_r_last_i", false,-1);
    tracep->declBit(c+518,"idu_branch", false,-1);
    tracep->declBit(c+519,"idu_jal", false,-1);
    tracep->declBit(c+520,"idu_jalr", false,-1);
    tracep->declBus(c+521,"idu_rd", false,-1, 4,0);
    tracep->declBit(c+522,"idu_rd_wen", false,-1);
    tracep->declBus(c+523,"idu_rs1", false,-1, 4,0);
    tracep->declBus(c+524,"idu_rs2", false,-1, 4,0);
    tracep->declBus(c+525,"idu_imm", false,-1, 31,0);
    tracep->declBus(c+526,"idu_alu_opt", false,-1, 3,0);
    tracep->declBus(c+527,"idu_src_sel", false,-1, 1,0);
    tracep->declBus(c+528,"idu_lsu_opt", false,-1, 1,0);
    tracep->declBus(c+529,"idu_funct3", false,-1, 2,0);
    tracep->declBus(c+530,"src1", false,-1, 31,0);
    tracep->declBus(c+531,"src2", false,-1, 31,0);
    tracep->declBus(c+1021,"rd_data", false,-1, 31,0);
    tracep->declBit(c+532,"zero_flag", false,-1);
    tracep->declBus(c+533,"exu_result", false,-1, 31,0);
    tracep->declBus(c+1075,"exu_result_t", false,-1, 31,0);
    tracep->declBus(c+748,"lsu_result", false,-1, 31,0);
    tracep->declBit(c+971,"mem_stall", false,-1);
    tracep->declBit(c+975,"lsu_rd_wen", false,-1);
    tracep->declBit(c+534,"lsu_r_valid_o", false,-1);
    tracep->declBus(c+535,"lsu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+749,"lsu_r_ready_i", false,-1);
    tracep->declBus(c+750,"lsu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+536,"lsu_r_size_o", false,-1, 2,0);
    tracep->declBus(c+1054,"lsu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+751,"lsu_r_last_i", false,-1);
    tracep->declBit(c+537,"lsu_w_valid_o", false,-1);
    tracep->declBus(c+208,"lsu_w_addr_o", false,-1, 31,0);
    tracep->declBit(c+210,"lsu_w_ready_i", false,-1);
    tracep->declBus(c+531,"lsu_w_data_o", false,-1, 31,0);
    tracep->declBus(c+209,"lsu_w_size_o", false,-1, 2,0);
    tracep->declBus(c+1054,"lsu_w_len_o", false,-1, 7,0);
    tracep->declBit(c+892,"lsu_w_last_i", false,-1);
    tracep->declBit(c+752,"wbu_rd_wen", false,-1);
    tracep->declBit(c+538,"csr_ecall", false,-1);
    tracep->declBit(c+539,"csr_mret", false,-1);
    tracep->declBus(c+540,"wr_csr_data", false,-1, 31,0);
    tracep->declBus(c+1022,"rd_csr_data", false,-1, 31,0);
    tracep->declBus(c+541,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+542,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+543,"csr_mpec", false,-1, 31,0);
    tracep->pushNamePrefix("axi_arbiter_u0 ");
    tracep->declBit(c+990,"aclk", false,-1);
    tracep->declBit(c+1020,"areset_n", false,-1);
    tracep->declBit(c+516,"ifu_r_valid_i", false,-1);
    tracep->declBus(c+517,"ifu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+972,"ifu_r_ready_o", false,-1);
    tracep->declBus(c+973,"ifu_r_data_o", false,-1, 31,0);
    tracep->declBus(c+1054,"ifu_r_len_i", false,-1, 7,0);
    tracep->declBit(c+974,"ifu_r_last_o", false,-1);
    tracep->declBit(c+534,"lsu_r_valid_i", false,-1);
    tracep->declBus(c+535,"lsu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+749,"lsu_r_ready_o", false,-1);
    tracep->declBus(c+750,"lsu_r_data_o", false,-1, 31,0);
    tracep->declBus(c+536,"lsu_r_size_i", false,-1, 2,0);
    tracep->declBus(c+1054,"lsu_r_len_i", false,-1, 7,0);
    tracep->declBit(c+751,"lsu_r_last_o", false,-1);
    tracep->declBit(c+537,"lsu_w_valid_i", false,-1);
    tracep->declBus(c+208,"lsu_w_addr_i", false,-1, 31,0);
    tracep->declBit(c+210,"lsu_w_ready_o", false,-1);
    tracep->declBus(c+531,"lsu_w_data_i", false,-1, 31,0);
    tracep->declBus(c+209,"lsu_w_size_i", false,-1, 2,0);
    tracep->declBus(c+1054,"lsu_w_len_i", false,-1, 7,0);
    tracep->declBit(c+892,"lsu_w_last_o", false,-1);
    tracep->declBit(c+206,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+207,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+208,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+1053,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+1054,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+209,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+1055,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+210,"axi_w_ready_i", false,-1);
    tracep->declBit(c+211,"axi_w_valid_o", false,-1);
    tracep->declQuad(c+212,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+214,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+215,"axi_w_last_o", false,-1);
    tracep->declBit(c+216,"axi_b_ready_o", false,-1);
    tracep->declBit(c+892,"axi_b_valid_i", false,-1);
    tracep->declBus(c+710,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+893,"axi_b_id_i", false,-1, 3,0);
    tracep->declBit(c+217,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+218,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+219,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+1053,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+1054,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+220,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+1055,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+221,"axi_r_ready_o", false,-1);
    tracep->declBit(c+894,"axi_r_valid_i", false,-1);
    tracep->declBus(c+1019,"axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+711,"axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+896,"axi_r_last_i", false,-1);
    tracep->declBus(c+895,"axi_r_id_i", false,-1, 3,0);
    tracep->declBit(c+544,"cpu_r_valid_o", false,-1);
    tracep->declBus(c+219,"cpu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+894,"cpu_r_ready_i", false,-1);
    tracep->declBus(c+976,"cpu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+220,"cpu_r_size_o", false,-1, 2,0);
    tracep->declBus(c+1054,"cpu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+896,"cpu_r_last_i", false,-1);
    tracep->declBit(c+537,"cpu_w_valid_o", false,-1);
    tracep->declBus(c+208,"cpu_w_addr_o", false,-1, 31,0);
    tracep->declBit(c+210,"cpu_w_ready_i", false,-1);
    tracep->declBus(c+531,"cpu_w_data_o", false,-1, 31,0);
    tracep->declBus(c+209,"cpu_w_size_o", false,-1, 2,0);
    tracep->declBus(c+1054,"cpu_w_len_o", false,-1, 7,0);
    tracep->declBit(c+892,"cpu_w_last_i", false,-1);
    tracep->declBus(c+545,"arbiter_state", false,-1, 1,0);
    tracep->declBus(c+1060,"ARB_IDLE", false,-1, 1,0);
    tracep->declBus(c+1055,"ARB_IFU", false,-1, 1,0);
    tracep->declBus(c+1076,"ARB_LSU", false,-1, 1,0);
    tracep->pushNamePrefix("axi_u0 ");
    tracep->declBit(c+990,"aclk", false,-1);
    tracep->declBit(c+1020,"areset_n", false,-1);
    tracep->declBit(c+544,"cpu_r_valid_i", false,-1);
    tracep->declBus(c+219,"cpu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+894,"cpu_r_ready_o", false,-1);
    tracep->declBus(c+976,"cpu_r_data_o", false,-1, 31,0);
    tracep->declBus(c+220,"cpu_r_size_i", false,-1, 2,0);
    tracep->declBus(c+1054,"cpu_r_len_i", false,-1, 7,0);
    tracep->declBit(c+896,"cpu_r_last_o", false,-1);
    tracep->declBit(c+537,"cpu_w_valid_i", false,-1);
    tracep->declBus(c+208,"cpu_w_addr_i", false,-1, 31,0);
    tracep->declBit(c+210,"cpu_w_ready_o", false,-1);
    tracep->declBus(c+531,"cpu_w_data_i", false,-1, 31,0);
    tracep->declBus(c+209,"cpu_w_size_i", false,-1, 2,0);
    tracep->declBus(c+1054,"cpu_w_len_i", false,-1, 7,0);
    tracep->declBit(c+892,"cpu_w_last_o", false,-1);
    tracep->declBit(c+206,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+207,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+208,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+1053,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+1054,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+209,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+1055,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+210,"axi_w_ready_i", false,-1);
    tracep->declBit(c+211,"axi_w_valid_o", false,-1);
    tracep->declQuad(c+212,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+214,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+215,"axi_w_last_o", false,-1);
    tracep->declBit(c+216,"axi_b_ready_o", false,-1);
    tracep->declBit(c+892,"axi_b_valid_i", false,-1);
    tracep->declBus(c+710,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+893,"axi_b_id_i", false,-1, 3,0);
    tracep->declBit(c+217,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+218,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+219,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+1053,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+1054,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+220,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+1055,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+221,"axi_r_ready_o", false,-1);
    tracep->declBit(c+894,"axi_r_valid_i", false,-1);
    tracep->declBus(c+1019,"axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+711,"axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+896,"axi_r_last_i", false,-1);
    tracep->declBus(c+895,"axi_r_id_i", false,-1, 3,0);
    tracep->declBus(c+546,"axi_w_state", false,-1, 2,0);
    tracep->declBus(c+1059,"AXI_W_IDLE", false,-1, 2,0);
    tracep->declBus(c+1042,"AXI_W_ADDR", false,-1, 2,0);
    tracep->declBus(c+1077,"AXI_W_DATA", false,-1, 2,0);
    tracep->declBus(c+1078,"AXI_W_RESP", false,-1, 2,0);
    tracep->declQuad(c+547,"axi_w_data_t", false,-1, 63,0);
    tracep->declBus(c+549,"axi_w_strb_t", false,-1, 7,0);
    tracep->declBus(c+550,"axi_w_cnt", false,-1, 7,0);
    tracep->declBus(c+551,"axi_r_state", false,-1, 1,0);
    tracep->declBus(c+1060,"AXI_R_IDLE", false,-1, 1,0);
    tracep->declBus(c+1055,"AXI_R_ADDR", false,-1, 1,0);
    tracep->declBus(c+1076,"AXI_R_DATA", false,-1, 1,0);
    tracep->declBus(c+1079,"axi_r_cnt", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csr_u0 ");
    tracep->declBit(c+990,"clk", false,-1);
    tracep->declBit(c+1020,"reset", false,-1);
    tracep->declBus(c+552,"wr_addr", false,-1, 11,0);
    tracep->declBus(c+540,"wr_data", false,-1, 31,0);
    tracep->declBus(c+552,"rd_addr", false,-1, 11,0);
    tracep->declBus(c+1022,"rd_data", false,-1, 31,0);
    tracep->declBit(c+538,"i_csr_ecall", false,-1);
    tracep->declBit(c+539,"i_csr_mret", false,-1);
    tracep->declBus(c+512,"i_inst", false,-1, 31,0);
    tracep->declBus(c+511,"i_pc", false,-1, 31,0);
    tracep->declBus(c+541,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+542,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+543,"o_mpec", false,-1, 31,0);
    tracep->declBus(c+1022,"rd_data_r", false,-1, 31,0);
    tracep->declBit(c+553,"wr_en", false,-1);
    tracep->declBit(c+553,"rd_en", false,-1);
    tracep->declBus(c+554,"wr_data_r", false,-1, 31,0);
    tracep->declBus(c+555,"temp", false,-1, 31,0);
    tracep->declBus(c+541,"o_mstatus_r", false,-1, 31,0);
    tracep->declBus(c+556,"mepc_inst_r", false,-1, 31,0);
    tracep->declBus(c+557,"mcause", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu_u0 ");
    tracep->declBus(c+511,"pc", false,-1, 31,0);
    tracep->declBus(c+530,"src1", false,-1, 31,0);
    tracep->declBus(c+531,"src2", false,-1, 31,0);
    tracep->declBus(c+525,"imm", false,-1, 31,0);
    tracep->declBit(c+518,"branch", false,-1);
    tracep->declBus(c+526,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+527,"src_sel", false,-1, 1,0);
    tracep->declBus(c+529,"funct3", false,-1, 2,0);
    tracep->declBit(c+532,"zero_flag", false,-1);
    tracep->declBus(c+533,"exu_result", false,-1, 31,0);
    tracep->declBus(c+558,"alu_a_data", false,-1, 31,0);
    tracep->declBus(c+559,"alu_b_data", false,-1, 31,0);
    tracep->declBus(c+560,"alu_out_data", false,-1, 31,0);
    tracep->declBit(c+1080,"carry_flag", false,-1);
    tracep->declBit(c+1081,"signed_flag", false,-1);
    tracep->declBus(c+533,"exu_result_r", false,-1, 31,0);
    tracep->pushNamePrefix("ex_alu ");
    tracep->declBus(c+526,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+558,"alu_a_data", false,-1, 31,0);
    tracep->declBus(c+559,"alu_b_data", false,-1, 31,0);
    tracep->declBus(c+560,"alu_out_data", false,-1, 31,0);
    tracep->declBit(c+561,"sub_flag", false,-1);
    tracep->declQuad(c+562,"alu_a_t", false,-1, 32,0);
    tracep->declQuad(c+564,"alu_b_t", false,-1, 32,0);
    tracep->declQuad(c+566,"cin", false,-1, 32,0);
    tracep->declQuad(c+568,"add_out", false,-1, 32,0);
    tracep->declBit(c+570,"top_A", false,-1);
    tracep->declBit(c+571,"top_B", false,-1);
    tracep->declBit(c+572,"top_C", false,-1);
    tracep->declBit(c+573,"sign_flag", false,-1);
    tracep->declBit(c+574,"over_flag", false,-1);
    tracep->declBit(c+575,"carry_flag", false,-1);
    tracep->declBus(c+576,"sra_result", false,-1, 31,0);
    tracep->declBus(c+560,"alu_out_data_r", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu_u0 ");
    tracep->declBus(c+512,"inst", false,-1, 31,0);
    tracep->declBit(c+518,"branch", false,-1);
    tracep->declBit(c+519,"jal", false,-1);
    tracep->declBit(c+520,"jalr", false,-1);
    tracep->declBus(c+521,"rd", false,-1, 4,0);
    tracep->declBit(c+522,"rd_wen", false,-1);
    tracep->declBus(c+523,"rs1", false,-1, 4,0);
    tracep->declBus(c+524,"rs2", false,-1, 4,0);
    tracep->declBus(c+525,"imm", false,-1, 31,0);
    tracep->declBus(c+526,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+527,"src_sel", false,-1, 1,0);
    tracep->declBus(c+528,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+529,"funct3", false,-1, 2,0);
    tracep->declBus(c+577,"opcode", false,-1, 6,0);
    tracep->declBus(c+578,"funct7", false,-1, 6,0);
    tracep->declBus(c+1082,"reg_zero", false,-1, 4,0);
    tracep->pushNamePrefix("id_imm_idu ");
    tracep->declBus(c+512,"inst", false,-1, 31,0);
    tracep->declBus(c+525,"imm", false,-1, 31,0);
    tracep->declBus(c+525,"imm_r", false,-1, 31,0);
    tracep->declBus(c+579,"imm_typeI", false,-1, 31,0);
    tracep->declBus(c+580,"imm_typeU", false,-1, 31,0);
    tracep->declBus(c+581,"imm_typeS", false,-1, 31,0);
    tracep->declBus(c+582,"imm_typeB", false,-1, 31,0);
    tracep->declBus(c+583,"imm_typeJ", false,-1, 31,0);
    tracep->declBus(c+1058,"imm_typeR", false,-1, 31,0);
    tracep->declBus(c+1058,"imm_type_NONE", false,-1, 31,0);
    tracep->pushNamePrefix("id_imm_ext_typeB ");
    tracep->declBus(c+1083,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+584,"imm_in", false,-1, 12,0);
    tracep->declBus(c+582,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeI ");
    tracep->declBus(c+1084,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+585,"imm_in", false,-1, 11,0);
    tracep->declBus(c+579,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeJ ");
    tracep->declBus(c+1085,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+586,"imm_in", false,-1, 20,0);
    tracep->declBus(c+583,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeS ");
    tracep->declBus(c+1084,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+587,"imm_in", false,-1, 11,0);
    tracep->declBus(c+581,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeU ");
    tracep->declBus(c+1086,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+580,"imm_in", false,-1, 31,0);
    tracep->declBus(c+580,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_opt_idu ");
    tracep->declBus(c+577,"opcode", false,-1, 6,0);
    tracep->declBus(c+529,"funct3", false,-1, 2,0);
    tracep->declBus(c+578,"funct7", false,-1, 6,0);
    tracep->declBus(c+526,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+527,"src_sel", false,-1, 1,0);
    tracep->declBus(c+528,"lsu_opt", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu_u0 ");
    tracep->declBit(c+990,"clk", false,-1);
    tracep->declBit(c+1020,"reset", false,-1);
    tracep->declBus(c+514,"jump_pc", false,-1, 31,0);
    tracep->declBit(c+515,"jump_pc_valid", false,-1);
    tracep->declBit(c+971,"stall", false,-1);
    tracep->declBit(c+975,"wbu_stall", false,-1);
    tracep->declBit(c+516,"ifu_r_valid_o", false,-1);
    tracep->declBus(c+517,"ifu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+972,"ifu_r_ready_i", false,-1);
    tracep->declBus(c+973,"ifu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+1054,"ifu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+974,"ifu_r_last_i", false,-1);
    tracep->declBit(c+513,"ifu_stall", false,-1);
    tracep->declBus(c+511,"ifu_pc_o", false,-1, 31,0);
    tracep->declBus(c+512,"ifu_inst_o", false,-1, 31,0);
    tracep->declBus(c+511,"ifu_pc_o_r", false,-1, 31,0);
    tracep->declBus(c+512,"ifu_inst_o_r", false,-1, 31,0);
    tracep->declBus(c+588,"ifu_pc_o_t", false,-1, 31,0);
    tracep->declBus(c+589,"ifu_inst_o_t", false,-1, 31,0);
    tracep->declBus(c+517,"pc", false,-1, 31,0);
    tracep->declBus(c+973,"inst", false,-1, 31,0);
    tracep->declBus(c+1087,"inst_t", false,-1, 31,0);
    tracep->declBit(c+513,"ifu_stall_r", false,-1);
    tracep->declBit(c+590,"flush_inst", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_u0 ");
    tracep->declBit(c+990,"clk", false,-1);
    tracep->declBit(c+1020,"reset", false,-1);
    tracep->declBus(c+530,"src1", false,-1, 31,0);
    tracep->declBus(c+531,"src2", false,-1, 31,0);
    tracep->declBus(c+525,"imm", false,-1, 31,0);
    tracep->declBus(c+528,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+529,"funct3", false,-1, 2,0);
    tracep->declBit(c+513,"ifu_stall", false,-1);
    tracep->declBit(c+534,"lsu_r_valid_o", false,-1);
    tracep->declBus(c+535,"lsu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+749,"lsu_r_ready_i", false,-1);
    tracep->declBus(c+750,"lsu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+536,"lsu_r_size_o", false,-1, 2,0);
    tracep->declBus(c+1054,"lsu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+751,"lsu_r_last_i", false,-1);
    tracep->declBit(c+537,"lsu_w_valid_o", false,-1);
    tracep->declBus(c+208,"lsu_w_addr_o", false,-1, 31,0);
    tracep->declBit(c+210,"lsu_w_ready_i", false,-1);
    tracep->declBus(c+531,"lsu_w_data_o", false,-1, 31,0);
    tracep->declBus(c+209,"lsu_w_size_o", false,-1, 2,0);
    tracep->declBus(c+1054,"lsu_w_len_o", false,-1, 7,0);
    tracep->declBit(c+892,"lsu_w_last_i", false,-1);
    tracep->declBit(c+971,"mem_stall", false,-1);
    tracep->declBit(c+975,"lsu_rd_wen", false,-1);
    tracep->declBus(c+748,"lsu_result", false,-1, 31,0);
    tracep->declBus(c+535,"raddr", false,-1, 31,0);
    tracep->declBus(c+750,"rdata", false,-1, 31,0);
    tracep->declBus(c+591,"rsize", false,-1, 31,0);
    tracep->declBus(c+208,"waddr", false,-1, 31,0);
    tracep->declBus(c+531,"wdata", false,-1, 31,0);
    tracep->declBus(c+592,"wmask", false,-1, 31,0);
    tracep->declBus(c+592,"mask", false,-1, 31,0);
    tracep->declBus(c+748,"lsu_result_r", false,-1, 31,0);
    tracep->declBit(c+534,"ren", false,-1);
    tracep->declBit(c+537,"wen", false,-1);
    tracep->declBit(c+977,"lsu_rd_wen_r", false,-1);
    tracep->declBit(c+978,"lsu_rd_wen_w", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile_u0 ");
    tracep->declBit(c+990,"clk", false,-1);
    tracep->declBit(c+1020,"reset", false,-1);
    tracep->declBus(c+523,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+530,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+524,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+531,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+752,"rd_en", false,-1);
    tracep->declBus(c+521,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+1021,"rd_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+593+i*1,"gpr", true,(i+0), 31,0);
    }
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu_u0 ");
    tracep->declBus(c+528,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+533,"exu_result", false,-1, 31,0);
    tracep->declBus(c+748,"lsu_result", false,-1, 31,0);
    tracep->declBus(c+1022,"csr_result", false,-1, 31,0);
    tracep->declBit(c+975,"lsu_rd_wen", false,-1);
    tracep->declBit(c+625,"idu_rd_wen", false,-1);
    tracep->declBit(c+752,"wbu_rd_wen", false,-1);
    tracep->declBus(c+1021,"wbu_result", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"io_d", false,-1);
    tracep->declBit(c+626,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"io_d", false,-1);
    tracep->declBit(c+626,"io_q", false,-1);
    tracep->declBit(c+626,"sync_0", false,-1);
    tracep->declBit(c+627,"sync_1", false,-1);
    tracep->declBit(c+628,"sync_2", false,-1);
    tracep->declBit(c+629,"sync_3", false,-1);
    tracep->declBit(c+630,"sync_4", false,-1);
    tracep->declBit(c+631,"sync_5", false,-1);
    tracep->declBit(c+632,"sync_6", false,-1);
    tracep->declBit(c+633,"sync_7", false,-1);
    tracep->declBit(c+634,"sync_8", false,-1);
    tracep->declBit(c+635,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+703,"auto_in_psel", false,-1);
    tracep->declBit(c+704,"auto_in_penable", false,-1);
    tracep->declBit(c+173,"auto_in_pwrite", false,-1);
    tracep->declBus(c+854,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1042,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+174,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+175,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1050,"auto_in_pready", false,-1);
    tracep->declBit(c+1051,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1052,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+992,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+993,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+994,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+995,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+996,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+997,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+998,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+999,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1000,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1001,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBus(c+868,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+703,"in_psel", false,-1);
    tracep->declBit(c+704,"in_penable", false,-1);
    tracep->declBus(c+1042,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+173,"in_pwrite", false,-1);
    tracep->declBus(c+174,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+175,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1050,"in_pready", false,-1);
    tracep->declBus(c+1052,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1051,"in_pslverr", false,-1);
    tracep->declBus(c+992,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+993,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+994,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+995,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+996,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+997,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+998,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+999,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1000,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1001,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+701,"auto_in_psel", false,-1);
    tracep->declBit(c+702,"auto_in_penable", false,-1);
    tracep->declBit(c+173,"auto_in_pwrite", false,-1);
    tracep->declBus(c+854,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1042,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+174,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+175,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1047,"auto_in_pready", false,-1);
    tracep->declBit(c+1048,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1049,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1002,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1003,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBus(c+868,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+701,"in_psel", false,-1);
    tracep->declBit(c+702,"in_penable", false,-1);
    tracep->declBus(c+1042,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+173,"in_pwrite", false,-1);
    tracep->declBus(c+174,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+175,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1047,"in_pready", false,-1);
    tracep->declBus(c+1049,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1048,"in_pslverr", false,-1);
    tracep->declBit(c+1002,"ps2_clk", false,-1);
    tracep->declBit(c+1003,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+310,"auto_in_awvalid", false,-1);
    tracep->declBit(c+311,"auto_in_wvalid", false,-1);
    tracep->declBit(c+312,"auto_in_arready", false,-1);
    tracep->declBit(c+313,"auto_in_arvalid", false,-1);
    tracep->declBus(c+189,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+314,"auto_in_araddr", false,-1, 29,0);
    tracep->declBus(c+191,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+715,"auto_in_rready", false,-1);
    tracep->declBit(c+315,"auto_in_rvalid", false,-1);
    tracep->declBus(c+316,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+317,"auto_in_rdata", false,-1, 63,0);
    tracep->declBit(c+315,"state", false,-1);
    tracep->declQuad(c+317,"nodeIn_rdata_r", false,-1, 63,0);
    tracep->declBus(c+316,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+636,"raddr", false,-1, 31,0);
    tracep->declBit(c+637,"ren", false,-1);
    tracep->declBus(c+638,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+855,"auto_in_psel", false,-1);
    tracep->declBit(c+705,"auto_in_penable", false,-1);
    tracep->declBit(c+173,"auto_in_pwrite", false,-1);
    tracep->declBus(c+851,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1042,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+174,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+175,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1015,"auto_in_pready", false,-1);
    tracep->declBit(c+1043,"auto_in_pslverr", false,-1);
    tracep->declBus(c+176,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+884,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+885,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1013,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBus(c+851,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+855,"in_psel", false,-1);
    tracep->declBit(c+705,"in_penable", false,-1);
    tracep->declBus(c+1042,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+173,"in_pwrite", false,-1);
    tracep->declBus(c+174,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+175,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1015,"in_pready", false,-1);
    tracep->declBus(c+176,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1043,"in_pslverr", false,-1);
    tracep->declBit(c+884,"qspi_sck", false,-1);
    tracep->declBit(c+885,"qspi_ce_n", false,-1);
    tracep->declBus(c+1013,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1013,"din", false,-1, 3,0);
    tracep->declBus(c+979,"dout", false,-1, 3,0);
    tracep->declBus(c+980,"douten", false,-1, 3,0);
    tracep->declBit(c+1023,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+990,"clk_i", false,-1);
    tracep->declBit(c+991,"rst_i", false,-1);
    tracep->declBus(c+851,"adr_i", false,-1, 31,0);
    tracep->declBus(c+174,"dat_i", false,-1, 31,0);
    tracep->declBus(c+176,"dat_o", false,-1, 31,0);
    tracep->declBus(c+175,"sel_i", false,-1, 3,0);
    tracep->declBit(c+855,"cyc_i", false,-1);
    tracep->declBit(c+855,"stb_i", false,-1);
    tracep->declBit(c+1023,"ack_o", false,-1);
    tracep->declBit(c+173,"we_i", false,-1);
    tracep->declBit(c+884,"sck", false,-1);
    tracep->declBit(c+885,"ce_n", false,-1);
    tracep->declBus(c+1013,"din", false,-1, 3,0);
    tracep->declBus(c+979,"dout", false,-1, 3,0);
    tracep->declBus(c+980,"douten", false,-1, 3,0);
    tracep->declBus(c+1060,"ST_INIT", false,-1, 1,0);
    tracep->declBus(c+1055,"ST_IDLE", false,-1, 1,0);
    tracep->declBus(c+1076,"ST_WAIT", false,-1, 1,0);
    tracep->declBit(c+760,"mr_sck", false,-1);
    tracep->declBit(c+22,"mr_ce_n", false,-1);
    tracep->declBus(c+1013,"mr_din", false,-1, 3,0);
    tracep->declBus(c+1024,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+761,"mr_doe", false,-1);
    tracep->declBit(c+23,"mw_sck", false,-1);
    tracep->declBit(c+24,"mw_ce_n", false,-1);
    tracep->declBus(c+1013,"mw_din", false,-1, 3,0);
    tracep->declBus(c+842,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+25,"mw_doe", false,-1);
    tracep->declBit(c+26,"init_start", false,-1);
    tracep->declBit(c+27,"init_done", false,-1);
    tracep->declBit(c+28,"init_sck", false,-1);
    tracep->declBit(c+29,"init_ce_n", false,-1);
    tracep->declBus(c+30,"init_dout", false,-1, 3,0);
    tracep->declBit(c+1056,"init_doe", false,-1);
    tracep->declBit(c+981,"mr_rd", false,-1);
    tracep->declBit(c+762,"mr_done", false,-1);
    tracep->declBit(c+982,"mw_wr", false,-1);
    tracep->declBit(c+843,"mw_done", false,-1);
    tracep->declBit(c+855,"wb_valid", false,-1);
    tracep->declBit(c+869,"wb_we", false,-1);
    tracep->declBit(c+870,"wb_re", false,-1);
    tracep->declBus(c+31,"state", false,-1, 1,0);
    tracep->declBus(c+983,"nstate", false,-1, 1,0);
    tracep->declBus(c+639,"size", false,-1, 2,0);
    tracep->declBus(c+640,"byte0", false,-1, 7,0);
    tracep->declBus(c+641,"byte1", false,-1, 7,0);
    tracep->declBus(c+642,"byte2", false,-1, 7,0);
    tracep->declBus(c+643,"byte3", false,-1, 7,0);
    tracep->declBus(c+644,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("INIT ");
    tracep->declBit(c+990,"clk", false,-1);
    tracep->declBit(c+1025,"rst_n", false,-1);
    tracep->declBit(c+26,"start", false,-1);
    tracep->declBit(c+27,"done", false,-1);
    tracep->declBit(c+28,"sck", false,-1);
    tracep->declBit(c+29,"ce_n", false,-1);
    tracep->declBus(c+30,"dout", false,-1, 3,0);
    tracep->declBit(c+1056,"douten", false,-1);
    tracep->declBus(c+1088,"CMD_35H", false,-1, 7,0);
    tracep->declBus(c+32,"counter", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+990,"clk", false,-1);
    tracep->declBit(c+1025,"rst_n", false,-1);
    tracep->declBus(c+871,"addr", false,-1, 23,0);
    tracep->declBit(c+981,"rd", false,-1);
    tracep->declBus(c+1089,"size", false,-1, 2,0);
    tracep->declBit(c+762,"done", false,-1);
    tracep->declBus(c+176,"line", false,-1, 31,0);
    tracep->declBit(c+760,"sck", false,-1);
    tracep->declBit(c+22,"ce_n", false,-1);
    tracep->declBus(c+1013,"din", false,-1, 3,0);
    tracep->declBus(c+1024,"dout", false,-1, 3,0);
    tracep->declBit(c+761,"douten", false,-1);
    tracep->declBus(c+1090,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1091,"READ", false,-1, 0,0);
    tracep->declBus(c+1092,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+33,"state", false,-1);
    tracep->declBit(c+984,"nstate", false,-1);
    tracep->declBus(c+763,"counter", false,-1, 7,0);
    tracep->declBus(c+34,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+645+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1093,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+764,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+990,"clk", false,-1);
    tracep->declBit(c+1025,"rst_n", false,-1);
    tracep->declBus(c+872,"addr", false,-1, 23,0);
    tracep->declBus(c+644,"line", false,-1, 31,0);
    tracep->declBus(c+639,"size", false,-1, 2,0);
    tracep->declBit(c+982,"wr", false,-1);
    tracep->declBit(c+843,"done", false,-1);
    tracep->declBit(c+23,"sck", false,-1);
    tracep->declBit(c+24,"ce_n", false,-1);
    tracep->declBus(c+1013,"din", false,-1, 3,0);
    tracep->declBus(c+842,"dout", false,-1, 3,0);
    tracep->declBit(c+25,"douten", false,-1);
    tracep->declBus(c+1090,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1091,"WRITE", false,-1, 0,0);
    tracep->declBus(c+649,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+35,"state", false,-1);
    tracep->declBit(c+985,"nstate", false,-1);
    tracep->declBus(c+36,"counter", false,-1, 7,0);
    tracep->declBus(c+37,"saddr", false,-1, 23,0);
    tracep->declBus(c+1094,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+697,"auto_in_psel", false,-1);
    tracep->declBit(c+698,"auto_in_penable", false,-1);
    tracep->declBit(c+173,"auto_in_pwrite", false,-1);
    tracep->declBus(c+851,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1042,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+174,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+175,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+759,"auto_in_pready", false,-1);
    tracep->declBit(c+1043,"auto_in_pslverr", false,-1);
    tracep->declBus(c+21,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1014,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+12,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+13,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+14,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+15,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+16,"sdram_bundle_we", false,-1);
    tracep->declBus(c+17,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+18,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+19,"sdram_bundle_dqm", false,-1, 1,0);
    tracep->declBus(c+20,"sdram_bundle_dq", false,-1, 15,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBus(c+851,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+697,"in_psel", false,-1);
    tracep->declBit(c+698,"in_penable", false,-1);
    tracep->declBus(c+1042,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+173,"in_pwrite", false,-1);
    tracep->declBus(c+174,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+175,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+759,"in_pready", false,-1);
    tracep->declBus(c+21,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1043,"in_pslverr", false,-1);
    tracep->declBit(c+1014,"sdram_clk", false,-1);
    tracep->declBit(c+12,"sdram_cke", false,-1);
    tracep->declBit(c+13,"sdram_cs", false,-1);
    tracep->declBit(c+14,"sdram_ras", false,-1);
    tracep->declBit(c+15,"sdram_cas", false,-1);
    tracep->declBit(c+16,"sdram_we", false,-1);
    tracep->declBus(c+17,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+18,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+19,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+20,"sdram_dq", false,-1, 15,0);
    tracep->declBit(c+38,"sdram_dout_en", false,-1);
    tracep->declBus(c+39,"sdram_dout", false,-1, 15,0);
    tracep->declBus(c+650,"state", false,-1, 1,0);
    tracep->declBit(c+765,"req_accept", false,-1);
    tracep->declBit(c+873,"is_read", false,-1);
    tracep->declBit(c+874,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+990,"clk_i", false,-1);
    tracep->declBit(c+991,"rst_i", false,-1);
    tracep->declBus(c+875,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+873,"inport_rd_i", false,-1);
    tracep->declBus(c+1054,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+851,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+174,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+20,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+765,"inport_accept_o", false,-1);
    tracep->declBit(c+759,"inport_ack_o", false,-1);
    tracep->declBit(c+1043,"inport_error_o", false,-1);
    tracep->declBus(c+21,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1014,"sdram_clk_o", false,-1);
    tracep->declBit(c+12,"sdram_cke_o", false,-1);
    tracep->declBit(c+13,"sdram_cs_o", false,-1);
    tracep->declBit(c+14,"sdram_ras_o", false,-1);
    tracep->declBit(c+15,"sdram_cas_o", false,-1);
    tracep->declBit(c+16,"sdram_we_o", false,-1);
    tracep->declBus(c+19,"sdram_dqm_o", false,-1, 1,0);
    tracep->declBus(c+17,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+18,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+39,"sdram_data_output_o", false,-1, 15,0);
    tracep->declBit(c+38,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1095,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1096,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1097,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1098,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1098,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1098,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1099,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1083,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1100,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1101,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1102,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1099,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1103,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1104,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1105,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1106,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1107,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1108,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1109,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1053,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1110,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1099,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1053,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1109,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1108,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1104,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1106,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1105,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1107,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1103,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1111,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1112,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1113,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1113,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1114,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1113,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1098,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1098,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1115,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+851,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+875,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+873,"ram_rd_w", false,-1);
    tracep->declBit(c+765,"ram_accept_w", false,-1);
    tracep->declBus(c+174,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+21,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+759,"ram_ack_w", false,-1);
    tracep->declBit(c+876,"ram_req_w", false,-1);
    tracep->declBus(c+40,"command_q", false,-1, 3,0);
    tracep->declBus(c+17,"addr_q", false,-1, 12,0);
    tracep->declBus(c+39,"data_q", false,-1, 15,0);
    tracep->declBit(c+41,"data_rd_en_q", false,-1);
    tracep->declBus(c+19,"dqm_q", false,-1, 1,0);
    tracep->declBit(c+12,"cke_q", false,-1);
    tracep->declBus(c+18,"bank_q", false,-1, 1,0);
    tracep->declBus(c+42,"data_buffer_q", false,-1, 15,0);
    tracep->declBus(c+43,"dqm_buffer_q", false,-1, 1,0);
    tracep->declBus(c+20,"sdram_data_in_w", false,-1, 15,0);
    tracep->declBit(c+44,"refresh_q", false,-1);
    tracep->declBus(c+45,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+46+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+766,"state_q", false,-1, 3,0);
    tracep->declBus(c+986,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+987,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+50,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+51,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+877,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+878,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+879,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1099,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+52,"delay_q", false,-1, 3,0);
    tracep->declBus(c+988,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1116,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+53,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+54,"sample_data0_q", false,-1, 15,0);
    tracep->declBus(c+55,"sample_data_q", false,-1, 15,0);
    tracep->declBus(c+56,"idx", false,-1, 31,0);
    tracep->declBus(c+767,"rd_q", false,-1, 3,0);
    tracep->declBit(c+759,"ack_q", false,-1);
    tracep->declArray(c+768,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+859,"auto_in_psel", false,-1);
    tracep->declBit(c+706,"auto_in_penable", false,-1);
    tracep->declBit(c+173,"auto_in_pwrite", false,-1);
    tracep->declBus(c+853,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1042,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+174,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+175,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1017,"auto_in_pready", false,-1);
    tracep->declBit(c+1043,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1018,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+757,"spi_bundle_sck", false,-1);
    tracep->declBus(c+758,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+11,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1012,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1117,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1118,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1119,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBus(c+880,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+859,"in_psel", false,-1);
    tracep->declBit(c+706,"in_penable", false,-1);
    tracep->declBus(c+1042,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+173,"in_pwrite", false,-1);
    tracep->declBus(c+174,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+175,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1017,"in_pready", false,-1);
    tracep->declBus(c+1018,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1043,"in_pslverr", false,-1);
    tracep->declBit(c+757,"spi_sck", false,-1);
    tracep->declBus(c+758,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+11,"spi_mosi", false,-1);
    tracep->declBit(c+1012,"spi_miso", false,-1);
    tracep->declBit(c+1120,"spi_irq_out", false,-1);
    tracep->declBus(c+651,"wb_adr_i", false,-1, 31,0);
    tracep->declBus(c+652,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+57,"wb_dat_o", false,-1, 31,0);
    tracep->declBit(c+653,"wb_we_i", false,-1);
    tracep->declBit(c+654,"wb_stb_i", false,-1);
    tracep->declBit(c+655,"wb_cyc_i", false,-1);
    tracep->declBit(c+771,"wb_ack_o", false,-1);
    tracep->declBit(c+772,"wb_int_o", false,-1);
    tracep->declBus(c+656,"wb_sel_i", false,-1, 3,0);
    tracep->declBus(c+657,"spi_state", false,-1, 3,0);
    tracep->declBus(c+1053,"SPI_IDLE", false,-1, 3,0);
    tracep->declBus(c+1109,"SPI_REG", false,-1, 3,0);
    tracep->declBus(c+1108,"SPI_FLASH_TX1", false,-1, 3,0);
    tracep->declBus(c+1104,"SPI_FLASH_TX0", false,-1, 3,0);
    tracep->declBus(c+1106,"SPI_FLASH_SS1", false,-1, 3,0);
    tracep->declBus(c+1105,"SPI_FLASH_CTRL", false,-1, 3,0);
    tracep->declBus(c+1107,"SPI_FLASH_INTT", false,-1, 3,0);
    tracep->declBus(c+1103,"SPI_FLASH_SS0", false,-1, 3,0);
    tracep->declBus(c+1111,"SPI_FLASH_DATA", false,-1, 3,0);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1121,"Tp", false,-1, 31,0);
    tracep->declBit(c+990,"wb_clk_i", false,-1);
    tracep->declBit(c+991,"wb_rst_i", false,-1);
    tracep->declBus(c+658,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+652,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+57,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+656,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+653,"wb_we_i", false,-1);
    tracep->declBit(c+654,"wb_stb_i", false,-1);
    tracep->declBit(c+655,"wb_cyc_i", false,-1);
    tracep->declBit(c+771,"wb_ack_o", false,-1);
    tracep->declBit(c+1043,"wb_err_o", false,-1);
    tracep->declBit(c+772,"wb_int_o", false,-1);
    tracep->declBus(c+758,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+757,"sclk_pad_o", false,-1);
    tracep->declBit(c+11,"mosi_pad_o", false,-1);
    tracep->declBit(c+1012,"miso_pad_i", false,-1);
    tracep->declBus(c+773,"divider", false,-1, 15,0);
    tracep->declBus(c+774,"ctrl", false,-1, 13,0);
    tracep->declBus(c+58,"ss", false,-1, 7,0);
    tracep->declBus(c+844,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+59,"rx", false,-1, 127,0);
    tracep->declBit(c+775,"rx_negedge", false,-1);
    tracep->declBit(c+776,"tx_negedge", false,-1);
    tracep->declBus(c+777,"char_len", false,-1, 6,0);
    tracep->declBit(c+778,"go", false,-1);
    tracep->declBit(c+779,"lsb", false,-1);
    tracep->declBit(c+780,"ie", false,-1);
    tracep->declBit(c+781,"ass", false,-1);
    tracep->declBit(c+659,"spi_divider_sel", false,-1);
    tracep->declBit(c+660,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+661,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+662,"spi_ss_sel", false,-1);
    tracep->declBit(c+782,"tip", false,-1);
    tracep->declBit(c+783,"pos_edge", false,-1);
    tracep->declBit(c+63,"neg_edge", false,-1);
    tracep->declBit(c+784,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1121,"Tp", false,-1, 31,0);
    tracep->declBit(c+990,"clk_in", false,-1);
    tracep->declBit(c+991,"rst", false,-1);
    tracep->declBit(c+782,"enable", false,-1);
    tracep->declBit(c+778,"go", false,-1);
    tracep->declBit(c+784,"last_clk", false,-1);
    tracep->declBus(c+773,"divider", false,-1, 15,0);
    tracep->declBit(c+757,"clk_out", false,-1);
    tracep->declBit(c+783,"pos_edge", false,-1);
    tracep->declBit(c+63,"neg_edge", false,-1);
    tracep->declBus(c+785,"cnt", false,-1, 15,0);
    tracep->declBit(c+786,"cnt_zero", false,-1);
    tracep->declBit(c+787,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1121,"Tp", false,-1, 31,0);
    tracep->declBit(c+990,"clk", false,-1);
    tracep->declBit(c+991,"rst", false,-1);
    tracep->declBus(c+663,"latch", false,-1, 3,0);
    tracep->declBus(c+656,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+777,"len", false,-1, 6,0);
    tracep->declBit(c+779,"lsb", false,-1);
    tracep->declBit(c+778,"go", false,-1);
    tracep->declBit(c+783,"pos_edge", false,-1);
    tracep->declBit(c+63,"neg_edge", false,-1);
    tracep->declBit(c+775,"rx_negedge", false,-1);
    tracep->declBit(c+776,"tx_negedge", false,-1);
    tracep->declBit(c+782,"tip", false,-1);
    tracep->declBit(c+784,"last", false,-1);
    tracep->declBus(c+652,"p_in", false,-1, 31,0);
    tracep->declArray(c+59,"p_out", false,-1, 127,0);
    tracep->declBit(c+757,"s_clk", false,-1);
    tracep->declBit(c+1012,"s_in", false,-1);
    tracep->declBit(c+11,"s_out", false,-1);
    tracep->declBus(c+788,"cnt", false,-1, 7,0);
    tracep->declArray(c+59,"data", false,-1, 127,0);
    tracep->declBus(c+789,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+790,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+791,"rx_clk", false,-1);
    tracep->declBit(c+792,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+856,"auto_in_psel", false,-1);
    tracep->declBit(c+857,"auto_in_penable", false,-1);
    tracep->declBit(c+173,"auto_in_pwrite", false,-1);
    tracep->declBus(c+854,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1042,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+174,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+175,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+858,"auto_in_pready", false,-1);
    tracep->declBit(c+1043,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1016,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1010,"uart_rx", false,-1);
    tracep->declBit(c+1011,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+856,"in_psel", false,-1);
    tracep->declBit(c+857,"in_penable", false,-1);
    tracep->declBus(c+1042,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+858,"in_pready", false,-1);
    tracep->declBit(c+1043,"in_pslverr", false,-1);
    tracep->declBus(c+868,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+173,"in_pwrite", false,-1);
    tracep->declBus(c+1016,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+174,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+175,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1010,"uart_rx", false,-1);
    tracep->declBit(c+1011,"uart_tx", false,-1);
    tracep->declBit(c+64,"rtsn", false,-1);
    tracep->declBit(c+1043,"ctsn", false,-1);
    tracep->declBit(c+65,"dtr_pad_o", false,-1);
    tracep->declBit(c+1043,"dsr_pad_i", false,-1);
    tracep->declBit(c+1043,"ri_pad_i", false,-1);
    tracep->declBit(c+1043,"dcd_pad_i", false,-1);
    tracep->declBit(c+66,"interrupt", false,-1);
    tracep->declBit(c+1026,"reg_we", false,-1);
    tracep->declBit(c+1027,"reg_re", false,-1);
    tracep->declBus(c+881,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+882,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+664,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+989,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+67,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+990,"clk", false,-1);
    tracep->declBit(c+991,"wb_rst_i", false,-1);
    tracep->declBus(c+881,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+883,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+989,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1026,"wb_we_i", false,-1);
    tracep->declBit(c+1027,"wb_re_i", false,-1);
    tracep->declBit(c+1011,"stx_pad_o", false,-1);
    tracep->declBit(c+1010,"srx_pad_i", false,-1);
    tracep->declBus(c+1111,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+67,"rts_pad_o", false,-1);
    tracep->declBit(c+65,"dtr_pad_o", false,-1);
    tracep->declBit(c+66,"int_o", false,-1);
    tracep->declBit(c+793,"enable", false,-1);
    tracep->declBit(c+68,"srx_pad", false,-1);
    tracep->declBus(c+69,"ier", false,-1, 3,0);
    tracep->declBus(c+70,"iir", false,-1, 3,0);
    tracep->declBus(c+71,"fcr", false,-1, 1,0);
    tracep->declBus(c+72,"mcr", false,-1, 4,0);
    tracep->declBus(c+794,"lcr", false,-1, 7,0);
    tracep->declBus(c+73,"msr", false,-1, 7,0);
    tracep->declBus(c+795,"dl", false,-1, 15,0);
    tracep->declBus(c+74,"scratch", false,-1, 7,0);
    tracep->declBit(c+75,"start_dlc", false,-1);
    tracep->declBit(c+76,"lsr_mask_d", false,-1);
    tracep->declBit(c+77,"msi_reset", false,-1);
    tracep->declBus(c+796,"dlc", false,-1, 15,0);
    tracep->declBus(c+78,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+79,"rx_reset", false,-1);
    tracep->declBit(c+797,"tx_reset", false,-1);
    tracep->declBit(c+798,"dlab", false,-1);
    tracep->declBit(c+1056,"cts_pad_i", false,-1);
    tracep->declBit(c+1043,"dsr_pad_i", false,-1);
    tracep->declBit(c+1043,"ri_pad_i", false,-1);
    tracep->declBit(c+1043,"dcd_pad_i", false,-1);
    tracep->declBit(c+80,"loopback", false,-1);
    tracep->declBit(c+1043,"cts", false,-1);
    tracep->declBit(c+1056,"dsr", false,-1);
    tracep->declBit(c+1056,"ri", false,-1);
    tracep->declBit(c+1056,"dcd", false,-1);
    tracep->declBit(c+81,"cts_c", false,-1);
    tracep->declBit(c+82,"dsr_c", false,-1);
    tracep->declBit(c+83,"ri_c", false,-1);
    tracep->declBit(c+84,"dcd_c", false,-1);
    tracep->declBus(c+85,"lsr", false,-1, 7,0);
    tracep->declBit(c+799,"lsr0", false,-1);
    tracep->declBit(c+86,"lsr1", false,-1);
    tracep->declBit(c+87,"lsr2", false,-1);
    tracep->declBit(c+88,"lsr3", false,-1);
    tracep->declBit(c+89,"lsr4", false,-1);
    tracep->declBit(c+800,"lsr5", false,-1);
    tracep->declBit(c+801,"lsr6", false,-1);
    tracep->declBit(c+90,"lsr7", false,-1);
    tracep->declBit(c+91,"lsr0r", false,-1);
    tracep->declBit(c+92,"lsr1r", false,-1);
    tracep->declBit(c+93,"lsr2r", false,-1);
    tracep->declBit(c+94,"lsr3r", false,-1);
    tracep->declBit(c+95,"lsr4r", false,-1);
    tracep->declBit(c+96,"lsr5r", false,-1);
    tracep->declBit(c+97,"lsr6r", false,-1);
    tracep->declBit(c+98,"lsr7r", false,-1);
    tracep->declBit(c+2,"lsr_mask", false,-1);
    tracep->declBit(c+99,"rls_int", false,-1);
    tracep->declBit(c+100,"rda_int", false,-1);
    tracep->declBit(c+101,"ti_int", false,-1);
    tracep->declBit(c+102,"thre_int", false,-1);
    tracep->declBit(c+103,"ms_int", false,-1);
    tracep->declBit(c+802,"tf_push", false,-1);
    tracep->declBit(c+104,"rf_pop", false,-1);
    tracep->declBus(c+1028,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+105,"rf_error_bit", false,-1);
    tracep->declBit(c+86,"rf_overrun", false,-1);
    tracep->declBit(c+803,"rf_push_pulse", false,-1);
    tracep->declBus(c+106,"rf_count", false,-1, 4,0);
    tracep->declBus(c+804,"tf_count", false,-1, 4,0);
    tracep->declBus(c+805,"tstate", false,-1, 2,0);
    tracep->declBus(c+806,"rstate", false,-1, 3,0);
    tracep->declBus(c+107,"counter_t", false,-1, 9,0);
    tracep->declBit(c+108,"thre_set_en", false,-1);
    tracep->declBus(c+109,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+807,"block_value", false,-1, 7,0);
    tracep->declBit(c+808,"serial_out", false,-1);
    tracep->declBit(c+809,"serial_in", false,-1);
    tracep->declBit(c+3,"lsr_mask_condition", false,-1);
    tracep->declBit(c+4,"iir_read", false,-1);
    tracep->declBit(c+5,"msr_read", false,-1);
    tracep->declBit(c+6,"fifo_read", false,-1);
    tracep->declBit(c+7,"fifo_write", false,-1);
    tracep->declBus(c+110,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+111,"lsr0_d", false,-1);
    tracep->declBit(c+112,"lsr1_d", false,-1);
    tracep->declBit(c+113,"lsr2_d", false,-1);
    tracep->declBit(c+114,"lsr3_d", false,-1);
    tracep->declBit(c+115,"lsr4_d", false,-1);
    tracep->declBit(c+116,"lsr5_d", false,-1);
    tracep->declBit(c+117,"lsr6_d", false,-1);
    tracep->declBit(c+118,"lsr7_d", false,-1);
    tracep->declBit(c+119,"rls_int_d", false,-1);
    tracep->declBit(c+120,"thre_int_d", false,-1);
    tracep->declBit(c+121,"ms_int_d", false,-1);
    tracep->declBit(c+122,"ti_int_d", false,-1);
    tracep->declBit(c+123,"rda_int_d", false,-1);
    tracep->declBit(c+124,"rls_int_rise", false,-1);
    tracep->declBit(c+125,"thre_int_rise", false,-1);
    tracep->declBit(c+126,"ms_int_rise", false,-1);
    tracep->declBit(c+127,"ti_int_rise", false,-1);
    tracep->declBit(c+128,"rda_int_rise", false,-1);
    tracep->declBit(c+129,"rls_int_pnd", false,-1);
    tracep->declBit(c+130,"rda_int_pnd", false,-1);
    tracep->declBit(c+131,"thre_int_pnd", false,-1);
    tracep->declBit(c+132,"ms_int_pnd", false,-1);
    tracep->declBit(c+133,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1121,"Tp", false,-1, 31,0);
    tracep->declBus(c+1121,"width", false,-1, 31,0);
    tracep->declBus(c+1091,"init_value", false,-1, 0,0);
    tracep->declBit(c+991,"rst_i", false,-1);
    tracep->declBit(c+990,"clk_i", false,-1);
    tracep->declBit(c+1043,"stage1_rst_i", false,-1);
    tracep->declBit(c+1056,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1010,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+68,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+134,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+990,"clk", false,-1);
    tracep->declBit(c+991,"wb_rst_i", false,-1);
    tracep->declBus(c+794,"lcr", false,-1, 7,0);
    tracep->declBit(c+104,"rf_pop", false,-1);
    tracep->declBit(c+809,"srx_pad_i", false,-1);
    tracep->declBit(c+793,"enable", false,-1);
    tracep->declBit(c+79,"rx_reset", false,-1);
    tracep->declBit(c+2,"lsr_mask", false,-1);
    tracep->declBus(c+107,"counter_t", false,-1, 9,0);
    tracep->declBus(c+106,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1028,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+86,"rf_overrun", false,-1);
    tracep->declBit(c+105,"rf_error_bit", false,-1);
    tracep->declBus(c+806,"rstate", false,-1, 3,0);
    tracep->declBit(c+803,"rf_push_pulse", false,-1);
    tracep->declBus(c+810,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+811,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+812,"rshift", false,-1, 7,0);
    tracep->declBit(c+813,"rparity", false,-1);
    tracep->declBit(c+814,"rparity_error", false,-1);
    tracep->declBit(c+815,"rframing_error", false,-1);
    tracep->declBit(c+135,"rbit_in", false,-1);
    tracep->declBit(c+816,"rparity_xor", false,-1);
    tracep->declBus(c+817,"counter_b", false,-1, 7,0);
    tracep->declBit(c+136,"rf_push_q", false,-1);
    tracep->declBus(c+818,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+819,"rf_push", false,-1);
    tracep->declBit(c+820,"break_error", false,-1);
    tracep->declBit(c+821,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+822,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+823,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+824,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1053,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1109,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1108,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1104,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1106,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1105,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1107,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1103,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1111,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1112,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1122,"sr_push", false,-1, 3,0);
    tracep->declBus(c+825,"toc_value", false,-1, 9,0);
    tracep->declBus(c+826,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1123,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1114,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1099,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1124,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+990,"clk", false,-1);
    tracep->declBit(c+991,"wb_rst_i", false,-1);
    tracep->declBit(c+803,"push", false,-1);
    tracep->declBit(c+104,"pop", false,-1);
    tracep->declBus(c+818,"data_in", false,-1, 10,0);
    tracep->declBit(c+79,"fifo_reset", false,-1);
    tracep->declBit(c+2,"reset_status", false,-1);
    tracep->declBus(c+1028,"data_out", false,-1, 10,0);
    tracep->declBit(c+86,"overrun", false,-1);
    tracep->declBus(c+106,"count", false,-1, 4,0);
    tracep->declBit(c+105,"error_bit", false,-1);
    tracep->declBus(c+1029,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+137+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+827,"top", false,-1, 3,0);
    tracep->declBus(c+153,"bottom", false,-1, 3,0);
    tracep->declBus(c+828,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+154,"word0", false,-1, 2,0);
    tracep->declBus(c+155,"word1", false,-1, 2,0);
    tracep->declBus(c+156,"word2", false,-1, 2,0);
    tracep->declBus(c+157,"word3", false,-1, 2,0);
    tracep->declBus(c+158,"word4", false,-1, 2,0);
    tracep->declBus(c+159,"word5", false,-1, 2,0);
    tracep->declBus(c+160,"word6", false,-1, 2,0);
    tracep->declBus(c+161,"word7", false,-1, 2,0);
    tracep->declBus(c+162,"word8", false,-1, 2,0);
    tracep->declBus(c+163,"word9", false,-1, 2,0);
    tracep->declBus(c+164,"word10", false,-1, 2,0);
    tracep->declBus(c+165,"word11", false,-1, 2,0);
    tracep->declBus(c+166,"word12", false,-1, 2,0);
    tracep->declBus(c+167,"word13", false,-1, 2,0);
    tracep->declBus(c+168,"word14", false,-1, 2,0);
    tracep->declBus(c+169,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1099,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1119,"data_width", false,-1, 31,0);
    tracep->declBus(c+1114,"depth", false,-1, 31,0);
    tracep->declBit(c+990,"clk", false,-1);
    tracep->declBit(c+803,"we", false,-1);
    tracep->declBus(c+827,"a", false,-1, 3,0);
    tracep->declBus(c+153,"dpra", false,-1, 3,0);
    tracep->declBus(c+829,"di", false,-1, 7,0);
    tracep->declBus(c+1029,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+665+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+990,"clk", false,-1);
    tracep->declBit(c+991,"wb_rst_i", false,-1);
    tracep->declBus(c+794,"lcr", false,-1, 7,0);
    tracep->declBit(c+802,"tf_push", false,-1);
    tracep->declBus(c+883,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+793,"enable", false,-1);
    tracep->declBit(c+797,"tx_reset", false,-1);
    tracep->declBit(c+2,"lsr_mask", false,-1);
    tracep->declBit(c+808,"stx_pad_o", false,-1);
    tracep->declBus(c+805,"tstate", false,-1, 2,0);
    tracep->declBus(c+804,"tf_count", false,-1, 4,0);
    tracep->declBus(c+830,"counter", false,-1, 4,0);
    tracep->declBus(c+831,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+832,"shift_out", false,-1, 6,0);
    tracep->declBit(c+833,"stx_o_tmp", false,-1);
    tracep->declBit(c+834,"parity_xor", false,-1);
    tracep->declBit(c+835,"tf_pop", false,-1);
    tracep->declBit(c+836,"bit_out", false,-1);
    tracep->declBus(c+883,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+845,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+170,"tf_overrun", false,-1);
    tracep->declBus(c+1059,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1042,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1077,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1078,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1089,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1125,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1119,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1114,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1099,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1124,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+990,"clk", false,-1);
    tracep->declBit(c+991,"wb_rst_i", false,-1);
    tracep->declBit(c+802,"push", false,-1);
    tracep->declBit(c+835,"pop", false,-1);
    tracep->declBus(c+883,"data_in", false,-1, 7,0);
    tracep->declBit(c+797,"fifo_reset", false,-1);
    tracep->declBit(c+2,"reset_status", false,-1);
    tracep->declBus(c+845,"data_out", false,-1, 7,0);
    tracep->declBit(c+170,"overrun", false,-1);
    tracep->declBus(c+804,"count", false,-1, 4,0);
    tracep->declBus(c+837,"top", false,-1, 3,0);
    tracep->declBus(c+838,"bottom", false,-1, 3,0);
    tracep->declBus(c+839,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1099,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1119,"data_width", false,-1, 31,0);
    tracep->declBus(c+1114,"depth", false,-1, 31,0);
    tracep->declBit(c+990,"clk", false,-1);
    tracep->declBit(c+802,"we", false,-1);
    tracep->declBus(c+837,"a", false,-1, 3,0);
    tracep->declBus(c+838,"dpra", false,-1, 3,0);
    tracep->declBus(c+883,"di", false,-1, 7,0);
    tracep->declBus(c+845,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+681+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBit(c+699,"auto_in_psel", false,-1);
    tracep->declBit(c+700,"auto_in_penable", false,-1);
    tracep->declBit(c+173,"auto_in_pwrite", false,-1);
    tracep->declBus(c+853,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1042,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+174,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+175,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1044,"auto_in_pready", false,-1);
    tracep->declBit(c+1045,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1046,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1004,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1005,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1006,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1007,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1008,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1009,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+990,"clock", false,-1);
    tracep->declBit(c+991,"reset", false,-1);
    tracep->declBus(c+880,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+699,"in_psel", false,-1);
    tracep->declBit(c+700,"in_penable", false,-1);
    tracep->declBus(c+1042,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+173,"in_pwrite", false,-1);
    tracep->declBus(c+174,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+175,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1044,"in_pready", false,-1);
    tracep->declBus(c+1046,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1045,"in_pslverr", false,-1);
    tracep->declBus(c+1004,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1005,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1006,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1007,"vga_hsync", false,-1);
    tracep->declBit(c+1008,"vga_vsync", false,-1);
    tracep->declBit(c+1009,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+757,"sck", false,-1);
    tracep->declBit(c+840,"ss", false,-1);
    tracep->declBit(c+11,"mosi", false,-1);
    tracep->declBit(c+1030,"miso", false,-1);
    tracep->declBus(c+8,"data", false,-1, 7,0);
    tracep->declBus(c+9,"bit_cnt", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+757,"sck", false,-1);
    tracep->declBit(c+841,"ss", false,-1);
    tracep->declBit(c+11,"mosi", false,-1);
    tracep->declBit(c+1031,"miso", false,-1);
    tracep->declBit(c+841,"reset", false,-1);
    tracep->declBus(c+753,"state", false,-1, 2,0);
    tracep->declBus(c+754,"counter", false,-1, 7,0);
    tracep->declBus(c+1032,"cmd", false,-1, 7,0);
    tracep->declBus(c+1033,"addr", false,-1, 23,0);
    tracep->declBus(c+755,"data", false,-1, 31,0);
    tracep->declBit(c+756,"ren", false,-1);
    tracep->declBus(c+10,"rdata", false,-1, 31,0);
    tracep->declBus(c+1034,"raddr", false,-1, 31,0);
    tracep->declBus(c+1035,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+757,"clock", false,-1);
    tracep->declBit(c+756,"valid", false,-1);
    tracep->declBus(c+1032,"cmd", false,-1, 7,0);
    tracep->declBus(c+1034,"addr", false,-1, 31,0);
    tracep->declBus(c+10,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+884,"sck", false,-1);
    tracep->declBit(c+885,"ce_n", false,-1);
    tracep->declBus(c+1013,"dio", false,-1, 3,0);
    tracep->declBus(c+846,"dout_en", false,-1, 3,0);
    tracep->declBus(c+1036,"dout", false,-1, 3,0);
    tracep->declBus(c+1013,"din", false,-1, 3,0);
    tracep->declBit(c+1037,"QPI_MODE", false,-1);
    tracep->declBus(c+847,"cmd", false,-1, 7,0);
    tracep->declBus(c+848,"addr", false,-1, 23,0);
    tracep->declBus(c+1038,"data", false,-1, 31,0);
    tracep->declBus(c+1039,"rdata", false,-1, 31,0);
    tracep->declBus(c+849,"counter", false,-1, 7,0);
    tracep->declBus(c+850,"state", false,-1, 3,0);
    tracep->declBus(c+1040,"data_bswap", false,-1, 31,0);
    tracep->declBus(c+1041,"wdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1014,"clk", false,-1);
    tracep->declBit(c+12,"cke", false,-1);
    tracep->declBit(c+13,"cs", false,-1);
    tracep->declBit(c+14,"ras", false,-1);
    tracep->declBit(c+15,"cas", false,-1);
    tracep->declBit(c+16,"we", false,-1);
    tracep->declBus(c+17,"a", false,-1, 12,0);
    tracep->declBus(c+18,"ba", false,-1, 1,0);
    tracep->declBus(c+19,"dqm", false,-1, 1,0);
    tracep->declBus(c+20,"dq", false,-1, 15,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_top(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_top\n"); );
    // Body
    VysyxSoCFull___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCFull___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCFull___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_register(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VysyxSoCFull___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VysyxSoCFull___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VysyxSoCFull___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_top_0\n"); );
    // Init
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VysyxSoCFull___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__i),32);
    bufp->fullBit(oldp+2,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+3,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+4,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+5,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+6,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+7,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullCData(oldp+8,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data),8);
    bufp->fullCData(oldp+9,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_cnt),8);
    bufp->fullIData(oldp+10,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullBit(oldp+11,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+12,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+13,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                  >> 3U))));
    bufp->fullBit(oldp+14,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                  >> 2U))));
    bufp->fullBit(oldp+15,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                  >> 1U))));
    bufp->fullBit(oldp+16,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+17,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+18,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+19,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),2);
    bufp->fullSData(oldp+20,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                 ? 0U : 0xffffU) & 
                               ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                   ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q)) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                     ? 0U : 0xffffU)) 
                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                    ? 0U : 0xffffU))) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                  ? 0U : 0xffffU))),16);
    bufp->fullIData(oldp+21,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                               << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))),32);
    bufp->fullBit(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullBit(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+25,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+26,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))));
    bufp->fullBit(oldp+27,((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter))));
    bufp->fullBit(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_sck));
    bufp->fullBit(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_ce_n));
    bufp->fullCData(oldp+30,(((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter))
                               ? (1U & (0x35U >> (7U 
                                                  & ((IData)(7U) 
                                                     - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter)))))
                               : 0U)),4);
    bufp->fullCData(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullCData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter),8);
    bufp->fullBit(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullIData(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullBit(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+38,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullSData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),16);
    bufp->fullCData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullBit(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullSData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),16);
    bufp->fullCData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),2);
    bufp->fullBit(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullSData(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),16);
    bufp->fullSData(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),16);
    bufp->fullIData(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullIData(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullCData(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+64,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                     >> 1U)))));
    bufp->fullBit(oldp+65,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+67,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                  >> 1U))));
    bufp->fullBit(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullCData(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullCData(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+80,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                  >> 4U))));
    bufp->fullBit(oldp+81,((IData)((0x10U != (0x12U 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+82,((IData)((0x11U == (0x11U 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+83,((IData)((0x14U == (0x14U 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+84,((IData)((0x18U == (0x18U 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+85,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                               << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                          << 6U) | 
                                         (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                           << 5U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                            << 4U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                               << 3U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))),8);
    bufp->fullBit(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+87,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                  >> 1U))));
    bufp->fullBit(oldp+88,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+89,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                  >> 2U))));
    bufp->fullBit(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+105,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                            [1U] | 
                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [2U] | 
                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                              [3U] 
                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                 [4U] 
                                                 | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                    [5U] 
                                                    | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                       [6U] 
                                                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                          [7U] 
                                                          | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                             [8U] 
                                                             | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                [9U] 
                                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                   [0xaU] 
                                                                   | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                      [0xbU] 
                                                                      | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                         [0xcU] 
                                                                         | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                            [0xdU] 
                                                                            | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xeU] 
                                                                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xfU]))))))))))))))))));
    bufp->fullCData(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullSData(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+108,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+124,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+125,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+126,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+127,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+128,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullBit(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullCData(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullBit(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+172,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w),32);
    bufp->fullCData(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullIData(oldp+176,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullBit(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_awvalid));
    bufp->fullCData(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_wvalid));
    bufp->fullQData(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),64);
    bufp->fullCData(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),8);
    bufp->fullCData(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_arvalid));
    bufp->fullCData(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg),32);
    bufp->fullQData(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),64);
    bufp->fullQData(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg),64);
    bufp->fullCData(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),8);
    bufp->fullCData(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg),8);
    bufp->fullCData(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+206,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+207,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state))));
    bufp->fullIData(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_w_addr_o),32);
    bufp->fullCData(oldp+209,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__mask)),3);
    bufp->fullBit(oldp+210,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+211,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state))));
    bufp->fullQData(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata),64);
    bufp->fullCData(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb),8);
    bufp->fullBit(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast));
    bufp->fullBit(oldp+216,(((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state)) 
                             | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state)))));
    bufp->fullBit(oldp+217,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+218,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_state))));
    bufp->fullIData(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_addr_o),32);
    bufp->fullCData(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_size_o),3);
    bufp->fullBit(oldp+221,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_state))));
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+223,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+225,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+227,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+228,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullCData(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullBit(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullSData(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullCData(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullIData(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullQData(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullBit(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullQData(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+273,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                    ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram[2U] 
                                       >> 8U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast)))));
    bufp->fullWData(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),73);
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid));
    bufp->fullIData(oldp+279,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+280,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+283,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+284,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+285,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullQData(oldp+288,((((QData)((IData)((0xffU 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                     ? 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                      ? (IData)(
                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                 >> 0x38U))
                                                      : 0U)
                                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r7))))) 
                                << 0x38U) | (((QData)((IData)(
                                                              (0xffU 
                                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                   ? 
                                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                    ? (IData)(
                                                                              (vlSelf->__VdfgTmp_hf134a362__0 
                                                                               >> 0x30U))
                                                                    : 0U)
                                                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r6))))) 
                                              << 0x30U) 
                                             | (((QData)((IData)(
                                                                 (0xffU 
                                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                      ? 
                                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                       ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 0x28U))
                                                                       : 0U)
                                                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r5))))) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(
                                                                    (0xffU 
                                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                         ? 
                                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                          ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 0x20U))
                                                                          : 0U)
                                                                         : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r4))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                         ? 
                                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                          ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 0x18U))
                                                                          : 0U)
                                                                         : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                                       << 0x18U) 
                                                                      | ((0xff0000U 
                                                                          & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                               ? 
                                                                              ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                                ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 0x10U))
                                                                                : 0U)
                                                                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                                             << 0x10U)) 
                                                                         | ((0xff00U 
                                                                             & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                                 ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 8U))
                                                                                 : 0U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                                                << 8U)) 
                                                                            | (0xffU 
                                                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                                 ? (IData)(vlSelf->__VdfgTmp_hf134a362__0)
                                                                                 : 0U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))))))))),64);
    bufp->fullCData(oldp+290,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+291,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullCData(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r4),8);
    bufp->fullCData(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r5),8);
    bufp->fullCData(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r6),8);
    bufp->fullCData(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r7),8);
    bufp->fullSData(oldp+303,((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 3U))),10);
    bufp->fullQData(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),64);
    bufp->fullSData(oldp+306,((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 3U))),10);
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__W0_en_t));
    bufp->fullBit(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+310,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                             & (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x1bU)) 
                                       | ((0xcU & (8U 
                                                   ^ 
                                                   (0x3cU 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                       >> 0x1aU)))) 
                                          | ((2U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0x17U)) 
                                             | (1U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU)))))))));
    bufp->fullBit(oldp+311,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 1U))));
    bufp->fullBit(oldp+312,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+313,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+314,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullQData(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),64);
    bufp->fullBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+323,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                    | ((0xcU & (8U 
                                                ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                       | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x17U)) 
                                          | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+370,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullCData(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+383,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+387,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+391,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+395,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+399,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+403,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+407,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+411,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+415,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+419,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+423,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+427,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+431,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+435,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+439,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+443,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+447,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+451,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+455,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+459,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+463,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+467,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+471,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+475,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+479,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+483,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+487,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+491,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+495,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+499,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+503,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+507,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_pc_o_r),32);
    bufp->fullIData(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r),32);
    bufp->fullBit(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_stall_r));
    bufp->fullIData(oldp+514,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_mret)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                               [0x341U] : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_ecall)
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                                           [0x305U]
                                            : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h15124160__0)
                                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r 
                                                   + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_pc_o_r)
                                                : (
                                                   (0x67U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r))
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h623bd169__0
                                                    : 0U))))),32);
    bufp->fullBit(oldp+515,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_mret) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_ecall) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h15124160__0) 
                                   | (0x67U == (0x7fU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)))))));
    bufp->fullBit(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_r_valid_o));
    bufp->fullIData(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__pc),32);
    bufp->fullBit(oldp+518,((0x63U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r))));
    bufp->fullBit(oldp+519,((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r))));
    bufp->fullBit(oldp+520,((0x67U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r))));
    bufp->fullCData(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_rd),5);
    bufp->fullBit(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_rd_wen));
    bufp->fullCData(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_rs1),5);
    bufp->fullCData(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_rs2),5);
    bufp->fullIData(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r),32);
    bufp->fullCData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_alu_opt),4);
    bufp->fullCData(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_src_sel),2);
    bufp->fullCData(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt),2);
    bufp->fullCData(oldp+529,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                     >> 0xcU))),3);
    bufp->fullIData(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src1),32);
    bufp->fullIData(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src2),32);
    bufp->fullBit(oldp+532,((1U & (~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__exu_result_r))))));
    bufp->fullIData(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__exu_result_r),32);
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__ren));
    bufp->fullIData(oldp+535,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h623bd169__0
                                : 0U)),32);
    bufp->fullCData(oldp+536,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__rsize)),3);
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__wen));
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_ecall));
    bufp->fullBit(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_mret));
    bufp->fullIData(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wr_csr_data),32);
    bufp->fullIData(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                              [0x300U]),32);
    bufp->fullIData(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                              [0x305U]),32);
    bufp->fullIData(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                              [0x341U]),32);
    bufp->fullBit(oldp+544,((1U & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_r_valid_o)
                                    : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state))
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__ren)
                                        : 0U)))));
    bufp->fullCData(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state),2);
    bufp->fullCData(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state),3);
    bufp->fullQData(oldp+547,((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src2))),64);
    bufp->fullCData(oldp+549,(((0U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__mask))
                                ? 1U : ((1U == (7U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__mask))
                                         ? 3U : 0xfU))),8);
    bufp->fullCData(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_cnt),8);
    bufp->fullCData(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_state),2);
    bufp->fullSData(oldp+552,((0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r)),12);
    bufp->fullBit(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__wr_en));
    bufp->fullIData(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__wr_data_r),32);
    bufp->fullIData(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__temp),32);
    bufp->fullIData(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__mepc_inst_r),32);
    bufp->fullIData(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                              [0x342U]),32);
    bufp->fullIData(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data),32);
    bufp->fullIData(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_b_data),32);
    bufp->fullIData(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__alu_out_data_r),32);
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__sub_flag));
    bufp->fullQData(oldp+562,((((QData)((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data 
                                                 >> 0x1fU))) 
                                << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data)))),33);
    bufp->fullQData(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__alu_b_t),33);
    bufp->fullQData(oldp+566,((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__sub_flag))),33);
    bufp->fullQData(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out),33);
    bufp->fullBit(oldp+570,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data 
                             >> 0x1fU)));
    bufp->fullBit(oldp+571,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__alu_b_t 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+572,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+573,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+574,((1U & VL_REDXOR_64((0x180000000ULL 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out)))));
    bufp->fullBit(oldp+575,((1U & ((((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data 
                                      >> 0x1fU) | ((IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__alu_b_t 
                                                            >> 0x20U)) 
                                                   | (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out 
                                                              >> 0x20U)))) 
                                    & (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data 
                                         >> 0x1fU) 
                                        | ((~ (IData)(
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__alu_b_t 
                                                       >> 0x20U))) 
                                           | (~ (IData)(
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out 
                                                         >> 0x20U))))) 
                                       & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data 
                                              >> 0x1fU)) 
                                          | (((~ (IData)(
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out 
                                                          >> 0x20U))) 
                                              | (IData)(
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__alu_b_t 
                                                         >> 0x20U))) 
                                             & ((~ (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__alu_b_t 
                                                            >> 0x20U))) 
                                                | (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out 
                                                           >> 0x20U))))))) 
                                   ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__sub_flag)))));
    bufp->fullIData(oldp+576,((IData)(((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data))) 
                                       >> (0x3fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_b_data)))),32);
    bufp->fullCData(oldp+577,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)),7);
    bufp->fullCData(oldp+578,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                               >> 0x19U)),7);
    bufp->fullIData(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_typeI),32);
    bufp->fullIData(oldp+580,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)),32);
    bufp->fullIData(oldp+581,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+582,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                            >> 0x1fU))) 
                                << 0xdU) | ((0x1000U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                >> 0x13U)) 
                                            | ((0x800U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                        >> 7U))))))),32);
    bufp->fullIData(oldp+583,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                            >> 0x1fU))) 
                                << 0x15U) | ((0x100000U 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                 >> 0xbU)) 
                                             | ((0xff000U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r) 
                                                | ((0x800U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                         >> 0x14U))))))),32);
    bufp->fullSData(oldp+584,(((0x1000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                           >> 0x13U)) 
                               | ((0x800U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                             << 4U)) 
                                  | ((0x7e0U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                >> 0x14U)) 
                                     | (0x1eU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                 >> 7U)))))),13);
    bufp->fullSData(oldp+585,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+586,(((0x100000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                             >> 0xbU)) 
                               | ((0xff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r) 
                                  | ((0x800U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                >> 9U)) 
                                     | (0x7feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                  >> 0x14U)))))),21);
    bufp->fullSData(oldp+587,(((0xfe0U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                           >> 7U)))),12);
    bufp->fullIData(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_pc_o_t),32);
    bufp->fullIData(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_t),32);
    bufp->fullBit(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__flush_inst));
    bufp->fullIData(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__rsize),32);
    bufp->fullIData(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__mask),32);
    bufp->fullIData(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[0]),32);
    bufp->fullIData(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[1]),32);
    bufp->fullIData(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[2]),32);
    bufp->fullIData(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[3]),32);
    bufp->fullIData(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[4]),32);
    bufp->fullIData(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[5]),32);
    bufp->fullIData(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[6]),32);
    bufp->fullIData(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[7]),32);
    bufp->fullIData(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[8]),32);
    bufp->fullIData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[9]),32);
    bufp->fullIData(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[10]),32);
    bufp->fullIData(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[11]),32);
    bufp->fullIData(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[12]),32);
    bufp->fullIData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[13]),32);
    bufp->fullIData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[14]),32);
    bufp->fullIData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[15]),32);
    bufp->fullIData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[16]),32);
    bufp->fullIData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[17]),32);
    bufp->fullIData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[18]),32);
    bufp->fullIData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[19]),32);
    bufp->fullIData(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[20]),32);
    bufp->fullIData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[21]),32);
    bufp->fullIData(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[22]),32);
    bufp->fullIData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[23]),32);
    bufp->fullIData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[24]),32);
    bufp->fullIData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[25]),32);
    bufp->fullIData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[26]),32);
    bufp->fullIData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[27]),32);
    bufp->fullIData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[28]),32);
    bufp->fullIData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[29]),32);
    bufp->fullIData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[30]),32);
    bufp->fullIData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[31]),32);
    bufp->fullBit(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu_u0__idu_rd_wen));
    bufp->fullBit(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullIData(oldp+636,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+642,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+643,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+644,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                   << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullCData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+649,((0xffU & ((IData)(7U) 
                                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                           << 1U)))),8);
    bufp->fullCData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullIData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),32);
    bufp->fullIData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullBit(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullCData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullCData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_state),4);
    bufp->fullCData(oldp+658,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i)),5);
    bufp->fullBit(oldp+659,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i)))));
    bufp->fullBit(oldp+660,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i)))));
    bufp->fullCData(oldp+661,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                 & (0xcU == (0x1cU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))) 
                                << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                            & (8U == 
                                               (0x1cU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))) 
                                           << 2U) | 
                                          ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                             & (4U 
                                                == 
                                                (0x1cU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))) 
                                            << 1U) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                              & (0U 
                                                 == 
                                                 (0x1cU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i))))))),4);
    bufp->fullBit(oldp+662,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i)))));
    bufp->fullCData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+697,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+698,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+699,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+700,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+701,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+702,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+703,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+704,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+705,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+706,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullCData(oldp+707,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                   << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r))),2);
    bufp->fullQData(oldp+708,((((QData)((IData)(((1U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                  : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((1U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                              ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                              : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))))),64);
    bufp->fullCData(oldp+710,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                     | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                          << 0x1eU) 
                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                             << 0x1cU) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                << 0x1aU) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                   << 0x18U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                      << 0x16U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                         << 0x14U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                            << 0x12U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                               << 0x10U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                  << 0xeU) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                     << 0xcU) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                        << 0xaU) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                           << 8U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                              << 6U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                        >> (0x1fU & 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                             << 1U)))))),2);
    bufp->fullQData(oldp+711,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                 ? (((QData)((IData)(
                                                     ((1U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                       : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((1U 
                                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                                   : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))))
                                 : 0ULL) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                              ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                              : 0ULL) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                ? (
                                                   ((QData)((IData)(
                                                                    (0xffU 
                                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                         ? 
                                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                          ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 0x38U))
                                                                          : 0U)
                                                                         : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r7))))) 
                                                    << 0x38U) 
                                                   | (((QData)((IData)(
                                                                       (0xffU 
                                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                            ? 
                                                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                             ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 0x30U))
                                                                             : 0U)
                                                                            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r6))))) 
                                                       << 0x30U) 
                                                      | (((QData)((IData)(
                                                                          (0xffU 
                                                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                               ? 
                                                                              ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                                ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 0x28U))
                                                                                : 0U)
                                                                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r5))))) 
                                                          << 0x28U) 
                                                         | (((QData)((IData)(
                                                                             (0xffU 
                                                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                                 ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 0x20U))
                                                                                 : 0U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r4))))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                                 ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 0x18U))
                                                                                 : 0U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                                                << 0x18U) 
                                                                               | ((0xff0000U 
                                                                                & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                                 ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 0x10U))
                                                                                 : 0U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                                                << 0x10U)) 
                                                                                | ((0xff00U 
                                                                                & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                                 ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 8U))
                                                                                 : 0U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                                                << 8U)) 
                                                                                | (0xffU 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                                 ? (IData)(vlSelf->__VdfgTmp_hf134a362__0)
                                                                                 : 0U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))))))))
                                                : 0ULL)))),64);
    bufp->fullBit(oldp+713,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                     << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                   >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)))));
    bufp->fullBit(oldp+714,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+715,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+716,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+717,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+718,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+719,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+720,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+721,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+722,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+723,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+724,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+725,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+726,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+727,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+728,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+729,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+730,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+731,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+732,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+733,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+734,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+735,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+736,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+737,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+738,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+739,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+740,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+741,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+742,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+743,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+744,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+745,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+746,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+747,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullIData(oldp+748,(((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
                                ? 0U : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
                                         ? ((0x4000U 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                             ? ((0x2000U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                 ? 0U
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h56d28e90__0)
                                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h56d2889a__0)))
                                             : ((0x2000U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                 ? 
                                                ((0x1000U 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                  ? 0U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state))
                                                   ? (IData)(vlSelf->__VdfgTmp_hfe507537__0)
                                                   : 0U))
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                  ? 
                                                 (((- (IData)(
                                                              ((2U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                                                               & (IData)(
                                                                         (vlSelf->__VdfgTmp_hfe507537__0 
                                                                          >> 0xfU))))) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h56d28e90__0))
                                                  : 
                                                 (((- (IData)(
                                                              ((2U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                                                               & (IData)(
                                                                         (vlSelf->__VdfgTmp_hfe507537__0 
                                                                          >> 7U))))) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h56d2889a__0)))))
                                         : 0U))),32);
    bufp->fullBit(oldp+749,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_ready_i))));
    bufp->fullIData(oldp+750,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state))
                                ? (IData)(vlSelf->__VdfgTmp_hfe507537__0)
                                : 0U)),32);
    bufp->fullBit(oldp+751,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_last_i))));
    bufp->fullBit(oldp+752,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu_u0__idu_rd_wen)
                              : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu_u0__idu_rd_wen)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rd_wen)))));
    bufp->fullCData(oldp+753,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+754,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullIData(oldp+755,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+756,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+757,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+758,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullBit(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+761,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+762,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullCData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullCData(oldp+764,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+765,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullCData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullWData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullBit(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_int_o));
    bufp->fullSData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullBit(oldp+775,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+776,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+777,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+778,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+779,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+780,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+781,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+784,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+786,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+787,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+789,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullCData(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullSData(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullSData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullBit(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+798,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullCData(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullSData(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+820,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+821,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+822,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+823,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+824,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+826,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+828,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+829,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullCData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+839,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+840,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                   >> 7U))));
    bufp->fullBit(oldp+841,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullIData(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullCData(oldp+846,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h299493e7__0)
                                ? 0xfU : 0U)),4);
    bufp->fullCData(oldp+847,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+848,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+849,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullCData(oldp+850,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),4);
    bufp->fullIData(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w),32);
    bufp->fullBit(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullIData(oldp+853,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),30);
    bufp->fullIData(oldp+854,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),29);
    bufp->fullBit(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel));
    bufp->fullBit(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel));
    bufp->fullBit(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable));
    bufp->fullBit(oldp+858,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel))));
    bufp->fullBit(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_psel));
    bufp->fullBit(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullCData(oldp+867,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullIData(oldp+868,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullBit(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullIData(oldp+871,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullIData(oldp+872,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullBit(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+877,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                         >> 1U))),13);
    bufp->fullSData(oldp+878,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+879,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                     >> 0xaU))),2);
    bufp->fullIData(oldp+880,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullCData(oldp+881,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),3);
    bufp->fullCData(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullBit(oldp+884,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+885,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullBit(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_bready));
    bufp->fullBit(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_rready));
    bufp->fullBit(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_w_last_i));
    bufp->fullCData(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_ready_i));
    bufp->fullCData(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19),4);
    bufp->fullBit(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_last_i));
    bufp->fullBit(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4));
    bufp->fullBit(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_bready));
    bufp->fullBit(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_rready));
    bufp->fullBit(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__nodeIn_awready));
    bufp->fullBit(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAROI_in_0_arready_T_4));
    bufp->fullBit(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+939,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+940,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+941,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+942,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+943,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+944,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+945,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+946,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+947,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+948,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+949,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+950,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+951,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+952,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+953,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+954,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+955,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+956,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+957,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+958,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+959,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+960,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+961,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+962,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+963,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+964,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+965,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+966,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+967,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+968,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+969,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+970,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__stall));
    bufp->fullBit(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_r_ready_i));
    bufp->fullIData(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__inst),32);
    bufp->fullBit(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_r_last_i));
    bufp->fullBit(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rd_wen));
    bufp->fullIData(oldp+976,((IData)(vlSelf->__VdfgTmp_hfe507537__0)),32);
    bufp->fullBit(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__lsu_rd_wen_r));
    bufp->fullBit(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__lsu_rd_wen_w));
    bufp->fullCData(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullCData(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate),2);
    bufp->fullBit(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullCData(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+990,(vlSelf->clock));
    bufp->fullBit(oldp+991,(vlSelf->reset));
    bufp->fullSData(oldp+992,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+993,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+994,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+995,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+996,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+997,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+998,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+999,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1000,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1001,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1002,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1003,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1004,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1005,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1006,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1007,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1008,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1009,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1010,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1011,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1012,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din),4);
    bufp->fullBit(oldp+1014,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+1015,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel))));
    bufp->fullIData(oldp+1016,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1017,((1U & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_state))
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o)
                                     : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_state))
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o)
                                         : 0U)))));
    bufp->fullIData(oldp+1018,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o
                                 : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_state))
                                     ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o 
                                         << 0x18U) 
                                        | ((0xff0000U 
                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o 
                                               << 8U)) 
                                           | ((0xff00U 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o 
                                                  >> 8U)) 
                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o 
                                                 >> 0x18U))))
                                     : 0U))),32);
    bufp->fullCData(oldp+1019,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                         << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r))
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullBit(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullIData(oldp+1021,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__exu_result_r
                                 : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)
                                         ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__wr_en)
                                                  ? 
                                                 vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                                                 [(0xfffU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r)]
                                                  : 0U))
                                     : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
                                         ? 0U : ((1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
                                                  ? 
                                                 ((0x4000U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                   ? 
                                                  ((0x2000U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                    ? 0U
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h56d28e90__0)
                                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h56d2889a__0)))
                                                   : 
                                                  ((0x2000U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state))
                                                      ? (IData)(vlSelf->__VdfgTmp_hfe507537__0)
                                                      : 0U))
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                     ? 
                                                    (((- (IData)(
                                                                 ((2U 
                                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                                                                  & (IData)(
                                                                            (vlSelf->__VdfgTmp_hfe507537__0 
                                                                             >> 0xfU))))) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h56d28e90__0))
                                                     : 
                                                    (((- (IData)(
                                                                 ((2U 
                                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                                                                  & (IData)(
                                                                            (vlSelf->__VdfgTmp_hfe507537__0 
                                                                             >> 7U))))) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h56d2889a__0)))))
                                                  : 0U))))),32);
    bufp->fullIData(oldp+1022,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)
                                 ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__wr_en)
                                          ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                                         [(0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r)]
                                          : 0U))),32);
    bufp->fullBit(oldp+1023,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+1024,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                 ? 0xeU : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                            ? 0xbU : 
                                           (0xfU & 
                                            ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                              ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                 >> 0x14U)
                                              : ((3U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                  ? 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                  >> 0x10U)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                   ? 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 0xcU)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 8U)
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                     >> 4U)
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                      ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                      : 0U)))))))))),4);
    bufp->fullBit(oldp+1025,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1028,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullBit(oldp+1030,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullBit(oldp+1031,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullCData(oldp+1032,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1033,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1034,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1035,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+1036,((vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h6b154942__0 
                                >> 0x1cU)),4);
    bufp->fullBit(oldp+1037,(vlSelf->ysyxSoCFull__DOT__psram__DOT__QPI_MODE));
    bufp->fullIData(oldp+1038,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data),32);
    bufp->fullIData(oldp+1039,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullIData(oldp+1040,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bswap),32);
    bufp->fullIData(oldp+1041,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                    >> 0x18U))))),32);
    bufp->fullCData(oldp+1042,(1U),3);
    bufp->fullBit(oldp+1043,(0U));
    bufp->fullBit(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+1053,(0U),4);
    bufp->fullCData(oldp+1054,(0U),8);
    bufp->fullCData(oldp+1055,(1U),2);
    bufp->fullBit(oldp+1056,(1U));
    bufp->fullBit(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1058,(0U),32);
    bufp->fullCData(oldp+1059,(0U),3);
    bufp->fullCData(oldp+1060,(0U),2);
    bufp->fullBit(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullQData(oldp+1062,(0ULL),64);
    bufp->fullBit(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullQData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),64);
    bufp->fullBit(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_inst_t),32);
    bufp->fullIData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_result_t),32);
    bufp->fullCData(oldp+1076,(2U),2);
    bufp->fullCData(oldp+1077,(2U),3);
    bufp->fullCData(oldp+1078,(3U),3);
    bufp->fullCData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_cnt),8);
    bufp->fullBit(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__carry_flag));
    bufp->fullBit(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__signed_flag));
    bufp->fullCData(oldp+1082,(0U),5);
    bufp->fullIData(oldp+1083,(0xdU),32);
    bufp->fullIData(oldp+1084,(0xcU),32);
    bufp->fullIData(oldp+1085,(0x15U),32);
    bufp->fullIData(oldp+1086,(0x20U),32);
    bufp->fullIData(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__inst_t),32);
    bufp->fullCData(oldp+1088,(0x35U),8);
    bufp->fullCData(oldp+1089,(4U),3);
    bufp->fullBit(oldp+1090,(0U));
    bufp->fullBit(oldp+1091,(1U));
    bufp->fullCData(oldp+1092,(0x15U),8);
    bufp->fullCData(oldp+1093,(0xebU),8);
    bufp->fullCData(oldp+1094,(0x38U),8);
    bufp->fullIData(oldp+1095,(0x64U),32);
    bufp->fullIData(oldp+1096,(0x18U),32);
    bufp->fullIData(oldp+1097,(9U),32);
    bufp->fullIData(oldp+1098,(2U),32);
    bufp->fullIData(oldp+1099,(4U),32);
    bufp->fullIData(oldp+1100,(0x2000U),32);
    bufp->fullIData(oldp+1101,(0x2710U),32);
    bufp->fullIData(oldp+1102,(0x30cU),32);
    bufp->fullCData(oldp+1103,(7U),4);
    bufp->fullCData(oldp+1104,(3U),4);
    bufp->fullCData(oldp+1105,(5U),4);
    bufp->fullCData(oldp+1106,(4U),4);
    bufp->fullCData(oldp+1107,(6U),4);
    bufp->fullCData(oldp+1108,(2U),4);
    bufp->fullCData(oldp+1109,(1U),4);
    bufp->fullSData(oldp+1110,(0x21U),13);
    bufp->fullCData(oldp+1111,(8U),4);
    bufp->fullCData(oldp+1112,(9U),4);
    bufp->fullIData(oldp+1113,(0xaU),32);
    bufp->fullIData(oldp+1114,(0x10U),32);
    bufp->fullIData(oldp+1115,(6U),32);
    bufp->fullIData(oldp+1116,(0x11U),32);
    bufp->fullIData(oldp+1117,(0x30000000U),32);
    bufp->fullIData(oldp+1118,(0x3fffffffU),32);
    bufp->fullIData(oldp+1119,(8U),32);
    bufp->fullBit(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullIData(oldp+1121,(1U),32);
    bufp->fullCData(oldp+1122,(0xaU),4);
    bufp->fullIData(oldp+1123,(0xbU),32);
    bufp->fullIData(oldp+1124,(5U),32);
    bufp->fullCData(oldp+1125,(5U),3);
}
