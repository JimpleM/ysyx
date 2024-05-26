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
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBus(c+968,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+969,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+970,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+971,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+972,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+973,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+974,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+975,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+976,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+977,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+978,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+979,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+980,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+981,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+982,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+983,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+984,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+985,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+986,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+987,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBus(c+968,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+969,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+970,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+971,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+972,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+973,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+974,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+975,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+976,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+977,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+978,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+979,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+980,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+981,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+982,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+983,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+984,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+985,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+986,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+987,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+8,"spi_sck", false,-1);
    tracep->declBus(c+9,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+759,"spi_mosi", false,-1);
    tracep->declBit(c+988,"spi_miso", false,-1);
    tracep->declBit(c+986,"uart_rx", false,-1);
    tracep->declBit(c+987,"uart_tx", false,-1);
    tracep->declBit(c+989,"psram_sck", false,-1);
    tracep->declBit(c+990,"psram_ce_n", false,-1);
    tracep->declBus(c+862,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+991,"sdram_clk", false,-1);
    tracep->declBit(c+10,"sdram_cke", false,-1);
    tracep->declBit(c+11,"sdram_cs", false,-1);
    tracep->declBit(c+12,"sdram_ras", false,-1);
    tracep->declBit(c+13,"sdram_cas", false,-1);
    tracep->declBit(c+14,"sdram_we", false,-1);
    tracep->declBus(c+15,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+16,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+17,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+18,"sdram_dq", false,-1, 15,0);
    tracep->declBus(c+968,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+969,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+970,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+971,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+972,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+973,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+974,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+975,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+976,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+977,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+978,"ps2_clk", false,-1);
    tracep->declBit(c+979,"ps2_data", false,-1);
    tracep->declBus(c+980,"vga_r", false,-1, 7,0);
    tracep->declBus(c+981,"vga_g", false,-1, 7,0);
    tracep->declBus(c+982,"vga_b", false,-1, 7,0);
    tracep->declBit(c+983,"vga_hsync", false,-1);
    tracep->declBit(c+984,"vga_vsync", false,-1);
    tracep->declBit(c+985,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBus(c+822,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+187,"in_psel", false,-1);
    tracep->declBit(c+188,"in_penable", false,-1);
    tracep->declBus(c+1008,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+189,"in_pwrite", false,-1);
    tracep->declBus(c+190,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+191,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+863,"in_pready", false,-1);
    tracep->declBus(c+864,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+823,"in_pslverr", false,-1);
    tracep->declBus(c+822,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+187,"out_psel", false,-1);
    tracep->declBit(c+188,"out_penable", false,-1);
    tracep->declBus(c+1008,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+189,"out_pwrite", false,-1);
    tracep->declBus(c+190,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+191,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+863,"out_pready", false,-1);
    tracep->declBus(c+864,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+823,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+187,"auto_in_psel", false,-1);
    tracep->declBit(c+188,"auto_in_penable", false,-1);
    tracep->declBit(c+189,"auto_in_pwrite", false,-1);
    tracep->declBus(c+822,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1008,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+190,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+191,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+863,"auto_in_pready", false,-1);
    tracep->declBit(c+823,"auto_in_pslverr", false,-1);
    tracep->declBus(c+864,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+695,"auto_out_6_psel", false,-1);
    tracep->declBit(c+696,"auto_out_6_penable", false,-1);
    tracep->declBit(c+189,"auto_out_6_pwrite", false,-1);
    tracep->declBus(c+822,"auto_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1008,"auto_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+190,"auto_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+191,"auto_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+760,"auto_out_6_pready", false,-1);
    tracep->declBit(c+1009,"auto_out_6_pslverr", false,-1);
    tracep->declBus(c+19,"auto_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+697,"auto_out_5_psel", false,-1);
    tracep->declBit(c+698,"auto_out_5_penable", false,-1);
    tracep->declBit(c+189,"auto_out_5_pwrite", false,-1);
    tracep->declBus(c+824,"auto_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1008,"auto_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+190,"auto_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+191,"auto_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1010,"auto_out_5_pready", false,-1);
    tracep->declBit(c+1011,"auto_out_5_pslverr", false,-1);
    tracep->declBus(c+1012,"auto_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+699,"auto_out_4_psel", false,-1);
    tracep->declBit(c+700,"auto_out_4_penable", false,-1);
    tracep->declBit(c+189,"auto_out_4_pwrite", false,-1);
    tracep->declBus(c+825,"auto_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1008,"auto_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+190,"auto_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+191,"auto_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1013,"auto_out_4_pready", false,-1);
    tracep->declBit(c+1014,"auto_out_4_pslverr", false,-1);
    tracep->declBus(c+1015,"auto_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+701,"auto_out_3_psel", false,-1);
    tracep->declBit(c+702,"auto_out_3_penable", false,-1);
    tracep->declBit(c+189,"auto_out_3_pwrite", false,-1);
    tracep->declBus(c+825,"auto_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1008,"auto_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+190,"auto_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+191,"auto_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1016,"auto_out_3_pready", false,-1);
    tracep->declBit(c+1017,"auto_out_3_pslverr", false,-1);
    tracep->declBus(c+1018,"auto_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+826,"auto_out_2_psel", false,-1);
    tracep->declBit(c+703,"auto_out_2_penable", false,-1);
    tracep->declBit(c+189,"auto_out_2_pwrite", false,-1);
    tracep->declBus(c+822,"auto_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1008,"auto_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+190,"auto_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+191,"auto_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+992,"auto_out_2_pready", false,-1);
    tracep->declBit(c+1009,"auto_out_2_pslverr", false,-1);
    tracep->declBus(c+192,"auto_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+827,"auto_out_1_psel", false,-1);
    tracep->declBit(c+828,"auto_out_1_penable", false,-1);
    tracep->declBit(c+189,"auto_out_1_pwrite", false,-1);
    tracep->declBus(c+825,"auto_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1008,"auto_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+190,"auto_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+191,"auto_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+829,"auto_out_1_pready", false,-1);
    tracep->declBit(c+1009,"auto_out_1_pslverr", false,-1);
    tracep->declBus(c+993,"auto_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+830,"auto_out_0_psel", false,-1);
    tracep->declBit(c+831,"auto_out_0_penable", false,-1);
    tracep->declBit(c+189,"auto_out_0_pwrite", false,-1);
    tracep->declBus(c+824,"auto_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1008,"auto_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+190,"auto_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+191,"auto_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+20,"auto_out_0_pready", false,-1);
    tracep->declBit(c+1009,"auto_out_0_pslverr", false,-1);
    tracep->declBus(c+21,"auto_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+832,"sel_0", false,-1);
    tracep->declBit(c+833,"sel_1", false,-1);
    tracep->declBit(c+834,"sel_2", false,-1);
    tracep->declBit(c+835,"sel_3", false,-1);
    tracep->declBit(c+836,"sel_4", false,-1);
    tracep->declBit(c+837,"sel_5", false,-1);
    tracep->declBit(c+838,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+193,"auto_in_awready", false,-1);
    tracep->declBit(c+194,"auto_in_awvalid", false,-1);
    tracep->declBus(c+195,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+196,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+197,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+193,"auto_in_wready", false,-1);
    tracep->declBit(c+198,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+199,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+201,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+865,"auto_in_bready", false,-1);
    tracep->declBit(c+866,"auto_in_bvalid", false,-1);
    tracep->declBus(c+202,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+704,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+203,"auto_in_arready", false,-1);
    tracep->declBit(c+204,"auto_in_arvalid", false,-1);
    tracep->declBus(c+205,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+206,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+207,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+867,"auto_in_rready", false,-1);
    tracep->declBit(c+868,"auto_in_rvalid", false,-1);
    tracep->declBus(c+208,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+705,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+704,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+187,"auto_out_psel", false,-1);
    tracep->declBit(c+188,"auto_out_penable", false,-1);
    tracep->declBit(c+189,"auto_out_pwrite", false,-1);
    tracep->declBus(c+822,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+190,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+191,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+863,"auto_out_pready", false,-1);
    tracep->declBit(c+823,"auto_out_pslverr", false,-1);
    tracep->declBus(c+864,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+188,"nodeOut_penable", false,-1);
    tracep->declBus(c+209,"state", false,-1, 1,0);
    tracep->declBit(c+203,"accept_read", false,-1);
    tracep->declBit(c+193,"accept_write", false,-1);
    tracep->declBit(c+210,"is_write_r", false,-1);
    tracep->declBit(c+189,"is_write", false,-1);
    tracep->declBus(c+208,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+202,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+211,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+212,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+213,"awaddr_reg", false,-1, 31,0);
    tracep->declQuad(c+214,"wdata_reg_r", false,-1, 63,0);
    tracep->declQuad(c+216,"wdata_reg", false,-1, 63,0);
    tracep->declBus(c+218,"wstrb_reg_r", false,-1, 7,0);
    tracep->declBus(c+219,"wstrb_reg", false,-1, 7,0);
    tracep->declBus(c+839,"resp", false,-1, 1,0);
    tracep->declBus(c+220,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+704,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+868,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+221,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+866,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+222,"auto_in_awready", false,-1);
    tracep->declBit(c+223,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1019,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+224,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1020,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+225,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1021,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+226,"auto_in_wready", false,-1);
    tracep->declBit(c+227,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+228,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+230,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+231,"auto_in_wlast", false,-1);
    tracep->declBit(c+232,"auto_in_bready", false,-1);
    tracep->declBit(c+869,"auto_in_bvalid", false,-1);
    tracep->declBus(c+870,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+707,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+233,"auto_in_arready", false,-1);
    tracep->declBit(c+234,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1019,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+235,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1020,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+236,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1021,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+237,"auto_in_rready", false,-1);
    tracep->declBit(c+871,"auto_in_rvalid", false,-1);
    tracep->declBus(c+872,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+708,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+994,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+873,"auto_in_rlast", false,-1);
    tracep->declBit(c+874,"auto_out_awready", false,-1);
    tracep->declBit(c+238,"auto_out_awvalid", false,-1);
    tracep->declBus(c+195,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+196,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+197,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+239,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+875,"auto_out_wready", false,-1);
    tracep->declBit(c+240,"auto_out_wvalid", false,-1);
    tracep->declQuad(c+199,"auto_out_wdata", false,-1, 63,0);
    tracep->declBus(c+201,"auto_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+241,"auto_out_wlast", false,-1);
    tracep->declBit(c+876,"auto_out_bready", false,-1);
    tracep->declBit(c+877,"auto_out_bvalid", false,-1);
    tracep->declBus(c+870,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+878,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+879,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+880,"auto_out_arready", false,-1);
    tracep->declBit(c+242,"auto_out_arvalid", false,-1);
    tracep->declBus(c+205,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+206,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+207,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+243,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+237,"auto_out_rready", false,-1);
    tracep->declBit(c+871,"auto_out_rvalid", false,-1);
    tracep->declBus(c+872,"auto_out_rid", false,-1, 3,0);
    tracep->declQuad(c+708,"auto_out_rdata", false,-1, 63,0);
    tracep->declBus(c+994,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+710,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+881,"auto_out_rlast", false,-1);
    tracep->declBit(c+240,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+244,"w_idle", false,-1);
    tracep->declBit(c+882,"in_awready", false,-1);
    tracep->declBit(c+245,"busy", false,-1);
    tracep->declBus(c+246,"r_addr", false,-1, 31,0);
    tracep->declBus(c+247,"r_len", false,-1, 7,0);
    tracep->declBus(c+248,"len", false,-1, 7,0);
    tracep->declBus(c+249,"addr", false,-1, 31,0);
    tracep->declBit(c+250,"busy_1", false,-1);
    tracep->declBus(c+251,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+252,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+253,"len_1", false,-1, 7,0);
    tracep->declBus(c+254,"addr_1", false,-1, 31,0);
    tracep->declBit(c+255,"wbeats_latched", false,-1);
    tracep->declBit(c+238,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+256,"wbeats_valid", false,-1);
    tracep->declBus(c+257,"w_counter", false,-1, 8,0);
    tracep->declBus(c+258,"w_todo", false,-1, 8,0);
    tracep->declBit(c+241,"w_last", false,-1);
    tracep->declBit(c+876,"nodeOut_bready", false,-1);
    tracep->declBus(c+259,"error_0", false,-1, 1,0);
    tracep->declBus(c+260,"error_1", false,-1, 1,0);
    tracep->declBus(c+261,"error_2", false,-1, 1,0);
    tracep->declBus(c+262,"error_3", false,-1, 1,0);
    tracep->declBus(c+263,"error_4", false,-1, 1,0);
    tracep->declBus(c+264,"error_5", false,-1, 1,0);
    tracep->declBus(c+265,"error_6", false,-1, 1,0);
    tracep->declBus(c+266,"error_7", false,-1, 1,0);
    tracep->declBus(c+267,"error_8", false,-1, 1,0);
    tracep->declBus(c+268,"error_9", false,-1, 1,0);
    tracep->declBus(c+269,"error_10", false,-1, 1,0);
    tracep->declBus(c+270,"error_11", false,-1, 1,0);
    tracep->declBus(c+271,"error_12", false,-1, 1,0);
    tracep->declBus(c+272,"error_13", false,-1, 1,0);
    tracep->declBus(c+273,"error_14", false,-1, 1,0);
    tracep->declBus(c+274,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+233,"io_enq_ready", false,-1);
    tracep->declBit(c+234,"io_enq_valid", false,-1);
    tracep->declBus(c+1019,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+235,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1020,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+236,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1021,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+883,"io_deq_ready", false,-1);
    tracep->declBit(c+242,"io_deq_valid", false,-1);
    tracep->declBus(c+205,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+275,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+276,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+207,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+277,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+278,"ram", false,-1, 48,0);
    tracep->declBit(c+280,"full", false,-1);
    tracep->declBit(c+242,"io_deq_valid_0", false,-1);
    tracep->declBit(c+884,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+222,"io_enq_ready", false,-1);
    tracep->declBit(c+223,"io_enq_valid", false,-1);
    tracep->declBus(c+1019,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+224,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1020,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+225,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1021,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+885,"io_deq_ready", false,-1);
    tracep->declBit(c+281,"io_deq_valid", false,-1);
    tracep->declBus(c+195,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+282,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+283,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+197,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+284,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+285,"ram", false,-1, 48,0);
    tracep->declBit(c+287,"full", false,-1);
    tracep->declBit(c+281,"io_deq_valid_0", false,-1);
    tracep->declBit(c+886,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+226,"io_enq_ready", false,-1);
    tracep->declBit(c+227,"io_enq_valid", false,-1);
    tracep->declQuad(c+228,"io_enq_bits_data", false,-1, 63,0);
    tracep->declBus(c+230,"io_enq_bits_strb", false,-1, 7,0);
    tracep->declBit(c+231,"io_enq_bits_last", false,-1);
    tracep->declBit(c+887,"io_deq_ready", false,-1);
    tracep->declBit(c+288,"io_deq_valid", false,-1);
    tracep->declQuad(c+199,"io_deq_bits_data", false,-1, 63,0);
    tracep->declBus(c+201,"io_deq_bits_strb", false,-1, 7,0);
    tracep->declBit(c+289,"io_deq_bits_last", false,-1);
    tracep->declArray(c+290,"ram", false,-1, 72,0);
    tracep->declBit(c+293,"full", false,-1);
    tracep->declBit(c+288,"io_deq_valid_0", false,-1);
    tracep->declBit(c+888,"do_enq", false,-1);
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
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+889,"auto_in_awready", false,-1);
    tracep->declBit(c+294,"auto_in_awvalid", false,-1);
    tracep->declBus(c+195,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+295,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+711,"auto_in_wready", false,-1);
    tracep->declBit(c+296,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+199,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+201,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+890,"auto_in_bready", false,-1);
    tracep->declBit(c+297,"auto_in_bvalid", false,-1);
    tracep->declBus(c+298,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+299,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+891,"auto_in_arready", false,-1);
    tracep->declBit(c+300,"auto_in_arvalid", false,-1);
    tracep->declBus(c+205,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+301,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+892,"auto_in_rready", false,-1);
    tracep->declBit(c+302,"auto_in_rvalid", false,-1);
    tracep->declBus(c+303,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+304,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+306,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+891,"nodeIn_arready", false,-1);
    tracep->declBit(c+889,"nodeIn_awready", false,-1);
    tracep->declBit(c+307,"w_sel0", false,-1);
    tracep->declBit(c+297,"w_full", false,-1);
    tracep->declBus(c+298,"w_id", false,-1, 3,0);
    tracep->declBit(c+308,"r_sel1", false,-1);
    tracep->declBit(c+309,"w_sel1", false,-1);
    tracep->declBit(c+302,"r_full", false,-1);
    tracep->declBus(c+303,"r_id", false,-1, 3,0);
    tracep->declBit(c+893,"ren", false,-1);
    tracep->declBit(c+310,"rdata_REG", false,-1);
    tracep->declBus(c+311,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+312,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+313,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+314,"rdata_r3", false,-1, 7,0);
    tracep->declBus(c+315,"rdata_r4", false,-1, 7,0);
    tracep->declBus(c+316,"rdata_r5", false,-1, 7,0);
    tracep->declBus(c+317,"rdata_r6", false,-1, 7,0);
    tracep->declBus(c+318,"rdata_r7", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+319,"R0_addr", false,-1, 9,0);
    tracep->declBit(c+893,"R0_en", false,-1);
    tracep->declBit(c+966,"R0_clk", false,-1);
    tracep->declQuad(c+320,"R0_data", false,-1, 63,0);
    tracep->declBus(c+322,"W0_addr", false,-1, 9,0);
    tracep->declBit(c+894,"W0_en", false,-1);
    tracep->declBit(c+966,"W0_clk", false,-1);
    tracep->declQuad(c+199,"W0_data", false,-1, 63,0);
    tracep->declBus(c+201,"W0_mask", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+222,"auto_in_awready", false,-1);
    tracep->declBit(c+223,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1019,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+224,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1020,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+225,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1021,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+226,"auto_in_wready", false,-1);
    tracep->declBit(c+227,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+228,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+230,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+231,"auto_in_wlast", false,-1);
    tracep->declBit(c+232,"auto_in_bready", false,-1);
    tracep->declBit(c+869,"auto_in_bvalid", false,-1);
    tracep->declBus(c+870,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+707,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+233,"auto_in_arready", false,-1);
    tracep->declBit(c+234,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1019,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+235,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1020,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+236,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1021,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+237,"auto_in_rready", false,-1);
    tracep->declBit(c+871,"auto_in_rvalid", false,-1);
    tracep->declBus(c+872,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+708,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+994,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+873,"auto_in_rlast", false,-1);
    tracep->declBit(c+222,"auto_out_awready", false,-1);
    tracep->declBit(c+223,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1019,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+224,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1020,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+225,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1021,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+226,"auto_out_wready", false,-1);
    tracep->declBit(c+227,"auto_out_wvalid", false,-1);
    tracep->declQuad(c+228,"auto_out_wdata", false,-1, 63,0);
    tracep->declBus(c+230,"auto_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+231,"auto_out_wlast", false,-1);
    tracep->declBit(c+232,"auto_out_bready", false,-1);
    tracep->declBit(c+869,"auto_out_bvalid", false,-1);
    tracep->declBus(c+870,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+707,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+233,"auto_out_arready", false,-1);
    tracep->declBit(c+234,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1019,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+235,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1020,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+236,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1021,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+237,"auto_out_rready", false,-1);
    tracep->declBit(c+871,"auto_out_rvalid", false,-1);
    tracep->declBus(c+872,"auto_out_rid", false,-1, 3,0);
    tracep->declQuad(c+708,"auto_out_rdata", false,-1, 63,0);
    tracep->declBus(c+994,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+873,"auto_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+895,"auto_in_awready", false,-1);
    tracep->declBit(c+323,"auto_in_awvalid", false,-1);
    tracep->declBus(c+195,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+196,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+197,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+875,"auto_in_wready", false,-1);
    tracep->declBit(c+240,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+199,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+201,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+241,"auto_in_wlast", false,-1);
    tracep->declBit(c+876,"auto_in_bready", false,-1);
    tracep->declBit(c+877,"auto_in_bvalid", false,-1);
    tracep->declBus(c+870,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+878,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+896,"auto_in_arready", false,-1);
    tracep->declBit(c+324,"auto_in_arvalid", false,-1);
    tracep->declBus(c+205,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+206,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+207,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+237,"auto_in_rready", false,-1);
    tracep->declBit(c+871,"auto_in_rvalid", false,-1);
    tracep->declBus(c+872,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+708,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+994,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+881,"auto_in_rlast", false,-1);
    tracep->declBit(c+889,"auto_out_2_awready", false,-1);
    tracep->declBit(c+294,"auto_out_2_awvalid", false,-1);
    tracep->declBus(c+195,"auto_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+295,"auto_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+711,"auto_out_2_wready", false,-1);
    tracep->declBit(c+296,"auto_out_2_wvalid", false,-1);
    tracep->declQuad(c+199,"auto_out_2_wdata", false,-1, 63,0);
    tracep->declBus(c+201,"auto_out_2_wstrb", false,-1, 7,0);
    tracep->declBit(c+890,"auto_out_2_bready", false,-1);
    tracep->declBit(c+297,"auto_out_2_bvalid", false,-1);
    tracep->declBus(c+298,"auto_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+299,"auto_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+891,"auto_out_2_arready", false,-1);
    tracep->declBit(c+300,"auto_out_2_arvalid", false,-1);
    tracep->declBus(c+205,"auto_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+301,"auto_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+892,"auto_out_2_rready", false,-1);
    tracep->declBit(c+302,"auto_out_2_rvalid", false,-1);
    tracep->declBus(c+303,"auto_out_2_rid", false,-1, 3,0);
    tracep->declQuad(c+304,"auto_out_2_rdata", false,-1, 63,0);
    tracep->declBus(c+306,"auto_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+325,"auto_out_1_awvalid", false,-1);
    tracep->declBit(c+326,"auto_out_1_wvalid", false,-1);
    tracep->declBit(c+327,"auto_out_1_arready", false,-1);
    tracep->declBit(c+328,"auto_out_1_arvalid", false,-1);
    tracep->declBus(c+205,"auto_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+329,"auto_out_1_araddr", false,-1, 29,0);
    tracep->declBus(c+207,"auto_out_1_arsize", false,-1, 2,0);
    tracep->declBit(c+712,"auto_out_1_rready", false,-1);
    tracep->declBit(c+330,"auto_out_1_rvalid", false,-1);
    tracep->declBus(c+331,"auto_out_1_rid", false,-1, 3,0);
    tracep->declQuad(c+332,"auto_out_1_rdata", false,-1, 63,0);
    tracep->declBit(c+193,"auto_out_0_awready", false,-1);
    tracep->declBit(c+194,"auto_out_0_awvalid", false,-1);
    tracep->declBus(c+195,"auto_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+196,"auto_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+197,"auto_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+193,"auto_out_0_wready", false,-1);
    tracep->declBit(c+198,"auto_out_0_wvalid", false,-1);
    tracep->declQuad(c+199,"auto_out_0_wdata", false,-1, 63,0);
    tracep->declBus(c+201,"auto_out_0_wstrb", false,-1, 7,0);
    tracep->declBit(c+865,"auto_out_0_bready", false,-1);
    tracep->declBit(c+866,"auto_out_0_bvalid", false,-1);
    tracep->declBus(c+202,"auto_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+704,"auto_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+203,"auto_out_0_arready", false,-1);
    tracep->declBit(c+204,"auto_out_0_arvalid", false,-1);
    tracep->declBus(c+205,"auto_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+206,"auto_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+207,"auto_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+867,"auto_out_0_rready", false,-1);
    tracep->declBit(c+868,"auto_out_0_rvalid", false,-1);
    tracep->declBus(c+208,"auto_out_0_rid", false,-1, 3,0);
    tracep->declQuad(c+705,"auto_out_0_rdata", false,-1, 63,0);
    tracep->declBus(c+704,"auto_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+877,"in_0_bvalid", false,-1);
    tracep->declBit(c+871,"in_0_rvalid", false,-1);
    tracep->declBit(c+895,"nodeIn_awready", false,-1);
    tracep->declBit(c+334,"requestARIO_0_0", false,-1);
    tracep->declBit(c+335,"requestARIO_0_1", false,-1);
    tracep->declBit(c+336,"requestARIO_0_2", false,-1);
    tracep->declBit(c+337,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+338,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+339,"requestAWIO_0_2", false,-1);
    tracep->declBit(c+340,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+341,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+342,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+343,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+344,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+345,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+346,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+347,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+348,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+349,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+350,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+351,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+352,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+353,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+354,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+355,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+356,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+357,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+358,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+359,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+360,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+361,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+362,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+363,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+364,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+365,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+366,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+367,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+368,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+369,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+370,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+371,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+372,"latched", false,-1);
    tracep->declBit(c+373,"in_0_awvalid", false,-1);
    tracep->declBit(c+374,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+375,"in_0_wvalid", false,-1);
    tracep->declBit(c+376,"idle_3", false,-1);
    tracep->declBit(c+897,"anyValid", false,-1);
    tracep->declBus(c+898,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+377,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+899,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+900,"prefixOR_1", false,-1);
    tracep->declBit(c+901,"winner_3_1", false,-1);
    tracep->declBit(c+902,"winner_3_2", false,-1);
    tracep->declBit(c+378,"state_3_0", false,-1);
    tracep->declBit(c+379,"state_3_1", false,-1);
    tracep->declBit(c+380,"state_3_2", false,-1);
    tracep->declBit(c+903,"muxState_3_0", false,-1);
    tracep->declBit(c+904,"muxState_3_1", false,-1);
    tracep->declBit(c+905,"muxState_3_2", false,-1);
    tracep->declBit(c+381,"idle_4", false,-1);
    tracep->declBit(c+906,"anyValid_1", false,-1);
    tracep->declBus(c+907,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+382,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+908,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+909,"winner_4_0", false,-1);
    tracep->declBit(c+910,"winner_4_2", false,-1);
    tracep->declBit(c+383,"state_4_0", false,-1);
    tracep->declBit(c+384,"state_4_2", false,-1);
    tracep->declBit(c+911,"muxState_4_0", false,-1);
    tracep->declBit(c+912,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+385,"io_enq_ready", false,-1);
    tracep->declBit(c+374,"io_enq_valid", false,-1);
    tracep->declBus(c+386,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+913,"io_deq_ready", false,-1);
    tracep->declBit(c+387,"io_deq_valid", false,-1);
    tracep->declBus(c+388,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+389,"wrap", false,-1);
    tracep->declBit(c+390,"wrap_1", false,-1);
    tracep->declBit(c+391,"maybe_full", false,-1);
    tracep->declBit(c+392,"ptr_match", false,-1);
    tracep->declBit(c+393,"empty", false,-1);
    tracep->declBit(c+394,"full", false,-1);
    tracep->declBit(c+387,"io_deq_valid_0", false,-1);
    tracep->declBit(c+914,"do_deq", false,-1);
    tracep->declBit(c+915,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+390,"R0_addr", false,-1);
    tracep->declBit(c+1022,"R0_en", false,-1);
    tracep->declBit(c+966,"R0_clk", false,-1);
    tracep->declBus(c+395,"R0_data", false,-1, 2,0);
    tracep->declBit(c+389,"W0_addr", false,-1);
    tracep->declBit(c+915,"W0_en", false,-1);
    tracep->declBit(c+966,"W0_clk", false,-1);
    tracep->declBus(c+386,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+396+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+874,"auto_in_awready", false,-1);
    tracep->declBit(c+238,"auto_in_awvalid", false,-1);
    tracep->declBus(c+195,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+196,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+197,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+239,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+875,"auto_in_wready", false,-1);
    tracep->declBit(c+240,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+199,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+201,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+241,"auto_in_wlast", false,-1);
    tracep->declBit(c+876,"auto_in_bready", false,-1);
    tracep->declBit(c+877,"auto_in_bvalid", false,-1);
    tracep->declBus(c+870,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+878,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+879,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+880,"auto_in_arready", false,-1);
    tracep->declBit(c+242,"auto_in_arvalid", false,-1);
    tracep->declBus(c+205,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+206,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+207,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+243,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+237,"auto_in_rready", false,-1);
    tracep->declBit(c+871,"auto_in_rvalid", false,-1);
    tracep->declBus(c+872,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+708,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+994,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+710,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+881,"auto_in_rlast", false,-1);
    tracep->declBit(c+895,"auto_out_awready", false,-1);
    tracep->declBit(c+323,"auto_out_awvalid", false,-1);
    tracep->declBus(c+195,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+196,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+197,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+875,"auto_out_wready", false,-1);
    tracep->declBit(c+240,"auto_out_wvalid", false,-1);
    tracep->declQuad(c+199,"auto_out_wdata", false,-1, 63,0);
    tracep->declBus(c+201,"auto_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+241,"auto_out_wlast", false,-1);
    tracep->declBit(c+876,"auto_out_bready", false,-1);
    tracep->declBit(c+877,"auto_out_bvalid", false,-1);
    tracep->declBus(c+870,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+878,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+896,"auto_out_arready", false,-1);
    tracep->declBit(c+324,"auto_out_arvalid", false,-1);
    tracep->declBus(c+205,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+206,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+207,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+237,"auto_out_rready", false,-1);
    tracep->declBit(c+871,"auto_out_rvalid", false,-1);
    tracep->declBus(c+872,"auto_out_rid", false,-1, 3,0);
    tracep->declQuad(c+708,"auto_out_rdata", false,-1, 63,0);
    tracep->declBus(c+994,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+881,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+398,"io_enq_ready", false,-1);
    tracep->declBit(c+713,"io_enq_valid", false,-1);
    tracep->declBit(c+243,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+916,"io_deq_ready", false,-1);
    tracep->declBit(c+399,"io_deq_valid", false,-1);
    tracep->declBit(c+400,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+400,"ram_real_last", false,-1);
    tracep->declBit(c+399,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+401,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+402,"io_enq_ready", false,-1);
    tracep->declBit(c+714,"io_enq_valid", false,-1);
    tracep->declBit(c+243,"io_enq_bits_real_last", false,-1);
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
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+406,"io_enq_ready", false,-1);
    tracep->declBit(c+715,"io_enq_valid", false,-1);
    tracep->declBit(c+243,"io_enq_bits_real_last", false,-1);
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
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+410,"io_enq_ready", false,-1);
    tracep->declBit(c+716,"io_enq_valid", false,-1);
    tracep->declBit(c+243,"io_enq_bits_real_last", false,-1);
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
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+414,"io_enq_ready", false,-1);
    tracep->declBit(c+717,"io_enq_valid", false,-1);
    tracep->declBit(c+243,"io_enq_bits_real_last", false,-1);
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
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+418,"io_enq_ready", false,-1);
    tracep->declBit(c+718,"io_enq_valid", false,-1);
    tracep->declBit(c+243,"io_enq_bits_real_last", false,-1);
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
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+422,"io_enq_ready", false,-1);
    tracep->declBit(c+719,"io_enq_valid", false,-1);
    tracep->declBit(c+243,"io_enq_bits_real_last", false,-1);
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
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+426,"io_enq_ready", false,-1);
    tracep->declBit(c+720,"io_enq_valid", false,-1);
    tracep->declBit(c+243,"io_enq_bits_real_last", false,-1);
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
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+430,"io_enq_ready", false,-1);
    tracep->declBit(c+721,"io_enq_valid", false,-1);
    tracep->declBit(c+239,"io_enq_bits_real_last", false,-1);
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
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+434,"io_enq_ready", false,-1);
    tracep->declBit(c+722,"io_enq_valid", false,-1);
    tracep->declBit(c+239,"io_enq_bits_real_last", false,-1);
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
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+438,"io_enq_ready", false,-1);
    tracep->declBit(c+723,"io_enq_valid", false,-1);
    tracep->declBit(c+239,"io_enq_bits_real_last", false,-1);
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
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+442,"io_enq_ready", false,-1);
    tracep->declBit(c+724,"io_enq_valid", false,-1);
    tracep->declBit(c+239,"io_enq_bits_real_last", false,-1);
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
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+446,"io_enq_ready", false,-1);
    tracep->declBit(c+725,"io_enq_valid", false,-1);
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
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+450,"io_enq_ready", false,-1);
    tracep->declBit(c+726,"io_enq_valid", false,-1);
    tracep->declBit(c+239,"io_enq_bits_real_last", false,-1);
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
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+454,"io_enq_ready", false,-1);
    tracep->declBit(c+727,"io_enq_valid", false,-1);
    tracep->declBit(c+239,"io_enq_bits_real_last", false,-1);
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
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+458,"io_enq_ready", false,-1);
    tracep->declBit(c+728,"io_enq_valid", false,-1);
    tracep->declBit(c+239,"io_enq_bits_real_last", false,-1);
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
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+462,"io_enq_ready", false,-1);
    tracep->declBit(c+729,"io_enq_valid", false,-1);
    tracep->declBit(c+239,"io_enq_bits_real_last", false,-1);
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
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+466,"io_enq_ready", false,-1);
    tracep->declBit(c+730,"io_enq_valid", false,-1);
    tracep->declBit(c+239,"io_enq_bits_real_last", false,-1);
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
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+470,"io_enq_ready", false,-1);
    tracep->declBit(c+731,"io_enq_valid", false,-1);
    tracep->declBit(c+239,"io_enq_bits_real_last", false,-1);
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
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+474,"io_enq_ready", false,-1);
    tracep->declBit(c+732,"io_enq_valid", false,-1);
    tracep->declBit(c+239,"io_enq_bits_real_last", false,-1);
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
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+478,"io_enq_ready", false,-1);
    tracep->declBit(c+733,"io_enq_valid", false,-1);
    tracep->declBit(c+239,"io_enq_bits_real_last", false,-1);
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
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+482,"io_enq_ready", false,-1);
    tracep->declBit(c+734,"io_enq_valid", false,-1);
    tracep->declBit(c+239,"io_enq_bits_real_last", false,-1);
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
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+486,"io_enq_ready", false,-1);
    tracep->declBit(c+735,"io_enq_valid", false,-1);
    tracep->declBit(c+239,"io_enq_bits_real_last", false,-1);
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
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+490,"io_enq_ready", false,-1);
    tracep->declBit(c+736,"io_enq_valid", false,-1);
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
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+494,"io_enq_ready", false,-1);
    tracep->declBit(c+737,"io_enq_valid", false,-1);
    tracep->declBit(c+239,"io_enq_bits_real_last", false,-1);
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
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+498,"io_enq_ready", false,-1);
    tracep->declBit(c+738,"io_enq_valid", false,-1);
    tracep->declBit(c+239,"io_enq_bits_real_last", false,-1);
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
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+502,"io_enq_ready", false,-1);
    tracep->declBit(c+739,"io_enq_valid", false,-1);
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
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+506,"io_enq_ready", false,-1);
    tracep->declBit(c+740,"io_enq_valid", false,-1);
    tracep->declBit(c+243,"io_enq_bits_real_last", false,-1);
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
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+510,"io_enq_ready", false,-1);
    tracep->declBit(c+741,"io_enq_valid", false,-1);
    tracep->declBit(c+243,"io_enq_bits_real_last", false,-1);
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
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+514,"io_enq_ready", false,-1);
    tracep->declBit(c+742,"io_enq_valid", false,-1);
    tracep->declBit(c+243,"io_enq_bits_real_last", false,-1);
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
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+518,"io_enq_ready", false,-1);
    tracep->declBit(c+743,"io_enq_valid", false,-1);
    tracep->declBit(c+243,"io_enq_bits_real_last", false,-1);
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
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+522,"io_enq_ready", false,-1);
    tracep->declBit(c+744,"io_enq_valid", false,-1);
    tracep->declBit(c+243,"io_enq_bits_real_last", false,-1);
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
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+995,"reset", false,-1);
    tracep->declBit(c+222,"auto_master_out_awready", false,-1);
    tracep->declBit(c+223,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1019,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+224,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1020,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+225,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1021,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+226,"auto_master_out_wready", false,-1);
    tracep->declBit(c+227,"auto_master_out_wvalid", false,-1);
    tracep->declQuad(c+228,"auto_master_out_wdata", false,-1, 63,0);
    tracep->declBus(c+230,"auto_master_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+231,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+232,"auto_master_out_bready", false,-1);
    tracep->declBit(c+869,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+870,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+707,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+233,"auto_master_out_arready", false,-1);
    tracep->declBit(c+234,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1019,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+235,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1020,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+236,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1021,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+237,"auto_master_out_rready", false,-1);
    tracep->declBit(c+871,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+872,"auto_master_out_rid", false,-1, 3,0);
    tracep->declQuad(c+708,"auto_master_out_rdata", false,-1, 63,0);
    tracep->declBus(c+994,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+873,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+995,"reset", false,-1);
    tracep->declBit(c+1009,"io_interrupt", false,-1);
    tracep->declBit(c+222,"io_master_awready", false,-1);
    tracep->declBit(c+223,"io_master_awvalid", false,-1);
    tracep->declBus(c+224,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1019,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1020,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+225,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1021,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+226,"io_master_wready", false,-1);
    tracep->declBit(c+227,"io_master_wvalid", false,-1);
    tracep->declQuad(c+228,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+230,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+231,"io_master_wlast", false,-1);
    tracep->declBit(c+232,"io_master_bready", false,-1);
    tracep->declBit(c+869,"io_master_bvalid", false,-1);
    tracep->declBus(c+707,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+870,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+233,"io_master_arready", false,-1);
    tracep->declBit(c+234,"io_master_arvalid", false,-1);
    tracep->declBus(c+235,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1019,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1020,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+236,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1021,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+237,"io_master_rready", false,-1);
    tracep->declBit(c+871,"io_master_rvalid", false,-1);
    tracep->declBus(c+994,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+708,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+873,"io_master_rlast", false,-1);
    tracep->declBus(c+872,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1023,"io_slave_awready", false,-1);
    tracep->declBit(c+1009,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1024,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1019,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1020,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1025,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1026,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1027,"io_slave_wready", false,-1);
    tracep->declBit(c+1009,"io_slave_wvalid", false,-1);
    tracep->declQuad(c+1028,"io_slave_wdata", false,-1, 63,0);
    tracep->declBus(c+1020,"io_slave_wstrb", false,-1, 7,0);
    tracep->declBit(c+1009,"io_slave_wlast", false,-1);
    tracep->declBit(c+1009,"io_slave_bready", false,-1);
    tracep->declBit(c+1030,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1031,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1032,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1033,"io_slave_arready", false,-1);
    tracep->declBit(c+1009,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1024,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1019,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1020,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1025,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1026,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1009,"io_slave_rready", false,-1);
    tracep->declBit(c+1034,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1035,"io_slave_rresp", false,-1, 1,0);
    tracep->declQuad(c+1036,"io_slave_rdata", false,-1, 63,0);
    tracep->declBit(c+1038,"io_slave_rlast", false,-1);
    tracep->declBus(c+1039,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+526,"ifu_pc", false,-1, 31,0);
    tracep->declBus(c+527,"ifu_inst", false,-1, 31,0);
    tracep->declBus(c+1040,"ifu_inst_t", false,-1, 31,0);
    tracep->declBit(c+528,"ifu_stall", false,-1);
    tracep->declBus(c+529,"jump_pc", false,-1, 31,0);
    tracep->declBit(c+530,"jump_pc_valid", false,-1);
    tracep->declBit(c+948,"stall", false,-1);
    tracep->declBit(c+528,"ifu_r_valid_o", false,-1);
    tracep->declBus(c+531,"ifu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+745,"ifu_r_ready_i", false,-1);
    tracep->declBus(c+746,"ifu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+1020,"ifu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+747,"ifu_r_last_i", false,-1);
    tracep->declBit(c+532,"idu_branch", false,-1);
    tracep->declBit(c+533,"idu_jal", false,-1);
    tracep->declBit(c+534,"idu_jalr", false,-1);
    tracep->declBus(c+535,"idu_rd", false,-1, 4,0);
    tracep->declBit(c+536,"idu_rd_wen", false,-1);
    tracep->declBus(c+537,"idu_rs1", false,-1, 4,0);
    tracep->declBus(c+538,"idu_rs2", false,-1, 4,0);
    tracep->declBus(c+539,"idu_imm", false,-1, 31,0);
    tracep->declBus(c+540,"idu_alu_opt", false,-1, 3,0);
    tracep->declBus(c+541,"idu_src_sel", false,-1, 1,0);
    tracep->declBus(c+542,"idu_lsu_opt", false,-1, 1,0);
    tracep->declBus(c+543,"idu_funct3", false,-1, 2,0);
    tracep->declBus(c+544,"src1", false,-1, 31,0);
    tracep->declBus(c+545,"src2", false,-1, 31,0);
    tracep->declBus(c+996,"rd_data", false,-1, 31,0);
    tracep->declBit(c+546,"zero_flag", false,-1);
    tracep->declBus(c+547,"exu_result", false,-1, 31,0);
    tracep->declBus(c+1041,"exu_result_t", false,-1, 31,0);
    tracep->declBus(c+748,"lsu_result", false,-1, 31,0);
    tracep->declBit(c+948,"mem_stall", false,-1);
    tracep->declBit(c+949,"lsu_rd_wen", false,-1);
    tracep->declBit(c+548,"lsu_r_valid_o", false,-1);
    tracep->declBus(c+549,"lsu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+749,"lsu_r_ready_i", false,-1);
    tracep->declBus(c+750,"lsu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+550,"lsu_r_size_o", false,-1, 2,0);
    tracep->declBus(c+1020,"lsu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+751,"lsu_r_last_i", false,-1);
    tracep->declBit(c+551,"lsu_w_valid_o", false,-1);
    tracep->declBus(c+224,"lsu_w_addr_o", false,-1, 31,0);
    tracep->declBit(c+226,"lsu_w_ready_i", false,-1);
    tracep->declBus(c+545,"lsu_w_data_o", false,-1, 31,0);
    tracep->declBus(c+225,"lsu_w_size_o", false,-1, 2,0);
    tracep->declBus(c+1020,"lsu_w_len_o", false,-1, 7,0);
    tracep->declBit(c+869,"lsu_w_last_i", false,-1);
    tracep->declBit(c+752,"wbu_rd_wen", false,-1);
    tracep->declBit(c+552,"csr_ecall", false,-1);
    tracep->declBit(c+553,"csr_mret", false,-1);
    tracep->declBus(c+554,"wr_csr_data", false,-1, 31,0);
    tracep->declBus(c+997,"rd_csr_data", false,-1, 31,0);
    tracep->declBus(c+555,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+556,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+557,"csr_mpec", false,-1, 31,0);
    tracep->pushNamePrefix("axi_arbiter_u0 ");
    tracep->declBit(c+966,"aclk", false,-1);
    tracep->declBit(c+995,"areset_n", false,-1);
    tracep->declBit(c+528,"ifu_r_valid_i", false,-1);
    tracep->declBus(c+531,"ifu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+745,"ifu_r_ready_o", false,-1);
    tracep->declBus(c+746,"ifu_r_data_o", false,-1, 31,0);
    tracep->declBus(c+1020,"ifu_r_len_i", false,-1, 7,0);
    tracep->declBit(c+747,"ifu_r_last_o", false,-1);
    tracep->declBit(c+548,"lsu_r_valid_i", false,-1);
    tracep->declBus(c+549,"lsu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+749,"lsu_r_ready_o", false,-1);
    tracep->declBus(c+750,"lsu_r_data_o", false,-1, 31,0);
    tracep->declBus(c+550,"lsu_r_size_i", false,-1, 2,0);
    tracep->declBus(c+1020,"lsu_r_len_i", false,-1, 7,0);
    tracep->declBit(c+751,"lsu_r_last_o", false,-1);
    tracep->declBit(c+551,"lsu_w_valid_i", false,-1);
    tracep->declBus(c+224,"lsu_w_addr_i", false,-1, 31,0);
    tracep->declBit(c+226,"lsu_w_ready_o", false,-1);
    tracep->declBus(c+545,"lsu_w_data_i", false,-1, 31,0);
    tracep->declBus(c+225,"lsu_w_size_i", false,-1, 2,0);
    tracep->declBus(c+1020,"lsu_w_len_i", false,-1, 7,0);
    tracep->declBit(c+869,"lsu_w_last_o", false,-1);
    tracep->declBit(c+222,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+223,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+224,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+1019,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+1020,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+225,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+1021,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+226,"axi_w_ready_i", false,-1);
    tracep->declBit(c+227,"axi_w_valid_o", false,-1);
    tracep->declQuad(c+228,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+230,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+231,"axi_w_last_o", false,-1);
    tracep->declBit(c+232,"axi_b_ready_o", false,-1);
    tracep->declBit(c+869,"axi_b_valid_i", false,-1);
    tracep->declBus(c+707,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+870,"axi_b_id_i", false,-1, 3,0);
    tracep->declBit(c+233,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+234,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+235,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+1019,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+1020,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+236,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+1021,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+237,"axi_r_ready_o", false,-1);
    tracep->declBit(c+871,"axi_r_valid_i", false,-1);
    tracep->declBus(c+994,"axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+708,"axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+873,"axi_r_last_i", false,-1);
    tracep->declBus(c+872,"axi_r_id_i", false,-1, 3,0);
    tracep->declBit(c+558,"cpu_r_valid_o", false,-1);
    tracep->declBus(c+235,"cpu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+871,"cpu_r_ready_i", false,-1);
    tracep->declBus(c+950,"cpu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+236,"cpu_r_size_o", false,-1, 2,0);
    tracep->declBus(c+1020,"cpu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+873,"cpu_r_last_i", false,-1);
    tracep->declBit(c+551,"cpu_w_valid_o", false,-1);
    tracep->declBus(c+224,"cpu_w_addr_o", false,-1, 31,0);
    tracep->declBit(c+226,"cpu_w_ready_i", false,-1);
    tracep->declBus(c+545,"cpu_w_data_o", false,-1, 31,0);
    tracep->declBus(c+225,"cpu_w_size_o", false,-1, 2,0);
    tracep->declBus(c+1020,"cpu_w_len_o", false,-1, 7,0);
    tracep->declBit(c+869,"cpu_w_last_i", false,-1);
    tracep->declBus(c+559,"arbiter_state", false,-1, 1,0);
    tracep->declBus(c+1026,"ARB_IDLE", false,-1, 1,0);
    tracep->declBus(c+1021,"ARB_IFU", false,-1, 1,0);
    tracep->declBus(c+1042,"ARB_LSU", false,-1, 1,0);
    tracep->pushNamePrefix("axi_u0 ");
    tracep->declBit(c+966,"aclk", false,-1);
    tracep->declBit(c+995,"areset_n", false,-1);
    tracep->declBit(c+558,"cpu_r_valid_i", false,-1);
    tracep->declBus(c+235,"cpu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+871,"cpu_r_ready_o", false,-1);
    tracep->declBus(c+950,"cpu_r_data_o", false,-1, 31,0);
    tracep->declBus(c+236,"cpu_r_size_i", false,-1, 2,0);
    tracep->declBus(c+1020,"cpu_r_len_i", false,-1, 7,0);
    tracep->declBit(c+873,"cpu_r_last_o", false,-1);
    tracep->declBit(c+551,"cpu_w_valid_i", false,-1);
    tracep->declBus(c+224,"cpu_w_addr_i", false,-1, 31,0);
    tracep->declBit(c+226,"cpu_w_ready_o", false,-1);
    tracep->declBus(c+545,"cpu_w_data_i", false,-1, 31,0);
    tracep->declBus(c+225,"cpu_w_size_i", false,-1, 2,0);
    tracep->declBus(c+1020,"cpu_w_len_i", false,-1, 7,0);
    tracep->declBit(c+869,"cpu_w_last_o", false,-1);
    tracep->declBit(c+222,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+223,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+224,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+1019,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+1020,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+225,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+1021,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+226,"axi_w_ready_i", false,-1);
    tracep->declBit(c+227,"axi_w_valid_o", false,-1);
    tracep->declQuad(c+228,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+230,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+231,"axi_w_last_o", false,-1);
    tracep->declBit(c+232,"axi_b_ready_o", false,-1);
    tracep->declBit(c+869,"axi_b_valid_i", false,-1);
    tracep->declBus(c+707,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+870,"axi_b_id_i", false,-1, 3,0);
    tracep->declBit(c+233,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+234,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+235,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+1019,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+1020,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+236,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+1021,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+237,"axi_r_ready_o", false,-1);
    tracep->declBit(c+871,"axi_r_valid_i", false,-1);
    tracep->declBus(c+994,"axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+708,"axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+873,"axi_r_last_i", false,-1);
    tracep->declBus(c+872,"axi_r_id_i", false,-1, 3,0);
    tracep->declBus(c+560,"axi_w_state", false,-1, 2,0);
    tracep->declBus(c+1025,"AXI_W_IDLE", false,-1, 2,0);
    tracep->declBus(c+1008,"AXI_W_ADDR", false,-1, 2,0);
    tracep->declBus(c+1043,"AXI_W_DATA", false,-1, 2,0);
    tracep->declBus(c+1044,"AXI_W_RESP", false,-1, 2,0);
    tracep->declQuad(c+561,"axi_w_data_t", false,-1, 63,0);
    tracep->declBus(c+563,"axi_w_strb_t", false,-1, 7,0);
    tracep->declBus(c+564,"axi_w_cnt", false,-1, 7,0);
    tracep->declBus(c+565,"axi_r_state", false,-1, 1,0);
    tracep->declBus(c+1026,"AXI_R_IDLE", false,-1, 1,0);
    tracep->declBus(c+1021,"AXI_R_ADDR", false,-1, 1,0);
    tracep->declBus(c+1042,"AXI_R_DATA", false,-1, 1,0);
    tracep->declBus(c+1045,"axi_r_cnt", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csr_u0 ");
    tracep->declBit(c+966,"clk", false,-1);
    tracep->declBit(c+995,"reset", false,-1);
    tracep->declBus(c+566,"wr_addr", false,-1, 11,0);
    tracep->declBus(c+554,"wr_data", false,-1, 31,0);
    tracep->declBus(c+566,"rd_addr", false,-1, 11,0);
    tracep->declBus(c+997,"rd_data", false,-1, 31,0);
    tracep->declBit(c+552,"i_csr_ecall", false,-1);
    tracep->declBit(c+553,"i_csr_mret", false,-1);
    tracep->declBus(c+527,"i_inst", false,-1, 31,0);
    tracep->declBus(c+526,"i_pc", false,-1, 31,0);
    tracep->declBus(c+555,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+556,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+557,"o_mpec", false,-1, 31,0);
    tracep->declBus(c+997,"rd_data_r", false,-1, 31,0);
    tracep->declBit(c+567,"wr_en", false,-1);
    tracep->declBit(c+567,"rd_en", false,-1);
    tracep->declBus(c+568,"wr_data_r", false,-1, 31,0);
    tracep->declBus(c+569,"temp", false,-1, 31,0);
    tracep->declBus(c+555,"o_mstatus_r", false,-1, 31,0);
    tracep->declBus(c+570,"mepc_inst_r", false,-1, 31,0);
    tracep->declBus(c+571,"mcause", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu_u0 ");
    tracep->declBus(c+526,"pc", false,-1, 31,0);
    tracep->declBus(c+544,"src1", false,-1, 31,0);
    tracep->declBus(c+545,"src2", false,-1, 31,0);
    tracep->declBus(c+539,"imm", false,-1, 31,0);
    tracep->declBit(c+532,"branch", false,-1);
    tracep->declBus(c+540,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+541,"src_sel", false,-1, 1,0);
    tracep->declBus(c+543,"funct3", false,-1, 2,0);
    tracep->declBit(c+546,"zero_flag", false,-1);
    tracep->declBus(c+547,"exu_result", false,-1, 31,0);
    tracep->declBus(c+572,"alu_a_data", false,-1, 31,0);
    tracep->declBus(c+573,"alu_b_data", false,-1, 31,0);
    tracep->declBus(c+574,"alu_out_data", false,-1, 31,0);
    tracep->declBit(c+1046,"carry_flag", false,-1);
    tracep->declBit(c+1047,"signed_flag", false,-1);
    tracep->declBus(c+547,"exu_result_r", false,-1, 31,0);
    tracep->pushNamePrefix("ex_alu ");
    tracep->declBus(c+540,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+572,"alu_a_data", false,-1, 31,0);
    tracep->declBus(c+573,"alu_b_data", false,-1, 31,0);
    tracep->declBus(c+574,"alu_out_data", false,-1, 31,0);
    tracep->declBit(c+575,"sub_flag", false,-1);
    tracep->declQuad(c+576,"alu_a_t", false,-1, 32,0);
    tracep->declQuad(c+578,"alu_b_t", false,-1, 32,0);
    tracep->declQuad(c+580,"cin", false,-1, 32,0);
    tracep->declQuad(c+582,"add_out", false,-1, 32,0);
    tracep->declBit(c+584,"top_A", false,-1);
    tracep->declBit(c+585,"top_B", false,-1);
    tracep->declBit(c+586,"top_C", false,-1);
    tracep->declBit(c+587,"sign_flag", false,-1);
    tracep->declBit(c+588,"over_flag", false,-1);
    tracep->declBit(c+589,"carry_flag", false,-1);
    tracep->declBus(c+590,"sra_result", false,-1, 31,0);
    tracep->declBus(c+574,"alu_out_data_r", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu_u0 ");
    tracep->declBus(c+527,"inst", false,-1, 31,0);
    tracep->declBit(c+532,"branch", false,-1);
    tracep->declBit(c+533,"jal", false,-1);
    tracep->declBit(c+534,"jalr", false,-1);
    tracep->declBus(c+535,"rd", false,-1, 4,0);
    tracep->declBit(c+536,"rd_wen", false,-1);
    tracep->declBus(c+537,"rs1", false,-1, 4,0);
    tracep->declBus(c+538,"rs2", false,-1, 4,0);
    tracep->declBus(c+539,"imm", false,-1, 31,0);
    tracep->declBus(c+540,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+541,"src_sel", false,-1, 1,0);
    tracep->declBus(c+542,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+543,"funct3", false,-1, 2,0);
    tracep->declBus(c+591,"opcode", false,-1, 6,0);
    tracep->declBus(c+592,"funct7", false,-1, 6,0);
    tracep->declBus(c+1048,"reg_zero", false,-1, 4,0);
    tracep->pushNamePrefix("id_imm_idu ");
    tracep->declBus(c+527,"inst", false,-1, 31,0);
    tracep->declBus(c+539,"imm", false,-1, 31,0);
    tracep->declBus(c+539,"imm_r", false,-1, 31,0);
    tracep->declBus(c+593,"imm_typeI", false,-1, 31,0);
    tracep->declBus(c+594,"imm_typeU", false,-1, 31,0);
    tracep->declBus(c+595,"imm_typeS", false,-1, 31,0);
    tracep->declBus(c+596,"imm_typeB", false,-1, 31,0);
    tracep->declBus(c+597,"imm_typeJ", false,-1, 31,0);
    tracep->declBus(c+1024,"imm_typeR", false,-1, 31,0);
    tracep->declBus(c+1024,"imm_type_NONE", false,-1, 31,0);
    tracep->pushNamePrefix("id_imm_ext_typeB ");
    tracep->declBus(c+1049,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+598,"imm_in", false,-1, 12,0);
    tracep->declBus(c+596,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeI ");
    tracep->declBus(c+1050,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+599,"imm_in", false,-1, 11,0);
    tracep->declBus(c+593,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeJ ");
    tracep->declBus(c+1051,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+600,"imm_in", false,-1, 20,0);
    tracep->declBus(c+597,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeS ");
    tracep->declBus(c+1050,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+601,"imm_in", false,-1, 11,0);
    tracep->declBus(c+595,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeU ");
    tracep->declBus(c+1052,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+594,"imm_in", false,-1, 31,0);
    tracep->declBus(c+594,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_opt_idu ");
    tracep->declBus(c+591,"opcode", false,-1, 6,0);
    tracep->declBus(c+543,"funct3", false,-1, 2,0);
    tracep->declBus(c+592,"funct7", false,-1, 6,0);
    tracep->declBus(c+540,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+541,"src_sel", false,-1, 1,0);
    tracep->declBus(c+542,"lsu_opt", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu_u0 ");
    tracep->declBit(c+966,"clk", false,-1);
    tracep->declBit(c+995,"reset", false,-1);
    tracep->declBus(c+529,"jump_pc", false,-1, 31,0);
    tracep->declBit(c+530,"jump_pc_valid", false,-1);
    tracep->declBit(c+948,"stall", false,-1);
    tracep->declBit(c+949,"wbu_stall", false,-1);
    tracep->declBit(c+528,"ifu_r_valid_o", false,-1);
    tracep->declBus(c+531,"ifu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+745,"ifu_r_ready_i", false,-1);
    tracep->declBus(c+746,"ifu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+1020,"ifu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+747,"ifu_r_last_i", false,-1);
    tracep->declBit(c+528,"ifu_stall", false,-1);
    tracep->declBus(c+526,"ifu_pc_o", false,-1, 31,0);
    tracep->declBus(c+527,"ifu_inst_o", false,-1, 31,0);
    tracep->declBus(c+526,"ifu_pc_o_r", false,-1, 31,0);
    tracep->declBus(c+527,"ifu_inst_o_r", false,-1, 31,0);
    tracep->declBus(c+531,"pc", false,-1, 31,0);
    tracep->declBus(c+746,"inst", false,-1, 31,0);
    tracep->declBus(c+1053,"inst_t", false,-1, 31,0);
    tracep->declBit(c+528,"ifu_stall_r", false,-1);
    tracep->declBit(c+951,"flush_inst", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_u0 ");
    tracep->declBit(c+966,"clk", false,-1);
    tracep->declBit(c+995,"reset", false,-1);
    tracep->declBus(c+544,"src1", false,-1, 31,0);
    tracep->declBus(c+545,"src2", false,-1, 31,0);
    tracep->declBus(c+539,"imm", false,-1, 31,0);
    tracep->declBus(c+542,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+543,"funct3", false,-1, 2,0);
    tracep->declBit(c+528,"ifu_stall", false,-1);
    tracep->declBit(c+548,"lsu_r_valid_o", false,-1);
    tracep->declBus(c+549,"lsu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+749,"lsu_r_ready_i", false,-1);
    tracep->declBus(c+750,"lsu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+550,"lsu_r_size_o", false,-1, 2,0);
    tracep->declBus(c+1020,"lsu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+751,"lsu_r_last_i", false,-1);
    tracep->declBit(c+551,"lsu_w_valid_o", false,-1);
    tracep->declBus(c+224,"lsu_w_addr_o", false,-1, 31,0);
    tracep->declBit(c+226,"lsu_w_ready_i", false,-1);
    tracep->declBus(c+545,"lsu_w_data_o", false,-1, 31,0);
    tracep->declBus(c+225,"lsu_w_size_o", false,-1, 2,0);
    tracep->declBus(c+1020,"lsu_w_len_o", false,-1, 7,0);
    tracep->declBit(c+869,"lsu_w_last_i", false,-1);
    tracep->declBit(c+948,"mem_stall", false,-1);
    tracep->declBit(c+949,"lsu_rd_wen", false,-1);
    tracep->declBus(c+748,"lsu_result", false,-1, 31,0);
    tracep->declBus(c+549,"raddr", false,-1, 31,0);
    tracep->declBus(c+750,"rdata", false,-1, 31,0);
    tracep->declBus(c+602,"rsize", false,-1, 31,0);
    tracep->declBus(c+224,"waddr", false,-1, 31,0);
    tracep->declBus(c+545,"wdata", false,-1, 31,0);
    tracep->declBus(c+603,"wmask", false,-1, 31,0);
    tracep->declBus(c+603,"mask", false,-1, 31,0);
    tracep->declBus(c+748,"lsu_result_r", false,-1, 31,0);
    tracep->declBit(c+548,"ren", false,-1);
    tracep->declBit(c+551,"wen", false,-1);
    tracep->declBit(c+952,"lsu_rd_wen_r", false,-1);
    tracep->declBit(c+953,"lsu_rd_wen_w", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile_u0 ");
    tracep->declBit(c+966,"clk", false,-1);
    tracep->declBit(c+995,"reset", false,-1);
    tracep->declBus(c+537,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+544,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+538,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+545,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+752,"rd_en", false,-1);
    tracep->declBus(c+535,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+996,"rd_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+604+i*1,"gpr", true,(i+0), 31,0);
    }
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu_u0 ");
    tracep->declBus(c+542,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+547,"exu_result", false,-1, 31,0);
    tracep->declBus(c+748,"lsu_result", false,-1, 31,0);
    tracep->declBus(c+997,"csr_result", false,-1, 31,0);
    tracep->declBit(c+949,"lsu_rd_wen", false,-1);
    tracep->declBit(c+636,"idu_rd_wen", false,-1);
    tracep->declBit(c+752,"wbu_rd_wen", false,-1);
    tracep->declBus(c+996,"wbu_result", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"io_d", false,-1);
    tracep->declBit(c+637,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"io_d", false,-1);
    tracep->declBit(c+637,"io_q", false,-1);
    tracep->declBit(c+637,"sync_0", false,-1);
    tracep->declBit(c+638,"sync_1", false,-1);
    tracep->declBit(c+639,"sync_2", false,-1);
    tracep->declBit(c+640,"sync_3", false,-1);
    tracep->declBit(c+641,"sync_4", false,-1);
    tracep->declBit(c+642,"sync_5", false,-1);
    tracep->declBit(c+643,"sync_6", false,-1);
    tracep->declBit(c+644,"sync_7", false,-1);
    tracep->declBit(c+645,"sync_8", false,-1);
    tracep->declBit(c+646,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+701,"auto_in_psel", false,-1);
    tracep->declBit(c+702,"auto_in_penable", false,-1);
    tracep->declBit(c+189,"auto_in_pwrite", false,-1);
    tracep->declBus(c+825,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1008,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+190,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+191,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1016,"auto_in_pready", false,-1);
    tracep->declBit(c+1017,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1018,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+968,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+969,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+970,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+971,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+972,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+973,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+974,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+975,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+976,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+977,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBus(c+840,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+701,"in_psel", false,-1);
    tracep->declBit(c+702,"in_penable", false,-1);
    tracep->declBus(c+1008,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+189,"in_pwrite", false,-1);
    tracep->declBus(c+190,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+191,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1016,"in_pready", false,-1);
    tracep->declBus(c+1018,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1017,"in_pslverr", false,-1);
    tracep->declBus(c+968,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+969,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+970,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+971,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+972,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+973,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+974,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+975,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+976,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+977,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+699,"auto_in_psel", false,-1);
    tracep->declBit(c+700,"auto_in_penable", false,-1);
    tracep->declBit(c+189,"auto_in_pwrite", false,-1);
    tracep->declBus(c+825,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1008,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+190,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+191,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1013,"auto_in_pready", false,-1);
    tracep->declBit(c+1014,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1015,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+978,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+979,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBus(c+840,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+699,"in_psel", false,-1);
    tracep->declBit(c+700,"in_penable", false,-1);
    tracep->declBus(c+1008,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+189,"in_pwrite", false,-1);
    tracep->declBus(c+190,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+191,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1013,"in_pready", false,-1);
    tracep->declBus(c+1015,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1014,"in_pslverr", false,-1);
    tracep->declBit(c+978,"ps2_clk", false,-1);
    tracep->declBit(c+979,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+325,"auto_in_awvalid", false,-1);
    tracep->declBit(c+326,"auto_in_wvalid", false,-1);
    tracep->declBit(c+327,"auto_in_arready", false,-1);
    tracep->declBit(c+328,"auto_in_arvalid", false,-1);
    tracep->declBus(c+205,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+329,"auto_in_araddr", false,-1, 29,0);
    tracep->declBus(c+207,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+712,"auto_in_rready", false,-1);
    tracep->declBit(c+330,"auto_in_rvalid", false,-1);
    tracep->declBus(c+331,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+332,"auto_in_rdata", false,-1, 63,0);
    tracep->declBit(c+330,"state", false,-1);
    tracep->declQuad(c+332,"nodeIn_rdata_r", false,-1, 63,0);
    tracep->declBus(c+331,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+647,"raddr", false,-1, 31,0);
    tracep->declBit(c+648,"ren", false,-1);
    tracep->declBus(c+649,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+826,"auto_in_psel", false,-1);
    tracep->declBit(c+703,"auto_in_penable", false,-1);
    tracep->declBit(c+189,"auto_in_pwrite", false,-1);
    tracep->declBus(c+822,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1008,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+190,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+191,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+992,"auto_in_pready", false,-1);
    tracep->declBit(c+1009,"auto_in_pslverr", false,-1);
    tracep->declBus(c+192,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+989,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+990,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+862,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBus(c+822,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+826,"in_psel", false,-1);
    tracep->declBit(c+703,"in_penable", false,-1);
    tracep->declBus(c+1008,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+189,"in_pwrite", false,-1);
    tracep->declBus(c+190,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+191,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+992,"in_pready", false,-1);
    tracep->declBus(c+192,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1009,"in_pslverr", false,-1);
    tracep->declBit(c+989,"qspi_sck", false,-1);
    tracep->declBit(c+990,"qspi_ce_n", false,-1);
    tracep->declBus(c+862,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+862,"din", false,-1, 3,0);
    tracep->declBus(c+954,"dout", false,-1, 3,0);
    tracep->declBus(c+955,"douten", false,-1, 3,0);
    tracep->declBit(c+998,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+966,"clk_i", false,-1);
    tracep->declBit(c+967,"rst_i", false,-1);
    tracep->declBus(c+822,"adr_i", false,-1, 31,0);
    tracep->declBus(c+190,"dat_i", false,-1, 31,0);
    tracep->declBus(c+192,"dat_o", false,-1, 31,0);
    tracep->declBus(c+191,"sel_i", false,-1, 3,0);
    tracep->declBit(c+826,"cyc_i", false,-1);
    tracep->declBit(c+826,"stb_i", false,-1);
    tracep->declBit(c+998,"ack_o", false,-1);
    tracep->declBit(c+189,"we_i", false,-1);
    tracep->declBit(c+989,"sck", false,-1);
    tracep->declBit(c+990,"ce_n", false,-1);
    tracep->declBus(c+862,"din", false,-1, 3,0);
    tracep->declBus(c+954,"dout", false,-1, 3,0);
    tracep->declBus(c+955,"douten", false,-1, 3,0);
    tracep->declBus(c+1054,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1055,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+761,"mr_sck", false,-1);
    tracep->declBit(c+22,"mr_ce_n", false,-1);
    tracep->declBus(c+862,"mr_din", false,-1, 3,0);
    tracep->declBus(c+999,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+762,"mr_doe", false,-1);
    tracep->declBit(c+23,"mw_sck", false,-1);
    tracep->declBit(c+24,"mw_ce_n", false,-1);
    tracep->declBus(c+862,"mw_din", false,-1, 3,0);
    tracep->declBus(c+819,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+25,"mw_doe", false,-1);
    tracep->declBit(c+956,"mr_rd", false,-1);
    tracep->declBit(c+763,"mr_done", false,-1);
    tracep->declBit(c+957,"mw_wr", false,-1);
    tracep->declBit(c+820,"mw_done", false,-1);
    tracep->declBit(c+826,"wb_valid", false,-1);
    tracep->declBit(c+841,"wb_we", false,-1);
    tracep->declBit(c+842,"wb_re", false,-1);
    tracep->declBit(c+26,"state", false,-1);
    tracep->declBit(c+958,"nstate", false,-1);
    tracep->declBus(c+650,"size", false,-1, 2,0);
    tracep->declBus(c+651,"byte0", false,-1, 7,0);
    tracep->declBus(c+652,"byte1", false,-1, 7,0);
    tracep->declBus(c+653,"byte2", false,-1, 7,0);
    tracep->declBus(c+654,"byte3", false,-1, 7,0);
    tracep->declBus(c+655,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+966,"clk", false,-1);
    tracep->declBit(c+1000,"rst_n", false,-1);
    tracep->declBus(c+843,"addr", false,-1, 23,0);
    tracep->declBit(c+956,"rd", false,-1);
    tracep->declBus(c+1056,"size", false,-1, 2,0);
    tracep->declBit(c+763,"done", false,-1);
    tracep->declBus(c+192,"line", false,-1, 31,0);
    tracep->declBit(c+761,"sck", false,-1);
    tracep->declBit(c+22,"ce_n", false,-1);
    tracep->declBus(c+862,"din", false,-1, 3,0);
    tracep->declBus(c+999,"dout", false,-1, 3,0);
    tracep->declBit(c+762,"douten", false,-1);
    tracep->declBus(c+1054,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1055,"READ", false,-1, 0,0);
    tracep->declBus(c+1057,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+27,"state", false,-1);
    tracep->declBit(c+959,"nstate", false,-1);
    tracep->declBus(c+764,"counter", false,-1, 7,0);
    tracep->declBus(c+28,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+656+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1058,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+765,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+966,"clk", false,-1);
    tracep->declBit(c+1000,"rst_n", false,-1);
    tracep->declBus(c+844,"addr", false,-1, 23,0);
    tracep->declBus(c+655,"line", false,-1, 31,0);
    tracep->declBus(c+650,"size", false,-1, 2,0);
    tracep->declBit(c+957,"wr", false,-1);
    tracep->declBit(c+820,"done", false,-1);
    tracep->declBit(c+23,"sck", false,-1);
    tracep->declBit(c+24,"ce_n", false,-1);
    tracep->declBus(c+862,"din", false,-1, 3,0);
    tracep->declBus(c+819,"dout", false,-1, 3,0);
    tracep->declBit(c+25,"douten", false,-1);
    tracep->declBus(c+1054,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1055,"WRITE", false,-1, 0,0);
    tracep->declBus(c+660,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+29,"state", false,-1);
    tracep->declBit(c+960,"nstate", false,-1);
    tracep->declBus(c+30,"counter", false,-1, 7,0);
    tracep->declBus(c+31,"saddr", false,-1, 23,0);
    tracep->declBus(c+1059,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+695,"auto_in_psel", false,-1);
    tracep->declBit(c+696,"auto_in_penable", false,-1);
    tracep->declBit(c+189,"auto_in_pwrite", false,-1);
    tracep->declBus(c+822,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1008,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+190,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+191,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+760,"auto_in_pready", false,-1);
    tracep->declBit(c+1009,"auto_in_pslverr", false,-1);
    tracep->declBus(c+19,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+991,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+10,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+11,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+12,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+13,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+14,"sdram_bundle_we", false,-1);
    tracep->declBus(c+15,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+16,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+17,"sdram_bundle_dqm", false,-1, 1,0);
    tracep->declBus(c+18,"sdram_bundle_dq", false,-1, 15,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBus(c+822,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+695,"in_psel", false,-1);
    tracep->declBit(c+696,"in_penable", false,-1);
    tracep->declBus(c+1008,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+189,"in_pwrite", false,-1);
    tracep->declBus(c+190,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+191,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+760,"in_pready", false,-1);
    tracep->declBus(c+19,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1009,"in_pslverr", false,-1);
    tracep->declBit(c+991,"sdram_clk", false,-1);
    tracep->declBit(c+10,"sdram_cke", false,-1);
    tracep->declBit(c+11,"sdram_cs", false,-1);
    tracep->declBit(c+12,"sdram_ras", false,-1);
    tracep->declBit(c+13,"sdram_cas", false,-1);
    tracep->declBit(c+14,"sdram_we", false,-1);
    tracep->declBus(c+15,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+16,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+17,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+18,"sdram_dq", false,-1, 15,0);
    tracep->declBit(c+32,"sdram_dout_en", false,-1);
    tracep->declBus(c+33,"sdram_dout", false,-1, 15,0);
    tracep->declBus(c+661,"state", false,-1, 1,0);
    tracep->declBit(c+766,"req_accept", false,-1);
    tracep->declBit(c+845,"is_read", false,-1);
    tracep->declBit(c+846,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+966,"clk_i", false,-1);
    tracep->declBit(c+967,"rst_i", false,-1);
    tracep->declBus(c+847,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+845,"inport_rd_i", false,-1);
    tracep->declBus(c+1020,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+822,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+190,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+18,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+766,"inport_accept_o", false,-1);
    tracep->declBit(c+760,"inport_ack_o", false,-1);
    tracep->declBit(c+1009,"inport_error_o", false,-1);
    tracep->declBus(c+19,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+991,"sdram_clk_o", false,-1);
    tracep->declBit(c+10,"sdram_cke_o", false,-1);
    tracep->declBit(c+11,"sdram_cs_o", false,-1);
    tracep->declBit(c+12,"sdram_ras_o", false,-1);
    tracep->declBit(c+13,"sdram_cas_o", false,-1);
    tracep->declBit(c+14,"sdram_we_o", false,-1);
    tracep->declBus(c+17,"sdram_dqm_o", false,-1, 1,0);
    tracep->declBus(c+15,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+16,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+33,"sdram_data_output_o", false,-1, 15,0);
    tracep->declBit(c+32,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1060,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1061,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1062,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1063,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1063,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1063,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1064,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1049,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1065,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1066,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1067,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1064,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1068,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1069,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1070,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1071,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1072,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1073,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1074,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1019,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1075,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1064,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1019,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1074,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1073,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1069,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1071,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1070,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1072,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1068,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1076,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1077,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1078,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1078,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1079,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1078,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1063,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1063,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1080,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+822,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+847,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+845,"ram_rd_w", false,-1);
    tracep->declBit(c+766,"ram_accept_w", false,-1);
    tracep->declBus(c+190,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+19,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+760,"ram_ack_w", false,-1);
    tracep->declBit(c+848,"ram_req_w", false,-1);
    tracep->declBus(c+34,"command_q", false,-1, 3,0);
    tracep->declBus(c+15,"addr_q", false,-1, 12,0);
    tracep->declBus(c+33,"data_q", false,-1, 15,0);
    tracep->declBit(c+35,"data_rd_en_q", false,-1);
    tracep->declBus(c+17,"dqm_q", false,-1, 1,0);
    tracep->declBit(c+10,"cke_q", false,-1);
    tracep->declBus(c+16,"bank_q", false,-1, 1,0);
    tracep->declBus(c+36,"data_buffer_q", false,-1, 15,0);
    tracep->declBus(c+37,"dqm_buffer_q", false,-1, 1,0);
    tracep->declBus(c+18,"sdram_data_in_w", false,-1, 15,0);
    tracep->declBit(c+38,"refresh_q", false,-1);
    tracep->declBus(c+39,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+40+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+767,"state_q", false,-1, 3,0);
    tracep->declBus(c+961,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+962,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+44,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+45,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+849,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+850,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+851,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1064,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+46,"delay_q", false,-1, 3,0);
    tracep->declBus(c+963,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1081,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+47,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+48,"sample_data0_q", false,-1, 15,0);
    tracep->declBus(c+49,"sample_data_q", false,-1, 15,0);
    tracep->declBus(c+50,"idx", false,-1, 31,0);
    tracep->declBus(c+768,"rd_q", false,-1, 3,0);
    tracep->declBit(c+760,"ack_q", false,-1);
    tracep->declArray(c+769,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+830,"auto_in_psel", false,-1);
    tracep->declBit(c+831,"auto_in_penable", false,-1);
    tracep->declBit(c+189,"auto_in_pwrite", false,-1);
    tracep->declBus(c+824,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1008,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+190,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+191,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+20,"auto_in_pready", false,-1);
    tracep->declBit(c+1009,"auto_in_pslverr", false,-1);
    tracep->declBus(c+21,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+8,"spi_bundle_sck", false,-1);
    tracep->declBus(c+9,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+759,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+988,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1082,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1083,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1084,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBus(c+852,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+830,"in_psel", false,-1);
    tracep->declBit(c+831,"in_penable", false,-1);
    tracep->declBus(c+1008,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+189,"in_pwrite", false,-1);
    tracep->declBus(c+190,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+191,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+20,"in_pready", false,-1);
    tracep->declBus(c+21,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1009,"in_pslverr", false,-1);
    tracep->declBit(c+8,"spi_sck", false,-1);
    tracep->declBus(c+9,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+759,"spi_mosi", false,-1);
    tracep->declBit(c+988,"spi_miso", false,-1);
    tracep->declBit(c+51,"spi_irq_out", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1085,"Tp", false,-1, 31,0);
    tracep->declBit(c+966,"wb_clk_i", false,-1);
    tracep->declBit(c+967,"wb_rst_i", false,-1);
    tracep->declBus(c+853,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+190,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+21,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+191,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+189,"wb_we_i", false,-1);
    tracep->declBit(c+830,"wb_stb_i", false,-1);
    tracep->declBit(c+831,"wb_cyc_i", false,-1);
    tracep->declBit(c+20,"wb_ack_o", false,-1);
    tracep->declBit(c+1009,"wb_err_o", false,-1);
    tracep->declBit(c+51,"wb_int_o", false,-1);
    tracep->declBus(c+9,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+8,"sclk_pad_o", false,-1);
    tracep->declBit(c+759,"mosi_pad_o", false,-1);
    tracep->declBit(c+988,"miso_pad_i", false,-1);
    tracep->declBus(c+52,"divider", false,-1, 15,0);
    tracep->declBus(c+53,"ctrl", false,-1, 13,0);
    tracep->declBus(c+54,"ss", false,-1, 7,0);
    tracep->declBus(c+964,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+55,"rx", false,-1, 127,0);
    tracep->declBit(c+59,"rx_negedge", false,-1);
    tracep->declBit(c+60,"tx_negedge", false,-1);
    tracep->declBus(c+61,"char_len", false,-1, 6,0);
    tracep->declBit(c+62,"go", false,-1);
    tracep->declBit(c+63,"lsb", false,-1);
    tracep->declBit(c+64,"ie", false,-1);
    tracep->declBit(c+65,"ass", false,-1);
    tracep->declBit(c+854,"spi_divider_sel", false,-1);
    tracep->declBit(c+855,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+856,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+857,"spi_ss_sel", false,-1);
    tracep->declBit(c+66,"tip", false,-1);
    tracep->declBit(c+67,"pos_edge", false,-1);
    tracep->declBit(c+68,"neg_edge", false,-1);
    tracep->declBit(c+69,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1085,"Tp", false,-1, 31,0);
    tracep->declBit(c+966,"clk_in", false,-1);
    tracep->declBit(c+967,"rst", false,-1);
    tracep->declBit(c+66,"enable", false,-1);
    tracep->declBit(c+62,"go", false,-1);
    tracep->declBit(c+69,"last_clk", false,-1);
    tracep->declBus(c+52,"divider", false,-1, 15,0);
    tracep->declBit(c+8,"clk_out", false,-1);
    tracep->declBit(c+67,"pos_edge", false,-1);
    tracep->declBit(c+68,"neg_edge", false,-1);
    tracep->declBus(c+70,"cnt", false,-1, 15,0);
    tracep->declBit(c+71,"cnt_zero", false,-1);
    tracep->declBit(c+72,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1085,"Tp", false,-1, 31,0);
    tracep->declBit(c+966,"clk", false,-1);
    tracep->declBit(c+967,"rst", false,-1);
    tracep->declBus(c+858,"latch", false,-1, 3,0);
    tracep->declBus(c+191,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+61,"len", false,-1, 6,0);
    tracep->declBit(c+63,"lsb", false,-1);
    tracep->declBit(c+62,"go", false,-1);
    tracep->declBit(c+67,"pos_edge", false,-1);
    tracep->declBit(c+68,"neg_edge", false,-1);
    tracep->declBit(c+59,"rx_negedge", false,-1);
    tracep->declBit(c+60,"tx_negedge", false,-1);
    tracep->declBit(c+66,"tip", false,-1);
    tracep->declBit(c+69,"last", false,-1);
    tracep->declBus(c+190,"p_in", false,-1, 31,0);
    tracep->declArray(c+55,"p_out", false,-1, 127,0);
    tracep->declBit(c+8,"s_clk", false,-1);
    tracep->declBit(c+988,"s_in", false,-1);
    tracep->declBit(c+759,"s_out", false,-1);
    tracep->declBus(c+73,"cnt", false,-1, 7,0);
    tracep->declArray(c+55,"data", false,-1, 127,0);
    tracep->declBus(c+74,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+75,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+76,"rx_clk", false,-1);
    tracep->declBit(c+77,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+827,"auto_in_psel", false,-1);
    tracep->declBit(c+828,"auto_in_penable", false,-1);
    tracep->declBit(c+189,"auto_in_pwrite", false,-1);
    tracep->declBus(c+825,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1008,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+190,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+191,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+829,"auto_in_pready", false,-1);
    tracep->declBit(c+1009,"auto_in_pslverr", false,-1);
    tracep->declBus(c+993,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+986,"uart_rx", false,-1);
    tracep->declBit(c+987,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+827,"in_psel", false,-1);
    tracep->declBit(c+828,"in_penable", false,-1);
    tracep->declBus(c+1008,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+829,"in_pready", false,-1);
    tracep->declBit(c+1009,"in_pslverr", false,-1);
    tracep->declBus(c+840,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+189,"in_pwrite", false,-1);
    tracep->declBus(c+993,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+190,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+191,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+986,"uart_rx", false,-1);
    tracep->declBit(c+987,"uart_tx", false,-1);
    tracep->declBit(c+78,"rtsn", false,-1);
    tracep->declBit(c+1009,"ctsn", false,-1);
    tracep->declBit(c+79,"dtr_pad_o", false,-1);
    tracep->declBit(c+1009,"dsr_pad_i", false,-1);
    tracep->declBit(c+1009,"ri_pad_i", false,-1);
    tracep->declBit(c+1009,"dcd_pad_i", false,-1);
    tracep->declBit(c+80,"interrupt", false,-1);
    tracep->declBit(c+1001,"reg_we", false,-1);
    tracep->declBit(c+1002,"reg_re", false,-1);
    tracep->declBus(c+859,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+860,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+662,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+965,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+81,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+966,"clk", false,-1);
    tracep->declBit(c+967,"wb_rst_i", false,-1);
    tracep->declBus(c+859,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+861,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+965,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1001,"wb_we_i", false,-1);
    tracep->declBit(c+1002,"wb_re_i", false,-1);
    tracep->declBit(c+987,"stx_pad_o", false,-1);
    tracep->declBit(c+986,"srx_pad_i", false,-1);
    tracep->declBus(c+1076,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+81,"rts_pad_o", false,-1);
    tracep->declBit(c+79,"dtr_pad_o", false,-1);
    tracep->declBit(c+80,"int_o", false,-1);
    tracep->declBit(c+772,"enable", false,-1);
    tracep->declBit(c+82,"srx_pad", false,-1);
    tracep->declBus(c+83,"ier", false,-1, 3,0);
    tracep->declBus(c+84,"iir", false,-1, 3,0);
    tracep->declBus(c+85,"fcr", false,-1, 1,0);
    tracep->declBus(c+86,"mcr", false,-1, 4,0);
    tracep->declBus(c+773,"lcr", false,-1, 7,0);
    tracep->declBus(c+87,"msr", false,-1, 7,0);
    tracep->declBus(c+774,"dl", false,-1, 15,0);
    tracep->declBus(c+88,"scratch", false,-1, 7,0);
    tracep->declBit(c+89,"start_dlc", false,-1);
    tracep->declBit(c+90,"lsr_mask_d", false,-1);
    tracep->declBit(c+91,"msi_reset", false,-1);
    tracep->declBus(c+775,"dlc", false,-1, 15,0);
    tracep->declBus(c+92,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+93,"rx_reset", false,-1);
    tracep->declBit(c+776,"tx_reset", false,-1);
    tracep->declBit(c+777,"dlab", false,-1);
    tracep->declBit(c+1022,"cts_pad_i", false,-1);
    tracep->declBit(c+1009,"dsr_pad_i", false,-1);
    tracep->declBit(c+1009,"ri_pad_i", false,-1);
    tracep->declBit(c+1009,"dcd_pad_i", false,-1);
    tracep->declBit(c+94,"loopback", false,-1);
    tracep->declBit(c+1009,"cts", false,-1);
    tracep->declBit(c+1022,"dsr", false,-1);
    tracep->declBit(c+1022,"ri", false,-1);
    tracep->declBit(c+1022,"dcd", false,-1);
    tracep->declBit(c+95,"cts_c", false,-1);
    tracep->declBit(c+96,"dsr_c", false,-1);
    tracep->declBit(c+97,"ri_c", false,-1);
    tracep->declBit(c+98,"dcd_c", false,-1);
    tracep->declBus(c+99,"lsr", false,-1, 7,0);
    tracep->declBit(c+778,"lsr0", false,-1);
    tracep->declBit(c+100,"lsr1", false,-1);
    tracep->declBit(c+101,"lsr2", false,-1);
    tracep->declBit(c+102,"lsr3", false,-1);
    tracep->declBit(c+103,"lsr4", false,-1);
    tracep->declBit(c+779,"lsr5", false,-1);
    tracep->declBit(c+780,"lsr6", false,-1);
    tracep->declBit(c+104,"lsr7", false,-1);
    tracep->declBit(c+105,"lsr0r", false,-1);
    tracep->declBit(c+106,"lsr1r", false,-1);
    tracep->declBit(c+107,"lsr2r", false,-1);
    tracep->declBit(c+108,"lsr3r", false,-1);
    tracep->declBit(c+109,"lsr4r", false,-1);
    tracep->declBit(c+110,"lsr5r", false,-1);
    tracep->declBit(c+111,"lsr6r", false,-1);
    tracep->declBit(c+112,"lsr7r", false,-1);
    tracep->declBit(c+2,"lsr_mask", false,-1);
    tracep->declBit(c+113,"rls_int", false,-1);
    tracep->declBit(c+114,"rda_int", false,-1);
    tracep->declBit(c+115,"ti_int", false,-1);
    tracep->declBit(c+116,"thre_int", false,-1);
    tracep->declBit(c+117,"ms_int", false,-1);
    tracep->declBit(c+781,"tf_push", false,-1);
    tracep->declBit(c+118,"rf_pop", false,-1);
    tracep->declBus(c+1003,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+119,"rf_error_bit", false,-1);
    tracep->declBit(c+100,"rf_overrun", false,-1);
    tracep->declBit(c+782,"rf_push_pulse", false,-1);
    tracep->declBus(c+120,"rf_count", false,-1, 4,0);
    tracep->declBus(c+783,"tf_count", false,-1, 4,0);
    tracep->declBus(c+784,"tstate", false,-1, 2,0);
    tracep->declBus(c+785,"rstate", false,-1, 3,0);
    tracep->declBus(c+121,"counter_t", false,-1, 9,0);
    tracep->declBit(c+122,"thre_set_en", false,-1);
    tracep->declBus(c+123,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+786,"block_value", false,-1, 7,0);
    tracep->declBit(c+787,"serial_out", false,-1);
    tracep->declBit(c+788,"serial_in", false,-1);
    tracep->declBit(c+3,"lsr_mask_condition", false,-1);
    tracep->declBit(c+4,"iir_read", false,-1);
    tracep->declBit(c+5,"msr_read", false,-1);
    tracep->declBit(c+6,"fifo_read", false,-1);
    tracep->declBit(c+7,"fifo_write", false,-1);
    tracep->declBus(c+124,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+125,"lsr0_d", false,-1);
    tracep->declBit(c+126,"lsr1_d", false,-1);
    tracep->declBit(c+127,"lsr2_d", false,-1);
    tracep->declBit(c+128,"lsr3_d", false,-1);
    tracep->declBit(c+129,"lsr4_d", false,-1);
    tracep->declBit(c+130,"lsr5_d", false,-1);
    tracep->declBit(c+131,"lsr6_d", false,-1);
    tracep->declBit(c+132,"lsr7_d", false,-1);
    tracep->declBit(c+133,"rls_int_d", false,-1);
    tracep->declBit(c+134,"thre_int_d", false,-1);
    tracep->declBit(c+135,"ms_int_d", false,-1);
    tracep->declBit(c+136,"ti_int_d", false,-1);
    tracep->declBit(c+137,"rda_int_d", false,-1);
    tracep->declBit(c+138,"rls_int_rise", false,-1);
    tracep->declBit(c+139,"thre_int_rise", false,-1);
    tracep->declBit(c+140,"ms_int_rise", false,-1);
    tracep->declBit(c+141,"ti_int_rise", false,-1);
    tracep->declBit(c+142,"rda_int_rise", false,-1);
    tracep->declBit(c+143,"rls_int_pnd", false,-1);
    tracep->declBit(c+144,"rda_int_pnd", false,-1);
    tracep->declBit(c+145,"thre_int_pnd", false,-1);
    tracep->declBit(c+146,"ms_int_pnd", false,-1);
    tracep->declBit(c+147,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1085,"Tp", false,-1, 31,0);
    tracep->declBus(c+1085,"width", false,-1, 31,0);
    tracep->declBus(c+1055,"init_value", false,-1, 0,0);
    tracep->declBit(c+967,"rst_i", false,-1);
    tracep->declBit(c+966,"clk_i", false,-1);
    tracep->declBit(c+1009,"stage1_rst_i", false,-1);
    tracep->declBit(c+1022,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+986,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+82,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+148,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+966,"clk", false,-1);
    tracep->declBit(c+967,"wb_rst_i", false,-1);
    tracep->declBus(c+773,"lcr", false,-1, 7,0);
    tracep->declBit(c+118,"rf_pop", false,-1);
    tracep->declBit(c+788,"srx_pad_i", false,-1);
    tracep->declBit(c+772,"enable", false,-1);
    tracep->declBit(c+93,"rx_reset", false,-1);
    tracep->declBit(c+2,"lsr_mask", false,-1);
    tracep->declBus(c+121,"counter_t", false,-1, 9,0);
    tracep->declBus(c+120,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1003,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+100,"rf_overrun", false,-1);
    tracep->declBit(c+119,"rf_error_bit", false,-1);
    tracep->declBus(c+785,"rstate", false,-1, 3,0);
    tracep->declBit(c+782,"rf_push_pulse", false,-1);
    tracep->declBus(c+789,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+790,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+791,"rshift", false,-1, 7,0);
    tracep->declBit(c+792,"rparity", false,-1);
    tracep->declBit(c+793,"rparity_error", false,-1);
    tracep->declBit(c+794,"rframing_error", false,-1);
    tracep->declBit(c+149,"rbit_in", false,-1);
    tracep->declBit(c+795,"rparity_xor", false,-1);
    tracep->declBus(c+796,"counter_b", false,-1, 7,0);
    tracep->declBit(c+150,"rf_push_q", false,-1);
    tracep->declBus(c+797,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+798,"rf_push", false,-1);
    tracep->declBit(c+799,"break_error", false,-1);
    tracep->declBit(c+800,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+801,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+802,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+803,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1019,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1074,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1073,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1069,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1071,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1070,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1072,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1068,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1076,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1077,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1086,"sr_push", false,-1, 3,0);
    tracep->declBus(c+804,"toc_value", false,-1, 9,0);
    tracep->declBus(c+805,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1087,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1079,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1064,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1088,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+966,"clk", false,-1);
    tracep->declBit(c+967,"wb_rst_i", false,-1);
    tracep->declBit(c+782,"push", false,-1);
    tracep->declBit(c+118,"pop", false,-1);
    tracep->declBus(c+797,"data_in", false,-1, 10,0);
    tracep->declBit(c+93,"fifo_reset", false,-1);
    tracep->declBit(c+2,"reset_status", false,-1);
    tracep->declBus(c+1003,"data_out", false,-1, 10,0);
    tracep->declBit(c+100,"overrun", false,-1);
    tracep->declBus(c+120,"count", false,-1, 4,0);
    tracep->declBit(c+119,"error_bit", false,-1);
    tracep->declBus(c+1004,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+151+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+806,"top", false,-1, 3,0);
    tracep->declBus(c+167,"bottom", false,-1, 3,0);
    tracep->declBus(c+807,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+168,"word0", false,-1, 2,0);
    tracep->declBus(c+169,"word1", false,-1, 2,0);
    tracep->declBus(c+170,"word2", false,-1, 2,0);
    tracep->declBus(c+171,"word3", false,-1, 2,0);
    tracep->declBus(c+172,"word4", false,-1, 2,0);
    tracep->declBus(c+173,"word5", false,-1, 2,0);
    tracep->declBus(c+174,"word6", false,-1, 2,0);
    tracep->declBus(c+175,"word7", false,-1, 2,0);
    tracep->declBus(c+176,"word8", false,-1, 2,0);
    tracep->declBus(c+177,"word9", false,-1, 2,0);
    tracep->declBus(c+178,"word10", false,-1, 2,0);
    tracep->declBus(c+179,"word11", false,-1, 2,0);
    tracep->declBus(c+180,"word12", false,-1, 2,0);
    tracep->declBus(c+181,"word13", false,-1, 2,0);
    tracep->declBus(c+182,"word14", false,-1, 2,0);
    tracep->declBus(c+183,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1064,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1084,"data_width", false,-1, 31,0);
    tracep->declBus(c+1079,"depth", false,-1, 31,0);
    tracep->declBit(c+966,"clk", false,-1);
    tracep->declBit(c+782,"we", false,-1);
    tracep->declBus(c+806,"a", false,-1, 3,0);
    tracep->declBus(c+167,"dpra", false,-1, 3,0);
    tracep->declBus(c+808,"di", false,-1, 7,0);
    tracep->declBus(c+1004,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+663+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+966,"clk", false,-1);
    tracep->declBit(c+967,"wb_rst_i", false,-1);
    tracep->declBus(c+773,"lcr", false,-1, 7,0);
    tracep->declBit(c+781,"tf_push", false,-1);
    tracep->declBus(c+861,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+772,"enable", false,-1);
    tracep->declBit(c+776,"tx_reset", false,-1);
    tracep->declBit(c+2,"lsr_mask", false,-1);
    tracep->declBit(c+787,"stx_pad_o", false,-1);
    tracep->declBus(c+784,"tstate", false,-1, 2,0);
    tracep->declBus(c+783,"tf_count", false,-1, 4,0);
    tracep->declBus(c+809,"counter", false,-1, 4,0);
    tracep->declBus(c+810,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+811,"shift_out", false,-1, 6,0);
    tracep->declBit(c+812,"stx_o_tmp", false,-1);
    tracep->declBit(c+813,"parity_xor", false,-1);
    tracep->declBit(c+814,"tf_pop", false,-1);
    tracep->declBit(c+815,"bit_out", false,-1);
    tracep->declBus(c+861,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+821,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+184,"tf_overrun", false,-1);
    tracep->declBus(c+1025,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1008,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1043,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1044,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1056,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1089,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1084,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1079,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1064,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1088,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+966,"clk", false,-1);
    tracep->declBit(c+967,"wb_rst_i", false,-1);
    tracep->declBit(c+781,"push", false,-1);
    tracep->declBit(c+814,"pop", false,-1);
    tracep->declBus(c+861,"data_in", false,-1, 7,0);
    tracep->declBit(c+776,"fifo_reset", false,-1);
    tracep->declBit(c+2,"reset_status", false,-1);
    tracep->declBus(c+821,"data_out", false,-1, 7,0);
    tracep->declBit(c+184,"overrun", false,-1);
    tracep->declBus(c+783,"count", false,-1, 4,0);
    tracep->declBus(c+816,"top", false,-1, 3,0);
    tracep->declBus(c+817,"bottom", false,-1, 3,0);
    tracep->declBus(c+818,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1064,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1084,"data_width", false,-1, 31,0);
    tracep->declBus(c+1079,"depth", false,-1, 31,0);
    tracep->declBit(c+966,"clk", false,-1);
    tracep->declBit(c+781,"we", false,-1);
    tracep->declBus(c+816,"a", false,-1, 3,0);
    tracep->declBus(c+817,"dpra", false,-1, 3,0);
    tracep->declBus(c+861,"di", false,-1, 7,0);
    tracep->declBus(c+821,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+679+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBit(c+697,"auto_in_psel", false,-1);
    tracep->declBit(c+698,"auto_in_penable", false,-1);
    tracep->declBit(c+189,"auto_in_pwrite", false,-1);
    tracep->declBus(c+824,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1008,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+190,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+191,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1010,"auto_in_pready", false,-1);
    tracep->declBit(c+1011,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1012,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+980,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+981,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+982,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+983,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+984,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+985,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+966,"clock", false,-1);
    tracep->declBit(c+967,"reset", false,-1);
    tracep->declBus(c+852,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+697,"in_psel", false,-1);
    tracep->declBit(c+698,"in_penable", false,-1);
    tracep->declBus(c+1008,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+189,"in_pwrite", false,-1);
    tracep->declBus(c+190,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+191,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1010,"in_pready", false,-1);
    tracep->declBus(c+1012,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1011,"in_pslverr", false,-1);
    tracep->declBus(c+980,"vga_r", false,-1, 7,0);
    tracep->declBus(c+981,"vga_g", false,-1, 7,0);
    tracep->declBus(c+982,"vga_b", false,-1, 7,0);
    tracep->declBit(c+983,"vga_hsync", false,-1);
    tracep->declBit(c+984,"vga_vsync", false,-1);
    tracep->declBit(c+985,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+8,"sck", false,-1);
    tracep->declBit(c+185,"ss", false,-1);
    tracep->declBit(c+759,"mosi", false,-1);
    tracep->declBit(c+1022,"miso", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+8,"sck", false,-1);
    tracep->declBit(c+186,"ss", false,-1);
    tracep->declBit(c+759,"mosi", false,-1);
    tracep->declBit(c+988,"miso", false,-1);
    tracep->declBit(c+186,"reset", false,-1);
    tracep->declBus(c+753,"state", false,-1, 2,0);
    tracep->declBus(c+754,"counter", false,-1, 7,0);
    tracep->declBus(c+755,"cmd", false,-1, 7,0);
    tracep->declBus(c+756,"addr", false,-1, 23,0);
    tracep->declBus(c+757,"data", false,-1, 31,0);
    tracep->declBit(c+758,"ren", false,-1);
    tracep->declBus(c+1005,"rdata", false,-1, 31,0);
    tracep->declBus(c+1006,"raddr", false,-1, 31,0);
    tracep->declBus(c+1007,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+8,"clock", false,-1);
    tracep->declBit(c+758,"valid", false,-1);
    tracep->declBus(c+755,"cmd", false,-1, 7,0);
    tracep->declBus(c+1006,"addr", false,-1, 31,0);
    tracep->declBus(c+1005,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+989,"sck", false,-1);
    tracep->declBit(c+990,"ce_n", false,-1);
    tracep->declBus(c+862,"dio", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+991,"clk", false,-1);
    tracep->declBit(c+10,"cke", false,-1);
    tracep->declBit(c+11,"cs", false,-1);
    tracep->declBit(c+12,"ras", false,-1);
    tracep->declBit(c+13,"cas", false,-1);
    tracep->declBit(c+14,"we", false,-1);
    tracep->declBus(c+15,"a", false,-1, 12,0);
    tracep->declBus(c+16,"ba", false,-1, 1,0);
    tracep->declBus(c+17,"dqm", false,-1, 1,0);
    tracep->declBus(c+18,"dq", false,-1, 15,0);
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
    bufp->fullBit(oldp+8,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+9,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+10,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+11,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                  >> 3U))));
    bufp->fullBit(oldp+12,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                  >> 2U))));
    bufp->fullBit(oldp+13,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                  >> 1U))));
    bufp->fullBit(oldp+14,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+15,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+16,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+17,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),2);
    bufp->fullSData(oldp+18,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                 ? 0U : 0xffffU) & 
                               ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                   ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q)) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                     ? 0U : 0xffffU)) 
                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                    ? 0U : 0xffffU))) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                  ? 0U : 0xffffU))),16);
    bufp->fullIData(oldp+19,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                               << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))),32);
    bufp->fullBit(oldp+20,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullIData(oldp+21,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullBit(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+25,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullIData(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullBit(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+32,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullSData(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),16);
    bufp->fullCData(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullBit(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullSData(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),16);
    bufp->fullCData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),2);
    bufp->fullBit(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullSData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),16);
    bufp->fullSData(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),16);
    bufp->fullIData(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullBit(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullSData(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+59,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                  >> 9U))));
    bufp->fullBit(oldp+60,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                  >> 0xaU))));
    bufp->fullCData(oldp+61,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+62,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                  >> 8U))));
    bufp->fullBit(oldp+63,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                  >> 0xbU))));
    bufp->fullBit(oldp+64,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                  >> 0xcU))));
    bufp->fullBit(oldp+65,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                  >> 0xdU))));
    bufp->fullBit(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+69,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+71,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+72,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+74,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                           - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                        : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                           - (IData)(1U))))),8);
    bufp->fullCData(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+78,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                     >> 1U)))));
    bufp->fullBit(oldp+79,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+81,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                  >> 1U))));
    bufp->fullBit(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullCData(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullCData(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+94,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                  >> 4U))));
    bufp->fullBit(oldp+95,((IData)((0x10U != (0x12U 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+96,((IData)((0x11U == (0x11U 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+97,((IData)((0x14U == (0x14U 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+98,((IData)((0x18U == (0x18U 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+99,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+101,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+102,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+103,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+119,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullCData(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullSData(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+122,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+138,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+139,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+140,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+141,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+142,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullBit(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullCData(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullBit(oldp+185,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                   >> 7U))));
    bufp->fullBit(oldp+186,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+188,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w),32);
    bufp->fullCData(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullIData(oldp+192,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullBit(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_awvalid));
    bufp->fullCData(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_wvalid));
    bufp->fullQData(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),64);
    bufp->fullCData(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),8);
    bufp->fullCData(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_arvalid));
    bufp->fullCData(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg),32);
    bufp->fullQData(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),64);
    bufp->fullQData(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg),64);
    bufp->fullCData(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),8);
    bufp->fullCData(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg),8);
    bufp->fullCData(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+222,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+223,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state))));
    bufp->fullIData(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_w_addr_o),32);
    bufp->fullCData(oldp+225,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__mask)),3);
    bufp->fullBit(oldp+226,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+227,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state))));
    bufp->fullQData(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata),64);
    bufp->fullCData(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb),8);
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast));
    bufp->fullBit(oldp+232,(((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state)) 
                             | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state)))));
    bufp->fullBit(oldp+233,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+234,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_state))));
    bufp->fullIData(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_addr_o),32);
    bufp->fullCData(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_size_o),3);
    bufp->fullBit(oldp+237,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_state))));
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+239,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+241,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+243,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+244,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullCData(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullBit(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullSData(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullCData(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullIData(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullQData(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullQData(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+289,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                    ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram[2U] 
                                       >> 8U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast)))));
    bufp->fullWData(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),73);
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid));
    bufp->fullIData(oldp+295,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+296,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+299,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+300,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+301,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullQData(oldp+304,((((QData)((IData)((0xffU 
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
    bufp->fullCData(oldp+306,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+307,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullBit(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullCData(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r4),8);
    bufp->fullCData(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r5),8);
    bufp->fullCData(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r6),8);
    bufp->fullCData(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r7),8);
    bufp->fullSData(oldp+319,((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 3U))),10);
    bufp->fullQData(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),64);
    bufp->fullSData(oldp+322,((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 3U))),10);
    bufp->fullBit(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+325,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
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
    bufp->fullBit(oldp+326,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 1U))));
    bufp->fullBit(oldp+327,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+328,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+329,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullQData(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),64);
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+338,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                    | ((0xcU & (8U 
                                                ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                       | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x17U)) 
                                          | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullBit(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+385,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullCData(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+398,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+402,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+406,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+410,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+414,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+418,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+422,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+426,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+430,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+434,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+438,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+442,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+446,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+450,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+454,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+458,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+462,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+466,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+470,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+474,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+478,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+482,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+486,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+490,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+494,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+498,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+502,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+506,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+510,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+514,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+518,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+522,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_pc_o_r),32);
    bufp->fullIData(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r),32);
    bufp->fullBit(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_stall_r));
    bufp->fullIData(oldp+529,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_mret)
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
    bufp->fullBit(oldp+530,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_mret) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_ecall) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h15124160__0) 
                                   | (0x67U == (0x7fU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)))))));
    bufp->fullIData(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__pc),32);
    bufp->fullBit(oldp+532,((0x63U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r))));
    bufp->fullBit(oldp+533,((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r))));
    bufp->fullBit(oldp+534,((0x67U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r))));
    bufp->fullCData(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_rd),5);
    bufp->fullBit(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_rd_wen));
    bufp->fullCData(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_rs1),5);
    bufp->fullCData(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_rs2),5);
    bufp->fullIData(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r),32);
    bufp->fullCData(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_alu_opt),4);
    bufp->fullCData(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_src_sel),2);
    bufp->fullCData(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt),2);
    bufp->fullCData(oldp+543,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                     >> 0xcU))),3);
    bufp->fullIData(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src1),32);
    bufp->fullIData(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src2),32);
    bufp->fullBit(oldp+546,((1U & (~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__exu_result_r))))));
    bufp->fullIData(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__exu_result_r),32);
    bufp->fullBit(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__ren));
    bufp->fullIData(oldp+549,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h623bd169__0
                                : 0U)),32);
    bufp->fullCData(oldp+550,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__rsize)),3);
    bufp->fullBit(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__wen));
    bufp->fullBit(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_ecall));
    bufp->fullBit(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_mret));
    bufp->fullIData(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wr_csr_data),32);
    bufp->fullIData(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                              [0x300U]),32);
    bufp->fullIData(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                              [0x305U]),32);
    bufp->fullIData(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                              [0x341U]),32);
    bufp->fullBit(oldp+558,((1U & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_stall_r)
                                    : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state))
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__ren)
                                        : 0U)))));
    bufp->fullCData(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state),2);
    bufp->fullCData(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state),3);
    bufp->fullQData(oldp+561,((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src2))),64);
    bufp->fullCData(oldp+563,(((0U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__mask))
                                ? 1U : ((1U == (7U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__mask))
                                         ? 3U : 0xfU))),8);
    bufp->fullCData(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_cnt),8);
    bufp->fullCData(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_state),2);
    bufp->fullSData(oldp+566,((0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r)),12);
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__wr_en));
    bufp->fullIData(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__wr_data_r),32);
    bufp->fullIData(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__temp),32);
    bufp->fullIData(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__mepc_inst_r),32);
    bufp->fullIData(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                              [0x342U]),32);
    bufp->fullIData(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data),32);
    bufp->fullIData(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_b_data),32);
    bufp->fullIData(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__alu_out_data_r),32);
    bufp->fullBit(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__sub_flag));
    bufp->fullQData(oldp+576,((((QData)((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data 
                                                 >> 0x1fU))) 
                                << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data)))),33);
    bufp->fullQData(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__alu_b_t),33);
    bufp->fullQData(oldp+580,((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__sub_flag))),33);
    bufp->fullQData(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out),33);
    bufp->fullBit(oldp+584,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data 
                             >> 0x1fU)));
    bufp->fullBit(oldp+585,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__alu_b_t 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+586,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+587,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+588,((1U & VL_REDXOR_64((0x180000000ULL 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out)))));
    bufp->fullBit(oldp+589,((1U & ((((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data 
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
    bufp->fullIData(oldp+590,((IData)(((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data))) 
                                       >> (0x3fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_b_data)))),32);
    bufp->fullCData(oldp+591,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)),7);
    bufp->fullCData(oldp+592,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                               >> 0x19U)),7);
    bufp->fullIData(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_typeI),32);
    bufp->fullIData(oldp+594,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)),32);
    bufp->fullIData(oldp+595,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+596,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
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
    bufp->fullIData(oldp+597,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
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
    bufp->fullSData(oldp+598,(((0x1000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                           >> 0x13U)) 
                               | ((0x800U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                             << 4U)) 
                                  | ((0x7e0U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                >> 0x14U)) 
                                     | (0x1eU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                 >> 7U)))))),13);
    bufp->fullSData(oldp+599,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+600,(((0x100000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                             >> 0xbU)) 
                               | ((0xff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r) 
                                  | ((0x800U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                >> 9U)) 
                                     | (0x7feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                  >> 0x14U)))))),21);
    bufp->fullSData(oldp+601,(((0xfe0U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                           >> 7U)))),12);
    bufp->fullIData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__rsize),32);
    bufp->fullIData(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__mask),32);
    bufp->fullIData(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[0]),32);
    bufp->fullIData(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[1]),32);
    bufp->fullIData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[2]),32);
    bufp->fullIData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[3]),32);
    bufp->fullIData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[4]),32);
    bufp->fullIData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[5]),32);
    bufp->fullIData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[6]),32);
    bufp->fullIData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[7]),32);
    bufp->fullIData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[8]),32);
    bufp->fullIData(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[9]),32);
    bufp->fullIData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[10]),32);
    bufp->fullIData(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[11]),32);
    bufp->fullIData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[12]),32);
    bufp->fullIData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[13]),32);
    bufp->fullIData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[14]),32);
    bufp->fullIData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[15]),32);
    bufp->fullIData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[16]),32);
    bufp->fullIData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[17]),32);
    bufp->fullIData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[18]),32);
    bufp->fullIData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[19]),32);
    bufp->fullIData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[20]),32);
    bufp->fullIData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[21]),32);
    bufp->fullIData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[22]),32);
    bufp->fullIData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[23]),32);
    bufp->fullIData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[24]),32);
    bufp->fullIData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[25]),32);
    bufp->fullIData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[26]),32);
    bufp->fullIData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[27]),32);
    bufp->fullIData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[28]),32);
    bufp->fullIData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[29]),32);
    bufp->fullIData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[30]),32);
    bufp->fullIData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[31]),32);
    bufp->fullBit(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu_u0__idu_rd_wen));
    bufp->fullBit(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullIData(oldp+647,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+653,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+654,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+655,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                   << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullCData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+660,((0xffU & ((IData)(0xdU) 
                                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                           << 1U)))),8);
    bufp->fullCData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+695,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+696,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+697,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+698,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+699,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+700,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+701,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+702,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+703,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullCData(oldp+704,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                   << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r))),2);
    bufp->fullQData(oldp+705,((((QData)((IData)(((1U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                  : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((1U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                              ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                              : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))))),64);
    bufp->fullCData(oldp+707,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullQData(oldp+708,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullBit(oldp+710,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+711,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+712,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+713,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+714,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+715,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+716,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+717,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+718,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+719,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+720,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+721,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+722,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+723,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+724,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+725,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+726,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+727,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+728,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+729,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+730,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+731,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+732,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+733,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+734,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+735,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+736,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+737,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+738,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+739,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+740,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+741,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+742,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+743,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+744,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+745,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_ready_i))));
    bufp->fullIData(oldp+746,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state))
                                ? (IData)(vlSelf->__VdfgTmp_h93b0bd6a__0)
                                : 0U)),32);
    bufp->fullBit(oldp+747,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_last_i))));
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
    bufp->fullBit(oldp+749,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_ready_i))));
    bufp->fullIData(oldp+750,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state))
                                ? (IData)(vlSelf->__VdfgTmp_h93b0bd6a__0)
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
    bufp->fullCData(oldp+755,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+756,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+757,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+758,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+759,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullBit(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+762,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+763,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullCData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullCData(oldp+765,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+766,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullCData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullWData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullCData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullSData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullSData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullBit(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+777,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullCData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullSData(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+799,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+800,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+801,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+802,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+803,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+805,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+807,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+808,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullCData(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+818,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullCData(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullCData(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w),32);
    bufp->fullBit(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullIData(oldp+824,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),30);
    bufp->fullIData(oldp+825,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),29);
    bufp->fullBit(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel));
    bufp->fullBit(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel));
    bufp->fullBit(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable));
    bufp->fullBit(oldp+829,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel))));
    bufp->fullBit(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_psel));
    bufp->fullBit(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_penable));
    bufp->fullBit(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullCData(oldp+839,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullIData(oldp+840,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullBit(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullIData(oldp+843,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullIData(oldp+844,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullBit(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+849,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                         >> 1U))),13);
    bufp->fullSData(oldp+850,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+851,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                     >> 0xaU))),2);
    bufp->fullIData(oldp+852,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullCData(oldp+853,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),5);
    bufp->fullBit(oldp+854,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))));
    bufp->fullBit(oldp+855,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))));
    bufp->fullCData(oldp+856,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
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
    bufp->fullBit(oldp+857,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))));
    bufp->fullCData(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+859,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),3);
    bufp->fullCData(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullCData(oldp+862,((((((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten))) 
                                  | (0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten)))) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0))),4);
    bufp->fullBit(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_bready));
    bufp->fullBit(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_rready));
    bufp->fullBit(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_w_last_i));
    bufp->fullCData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_ready_i));
    bufp->fullCData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19),4);
    bufp->fullBit(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_last_i));
    bufp->fullBit(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4));
    bufp->fullBit(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_bready));
    bufp->fullBit(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_rready));
    bufp->fullBit(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__nodeIn_awready));
    bufp->fullBit(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAROI_in_0_arready_T_4));
    bufp->fullBit(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+916,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+917,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+918,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+919,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+920,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+921,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+922,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+923,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+924,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+925,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+926,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+927,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+928,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+929,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+930,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+931,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+932,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+933,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+934,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+935,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+936,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+937,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+938,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+939,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+940,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+941,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+942,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+943,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+944,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+945,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+946,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+947,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__stall));
    bufp->fullBit(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rd_wen));
    bufp->fullIData(oldp+950,((IData)(vlSelf->__VdfgTmp_h93b0bd6a__0)),32);
    bufp->fullBit(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__flush_inst));
    bufp->fullBit(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__lsu_rd_wen_r));
    bufp->fullBit(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__lsu_rd_wen_w));
    bufp->fullCData(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullIData(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+966,(vlSelf->clock));
    bufp->fullBit(oldp+967,(vlSelf->reset));
    bufp->fullSData(oldp+968,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+969,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+970,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+971,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+972,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+973,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+974,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+975,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+976,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+977,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+978,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+979,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+980,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+981,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+982,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+983,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+984,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+985,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+986,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+987,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+988,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                   | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                        ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                        : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                      >> 0x1fU)))));
    bufp->fullBit(oldp+989,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)
                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))));
    bufp->fullBit(oldp+990,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)
                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n))));
    bufp->fullBit(oldp+991,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+992,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel))));
    bufp->fullIData(oldp+993,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel)
                                ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                    << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                : 0U)),32);
    bufp->fullCData(oldp+994,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                 ? ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                        << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r))
                                 : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                           ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                               ? 0U
                                               : 3U)
                                           : 0U))),2);
    bufp->fullBit(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullIData(oldp+996,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
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
    bufp->fullIData(oldp+997,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)
                                ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__wr_en)
                                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                                        [(0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r)]
                                         : 0U))),32);
    bufp->fullBit(oldp+998,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                              : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+999,((0xfU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
                                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 0x10U)
                                                : (
                                                   (0xaU 
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
    bufp->fullBit(oldp+1000,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1003,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullIData(oldp+1005,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1006,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1007,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+1008,(1U),3);
    bufp->fullBit(oldp+1009,(0U));
    bufp->fullBit(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+1019,(0U),4);
    bufp->fullCData(oldp+1020,(0U),8);
    bufp->fullCData(oldp+1021,(1U),2);
    bufp->fullBit(oldp+1022,(1U));
    bufp->fullBit(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1024,(0U),32);
    bufp->fullCData(oldp+1025,(0U),3);
    bufp->fullCData(oldp+1026,(0U),2);
    bufp->fullBit(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullQData(oldp+1028,(0ULL),64);
    bufp->fullBit(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullQData(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),64);
    bufp->fullBit(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_inst_t),32);
    bufp->fullIData(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_result_t),32);
    bufp->fullCData(oldp+1042,(2U),2);
    bufp->fullCData(oldp+1043,(2U),3);
    bufp->fullCData(oldp+1044,(3U),3);
    bufp->fullCData(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_cnt),8);
    bufp->fullBit(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__carry_flag));
    bufp->fullBit(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__signed_flag));
    bufp->fullCData(oldp+1048,(0U),5);
    bufp->fullIData(oldp+1049,(0xdU),32);
    bufp->fullIData(oldp+1050,(0xcU),32);
    bufp->fullIData(oldp+1051,(0x15U),32);
    bufp->fullIData(oldp+1052,(0x20U),32);
    bufp->fullIData(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__inst_t),32);
    bufp->fullBit(oldp+1054,(0U));
    bufp->fullBit(oldp+1055,(1U));
    bufp->fullCData(oldp+1056,(4U),3);
    bufp->fullCData(oldp+1057,(0x1bU),8);
    bufp->fullCData(oldp+1058,(0xebU),8);
    bufp->fullCData(oldp+1059,(0x38U),8);
    bufp->fullIData(oldp+1060,(0x64U),32);
    bufp->fullIData(oldp+1061,(0x18U),32);
    bufp->fullIData(oldp+1062,(9U),32);
    bufp->fullIData(oldp+1063,(2U),32);
    bufp->fullIData(oldp+1064,(4U),32);
    bufp->fullIData(oldp+1065,(0x2000U),32);
    bufp->fullIData(oldp+1066,(0x2710U),32);
    bufp->fullIData(oldp+1067,(0x30cU),32);
    bufp->fullCData(oldp+1068,(7U),4);
    bufp->fullCData(oldp+1069,(3U),4);
    bufp->fullCData(oldp+1070,(5U),4);
    bufp->fullCData(oldp+1071,(4U),4);
    bufp->fullCData(oldp+1072,(6U),4);
    bufp->fullCData(oldp+1073,(2U),4);
    bufp->fullCData(oldp+1074,(1U),4);
    bufp->fullSData(oldp+1075,(0x21U),13);
    bufp->fullCData(oldp+1076,(8U),4);
    bufp->fullCData(oldp+1077,(9U),4);
    bufp->fullIData(oldp+1078,(0xaU),32);
    bufp->fullIData(oldp+1079,(0x10U),32);
    bufp->fullIData(oldp+1080,(6U),32);
    bufp->fullIData(oldp+1081,(0x11U),32);
    bufp->fullIData(oldp+1082,(0x30000000U),32);
    bufp->fullIData(oldp+1083,(0x3fffffffU),32);
    bufp->fullIData(oldp+1084,(8U),32);
    bufp->fullIData(oldp+1085,(1U),32);
    bufp->fullCData(oldp+1086,(0xaU),4);
    bufp->fullIData(oldp+1087,(0xbU),32);
    bufp->fullIData(oldp+1088,(5U),32);
    bufp->fullCData(oldp+1089,(5U),3);
}
