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
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBus(c+979,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+980,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+981,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+982,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+983,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+984,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+985,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+986,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+987,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+988,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+989,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+990,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+991,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+992,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+993,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+994,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+995,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+996,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+997,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+998,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBus(c+979,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+980,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+981,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+982,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+983,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+984,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+985,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+986,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+987,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+988,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+989,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+990,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+991,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+992,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+993,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+994,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+995,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+996,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+997,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+998,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+750,"spi_sck", false,-1);
    tracep->declBus(c+751,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+11,"spi_mosi", false,-1);
    tracep->declBit(c+999,"spi_miso", false,-1);
    tracep->declBit(c+997,"uart_rx", false,-1);
    tracep->declBit(c+998,"uart_tx", false,-1);
    tracep->declBit(c+1000,"psram_sck", false,-1);
    tracep->declBit(c+1001,"psram_ce_n", false,-1);
    tracep->declBus(c+872,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1002,"sdram_clk", false,-1);
    tracep->declBit(c+12,"sdram_cke", false,-1);
    tracep->declBit(c+13,"sdram_cs", false,-1);
    tracep->declBit(c+14,"sdram_ras", false,-1);
    tracep->declBit(c+15,"sdram_cas", false,-1);
    tracep->declBit(c+16,"sdram_we", false,-1);
    tracep->declBus(c+17,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+18,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+19,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+20,"sdram_dq", false,-1, 15,0);
    tracep->declBus(c+979,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+980,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+981,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+982,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+983,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+984,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+985,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+986,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+987,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+988,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+989,"ps2_clk", false,-1);
    tracep->declBit(c+990,"ps2_data", false,-1);
    tracep->declBus(c+991,"vga_r", false,-1, 7,0);
    tracep->declBus(c+992,"vga_g", false,-1, 7,0);
    tracep->declBus(c+993,"vga_b", false,-1, 7,0);
    tracep->declBit(c+994,"vga_hsync", false,-1);
    tracep->declBit(c+995,"vga_vsync", false,-1);
    tracep->declBit(c+996,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBus(c+839,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+165,"in_psel", false,-1);
    tracep->declBit(c+166,"in_penable", false,-1);
    tracep->declBus(c+1024,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+167,"in_pwrite", false,-1);
    tracep->declBus(c+168,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+169,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+873,"in_pready", false,-1);
    tracep->declBus(c+874,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+840,"in_pslverr", false,-1);
    tracep->declBus(c+839,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+165,"out_psel", false,-1);
    tracep->declBit(c+166,"out_penable", false,-1);
    tracep->declBus(c+1024,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+167,"out_pwrite", false,-1);
    tracep->declBus(c+168,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+169,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+873,"out_pready", false,-1);
    tracep->declBus(c+874,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+840,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+165,"auto_in_psel", false,-1);
    tracep->declBit(c+166,"auto_in_penable", false,-1);
    tracep->declBit(c+167,"auto_in_pwrite", false,-1);
    tracep->declBus(c+839,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1024,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+168,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+169,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+873,"auto_in_pready", false,-1);
    tracep->declBit(c+840,"auto_in_pslverr", false,-1);
    tracep->declBus(c+874,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+690,"auto_out_6_psel", false,-1);
    tracep->declBit(c+691,"auto_out_6_penable", false,-1);
    tracep->declBit(c+167,"auto_out_6_pwrite", false,-1);
    tracep->declBus(c+839,"auto_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1024,"auto_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+168,"auto_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+169,"auto_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+752,"auto_out_6_pready", false,-1);
    tracep->declBit(c+1025,"auto_out_6_pslverr", false,-1);
    tracep->declBus(c+21,"auto_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+692,"auto_out_5_psel", false,-1);
    tracep->declBit(c+693,"auto_out_5_penable", false,-1);
    tracep->declBit(c+167,"auto_out_5_pwrite", false,-1);
    tracep->declBus(c+841,"auto_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1024,"auto_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+168,"auto_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+169,"auto_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1026,"auto_out_5_pready", false,-1);
    tracep->declBit(c+1027,"auto_out_5_pslverr", false,-1);
    tracep->declBus(c+1028,"auto_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+694,"auto_out_4_psel", false,-1);
    tracep->declBit(c+695,"auto_out_4_penable", false,-1);
    tracep->declBit(c+167,"auto_out_4_pwrite", false,-1);
    tracep->declBus(c+842,"auto_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1024,"auto_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+168,"auto_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+169,"auto_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1029,"auto_out_4_pready", false,-1);
    tracep->declBit(c+1030,"auto_out_4_pslverr", false,-1);
    tracep->declBus(c+1031,"auto_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+696,"auto_out_3_psel", false,-1);
    tracep->declBit(c+697,"auto_out_3_penable", false,-1);
    tracep->declBit(c+167,"auto_out_3_pwrite", false,-1);
    tracep->declBus(c+842,"auto_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1024,"auto_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+168,"auto_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+169,"auto_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1032,"auto_out_3_pready", false,-1);
    tracep->declBit(c+1033,"auto_out_3_pslverr", false,-1);
    tracep->declBus(c+1034,"auto_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+843,"auto_out_2_psel", false,-1);
    tracep->declBit(c+698,"auto_out_2_penable", false,-1);
    tracep->declBit(c+167,"auto_out_2_pwrite", false,-1);
    tracep->declBus(c+839,"auto_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1024,"auto_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+168,"auto_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+169,"auto_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1003,"auto_out_2_pready", false,-1);
    tracep->declBit(c+1025,"auto_out_2_pslverr", false,-1);
    tracep->declBus(c+170,"auto_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+844,"auto_out_1_psel", false,-1);
    tracep->declBit(c+845,"auto_out_1_penable", false,-1);
    tracep->declBit(c+167,"auto_out_1_pwrite", false,-1);
    tracep->declBus(c+842,"auto_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1024,"auto_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+168,"auto_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+169,"auto_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+846,"auto_out_1_pready", false,-1);
    tracep->declBit(c+1025,"auto_out_1_pslverr", false,-1);
    tracep->declBus(c+1004,"auto_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+847,"auto_out_0_psel", false,-1);
    tracep->declBit(c+699,"auto_out_0_penable", false,-1);
    tracep->declBit(c+167,"auto_out_0_pwrite", false,-1);
    tracep->declBus(c+841,"auto_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1024,"auto_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+168,"auto_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+169,"auto_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1005,"auto_out_0_pready", false,-1);
    tracep->declBit(c+1025,"auto_out_0_pslverr", false,-1);
    tracep->declBus(c+1006,"auto_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+848,"sel_0", false,-1);
    tracep->declBit(c+849,"sel_1", false,-1);
    tracep->declBit(c+850,"sel_2", false,-1);
    tracep->declBit(c+851,"sel_3", false,-1);
    tracep->declBit(c+852,"sel_4", false,-1);
    tracep->declBit(c+853,"sel_5", false,-1);
    tracep->declBit(c+854,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+171,"auto_in_awready", false,-1);
    tracep->declBit(c+172,"auto_in_awvalid", false,-1);
    tracep->declBus(c+173,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+174,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+175,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+171,"auto_in_wready", false,-1);
    tracep->declBit(c+176,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+177,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+179,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+875,"auto_in_bready", false,-1);
    tracep->declBit(c+876,"auto_in_bvalid", false,-1);
    tracep->declBus(c+180,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+700,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+181,"auto_in_arready", false,-1);
    tracep->declBit(c+182,"auto_in_arvalid", false,-1);
    tracep->declBus(c+183,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+184,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+185,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+877,"auto_in_rready", false,-1);
    tracep->declBit(c+878,"auto_in_rvalid", false,-1);
    tracep->declBus(c+186,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+701,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+700,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+165,"auto_out_psel", false,-1);
    tracep->declBit(c+166,"auto_out_penable", false,-1);
    tracep->declBit(c+167,"auto_out_pwrite", false,-1);
    tracep->declBus(c+839,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+168,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+169,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+873,"auto_out_pready", false,-1);
    tracep->declBit(c+840,"auto_out_pslverr", false,-1);
    tracep->declBus(c+874,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+166,"nodeOut_penable", false,-1);
    tracep->declBus(c+187,"state", false,-1, 1,0);
    tracep->declBit(c+181,"accept_read", false,-1);
    tracep->declBit(c+171,"accept_write", false,-1);
    tracep->declBit(c+188,"is_write_r", false,-1);
    tracep->declBit(c+167,"is_write", false,-1);
    tracep->declBus(c+186,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+180,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+189,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+190,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+191,"awaddr_reg", false,-1, 31,0);
    tracep->declQuad(c+192,"wdata_reg_r", false,-1, 63,0);
    tracep->declQuad(c+194,"wdata_reg", false,-1, 63,0);
    tracep->declBus(c+196,"wstrb_reg_r", false,-1, 7,0);
    tracep->declBus(c+197,"wstrb_reg", false,-1, 7,0);
    tracep->declBus(c+855,"resp", false,-1, 1,0);
    tracep->declBus(c+198,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+700,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+878,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+199,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+876,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+200,"auto_in_awready", false,-1);
    tracep->declBit(c+201,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1035,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+202,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1036,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+203,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1037,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+204,"auto_in_wready", false,-1);
    tracep->declBit(c+205,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+206,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+208,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+209,"auto_in_wlast", false,-1);
    tracep->declBit(c+210,"auto_in_bready", false,-1);
    tracep->declBit(c+879,"auto_in_bvalid", false,-1);
    tracep->declBus(c+880,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+703,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+211,"auto_in_arready", false,-1);
    tracep->declBit(c+212,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1035,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+213,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1036,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+214,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1037,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+215,"auto_in_rready", false,-1);
    tracep->declBit(c+881,"auto_in_rvalid", false,-1);
    tracep->declBus(c+882,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+704,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+1007,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+883,"auto_in_rlast", false,-1);
    tracep->declBit(c+884,"auto_out_awready", false,-1);
    tracep->declBit(c+216,"auto_out_awvalid", false,-1);
    tracep->declBus(c+173,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+174,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+175,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+217,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+885,"auto_out_wready", false,-1);
    tracep->declBit(c+218,"auto_out_wvalid", false,-1);
    tracep->declQuad(c+177,"auto_out_wdata", false,-1, 63,0);
    tracep->declBus(c+179,"auto_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+219,"auto_out_wlast", false,-1);
    tracep->declBit(c+886,"auto_out_bready", false,-1);
    tracep->declBit(c+887,"auto_out_bvalid", false,-1);
    tracep->declBus(c+880,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+888,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+889,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+890,"auto_out_arready", false,-1);
    tracep->declBit(c+220,"auto_out_arvalid", false,-1);
    tracep->declBus(c+183,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+184,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+185,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+221,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+215,"auto_out_rready", false,-1);
    tracep->declBit(c+881,"auto_out_rvalid", false,-1);
    tracep->declBus(c+882,"auto_out_rid", false,-1, 3,0);
    tracep->declQuad(c+704,"auto_out_rdata", false,-1, 63,0);
    tracep->declBus(c+1007,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+706,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+891,"auto_out_rlast", false,-1);
    tracep->declBit(c+218,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+222,"w_idle", false,-1);
    tracep->declBit(c+892,"in_awready", false,-1);
    tracep->declBit(c+223,"busy", false,-1);
    tracep->declBus(c+224,"r_addr", false,-1, 31,0);
    tracep->declBus(c+225,"r_len", false,-1, 7,0);
    tracep->declBus(c+226,"len", false,-1, 7,0);
    tracep->declBus(c+227,"addr", false,-1, 31,0);
    tracep->declBit(c+228,"busy_1", false,-1);
    tracep->declBus(c+229,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+230,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+231,"len_1", false,-1, 7,0);
    tracep->declBus(c+232,"addr_1", false,-1, 31,0);
    tracep->declBit(c+233,"wbeats_latched", false,-1);
    tracep->declBit(c+216,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+234,"wbeats_valid", false,-1);
    tracep->declBus(c+235,"w_counter", false,-1, 8,0);
    tracep->declBus(c+236,"w_todo", false,-1, 8,0);
    tracep->declBit(c+219,"w_last", false,-1);
    tracep->declBit(c+886,"nodeOut_bready", false,-1);
    tracep->declBus(c+237,"error_0", false,-1, 1,0);
    tracep->declBus(c+238,"error_1", false,-1, 1,0);
    tracep->declBus(c+239,"error_2", false,-1, 1,0);
    tracep->declBus(c+240,"error_3", false,-1, 1,0);
    tracep->declBus(c+241,"error_4", false,-1, 1,0);
    tracep->declBus(c+242,"error_5", false,-1, 1,0);
    tracep->declBus(c+243,"error_6", false,-1, 1,0);
    tracep->declBus(c+244,"error_7", false,-1, 1,0);
    tracep->declBus(c+245,"error_8", false,-1, 1,0);
    tracep->declBus(c+246,"error_9", false,-1, 1,0);
    tracep->declBus(c+247,"error_10", false,-1, 1,0);
    tracep->declBus(c+248,"error_11", false,-1, 1,0);
    tracep->declBus(c+249,"error_12", false,-1, 1,0);
    tracep->declBus(c+250,"error_13", false,-1, 1,0);
    tracep->declBus(c+251,"error_14", false,-1, 1,0);
    tracep->declBus(c+252,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+211,"io_enq_ready", false,-1);
    tracep->declBit(c+212,"io_enq_valid", false,-1);
    tracep->declBus(c+1035,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+213,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1036,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+214,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1037,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+893,"io_deq_ready", false,-1);
    tracep->declBit(c+220,"io_deq_valid", false,-1);
    tracep->declBus(c+183,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+253,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+254,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+185,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+255,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+256,"ram", false,-1, 48,0);
    tracep->declBit(c+258,"full", false,-1);
    tracep->declBit(c+220,"io_deq_valid_0", false,-1);
    tracep->declBit(c+894,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+200,"io_enq_ready", false,-1);
    tracep->declBit(c+201,"io_enq_valid", false,-1);
    tracep->declBus(c+1035,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+202,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1036,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+203,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1037,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+895,"io_deq_ready", false,-1);
    tracep->declBit(c+259,"io_deq_valid", false,-1);
    tracep->declBus(c+173,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+260,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+261,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+175,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+262,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+263,"ram", false,-1, 48,0);
    tracep->declBit(c+265,"full", false,-1);
    tracep->declBit(c+259,"io_deq_valid_0", false,-1);
    tracep->declBit(c+896,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+204,"io_enq_ready", false,-1);
    tracep->declBit(c+205,"io_enq_valid", false,-1);
    tracep->declQuad(c+206,"io_enq_bits_data", false,-1, 63,0);
    tracep->declBus(c+208,"io_enq_bits_strb", false,-1, 7,0);
    tracep->declBit(c+209,"io_enq_bits_last", false,-1);
    tracep->declBit(c+897,"io_deq_ready", false,-1);
    tracep->declBit(c+266,"io_deq_valid", false,-1);
    tracep->declQuad(c+177,"io_deq_bits_data", false,-1, 63,0);
    tracep->declBus(c+179,"io_deq_bits_strb", false,-1, 7,0);
    tracep->declBit(c+267,"io_deq_bits_last", false,-1);
    tracep->declArray(c+268,"ram", false,-1, 72,0);
    tracep->declBit(c+271,"full", false,-1);
    tracep->declBit(c+266,"io_deq_valid_0", false,-1);
    tracep->declBit(c+898,"do_enq", false,-1);
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
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+899,"auto_in_awready", false,-1);
    tracep->declBit(c+272,"auto_in_awvalid", false,-1);
    tracep->declBus(c+173,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+273,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+707,"auto_in_wready", false,-1);
    tracep->declBit(c+274,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+177,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+179,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+900,"auto_in_bready", false,-1);
    tracep->declBit(c+275,"auto_in_bvalid", false,-1);
    tracep->declBus(c+276,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+277,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+901,"auto_in_arready", false,-1);
    tracep->declBit(c+278,"auto_in_arvalid", false,-1);
    tracep->declBus(c+183,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+279,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+902,"auto_in_rready", false,-1);
    tracep->declBit(c+280,"auto_in_rvalid", false,-1);
    tracep->declBus(c+281,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+282,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+284,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+901,"nodeIn_arready", false,-1);
    tracep->declBit(c+899,"nodeIn_awready", false,-1);
    tracep->declBit(c+285,"w_sel0", false,-1);
    tracep->declBit(c+275,"w_full", false,-1);
    tracep->declBus(c+276,"w_id", false,-1, 3,0);
    tracep->declBit(c+286,"r_sel1", false,-1);
    tracep->declBit(c+287,"w_sel1", false,-1);
    tracep->declBit(c+280,"r_full", false,-1);
    tracep->declBus(c+281,"r_id", false,-1, 3,0);
    tracep->declBit(c+903,"ren", false,-1);
    tracep->declBit(c+288,"rdata_REG", false,-1);
    tracep->declBus(c+289,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+290,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+291,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+292,"rdata_r3", false,-1, 7,0);
    tracep->declBus(c+293,"rdata_r4", false,-1, 7,0);
    tracep->declBus(c+294,"rdata_r5", false,-1, 7,0);
    tracep->declBus(c+295,"rdata_r6", false,-1, 7,0);
    tracep->declBus(c+296,"rdata_r7", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+297,"R0_addr", false,-1, 9,0);
    tracep->declBit(c+903,"R0_en", false,-1);
    tracep->declBit(c+977,"R0_clk", false,-1);
    tracep->declQuad(c+298,"R0_data", false,-1, 63,0);
    tracep->declBus(c+300,"W0_addr", false,-1, 9,0);
    tracep->declBit(c+904,"W0_en", false,-1);
    tracep->declBit(c+977,"W0_clk", false,-1);
    tracep->declQuad(c+177,"W0_data", false,-1, 63,0);
    tracep->declBus(c+179,"W0_mask", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+200,"auto_in_awready", false,-1);
    tracep->declBit(c+201,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1035,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+202,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1036,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+203,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1037,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+204,"auto_in_wready", false,-1);
    tracep->declBit(c+205,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+206,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+208,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+209,"auto_in_wlast", false,-1);
    tracep->declBit(c+210,"auto_in_bready", false,-1);
    tracep->declBit(c+879,"auto_in_bvalid", false,-1);
    tracep->declBus(c+880,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+703,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+211,"auto_in_arready", false,-1);
    tracep->declBit(c+212,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1035,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+213,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1036,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+214,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1037,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+215,"auto_in_rready", false,-1);
    tracep->declBit(c+881,"auto_in_rvalid", false,-1);
    tracep->declBus(c+882,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+704,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+1007,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+883,"auto_in_rlast", false,-1);
    tracep->declBit(c+200,"auto_out_awready", false,-1);
    tracep->declBit(c+201,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1035,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+202,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1036,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+203,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1037,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+204,"auto_out_wready", false,-1);
    tracep->declBit(c+205,"auto_out_wvalid", false,-1);
    tracep->declQuad(c+206,"auto_out_wdata", false,-1, 63,0);
    tracep->declBus(c+208,"auto_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+209,"auto_out_wlast", false,-1);
    tracep->declBit(c+210,"auto_out_bready", false,-1);
    tracep->declBit(c+879,"auto_out_bvalid", false,-1);
    tracep->declBus(c+880,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+703,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+211,"auto_out_arready", false,-1);
    tracep->declBit(c+212,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1035,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+213,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1036,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+214,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1037,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+215,"auto_out_rready", false,-1);
    tracep->declBit(c+881,"auto_out_rvalid", false,-1);
    tracep->declBus(c+882,"auto_out_rid", false,-1, 3,0);
    tracep->declQuad(c+704,"auto_out_rdata", false,-1, 63,0);
    tracep->declBus(c+1007,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+883,"auto_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+905,"auto_in_awready", false,-1);
    tracep->declBit(c+301,"auto_in_awvalid", false,-1);
    tracep->declBus(c+173,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+174,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+175,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+885,"auto_in_wready", false,-1);
    tracep->declBit(c+218,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+177,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+179,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+219,"auto_in_wlast", false,-1);
    tracep->declBit(c+886,"auto_in_bready", false,-1);
    tracep->declBit(c+887,"auto_in_bvalid", false,-1);
    tracep->declBus(c+880,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+888,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+906,"auto_in_arready", false,-1);
    tracep->declBit(c+302,"auto_in_arvalid", false,-1);
    tracep->declBus(c+183,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+184,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+185,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+215,"auto_in_rready", false,-1);
    tracep->declBit(c+881,"auto_in_rvalid", false,-1);
    tracep->declBus(c+882,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+704,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+1007,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+891,"auto_in_rlast", false,-1);
    tracep->declBit(c+899,"auto_out_2_awready", false,-1);
    tracep->declBit(c+272,"auto_out_2_awvalid", false,-1);
    tracep->declBus(c+173,"auto_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+273,"auto_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+707,"auto_out_2_wready", false,-1);
    tracep->declBit(c+274,"auto_out_2_wvalid", false,-1);
    tracep->declQuad(c+177,"auto_out_2_wdata", false,-1, 63,0);
    tracep->declBus(c+179,"auto_out_2_wstrb", false,-1, 7,0);
    tracep->declBit(c+900,"auto_out_2_bready", false,-1);
    tracep->declBit(c+275,"auto_out_2_bvalid", false,-1);
    tracep->declBus(c+276,"auto_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+277,"auto_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+901,"auto_out_2_arready", false,-1);
    tracep->declBit(c+278,"auto_out_2_arvalid", false,-1);
    tracep->declBus(c+183,"auto_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+279,"auto_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+902,"auto_out_2_rready", false,-1);
    tracep->declBit(c+280,"auto_out_2_rvalid", false,-1);
    tracep->declBus(c+281,"auto_out_2_rid", false,-1, 3,0);
    tracep->declQuad(c+282,"auto_out_2_rdata", false,-1, 63,0);
    tracep->declBus(c+284,"auto_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+303,"auto_out_1_awvalid", false,-1);
    tracep->declBit(c+304,"auto_out_1_wvalid", false,-1);
    tracep->declBit(c+305,"auto_out_1_arready", false,-1);
    tracep->declBit(c+306,"auto_out_1_arvalid", false,-1);
    tracep->declBus(c+183,"auto_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+307,"auto_out_1_araddr", false,-1, 29,0);
    tracep->declBus(c+185,"auto_out_1_arsize", false,-1, 2,0);
    tracep->declBit(c+708,"auto_out_1_rready", false,-1);
    tracep->declBit(c+308,"auto_out_1_rvalid", false,-1);
    tracep->declBus(c+309,"auto_out_1_rid", false,-1, 3,0);
    tracep->declQuad(c+310,"auto_out_1_rdata", false,-1, 63,0);
    tracep->declBit(c+171,"auto_out_0_awready", false,-1);
    tracep->declBit(c+172,"auto_out_0_awvalid", false,-1);
    tracep->declBus(c+173,"auto_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+174,"auto_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+175,"auto_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+171,"auto_out_0_wready", false,-1);
    tracep->declBit(c+176,"auto_out_0_wvalid", false,-1);
    tracep->declQuad(c+177,"auto_out_0_wdata", false,-1, 63,0);
    tracep->declBus(c+179,"auto_out_0_wstrb", false,-1, 7,0);
    tracep->declBit(c+875,"auto_out_0_bready", false,-1);
    tracep->declBit(c+876,"auto_out_0_bvalid", false,-1);
    tracep->declBus(c+180,"auto_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+700,"auto_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+181,"auto_out_0_arready", false,-1);
    tracep->declBit(c+182,"auto_out_0_arvalid", false,-1);
    tracep->declBus(c+183,"auto_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+184,"auto_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+185,"auto_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+877,"auto_out_0_rready", false,-1);
    tracep->declBit(c+878,"auto_out_0_rvalid", false,-1);
    tracep->declBus(c+186,"auto_out_0_rid", false,-1, 3,0);
    tracep->declQuad(c+701,"auto_out_0_rdata", false,-1, 63,0);
    tracep->declBus(c+700,"auto_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+887,"in_0_bvalid", false,-1);
    tracep->declBit(c+881,"in_0_rvalid", false,-1);
    tracep->declBit(c+905,"nodeIn_awready", false,-1);
    tracep->declBit(c+312,"requestARIO_0_0", false,-1);
    tracep->declBit(c+313,"requestARIO_0_1", false,-1);
    tracep->declBit(c+314,"requestARIO_0_2", false,-1);
    tracep->declBit(c+315,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+316,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+317,"requestAWIO_0_2", false,-1);
    tracep->declBit(c+318,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+319,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+320,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+321,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+322,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+323,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+324,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+325,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+326,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+327,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+328,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+329,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+330,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+331,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+332,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+333,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+334,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+335,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+336,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+337,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+338,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+339,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+340,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+341,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+342,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+343,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+344,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+345,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+346,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+347,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+348,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+349,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+350,"latched", false,-1);
    tracep->declBit(c+351,"in_0_awvalid", false,-1);
    tracep->declBit(c+352,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+353,"in_0_wvalid", false,-1);
    tracep->declBit(c+354,"idle_3", false,-1);
    tracep->declBit(c+907,"anyValid", false,-1);
    tracep->declBus(c+908,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+355,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+909,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+910,"prefixOR_1", false,-1);
    tracep->declBit(c+911,"winner_3_1", false,-1);
    tracep->declBit(c+912,"winner_3_2", false,-1);
    tracep->declBit(c+356,"state_3_0", false,-1);
    tracep->declBit(c+357,"state_3_1", false,-1);
    tracep->declBit(c+358,"state_3_2", false,-1);
    tracep->declBit(c+913,"muxState_3_0", false,-1);
    tracep->declBit(c+914,"muxState_3_1", false,-1);
    tracep->declBit(c+915,"muxState_3_2", false,-1);
    tracep->declBit(c+359,"idle_4", false,-1);
    tracep->declBit(c+916,"anyValid_1", false,-1);
    tracep->declBus(c+917,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+360,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+918,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+919,"winner_4_0", false,-1);
    tracep->declBit(c+920,"winner_4_2", false,-1);
    tracep->declBit(c+361,"state_4_0", false,-1);
    tracep->declBit(c+362,"state_4_2", false,-1);
    tracep->declBit(c+921,"muxState_4_0", false,-1);
    tracep->declBit(c+922,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+363,"io_enq_ready", false,-1);
    tracep->declBit(c+352,"io_enq_valid", false,-1);
    tracep->declBus(c+364,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+923,"io_deq_ready", false,-1);
    tracep->declBit(c+365,"io_deq_valid", false,-1);
    tracep->declBus(c+366,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+367,"wrap", false,-1);
    tracep->declBit(c+368,"wrap_1", false,-1);
    tracep->declBit(c+369,"maybe_full", false,-1);
    tracep->declBit(c+370,"ptr_match", false,-1);
    tracep->declBit(c+371,"empty", false,-1);
    tracep->declBit(c+372,"full", false,-1);
    tracep->declBit(c+365,"io_deq_valid_0", false,-1);
    tracep->declBit(c+924,"do_deq", false,-1);
    tracep->declBit(c+925,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+368,"R0_addr", false,-1);
    tracep->declBit(c+1038,"R0_en", false,-1);
    tracep->declBit(c+977,"R0_clk", false,-1);
    tracep->declBus(c+373,"R0_data", false,-1, 2,0);
    tracep->declBit(c+367,"W0_addr", false,-1);
    tracep->declBit(c+925,"W0_en", false,-1);
    tracep->declBit(c+977,"W0_clk", false,-1);
    tracep->declBus(c+364,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+374+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+884,"auto_in_awready", false,-1);
    tracep->declBit(c+216,"auto_in_awvalid", false,-1);
    tracep->declBus(c+173,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+174,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+175,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+217,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+885,"auto_in_wready", false,-1);
    tracep->declBit(c+218,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+177,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+179,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+219,"auto_in_wlast", false,-1);
    tracep->declBit(c+886,"auto_in_bready", false,-1);
    tracep->declBit(c+887,"auto_in_bvalid", false,-1);
    tracep->declBus(c+880,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+888,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+889,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+890,"auto_in_arready", false,-1);
    tracep->declBit(c+220,"auto_in_arvalid", false,-1);
    tracep->declBus(c+183,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+184,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+185,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+221,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+215,"auto_in_rready", false,-1);
    tracep->declBit(c+881,"auto_in_rvalid", false,-1);
    tracep->declBus(c+882,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+704,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+1007,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+706,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+891,"auto_in_rlast", false,-1);
    tracep->declBit(c+905,"auto_out_awready", false,-1);
    tracep->declBit(c+301,"auto_out_awvalid", false,-1);
    tracep->declBus(c+173,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+174,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+175,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+885,"auto_out_wready", false,-1);
    tracep->declBit(c+218,"auto_out_wvalid", false,-1);
    tracep->declQuad(c+177,"auto_out_wdata", false,-1, 63,0);
    tracep->declBus(c+179,"auto_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+219,"auto_out_wlast", false,-1);
    tracep->declBit(c+886,"auto_out_bready", false,-1);
    tracep->declBit(c+887,"auto_out_bvalid", false,-1);
    tracep->declBus(c+880,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+888,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+906,"auto_out_arready", false,-1);
    tracep->declBit(c+302,"auto_out_arvalid", false,-1);
    tracep->declBus(c+183,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+184,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+185,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+215,"auto_out_rready", false,-1);
    tracep->declBit(c+881,"auto_out_rvalid", false,-1);
    tracep->declBus(c+882,"auto_out_rid", false,-1, 3,0);
    tracep->declQuad(c+704,"auto_out_rdata", false,-1, 63,0);
    tracep->declBus(c+1007,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+891,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+376,"io_enq_ready", false,-1);
    tracep->declBit(c+709,"io_enq_valid", false,-1);
    tracep->declBit(c+221,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+926,"io_deq_ready", false,-1);
    tracep->declBit(c+377,"io_deq_valid", false,-1);
    tracep->declBit(c+378,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+378,"ram_real_last", false,-1);
    tracep->declBit(c+377,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+379,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+380,"io_enq_ready", false,-1);
    tracep->declBit(c+710,"io_enq_valid", false,-1);
    tracep->declBit(c+221,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+927,"io_deq_ready", false,-1);
    tracep->declBit(c+381,"io_deq_valid", false,-1);
    tracep->declBit(c+382,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+382,"ram_real_last", false,-1);
    tracep->declBit(c+381,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+383,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+384,"io_enq_ready", false,-1);
    tracep->declBit(c+711,"io_enq_valid", false,-1);
    tracep->declBit(c+221,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+928,"io_deq_ready", false,-1);
    tracep->declBit(c+385,"io_deq_valid", false,-1);
    tracep->declBit(c+386,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+386,"ram_real_last", false,-1);
    tracep->declBit(c+385,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+387,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+388,"io_enq_ready", false,-1);
    tracep->declBit(c+712,"io_enq_valid", false,-1);
    tracep->declBit(c+221,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+929,"io_deq_ready", false,-1);
    tracep->declBit(c+389,"io_deq_valid", false,-1);
    tracep->declBit(c+390,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+390,"ram_real_last", false,-1);
    tracep->declBit(c+389,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+391,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+392,"io_enq_ready", false,-1);
    tracep->declBit(c+713,"io_enq_valid", false,-1);
    tracep->declBit(c+221,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+930,"io_deq_ready", false,-1);
    tracep->declBit(c+393,"io_deq_valid", false,-1);
    tracep->declBit(c+394,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+394,"ram_real_last", false,-1);
    tracep->declBit(c+393,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+395,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+396,"io_enq_ready", false,-1);
    tracep->declBit(c+714,"io_enq_valid", false,-1);
    tracep->declBit(c+221,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+931,"io_deq_ready", false,-1);
    tracep->declBit(c+397,"io_deq_valid", false,-1);
    tracep->declBit(c+398,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+398,"ram_real_last", false,-1);
    tracep->declBit(c+397,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+399,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+400,"io_enq_ready", false,-1);
    tracep->declBit(c+715,"io_enq_valid", false,-1);
    tracep->declBit(c+221,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+932,"io_deq_ready", false,-1);
    tracep->declBit(c+401,"io_deq_valid", false,-1);
    tracep->declBit(c+402,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+402,"ram_real_last", false,-1);
    tracep->declBit(c+401,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+403,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+404,"io_enq_ready", false,-1);
    tracep->declBit(c+716,"io_enq_valid", false,-1);
    tracep->declBit(c+221,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+933,"io_deq_ready", false,-1);
    tracep->declBit(c+405,"io_deq_valid", false,-1);
    tracep->declBit(c+406,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+406,"ram_real_last", false,-1);
    tracep->declBit(c+405,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+407,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+408,"io_enq_ready", false,-1);
    tracep->declBit(c+717,"io_enq_valid", false,-1);
    tracep->declBit(c+217,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+934,"io_deq_ready", false,-1);
    tracep->declBit(c+409,"io_deq_valid", false,-1);
    tracep->declBit(c+410,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+410,"ram_real_last", false,-1);
    tracep->declBit(c+409,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+411,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+412,"io_enq_ready", false,-1);
    tracep->declBit(c+718,"io_enq_valid", false,-1);
    tracep->declBit(c+217,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+935,"io_deq_ready", false,-1);
    tracep->declBit(c+413,"io_deq_valid", false,-1);
    tracep->declBit(c+414,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+414,"ram_real_last", false,-1);
    tracep->declBit(c+413,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+415,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+416,"io_enq_ready", false,-1);
    tracep->declBit(c+719,"io_enq_valid", false,-1);
    tracep->declBit(c+217,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+936,"io_deq_ready", false,-1);
    tracep->declBit(c+417,"io_deq_valid", false,-1);
    tracep->declBit(c+418,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+418,"ram_real_last", false,-1);
    tracep->declBit(c+417,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+419,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+420,"io_enq_ready", false,-1);
    tracep->declBit(c+720,"io_enq_valid", false,-1);
    tracep->declBit(c+217,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+937,"io_deq_ready", false,-1);
    tracep->declBit(c+421,"io_deq_valid", false,-1);
    tracep->declBit(c+422,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+422,"ram_real_last", false,-1);
    tracep->declBit(c+421,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+423,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+424,"io_enq_ready", false,-1);
    tracep->declBit(c+721,"io_enq_valid", false,-1);
    tracep->declBit(c+221,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+938,"io_deq_ready", false,-1);
    tracep->declBit(c+425,"io_deq_valid", false,-1);
    tracep->declBit(c+426,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+426,"ram_real_last", false,-1);
    tracep->declBit(c+425,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+427,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+428,"io_enq_ready", false,-1);
    tracep->declBit(c+722,"io_enq_valid", false,-1);
    tracep->declBit(c+217,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+939,"io_deq_ready", false,-1);
    tracep->declBit(c+429,"io_deq_valid", false,-1);
    tracep->declBit(c+430,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+430,"ram_real_last", false,-1);
    tracep->declBit(c+429,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+431,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+432,"io_enq_ready", false,-1);
    tracep->declBit(c+723,"io_enq_valid", false,-1);
    tracep->declBit(c+217,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+940,"io_deq_ready", false,-1);
    tracep->declBit(c+433,"io_deq_valid", false,-1);
    tracep->declBit(c+434,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+434,"ram_real_last", false,-1);
    tracep->declBit(c+433,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+435,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+436,"io_enq_ready", false,-1);
    tracep->declBit(c+724,"io_enq_valid", false,-1);
    tracep->declBit(c+217,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+941,"io_deq_ready", false,-1);
    tracep->declBit(c+437,"io_deq_valid", false,-1);
    tracep->declBit(c+438,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+438,"ram_real_last", false,-1);
    tracep->declBit(c+437,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+439,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+440,"io_enq_ready", false,-1);
    tracep->declBit(c+725,"io_enq_valid", false,-1);
    tracep->declBit(c+217,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+942,"io_deq_ready", false,-1);
    tracep->declBit(c+441,"io_deq_valid", false,-1);
    tracep->declBit(c+442,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+442,"ram_real_last", false,-1);
    tracep->declBit(c+441,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+443,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+444,"io_enq_ready", false,-1);
    tracep->declBit(c+726,"io_enq_valid", false,-1);
    tracep->declBit(c+217,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+943,"io_deq_ready", false,-1);
    tracep->declBit(c+445,"io_deq_valid", false,-1);
    tracep->declBit(c+446,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+446,"ram_real_last", false,-1);
    tracep->declBit(c+445,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+447,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+448,"io_enq_ready", false,-1);
    tracep->declBit(c+727,"io_enq_valid", false,-1);
    tracep->declBit(c+217,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+944,"io_deq_ready", false,-1);
    tracep->declBit(c+449,"io_deq_valid", false,-1);
    tracep->declBit(c+450,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+450,"ram_real_last", false,-1);
    tracep->declBit(c+449,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+451,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+452,"io_enq_ready", false,-1);
    tracep->declBit(c+728,"io_enq_valid", false,-1);
    tracep->declBit(c+217,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+945,"io_deq_ready", false,-1);
    tracep->declBit(c+453,"io_deq_valid", false,-1);
    tracep->declBit(c+454,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+454,"ram_real_last", false,-1);
    tracep->declBit(c+453,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+455,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+456,"io_enq_ready", false,-1);
    tracep->declBit(c+729,"io_enq_valid", false,-1);
    tracep->declBit(c+217,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+946,"io_deq_ready", false,-1);
    tracep->declBit(c+457,"io_deq_valid", false,-1);
    tracep->declBit(c+458,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+458,"ram_real_last", false,-1);
    tracep->declBit(c+457,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+459,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+460,"io_enq_ready", false,-1);
    tracep->declBit(c+730,"io_enq_valid", false,-1);
    tracep->declBit(c+217,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+947,"io_deq_ready", false,-1);
    tracep->declBit(c+461,"io_deq_valid", false,-1);
    tracep->declBit(c+462,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+462,"ram_real_last", false,-1);
    tracep->declBit(c+461,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+463,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+464,"io_enq_ready", false,-1);
    tracep->declBit(c+731,"io_enq_valid", false,-1);
    tracep->declBit(c+217,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+948,"io_deq_ready", false,-1);
    tracep->declBit(c+465,"io_deq_valid", false,-1);
    tracep->declBit(c+466,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+466,"ram_real_last", false,-1);
    tracep->declBit(c+465,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+467,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+468,"io_enq_ready", false,-1);
    tracep->declBit(c+732,"io_enq_valid", false,-1);
    tracep->declBit(c+221,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+949,"io_deq_ready", false,-1);
    tracep->declBit(c+469,"io_deq_valid", false,-1);
    tracep->declBit(c+470,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+470,"ram_real_last", false,-1);
    tracep->declBit(c+469,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+471,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+472,"io_enq_ready", false,-1);
    tracep->declBit(c+733,"io_enq_valid", false,-1);
    tracep->declBit(c+217,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+950,"io_deq_ready", false,-1);
    tracep->declBit(c+473,"io_deq_valid", false,-1);
    tracep->declBit(c+474,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+474,"ram_real_last", false,-1);
    tracep->declBit(c+473,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+475,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+476,"io_enq_ready", false,-1);
    tracep->declBit(c+734,"io_enq_valid", false,-1);
    tracep->declBit(c+217,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+951,"io_deq_ready", false,-1);
    tracep->declBit(c+477,"io_deq_valid", false,-1);
    tracep->declBit(c+478,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+478,"ram_real_last", false,-1);
    tracep->declBit(c+477,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+479,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+480,"io_enq_ready", false,-1);
    tracep->declBit(c+735,"io_enq_valid", false,-1);
    tracep->declBit(c+221,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+952,"io_deq_ready", false,-1);
    tracep->declBit(c+481,"io_deq_valid", false,-1);
    tracep->declBit(c+482,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+482,"ram_real_last", false,-1);
    tracep->declBit(c+481,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+483,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+484,"io_enq_ready", false,-1);
    tracep->declBit(c+736,"io_enq_valid", false,-1);
    tracep->declBit(c+221,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+953,"io_deq_ready", false,-1);
    tracep->declBit(c+485,"io_deq_valid", false,-1);
    tracep->declBit(c+486,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+486,"ram_real_last", false,-1);
    tracep->declBit(c+485,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+487,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+488,"io_enq_ready", false,-1);
    tracep->declBit(c+737,"io_enq_valid", false,-1);
    tracep->declBit(c+221,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+954,"io_deq_ready", false,-1);
    tracep->declBit(c+489,"io_deq_valid", false,-1);
    tracep->declBit(c+490,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+490,"ram_real_last", false,-1);
    tracep->declBit(c+489,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+491,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+492,"io_enq_ready", false,-1);
    tracep->declBit(c+738,"io_enq_valid", false,-1);
    tracep->declBit(c+221,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+955,"io_deq_ready", false,-1);
    tracep->declBit(c+493,"io_deq_valid", false,-1);
    tracep->declBit(c+494,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+494,"ram_real_last", false,-1);
    tracep->declBit(c+493,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+495,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+496,"io_enq_ready", false,-1);
    tracep->declBit(c+739,"io_enq_valid", false,-1);
    tracep->declBit(c+221,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+956,"io_deq_ready", false,-1);
    tracep->declBit(c+497,"io_deq_valid", false,-1);
    tracep->declBit(c+498,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+498,"ram_real_last", false,-1);
    tracep->declBit(c+497,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+499,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+500,"io_enq_ready", false,-1);
    tracep->declBit(c+740,"io_enq_valid", false,-1);
    tracep->declBit(c+221,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+957,"io_deq_ready", false,-1);
    tracep->declBit(c+501,"io_deq_valid", false,-1);
    tracep->declBit(c+502,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+502,"ram_real_last", false,-1);
    tracep->declBit(c+501,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+503,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+1008,"reset", false,-1);
    tracep->declBit(c+200,"auto_master_out_awready", false,-1);
    tracep->declBit(c+201,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1035,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+202,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1036,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+203,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1037,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+204,"auto_master_out_wready", false,-1);
    tracep->declBit(c+205,"auto_master_out_wvalid", false,-1);
    tracep->declQuad(c+206,"auto_master_out_wdata", false,-1, 63,0);
    tracep->declBus(c+208,"auto_master_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+209,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+210,"auto_master_out_bready", false,-1);
    tracep->declBit(c+879,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+880,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+703,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+211,"auto_master_out_arready", false,-1);
    tracep->declBit(c+212,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1035,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+213,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1036,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+214,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1037,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+215,"auto_master_out_rready", false,-1);
    tracep->declBit(c+881,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+882,"auto_master_out_rid", false,-1, 3,0);
    tracep->declQuad(c+704,"auto_master_out_rdata", false,-1, 63,0);
    tracep->declBus(c+1007,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+883,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+1008,"reset", false,-1);
    tracep->declBit(c+1025,"io_interrupt", false,-1);
    tracep->declBit(c+200,"io_master_awready", false,-1);
    tracep->declBit(c+201,"io_master_awvalid", false,-1);
    tracep->declBus(c+202,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1035,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1036,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+203,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1037,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+204,"io_master_wready", false,-1);
    tracep->declBit(c+205,"io_master_wvalid", false,-1);
    tracep->declQuad(c+206,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+208,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+209,"io_master_wlast", false,-1);
    tracep->declBit(c+210,"io_master_bready", false,-1);
    tracep->declBit(c+879,"io_master_bvalid", false,-1);
    tracep->declBus(c+703,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+880,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+211,"io_master_arready", false,-1);
    tracep->declBit(c+212,"io_master_arvalid", false,-1);
    tracep->declBus(c+213,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1035,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1036,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+214,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1037,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+215,"io_master_rready", false,-1);
    tracep->declBit(c+881,"io_master_rvalid", false,-1);
    tracep->declBus(c+1007,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+704,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+883,"io_master_rlast", false,-1);
    tracep->declBus(c+882,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1039,"io_slave_awready", false,-1);
    tracep->declBit(c+1025,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1040,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1035,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1036,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1041,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1042,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1043,"io_slave_wready", false,-1);
    tracep->declBit(c+1025,"io_slave_wvalid", false,-1);
    tracep->declQuad(c+1044,"io_slave_wdata", false,-1, 63,0);
    tracep->declBus(c+1036,"io_slave_wstrb", false,-1, 7,0);
    tracep->declBit(c+1025,"io_slave_wlast", false,-1);
    tracep->declBit(c+1025,"io_slave_bready", false,-1);
    tracep->declBit(c+1046,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1047,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1048,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1049,"io_slave_arready", false,-1);
    tracep->declBit(c+1025,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1040,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1035,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1036,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1041,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1042,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1025,"io_slave_rready", false,-1);
    tracep->declBit(c+1050,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1051,"io_slave_rresp", false,-1, 1,0);
    tracep->declQuad(c+1052,"io_slave_rdata", false,-1, 63,0);
    tracep->declBit(c+1054,"io_slave_rlast", false,-1);
    tracep->declBus(c+1055,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+504,"ifu_pc", false,-1, 31,0);
    tracep->declBus(c+505,"ifu_inst", false,-1, 31,0);
    tracep->declBus(c+1056,"ifu_inst_t", false,-1, 31,0);
    tracep->declBit(c+506,"ifu_stall", false,-1);
    tracep->declBus(c+507,"jump_pc", false,-1, 31,0);
    tracep->declBit(c+508,"jump_pc_valid", false,-1);
    tracep->declBit(c+958,"stall", false,-1);
    tracep->declBit(c+509,"ifu_r_valid_o", false,-1);
    tracep->declBus(c+510,"ifu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+959,"ifu_r_ready_i", false,-1);
    tracep->declBus(c+960,"ifu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+1036,"ifu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+961,"ifu_r_last_i", false,-1);
    tracep->declBit(c+511,"idu_branch", false,-1);
    tracep->declBit(c+512,"idu_jal", false,-1);
    tracep->declBit(c+513,"idu_jalr", false,-1);
    tracep->declBus(c+514,"idu_rd", false,-1, 4,0);
    tracep->declBit(c+515,"idu_rd_wen", false,-1);
    tracep->declBus(c+516,"idu_rs1", false,-1, 4,0);
    tracep->declBus(c+517,"idu_rs2", false,-1, 4,0);
    tracep->declBus(c+518,"idu_imm", false,-1, 31,0);
    tracep->declBus(c+519,"idu_alu_opt", false,-1, 3,0);
    tracep->declBus(c+520,"idu_src_sel", false,-1, 1,0);
    tracep->declBus(c+521,"idu_lsu_opt", false,-1, 1,0);
    tracep->declBus(c+522,"idu_funct3", false,-1, 2,0);
    tracep->declBus(c+523,"src1", false,-1, 31,0);
    tracep->declBus(c+524,"src2", false,-1, 31,0);
    tracep->declBus(c+1009,"rd_data", false,-1, 31,0);
    tracep->declBit(c+525,"zero_flag", false,-1);
    tracep->declBus(c+526,"exu_result", false,-1, 31,0);
    tracep->declBus(c+1057,"exu_result_t", false,-1, 31,0);
    tracep->declBus(c+741,"lsu_result", false,-1, 31,0);
    tracep->declBit(c+958,"mem_stall", false,-1);
    tracep->declBit(c+962,"lsu_rd_wen", false,-1);
    tracep->declBit(c+527,"lsu_r_valid_o", false,-1);
    tracep->declBus(c+528,"lsu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+742,"lsu_r_ready_i", false,-1);
    tracep->declBus(c+743,"lsu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+529,"lsu_r_size_o", false,-1, 2,0);
    tracep->declBus(c+1036,"lsu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+744,"lsu_r_last_i", false,-1);
    tracep->declBit(c+530,"lsu_w_valid_o", false,-1);
    tracep->declBus(c+202,"lsu_w_addr_o", false,-1, 31,0);
    tracep->declBit(c+204,"lsu_w_ready_i", false,-1);
    tracep->declBus(c+524,"lsu_w_data_o", false,-1, 31,0);
    tracep->declBus(c+203,"lsu_w_size_o", false,-1, 2,0);
    tracep->declBus(c+1036,"lsu_w_len_o", false,-1, 7,0);
    tracep->declBit(c+879,"lsu_w_last_i", false,-1);
    tracep->declBit(c+745,"wbu_rd_wen", false,-1);
    tracep->declBit(c+531,"csr_ecall", false,-1);
    tracep->declBit(c+532,"csr_mret", false,-1);
    tracep->declBus(c+533,"wr_csr_data", false,-1, 31,0);
    tracep->declBus(c+1010,"rd_csr_data", false,-1, 31,0);
    tracep->declBus(c+534,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+535,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+536,"csr_mpec", false,-1, 31,0);
    tracep->pushNamePrefix("axi_arbiter_u0 ");
    tracep->declBit(c+977,"aclk", false,-1);
    tracep->declBit(c+1008,"areset_n", false,-1);
    tracep->declBit(c+509,"ifu_r_valid_i", false,-1);
    tracep->declBus(c+510,"ifu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+959,"ifu_r_ready_o", false,-1);
    tracep->declBus(c+960,"ifu_r_data_o", false,-1, 31,0);
    tracep->declBus(c+1036,"ifu_r_len_i", false,-1, 7,0);
    tracep->declBit(c+961,"ifu_r_last_o", false,-1);
    tracep->declBit(c+527,"lsu_r_valid_i", false,-1);
    tracep->declBus(c+528,"lsu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+742,"lsu_r_ready_o", false,-1);
    tracep->declBus(c+743,"lsu_r_data_o", false,-1, 31,0);
    tracep->declBus(c+529,"lsu_r_size_i", false,-1, 2,0);
    tracep->declBus(c+1036,"lsu_r_len_i", false,-1, 7,0);
    tracep->declBit(c+744,"lsu_r_last_o", false,-1);
    tracep->declBit(c+530,"lsu_w_valid_i", false,-1);
    tracep->declBus(c+202,"lsu_w_addr_i", false,-1, 31,0);
    tracep->declBit(c+204,"lsu_w_ready_o", false,-1);
    tracep->declBus(c+524,"lsu_w_data_i", false,-1, 31,0);
    tracep->declBus(c+203,"lsu_w_size_i", false,-1, 2,0);
    tracep->declBus(c+1036,"lsu_w_len_i", false,-1, 7,0);
    tracep->declBit(c+879,"lsu_w_last_o", false,-1);
    tracep->declBit(c+200,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+201,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+202,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+1035,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+1036,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+203,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+1037,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+204,"axi_w_ready_i", false,-1);
    tracep->declBit(c+205,"axi_w_valid_o", false,-1);
    tracep->declQuad(c+206,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+208,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+209,"axi_w_last_o", false,-1);
    tracep->declBit(c+210,"axi_b_ready_o", false,-1);
    tracep->declBit(c+879,"axi_b_valid_i", false,-1);
    tracep->declBus(c+703,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+880,"axi_b_id_i", false,-1, 3,0);
    tracep->declBit(c+211,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+212,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+213,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+1035,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+1036,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+214,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+1037,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+215,"axi_r_ready_o", false,-1);
    tracep->declBit(c+881,"axi_r_valid_i", false,-1);
    tracep->declBus(c+1007,"axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+704,"axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+883,"axi_r_last_i", false,-1);
    tracep->declBus(c+882,"axi_r_id_i", false,-1, 3,0);
    tracep->declBit(c+537,"cpu_r_valid_o", false,-1);
    tracep->declBus(c+213,"cpu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+881,"cpu_r_ready_i", false,-1);
    tracep->declBus(c+963,"cpu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+214,"cpu_r_size_o", false,-1, 2,0);
    tracep->declBus(c+1036,"cpu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+883,"cpu_r_last_i", false,-1);
    tracep->declBit(c+530,"cpu_w_valid_o", false,-1);
    tracep->declBus(c+202,"cpu_w_addr_o", false,-1, 31,0);
    tracep->declBit(c+204,"cpu_w_ready_i", false,-1);
    tracep->declBus(c+524,"cpu_w_data_o", false,-1, 31,0);
    tracep->declBus(c+203,"cpu_w_size_o", false,-1, 2,0);
    tracep->declBus(c+1036,"cpu_w_len_o", false,-1, 7,0);
    tracep->declBit(c+879,"cpu_w_last_i", false,-1);
    tracep->declBus(c+538,"arbiter_state", false,-1, 1,0);
    tracep->declBus(c+1042,"ARB_IDLE", false,-1, 1,0);
    tracep->declBus(c+1037,"ARB_IFU", false,-1, 1,0);
    tracep->declBus(c+1058,"ARB_LSU", false,-1, 1,0);
    tracep->pushNamePrefix("axi_u0 ");
    tracep->declBit(c+977,"aclk", false,-1);
    tracep->declBit(c+1008,"areset_n", false,-1);
    tracep->declBit(c+537,"cpu_r_valid_i", false,-1);
    tracep->declBus(c+213,"cpu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+881,"cpu_r_ready_o", false,-1);
    tracep->declBus(c+963,"cpu_r_data_o", false,-1, 31,0);
    tracep->declBus(c+214,"cpu_r_size_i", false,-1, 2,0);
    tracep->declBus(c+1036,"cpu_r_len_i", false,-1, 7,0);
    tracep->declBit(c+883,"cpu_r_last_o", false,-1);
    tracep->declBit(c+530,"cpu_w_valid_i", false,-1);
    tracep->declBus(c+202,"cpu_w_addr_i", false,-1, 31,0);
    tracep->declBit(c+204,"cpu_w_ready_o", false,-1);
    tracep->declBus(c+524,"cpu_w_data_i", false,-1, 31,0);
    tracep->declBus(c+203,"cpu_w_size_i", false,-1, 2,0);
    tracep->declBus(c+1036,"cpu_w_len_i", false,-1, 7,0);
    tracep->declBit(c+879,"cpu_w_last_o", false,-1);
    tracep->declBit(c+200,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+201,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+202,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+1035,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+1036,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+203,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+1037,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+204,"axi_w_ready_i", false,-1);
    tracep->declBit(c+205,"axi_w_valid_o", false,-1);
    tracep->declQuad(c+206,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+208,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+209,"axi_w_last_o", false,-1);
    tracep->declBit(c+210,"axi_b_ready_o", false,-1);
    tracep->declBit(c+879,"axi_b_valid_i", false,-1);
    tracep->declBus(c+703,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+880,"axi_b_id_i", false,-1, 3,0);
    tracep->declBit(c+211,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+212,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+213,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+1035,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+1036,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+214,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+1037,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+215,"axi_r_ready_o", false,-1);
    tracep->declBit(c+881,"axi_r_valid_i", false,-1);
    tracep->declBus(c+1007,"axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+704,"axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+883,"axi_r_last_i", false,-1);
    tracep->declBus(c+882,"axi_r_id_i", false,-1, 3,0);
    tracep->declBus(c+539,"axi_w_state", false,-1, 2,0);
    tracep->declBus(c+1041,"AXI_W_IDLE", false,-1, 2,0);
    tracep->declBus(c+1024,"AXI_W_ADDR", false,-1, 2,0);
    tracep->declBus(c+1059,"AXI_W_DATA", false,-1, 2,0);
    tracep->declBus(c+1060,"AXI_W_RESP", false,-1, 2,0);
    tracep->declQuad(c+540,"axi_w_data_t", false,-1, 63,0);
    tracep->declBus(c+542,"axi_w_strb_t", false,-1, 7,0);
    tracep->declBus(c+543,"axi_w_cnt", false,-1, 7,0);
    tracep->declBus(c+544,"axi_r_state", false,-1, 1,0);
    tracep->declBus(c+1042,"AXI_R_IDLE", false,-1, 1,0);
    tracep->declBus(c+1037,"AXI_R_ADDR", false,-1, 1,0);
    tracep->declBus(c+1058,"AXI_R_DATA", false,-1, 1,0);
    tracep->declBus(c+1061,"axi_r_cnt", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csr_u0 ");
    tracep->declBit(c+977,"clk", false,-1);
    tracep->declBit(c+1008,"reset", false,-1);
    tracep->declBus(c+545,"wr_addr", false,-1, 11,0);
    tracep->declBus(c+533,"wr_data", false,-1, 31,0);
    tracep->declBus(c+545,"rd_addr", false,-1, 11,0);
    tracep->declBus(c+1010,"rd_data", false,-1, 31,0);
    tracep->declBit(c+531,"i_csr_ecall", false,-1);
    tracep->declBit(c+532,"i_csr_mret", false,-1);
    tracep->declBus(c+505,"i_inst", false,-1, 31,0);
    tracep->declBus(c+504,"i_pc", false,-1, 31,0);
    tracep->declBus(c+534,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+535,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+536,"o_mpec", false,-1, 31,0);
    tracep->declBus(c+1010,"rd_data_r", false,-1, 31,0);
    tracep->declBit(c+546,"wr_en", false,-1);
    tracep->declBit(c+546,"rd_en", false,-1);
    tracep->declBus(c+547,"wr_data_r", false,-1, 31,0);
    tracep->declBus(c+548,"temp", false,-1, 31,0);
    tracep->declBus(c+534,"o_mstatus_r", false,-1, 31,0);
    tracep->declBus(c+549,"mepc_inst_r", false,-1, 31,0);
    tracep->declBus(c+550,"mcause", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu_u0 ");
    tracep->declBus(c+504,"pc", false,-1, 31,0);
    tracep->declBus(c+523,"src1", false,-1, 31,0);
    tracep->declBus(c+524,"src2", false,-1, 31,0);
    tracep->declBus(c+518,"imm", false,-1, 31,0);
    tracep->declBit(c+511,"branch", false,-1);
    tracep->declBus(c+519,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+520,"src_sel", false,-1, 1,0);
    tracep->declBus(c+522,"funct3", false,-1, 2,0);
    tracep->declBit(c+525,"zero_flag", false,-1);
    tracep->declBus(c+526,"exu_result", false,-1, 31,0);
    tracep->declBus(c+551,"alu_a_data", false,-1, 31,0);
    tracep->declBus(c+552,"alu_b_data", false,-1, 31,0);
    tracep->declBus(c+553,"alu_out_data", false,-1, 31,0);
    tracep->declBit(c+1062,"carry_flag", false,-1);
    tracep->declBit(c+1063,"signed_flag", false,-1);
    tracep->declBus(c+526,"exu_result_r", false,-1, 31,0);
    tracep->pushNamePrefix("ex_alu ");
    tracep->declBus(c+519,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+551,"alu_a_data", false,-1, 31,0);
    tracep->declBus(c+552,"alu_b_data", false,-1, 31,0);
    tracep->declBus(c+553,"alu_out_data", false,-1, 31,0);
    tracep->declBit(c+554,"sub_flag", false,-1);
    tracep->declQuad(c+555,"alu_a_t", false,-1, 32,0);
    tracep->declQuad(c+557,"alu_b_t", false,-1, 32,0);
    tracep->declQuad(c+559,"cin", false,-1, 32,0);
    tracep->declQuad(c+561,"add_out", false,-1, 32,0);
    tracep->declBit(c+563,"top_A", false,-1);
    tracep->declBit(c+564,"top_B", false,-1);
    tracep->declBit(c+565,"top_C", false,-1);
    tracep->declBit(c+566,"sign_flag", false,-1);
    tracep->declBit(c+567,"over_flag", false,-1);
    tracep->declBit(c+568,"carry_flag", false,-1);
    tracep->declBus(c+569,"sra_result", false,-1, 31,0);
    tracep->declBus(c+553,"alu_out_data_r", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu_u0 ");
    tracep->declBus(c+505,"inst", false,-1, 31,0);
    tracep->declBit(c+511,"branch", false,-1);
    tracep->declBit(c+512,"jal", false,-1);
    tracep->declBit(c+513,"jalr", false,-1);
    tracep->declBus(c+514,"rd", false,-1, 4,0);
    tracep->declBit(c+515,"rd_wen", false,-1);
    tracep->declBus(c+516,"rs1", false,-1, 4,0);
    tracep->declBus(c+517,"rs2", false,-1, 4,0);
    tracep->declBus(c+518,"imm", false,-1, 31,0);
    tracep->declBus(c+519,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+520,"src_sel", false,-1, 1,0);
    tracep->declBus(c+521,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+522,"funct3", false,-1, 2,0);
    tracep->declBus(c+570,"opcode", false,-1, 6,0);
    tracep->declBus(c+571,"funct7", false,-1, 6,0);
    tracep->declBus(c+1064,"reg_zero", false,-1, 4,0);
    tracep->pushNamePrefix("id_imm_idu ");
    tracep->declBus(c+505,"inst", false,-1, 31,0);
    tracep->declBus(c+518,"imm", false,-1, 31,0);
    tracep->declBus(c+518,"imm_r", false,-1, 31,0);
    tracep->declBus(c+572,"imm_typeI", false,-1, 31,0);
    tracep->declBus(c+573,"imm_typeU", false,-1, 31,0);
    tracep->declBus(c+574,"imm_typeS", false,-1, 31,0);
    tracep->declBus(c+575,"imm_typeB", false,-1, 31,0);
    tracep->declBus(c+576,"imm_typeJ", false,-1, 31,0);
    tracep->declBus(c+1040,"imm_typeR", false,-1, 31,0);
    tracep->declBus(c+1040,"imm_type_NONE", false,-1, 31,0);
    tracep->pushNamePrefix("id_imm_ext_typeB ");
    tracep->declBus(c+1065,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+577,"imm_in", false,-1, 12,0);
    tracep->declBus(c+575,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeI ");
    tracep->declBus(c+1066,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+578,"imm_in", false,-1, 11,0);
    tracep->declBus(c+572,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeJ ");
    tracep->declBus(c+1067,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+579,"imm_in", false,-1, 20,0);
    tracep->declBus(c+576,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeS ");
    tracep->declBus(c+1066,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+580,"imm_in", false,-1, 11,0);
    tracep->declBus(c+574,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeU ");
    tracep->declBus(c+1068,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+573,"imm_in", false,-1, 31,0);
    tracep->declBus(c+573,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_opt_idu ");
    tracep->declBus(c+570,"opcode", false,-1, 6,0);
    tracep->declBus(c+522,"funct3", false,-1, 2,0);
    tracep->declBus(c+571,"funct7", false,-1, 6,0);
    tracep->declBus(c+519,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+520,"src_sel", false,-1, 1,0);
    tracep->declBus(c+521,"lsu_opt", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu_u0 ");
    tracep->declBit(c+977,"clk", false,-1);
    tracep->declBit(c+1008,"reset", false,-1);
    tracep->declBus(c+507,"jump_pc", false,-1, 31,0);
    tracep->declBit(c+508,"jump_pc_valid", false,-1);
    tracep->declBit(c+958,"stall", false,-1);
    tracep->declBit(c+962,"wbu_stall", false,-1);
    tracep->declBit(c+509,"ifu_r_valid_o", false,-1);
    tracep->declBus(c+510,"ifu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+959,"ifu_r_ready_i", false,-1);
    tracep->declBus(c+960,"ifu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+1036,"ifu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+961,"ifu_r_last_i", false,-1);
    tracep->declBit(c+506,"ifu_stall", false,-1);
    tracep->declBus(c+504,"ifu_pc_o", false,-1, 31,0);
    tracep->declBus(c+505,"ifu_inst_o", false,-1, 31,0);
    tracep->declBus(c+504,"ifu_pc_o_r", false,-1, 31,0);
    tracep->declBus(c+505,"ifu_inst_o_r", false,-1, 31,0);
    tracep->declBus(c+581,"ifu_pc_o_t", false,-1, 31,0);
    tracep->declBus(c+582,"ifu_inst_o_t", false,-1, 31,0);
    tracep->declBus(c+510,"pc", false,-1, 31,0);
    tracep->declBus(c+960,"inst", false,-1, 31,0);
    tracep->declBus(c+1069,"inst_t", false,-1, 31,0);
    tracep->declBit(c+506,"ifu_stall_r", false,-1);
    tracep->declBit(c+583,"flush_inst", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_u0 ");
    tracep->declBit(c+977,"clk", false,-1);
    tracep->declBit(c+1008,"reset", false,-1);
    tracep->declBus(c+523,"src1", false,-1, 31,0);
    tracep->declBus(c+524,"src2", false,-1, 31,0);
    tracep->declBus(c+518,"imm", false,-1, 31,0);
    tracep->declBus(c+521,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+522,"funct3", false,-1, 2,0);
    tracep->declBit(c+506,"ifu_stall", false,-1);
    tracep->declBit(c+527,"lsu_r_valid_o", false,-1);
    tracep->declBus(c+528,"lsu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+742,"lsu_r_ready_i", false,-1);
    tracep->declBus(c+743,"lsu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+529,"lsu_r_size_o", false,-1, 2,0);
    tracep->declBus(c+1036,"lsu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+744,"lsu_r_last_i", false,-1);
    tracep->declBit(c+530,"lsu_w_valid_o", false,-1);
    tracep->declBus(c+202,"lsu_w_addr_o", false,-1, 31,0);
    tracep->declBit(c+204,"lsu_w_ready_i", false,-1);
    tracep->declBus(c+524,"lsu_w_data_o", false,-1, 31,0);
    tracep->declBus(c+203,"lsu_w_size_o", false,-1, 2,0);
    tracep->declBus(c+1036,"lsu_w_len_o", false,-1, 7,0);
    tracep->declBit(c+879,"lsu_w_last_i", false,-1);
    tracep->declBit(c+958,"mem_stall", false,-1);
    tracep->declBit(c+962,"lsu_rd_wen", false,-1);
    tracep->declBus(c+741,"lsu_result", false,-1, 31,0);
    tracep->declBus(c+528,"raddr", false,-1, 31,0);
    tracep->declBus(c+743,"rdata", false,-1, 31,0);
    tracep->declBus(c+584,"rsize", false,-1, 31,0);
    tracep->declBus(c+202,"waddr", false,-1, 31,0);
    tracep->declBus(c+524,"wdata", false,-1, 31,0);
    tracep->declBus(c+585,"wmask", false,-1, 31,0);
    tracep->declBus(c+585,"mask", false,-1, 31,0);
    tracep->declBus(c+741,"lsu_result_r", false,-1, 31,0);
    tracep->declBit(c+527,"ren", false,-1);
    tracep->declBit(c+530,"wen", false,-1);
    tracep->declBit(c+964,"lsu_rd_wen_r", false,-1);
    tracep->declBit(c+965,"lsu_rd_wen_w", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile_u0 ");
    tracep->declBit(c+977,"clk", false,-1);
    tracep->declBit(c+1008,"reset", false,-1);
    tracep->declBus(c+516,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+523,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+517,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+524,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+745,"rd_en", false,-1);
    tracep->declBus(c+514,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+1009,"rd_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+586+i*1,"gpr", true,(i+0), 31,0);
    }
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu_u0 ");
    tracep->declBus(c+521,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+526,"exu_result", false,-1, 31,0);
    tracep->declBus(c+741,"lsu_result", false,-1, 31,0);
    tracep->declBus(c+1010,"csr_result", false,-1, 31,0);
    tracep->declBit(c+962,"lsu_rd_wen", false,-1);
    tracep->declBit(c+618,"idu_rd_wen", false,-1);
    tracep->declBit(c+745,"wbu_rd_wen", false,-1);
    tracep->declBus(c+1009,"wbu_result", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"io_d", false,-1);
    tracep->declBit(c+619,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"io_d", false,-1);
    tracep->declBit(c+619,"io_q", false,-1);
    tracep->declBit(c+619,"sync_0", false,-1);
    tracep->declBit(c+620,"sync_1", false,-1);
    tracep->declBit(c+621,"sync_2", false,-1);
    tracep->declBit(c+622,"sync_3", false,-1);
    tracep->declBit(c+623,"sync_4", false,-1);
    tracep->declBit(c+624,"sync_5", false,-1);
    tracep->declBit(c+625,"sync_6", false,-1);
    tracep->declBit(c+626,"sync_7", false,-1);
    tracep->declBit(c+627,"sync_8", false,-1);
    tracep->declBit(c+628,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+696,"auto_in_psel", false,-1);
    tracep->declBit(c+697,"auto_in_penable", false,-1);
    tracep->declBit(c+167,"auto_in_pwrite", false,-1);
    tracep->declBus(c+842,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1024,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+168,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+169,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1032,"auto_in_pready", false,-1);
    tracep->declBit(c+1033,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1034,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+979,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+980,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+981,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+982,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+983,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+984,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+985,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+986,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+987,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+988,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBus(c+856,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+696,"in_psel", false,-1);
    tracep->declBit(c+697,"in_penable", false,-1);
    tracep->declBus(c+1024,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+167,"in_pwrite", false,-1);
    tracep->declBus(c+168,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+169,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1032,"in_pready", false,-1);
    tracep->declBus(c+1034,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1033,"in_pslverr", false,-1);
    tracep->declBus(c+979,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+980,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+981,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+982,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+983,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+984,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+985,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+986,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+987,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+988,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+694,"auto_in_psel", false,-1);
    tracep->declBit(c+695,"auto_in_penable", false,-1);
    tracep->declBit(c+167,"auto_in_pwrite", false,-1);
    tracep->declBus(c+842,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1024,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+168,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+169,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1029,"auto_in_pready", false,-1);
    tracep->declBit(c+1030,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1031,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+989,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+990,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBus(c+856,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+694,"in_psel", false,-1);
    tracep->declBit(c+695,"in_penable", false,-1);
    tracep->declBus(c+1024,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+167,"in_pwrite", false,-1);
    tracep->declBus(c+168,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+169,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1029,"in_pready", false,-1);
    tracep->declBus(c+1031,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1030,"in_pslverr", false,-1);
    tracep->declBit(c+989,"ps2_clk", false,-1);
    tracep->declBit(c+990,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+303,"auto_in_awvalid", false,-1);
    tracep->declBit(c+304,"auto_in_wvalid", false,-1);
    tracep->declBit(c+305,"auto_in_arready", false,-1);
    tracep->declBit(c+306,"auto_in_arvalid", false,-1);
    tracep->declBus(c+183,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+307,"auto_in_araddr", false,-1, 29,0);
    tracep->declBus(c+185,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+708,"auto_in_rready", false,-1);
    tracep->declBit(c+308,"auto_in_rvalid", false,-1);
    tracep->declBus(c+309,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+310,"auto_in_rdata", false,-1, 63,0);
    tracep->declBit(c+308,"state", false,-1);
    tracep->declQuad(c+310,"nodeIn_rdata_r", false,-1, 63,0);
    tracep->declBus(c+309,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+629,"raddr", false,-1, 31,0);
    tracep->declBit(c+630,"ren", false,-1);
    tracep->declBus(c+631,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+843,"auto_in_psel", false,-1);
    tracep->declBit(c+698,"auto_in_penable", false,-1);
    tracep->declBit(c+167,"auto_in_pwrite", false,-1);
    tracep->declBus(c+839,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1024,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+168,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+169,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1003,"auto_in_pready", false,-1);
    tracep->declBit(c+1025,"auto_in_pslverr", false,-1);
    tracep->declBus(c+170,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1000,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1001,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+872,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBus(c+839,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+843,"in_psel", false,-1);
    tracep->declBit(c+698,"in_penable", false,-1);
    tracep->declBus(c+1024,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+167,"in_pwrite", false,-1);
    tracep->declBus(c+168,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+169,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1003,"in_pready", false,-1);
    tracep->declBus(c+170,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1025,"in_pslverr", false,-1);
    tracep->declBit(c+1000,"qspi_sck", false,-1);
    tracep->declBit(c+1001,"qspi_ce_n", false,-1);
    tracep->declBus(c+872,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+872,"din", false,-1, 3,0);
    tracep->declBus(c+966,"dout", false,-1, 3,0);
    tracep->declBus(c+967,"douten", false,-1, 3,0);
    tracep->declBit(c+1011,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+977,"clk_i", false,-1);
    tracep->declBit(c+978,"rst_i", false,-1);
    tracep->declBus(c+839,"adr_i", false,-1, 31,0);
    tracep->declBus(c+168,"dat_i", false,-1, 31,0);
    tracep->declBus(c+170,"dat_o", false,-1, 31,0);
    tracep->declBus(c+169,"sel_i", false,-1, 3,0);
    tracep->declBit(c+843,"cyc_i", false,-1);
    tracep->declBit(c+843,"stb_i", false,-1);
    tracep->declBit(c+1011,"ack_o", false,-1);
    tracep->declBit(c+167,"we_i", false,-1);
    tracep->declBit(c+1000,"sck", false,-1);
    tracep->declBit(c+1001,"ce_n", false,-1);
    tracep->declBus(c+872,"din", false,-1, 3,0);
    tracep->declBus(c+966,"dout", false,-1, 3,0);
    tracep->declBus(c+967,"douten", false,-1, 3,0);
    tracep->declBus(c+1070,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1071,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+753,"mr_sck", false,-1);
    tracep->declBit(c+22,"mr_ce_n", false,-1);
    tracep->declBus(c+872,"mr_din", false,-1, 3,0);
    tracep->declBus(c+1012,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+754,"mr_doe", false,-1);
    tracep->declBit(c+23,"mw_sck", false,-1);
    tracep->declBit(c+24,"mw_ce_n", false,-1);
    tracep->declBus(c+872,"mw_din", false,-1, 3,0);
    tracep->declBus(c+835,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+25,"mw_doe", false,-1);
    tracep->declBit(c+968,"mr_rd", false,-1);
    tracep->declBit(c+755,"mr_done", false,-1);
    tracep->declBit(c+969,"mw_wr", false,-1);
    tracep->declBit(c+836,"mw_done", false,-1);
    tracep->declBit(c+843,"wb_valid", false,-1);
    tracep->declBit(c+857,"wb_we", false,-1);
    tracep->declBit(c+858,"wb_re", false,-1);
    tracep->declBit(c+26,"state", false,-1);
    tracep->declBit(c+970,"nstate", false,-1);
    tracep->declBus(c+632,"size", false,-1, 2,0);
    tracep->declBus(c+633,"byte0", false,-1, 7,0);
    tracep->declBus(c+634,"byte1", false,-1, 7,0);
    tracep->declBus(c+635,"byte2", false,-1, 7,0);
    tracep->declBus(c+636,"byte3", false,-1, 7,0);
    tracep->declBus(c+637,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+977,"clk", false,-1);
    tracep->declBit(c+1013,"rst_n", false,-1);
    tracep->declBus(c+859,"addr", false,-1, 23,0);
    tracep->declBit(c+968,"rd", false,-1);
    tracep->declBus(c+1072,"size", false,-1, 2,0);
    tracep->declBit(c+755,"done", false,-1);
    tracep->declBus(c+170,"line", false,-1, 31,0);
    tracep->declBit(c+753,"sck", false,-1);
    tracep->declBit(c+22,"ce_n", false,-1);
    tracep->declBus(c+872,"din", false,-1, 3,0);
    tracep->declBus(c+1012,"dout", false,-1, 3,0);
    tracep->declBit(c+754,"douten", false,-1);
    tracep->declBus(c+1070,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1071,"READ", false,-1, 0,0);
    tracep->declBus(c+1073,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+27,"state", false,-1);
    tracep->declBit(c+971,"nstate", false,-1);
    tracep->declBus(c+756,"counter", false,-1, 7,0);
    tracep->declBus(c+28,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+638+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1074,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+757,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+977,"clk", false,-1);
    tracep->declBit(c+1013,"rst_n", false,-1);
    tracep->declBus(c+860,"addr", false,-1, 23,0);
    tracep->declBus(c+637,"line", false,-1, 31,0);
    tracep->declBus(c+632,"size", false,-1, 2,0);
    tracep->declBit(c+969,"wr", false,-1);
    tracep->declBit(c+836,"done", false,-1);
    tracep->declBit(c+23,"sck", false,-1);
    tracep->declBit(c+24,"ce_n", false,-1);
    tracep->declBus(c+872,"din", false,-1, 3,0);
    tracep->declBus(c+835,"dout", false,-1, 3,0);
    tracep->declBit(c+25,"douten", false,-1);
    tracep->declBus(c+1070,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1071,"WRITE", false,-1, 0,0);
    tracep->declBus(c+642,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+29,"state", false,-1);
    tracep->declBit(c+972,"nstate", false,-1);
    tracep->declBus(c+30,"counter", false,-1, 7,0);
    tracep->declBus(c+31,"saddr", false,-1, 23,0);
    tracep->declBus(c+1075,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+690,"auto_in_psel", false,-1);
    tracep->declBit(c+691,"auto_in_penable", false,-1);
    tracep->declBit(c+167,"auto_in_pwrite", false,-1);
    tracep->declBus(c+839,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1024,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+168,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+169,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+752,"auto_in_pready", false,-1);
    tracep->declBit(c+1025,"auto_in_pslverr", false,-1);
    tracep->declBus(c+21,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1002,"sdram_bundle_clk", false,-1);
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
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBus(c+839,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+690,"in_psel", false,-1);
    tracep->declBit(c+691,"in_penable", false,-1);
    tracep->declBus(c+1024,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+167,"in_pwrite", false,-1);
    tracep->declBus(c+168,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+169,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+752,"in_pready", false,-1);
    tracep->declBus(c+21,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1025,"in_pslverr", false,-1);
    tracep->declBit(c+1002,"sdram_clk", false,-1);
    tracep->declBit(c+12,"sdram_cke", false,-1);
    tracep->declBit(c+13,"sdram_cs", false,-1);
    tracep->declBit(c+14,"sdram_ras", false,-1);
    tracep->declBit(c+15,"sdram_cas", false,-1);
    tracep->declBit(c+16,"sdram_we", false,-1);
    tracep->declBus(c+17,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+18,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+19,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+20,"sdram_dq", false,-1, 15,0);
    tracep->declBit(c+32,"sdram_dout_en", false,-1);
    tracep->declBus(c+33,"sdram_dout", false,-1, 15,0);
    tracep->declBus(c+643,"state", false,-1, 1,0);
    tracep->declBit(c+758,"req_accept", false,-1);
    tracep->declBit(c+861,"is_read", false,-1);
    tracep->declBit(c+862,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+977,"clk_i", false,-1);
    tracep->declBit(c+978,"rst_i", false,-1);
    tracep->declBus(c+863,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+861,"inport_rd_i", false,-1);
    tracep->declBus(c+1036,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+839,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+168,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+20,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+758,"inport_accept_o", false,-1);
    tracep->declBit(c+752,"inport_ack_o", false,-1);
    tracep->declBit(c+1025,"inport_error_o", false,-1);
    tracep->declBus(c+21,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1002,"sdram_clk_o", false,-1);
    tracep->declBit(c+12,"sdram_cke_o", false,-1);
    tracep->declBit(c+13,"sdram_cs_o", false,-1);
    tracep->declBit(c+14,"sdram_ras_o", false,-1);
    tracep->declBit(c+15,"sdram_cas_o", false,-1);
    tracep->declBit(c+16,"sdram_we_o", false,-1);
    tracep->declBus(c+19,"sdram_dqm_o", false,-1, 1,0);
    tracep->declBus(c+17,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+18,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+33,"sdram_data_output_o", false,-1, 15,0);
    tracep->declBit(c+32,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1076,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1077,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1078,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1079,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1079,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1079,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1080,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1065,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1081,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1082,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1083,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1080,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1084,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1085,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1086,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1087,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1088,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1089,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1090,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1035,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1091,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1080,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1035,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1090,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1089,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1085,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1087,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1086,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1088,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1084,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1092,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1093,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1094,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1094,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1095,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1094,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1079,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1079,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1096,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+839,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+863,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+861,"ram_rd_w", false,-1);
    tracep->declBit(c+758,"ram_accept_w", false,-1);
    tracep->declBus(c+168,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+21,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+752,"ram_ack_w", false,-1);
    tracep->declBit(c+864,"ram_req_w", false,-1);
    tracep->declBus(c+34,"command_q", false,-1, 3,0);
    tracep->declBus(c+17,"addr_q", false,-1, 12,0);
    tracep->declBus(c+33,"data_q", false,-1, 15,0);
    tracep->declBit(c+35,"data_rd_en_q", false,-1);
    tracep->declBus(c+19,"dqm_q", false,-1, 1,0);
    tracep->declBit(c+12,"cke_q", false,-1);
    tracep->declBus(c+18,"bank_q", false,-1, 1,0);
    tracep->declBus(c+36,"data_buffer_q", false,-1, 15,0);
    tracep->declBus(c+37,"dqm_buffer_q", false,-1, 1,0);
    tracep->declBus(c+20,"sdram_data_in_w", false,-1, 15,0);
    tracep->declBit(c+38,"refresh_q", false,-1);
    tracep->declBus(c+39,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+40+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+759,"state_q", false,-1, 3,0);
    tracep->declBus(c+973,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+974,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+44,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+45,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+865,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+866,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+867,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1080,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+46,"delay_q", false,-1, 3,0);
    tracep->declBus(c+975,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1097,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+47,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+48,"sample_data0_q", false,-1, 15,0);
    tracep->declBus(c+49,"sample_data_q", false,-1, 15,0);
    tracep->declBus(c+50,"idx", false,-1, 31,0);
    tracep->declBus(c+760,"rd_q", false,-1, 3,0);
    tracep->declBit(c+752,"ack_q", false,-1);
    tracep->declArray(c+761,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+847,"auto_in_psel", false,-1);
    tracep->declBit(c+699,"auto_in_penable", false,-1);
    tracep->declBit(c+167,"auto_in_pwrite", false,-1);
    tracep->declBus(c+841,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1024,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+168,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+169,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1005,"auto_in_pready", false,-1);
    tracep->declBit(c+1025,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1006,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+750,"spi_bundle_sck", false,-1);
    tracep->declBus(c+751,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+11,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+999,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1098,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1099,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1100,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBus(c+868,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+847,"in_psel", false,-1);
    tracep->declBit(c+699,"in_penable", false,-1);
    tracep->declBus(c+1024,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+167,"in_pwrite", false,-1);
    tracep->declBus(c+168,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+169,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1005,"in_pready", false,-1);
    tracep->declBus(c+1006,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1025,"in_pslverr", false,-1);
    tracep->declBit(c+750,"spi_sck", false,-1);
    tracep->declBus(c+751,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+11,"spi_mosi", false,-1);
    tracep->declBit(c+999,"spi_miso", false,-1);
    tracep->declBit(c+1101,"spi_irq_out", false,-1);
    tracep->declBus(c+644,"wb_adr_i", false,-1, 31,0);
    tracep->declBus(c+645,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+51,"wb_dat_o", false,-1, 31,0);
    tracep->declBit(c+646,"wb_we_i", false,-1);
    tracep->declBit(c+647,"wb_stb_i", false,-1);
    tracep->declBit(c+648,"wb_cyc_i", false,-1);
    tracep->declBit(c+764,"wb_ack_o", false,-1);
    tracep->declBit(c+765,"wb_int_o", false,-1);
    tracep->declBus(c+649,"wb_sel_i", false,-1, 3,0);
    tracep->declBus(c+650,"spi_state", false,-1, 3,0);
    tracep->declBus(c+1035,"SPI_IDLE", false,-1, 3,0);
    tracep->declBus(c+1090,"SPI_REG", false,-1, 3,0);
    tracep->declBus(c+1089,"SPI_FLASH_TX1", false,-1, 3,0);
    tracep->declBus(c+1085,"SPI_FLASH_TX0", false,-1, 3,0);
    tracep->declBus(c+1087,"SPI_FLASH_SS1", false,-1, 3,0);
    tracep->declBus(c+1086,"SPI_FLASH_CTRL", false,-1, 3,0);
    tracep->declBus(c+1088,"SPI_FLASH_INTT", false,-1, 3,0);
    tracep->declBus(c+1084,"SPI_FLASH_SS0", false,-1, 3,0);
    tracep->declBus(c+1092,"SPI_FLASH_DATA", false,-1, 3,0);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1102,"Tp", false,-1, 31,0);
    tracep->declBit(c+977,"wb_clk_i", false,-1);
    tracep->declBit(c+978,"wb_rst_i", false,-1);
    tracep->declBus(c+651,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+645,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+51,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+649,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+646,"wb_we_i", false,-1);
    tracep->declBit(c+647,"wb_stb_i", false,-1);
    tracep->declBit(c+648,"wb_cyc_i", false,-1);
    tracep->declBit(c+764,"wb_ack_o", false,-1);
    tracep->declBit(c+1025,"wb_err_o", false,-1);
    tracep->declBit(c+765,"wb_int_o", false,-1);
    tracep->declBus(c+751,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+750,"sclk_pad_o", false,-1);
    tracep->declBit(c+11,"mosi_pad_o", false,-1);
    tracep->declBit(c+999,"miso_pad_i", false,-1);
    tracep->declBus(c+766,"divider", false,-1, 15,0);
    tracep->declBus(c+767,"ctrl", false,-1, 13,0);
    tracep->declBus(c+52,"ss", false,-1, 7,0);
    tracep->declBus(c+837,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+53,"rx", false,-1, 127,0);
    tracep->declBit(c+768,"rx_negedge", false,-1);
    tracep->declBit(c+769,"tx_negedge", false,-1);
    tracep->declBus(c+770,"char_len", false,-1, 6,0);
    tracep->declBit(c+771,"go", false,-1);
    tracep->declBit(c+772,"lsb", false,-1);
    tracep->declBit(c+773,"ie", false,-1);
    tracep->declBit(c+774,"ass", false,-1);
    tracep->declBit(c+652,"spi_divider_sel", false,-1);
    tracep->declBit(c+653,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+654,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+655,"spi_ss_sel", false,-1);
    tracep->declBit(c+775,"tip", false,-1);
    tracep->declBit(c+776,"pos_edge", false,-1);
    tracep->declBit(c+57,"neg_edge", false,-1);
    tracep->declBit(c+777,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1102,"Tp", false,-1, 31,0);
    tracep->declBit(c+977,"clk_in", false,-1);
    tracep->declBit(c+978,"rst", false,-1);
    tracep->declBit(c+775,"enable", false,-1);
    tracep->declBit(c+771,"go", false,-1);
    tracep->declBit(c+777,"last_clk", false,-1);
    tracep->declBus(c+766,"divider", false,-1, 15,0);
    tracep->declBit(c+750,"clk_out", false,-1);
    tracep->declBit(c+776,"pos_edge", false,-1);
    tracep->declBit(c+57,"neg_edge", false,-1);
    tracep->declBus(c+778,"cnt", false,-1, 15,0);
    tracep->declBit(c+779,"cnt_zero", false,-1);
    tracep->declBit(c+780,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1102,"Tp", false,-1, 31,0);
    tracep->declBit(c+977,"clk", false,-1);
    tracep->declBit(c+978,"rst", false,-1);
    tracep->declBus(c+656,"latch", false,-1, 3,0);
    tracep->declBus(c+649,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+770,"len", false,-1, 6,0);
    tracep->declBit(c+772,"lsb", false,-1);
    tracep->declBit(c+771,"go", false,-1);
    tracep->declBit(c+776,"pos_edge", false,-1);
    tracep->declBit(c+57,"neg_edge", false,-1);
    tracep->declBit(c+768,"rx_negedge", false,-1);
    tracep->declBit(c+769,"tx_negedge", false,-1);
    tracep->declBit(c+775,"tip", false,-1);
    tracep->declBit(c+777,"last", false,-1);
    tracep->declBus(c+645,"p_in", false,-1, 31,0);
    tracep->declArray(c+53,"p_out", false,-1, 127,0);
    tracep->declBit(c+750,"s_clk", false,-1);
    tracep->declBit(c+999,"s_in", false,-1);
    tracep->declBit(c+11,"s_out", false,-1);
    tracep->declBus(c+781,"cnt", false,-1, 7,0);
    tracep->declArray(c+53,"data", false,-1, 127,0);
    tracep->declBus(c+782,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+783,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+784,"rx_clk", false,-1);
    tracep->declBit(c+785,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+844,"auto_in_psel", false,-1);
    tracep->declBit(c+845,"auto_in_penable", false,-1);
    tracep->declBit(c+167,"auto_in_pwrite", false,-1);
    tracep->declBus(c+842,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1024,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+168,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+169,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+846,"auto_in_pready", false,-1);
    tracep->declBit(c+1025,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1004,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+997,"uart_rx", false,-1);
    tracep->declBit(c+998,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+844,"in_psel", false,-1);
    tracep->declBit(c+845,"in_penable", false,-1);
    tracep->declBus(c+1024,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+846,"in_pready", false,-1);
    tracep->declBit(c+1025,"in_pslverr", false,-1);
    tracep->declBus(c+856,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+167,"in_pwrite", false,-1);
    tracep->declBus(c+1004,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+168,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+169,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+997,"uart_rx", false,-1);
    tracep->declBit(c+998,"uart_tx", false,-1);
    tracep->declBit(c+58,"rtsn", false,-1);
    tracep->declBit(c+1025,"ctsn", false,-1);
    tracep->declBit(c+59,"dtr_pad_o", false,-1);
    tracep->declBit(c+1025,"dsr_pad_i", false,-1);
    tracep->declBit(c+1025,"ri_pad_i", false,-1);
    tracep->declBit(c+1025,"dcd_pad_i", false,-1);
    tracep->declBit(c+60,"interrupt", false,-1);
    tracep->declBit(c+1014,"reg_we", false,-1);
    tracep->declBit(c+1015,"reg_re", false,-1);
    tracep->declBus(c+869,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+870,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+657,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+976,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+61,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+977,"clk", false,-1);
    tracep->declBit(c+978,"wb_rst_i", false,-1);
    tracep->declBus(c+869,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+871,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+976,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1014,"wb_we_i", false,-1);
    tracep->declBit(c+1015,"wb_re_i", false,-1);
    tracep->declBit(c+998,"stx_pad_o", false,-1);
    tracep->declBit(c+997,"srx_pad_i", false,-1);
    tracep->declBus(c+1092,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+61,"rts_pad_o", false,-1);
    tracep->declBit(c+59,"dtr_pad_o", false,-1);
    tracep->declBit(c+60,"int_o", false,-1);
    tracep->declBit(c+786,"enable", false,-1);
    tracep->declBit(c+62,"srx_pad", false,-1);
    tracep->declBus(c+63,"ier", false,-1, 3,0);
    tracep->declBus(c+64,"iir", false,-1, 3,0);
    tracep->declBus(c+65,"fcr", false,-1, 1,0);
    tracep->declBus(c+66,"mcr", false,-1, 4,0);
    tracep->declBus(c+787,"lcr", false,-1, 7,0);
    tracep->declBus(c+67,"msr", false,-1, 7,0);
    tracep->declBus(c+788,"dl", false,-1, 15,0);
    tracep->declBus(c+68,"scratch", false,-1, 7,0);
    tracep->declBit(c+69,"start_dlc", false,-1);
    tracep->declBit(c+70,"lsr_mask_d", false,-1);
    tracep->declBit(c+71,"msi_reset", false,-1);
    tracep->declBus(c+789,"dlc", false,-1, 15,0);
    tracep->declBus(c+72,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+73,"rx_reset", false,-1);
    tracep->declBit(c+790,"tx_reset", false,-1);
    tracep->declBit(c+791,"dlab", false,-1);
    tracep->declBit(c+1038,"cts_pad_i", false,-1);
    tracep->declBit(c+1025,"dsr_pad_i", false,-1);
    tracep->declBit(c+1025,"ri_pad_i", false,-1);
    tracep->declBit(c+1025,"dcd_pad_i", false,-1);
    tracep->declBit(c+74,"loopback", false,-1);
    tracep->declBit(c+1025,"cts", false,-1);
    tracep->declBit(c+1038,"dsr", false,-1);
    tracep->declBit(c+1038,"ri", false,-1);
    tracep->declBit(c+1038,"dcd", false,-1);
    tracep->declBit(c+75,"cts_c", false,-1);
    tracep->declBit(c+76,"dsr_c", false,-1);
    tracep->declBit(c+77,"ri_c", false,-1);
    tracep->declBit(c+78,"dcd_c", false,-1);
    tracep->declBus(c+79,"lsr", false,-1, 7,0);
    tracep->declBit(c+792,"lsr0", false,-1);
    tracep->declBit(c+80,"lsr1", false,-1);
    tracep->declBit(c+81,"lsr2", false,-1);
    tracep->declBit(c+82,"lsr3", false,-1);
    tracep->declBit(c+83,"lsr4", false,-1);
    tracep->declBit(c+793,"lsr5", false,-1);
    tracep->declBit(c+794,"lsr6", false,-1);
    tracep->declBit(c+84,"lsr7", false,-1);
    tracep->declBit(c+85,"lsr0r", false,-1);
    tracep->declBit(c+86,"lsr1r", false,-1);
    tracep->declBit(c+87,"lsr2r", false,-1);
    tracep->declBit(c+88,"lsr3r", false,-1);
    tracep->declBit(c+89,"lsr4r", false,-1);
    tracep->declBit(c+90,"lsr5r", false,-1);
    tracep->declBit(c+91,"lsr6r", false,-1);
    tracep->declBit(c+92,"lsr7r", false,-1);
    tracep->declBit(c+2,"lsr_mask", false,-1);
    tracep->declBit(c+93,"rls_int", false,-1);
    tracep->declBit(c+94,"rda_int", false,-1);
    tracep->declBit(c+95,"ti_int", false,-1);
    tracep->declBit(c+96,"thre_int", false,-1);
    tracep->declBit(c+97,"ms_int", false,-1);
    tracep->declBit(c+795,"tf_push", false,-1);
    tracep->declBit(c+98,"rf_pop", false,-1);
    tracep->declBus(c+1016,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+99,"rf_error_bit", false,-1);
    tracep->declBit(c+80,"rf_overrun", false,-1);
    tracep->declBit(c+796,"rf_push_pulse", false,-1);
    tracep->declBus(c+100,"rf_count", false,-1, 4,0);
    tracep->declBus(c+797,"tf_count", false,-1, 4,0);
    tracep->declBus(c+798,"tstate", false,-1, 2,0);
    tracep->declBus(c+799,"rstate", false,-1, 3,0);
    tracep->declBus(c+101,"counter_t", false,-1, 9,0);
    tracep->declBit(c+102,"thre_set_en", false,-1);
    tracep->declBus(c+103,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+800,"block_value", false,-1, 7,0);
    tracep->declBit(c+801,"serial_out", false,-1);
    tracep->declBit(c+802,"serial_in", false,-1);
    tracep->declBit(c+3,"lsr_mask_condition", false,-1);
    tracep->declBit(c+4,"iir_read", false,-1);
    tracep->declBit(c+5,"msr_read", false,-1);
    tracep->declBit(c+6,"fifo_read", false,-1);
    tracep->declBit(c+7,"fifo_write", false,-1);
    tracep->declBus(c+104,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+105,"lsr0_d", false,-1);
    tracep->declBit(c+106,"lsr1_d", false,-1);
    tracep->declBit(c+107,"lsr2_d", false,-1);
    tracep->declBit(c+108,"lsr3_d", false,-1);
    tracep->declBit(c+109,"lsr4_d", false,-1);
    tracep->declBit(c+110,"lsr5_d", false,-1);
    tracep->declBit(c+111,"lsr6_d", false,-1);
    tracep->declBit(c+112,"lsr7_d", false,-1);
    tracep->declBit(c+113,"rls_int_d", false,-1);
    tracep->declBit(c+114,"thre_int_d", false,-1);
    tracep->declBit(c+115,"ms_int_d", false,-1);
    tracep->declBit(c+116,"ti_int_d", false,-1);
    tracep->declBit(c+117,"rda_int_d", false,-1);
    tracep->declBit(c+118,"rls_int_rise", false,-1);
    tracep->declBit(c+119,"thre_int_rise", false,-1);
    tracep->declBit(c+120,"ms_int_rise", false,-1);
    tracep->declBit(c+121,"ti_int_rise", false,-1);
    tracep->declBit(c+122,"rda_int_rise", false,-1);
    tracep->declBit(c+123,"rls_int_pnd", false,-1);
    tracep->declBit(c+124,"rda_int_pnd", false,-1);
    tracep->declBit(c+125,"thre_int_pnd", false,-1);
    tracep->declBit(c+126,"ms_int_pnd", false,-1);
    tracep->declBit(c+127,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1102,"Tp", false,-1, 31,0);
    tracep->declBus(c+1102,"width", false,-1, 31,0);
    tracep->declBus(c+1071,"init_value", false,-1, 0,0);
    tracep->declBit(c+978,"rst_i", false,-1);
    tracep->declBit(c+977,"clk_i", false,-1);
    tracep->declBit(c+1025,"stage1_rst_i", false,-1);
    tracep->declBit(c+1038,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+997,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+62,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+128,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+977,"clk", false,-1);
    tracep->declBit(c+978,"wb_rst_i", false,-1);
    tracep->declBus(c+787,"lcr", false,-1, 7,0);
    tracep->declBit(c+98,"rf_pop", false,-1);
    tracep->declBit(c+802,"srx_pad_i", false,-1);
    tracep->declBit(c+786,"enable", false,-1);
    tracep->declBit(c+73,"rx_reset", false,-1);
    tracep->declBit(c+2,"lsr_mask", false,-1);
    tracep->declBus(c+101,"counter_t", false,-1, 9,0);
    tracep->declBus(c+100,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1016,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+80,"rf_overrun", false,-1);
    tracep->declBit(c+99,"rf_error_bit", false,-1);
    tracep->declBus(c+799,"rstate", false,-1, 3,0);
    tracep->declBit(c+796,"rf_push_pulse", false,-1);
    tracep->declBus(c+803,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+804,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+805,"rshift", false,-1, 7,0);
    tracep->declBit(c+806,"rparity", false,-1);
    tracep->declBit(c+807,"rparity_error", false,-1);
    tracep->declBit(c+808,"rframing_error", false,-1);
    tracep->declBit(c+129,"rbit_in", false,-1);
    tracep->declBit(c+809,"rparity_xor", false,-1);
    tracep->declBus(c+810,"counter_b", false,-1, 7,0);
    tracep->declBit(c+130,"rf_push_q", false,-1);
    tracep->declBus(c+811,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+812,"rf_push", false,-1);
    tracep->declBit(c+813,"break_error", false,-1);
    tracep->declBit(c+814,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+815,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+816,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+817,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1035,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1090,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1089,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1085,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1087,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1086,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1088,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1084,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1092,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1093,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1103,"sr_push", false,-1, 3,0);
    tracep->declBus(c+818,"toc_value", false,-1, 9,0);
    tracep->declBus(c+819,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1104,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1095,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1080,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1105,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+977,"clk", false,-1);
    tracep->declBit(c+978,"wb_rst_i", false,-1);
    tracep->declBit(c+796,"push", false,-1);
    tracep->declBit(c+98,"pop", false,-1);
    tracep->declBus(c+811,"data_in", false,-1, 10,0);
    tracep->declBit(c+73,"fifo_reset", false,-1);
    tracep->declBit(c+2,"reset_status", false,-1);
    tracep->declBus(c+1016,"data_out", false,-1, 10,0);
    tracep->declBit(c+80,"overrun", false,-1);
    tracep->declBus(c+100,"count", false,-1, 4,0);
    tracep->declBit(c+99,"error_bit", false,-1);
    tracep->declBus(c+1017,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+131+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+820,"top", false,-1, 3,0);
    tracep->declBus(c+147,"bottom", false,-1, 3,0);
    tracep->declBus(c+821,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+148,"word0", false,-1, 2,0);
    tracep->declBus(c+149,"word1", false,-1, 2,0);
    tracep->declBus(c+150,"word2", false,-1, 2,0);
    tracep->declBus(c+151,"word3", false,-1, 2,0);
    tracep->declBus(c+152,"word4", false,-1, 2,0);
    tracep->declBus(c+153,"word5", false,-1, 2,0);
    tracep->declBus(c+154,"word6", false,-1, 2,0);
    tracep->declBus(c+155,"word7", false,-1, 2,0);
    tracep->declBus(c+156,"word8", false,-1, 2,0);
    tracep->declBus(c+157,"word9", false,-1, 2,0);
    tracep->declBus(c+158,"word10", false,-1, 2,0);
    tracep->declBus(c+159,"word11", false,-1, 2,0);
    tracep->declBus(c+160,"word12", false,-1, 2,0);
    tracep->declBus(c+161,"word13", false,-1, 2,0);
    tracep->declBus(c+162,"word14", false,-1, 2,0);
    tracep->declBus(c+163,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1080,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1100,"data_width", false,-1, 31,0);
    tracep->declBus(c+1095,"depth", false,-1, 31,0);
    tracep->declBit(c+977,"clk", false,-1);
    tracep->declBit(c+796,"we", false,-1);
    tracep->declBus(c+820,"a", false,-1, 3,0);
    tracep->declBus(c+147,"dpra", false,-1, 3,0);
    tracep->declBus(c+822,"di", false,-1, 7,0);
    tracep->declBus(c+1017,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+658+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+977,"clk", false,-1);
    tracep->declBit(c+978,"wb_rst_i", false,-1);
    tracep->declBus(c+787,"lcr", false,-1, 7,0);
    tracep->declBit(c+795,"tf_push", false,-1);
    tracep->declBus(c+871,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+786,"enable", false,-1);
    tracep->declBit(c+790,"tx_reset", false,-1);
    tracep->declBit(c+2,"lsr_mask", false,-1);
    tracep->declBit(c+801,"stx_pad_o", false,-1);
    tracep->declBus(c+798,"tstate", false,-1, 2,0);
    tracep->declBus(c+797,"tf_count", false,-1, 4,0);
    tracep->declBus(c+823,"counter", false,-1, 4,0);
    tracep->declBus(c+824,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+825,"shift_out", false,-1, 6,0);
    tracep->declBit(c+826,"stx_o_tmp", false,-1);
    tracep->declBit(c+827,"parity_xor", false,-1);
    tracep->declBit(c+828,"tf_pop", false,-1);
    tracep->declBit(c+829,"bit_out", false,-1);
    tracep->declBus(c+871,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+838,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+164,"tf_overrun", false,-1);
    tracep->declBus(c+1041,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1024,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1059,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1060,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1072,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1106,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1100,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1095,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1080,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1105,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+977,"clk", false,-1);
    tracep->declBit(c+978,"wb_rst_i", false,-1);
    tracep->declBit(c+795,"push", false,-1);
    tracep->declBit(c+828,"pop", false,-1);
    tracep->declBus(c+871,"data_in", false,-1, 7,0);
    tracep->declBit(c+790,"fifo_reset", false,-1);
    tracep->declBit(c+2,"reset_status", false,-1);
    tracep->declBus(c+838,"data_out", false,-1, 7,0);
    tracep->declBit(c+164,"overrun", false,-1);
    tracep->declBus(c+797,"count", false,-1, 4,0);
    tracep->declBus(c+830,"top", false,-1, 3,0);
    tracep->declBus(c+831,"bottom", false,-1, 3,0);
    tracep->declBus(c+832,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1080,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1100,"data_width", false,-1, 31,0);
    tracep->declBus(c+1095,"depth", false,-1, 31,0);
    tracep->declBit(c+977,"clk", false,-1);
    tracep->declBit(c+795,"we", false,-1);
    tracep->declBus(c+830,"a", false,-1, 3,0);
    tracep->declBus(c+831,"dpra", false,-1, 3,0);
    tracep->declBus(c+871,"di", false,-1, 7,0);
    tracep->declBus(c+838,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+674+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBit(c+692,"auto_in_psel", false,-1);
    tracep->declBit(c+693,"auto_in_penable", false,-1);
    tracep->declBit(c+167,"auto_in_pwrite", false,-1);
    tracep->declBus(c+841,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1024,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+168,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+169,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1026,"auto_in_pready", false,-1);
    tracep->declBit(c+1027,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1028,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+991,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+992,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+993,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+994,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+995,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+996,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+977,"clock", false,-1);
    tracep->declBit(c+978,"reset", false,-1);
    tracep->declBus(c+868,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+692,"in_psel", false,-1);
    tracep->declBit(c+693,"in_penable", false,-1);
    tracep->declBus(c+1024,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+167,"in_pwrite", false,-1);
    tracep->declBus(c+168,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+169,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1026,"in_pready", false,-1);
    tracep->declBus(c+1028,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1027,"in_pslverr", false,-1);
    tracep->declBus(c+991,"vga_r", false,-1, 7,0);
    tracep->declBus(c+992,"vga_g", false,-1, 7,0);
    tracep->declBus(c+993,"vga_b", false,-1, 7,0);
    tracep->declBit(c+994,"vga_hsync", false,-1);
    tracep->declBit(c+995,"vga_vsync", false,-1);
    tracep->declBit(c+996,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+750,"sck", false,-1);
    tracep->declBit(c+833,"ss", false,-1);
    tracep->declBit(c+11,"mosi", false,-1);
    tracep->declBit(c+1018,"miso", false,-1);
    tracep->declBus(c+8,"data", false,-1, 7,0);
    tracep->declBus(c+9,"bit_cnt", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+750,"sck", false,-1);
    tracep->declBit(c+834,"ss", false,-1);
    tracep->declBit(c+11,"mosi", false,-1);
    tracep->declBit(c+1019,"miso", false,-1);
    tracep->declBit(c+834,"reset", false,-1);
    tracep->declBus(c+746,"state", false,-1, 2,0);
    tracep->declBus(c+747,"counter", false,-1, 7,0);
    tracep->declBus(c+1020,"cmd", false,-1, 7,0);
    tracep->declBus(c+1021,"addr", false,-1, 23,0);
    tracep->declBus(c+748,"data", false,-1, 31,0);
    tracep->declBit(c+749,"ren", false,-1);
    tracep->declBus(c+10,"rdata", false,-1, 31,0);
    tracep->declBus(c+1022,"raddr", false,-1, 31,0);
    tracep->declBus(c+1023,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+750,"clock", false,-1);
    tracep->declBit(c+749,"valid", false,-1);
    tracep->declBus(c+1020,"cmd", false,-1, 7,0);
    tracep->declBus(c+1022,"addr", false,-1, 31,0);
    tracep->declBus(c+10,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1000,"sck", false,-1);
    tracep->declBit(c+1001,"ce_n", false,-1);
    tracep->declBus(c+872,"dio", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1002,"clk", false,-1);
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
    bufp->fullIData(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullCData(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+58,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                     >> 1U)))));
    bufp->fullBit(oldp+59,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+61,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                  >> 1U))));
    bufp->fullBit(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullCData(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullCData(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+74,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                  >> 4U))));
    bufp->fullBit(oldp+75,((IData)((0x10U != (0x12U 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+76,((IData)((0x11U == (0x11U 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+77,((IData)((0x14U == (0x14U 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+78,((IData)((0x18U == (0x18U 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+79,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+81,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                  >> 1U))));
    bufp->fullBit(oldp+82,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+83,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                  >> 2U))));
    bufp->fullBit(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+99,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                   [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                           [1U] | (
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                   [2U] 
                                                   | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullCData(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullSData(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+102,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+118,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+119,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+120,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+121,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+122,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullBit(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullCData(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullBit(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullBit(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+166,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w),32);
    bufp->fullCData(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullIData(oldp+170,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullBit(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_awvalid));
    bufp->fullCData(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_wvalid));
    bufp->fullQData(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),64);
    bufp->fullCData(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),8);
    bufp->fullCData(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_arvalid));
    bufp->fullCData(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg),32);
    bufp->fullQData(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),64);
    bufp->fullQData(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg),64);
    bufp->fullCData(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),8);
    bufp->fullCData(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg),8);
    bufp->fullCData(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+200,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+201,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state))));
    bufp->fullIData(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_w_addr_o),32);
    bufp->fullCData(oldp+203,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__mask)),3);
    bufp->fullBit(oldp+204,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+205,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state))));
    bufp->fullQData(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata),64);
    bufp->fullCData(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb),8);
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast));
    bufp->fullBit(oldp+210,(((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state)) 
                             | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state)))));
    bufp->fullBit(oldp+211,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+212,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_state))));
    bufp->fullIData(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_addr_o),32);
    bufp->fullCData(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_size_o),3);
    bufp->fullBit(oldp+215,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_state))));
    bufp->fullBit(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+217,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+219,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+221,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+222,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullCData(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullSData(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullCData(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullIData(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullQData(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullQData(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+267,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                    ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram[2U] 
                                       >> 8U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast)))));
    bufp->fullWData(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),73);
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid));
    bufp->fullIData(oldp+273,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+274,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+277,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+278,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+279,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullQData(oldp+282,((((QData)((IData)((0xffU 
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
    bufp->fullCData(oldp+284,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+285,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullCData(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r4),8);
    bufp->fullCData(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r5),8);
    bufp->fullCData(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r6),8);
    bufp->fullCData(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r7),8);
    bufp->fullSData(oldp+297,((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 3U))),10);
    bufp->fullQData(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),64);
    bufp->fullSData(oldp+300,((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 3U))),10);
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+303,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
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
    bufp->fullBit(oldp+304,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 1U))));
    bufp->fullBit(oldp+305,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+306,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+307,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullQData(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),64);
    bufp->fullBit(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+316,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                    | ((0xcU & (8U 
                                                ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                       | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x17U)) 
                                          | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
    bufp->fullBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+363,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullCData(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+376,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+380,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+384,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+388,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+392,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+396,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+400,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+404,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+408,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+412,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+416,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+420,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+424,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+428,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+432,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+436,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+440,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+444,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+448,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+452,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+456,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+460,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+464,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+468,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+472,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+476,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+480,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+484,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+488,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+492,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+496,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+500,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_pc_o_r),32);
    bufp->fullIData(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r),32);
    bufp->fullBit(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_stall_r));
    bufp->fullIData(oldp+507,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_mret)
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
    bufp->fullBit(oldp+508,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_mret) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_ecall) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h15124160__0) 
                                   | (0x67U == (0x7fU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)))))));
    bufp->fullBit(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_r_valid_o));
    bufp->fullIData(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__pc),32);
    bufp->fullBit(oldp+511,((0x63U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r))));
    bufp->fullBit(oldp+512,((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r))));
    bufp->fullBit(oldp+513,((0x67U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r))));
    bufp->fullCData(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_rd),5);
    bufp->fullBit(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_rd_wen));
    bufp->fullCData(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_rs1),5);
    bufp->fullCData(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_rs2),5);
    bufp->fullIData(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r),32);
    bufp->fullCData(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_alu_opt),4);
    bufp->fullCData(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_src_sel),2);
    bufp->fullCData(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt),2);
    bufp->fullCData(oldp+522,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                     >> 0xcU))),3);
    bufp->fullIData(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src1),32);
    bufp->fullIData(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src2),32);
    bufp->fullBit(oldp+525,((1U & (~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__exu_result_r))))));
    bufp->fullIData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__exu_result_r),32);
    bufp->fullBit(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__ren));
    bufp->fullIData(oldp+528,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h623bd169__0
                                : 0U)),32);
    bufp->fullCData(oldp+529,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__rsize)),3);
    bufp->fullBit(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__wen));
    bufp->fullBit(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_ecall));
    bufp->fullBit(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_mret));
    bufp->fullIData(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wr_csr_data),32);
    bufp->fullIData(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                              [0x300U]),32);
    bufp->fullIData(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                              [0x305U]),32);
    bufp->fullIData(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                              [0x341U]),32);
    bufp->fullBit(oldp+537,((1U & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_r_valid_o)
                                    : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state))
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__ren)
                                        : 0U)))));
    bufp->fullCData(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state),2);
    bufp->fullCData(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state),3);
    bufp->fullQData(oldp+540,((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src2))),64);
    bufp->fullCData(oldp+542,(((0U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__mask))
                                ? 1U : ((1U == (7U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__mask))
                                         ? 3U : 0xfU))),8);
    bufp->fullCData(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_cnt),8);
    bufp->fullCData(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_state),2);
    bufp->fullSData(oldp+545,((0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r)),12);
    bufp->fullBit(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__wr_en));
    bufp->fullIData(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__wr_data_r),32);
    bufp->fullIData(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__temp),32);
    bufp->fullIData(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__mepc_inst_r),32);
    bufp->fullIData(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                              [0x342U]),32);
    bufp->fullIData(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data),32);
    bufp->fullIData(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_b_data),32);
    bufp->fullIData(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__alu_out_data_r),32);
    bufp->fullBit(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__sub_flag));
    bufp->fullQData(oldp+555,((((QData)((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data 
                                                 >> 0x1fU))) 
                                << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data)))),33);
    bufp->fullQData(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__alu_b_t),33);
    bufp->fullQData(oldp+559,((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__sub_flag))),33);
    bufp->fullQData(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out),33);
    bufp->fullBit(oldp+563,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data 
                             >> 0x1fU)));
    bufp->fullBit(oldp+564,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__alu_b_t 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+565,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+566,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+567,((1U & VL_REDXOR_64((0x180000000ULL 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out)))));
    bufp->fullBit(oldp+568,((1U & ((((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data 
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
    bufp->fullIData(oldp+569,((IData)(((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data))) 
                                       >> (0x3fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_b_data)))),32);
    bufp->fullCData(oldp+570,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)),7);
    bufp->fullCData(oldp+571,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                               >> 0x19U)),7);
    bufp->fullIData(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_typeI),32);
    bufp->fullIData(oldp+573,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)),32);
    bufp->fullIData(oldp+574,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+575,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
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
    bufp->fullIData(oldp+576,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
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
    bufp->fullSData(oldp+577,(((0x1000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                           >> 0x13U)) 
                               | ((0x800U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                             << 4U)) 
                                  | ((0x7e0U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                >> 0x14U)) 
                                     | (0x1eU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                 >> 7U)))))),13);
    bufp->fullSData(oldp+578,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+579,(((0x100000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                             >> 0xbU)) 
                               | ((0xff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r) 
                                  | ((0x800U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                >> 9U)) 
                                     | (0x7feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                  >> 0x14U)))))),21);
    bufp->fullSData(oldp+580,(((0xfe0U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                           >> 7U)))),12);
    bufp->fullIData(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_pc_o_t),32);
    bufp->fullIData(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_t),32);
    bufp->fullBit(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__flush_inst));
    bufp->fullIData(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__rsize),32);
    bufp->fullIData(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__mask),32);
    bufp->fullIData(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[0]),32);
    bufp->fullIData(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[1]),32);
    bufp->fullIData(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[2]),32);
    bufp->fullIData(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[3]),32);
    bufp->fullIData(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[4]),32);
    bufp->fullIData(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[5]),32);
    bufp->fullIData(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[6]),32);
    bufp->fullIData(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[7]),32);
    bufp->fullIData(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[8]),32);
    bufp->fullIData(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[9]),32);
    bufp->fullIData(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[10]),32);
    bufp->fullIData(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[11]),32);
    bufp->fullIData(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[12]),32);
    bufp->fullIData(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[13]),32);
    bufp->fullIData(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[14]),32);
    bufp->fullIData(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[15]),32);
    bufp->fullIData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[16]),32);
    bufp->fullIData(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[17]),32);
    bufp->fullIData(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[18]),32);
    bufp->fullIData(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[19]),32);
    bufp->fullIData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[20]),32);
    bufp->fullIData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[21]),32);
    bufp->fullIData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[22]),32);
    bufp->fullIData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[23]),32);
    bufp->fullIData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[24]),32);
    bufp->fullIData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[25]),32);
    bufp->fullIData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[26]),32);
    bufp->fullIData(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[27]),32);
    bufp->fullIData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[28]),32);
    bufp->fullIData(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[29]),32);
    bufp->fullIData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[30]),32);
    bufp->fullIData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[31]),32);
    bufp->fullBit(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu_u0__idu_rd_wen));
    bufp->fullBit(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullIData(oldp+629,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+635,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+636,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+637,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                   << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullCData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+642,((0xffU & ((IData)(0xdU) 
                                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                           << 1U)))),8);
    bufp->fullCData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullIData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),32);
    bufp->fullIData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullBit(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullCData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullCData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_state),4);
    bufp->fullCData(oldp+651,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i)),5);
    bufp->fullBit(oldp+652,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i)))));
    bufp->fullBit(oldp+653,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i)))));
    bufp->fullCData(oldp+654,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
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
    bufp->fullBit(oldp+655,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i)))));
    bufp->fullCData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+690,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+691,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+692,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+693,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+694,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+695,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+696,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+697,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+698,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+699,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullCData(oldp+700,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                   << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r))),2);
    bufp->fullQData(oldp+701,((((QData)((IData)(((1U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                  : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((1U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                              ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                              : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))))),64);
    bufp->fullCData(oldp+703,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullQData(oldp+704,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullBit(oldp+706,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+707,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+708,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+709,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+710,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+711,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+712,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+713,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+714,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+715,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+716,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+717,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+718,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+719,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+720,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+721,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+722,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+723,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+724,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+725,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+726,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+727,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+728,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+729,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+730,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+731,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+732,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+733,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+734,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+735,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+736,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+737,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+738,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+739,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+740,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullIData(oldp+741,(((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
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
                                                   ? (IData)(vlSelf->__VdfgTmp_hab970516__0)
                                                   : 0U))
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                  ? 
                                                 (((- (IData)(
                                                              ((2U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                                                               & (IData)(
                                                                         (vlSelf->__VdfgTmp_hab970516__0 
                                                                          >> 0xfU))))) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h56d28e90__0))
                                                  : 
                                                 (((- (IData)(
                                                              ((2U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                                                               & (IData)(
                                                                         (vlSelf->__VdfgTmp_hab970516__0 
                                                                          >> 7U))))) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h56d2889a__0)))))
                                         : 0U))),32);
    bufp->fullBit(oldp+742,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_ready_i))));
    bufp->fullIData(oldp+743,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state))
                                ? (IData)(vlSelf->__VdfgTmp_hab970516__0)
                                : 0U)),32);
    bufp->fullBit(oldp+744,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_last_i))));
    bufp->fullBit(oldp+745,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu_u0__idu_rd_wen)
                              : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu_u0__idu_rd_wen)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rd_wen)))));
    bufp->fullCData(oldp+746,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+747,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullIData(oldp+748,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+749,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+750,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+751,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullBit(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+754,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+755,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullCData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullCData(oldp+757,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+758,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullCData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullWData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullBit(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_int_o));
    bufp->fullSData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullBit(oldp+768,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+769,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+770,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+771,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+772,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+773,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+774,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+777,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+779,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+780,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+782,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullCData(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullSData(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullSData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullBit(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+791,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullCData(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullSData(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+813,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+814,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+815,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+816,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+817,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+819,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+821,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+822,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullCData(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+832,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+833,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                   >> 7U))));
    bufp->fullBit(oldp+834,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullIData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w),32);
    bufp->fullBit(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullIData(oldp+841,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),30);
    bufp->fullIData(oldp+842,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),29);
    bufp->fullBit(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel));
    bufp->fullBit(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel));
    bufp->fullBit(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable));
    bufp->fullBit(oldp+846,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel))));
    bufp->fullBit(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_psel));
    bufp->fullBit(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullCData(oldp+855,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullIData(oldp+856,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullBit(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullIData(oldp+859,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullIData(oldp+860,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullBit(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+865,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                         >> 1U))),13);
    bufp->fullSData(oldp+866,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+867,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                     >> 0xaU))),2);
    bufp->fullIData(oldp+868,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullCData(oldp+869,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),3);
    bufp->fullCData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullCData(oldp+872,((((((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten))) 
                                  | (0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten)))) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0))),4);
    bufp->fullBit(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_bready));
    bufp->fullBit(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_rready));
    bufp->fullBit(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_w_last_i));
    bufp->fullCData(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_ready_i));
    bufp->fullCData(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19),4);
    bufp->fullBit(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_last_i));
    bufp->fullBit(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4));
    bufp->fullBit(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_bready));
    bufp->fullBit(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_rready));
    bufp->fullBit(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__nodeIn_awready));
    bufp->fullBit(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAROI_in_0_arready_T_4));
    bufp->fullBit(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+926,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+927,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+928,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+929,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+930,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+931,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+932,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+933,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+934,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+935,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+936,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+937,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+938,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+939,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+940,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+941,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+942,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+943,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+944,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+945,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+946,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+947,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+948,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+949,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+950,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+951,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+952,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+953,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+954,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+955,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+956,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+957,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__stall));
    bufp->fullBit(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_r_ready_i));
    bufp->fullIData(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__inst),32);
    bufp->fullBit(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_r_last_i));
    bufp->fullBit(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rd_wen));
    bufp->fullIData(oldp+963,((IData)(vlSelf->__VdfgTmp_hab970516__0)),32);
    bufp->fullBit(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__lsu_rd_wen_r));
    bufp->fullBit(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__lsu_rd_wen_w));
    bufp->fullCData(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullCData(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+977,(vlSelf->clock));
    bufp->fullBit(oldp+978,(vlSelf->reset));
    bufp->fullSData(oldp+979,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+980,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+981,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+982,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+983,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+984,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+985,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+986,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+987,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+988,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+989,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+990,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+991,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+992,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+993,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+994,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+995,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+996,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+997,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+998,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+999,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                     & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                     ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                     : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                   >> 0x1fU)))));
    bufp->fullBit(oldp+1000,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))));
    bufp->fullBit(oldp+1001,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n))));
    bufp->fullBit(oldp+1002,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+1003,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel))));
    bufp->fullIData(oldp+1004,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1005,((1U & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_state))
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o)
                                     : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_state))
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o)
                                         : 0U)))));
    bufp->fullIData(oldp+1006,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_state))
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
    bufp->fullCData(oldp+1007,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                         << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r))
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullBit(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullIData(oldp+1009,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
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
                                                      ? (IData)(vlSelf->__VdfgTmp_hab970516__0)
                                                      : 0U))
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                     ? 
                                                    (((- (IData)(
                                                                 ((2U 
                                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                                                                  & (IData)(
                                                                            (vlSelf->__VdfgTmp_hab970516__0 
                                                                             >> 0xfU))))) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h56d28e90__0))
                                                     : 
                                                    (((- (IData)(
                                                                 ((2U 
                                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                                                                  & (IData)(
                                                                            (vlSelf->__VdfgTmp_hab970516__0 
                                                                             >> 7U))))) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h56d2889a__0)))))
                                                  : 0U))))),32);
    bufp->fullIData(oldp+1010,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)
                                 ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__wr_en)
                                          ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                                         [(0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r)]
                                          : 0U))),32);
    bufp->fullBit(oldp+1011,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+1012,((0xfU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+1013,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1016,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullBit(oldp+1018,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullBit(oldp+1019,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullCData(oldp+1020,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1021,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1022,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1023,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+1024,(1U),3);
    bufp->fullBit(oldp+1025,(0U));
    bufp->fullBit(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+1035,(0U),4);
    bufp->fullCData(oldp+1036,(0U),8);
    bufp->fullCData(oldp+1037,(1U),2);
    bufp->fullBit(oldp+1038,(1U));
    bufp->fullBit(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1040,(0U),32);
    bufp->fullCData(oldp+1041,(0U),3);
    bufp->fullCData(oldp+1042,(0U),2);
    bufp->fullBit(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullQData(oldp+1044,(0ULL),64);
    bufp->fullBit(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullQData(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),64);
    bufp->fullBit(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_inst_t),32);
    bufp->fullIData(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_result_t),32);
    bufp->fullCData(oldp+1058,(2U),2);
    bufp->fullCData(oldp+1059,(2U),3);
    bufp->fullCData(oldp+1060,(3U),3);
    bufp->fullCData(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_cnt),8);
    bufp->fullBit(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__carry_flag));
    bufp->fullBit(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__signed_flag));
    bufp->fullCData(oldp+1064,(0U),5);
    bufp->fullIData(oldp+1065,(0xdU),32);
    bufp->fullIData(oldp+1066,(0xcU),32);
    bufp->fullIData(oldp+1067,(0x15U),32);
    bufp->fullIData(oldp+1068,(0x20U),32);
    bufp->fullIData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__inst_t),32);
    bufp->fullBit(oldp+1070,(0U));
    bufp->fullBit(oldp+1071,(1U));
    bufp->fullCData(oldp+1072,(4U),3);
    bufp->fullCData(oldp+1073,(0x1bU),8);
    bufp->fullCData(oldp+1074,(0xebU),8);
    bufp->fullCData(oldp+1075,(0x38U),8);
    bufp->fullIData(oldp+1076,(0x64U),32);
    bufp->fullIData(oldp+1077,(0x18U),32);
    bufp->fullIData(oldp+1078,(9U),32);
    bufp->fullIData(oldp+1079,(2U),32);
    bufp->fullIData(oldp+1080,(4U),32);
    bufp->fullIData(oldp+1081,(0x2000U),32);
    bufp->fullIData(oldp+1082,(0x2710U),32);
    bufp->fullIData(oldp+1083,(0x30cU),32);
    bufp->fullCData(oldp+1084,(7U),4);
    bufp->fullCData(oldp+1085,(3U),4);
    bufp->fullCData(oldp+1086,(5U),4);
    bufp->fullCData(oldp+1087,(4U),4);
    bufp->fullCData(oldp+1088,(6U),4);
    bufp->fullCData(oldp+1089,(2U),4);
    bufp->fullCData(oldp+1090,(1U),4);
    bufp->fullSData(oldp+1091,(0x21U),13);
    bufp->fullCData(oldp+1092,(8U),4);
    bufp->fullCData(oldp+1093,(9U),4);
    bufp->fullIData(oldp+1094,(0xaU),32);
    bufp->fullIData(oldp+1095,(0x10U),32);
    bufp->fullIData(oldp+1096,(6U),32);
    bufp->fullIData(oldp+1097,(0x11U),32);
    bufp->fullIData(oldp+1098,(0x30000000U),32);
    bufp->fullIData(oldp+1099,(0x3fffffffU),32);
    bufp->fullIData(oldp+1100,(8U),32);
    bufp->fullBit(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullIData(oldp+1102,(1U),32);
    bufp->fullCData(oldp+1103,(0xaU),4);
    bufp->fullIData(oldp+1104,(0xbU),32);
    bufp->fullIData(oldp+1105,(5U),32);
    bufp->fullCData(oldp+1106,(5U),3);
}
