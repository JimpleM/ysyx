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
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBus(c+969,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+970,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+971,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+972,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+973,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+974,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+975,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+976,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+977,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+978,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+979,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+980,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+981,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+982,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+983,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+984,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+985,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+986,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+987,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+988,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBus(c+969,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+970,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+971,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+972,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+973,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+974,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+975,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+976,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+977,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+978,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+979,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+980,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+981,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+982,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+983,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+984,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+985,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+986,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+987,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+988,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+11,"spi_sck", false,-1);
    tracep->declBus(c+12,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+13,"spi_mosi", false,-1);
    tracep->declBit(c+989,"spi_miso", false,-1);
    tracep->declBit(c+987,"uart_rx", false,-1);
    tracep->declBit(c+988,"uart_tx", false,-1);
    tracep->declBit(c+990,"psram_sck", false,-1);
    tracep->declBit(c+991,"psram_ce_n", false,-1);
    tracep->declBus(c+863,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+992,"sdram_clk", false,-1);
    tracep->declBit(c+14,"sdram_cke", false,-1);
    tracep->declBit(c+15,"sdram_cs", false,-1);
    tracep->declBit(c+16,"sdram_ras", false,-1);
    tracep->declBit(c+17,"sdram_cas", false,-1);
    tracep->declBit(c+18,"sdram_we", false,-1);
    tracep->declBus(c+19,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+20,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+21,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+22,"sdram_dq", false,-1, 15,0);
    tracep->declBus(c+969,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+970,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+971,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+972,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+973,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+974,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+975,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+976,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+977,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+978,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+979,"ps2_clk", false,-1);
    tracep->declBit(c+980,"ps2_data", false,-1);
    tracep->declBus(c+981,"vga_r", false,-1, 7,0);
    tracep->declBus(c+982,"vga_g", false,-1, 7,0);
    tracep->declBus(c+983,"vga_b", false,-1, 7,0);
    tracep->declBit(c+984,"vga_hsync", false,-1);
    tracep->declBit(c+985,"vga_vsync", false,-1);
    tracep->declBit(c+986,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBus(c+823,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+191,"in_psel", false,-1);
    tracep->declBit(c+192,"in_penable", false,-1);
    tracep->declBus(c+1012,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+193,"in_pwrite", false,-1);
    tracep->declBus(c+194,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+195,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+864,"in_pready", false,-1);
    tracep->declBus(c+865,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+824,"in_pslverr", false,-1);
    tracep->declBus(c+823,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+191,"out_psel", false,-1);
    tracep->declBit(c+192,"out_penable", false,-1);
    tracep->declBus(c+1012,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+193,"out_pwrite", false,-1);
    tracep->declBus(c+194,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+195,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+864,"out_pready", false,-1);
    tracep->declBus(c+865,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+824,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+191,"auto_in_psel", false,-1);
    tracep->declBit(c+192,"auto_in_penable", false,-1);
    tracep->declBit(c+193,"auto_in_pwrite", false,-1);
    tracep->declBus(c+823,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1012,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+194,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+195,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+864,"auto_in_pready", false,-1);
    tracep->declBit(c+824,"auto_in_pslverr", false,-1);
    tracep->declBus(c+865,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+699,"auto_out_6_psel", false,-1);
    tracep->declBit(c+700,"auto_out_6_penable", false,-1);
    tracep->declBit(c+193,"auto_out_6_pwrite", false,-1);
    tracep->declBus(c+823,"auto_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1012,"auto_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+194,"auto_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+195,"auto_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+761,"auto_out_6_pready", false,-1);
    tracep->declBit(c+1013,"auto_out_6_pslverr", false,-1);
    tracep->declBus(c+23,"auto_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+701,"auto_out_5_psel", false,-1);
    tracep->declBit(c+702,"auto_out_5_penable", false,-1);
    tracep->declBit(c+193,"auto_out_5_pwrite", false,-1);
    tracep->declBus(c+825,"auto_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1012,"auto_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+194,"auto_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+195,"auto_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1014,"auto_out_5_pready", false,-1);
    tracep->declBit(c+1015,"auto_out_5_pslverr", false,-1);
    tracep->declBus(c+1016,"auto_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+703,"auto_out_4_psel", false,-1);
    tracep->declBit(c+704,"auto_out_4_penable", false,-1);
    tracep->declBit(c+193,"auto_out_4_pwrite", false,-1);
    tracep->declBus(c+826,"auto_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1012,"auto_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+194,"auto_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+195,"auto_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1017,"auto_out_4_pready", false,-1);
    tracep->declBit(c+1018,"auto_out_4_pslverr", false,-1);
    tracep->declBus(c+1019,"auto_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+705,"auto_out_3_psel", false,-1);
    tracep->declBit(c+706,"auto_out_3_penable", false,-1);
    tracep->declBit(c+193,"auto_out_3_pwrite", false,-1);
    tracep->declBus(c+826,"auto_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1012,"auto_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+194,"auto_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+195,"auto_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1020,"auto_out_3_pready", false,-1);
    tracep->declBit(c+1021,"auto_out_3_pslverr", false,-1);
    tracep->declBus(c+1022,"auto_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+827,"auto_out_2_psel", false,-1);
    tracep->declBit(c+707,"auto_out_2_penable", false,-1);
    tracep->declBit(c+193,"auto_out_2_pwrite", false,-1);
    tracep->declBus(c+823,"auto_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1012,"auto_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+194,"auto_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+195,"auto_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+993,"auto_out_2_pready", false,-1);
    tracep->declBit(c+1013,"auto_out_2_pslverr", false,-1);
    tracep->declBus(c+196,"auto_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+828,"auto_out_1_psel", false,-1);
    tracep->declBit(c+829,"auto_out_1_penable", false,-1);
    tracep->declBit(c+193,"auto_out_1_pwrite", false,-1);
    tracep->declBus(c+826,"auto_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1012,"auto_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+194,"auto_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+195,"auto_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+830,"auto_out_1_pready", false,-1);
    tracep->declBit(c+1013,"auto_out_1_pslverr", false,-1);
    tracep->declBus(c+994,"auto_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+831,"auto_out_0_psel", false,-1);
    tracep->declBit(c+832,"auto_out_0_penable", false,-1);
    tracep->declBit(c+193,"auto_out_0_pwrite", false,-1);
    tracep->declBus(c+825,"auto_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1012,"auto_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+194,"auto_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+195,"auto_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+24,"auto_out_0_pready", false,-1);
    tracep->declBit(c+1013,"auto_out_0_pslverr", false,-1);
    tracep->declBus(c+25,"auto_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+833,"sel_0", false,-1);
    tracep->declBit(c+834,"sel_1", false,-1);
    tracep->declBit(c+835,"sel_2", false,-1);
    tracep->declBit(c+836,"sel_3", false,-1);
    tracep->declBit(c+837,"sel_4", false,-1);
    tracep->declBit(c+838,"sel_5", false,-1);
    tracep->declBit(c+839,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+197,"auto_in_awready", false,-1);
    tracep->declBit(c+198,"auto_in_awvalid", false,-1);
    tracep->declBus(c+199,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+200,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+201,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+197,"auto_in_wready", false,-1);
    tracep->declBit(c+202,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+203,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+205,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+866,"auto_in_bready", false,-1);
    tracep->declBit(c+867,"auto_in_bvalid", false,-1);
    tracep->declBus(c+206,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+708,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+207,"auto_in_arready", false,-1);
    tracep->declBit(c+208,"auto_in_arvalid", false,-1);
    tracep->declBus(c+209,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+210,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+211,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+868,"auto_in_rready", false,-1);
    tracep->declBit(c+869,"auto_in_rvalid", false,-1);
    tracep->declBus(c+212,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+709,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+708,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+191,"auto_out_psel", false,-1);
    tracep->declBit(c+192,"auto_out_penable", false,-1);
    tracep->declBit(c+193,"auto_out_pwrite", false,-1);
    tracep->declBus(c+823,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+194,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+195,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+864,"auto_out_pready", false,-1);
    tracep->declBit(c+824,"auto_out_pslverr", false,-1);
    tracep->declBus(c+865,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+192,"nodeOut_penable", false,-1);
    tracep->declBus(c+213,"state", false,-1, 1,0);
    tracep->declBit(c+207,"accept_read", false,-1);
    tracep->declBit(c+197,"accept_write", false,-1);
    tracep->declBit(c+214,"is_write_r", false,-1);
    tracep->declBit(c+193,"is_write", false,-1);
    tracep->declBus(c+212,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+206,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+215,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+216,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+217,"awaddr_reg", false,-1, 31,0);
    tracep->declQuad(c+218,"wdata_reg_r", false,-1, 63,0);
    tracep->declQuad(c+220,"wdata_reg", false,-1, 63,0);
    tracep->declBus(c+222,"wstrb_reg_r", false,-1, 7,0);
    tracep->declBus(c+223,"wstrb_reg", false,-1, 7,0);
    tracep->declBus(c+840,"resp", false,-1, 1,0);
    tracep->declBus(c+224,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+708,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+869,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+225,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+867,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+226,"auto_in_awready", false,-1);
    tracep->declBit(c+227,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1023,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+228,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1024,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+229,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1025,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+230,"auto_in_wready", false,-1);
    tracep->declBit(c+231,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+232,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+234,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+235,"auto_in_wlast", false,-1);
    tracep->declBit(c+236,"auto_in_bready", false,-1);
    tracep->declBit(c+870,"auto_in_bvalid", false,-1);
    tracep->declBus(c+871,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+711,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+237,"auto_in_arready", false,-1);
    tracep->declBit(c+238,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1023,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+239,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1024,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+240,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1025,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+241,"auto_in_rready", false,-1);
    tracep->declBit(c+872,"auto_in_rvalid", false,-1);
    tracep->declBus(c+873,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+712,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+995,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+874,"auto_in_rlast", false,-1);
    tracep->declBit(c+875,"auto_out_awready", false,-1);
    tracep->declBit(c+242,"auto_out_awvalid", false,-1);
    tracep->declBus(c+199,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+200,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+201,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+243,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+876,"auto_out_wready", false,-1);
    tracep->declBit(c+244,"auto_out_wvalid", false,-1);
    tracep->declQuad(c+203,"auto_out_wdata", false,-1, 63,0);
    tracep->declBus(c+205,"auto_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+245,"auto_out_wlast", false,-1);
    tracep->declBit(c+877,"auto_out_bready", false,-1);
    tracep->declBit(c+878,"auto_out_bvalid", false,-1);
    tracep->declBus(c+871,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+879,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+880,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+881,"auto_out_arready", false,-1);
    tracep->declBit(c+246,"auto_out_arvalid", false,-1);
    tracep->declBus(c+209,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+210,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+211,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+247,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+241,"auto_out_rready", false,-1);
    tracep->declBit(c+872,"auto_out_rvalid", false,-1);
    tracep->declBus(c+873,"auto_out_rid", false,-1, 3,0);
    tracep->declQuad(c+712,"auto_out_rdata", false,-1, 63,0);
    tracep->declBus(c+995,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+714,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+882,"auto_out_rlast", false,-1);
    tracep->declBit(c+244,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+248,"w_idle", false,-1);
    tracep->declBit(c+883,"in_awready", false,-1);
    tracep->declBit(c+249,"busy", false,-1);
    tracep->declBus(c+250,"r_addr", false,-1, 31,0);
    tracep->declBus(c+251,"r_len", false,-1, 7,0);
    tracep->declBus(c+252,"len", false,-1, 7,0);
    tracep->declBus(c+253,"addr", false,-1, 31,0);
    tracep->declBit(c+254,"busy_1", false,-1);
    tracep->declBus(c+255,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+256,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+257,"len_1", false,-1, 7,0);
    tracep->declBus(c+258,"addr_1", false,-1, 31,0);
    tracep->declBit(c+259,"wbeats_latched", false,-1);
    tracep->declBit(c+242,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+260,"wbeats_valid", false,-1);
    tracep->declBus(c+261,"w_counter", false,-1, 8,0);
    tracep->declBus(c+262,"w_todo", false,-1, 8,0);
    tracep->declBit(c+245,"w_last", false,-1);
    tracep->declBit(c+877,"nodeOut_bready", false,-1);
    tracep->declBus(c+263,"error_0", false,-1, 1,0);
    tracep->declBus(c+264,"error_1", false,-1, 1,0);
    tracep->declBus(c+265,"error_2", false,-1, 1,0);
    tracep->declBus(c+266,"error_3", false,-1, 1,0);
    tracep->declBus(c+267,"error_4", false,-1, 1,0);
    tracep->declBus(c+268,"error_5", false,-1, 1,0);
    tracep->declBus(c+269,"error_6", false,-1, 1,0);
    tracep->declBus(c+270,"error_7", false,-1, 1,0);
    tracep->declBus(c+271,"error_8", false,-1, 1,0);
    tracep->declBus(c+272,"error_9", false,-1, 1,0);
    tracep->declBus(c+273,"error_10", false,-1, 1,0);
    tracep->declBus(c+274,"error_11", false,-1, 1,0);
    tracep->declBus(c+275,"error_12", false,-1, 1,0);
    tracep->declBus(c+276,"error_13", false,-1, 1,0);
    tracep->declBus(c+277,"error_14", false,-1, 1,0);
    tracep->declBus(c+278,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+237,"io_enq_ready", false,-1);
    tracep->declBit(c+238,"io_enq_valid", false,-1);
    tracep->declBus(c+1023,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+239,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1024,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+240,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1025,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+884,"io_deq_ready", false,-1);
    tracep->declBit(c+246,"io_deq_valid", false,-1);
    tracep->declBus(c+209,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+279,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+280,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+211,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+281,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+282,"ram", false,-1, 48,0);
    tracep->declBit(c+284,"full", false,-1);
    tracep->declBit(c+246,"io_deq_valid_0", false,-1);
    tracep->declBit(c+885,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+226,"io_enq_ready", false,-1);
    tracep->declBit(c+227,"io_enq_valid", false,-1);
    tracep->declBus(c+1023,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+228,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1024,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+229,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1025,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+886,"io_deq_ready", false,-1);
    tracep->declBit(c+285,"io_deq_valid", false,-1);
    tracep->declBus(c+199,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+286,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+287,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+201,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+288,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+289,"ram", false,-1, 48,0);
    tracep->declBit(c+291,"full", false,-1);
    tracep->declBit(c+285,"io_deq_valid_0", false,-1);
    tracep->declBit(c+887,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+230,"io_enq_ready", false,-1);
    tracep->declBit(c+231,"io_enq_valid", false,-1);
    tracep->declQuad(c+232,"io_enq_bits_data", false,-1, 63,0);
    tracep->declBus(c+234,"io_enq_bits_strb", false,-1, 7,0);
    tracep->declBit(c+235,"io_enq_bits_last", false,-1);
    tracep->declBit(c+888,"io_deq_ready", false,-1);
    tracep->declBit(c+292,"io_deq_valid", false,-1);
    tracep->declQuad(c+203,"io_deq_bits_data", false,-1, 63,0);
    tracep->declBus(c+205,"io_deq_bits_strb", false,-1, 7,0);
    tracep->declBit(c+293,"io_deq_bits_last", false,-1);
    tracep->declArray(c+294,"ram", false,-1, 72,0);
    tracep->declBit(c+297,"full", false,-1);
    tracep->declBit(c+292,"io_deq_valid_0", false,-1);
    tracep->declBit(c+889,"do_enq", false,-1);
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
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+890,"auto_in_awready", false,-1);
    tracep->declBit(c+298,"auto_in_awvalid", false,-1);
    tracep->declBus(c+199,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+299,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+715,"auto_in_wready", false,-1);
    tracep->declBit(c+300,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+203,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+205,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+891,"auto_in_bready", false,-1);
    tracep->declBit(c+301,"auto_in_bvalid", false,-1);
    tracep->declBus(c+302,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+303,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+892,"auto_in_arready", false,-1);
    tracep->declBit(c+304,"auto_in_arvalid", false,-1);
    tracep->declBus(c+209,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+305,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+893,"auto_in_rready", false,-1);
    tracep->declBit(c+306,"auto_in_rvalid", false,-1);
    tracep->declBus(c+307,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+308,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+310,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+892,"nodeIn_arready", false,-1);
    tracep->declBit(c+890,"nodeIn_awready", false,-1);
    tracep->declBit(c+311,"w_sel0", false,-1);
    tracep->declBit(c+301,"w_full", false,-1);
    tracep->declBus(c+302,"w_id", false,-1, 3,0);
    tracep->declBit(c+312,"r_sel1", false,-1);
    tracep->declBit(c+313,"w_sel1", false,-1);
    tracep->declBit(c+306,"r_full", false,-1);
    tracep->declBus(c+307,"r_id", false,-1, 3,0);
    tracep->declBit(c+894,"ren", false,-1);
    tracep->declBit(c+314,"rdata_REG", false,-1);
    tracep->declBus(c+315,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+316,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+317,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+318,"rdata_r3", false,-1, 7,0);
    tracep->declBus(c+319,"rdata_r4", false,-1, 7,0);
    tracep->declBus(c+320,"rdata_r5", false,-1, 7,0);
    tracep->declBus(c+321,"rdata_r6", false,-1, 7,0);
    tracep->declBus(c+322,"rdata_r7", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+323,"R0_addr", false,-1, 9,0);
    tracep->declBit(c+894,"R0_en", false,-1);
    tracep->declBit(c+967,"R0_clk", false,-1);
    tracep->declQuad(c+324,"R0_data", false,-1, 63,0);
    tracep->declBus(c+326,"W0_addr", false,-1, 9,0);
    tracep->declBit(c+895,"W0_en", false,-1);
    tracep->declBit(c+967,"W0_clk", false,-1);
    tracep->declQuad(c+203,"W0_data", false,-1, 63,0);
    tracep->declBus(c+205,"W0_mask", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+226,"auto_in_awready", false,-1);
    tracep->declBit(c+227,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1023,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+228,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1024,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+229,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1025,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+230,"auto_in_wready", false,-1);
    tracep->declBit(c+231,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+232,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+234,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+235,"auto_in_wlast", false,-1);
    tracep->declBit(c+236,"auto_in_bready", false,-1);
    tracep->declBit(c+870,"auto_in_bvalid", false,-1);
    tracep->declBus(c+871,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+711,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+237,"auto_in_arready", false,-1);
    tracep->declBit(c+238,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1023,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+239,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1024,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+240,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1025,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+241,"auto_in_rready", false,-1);
    tracep->declBit(c+872,"auto_in_rvalid", false,-1);
    tracep->declBus(c+873,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+712,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+995,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+874,"auto_in_rlast", false,-1);
    tracep->declBit(c+226,"auto_out_awready", false,-1);
    tracep->declBit(c+227,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1023,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+228,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1024,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+229,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1025,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+230,"auto_out_wready", false,-1);
    tracep->declBit(c+231,"auto_out_wvalid", false,-1);
    tracep->declQuad(c+232,"auto_out_wdata", false,-1, 63,0);
    tracep->declBus(c+234,"auto_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+235,"auto_out_wlast", false,-1);
    tracep->declBit(c+236,"auto_out_bready", false,-1);
    tracep->declBit(c+870,"auto_out_bvalid", false,-1);
    tracep->declBus(c+871,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+711,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+237,"auto_out_arready", false,-1);
    tracep->declBit(c+238,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1023,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+239,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1024,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+240,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1025,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+241,"auto_out_rready", false,-1);
    tracep->declBit(c+872,"auto_out_rvalid", false,-1);
    tracep->declBus(c+873,"auto_out_rid", false,-1, 3,0);
    tracep->declQuad(c+712,"auto_out_rdata", false,-1, 63,0);
    tracep->declBus(c+995,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+874,"auto_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+896,"auto_in_awready", false,-1);
    tracep->declBit(c+327,"auto_in_awvalid", false,-1);
    tracep->declBus(c+199,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+200,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+201,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+876,"auto_in_wready", false,-1);
    tracep->declBit(c+244,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+203,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+205,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+245,"auto_in_wlast", false,-1);
    tracep->declBit(c+877,"auto_in_bready", false,-1);
    tracep->declBit(c+878,"auto_in_bvalid", false,-1);
    tracep->declBus(c+871,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+879,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+897,"auto_in_arready", false,-1);
    tracep->declBit(c+328,"auto_in_arvalid", false,-1);
    tracep->declBus(c+209,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+210,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+211,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+241,"auto_in_rready", false,-1);
    tracep->declBit(c+872,"auto_in_rvalid", false,-1);
    tracep->declBus(c+873,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+712,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+995,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+882,"auto_in_rlast", false,-1);
    tracep->declBit(c+890,"auto_out_2_awready", false,-1);
    tracep->declBit(c+298,"auto_out_2_awvalid", false,-1);
    tracep->declBus(c+199,"auto_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+299,"auto_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+715,"auto_out_2_wready", false,-1);
    tracep->declBit(c+300,"auto_out_2_wvalid", false,-1);
    tracep->declQuad(c+203,"auto_out_2_wdata", false,-1, 63,0);
    tracep->declBus(c+205,"auto_out_2_wstrb", false,-1, 7,0);
    tracep->declBit(c+891,"auto_out_2_bready", false,-1);
    tracep->declBit(c+301,"auto_out_2_bvalid", false,-1);
    tracep->declBus(c+302,"auto_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+303,"auto_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+892,"auto_out_2_arready", false,-1);
    tracep->declBit(c+304,"auto_out_2_arvalid", false,-1);
    tracep->declBus(c+209,"auto_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+305,"auto_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+893,"auto_out_2_rready", false,-1);
    tracep->declBit(c+306,"auto_out_2_rvalid", false,-1);
    tracep->declBus(c+307,"auto_out_2_rid", false,-1, 3,0);
    tracep->declQuad(c+308,"auto_out_2_rdata", false,-1, 63,0);
    tracep->declBus(c+310,"auto_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+329,"auto_out_1_awvalid", false,-1);
    tracep->declBit(c+330,"auto_out_1_wvalid", false,-1);
    tracep->declBit(c+331,"auto_out_1_arready", false,-1);
    tracep->declBit(c+332,"auto_out_1_arvalid", false,-1);
    tracep->declBus(c+209,"auto_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+333,"auto_out_1_araddr", false,-1, 29,0);
    tracep->declBus(c+211,"auto_out_1_arsize", false,-1, 2,0);
    tracep->declBit(c+716,"auto_out_1_rready", false,-1);
    tracep->declBit(c+334,"auto_out_1_rvalid", false,-1);
    tracep->declBus(c+335,"auto_out_1_rid", false,-1, 3,0);
    tracep->declQuad(c+336,"auto_out_1_rdata", false,-1, 63,0);
    tracep->declBit(c+197,"auto_out_0_awready", false,-1);
    tracep->declBit(c+198,"auto_out_0_awvalid", false,-1);
    tracep->declBus(c+199,"auto_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+200,"auto_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+201,"auto_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+197,"auto_out_0_wready", false,-1);
    tracep->declBit(c+202,"auto_out_0_wvalid", false,-1);
    tracep->declQuad(c+203,"auto_out_0_wdata", false,-1, 63,0);
    tracep->declBus(c+205,"auto_out_0_wstrb", false,-1, 7,0);
    tracep->declBit(c+866,"auto_out_0_bready", false,-1);
    tracep->declBit(c+867,"auto_out_0_bvalid", false,-1);
    tracep->declBus(c+206,"auto_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+708,"auto_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+207,"auto_out_0_arready", false,-1);
    tracep->declBit(c+208,"auto_out_0_arvalid", false,-1);
    tracep->declBus(c+209,"auto_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+210,"auto_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+211,"auto_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+868,"auto_out_0_rready", false,-1);
    tracep->declBit(c+869,"auto_out_0_rvalid", false,-1);
    tracep->declBus(c+212,"auto_out_0_rid", false,-1, 3,0);
    tracep->declQuad(c+709,"auto_out_0_rdata", false,-1, 63,0);
    tracep->declBus(c+708,"auto_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+878,"in_0_bvalid", false,-1);
    tracep->declBit(c+872,"in_0_rvalid", false,-1);
    tracep->declBit(c+896,"nodeIn_awready", false,-1);
    tracep->declBit(c+338,"requestARIO_0_0", false,-1);
    tracep->declBit(c+339,"requestARIO_0_1", false,-1);
    tracep->declBit(c+340,"requestARIO_0_2", false,-1);
    tracep->declBit(c+341,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+342,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+343,"requestAWIO_0_2", false,-1);
    tracep->declBit(c+344,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+345,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+346,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+347,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+348,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+349,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+350,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+351,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+352,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+353,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+354,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+355,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+356,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+357,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+358,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+359,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+360,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+361,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+362,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+363,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+364,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+365,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+366,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+367,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+368,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+369,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+370,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+371,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+372,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+373,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+374,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+375,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+376,"latched", false,-1);
    tracep->declBit(c+377,"in_0_awvalid", false,-1);
    tracep->declBit(c+378,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+379,"in_0_wvalid", false,-1);
    tracep->declBit(c+380,"idle_3", false,-1);
    tracep->declBit(c+898,"anyValid", false,-1);
    tracep->declBus(c+899,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+381,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+900,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+901,"prefixOR_1", false,-1);
    tracep->declBit(c+902,"winner_3_1", false,-1);
    tracep->declBit(c+903,"winner_3_2", false,-1);
    tracep->declBit(c+382,"state_3_0", false,-1);
    tracep->declBit(c+383,"state_3_1", false,-1);
    tracep->declBit(c+384,"state_3_2", false,-1);
    tracep->declBit(c+904,"muxState_3_0", false,-1);
    tracep->declBit(c+905,"muxState_3_1", false,-1);
    tracep->declBit(c+906,"muxState_3_2", false,-1);
    tracep->declBit(c+385,"idle_4", false,-1);
    tracep->declBit(c+907,"anyValid_1", false,-1);
    tracep->declBus(c+908,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+386,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+909,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+910,"winner_4_0", false,-1);
    tracep->declBit(c+911,"winner_4_2", false,-1);
    tracep->declBit(c+387,"state_4_0", false,-1);
    tracep->declBit(c+388,"state_4_2", false,-1);
    tracep->declBit(c+912,"muxState_4_0", false,-1);
    tracep->declBit(c+913,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+389,"io_enq_ready", false,-1);
    tracep->declBit(c+378,"io_enq_valid", false,-1);
    tracep->declBus(c+390,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+914,"io_deq_ready", false,-1);
    tracep->declBit(c+391,"io_deq_valid", false,-1);
    tracep->declBus(c+392,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+393,"wrap", false,-1);
    tracep->declBit(c+394,"wrap_1", false,-1);
    tracep->declBit(c+395,"maybe_full", false,-1);
    tracep->declBit(c+396,"ptr_match", false,-1);
    tracep->declBit(c+397,"empty", false,-1);
    tracep->declBit(c+398,"full", false,-1);
    tracep->declBit(c+391,"io_deq_valid_0", false,-1);
    tracep->declBit(c+915,"do_deq", false,-1);
    tracep->declBit(c+916,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+394,"R0_addr", false,-1);
    tracep->declBit(c+1026,"R0_en", false,-1);
    tracep->declBit(c+967,"R0_clk", false,-1);
    tracep->declBus(c+399,"R0_data", false,-1, 2,0);
    tracep->declBit(c+393,"W0_addr", false,-1);
    tracep->declBit(c+916,"W0_en", false,-1);
    tracep->declBit(c+967,"W0_clk", false,-1);
    tracep->declBus(c+390,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+400+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+875,"auto_in_awready", false,-1);
    tracep->declBit(c+242,"auto_in_awvalid", false,-1);
    tracep->declBus(c+199,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+200,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+201,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+243,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+876,"auto_in_wready", false,-1);
    tracep->declBit(c+244,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+203,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+205,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+245,"auto_in_wlast", false,-1);
    tracep->declBit(c+877,"auto_in_bready", false,-1);
    tracep->declBit(c+878,"auto_in_bvalid", false,-1);
    tracep->declBus(c+871,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+879,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+880,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+881,"auto_in_arready", false,-1);
    tracep->declBit(c+246,"auto_in_arvalid", false,-1);
    tracep->declBus(c+209,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+210,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+211,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+247,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+241,"auto_in_rready", false,-1);
    tracep->declBit(c+872,"auto_in_rvalid", false,-1);
    tracep->declBus(c+873,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+712,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+995,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+714,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+882,"auto_in_rlast", false,-1);
    tracep->declBit(c+896,"auto_out_awready", false,-1);
    tracep->declBit(c+327,"auto_out_awvalid", false,-1);
    tracep->declBus(c+199,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+200,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+201,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+876,"auto_out_wready", false,-1);
    tracep->declBit(c+244,"auto_out_wvalid", false,-1);
    tracep->declQuad(c+203,"auto_out_wdata", false,-1, 63,0);
    tracep->declBus(c+205,"auto_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+245,"auto_out_wlast", false,-1);
    tracep->declBit(c+877,"auto_out_bready", false,-1);
    tracep->declBit(c+878,"auto_out_bvalid", false,-1);
    tracep->declBus(c+871,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+879,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+897,"auto_out_arready", false,-1);
    tracep->declBit(c+328,"auto_out_arvalid", false,-1);
    tracep->declBus(c+209,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+210,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+211,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+241,"auto_out_rready", false,-1);
    tracep->declBit(c+872,"auto_out_rvalid", false,-1);
    tracep->declBus(c+873,"auto_out_rid", false,-1, 3,0);
    tracep->declQuad(c+712,"auto_out_rdata", false,-1, 63,0);
    tracep->declBus(c+995,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+882,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+402,"io_enq_ready", false,-1);
    tracep->declBit(c+717,"io_enq_valid", false,-1);
    tracep->declBit(c+247,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+917,"io_deq_ready", false,-1);
    tracep->declBit(c+403,"io_deq_valid", false,-1);
    tracep->declBit(c+404,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+404,"ram_real_last", false,-1);
    tracep->declBit(c+403,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+405,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+406,"io_enq_ready", false,-1);
    tracep->declBit(c+718,"io_enq_valid", false,-1);
    tracep->declBit(c+247,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+918,"io_deq_ready", false,-1);
    tracep->declBit(c+407,"io_deq_valid", false,-1);
    tracep->declBit(c+408,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+408,"ram_real_last", false,-1);
    tracep->declBit(c+407,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+409,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+410,"io_enq_ready", false,-1);
    tracep->declBit(c+719,"io_enq_valid", false,-1);
    tracep->declBit(c+247,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+919,"io_deq_ready", false,-1);
    tracep->declBit(c+411,"io_deq_valid", false,-1);
    tracep->declBit(c+412,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+412,"ram_real_last", false,-1);
    tracep->declBit(c+411,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+413,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+414,"io_enq_ready", false,-1);
    tracep->declBit(c+720,"io_enq_valid", false,-1);
    tracep->declBit(c+247,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+920,"io_deq_ready", false,-1);
    tracep->declBit(c+415,"io_deq_valid", false,-1);
    tracep->declBit(c+416,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+416,"ram_real_last", false,-1);
    tracep->declBit(c+415,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+417,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+418,"io_enq_ready", false,-1);
    tracep->declBit(c+721,"io_enq_valid", false,-1);
    tracep->declBit(c+247,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+921,"io_deq_ready", false,-1);
    tracep->declBit(c+419,"io_deq_valid", false,-1);
    tracep->declBit(c+420,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+420,"ram_real_last", false,-1);
    tracep->declBit(c+419,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+421,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+422,"io_enq_ready", false,-1);
    tracep->declBit(c+722,"io_enq_valid", false,-1);
    tracep->declBit(c+247,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+922,"io_deq_ready", false,-1);
    tracep->declBit(c+423,"io_deq_valid", false,-1);
    tracep->declBit(c+424,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+424,"ram_real_last", false,-1);
    tracep->declBit(c+423,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+425,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+426,"io_enq_ready", false,-1);
    tracep->declBit(c+723,"io_enq_valid", false,-1);
    tracep->declBit(c+247,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+923,"io_deq_ready", false,-1);
    tracep->declBit(c+427,"io_deq_valid", false,-1);
    tracep->declBit(c+428,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+428,"ram_real_last", false,-1);
    tracep->declBit(c+427,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+429,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+430,"io_enq_ready", false,-1);
    tracep->declBit(c+724,"io_enq_valid", false,-1);
    tracep->declBit(c+247,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+924,"io_deq_ready", false,-1);
    tracep->declBit(c+431,"io_deq_valid", false,-1);
    tracep->declBit(c+432,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+432,"ram_real_last", false,-1);
    tracep->declBit(c+431,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+433,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+434,"io_enq_ready", false,-1);
    tracep->declBit(c+725,"io_enq_valid", false,-1);
    tracep->declBit(c+243,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+925,"io_deq_ready", false,-1);
    tracep->declBit(c+435,"io_deq_valid", false,-1);
    tracep->declBit(c+436,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+436,"ram_real_last", false,-1);
    tracep->declBit(c+435,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+437,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+438,"io_enq_ready", false,-1);
    tracep->declBit(c+726,"io_enq_valid", false,-1);
    tracep->declBit(c+243,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+926,"io_deq_ready", false,-1);
    tracep->declBit(c+439,"io_deq_valid", false,-1);
    tracep->declBit(c+440,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+440,"ram_real_last", false,-1);
    tracep->declBit(c+439,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+441,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+442,"io_enq_ready", false,-1);
    tracep->declBit(c+727,"io_enq_valid", false,-1);
    tracep->declBit(c+243,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+927,"io_deq_ready", false,-1);
    tracep->declBit(c+443,"io_deq_valid", false,-1);
    tracep->declBit(c+444,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+444,"ram_real_last", false,-1);
    tracep->declBit(c+443,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+445,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+446,"io_enq_ready", false,-1);
    tracep->declBit(c+728,"io_enq_valid", false,-1);
    tracep->declBit(c+243,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+928,"io_deq_ready", false,-1);
    tracep->declBit(c+447,"io_deq_valid", false,-1);
    tracep->declBit(c+448,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+448,"ram_real_last", false,-1);
    tracep->declBit(c+447,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+449,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+450,"io_enq_ready", false,-1);
    tracep->declBit(c+729,"io_enq_valid", false,-1);
    tracep->declBit(c+247,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+929,"io_deq_ready", false,-1);
    tracep->declBit(c+451,"io_deq_valid", false,-1);
    tracep->declBit(c+452,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+452,"ram_real_last", false,-1);
    tracep->declBit(c+451,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+453,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+454,"io_enq_ready", false,-1);
    tracep->declBit(c+730,"io_enq_valid", false,-1);
    tracep->declBit(c+243,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+930,"io_deq_ready", false,-1);
    tracep->declBit(c+455,"io_deq_valid", false,-1);
    tracep->declBit(c+456,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+456,"ram_real_last", false,-1);
    tracep->declBit(c+455,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+457,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+458,"io_enq_ready", false,-1);
    tracep->declBit(c+731,"io_enq_valid", false,-1);
    tracep->declBit(c+243,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+931,"io_deq_ready", false,-1);
    tracep->declBit(c+459,"io_deq_valid", false,-1);
    tracep->declBit(c+460,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+460,"ram_real_last", false,-1);
    tracep->declBit(c+459,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+461,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+462,"io_enq_ready", false,-1);
    tracep->declBit(c+732,"io_enq_valid", false,-1);
    tracep->declBit(c+243,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+932,"io_deq_ready", false,-1);
    tracep->declBit(c+463,"io_deq_valid", false,-1);
    tracep->declBit(c+464,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+464,"ram_real_last", false,-1);
    tracep->declBit(c+463,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+465,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+466,"io_enq_ready", false,-1);
    tracep->declBit(c+733,"io_enq_valid", false,-1);
    tracep->declBit(c+243,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+933,"io_deq_ready", false,-1);
    tracep->declBit(c+467,"io_deq_valid", false,-1);
    tracep->declBit(c+468,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+468,"ram_real_last", false,-1);
    tracep->declBit(c+467,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+469,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+470,"io_enq_ready", false,-1);
    tracep->declBit(c+734,"io_enq_valid", false,-1);
    tracep->declBit(c+243,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+934,"io_deq_ready", false,-1);
    tracep->declBit(c+471,"io_deq_valid", false,-1);
    tracep->declBit(c+472,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+472,"ram_real_last", false,-1);
    tracep->declBit(c+471,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+473,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+474,"io_enq_ready", false,-1);
    tracep->declBit(c+735,"io_enq_valid", false,-1);
    tracep->declBit(c+243,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+935,"io_deq_ready", false,-1);
    tracep->declBit(c+475,"io_deq_valid", false,-1);
    tracep->declBit(c+476,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+476,"ram_real_last", false,-1);
    tracep->declBit(c+475,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+477,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+478,"io_enq_ready", false,-1);
    tracep->declBit(c+736,"io_enq_valid", false,-1);
    tracep->declBit(c+243,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+936,"io_deq_ready", false,-1);
    tracep->declBit(c+479,"io_deq_valid", false,-1);
    tracep->declBit(c+480,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+480,"ram_real_last", false,-1);
    tracep->declBit(c+479,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+481,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+482,"io_enq_ready", false,-1);
    tracep->declBit(c+737,"io_enq_valid", false,-1);
    tracep->declBit(c+243,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+937,"io_deq_ready", false,-1);
    tracep->declBit(c+483,"io_deq_valid", false,-1);
    tracep->declBit(c+484,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+484,"ram_real_last", false,-1);
    tracep->declBit(c+483,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+485,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+486,"io_enq_ready", false,-1);
    tracep->declBit(c+738,"io_enq_valid", false,-1);
    tracep->declBit(c+243,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+938,"io_deq_ready", false,-1);
    tracep->declBit(c+487,"io_deq_valid", false,-1);
    tracep->declBit(c+488,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+488,"ram_real_last", false,-1);
    tracep->declBit(c+487,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+489,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+490,"io_enq_ready", false,-1);
    tracep->declBit(c+739,"io_enq_valid", false,-1);
    tracep->declBit(c+243,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+939,"io_deq_ready", false,-1);
    tracep->declBit(c+491,"io_deq_valid", false,-1);
    tracep->declBit(c+492,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+492,"ram_real_last", false,-1);
    tracep->declBit(c+491,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+493,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+494,"io_enq_ready", false,-1);
    tracep->declBit(c+740,"io_enq_valid", false,-1);
    tracep->declBit(c+247,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+940,"io_deq_ready", false,-1);
    tracep->declBit(c+495,"io_deq_valid", false,-1);
    tracep->declBit(c+496,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+496,"ram_real_last", false,-1);
    tracep->declBit(c+495,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+497,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+498,"io_enq_ready", false,-1);
    tracep->declBit(c+741,"io_enq_valid", false,-1);
    tracep->declBit(c+243,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+941,"io_deq_ready", false,-1);
    tracep->declBit(c+499,"io_deq_valid", false,-1);
    tracep->declBit(c+500,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+500,"ram_real_last", false,-1);
    tracep->declBit(c+499,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+501,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+502,"io_enq_ready", false,-1);
    tracep->declBit(c+742,"io_enq_valid", false,-1);
    tracep->declBit(c+243,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+942,"io_deq_ready", false,-1);
    tracep->declBit(c+503,"io_deq_valid", false,-1);
    tracep->declBit(c+504,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+504,"ram_real_last", false,-1);
    tracep->declBit(c+503,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+505,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+506,"io_enq_ready", false,-1);
    tracep->declBit(c+743,"io_enq_valid", false,-1);
    tracep->declBit(c+247,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+943,"io_deq_ready", false,-1);
    tracep->declBit(c+507,"io_deq_valid", false,-1);
    tracep->declBit(c+508,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+508,"ram_real_last", false,-1);
    tracep->declBit(c+507,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+509,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+510,"io_enq_ready", false,-1);
    tracep->declBit(c+744,"io_enq_valid", false,-1);
    tracep->declBit(c+247,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+944,"io_deq_ready", false,-1);
    tracep->declBit(c+511,"io_deq_valid", false,-1);
    tracep->declBit(c+512,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+512,"ram_real_last", false,-1);
    tracep->declBit(c+511,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+513,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+514,"io_enq_ready", false,-1);
    tracep->declBit(c+745,"io_enq_valid", false,-1);
    tracep->declBit(c+247,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+945,"io_deq_ready", false,-1);
    tracep->declBit(c+515,"io_deq_valid", false,-1);
    tracep->declBit(c+516,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+516,"ram_real_last", false,-1);
    tracep->declBit(c+515,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+517,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+518,"io_enq_ready", false,-1);
    tracep->declBit(c+746,"io_enq_valid", false,-1);
    tracep->declBit(c+247,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+946,"io_deq_ready", false,-1);
    tracep->declBit(c+519,"io_deq_valid", false,-1);
    tracep->declBit(c+520,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+520,"ram_real_last", false,-1);
    tracep->declBit(c+519,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+521,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+522,"io_enq_ready", false,-1);
    tracep->declBit(c+747,"io_enq_valid", false,-1);
    tracep->declBit(c+247,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+947,"io_deq_ready", false,-1);
    tracep->declBit(c+523,"io_deq_valid", false,-1);
    tracep->declBit(c+524,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+524,"ram_real_last", false,-1);
    tracep->declBit(c+523,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+525,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+526,"io_enq_ready", false,-1);
    tracep->declBit(c+748,"io_enq_valid", false,-1);
    tracep->declBit(c+247,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+948,"io_deq_ready", false,-1);
    tracep->declBit(c+527,"io_deq_valid", false,-1);
    tracep->declBit(c+528,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+528,"ram_real_last", false,-1);
    tracep->declBit(c+527,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+529,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+996,"reset", false,-1);
    tracep->declBit(c+226,"auto_master_out_awready", false,-1);
    tracep->declBit(c+227,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1023,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+228,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1024,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+229,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1025,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+230,"auto_master_out_wready", false,-1);
    tracep->declBit(c+231,"auto_master_out_wvalid", false,-1);
    tracep->declQuad(c+232,"auto_master_out_wdata", false,-1, 63,0);
    tracep->declBus(c+234,"auto_master_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+235,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+236,"auto_master_out_bready", false,-1);
    tracep->declBit(c+870,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+871,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+711,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+237,"auto_master_out_arready", false,-1);
    tracep->declBit(c+238,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1023,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+239,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1024,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+240,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1025,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+241,"auto_master_out_rready", false,-1);
    tracep->declBit(c+872,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+873,"auto_master_out_rid", false,-1, 3,0);
    tracep->declQuad(c+712,"auto_master_out_rdata", false,-1, 63,0);
    tracep->declBus(c+995,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+874,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+996,"reset", false,-1);
    tracep->declBit(c+1013,"io_interrupt", false,-1);
    tracep->declBit(c+226,"io_master_awready", false,-1);
    tracep->declBit(c+227,"io_master_awvalid", false,-1);
    tracep->declBus(c+228,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1023,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1024,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+229,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1025,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+230,"io_master_wready", false,-1);
    tracep->declBit(c+231,"io_master_wvalid", false,-1);
    tracep->declQuad(c+232,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+234,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+235,"io_master_wlast", false,-1);
    tracep->declBit(c+236,"io_master_bready", false,-1);
    tracep->declBit(c+870,"io_master_bvalid", false,-1);
    tracep->declBus(c+711,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+871,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+237,"io_master_arready", false,-1);
    tracep->declBit(c+238,"io_master_arvalid", false,-1);
    tracep->declBus(c+239,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1023,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1024,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+240,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1025,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+241,"io_master_rready", false,-1);
    tracep->declBit(c+872,"io_master_rvalid", false,-1);
    tracep->declBus(c+995,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+712,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+874,"io_master_rlast", false,-1);
    tracep->declBus(c+873,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1027,"io_slave_awready", false,-1);
    tracep->declBit(c+1013,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1028,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1023,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1024,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1029,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1030,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1031,"io_slave_wready", false,-1);
    tracep->declBit(c+1013,"io_slave_wvalid", false,-1);
    tracep->declQuad(c+1032,"io_slave_wdata", false,-1, 63,0);
    tracep->declBus(c+1024,"io_slave_wstrb", false,-1, 7,0);
    tracep->declBit(c+1013,"io_slave_wlast", false,-1);
    tracep->declBit(c+1013,"io_slave_bready", false,-1);
    tracep->declBit(c+1034,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1035,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1036,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1037,"io_slave_arready", false,-1);
    tracep->declBit(c+1013,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1028,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1023,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1024,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1029,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1030,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1013,"io_slave_rready", false,-1);
    tracep->declBit(c+1038,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1039,"io_slave_rresp", false,-1, 1,0);
    tracep->declQuad(c+1040,"io_slave_rdata", false,-1, 63,0);
    tracep->declBit(c+1042,"io_slave_rlast", false,-1);
    tracep->declBus(c+1043,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+530,"ifu_pc", false,-1, 31,0);
    tracep->declBus(c+531,"ifu_inst", false,-1, 31,0);
    tracep->declBus(c+1044,"ifu_inst_t", false,-1, 31,0);
    tracep->declBit(c+532,"ifu_stall", false,-1);
    tracep->declBus(c+533,"jump_pc", false,-1, 31,0);
    tracep->declBit(c+534,"jump_pc_valid", false,-1);
    tracep->declBit(c+949,"stall", false,-1);
    tracep->declBit(c+532,"ifu_r_valid_o", false,-1);
    tracep->declBus(c+535,"ifu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+749,"ifu_r_ready_i", false,-1);
    tracep->declBus(c+750,"ifu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+1024,"ifu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+751,"ifu_r_last_i", false,-1);
    tracep->declBit(c+536,"idu_branch", false,-1);
    tracep->declBit(c+537,"idu_jal", false,-1);
    tracep->declBit(c+538,"idu_jalr", false,-1);
    tracep->declBus(c+539,"idu_rd", false,-1, 4,0);
    tracep->declBit(c+540,"idu_rd_wen", false,-1);
    tracep->declBus(c+541,"idu_rs1", false,-1, 4,0);
    tracep->declBus(c+542,"idu_rs2", false,-1, 4,0);
    tracep->declBus(c+543,"idu_imm", false,-1, 31,0);
    tracep->declBus(c+544,"idu_alu_opt", false,-1, 3,0);
    tracep->declBus(c+545,"idu_src_sel", false,-1, 1,0);
    tracep->declBus(c+546,"idu_lsu_opt", false,-1, 1,0);
    tracep->declBus(c+547,"idu_funct3", false,-1, 2,0);
    tracep->declBus(c+548,"src1", false,-1, 31,0);
    tracep->declBus(c+549,"src2", false,-1, 31,0);
    tracep->declBus(c+997,"rd_data", false,-1, 31,0);
    tracep->declBit(c+550,"zero_flag", false,-1);
    tracep->declBus(c+551,"exu_result", false,-1, 31,0);
    tracep->declBus(c+1045,"exu_result_t", false,-1, 31,0);
    tracep->declBus(c+752,"lsu_result", false,-1, 31,0);
    tracep->declBit(c+949,"mem_stall", false,-1);
    tracep->declBit(c+950,"lsu_rd_wen", false,-1);
    tracep->declBit(c+552,"lsu_r_valid_o", false,-1);
    tracep->declBus(c+553,"lsu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+753,"lsu_r_ready_i", false,-1);
    tracep->declBus(c+754,"lsu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+554,"lsu_r_size_o", false,-1, 2,0);
    tracep->declBus(c+1024,"lsu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+755,"lsu_r_last_i", false,-1);
    tracep->declBit(c+555,"lsu_w_valid_o", false,-1);
    tracep->declBus(c+228,"lsu_w_addr_o", false,-1, 31,0);
    tracep->declBit(c+230,"lsu_w_ready_i", false,-1);
    tracep->declBus(c+549,"lsu_w_data_o", false,-1, 31,0);
    tracep->declBus(c+229,"lsu_w_size_o", false,-1, 2,0);
    tracep->declBus(c+1024,"lsu_w_len_o", false,-1, 7,0);
    tracep->declBit(c+870,"lsu_w_last_i", false,-1);
    tracep->declBit(c+756,"wbu_rd_wen", false,-1);
    tracep->declBit(c+556,"csr_ecall", false,-1);
    tracep->declBit(c+557,"csr_mret", false,-1);
    tracep->declBus(c+558,"wr_csr_data", false,-1, 31,0);
    tracep->declBus(c+998,"rd_csr_data", false,-1, 31,0);
    tracep->declBus(c+559,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+560,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+561,"csr_mpec", false,-1, 31,0);
    tracep->pushNamePrefix("axi_arbiter_u0 ");
    tracep->declBit(c+967,"aclk", false,-1);
    tracep->declBit(c+996,"areset_n", false,-1);
    tracep->declBit(c+532,"ifu_r_valid_i", false,-1);
    tracep->declBus(c+535,"ifu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+749,"ifu_r_ready_o", false,-1);
    tracep->declBus(c+750,"ifu_r_data_o", false,-1, 31,0);
    tracep->declBus(c+1024,"ifu_r_len_i", false,-1, 7,0);
    tracep->declBit(c+751,"ifu_r_last_o", false,-1);
    tracep->declBit(c+552,"lsu_r_valid_i", false,-1);
    tracep->declBus(c+553,"lsu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+753,"lsu_r_ready_o", false,-1);
    tracep->declBus(c+754,"lsu_r_data_o", false,-1, 31,0);
    tracep->declBus(c+554,"lsu_r_size_i", false,-1, 2,0);
    tracep->declBus(c+1024,"lsu_r_len_i", false,-1, 7,0);
    tracep->declBit(c+755,"lsu_r_last_o", false,-1);
    tracep->declBit(c+555,"lsu_w_valid_i", false,-1);
    tracep->declBus(c+228,"lsu_w_addr_i", false,-1, 31,0);
    tracep->declBit(c+230,"lsu_w_ready_o", false,-1);
    tracep->declBus(c+549,"lsu_w_data_i", false,-1, 31,0);
    tracep->declBus(c+229,"lsu_w_size_i", false,-1, 2,0);
    tracep->declBus(c+1024,"lsu_w_len_i", false,-1, 7,0);
    tracep->declBit(c+870,"lsu_w_last_o", false,-1);
    tracep->declBit(c+226,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+227,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+228,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+1023,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+1024,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+229,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+1025,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+230,"axi_w_ready_i", false,-1);
    tracep->declBit(c+231,"axi_w_valid_o", false,-1);
    tracep->declQuad(c+232,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+234,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+235,"axi_w_last_o", false,-1);
    tracep->declBit(c+236,"axi_b_ready_o", false,-1);
    tracep->declBit(c+870,"axi_b_valid_i", false,-1);
    tracep->declBus(c+711,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+871,"axi_b_id_i", false,-1, 3,0);
    tracep->declBit(c+237,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+238,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+239,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+1023,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+1024,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+240,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+1025,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+241,"axi_r_ready_o", false,-1);
    tracep->declBit(c+872,"axi_r_valid_i", false,-1);
    tracep->declBus(c+995,"axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+712,"axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+874,"axi_r_last_i", false,-1);
    tracep->declBus(c+873,"axi_r_id_i", false,-1, 3,0);
    tracep->declBit(c+562,"cpu_r_valid_o", false,-1);
    tracep->declBus(c+239,"cpu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+872,"cpu_r_ready_i", false,-1);
    tracep->declBus(c+951,"cpu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+240,"cpu_r_size_o", false,-1, 2,0);
    tracep->declBus(c+1024,"cpu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+874,"cpu_r_last_i", false,-1);
    tracep->declBit(c+555,"cpu_w_valid_o", false,-1);
    tracep->declBus(c+228,"cpu_w_addr_o", false,-1, 31,0);
    tracep->declBit(c+230,"cpu_w_ready_i", false,-1);
    tracep->declBus(c+549,"cpu_w_data_o", false,-1, 31,0);
    tracep->declBus(c+229,"cpu_w_size_o", false,-1, 2,0);
    tracep->declBus(c+1024,"cpu_w_len_o", false,-1, 7,0);
    tracep->declBit(c+870,"cpu_w_last_i", false,-1);
    tracep->declBus(c+563,"arbiter_state", false,-1, 1,0);
    tracep->declBus(c+1030,"ARB_IDLE", false,-1, 1,0);
    tracep->declBus(c+1025,"ARB_IFU", false,-1, 1,0);
    tracep->declBus(c+1046,"ARB_LSU", false,-1, 1,0);
    tracep->pushNamePrefix("axi_u0 ");
    tracep->declBit(c+967,"aclk", false,-1);
    tracep->declBit(c+996,"areset_n", false,-1);
    tracep->declBit(c+562,"cpu_r_valid_i", false,-1);
    tracep->declBus(c+239,"cpu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+872,"cpu_r_ready_o", false,-1);
    tracep->declBus(c+951,"cpu_r_data_o", false,-1, 31,0);
    tracep->declBus(c+240,"cpu_r_size_i", false,-1, 2,0);
    tracep->declBus(c+1024,"cpu_r_len_i", false,-1, 7,0);
    tracep->declBit(c+874,"cpu_r_last_o", false,-1);
    tracep->declBit(c+555,"cpu_w_valid_i", false,-1);
    tracep->declBus(c+228,"cpu_w_addr_i", false,-1, 31,0);
    tracep->declBit(c+230,"cpu_w_ready_o", false,-1);
    tracep->declBus(c+549,"cpu_w_data_i", false,-1, 31,0);
    tracep->declBus(c+229,"cpu_w_size_i", false,-1, 2,0);
    tracep->declBus(c+1024,"cpu_w_len_i", false,-1, 7,0);
    tracep->declBit(c+870,"cpu_w_last_o", false,-1);
    tracep->declBit(c+226,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+227,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+228,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+1023,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+1024,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+229,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+1025,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+230,"axi_w_ready_i", false,-1);
    tracep->declBit(c+231,"axi_w_valid_o", false,-1);
    tracep->declQuad(c+232,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+234,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+235,"axi_w_last_o", false,-1);
    tracep->declBit(c+236,"axi_b_ready_o", false,-1);
    tracep->declBit(c+870,"axi_b_valid_i", false,-1);
    tracep->declBus(c+711,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+871,"axi_b_id_i", false,-1, 3,0);
    tracep->declBit(c+237,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+238,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+239,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+1023,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+1024,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+240,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+1025,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+241,"axi_r_ready_o", false,-1);
    tracep->declBit(c+872,"axi_r_valid_i", false,-1);
    tracep->declBus(c+995,"axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+712,"axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+874,"axi_r_last_i", false,-1);
    tracep->declBus(c+873,"axi_r_id_i", false,-1, 3,0);
    tracep->declBus(c+564,"axi_w_state", false,-1, 2,0);
    tracep->declBus(c+1029,"AXI_W_IDLE", false,-1, 2,0);
    tracep->declBus(c+1012,"AXI_W_ADDR", false,-1, 2,0);
    tracep->declBus(c+1047,"AXI_W_DATA", false,-1, 2,0);
    tracep->declBus(c+1048,"AXI_W_RESP", false,-1, 2,0);
    tracep->declQuad(c+565,"axi_w_data_t", false,-1, 63,0);
    tracep->declBus(c+567,"axi_w_strb_t", false,-1, 7,0);
    tracep->declBus(c+568,"axi_w_cnt", false,-1, 7,0);
    tracep->declBus(c+569,"axi_r_state", false,-1, 1,0);
    tracep->declBus(c+1030,"AXI_R_IDLE", false,-1, 1,0);
    tracep->declBus(c+1025,"AXI_R_ADDR", false,-1, 1,0);
    tracep->declBus(c+1046,"AXI_R_DATA", false,-1, 1,0);
    tracep->declBus(c+1049,"axi_r_cnt", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csr_u0 ");
    tracep->declBit(c+967,"clk", false,-1);
    tracep->declBit(c+996,"reset", false,-1);
    tracep->declBus(c+570,"wr_addr", false,-1, 11,0);
    tracep->declBus(c+558,"wr_data", false,-1, 31,0);
    tracep->declBus(c+570,"rd_addr", false,-1, 11,0);
    tracep->declBus(c+998,"rd_data", false,-1, 31,0);
    tracep->declBit(c+556,"i_csr_ecall", false,-1);
    tracep->declBit(c+557,"i_csr_mret", false,-1);
    tracep->declBus(c+531,"i_inst", false,-1, 31,0);
    tracep->declBus(c+530,"i_pc", false,-1, 31,0);
    tracep->declBus(c+559,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+560,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+561,"o_mpec", false,-1, 31,0);
    tracep->declBus(c+998,"rd_data_r", false,-1, 31,0);
    tracep->declBit(c+571,"wr_en", false,-1);
    tracep->declBit(c+571,"rd_en", false,-1);
    tracep->declBus(c+572,"wr_data_r", false,-1, 31,0);
    tracep->declBus(c+573,"temp", false,-1, 31,0);
    tracep->declBus(c+559,"o_mstatus_r", false,-1, 31,0);
    tracep->declBus(c+574,"mepc_inst_r", false,-1, 31,0);
    tracep->declBus(c+575,"mcause", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu_u0 ");
    tracep->declBus(c+530,"pc", false,-1, 31,0);
    tracep->declBus(c+548,"src1", false,-1, 31,0);
    tracep->declBus(c+549,"src2", false,-1, 31,0);
    tracep->declBus(c+543,"imm", false,-1, 31,0);
    tracep->declBit(c+536,"branch", false,-1);
    tracep->declBus(c+544,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+545,"src_sel", false,-1, 1,0);
    tracep->declBus(c+547,"funct3", false,-1, 2,0);
    tracep->declBit(c+550,"zero_flag", false,-1);
    tracep->declBus(c+551,"exu_result", false,-1, 31,0);
    tracep->declBus(c+576,"alu_a_data", false,-1, 31,0);
    tracep->declBus(c+577,"alu_b_data", false,-1, 31,0);
    tracep->declBus(c+578,"alu_out_data", false,-1, 31,0);
    tracep->declBit(c+1050,"carry_flag", false,-1);
    tracep->declBit(c+1051,"signed_flag", false,-1);
    tracep->declBus(c+551,"exu_result_r", false,-1, 31,0);
    tracep->pushNamePrefix("ex_alu ");
    tracep->declBus(c+544,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+576,"alu_a_data", false,-1, 31,0);
    tracep->declBus(c+577,"alu_b_data", false,-1, 31,0);
    tracep->declBus(c+578,"alu_out_data", false,-1, 31,0);
    tracep->declBit(c+579,"sub_flag", false,-1);
    tracep->declQuad(c+580,"alu_a_t", false,-1, 32,0);
    tracep->declQuad(c+582,"alu_b_t", false,-1, 32,0);
    tracep->declQuad(c+584,"cin", false,-1, 32,0);
    tracep->declQuad(c+586,"add_out", false,-1, 32,0);
    tracep->declBit(c+588,"top_A", false,-1);
    tracep->declBit(c+589,"top_B", false,-1);
    tracep->declBit(c+590,"top_C", false,-1);
    tracep->declBit(c+591,"sign_flag", false,-1);
    tracep->declBit(c+592,"over_flag", false,-1);
    tracep->declBit(c+593,"carry_flag", false,-1);
    tracep->declBus(c+594,"sra_result", false,-1, 31,0);
    tracep->declBus(c+578,"alu_out_data_r", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu_u0 ");
    tracep->declBus(c+531,"inst", false,-1, 31,0);
    tracep->declBit(c+536,"branch", false,-1);
    tracep->declBit(c+537,"jal", false,-1);
    tracep->declBit(c+538,"jalr", false,-1);
    tracep->declBus(c+539,"rd", false,-1, 4,0);
    tracep->declBit(c+540,"rd_wen", false,-1);
    tracep->declBus(c+541,"rs1", false,-1, 4,0);
    tracep->declBus(c+542,"rs2", false,-1, 4,0);
    tracep->declBus(c+543,"imm", false,-1, 31,0);
    tracep->declBus(c+544,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+545,"src_sel", false,-1, 1,0);
    tracep->declBus(c+546,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+547,"funct3", false,-1, 2,0);
    tracep->declBus(c+595,"opcode", false,-1, 6,0);
    tracep->declBus(c+596,"funct7", false,-1, 6,0);
    tracep->declBus(c+1052,"reg_zero", false,-1, 4,0);
    tracep->pushNamePrefix("id_imm_idu ");
    tracep->declBus(c+531,"inst", false,-1, 31,0);
    tracep->declBus(c+543,"imm", false,-1, 31,0);
    tracep->declBus(c+543,"imm_r", false,-1, 31,0);
    tracep->declBus(c+597,"imm_typeI", false,-1, 31,0);
    tracep->declBus(c+598,"imm_typeU", false,-1, 31,0);
    tracep->declBus(c+599,"imm_typeS", false,-1, 31,0);
    tracep->declBus(c+600,"imm_typeB", false,-1, 31,0);
    tracep->declBus(c+601,"imm_typeJ", false,-1, 31,0);
    tracep->declBus(c+1028,"imm_typeR", false,-1, 31,0);
    tracep->declBus(c+1028,"imm_type_NONE", false,-1, 31,0);
    tracep->pushNamePrefix("id_imm_ext_typeB ");
    tracep->declBus(c+1053,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+602,"imm_in", false,-1, 12,0);
    tracep->declBus(c+600,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeI ");
    tracep->declBus(c+1054,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+603,"imm_in", false,-1, 11,0);
    tracep->declBus(c+597,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeJ ");
    tracep->declBus(c+1055,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+604,"imm_in", false,-1, 20,0);
    tracep->declBus(c+601,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeS ");
    tracep->declBus(c+1054,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+605,"imm_in", false,-1, 11,0);
    tracep->declBus(c+599,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeU ");
    tracep->declBus(c+1056,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+598,"imm_in", false,-1, 31,0);
    tracep->declBus(c+598,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_opt_idu ");
    tracep->declBus(c+595,"opcode", false,-1, 6,0);
    tracep->declBus(c+547,"funct3", false,-1, 2,0);
    tracep->declBus(c+596,"funct7", false,-1, 6,0);
    tracep->declBus(c+544,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+545,"src_sel", false,-1, 1,0);
    tracep->declBus(c+546,"lsu_opt", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu_u0 ");
    tracep->declBit(c+967,"clk", false,-1);
    tracep->declBit(c+996,"reset", false,-1);
    tracep->declBus(c+533,"jump_pc", false,-1, 31,0);
    tracep->declBit(c+534,"jump_pc_valid", false,-1);
    tracep->declBit(c+949,"stall", false,-1);
    tracep->declBit(c+950,"wbu_stall", false,-1);
    tracep->declBit(c+532,"ifu_r_valid_o", false,-1);
    tracep->declBus(c+535,"ifu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+749,"ifu_r_ready_i", false,-1);
    tracep->declBus(c+750,"ifu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+1024,"ifu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+751,"ifu_r_last_i", false,-1);
    tracep->declBit(c+532,"ifu_stall", false,-1);
    tracep->declBus(c+530,"ifu_pc_o", false,-1, 31,0);
    tracep->declBus(c+531,"ifu_inst_o", false,-1, 31,0);
    tracep->declBus(c+530,"ifu_pc_o_r", false,-1, 31,0);
    tracep->declBus(c+531,"ifu_inst_o_r", false,-1, 31,0);
    tracep->declBus(c+535,"pc", false,-1, 31,0);
    tracep->declBus(c+750,"inst", false,-1, 31,0);
    tracep->declBus(c+1057,"inst_t", false,-1, 31,0);
    tracep->declBit(c+532,"ifu_stall_r", false,-1);
    tracep->declBit(c+952,"flush_inst", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_u0 ");
    tracep->declBit(c+967,"clk", false,-1);
    tracep->declBit(c+996,"reset", false,-1);
    tracep->declBus(c+548,"src1", false,-1, 31,0);
    tracep->declBus(c+549,"src2", false,-1, 31,0);
    tracep->declBus(c+543,"imm", false,-1, 31,0);
    tracep->declBus(c+546,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+547,"funct3", false,-1, 2,0);
    tracep->declBit(c+532,"ifu_stall", false,-1);
    tracep->declBit(c+552,"lsu_r_valid_o", false,-1);
    tracep->declBus(c+553,"lsu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+753,"lsu_r_ready_i", false,-1);
    tracep->declBus(c+754,"lsu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+554,"lsu_r_size_o", false,-1, 2,0);
    tracep->declBus(c+1024,"lsu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+755,"lsu_r_last_i", false,-1);
    tracep->declBit(c+555,"lsu_w_valid_o", false,-1);
    tracep->declBus(c+228,"lsu_w_addr_o", false,-1, 31,0);
    tracep->declBit(c+230,"lsu_w_ready_i", false,-1);
    tracep->declBus(c+549,"lsu_w_data_o", false,-1, 31,0);
    tracep->declBus(c+229,"lsu_w_size_o", false,-1, 2,0);
    tracep->declBus(c+1024,"lsu_w_len_o", false,-1, 7,0);
    tracep->declBit(c+870,"lsu_w_last_i", false,-1);
    tracep->declBit(c+949,"mem_stall", false,-1);
    tracep->declBit(c+950,"lsu_rd_wen", false,-1);
    tracep->declBus(c+752,"lsu_result", false,-1, 31,0);
    tracep->declBus(c+553,"raddr", false,-1, 31,0);
    tracep->declBus(c+754,"rdata", false,-1, 31,0);
    tracep->declBus(c+606,"rsize", false,-1, 31,0);
    tracep->declBus(c+228,"waddr", false,-1, 31,0);
    tracep->declBus(c+549,"wdata", false,-1, 31,0);
    tracep->declBus(c+607,"wmask", false,-1, 31,0);
    tracep->declBus(c+607,"mask", false,-1, 31,0);
    tracep->declBus(c+752,"lsu_result_r", false,-1, 31,0);
    tracep->declBit(c+552,"ren", false,-1);
    tracep->declBit(c+555,"wen", false,-1);
    tracep->declBit(c+953,"lsu_rd_wen_r", false,-1);
    tracep->declBit(c+954,"lsu_rd_wen_w", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile_u0 ");
    tracep->declBit(c+967,"clk", false,-1);
    tracep->declBit(c+996,"reset", false,-1);
    tracep->declBus(c+541,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+548,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+542,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+549,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+756,"rd_en", false,-1);
    tracep->declBus(c+539,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+997,"rd_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+608+i*1,"gpr", true,(i+0), 31,0);
    }
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu_u0 ");
    tracep->declBus(c+546,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+551,"exu_result", false,-1, 31,0);
    tracep->declBus(c+752,"lsu_result", false,-1, 31,0);
    tracep->declBus(c+998,"csr_result", false,-1, 31,0);
    tracep->declBit(c+950,"lsu_rd_wen", false,-1);
    tracep->declBit(c+640,"idu_rd_wen", false,-1);
    tracep->declBit(c+756,"wbu_rd_wen", false,-1);
    tracep->declBus(c+997,"wbu_result", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"io_d", false,-1);
    tracep->declBit(c+641,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"io_d", false,-1);
    tracep->declBit(c+641,"io_q", false,-1);
    tracep->declBit(c+641,"sync_0", false,-1);
    tracep->declBit(c+642,"sync_1", false,-1);
    tracep->declBit(c+643,"sync_2", false,-1);
    tracep->declBit(c+644,"sync_3", false,-1);
    tracep->declBit(c+645,"sync_4", false,-1);
    tracep->declBit(c+646,"sync_5", false,-1);
    tracep->declBit(c+647,"sync_6", false,-1);
    tracep->declBit(c+648,"sync_7", false,-1);
    tracep->declBit(c+649,"sync_8", false,-1);
    tracep->declBit(c+650,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+705,"auto_in_psel", false,-1);
    tracep->declBit(c+706,"auto_in_penable", false,-1);
    tracep->declBit(c+193,"auto_in_pwrite", false,-1);
    tracep->declBus(c+826,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1012,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+194,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+195,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1020,"auto_in_pready", false,-1);
    tracep->declBit(c+1021,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1022,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+969,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+970,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+971,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+972,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+973,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+974,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+975,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+976,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+977,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+978,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBus(c+841,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+705,"in_psel", false,-1);
    tracep->declBit(c+706,"in_penable", false,-1);
    tracep->declBus(c+1012,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+193,"in_pwrite", false,-1);
    tracep->declBus(c+194,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+195,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1020,"in_pready", false,-1);
    tracep->declBus(c+1022,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1021,"in_pslverr", false,-1);
    tracep->declBus(c+969,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+970,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+971,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+972,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+973,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+974,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+975,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+976,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+977,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+978,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+703,"auto_in_psel", false,-1);
    tracep->declBit(c+704,"auto_in_penable", false,-1);
    tracep->declBit(c+193,"auto_in_pwrite", false,-1);
    tracep->declBus(c+826,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1012,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+194,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+195,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1017,"auto_in_pready", false,-1);
    tracep->declBit(c+1018,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1019,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+979,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+980,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBus(c+841,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+703,"in_psel", false,-1);
    tracep->declBit(c+704,"in_penable", false,-1);
    tracep->declBus(c+1012,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+193,"in_pwrite", false,-1);
    tracep->declBus(c+194,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+195,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1017,"in_pready", false,-1);
    tracep->declBus(c+1019,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1018,"in_pslverr", false,-1);
    tracep->declBit(c+979,"ps2_clk", false,-1);
    tracep->declBit(c+980,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+329,"auto_in_awvalid", false,-1);
    tracep->declBit(c+330,"auto_in_wvalid", false,-1);
    tracep->declBit(c+331,"auto_in_arready", false,-1);
    tracep->declBit(c+332,"auto_in_arvalid", false,-1);
    tracep->declBus(c+209,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+333,"auto_in_araddr", false,-1, 29,0);
    tracep->declBus(c+211,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+716,"auto_in_rready", false,-1);
    tracep->declBit(c+334,"auto_in_rvalid", false,-1);
    tracep->declBus(c+335,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+336,"auto_in_rdata", false,-1, 63,0);
    tracep->declBit(c+334,"state", false,-1);
    tracep->declQuad(c+336,"nodeIn_rdata_r", false,-1, 63,0);
    tracep->declBus(c+335,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+651,"raddr", false,-1, 31,0);
    tracep->declBit(c+652,"ren", false,-1);
    tracep->declBus(c+653,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+827,"auto_in_psel", false,-1);
    tracep->declBit(c+707,"auto_in_penable", false,-1);
    tracep->declBit(c+193,"auto_in_pwrite", false,-1);
    tracep->declBus(c+823,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1012,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+194,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+195,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+993,"auto_in_pready", false,-1);
    tracep->declBit(c+1013,"auto_in_pslverr", false,-1);
    tracep->declBus(c+196,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+990,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+991,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+863,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBus(c+823,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+827,"in_psel", false,-1);
    tracep->declBit(c+707,"in_penable", false,-1);
    tracep->declBus(c+1012,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+193,"in_pwrite", false,-1);
    tracep->declBus(c+194,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+195,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+993,"in_pready", false,-1);
    tracep->declBus(c+196,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1013,"in_pslverr", false,-1);
    tracep->declBit(c+990,"qspi_sck", false,-1);
    tracep->declBit(c+991,"qspi_ce_n", false,-1);
    tracep->declBus(c+863,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+863,"din", false,-1, 3,0);
    tracep->declBus(c+955,"dout", false,-1, 3,0);
    tracep->declBus(c+956,"douten", false,-1, 3,0);
    tracep->declBit(c+999,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+967,"clk_i", false,-1);
    tracep->declBit(c+968,"rst_i", false,-1);
    tracep->declBus(c+823,"adr_i", false,-1, 31,0);
    tracep->declBus(c+194,"dat_i", false,-1, 31,0);
    tracep->declBus(c+196,"dat_o", false,-1, 31,0);
    tracep->declBus(c+195,"sel_i", false,-1, 3,0);
    tracep->declBit(c+827,"cyc_i", false,-1);
    tracep->declBit(c+827,"stb_i", false,-1);
    tracep->declBit(c+999,"ack_o", false,-1);
    tracep->declBit(c+193,"we_i", false,-1);
    tracep->declBit(c+990,"sck", false,-1);
    tracep->declBit(c+991,"ce_n", false,-1);
    tracep->declBus(c+863,"din", false,-1, 3,0);
    tracep->declBus(c+955,"dout", false,-1, 3,0);
    tracep->declBus(c+956,"douten", false,-1, 3,0);
    tracep->declBus(c+1058,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1059,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+762,"mr_sck", false,-1);
    tracep->declBit(c+26,"mr_ce_n", false,-1);
    tracep->declBus(c+863,"mr_din", false,-1, 3,0);
    tracep->declBus(c+1000,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+763,"mr_doe", false,-1);
    tracep->declBit(c+27,"mw_sck", false,-1);
    tracep->declBit(c+28,"mw_ce_n", false,-1);
    tracep->declBus(c+863,"mw_din", false,-1, 3,0);
    tracep->declBus(c+820,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+29,"mw_doe", false,-1);
    tracep->declBit(c+957,"mr_rd", false,-1);
    tracep->declBit(c+764,"mr_done", false,-1);
    tracep->declBit(c+958,"mw_wr", false,-1);
    tracep->declBit(c+821,"mw_done", false,-1);
    tracep->declBit(c+827,"wb_valid", false,-1);
    tracep->declBit(c+842,"wb_we", false,-1);
    tracep->declBit(c+843,"wb_re", false,-1);
    tracep->declBit(c+30,"state", false,-1);
    tracep->declBit(c+959,"nstate", false,-1);
    tracep->declBus(c+654,"size", false,-1, 2,0);
    tracep->declBus(c+655,"byte0", false,-1, 7,0);
    tracep->declBus(c+656,"byte1", false,-1, 7,0);
    tracep->declBus(c+657,"byte2", false,-1, 7,0);
    tracep->declBus(c+658,"byte3", false,-1, 7,0);
    tracep->declBus(c+659,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+967,"clk", false,-1);
    tracep->declBit(c+1001,"rst_n", false,-1);
    tracep->declBus(c+844,"addr", false,-1, 23,0);
    tracep->declBit(c+957,"rd", false,-1);
    tracep->declBus(c+1060,"size", false,-1, 2,0);
    tracep->declBit(c+764,"done", false,-1);
    tracep->declBus(c+196,"line", false,-1, 31,0);
    tracep->declBit(c+762,"sck", false,-1);
    tracep->declBit(c+26,"ce_n", false,-1);
    tracep->declBus(c+863,"din", false,-1, 3,0);
    tracep->declBus(c+1000,"dout", false,-1, 3,0);
    tracep->declBit(c+763,"douten", false,-1);
    tracep->declBus(c+1058,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1059,"READ", false,-1, 0,0);
    tracep->declBus(c+1061,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+31,"state", false,-1);
    tracep->declBit(c+960,"nstate", false,-1);
    tracep->declBus(c+765,"counter", false,-1, 7,0);
    tracep->declBus(c+32,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+660+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1062,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+766,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+967,"clk", false,-1);
    tracep->declBit(c+1001,"rst_n", false,-1);
    tracep->declBus(c+845,"addr", false,-1, 23,0);
    tracep->declBus(c+659,"line", false,-1, 31,0);
    tracep->declBus(c+654,"size", false,-1, 2,0);
    tracep->declBit(c+958,"wr", false,-1);
    tracep->declBit(c+821,"done", false,-1);
    tracep->declBit(c+27,"sck", false,-1);
    tracep->declBit(c+28,"ce_n", false,-1);
    tracep->declBus(c+863,"din", false,-1, 3,0);
    tracep->declBus(c+820,"dout", false,-1, 3,0);
    tracep->declBit(c+29,"douten", false,-1);
    tracep->declBus(c+1058,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1059,"WRITE", false,-1, 0,0);
    tracep->declBus(c+664,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+33,"state", false,-1);
    tracep->declBit(c+961,"nstate", false,-1);
    tracep->declBus(c+34,"counter", false,-1, 7,0);
    tracep->declBus(c+35,"saddr", false,-1, 23,0);
    tracep->declBus(c+1063,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+699,"auto_in_psel", false,-1);
    tracep->declBit(c+700,"auto_in_penable", false,-1);
    tracep->declBit(c+193,"auto_in_pwrite", false,-1);
    tracep->declBus(c+823,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1012,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+194,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+195,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+761,"auto_in_pready", false,-1);
    tracep->declBit(c+1013,"auto_in_pslverr", false,-1);
    tracep->declBus(c+23,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+992,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+14,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+15,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+16,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+17,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+18,"sdram_bundle_we", false,-1);
    tracep->declBus(c+19,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+20,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+21,"sdram_bundle_dqm", false,-1, 1,0);
    tracep->declBus(c+22,"sdram_bundle_dq", false,-1, 15,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBus(c+823,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+699,"in_psel", false,-1);
    tracep->declBit(c+700,"in_penable", false,-1);
    tracep->declBus(c+1012,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+193,"in_pwrite", false,-1);
    tracep->declBus(c+194,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+195,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+761,"in_pready", false,-1);
    tracep->declBus(c+23,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1013,"in_pslverr", false,-1);
    tracep->declBit(c+992,"sdram_clk", false,-1);
    tracep->declBit(c+14,"sdram_cke", false,-1);
    tracep->declBit(c+15,"sdram_cs", false,-1);
    tracep->declBit(c+16,"sdram_ras", false,-1);
    tracep->declBit(c+17,"sdram_cas", false,-1);
    tracep->declBit(c+18,"sdram_we", false,-1);
    tracep->declBus(c+19,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+20,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+21,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+22,"sdram_dq", false,-1, 15,0);
    tracep->declBit(c+36,"sdram_dout_en", false,-1);
    tracep->declBus(c+37,"sdram_dout", false,-1, 15,0);
    tracep->declBus(c+665,"state", false,-1, 1,0);
    tracep->declBit(c+767,"req_accept", false,-1);
    tracep->declBit(c+846,"is_read", false,-1);
    tracep->declBit(c+847,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+967,"clk_i", false,-1);
    tracep->declBit(c+968,"rst_i", false,-1);
    tracep->declBus(c+848,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+846,"inport_rd_i", false,-1);
    tracep->declBus(c+1024,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+823,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+194,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+22,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+767,"inport_accept_o", false,-1);
    tracep->declBit(c+761,"inport_ack_o", false,-1);
    tracep->declBit(c+1013,"inport_error_o", false,-1);
    tracep->declBus(c+23,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+992,"sdram_clk_o", false,-1);
    tracep->declBit(c+14,"sdram_cke_o", false,-1);
    tracep->declBit(c+15,"sdram_cs_o", false,-1);
    tracep->declBit(c+16,"sdram_ras_o", false,-1);
    tracep->declBit(c+17,"sdram_cas_o", false,-1);
    tracep->declBit(c+18,"sdram_we_o", false,-1);
    tracep->declBus(c+21,"sdram_dqm_o", false,-1, 1,0);
    tracep->declBus(c+19,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+20,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+37,"sdram_data_output_o", false,-1, 15,0);
    tracep->declBit(c+36,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1064,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1065,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1066,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1067,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1067,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1067,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1068,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1053,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1069,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1070,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1071,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1068,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1072,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1073,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1074,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1075,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1076,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1077,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1078,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1023,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1079,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1068,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1023,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1078,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1077,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1073,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1075,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1074,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1076,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1072,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1080,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1081,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1082,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1082,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1083,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1082,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1067,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1067,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1084,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+823,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+848,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+846,"ram_rd_w", false,-1);
    tracep->declBit(c+767,"ram_accept_w", false,-1);
    tracep->declBus(c+194,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+23,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+761,"ram_ack_w", false,-1);
    tracep->declBit(c+849,"ram_req_w", false,-1);
    tracep->declBus(c+38,"command_q", false,-1, 3,0);
    tracep->declBus(c+19,"addr_q", false,-1, 12,0);
    tracep->declBus(c+37,"data_q", false,-1, 15,0);
    tracep->declBit(c+39,"data_rd_en_q", false,-1);
    tracep->declBus(c+21,"dqm_q", false,-1, 1,0);
    tracep->declBit(c+14,"cke_q", false,-1);
    tracep->declBus(c+20,"bank_q", false,-1, 1,0);
    tracep->declBus(c+40,"data_buffer_q", false,-1, 15,0);
    tracep->declBus(c+41,"dqm_buffer_q", false,-1, 1,0);
    tracep->declBus(c+22,"sdram_data_in_w", false,-1, 15,0);
    tracep->declBit(c+42,"refresh_q", false,-1);
    tracep->declBus(c+43,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+44+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+768,"state_q", false,-1, 3,0);
    tracep->declBus(c+962,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+963,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+48,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+49,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+850,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+851,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+852,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1068,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+50,"delay_q", false,-1, 3,0);
    tracep->declBus(c+964,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1085,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+51,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+52,"sample_data0_q", false,-1, 15,0);
    tracep->declBus(c+53,"sample_data_q", false,-1, 15,0);
    tracep->declBus(c+54,"idx", false,-1, 31,0);
    tracep->declBus(c+769,"rd_q", false,-1, 3,0);
    tracep->declBit(c+761,"ack_q", false,-1);
    tracep->declArray(c+770,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+831,"auto_in_psel", false,-1);
    tracep->declBit(c+832,"auto_in_penable", false,-1);
    tracep->declBit(c+193,"auto_in_pwrite", false,-1);
    tracep->declBus(c+825,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1012,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+194,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+195,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+24,"auto_in_pready", false,-1);
    tracep->declBit(c+1013,"auto_in_pslverr", false,-1);
    tracep->declBus(c+25,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+11,"spi_bundle_sck", false,-1);
    tracep->declBus(c+12,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+13,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+989,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1086,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1087,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1088,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBus(c+853,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+831,"in_psel", false,-1);
    tracep->declBit(c+832,"in_penable", false,-1);
    tracep->declBus(c+1012,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+193,"in_pwrite", false,-1);
    tracep->declBus(c+194,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+195,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+24,"in_pready", false,-1);
    tracep->declBus(c+25,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1013,"in_pslverr", false,-1);
    tracep->declBit(c+11,"spi_sck", false,-1);
    tracep->declBus(c+12,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+13,"spi_mosi", false,-1);
    tracep->declBit(c+989,"spi_miso", false,-1);
    tracep->declBit(c+55,"spi_irq_out", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1089,"Tp", false,-1, 31,0);
    tracep->declBit(c+967,"wb_clk_i", false,-1);
    tracep->declBit(c+968,"wb_rst_i", false,-1);
    tracep->declBus(c+854,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+194,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+25,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+195,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+193,"wb_we_i", false,-1);
    tracep->declBit(c+831,"wb_stb_i", false,-1);
    tracep->declBit(c+832,"wb_cyc_i", false,-1);
    tracep->declBit(c+24,"wb_ack_o", false,-1);
    tracep->declBit(c+1013,"wb_err_o", false,-1);
    tracep->declBit(c+55,"wb_int_o", false,-1);
    tracep->declBus(c+12,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+11,"sclk_pad_o", false,-1);
    tracep->declBit(c+13,"mosi_pad_o", false,-1);
    tracep->declBit(c+989,"miso_pad_i", false,-1);
    tracep->declBus(c+56,"divider", false,-1, 15,0);
    tracep->declBus(c+57,"ctrl", false,-1, 13,0);
    tracep->declBus(c+58,"ss", false,-1, 7,0);
    tracep->declBus(c+965,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+59,"rx", false,-1, 127,0);
    tracep->declBit(c+63,"rx_negedge", false,-1);
    tracep->declBit(c+64,"tx_negedge", false,-1);
    tracep->declBus(c+65,"char_len", false,-1, 6,0);
    tracep->declBit(c+66,"go", false,-1);
    tracep->declBit(c+67,"lsb", false,-1);
    tracep->declBit(c+68,"ie", false,-1);
    tracep->declBit(c+69,"ass", false,-1);
    tracep->declBit(c+855,"spi_divider_sel", false,-1);
    tracep->declBit(c+856,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+857,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+858,"spi_ss_sel", false,-1);
    tracep->declBit(c+70,"tip", false,-1);
    tracep->declBit(c+71,"pos_edge", false,-1);
    tracep->declBit(c+72,"neg_edge", false,-1);
    tracep->declBit(c+73,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1089,"Tp", false,-1, 31,0);
    tracep->declBit(c+967,"clk_in", false,-1);
    tracep->declBit(c+968,"rst", false,-1);
    tracep->declBit(c+70,"enable", false,-1);
    tracep->declBit(c+66,"go", false,-1);
    tracep->declBit(c+73,"last_clk", false,-1);
    tracep->declBus(c+56,"divider", false,-1, 15,0);
    tracep->declBit(c+11,"clk_out", false,-1);
    tracep->declBit(c+71,"pos_edge", false,-1);
    tracep->declBit(c+72,"neg_edge", false,-1);
    tracep->declBus(c+74,"cnt", false,-1, 15,0);
    tracep->declBit(c+75,"cnt_zero", false,-1);
    tracep->declBit(c+76,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1089,"Tp", false,-1, 31,0);
    tracep->declBit(c+967,"clk", false,-1);
    tracep->declBit(c+968,"rst", false,-1);
    tracep->declBus(c+859,"latch", false,-1, 3,0);
    tracep->declBus(c+195,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+65,"len", false,-1, 6,0);
    tracep->declBit(c+67,"lsb", false,-1);
    tracep->declBit(c+66,"go", false,-1);
    tracep->declBit(c+71,"pos_edge", false,-1);
    tracep->declBit(c+72,"neg_edge", false,-1);
    tracep->declBit(c+63,"rx_negedge", false,-1);
    tracep->declBit(c+64,"tx_negedge", false,-1);
    tracep->declBit(c+70,"tip", false,-1);
    tracep->declBit(c+73,"last", false,-1);
    tracep->declBus(c+194,"p_in", false,-1, 31,0);
    tracep->declArray(c+59,"p_out", false,-1, 127,0);
    tracep->declBit(c+11,"s_clk", false,-1);
    tracep->declBit(c+989,"s_in", false,-1);
    tracep->declBit(c+13,"s_out", false,-1);
    tracep->declBus(c+77,"cnt", false,-1, 7,0);
    tracep->declArray(c+59,"data", false,-1, 127,0);
    tracep->declBus(c+78,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+79,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+80,"rx_clk", false,-1);
    tracep->declBit(c+81,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+828,"auto_in_psel", false,-1);
    tracep->declBit(c+829,"auto_in_penable", false,-1);
    tracep->declBit(c+193,"auto_in_pwrite", false,-1);
    tracep->declBus(c+826,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1012,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+194,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+195,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+830,"auto_in_pready", false,-1);
    tracep->declBit(c+1013,"auto_in_pslverr", false,-1);
    tracep->declBus(c+994,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+987,"uart_rx", false,-1);
    tracep->declBit(c+988,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+828,"in_psel", false,-1);
    tracep->declBit(c+829,"in_penable", false,-1);
    tracep->declBus(c+1012,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+830,"in_pready", false,-1);
    tracep->declBit(c+1013,"in_pslverr", false,-1);
    tracep->declBus(c+841,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+193,"in_pwrite", false,-1);
    tracep->declBus(c+994,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+194,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+195,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+987,"uart_rx", false,-1);
    tracep->declBit(c+988,"uart_tx", false,-1);
    tracep->declBit(c+82,"rtsn", false,-1);
    tracep->declBit(c+1013,"ctsn", false,-1);
    tracep->declBit(c+83,"dtr_pad_o", false,-1);
    tracep->declBit(c+1013,"dsr_pad_i", false,-1);
    tracep->declBit(c+1013,"ri_pad_i", false,-1);
    tracep->declBit(c+1013,"dcd_pad_i", false,-1);
    tracep->declBit(c+84,"interrupt", false,-1);
    tracep->declBit(c+1002,"reg_we", false,-1);
    tracep->declBit(c+1003,"reg_re", false,-1);
    tracep->declBus(c+860,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+861,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+666,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+966,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+85,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+967,"clk", false,-1);
    tracep->declBit(c+968,"wb_rst_i", false,-1);
    tracep->declBus(c+860,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+862,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+966,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1002,"wb_we_i", false,-1);
    tracep->declBit(c+1003,"wb_re_i", false,-1);
    tracep->declBit(c+988,"stx_pad_o", false,-1);
    tracep->declBit(c+987,"srx_pad_i", false,-1);
    tracep->declBus(c+1080,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+85,"rts_pad_o", false,-1);
    tracep->declBit(c+83,"dtr_pad_o", false,-1);
    tracep->declBit(c+84,"int_o", false,-1);
    tracep->declBit(c+773,"enable", false,-1);
    tracep->declBit(c+86,"srx_pad", false,-1);
    tracep->declBus(c+87,"ier", false,-1, 3,0);
    tracep->declBus(c+88,"iir", false,-1, 3,0);
    tracep->declBus(c+89,"fcr", false,-1, 1,0);
    tracep->declBus(c+90,"mcr", false,-1, 4,0);
    tracep->declBus(c+774,"lcr", false,-1, 7,0);
    tracep->declBus(c+91,"msr", false,-1, 7,0);
    tracep->declBus(c+775,"dl", false,-1, 15,0);
    tracep->declBus(c+92,"scratch", false,-1, 7,0);
    tracep->declBit(c+93,"start_dlc", false,-1);
    tracep->declBit(c+94,"lsr_mask_d", false,-1);
    tracep->declBit(c+95,"msi_reset", false,-1);
    tracep->declBus(c+776,"dlc", false,-1, 15,0);
    tracep->declBus(c+96,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+97,"rx_reset", false,-1);
    tracep->declBit(c+777,"tx_reset", false,-1);
    tracep->declBit(c+778,"dlab", false,-1);
    tracep->declBit(c+1026,"cts_pad_i", false,-1);
    tracep->declBit(c+1013,"dsr_pad_i", false,-1);
    tracep->declBit(c+1013,"ri_pad_i", false,-1);
    tracep->declBit(c+1013,"dcd_pad_i", false,-1);
    tracep->declBit(c+98,"loopback", false,-1);
    tracep->declBit(c+1013,"cts", false,-1);
    tracep->declBit(c+1026,"dsr", false,-1);
    tracep->declBit(c+1026,"ri", false,-1);
    tracep->declBit(c+1026,"dcd", false,-1);
    tracep->declBit(c+99,"cts_c", false,-1);
    tracep->declBit(c+100,"dsr_c", false,-1);
    tracep->declBit(c+101,"ri_c", false,-1);
    tracep->declBit(c+102,"dcd_c", false,-1);
    tracep->declBus(c+103,"lsr", false,-1, 7,0);
    tracep->declBit(c+779,"lsr0", false,-1);
    tracep->declBit(c+104,"lsr1", false,-1);
    tracep->declBit(c+105,"lsr2", false,-1);
    tracep->declBit(c+106,"lsr3", false,-1);
    tracep->declBit(c+107,"lsr4", false,-1);
    tracep->declBit(c+780,"lsr5", false,-1);
    tracep->declBit(c+781,"lsr6", false,-1);
    tracep->declBit(c+108,"lsr7", false,-1);
    tracep->declBit(c+109,"lsr0r", false,-1);
    tracep->declBit(c+110,"lsr1r", false,-1);
    tracep->declBit(c+111,"lsr2r", false,-1);
    tracep->declBit(c+112,"lsr3r", false,-1);
    tracep->declBit(c+113,"lsr4r", false,-1);
    tracep->declBit(c+114,"lsr5r", false,-1);
    tracep->declBit(c+115,"lsr6r", false,-1);
    tracep->declBit(c+116,"lsr7r", false,-1);
    tracep->declBit(c+2,"lsr_mask", false,-1);
    tracep->declBit(c+117,"rls_int", false,-1);
    tracep->declBit(c+118,"rda_int", false,-1);
    tracep->declBit(c+119,"ti_int", false,-1);
    tracep->declBit(c+120,"thre_int", false,-1);
    tracep->declBit(c+121,"ms_int", false,-1);
    tracep->declBit(c+782,"tf_push", false,-1);
    tracep->declBit(c+122,"rf_pop", false,-1);
    tracep->declBus(c+1004,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+123,"rf_error_bit", false,-1);
    tracep->declBit(c+104,"rf_overrun", false,-1);
    tracep->declBit(c+783,"rf_push_pulse", false,-1);
    tracep->declBus(c+124,"rf_count", false,-1, 4,0);
    tracep->declBus(c+784,"tf_count", false,-1, 4,0);
    tracep->declBus(c+785,"tstate", false,-1, 2,0);
    tracep->declBus(c+786,"rstate", false,-1, 3,0);
    tracep->declBus(c+125,"counter_t", false,-1, 9,0);
    tracep->declBit(c+126,"thre_set_en", false,-1);
    tracep->declBus(c+127,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+787,"block_value", false,-1, 7,0);
    tracep->declBit(c+788,"serial_out", false,-1);
    tracep->declBit(c+789,"serial_in", false,-1);
    tracep->declBit(c+3,"lsr_mask_condition", false,-1);
    tracep->declBit(c+4,"iir_read", false,-1);
    tracep->declBit(c+5,"msr_read", false,-1);
    tracep->declBit(c+6,"fifo_read", false,-1);
    tracep->declBit(c+7,"fifo_write", false,-1);
    tracep->declBus(c+128,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+129,"lsr0_d", false,-1);
    tracep->declBit(c+130,"lsr1_d", false,-1);
    tracep->declBit(c+131,"lsr2_d", false,-1);
    tracep->declBit(c+132,"lsr3_d", false,-1);
    tracep->declBit(c+133,"lsr4_d", false,-1);
    tracep->declBit(c+134,"lsr5_d", false,-1);
    tracep->declBit(c+135,"lsr6_d", false,-1);
    tracep->declBit(c+136,"lsr7_d", false,-1);
    tracep->declBit(c+137,"rls_int_d", false,-1);
    tracep->declBit(c+138,"thre_int_d", false,-1);
    tracep->declBit(c+139,"ms_int_d", false,-1);
    tracep->declBit(c+140,"ti_int_d", false,-1);
    tracep->declBit(c+141,"rda_int_d", false,-1);
    tracep->declBit(c+142,"rls_int_rise", false,-1);
    tracep->declBit(c+143,"thre_int_rise", false,-1);
    tracep->declBit(c+144,"ms_int_rise", false,-1);
    tracep->declBit(c+145,"ti_int_rise", false,-1);
    tracep->declBit(c+146,"rda_int_rise", false,-1);
    tracep->declBit(c+147,"rls_int_pnd", false,-1);
    tracep->declBit(c+148,"rda_int_pnd", false,-1);
    tracep->declBit(c+149,"thre_int_pnd", false,-1);
    tracep->declBit(c+150,"ms_int_pnd", false,-1);
    tracep->declBit(c+151,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1089,"Tp", false,-1, 31,0);
    tracep->declBus(c+1089,"width", false,-1, 31,0);
    tracep->declBus(c+1059,"init_value", false,-1, 0,0);
    tracep->declBit(c+968,"rst_i", false,-1);
    tracep->declBit(c+967,"clk_i", false,-1);
    tracep->declBit(c+1013,"stage1_rst_i", false,-1);
    tracep->declBit(c+1026,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+987,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+86,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+152,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+967,"clk", false,-1);
    tracep->declBit(c+968,"wb_rst_i", false,-1);
    tracep->declBus(c+774,"lcr", false,-1, 7,0);
    tracep->declBit(c+122,"rf_pop", false,-1);
    tracep->declBit(c+789,"srx_pad_i", false,-1);
    tracep->declBit(c+773,"enable", false,-1);
    tracep->declBit(c+97,"rx_reset", false,-1);
    tracep->declBit(c+2,"lsr_mask", false,-1);
    tracep->declBus(c+125,"counter_t", false,-1, 9,0);
    tracep->declBus(c+124,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1004,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+104,"rf_overrun", false,-1);
    tracep->declBit(c+123,"rf_error_bit", false,-1);
    tracep->declBus(c+786,"rstate", false,-1, 3,0);
    tracep->declBit(c+783,"rf_push_pulse", false,-1);
    tracep->declBus(c+790,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+791,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+792,"rshift", false,-1, 7,0);
    tracep->declBit(c+793,"rparity", false,-1);
    tracep->declBit(c+794,"rparity_error", false,-1);
    tracep->declBit(c+795,"rframing_error", false,-1);
    tracep->declBit(c+153,"rbit_in", false,-1);
    tracep->declBit(c+796,"rparity_xor", false,-1);
    tracep->declBus(c+797,"counter_b", false,-1, 7,0);
    tracep->declBit(c+154,"rf_push_q", false,-1);
    tracep->declBus(c+798,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+799,"rf_push", false,-1);
    tracep->declBit(c+800,"break_error", false,-1);
    tracep->declBit(c+801,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+802,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+803,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+804,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1023,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1078,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1077,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1073,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1075,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1074,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1076,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1072,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1080,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1081,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1090,"sr_push", false,-1, 3,0);
    tracep->declBus(c+805,"toc_value", false,-1, 9,0);
    tracep->declBus(c+806,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1091,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1083,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1068,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1092,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+967,"clk", false,-1);
    tracep->declBit(c+968,"wb_rst_i", false,-1);
    tracep->declBit(c+783,"push", false,-1);
    tracep->declBit(c+122,"pop", false,-1);
    tracep->declBus(c+798,"data_in", false,-1, 10,0);
    tracep->declBit(c+97,"fifo_reset", false,-1);
    tracep->declBit(c+2,"reset_status", false,-1);
    tracep->declBus(c+1004,"data_out", false,-1, 10,0);
    tracep->declBit(c+104,"overrun", false,-1);
    tracep->declBus(c+124,"count", false,-1, 4,0);
    tracep->declBit(c+123,"error_bit", false,-1);
    tracep->declBus(c+1005,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+155+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+807,"top", false,-1, 3,0);
    tracep->declBus(c+171,"bottom", false,-1, 3,0);
    tracep->declBus(c+808,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+172,"word0", false,-1, 2,0);
    tracep->declBus(c+173,"word1", false,-1, 2,0);
    tracep->declBus(c+174,"word2", false,-1, 2,0);
    tracep->declBus(c+175,"word3", false,-1, 2,0);
    tracep->declBus(c+176,"word4", false,-1, 2,0);
    tracep->declBus(c+177,"word5", false,-1, 2,0);
    tracep->declBus(c+178,"word6", false,-1, 2,0);
    tracep->declBus(c+179,"word7", false,-1, 2,0);
    tracep->declBus(c+180,"word8", false,-1, 2,0);
    tracep->declBus(c+181,"word9", false,-1, 2,0);
    tracep->declBus(c+182,"word10", false,-1, 2,0);
    tracep->declBus(c+183,"word11", false,-1, 2,0);
    tracep->declBus(c+184,"word12", false,-1, 2,0);
    tracep->declBus(c+185,"word13", false,-1, 2,0);
    tracep->declBus(c+186,"word14", false,-1, 2,0);
    tracep->declBus(c+187,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1068,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1088,"data_width", false,-1, 31,0);
    tracep->declBus(c+1083,"depth", false,-1, 31,0);
    tracep->declBit(c+967,"clk", false,-1);
    tracep->declBit(c+783,"we", false,-1);
    tracep->declBus(c+807,"a", false,-1, 3,0);
    tracep->declBus(c+171,"dpra", false,-1, 3,0);
    tracep->declBus(c+809,"di", false,-1, 7,0);
    tracep->declBus(c+1005,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+667+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+967,"clk", false,-1);
    tracep->declBit(c+968,"wb_rst_i", false,-1);
    tracep->declBus(c+774,"lcr", false,-1, 7,0);
    tracep->declBit(c+782,"tf_push", false,-1);
    tracep->declBus(c+862,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+773,"enable", false,-1);
    tracep->declBit(c+777,"tx_reset", false,-1);
    tracep->declBit(c+2,"lsr_mask", false,-1);
    tracep->declBit(c+788,"stx_pad_o", false,-1);
    tracep->declBus(c+785,"tstate", false,-1, 2,0);
    tracep->declBus(c+784,"tf_count", false,-1, 4,0);
    tracep->declBus(c+810,"counter", false,-1, 4,0);
    tracep->declBus(c+811,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+812,"shift_out", false,-1, 6,0);
    tracep->declBit(c+813,"stx_o_tmp", false,-1);
    tracep->declBit(c+814,"parity_xor", false,-1);
    tracep->declBit(c+815,"tf_pop", false,-1);
    tracep->declBit(c+816,"bit_out", false,-1);
    tracep->declBus(c+862,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+822,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+188,"tf_overrun", false,-1);
    tracep->declBus(c+1029,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1012,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1047,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1048,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1060,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1093,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1088,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1083,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1068,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1092,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+967,"clk", false,-1);
    tracep->declBit(c+968,"wb_rst_i", false,-1);
    tracep->declBit(c+782,"push", false,-1);
    tracep->declBit(c+815,"pop", false,-1);
    tracep->declBus(c+862,"data_in", false,-1, 7,0);
    tracep->declBit(c+777,"fifo_reset", false,-1);
    tracep->declBit(c+2,"reset_status", false,-1);
    tracep->declBus(c+822,"data_out", false,-1, 7,0);
    tracep->declBit(c+188,"overrun", false,-1);
    tracep->declBus(c+784,"count", false,-1, 4,0);
    tracep->declBus(c+817,"top", false,-1, 3,0);
    tracep->declBus(c+818,"bottom", false,-1, 3,0);
    tracep->declBus(c+819,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1068,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1088,"data_width", false,-1, 31,0);
    tracep->declBus(c+1083,"depth", false,-1, 31,0);
    tracep->declBit(c+967,"clk", false,-1);
    tracep->declBit(c+782,"we", false,-1);
    tracep->declBus(c+817,"a", false,-1, 3,0);
    tracep->declBus(c+818,"dpra", false,-1, 3,0);
    tracep->declBus(c+862,"di", false,-1, 7,0);
    tracep->declBus(c+822,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+683+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBit(c+701,"auto_in_psel", false,-1);
    tracep->declBit(c+702,"auto_in_penable", false,-1);
    tracep->declBit(c+193,"auto_in_pwrite", false,-1);
    tracep->declBus(c+825,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1012,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+194,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+195,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1014,"auto_in_pready", false,-1);
    tracep->declBit(c+1015,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1016,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+981,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+982,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+983,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+984,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+985,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+986,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+967,"clock", false,-1);
    tracep->declBit(c+968,"reset", false,-1);
    tracep->declBus(c+853,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+701,"in_psel", false,-1);
    tracep->declBit(c+702,"in_penable", false,-1);
    tracep->declBus(c+1012,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+193,"in_pwrite", false,-1);
    tracep->declBus(c+194,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+195,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1014,"in_pready", false,-1);
    tracep->declBus(c+1016,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1015,"in_pslverr", false,-1);
    tracep->declBus(c+981,"vga_r", false,-1, 7,0);
    tracep->declBus(c+982,"vga_g", false,-1, 7,0);
    tracep->declBus(c+983,"vga_b", false,-1, 7,0);
    tracep->declBit(c+984,"vga_hsync", false,-1);
    tracep->declBit(c+985,"vga_vsync", false,-1);
    tracep->declBit(c+986,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+11,"sck", false,-1);
    tracep->declBit(c+189,"ss", false,-1);
    tracep->declBit(c+13,"mosi", false,-1);
    tracep->declBit(c+1006,"miso", false,-1);
    tracep->declBus(c+8,"data", false,-1, 7,0);
    tracep->declBus(c+9,"bit_cnt", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+11,"sck", false,-1);
    tracep->declBit(c+190,"ss", false,-1);
    tracep->declBit(c+13,"mosi", false,-1);
    tracep->declBit(c+1007,"miso", false,-1);
    tracep->declBit(c+190,"reset", false,-1);
    tracep->declBus(c+757,"state", false,-1, 2,0);
    tracep->declBus(c+758,"counter", false,-1, 7,0);
    tracep->declBus(c+1008,"cmd", false,-1, 7,0);
    tracep->declBus(c+1009,"addr", false,-1, 23,0);
    tracep->declBus(c+759,"data", false,-1, 31,0);
    tracep->declBit(c+760,"ren", false,-1);
    tracep->declBus(c+10,"rdata", false,-1, 31,0);
    tracep->declBus(c+1010,"raddr", false,-1, 31,0);
    tracep->declBus(c+1011,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+11,"clock", false,-1);
    tracep->declBit(c+760,"valid", false,-1);
    tracep->declBus(c+1008,"cmd", false,-1, 7,0);
    tracep->declBus(c+1010,"addr", false,-1, 31,0);
    tracep->declBus(c+10,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+990,"sck", false,-1);
    tracep->declBit(c+991,"ce_n", false,-1);
    tracep->declBus(c+863,"dio", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+992,"clk", false,-1);
    tracep->declBit(c+14,"cke", false,-1);
    tracep->declBit(c+15,"cs", false,-1);
    tracep->declBit(c+16,"ras", false,-1);
    tracep->declBit(c+17,"cas", false,-1);
    tracep->declBit(c+18,"we", false,-1);
    tracep->declBus(c+19,"a", false,-1, 12,0);
    tracep->declBus(c+20,"ba", false,-1, 1,0);
    tracep->declBus(c+21,"dqm", false,-1, 1,0);
    tracep->declBus(c+22,"dq", false,-1, 15,0);
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
    bufp->fullBit(oldp+11,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+12,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+13,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+14,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+15,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                  >> 3U))));
    bufp->fullBit(oldp+16,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                  >> 2U))));
    bufp->fullBit(oldp+17,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                  >> 1U))));
    bufp->fullBit(oldp+18,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+19,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+20,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+21,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),2);
    bufp->fullSData(oldp+22,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                 ? 0U : 0xffffU) & 
                               ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                   ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q)) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                     ? 0U : 0xffffU)) 
                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                    ? 0U : 0xffffU))) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                  ? 0U : 0xffffU))),16);
    bufp->fullIData(oldp+23,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                               << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))),32);
    bufp->fullBit(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullIData(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullBit(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+29,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullIData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullBit(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+36,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullSData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),16);
    bufp->fullCData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullBit(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullSData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),16);
    bufp->fullCData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),2);
    bufp->fullBit(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullSData(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),16);
    bufp->fullSData(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),16);
    bufp->fullIData(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullBit(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullSData(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+63,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                  >> 9U))));
    bufp->fullBit(oldp+64,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                  >> 0xaU))));
    bufp->fullCData(oldp+65,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+66,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                  >> 8U))));
    bufp->fullBit(oldp+67,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                  >> 0xbU))));
    bufp->fullBit(oldp+68,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                  >> 0xcU))));
    bufp->fullBit(oldp+69,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                  >> 0xdU))));
    bufp->fullBit(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+73,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+75,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+76,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+78,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                           - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                        : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                           - (IData)(1U))))),8);
    bufp->fullCData(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+82,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                     >> 1U)))));
    bufp->fullBit(oldp+83,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+85,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                  >> 1U))));
    bufp->fullBit(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullCData(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullCData(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+98,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                  >> 4U))));
    bufp->fullBit(oldp+99,((IData)((0x10U != (0x12U 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+100,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+101,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+102,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+103,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                           << 6U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                            << 5U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                               << 4U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))),8);
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+105,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+106,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+107,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+123,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullCData(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullSData(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+126,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+142,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+143,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+144,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+145,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+146,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullBit(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullCData(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullBit(oldp+189,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                   >> 7U))));
    bufp->fullBit(oldp+190,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+192,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w),32);
    bufp->fullCData(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullIData(oldp+196,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_awvalid));
    bufp->fullCData(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_wvalid));
    bufp->fullQData(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),64);
    bufp->fullCData(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),8);
    bufp->fullCData(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_arvalid));
    bufp->fullCData(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg),32);
    bufp->fullQData(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),64);
    bufp->fullQData(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg),64);
    bufp->fullCData(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),8);
    bufp->fullCData(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg),8);
    bufp->fullCData(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+226,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+227,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state))));
    bufp->fullIData(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_w_addr_o),32);
    bufp->fullCData(oldp+229,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__mask)),3);
    bufp->fullBit(oldp+230,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+231,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state))));
    bufp->fullQData(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata),64);
    bufp->fullCData(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb),8);
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast));
    bufp->fullBit(oldp+236,(((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state)) 
                             | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state)))));
    bufp->fullBit(oldp+237,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+238,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_state))));
    bufp->fullIData(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_addr_o),32);
    bufp->fullCData(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_size_o),3);
    bufp->fullBit(oldp+241,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_state))));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+243,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+245,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+247,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+248,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullCData(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullSData(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullCData(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullIData(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullQData(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullQData(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+293,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                    ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram[2U] 
                                       >> 8U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast)))));
    bufp->fullWData(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),73);
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid));
    bufp->fullIData(oldp+299,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+300,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+303,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+304,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+305,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullQData(oldp+308,((((QData)((IData)((0xffU 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                     ? 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                      ? (IData)(
                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                 >> 0x38U))
                                                      : 0U)
                                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r7))))) 
                                << 0x38U) | (((QData)((IData)(
                                                              (0xffU 
                                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                   ? 
                                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
                                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
                                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                          ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 0x20U))
                                                                          : 0U)
                                                                         : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r4))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                         ? 
                                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                          ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 0x18U))
                                                                          : 0U)
                                                                         : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                                       << 0x18U) 
                                                                      | ((0xff0000U 
                                                                          & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                               ? 
                                                                              ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 0x10U))
                                                                                : 0U)
                                                                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                                             << 0x10U)) 
                                                                         | ((0xff00U 
                                                                             & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 8U))
                                                                                 : 0U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                                                << 8U)) 
                                                                            | (0xffU 
                                                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? (IData)(vlSelf->__VdfgTmp_hf134a362__0)
                                                                                 : 0U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))))))))),64);
    bufp->fullCData(oldp+310,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+311,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullBit(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullCData(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r4),8);
    bufp->fullCData(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r5),8);
    bufp->fullCData(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r6),8);
    bufp->fullCData(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r7),8);
    bufp->fullSData(oldp+323,((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 3U))),10);
    bufp->fullQData(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),64);
    bufp->fullSData(oldp+326,((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 3U))),10);
    bufp->fullBit(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+329,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
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
    bufp->fullBit(oldp+330,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 1U))));
    bufp->fullBit(oldp+331,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+332,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+333,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullQData(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),64);
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+342,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                    | ((0xcU & (8U 
                                                ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                       | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x17U)) 
                                          | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullBit(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+389,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullCData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+402,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+406,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+410,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+414,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+418,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+422,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+426,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+430,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+434,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+438,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+442,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+446,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+450,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+454,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+458,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+462,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+466,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+470,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+474,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+478,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+482,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+486,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+490,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+494,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+498,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+502,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+506,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+510,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+514,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+518,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+522,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+526,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_pc_o_r),32);
    bufp->fullIData(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r),32);
    bufp->fullBit(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_stall_r));
    bufp->fullIData(oldp+533,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_mret)
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
    bufp->fullBit(oldp+534,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_mret) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_ecall) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h15124160__0) 
                                   | (0x67U == (0x7fU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)))))));
    bufp->fullIData(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__pc),32);
    bufp->fullBit(oldp+536,((0x63U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r))));
    bufp->fullBit(oldp+537,((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r))));
    bufp->fullBit(oldp+538,((0x67U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r))));
    bufp->fullCData(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_rd),5);
    bufp->fullBit(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_rd_wen));
    bufp->fullCData(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_rs1),5);
    bufp->fullCData(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_rs2),5);
    bufp->fullIData(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r),32);
    bufp->fullCData(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_alu_opt),4);
    bufp->fullCData(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_src_sel),2);
    bufp->fullCData(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt),2);
    bufp->fullCData(oldp+547,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                     >> 0xcU))),3);
    bufp->fullIData(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src1),32);
    bufp->fullIData(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src2),32);
    bufp->fullBit(oldp+550,((1U & (~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__exu_result_r))))));
    bufp->fullIData(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__exu_result_r),32);
    bufp->fullBit(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__ren));
    bufp->fullIData(oldp+553,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h623bd169__0
                                : 0U)),32);
    bufp->fullCData(oldp+554,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__rsize)),3);
    bufp->fullBit(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__wen));
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_ecall));
    bufp->fullBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_mret));
    bufp->fullIData(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wr_csr_data),32);
    bufp->fullIData(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                              [0x300U]),32);
    bufp->fullIData(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                              [0x305U]),32);
    bufp->fullIData(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                              [0x341U]),32);
    bufp->fullBit(oldp+562,((1U & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_stall_r)
                                    : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state))
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__ren)
                                        : 0U)))));
    bufp->fullCData(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state),2);
    bufp->fullCData(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state),3);
    bufp->fullQData(oldp+565,((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src2))),64);
    bufp->fullCData(oldp+567,(((0U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__mask))
                                ? 1U : ((1U == (7U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__mask))
                                         ? 3U : 0xfU))),8);
    bufp->fullCData(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_cnt),8);
    bufp->fullCData(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_state),2);
    bufp->fullSData(oldp+570,((0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r)),12);
    bufp->fullBit(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__wr_en));
    bufp->fullIData(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__wr_data_r),32);
    bufp->fullIData(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__temp),32);
    bufp->fullIData(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__mepc_inst_r),32);
    bufp->fullIData(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                              [0x342U]),32);
    bufp->fullIData(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data),32);
    bufp->fullIData(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_b_data),32);
    bufp->fullIData(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__alu_out_data_r),32);
    bufp->fullBit(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__sub_flag));
    bufp->fullQData(oldp+580,((((QData)((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data 
                                                 >> 0x1fU))) 
                                << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data)))),33);
    bufp->fullQData(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__alu_b_t),33);
    bufp->fullQData(oldp+584,((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__sub_flag))),33);
    bufp->fullQData(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out),33);
    bufp->fullBit(oldp+588,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data 
                             >> 0x1fU)));
    bufp->fullBit(oldp+589,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__alu_b_t 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+590,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+591,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+592,((1U & VL_REDXOR_64((0x180000000ULL 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out)))));
    bufp->fullBit(oldp+593,((1U & ((((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data 
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
    bufp->fullIData(oldp+594,((IData)(((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data))) 
                                       >> (0x3fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_b_data)))),32);
    bufp->fullCData(oldp+595,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)),7);
    bufp->fullCData(oldp+596,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                               >> 0x19U)),7);
    bufp->fullIData(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_typeI),32);
    bufp->fullIData(oldp+598,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)),32);
    bufp->fullIData(oldp+599,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+600,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
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
    bufp->fullIData(oldp+601,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
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
    bufp->fullSData(oldp+602,(((0x1000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                           >> 0x13U)) 
                               | ((0x800U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                             << 4U)) 
                                  | ((0x7e0U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                >> 0x14U)) 
                                     | (0x1eU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                 >> 7U)))))),13);
    bufp->fullSData(oldp+603,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+604,(((0x100000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                             >> 0xbU)) 
                               | ((0xff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r) 
                                  | ((0x800U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                >> 9U)) 
                                     | (0x7feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                  >> 0x14U)))))),21);
    bufp->fullSData(oldp+605,(((0xfe0U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                           >> 7U)))),12);
    bufp->fullIData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__rsize),32);
    bufp->fullIData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__mask),32);
    bufp->fullIData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[0]),32);
    bufp->fullIData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[1]),32);
    bufp->fullIData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[2]),32);
    bufp->fullIData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[3]),32);
    bufp->fullIData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[4]),32);
    bufp->fullIData(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[5]),32);
    bufp->fullIData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[6]),32);
    bufp->fullIData(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[7]),32);
    bufp->fullIData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[8]),32);
    bufp->fullIData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[9]),32);
    bufp->fullIData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[10]),32);
    bufp->fullIData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[11]),32);
    bufp->fullIData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[12]),32);
    bufp->fullIData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[13]),32);
    bufp->fullIData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[14]),32);
    bufp->fullIData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[15]),32);
    bufp->fullIData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[16]),32);
    bufp->fullIData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[17]),32);
    bufp->fullIData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[18]),32);
    bufp->fullIData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[19]),32);
    bufp->fullIData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[20]),32);
    bufp->fullIData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[21]),32);
    bufp->fullIData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[22]),32);
    bufp->fullIData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[23]),32);
    bufp->fullIData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[24]),32);
    bufp->fullIData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[25]),32);
    bufp->fullIData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[26]),32);
    bufp->fullIData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[27]),32);
    bufp->fullIData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[28]),32);
    bufp->fullIData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[29]),32);
    bufp->fullIData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[30]),32);
    bufp->fullIData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[31]),32);
    bufp->fullBit(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu_u0__idu_rd_wen));
    bufp->fullBit(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullIData(oldp+651,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+657,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+658,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+659,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                   << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullCData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+664,((0xffU & ((IData)(0xdU) 
                                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                           << 1U)))),8);
    bufp->fullCData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+699,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+700,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+701,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+702,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+703,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+704,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+705,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+706,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+707,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullCData(oldp+708,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                   << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r))),2);
    bufp->fullQData(oldp+709,((((QData)((IData)(((1U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                  : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((1U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                              ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                              : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))))),64);
    bufp->fullCData(oldp+711,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullQData(oldp+712,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
                                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
                                                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
                                                                              ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 0x20U))
                                                                                 : 0U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r4))))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 0x18U))
                                                                                 : 0U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                                                << 0x18U) 
                                                                               | ((0xff0000U 
                                                                                & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 0x10U))
                                                                                 : 0U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                                                << 0x10U)) 
                                                                                | ((0xff00U 
                                                                                & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? (IData)(
                                                                                (vlSelf->__VdfgTmp_hf134a362__0 
                                                                                >> 8U))
                                                                                 : 0U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                                                << 8U)) 
                                                                                | (0xffU 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                                 ? (IData)(vlSelf->__VdfgTmp_hf134a362__0)
                                                                                 : 0U)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))))))))
                                                : 0ULL)))),64);
    bufp->fullBit(oldp+714,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+715,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+716,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+717,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+718,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+719,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+720,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+721,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+722,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+723,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+724,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+725,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+726,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+727,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+728,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+729,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+730,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+731,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+732,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+733,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+734,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+735,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+736,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+737,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+738,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+739,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+740,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+741,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+742,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+743,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+744,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+745,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+746,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+747,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+748,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+749,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_ready_i))));
    bufp->fullIData(oldp+750,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state))
                                ? (IData)(vlSelf->__VdfgTmp_h93b0bd6a__0)
                                : 0U)),32);
    bufp->fullBit(oldp+751,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_last_i))));
    bufp->fullIData(oldp+752,(((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
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
                                                   ? (IData)(vlSelf->__VdfgTmp_h93b0bd6a__0)
                                                   : 0U))
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                  ? 
                                                 (((- (IData)(
                                                              ((2U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                                                               & (IData)(
                                                                         (vlSelf->__VdfgTmp_h93b0bd6a__0 
                                                                          >> 0xfU))))) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h56d28e90__0))
                                                  : 
                                                 (((- (IData)(
                                                              ((2U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                                                               & (IData)(
                                                                         (vlSelf->__VdfgTmp_h93b0bd6a__0 
                                                                          >> 7U))))) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h56d2889a__0)))))
                                         : 0U))),32);
    bufp->fullBit(oldp+753,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_ready_i))));
    bufp->fullIData(oldp+754,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state))
                                ? (IData)(vlSelf->__VdfgTmp_h93b0bd6a__0)
                                : 0U)),32);
    bufp->fullBit(oldp+755,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_last_i))));
    bufp->fullBit(oldp+756,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu_u0__idu_rd_wen)
                              : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu_u0__idu_rd_wen)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rd_wen)))));
    bufp->fullCData(oldp+757,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+758,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullIData(oldp+759,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+760,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullBit(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+763,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+764,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullCData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullCData(oldp+766,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+767,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullCData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullWData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullCData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullSData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullSData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullBit(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+778,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullCData(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullSData(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+800,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+801,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+802,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+803,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+804,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+806,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+808,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+809,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullCData(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+819,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullCData(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullCData(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w),32);
    bufp->fullBit(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullIData(oldp+825,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),30);
    bufp->fullIData(oldp+826,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),29);
    bufp->fullBit(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel));
    bufp->fullBit(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel));
    bufp->fullBit(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable));
    bufp->fullBit(oldp+830,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel))));
    bufp->fullBit(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_psel));
    bufp->fullBit(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_penable));
    bufp->fullBit(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullCData(oldp+840,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullIData(oldp+841,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullBit(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullIData(oldp+844,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullIData(oldp+845,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullBit(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+850,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                         >> 1U))),13);
    bufp->fullSData(oldp+851,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+852,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                     >> 0xaU))),2);
    bufp->fullIData(oldp+853,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullCData(oldp+854,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),5);
    bufp->fullBit(oldp+855,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))));
    bufp->fullBit(oldp+856,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))));
    bufp->fullCData(oldp+857,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                 & (0xcU == (0x1cU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                            & (8U == 
                                               (0x1cU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                           << 2U) | 
                                          ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                             & (4U 
                                                == 
                                                (0x1cU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                            << 1U) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                              & (0U 
                                                 == 
                                                 (0x1cU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))))))),4);
    bufp->fullBit(oldp+858,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))));
    bufp->fullCData(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+860,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),3);
    bufp->fullCData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullCData(oldp+863,((((((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten))) 
                                  | (0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten)))) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0))),4);
    bufp->fullBit(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_bready));
    bufp->fullBit(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_rready));
    bufp->fullBit(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_w_last_i));
    bufp->fullCData(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_ready_i));
    bufp->fullCData(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19),4);
    bufp->fullBit(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_last_i));
    bufp->fullBit(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4));
    bufp->fullBit(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_bready));
    bufp->fullBit(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_rready));
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__nodeIn_awready));
    bufp->fullBit(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAROI_in_0_arready_T_4));
    bufp->fullBit(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+917,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+918,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+919,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+920,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+921,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+922,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+923,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+924,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+925,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+926,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+927,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+928,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+929,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+930,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+931,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+932,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+933,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+934,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+935,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+936,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+937,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+938,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+939,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+940,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+941,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+942,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+943,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+944,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+945,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+946,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+947,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+948,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__stall));
    bufp->fullBit(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rd_wen));
    bufp->fullIData(oldp+951,((IData)(vlSelf->__VdfgTmp_h93b0bd6a__0)),32);
    bufp->fullBit(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__flush_inst));
    bufp->fullBit(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__lsu_rd_wen_r));
    bufp->fullBit(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__lsu_rd_wen_w));
    bufp->fullCData(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullIData(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+967,(vlSelf->clock));
    bufp->fullBit(oldp+968,(vlSelf->reset));
    bufp->fullSData(oldp+969,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+970,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+971,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+972,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+973,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+974,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+975,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+976,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+977,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+978,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+979,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+980,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+981,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+982,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+983,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+984,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+985,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+986,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+987,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+988,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+989,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                     & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                     ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                     : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                   >> 0x1fU)))));
    bufp->fullBit(oldp+990,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)
                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))));
    bufp->fullBit(oldp+991,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)
                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n))));
    bufp->fullBit(oldp+992,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+993,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel))));
    bufp->fullIData(oldp+994,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel)
                                ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                    << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                : 0U)),32);
    bufp->fullCData(oldp+995,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                 ? ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                        << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r))
                                 : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                           ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                               ? 0U
                                               : 3U)
                                           : 0U))),2);
    bufp->fullBit(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullIData(oldp+997,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
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
                                                     ? (IData)(vlSelf->__VdfgTmp_h93b0bd6a__0)
                                                     : 0U))
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                    ? 
                                                   (((- (IData)(
                                                                ((2U 
                                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                                                                 & (IData)(
                                                                           (vlSelf->__VdfgTmp_h93b0bd6a__0 
                                                                            >> 0xfU))))) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h56d28e90__0))
                                                    : 
                                                   (((- (IData)(
                                                                ((2U 
                                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                                                                 & (IData)(
                                                                           (vlSelf->__VdfgTmp_h93b0bd6a__0 
                                                                            >> 7U))))) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h56d2889a__0)))))
                                                 : 0U))))),32);
    bufp->fullIData(oldp+998,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)
                                ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__wr_en)
                                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                                        [(0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r)]
                                         : 0U))),32);
    bufp->fullBit(oldp+999,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                              : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+1000,((0xfU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                         ? (1U & (0xebU 
                                                  >> 
                                                  (7U 
                                                   & ((IData)(7U) 
                                                      - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))))
                                         : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                             ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                >> 0x14U)
                                             : ((9U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                 ? 
                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                 >> 0x10U)
                                                 : 
                                                ((0xaU 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                  ? 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                  >> 0xcU)
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                   ? 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 8U)
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 4U)
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                     : 0U))))))))),4);
    bufp->fullBit(oldp+1001,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1004,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullBit(oldp+1006,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullBit(oldp+1007,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullCData(oldp+1008,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1009,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1010,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1011,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+1012,(1U),3);
    bufp->fullBit(oldp+1013,(0U));
    bufp->fullBit(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+1023,(0U),4);
    bufp->fullCData(oldp+1024,(0U),8);
    bufp->fullCData(oldp+1025,(1U),2);
    bufp->fullBit(oldp+1026,(1U));
    bufp->fullBit(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1028,(0U),32);
    bufp->fullCData(oldp+1029,(0U),3);
    bufp->fullCData(oldp+1030,(0U),2);
    bufp->fullBit(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullQData(oldp+1032,(0ULL),64);
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullQData(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),64);
    bufp->fullBit(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_inst_t),32);
    bufp->fullIData(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_result_t),32);
    bufp->fullCData(oldp+1046,(2U),2);
    bufp->fullCData(oldp+1047,(2U),3);
    bufp->fullCData(oldp+1048,(3U),3);
    bufp->fullCData(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_cnt),8);
    bufp->fullBit(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__carry_flag));
    bufp->fullBit(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__signed_flag));
    bufp->fullCData(oldp+1052,(0U),5);
    bufp->fullIData(oldp+1053,(0xdU),32);
    bufp->fullIData(oldp+1054,(0xcU),32);
    bufp->fullIData(oldp+1055,(0x15U),32);
    bufp->fullIData(oldp+1056,(0x20U),32);
    bufp->fullIData(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__inst_t),32);
    bufp->fullBit(oldp+1058,(0U));
    bufp->fullBit(oldp+1059,(1U));
    bufp->fullCData(oldp+1060,(4U),3);
    bufp->fullCData(oldp+1061,(0x1bU),8);
    bufp->fullCData(oldp+1062,(0xebU),8);
    bufp->fullCData(oldp+1063,(0x38U),8);
    bufp->fullIData(oldp+1064,(0x64U),32);
    bufp->fullIData(oldp+1065,(0x18U),32);
    bufp->fullIData(oldp+1066,(9U),32);
    bufp->fullIData(oldp+1067,(2U),32);
    bufp->fullIData(oldp+1068,(4U),32);
    bufp->fullIData(oldp+1069,(0x2000U),32);
    bufp->fullIData(oldp+1070,(0x2710U),32);
    bufp->fullIData(oldp+1071,(0x30cU),32);
    bufp->fullCData(oldp+1072,(7U),4);
    bufp->fullCData(oldp+1073,(3U),4);
    bufp->fullCData(oldp+1074,(5U),4);
    bufp->fullCData(oldp+1075,(4U),4);
    bufp->fullCData(oldp+1076,(6U),4);
    bufp->fullCData(oldp+1077,(2U),4);
    bufp->fullCData(oldp+1078,(1U),4);
    bufp->fullSData(oldp+1079,(0x21U),13);
    bufp->fullCData(oldp+1080,(8U),4);
    bufp->fullCData(oldp+1081,(9U),4);
    bufp->fullIData(oldp+1082,(0xaU),32);
    bufp->fullIData(oldp+1083,(0x10U),32);
    bufp->fullIData(oldp+1084,(6U),32);
    bufp->fullIData(oldp+1085,(0x11U),32);
    bufp->fullIData(oldp+1086,(0x30000000U),32);
    bufp->fullIData(oldp+1087,(0x3fffffffU),32);
    bufp->fullIData(oldp+1088,(8U),32);
    bufp->fullIData(oldp+1089,(1U),32);
    bufp->fullCData(oldp+1090,(0xaU),4);
    bufp->fullIData(oldp+1091,(0xbU),32);
    bufp->fullIData(oldp+1092,(5U),32);
    bufp->fullCData(oldp+1093,(5U),3);
}
