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
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBus(c+1012,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1013,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1014,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1015,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1016,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1017,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1018,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1019,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1020,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1021,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1022,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1023,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1024,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1025,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1026,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1027,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1028,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1029,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1030,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1031,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBus(c+1012,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1013,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1014,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1015,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1016,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1017,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1018,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1019,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1020,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1021,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1022,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1023,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1024,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1025,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1026,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1027,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1028,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1029,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1030,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1031,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+765,"spi_sck", false,-1);
    tracep->declBus(c+766,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+11,"spi_mosi", false,-1);
    tracep->declBit(c+1032,"spi_miso", false,-1);
    tracep->declBit(c+1030,"uart_rx", false,-1);
    tracep->declBit(c+1031,"uart_tx", false,-1);
    tracep->declBit(c+904,"psram_sck", false,-1);
    tracep->declBit(c+905,"psram_ce_n", false,-1);
    tracep->declBus(c+1033,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1034,"sdram_clk", false,-1);
    tracep->declBit(c+767,"sdram_cke", false,-1);
    tracep->declBit(c+768,"sdram_cs", false,-1);
    tracep->declBit(c+769,"sdram_ras", false,-1);
    tracep->declBit(c+770,"sdram_cas", false,-1);
    tracep->declBit(c+771,"sdram_we", false,-1);
    tracep->declBus(c+772,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+773,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+774,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+1035,"sdram_dq", false,-1, 15,0);
    tracep->declBus(c+1012,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1013,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1014,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1015,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1016,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1017,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1018,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1019,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1020,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1021,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1022,"ps2_clk", false,-1);
    tracep->declBit(c+1023,"ps2_data", false,-1);
    tracep->declBus(c+1024,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1025,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1026,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1027,"vga_hsync", false,-1);
    tracep->declBit(c+1028,"vga_vsync", false,-1);
    tracep->declBit(c+1029,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBus(c+871,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+159,"in_psel", false,-1);
    tracep->declBit(c+160,"in_penable", false,-1);
    tracep->declBus(c+1063,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+161,"in_pwrite", false,-1);
    tracep->declBus(c+162,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+163,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+906,"in_pready", false,-1);
    tracep->declBus(c+907,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+872,"in_pslverr", false,-1);
    tracep->declBus(c+871,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+159,"out_psel", false,-1);
    tracep->declBit(c+160,"out_penable", false,-1);
    tracep->declBus(c+1063,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+161,"out_pwrite", false,-1);
    tracep->declBus(c+162,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+163,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+906,"out_pready", false,-1);
    tracep->declBus(c+907,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+872,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+159,"auto_in_psel", false,-1);
    tracep->declBit(c+160,"auto_in_penable", false,-1);
    tracep->declBit(c+161,"auto_in_pwrite", false,-1);
    tracep->declBus(c+871,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1063,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+162,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+163,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+906,"auto_in_pready", false,-1);
    tracep->declBit(c+872,"auto_in_pslverr", false,-1);
    tracep->declBus(c+907,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+684,"auto_out_6_psel", false,-1);
    tracep->declBit(c+685,"auto_out_6_penable", false,-1);
    tracep->declBit(c+161,"auto_out_6_pwrite", false,-1);
    tracep->declBus(c+871,"auto_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1063,"auto_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+162,"auto_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+163,"auto_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+775,"auto_out_6_pready", false,-1);
    tracep->declBit(c+1064,"auto_out_6_pslverr", false,-1);
    tracep->declBus(c+12,"auto_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+686,"auto_out_5_psel", false,-1);
    tracep->declBit(c+687,"auto_out_5_penable", false,-1);
    tracep->declBit(c+161,"auto_out_5_pwrite", false,-1);
    tracep->declBus(c+873,"auto_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1063,"auto_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+162,"auto_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+163,"auto_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1065,"auto_out_5_pready", false,-1);
    tracep->declBit(c+1066,"auto_out_5_pslverr", false,-1);
    tracep->declBus(c+1067,"auto_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+688,"auto_out_4_psel", false,-1);
    tracep->declBit(c+689,"auto_out_4_penable", false,-1);
    tracep->declBit(c+161,"auto_out_4_pwrite", false,-1);
    tracep->declBus(c+874,"auto_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1063,"auto_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+162,"auto_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+163,"auto_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1068,"auto_out_4_pready", false,-1);
    tracep->declBit(c+1069,"auto_out_4_pslverr", false,-1);
    tracep->declBus(c+1070,"auto_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+690,"auto_out_3_psel", false,-1);
    tracep->declBit(c+691,"auto_out_3_penable", false,-1);
    tracep->declBit(c+161,"auto_out_3_pwrite", false,-1);
    tracep->declBus(c+874,"auto_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1063,"auto_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+162,"auto_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+163,"auto_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1071,"auto_out_3_pready", false,-1);
    tracep->declBit(c+1072,"auto_out_3_pslverr", false,-1);
    tracep->declBus(c+1073,"auto_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+875,"auto_out_2_psel", false,-1);
    tracep->declBit(c+692,"auto_out_2_penable", false,-1);
    tracep->declBit(c+161,"auto_out_2_pwrite", false,-1);
    tracep->declBus(c+871,"auto_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1063,"auto_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+162,"auto_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+163,"auto_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1036,"auto_out_2_pready", false,-1);
    tracep->declBit(c+1064,"auto_out_2_pslverr", false,-1);
    tracep->declBus(c+164,"auto_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+876,"auto_out_1_psel", false,-1);
    tracep->declBit(c+877,"auto_out_1_penable", false,-1);
    tracep->declBit(c+161,"auto_out_1_pwrite", false,-1);
    tracep->declBus(c+874,"auto_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1063,"auto_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+162,"auto_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+163,"auto_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+878,"auto_out_1_pready", false,-1);
    tracep->declBit(c+1064,"auto_out_1_pslverr", false,-1);
    tracep->declBus(c+1037,"auto_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+879,"auto_out_0_psel", false,-1);
    tracep->declBit(c+693,"auto_out_0_penable", false,-1);
    tracep->declBit(c+161,"auto_out_0_pwrite", false,-1);
    tracep->declBus(c+873,"auto_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1063,"auto_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+162,"auto_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+163,"auto_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1038,"auto_out_0_pready", false,-1);
    tracep->declBit(c+1064,"auto_out_0_pslverr", false,-1);
    tracep->declBus(c+1039,"auto_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+880,"sel_0", false,-1);
    tracep->declBit(c+881,"sel_1", false,-1);
    tracep->declBit(c+882,"sel_2", false,-1);
    tracep->declBit(c+883,"sel_3", false,-1);
    tracep->declBit(c+884,"sel_4", false,-1);
    tracep->declBit(c+885,"sel_5", false,-1);
    tracep->declBit(c+886,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+165,"auto_in_awready", false,-1);
    tracep->declBit(c+166,"auto_in_awvalid", false,-1);
    tracep->declBus(c+167,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+168,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+169,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+165,"auto_in_wready", false,-1);
    tracep->declBit(c+170,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+171,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+173,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+908,"auto_in_bready", false,-1);
    tracep->declBit(c+909,"auto_in_bvalid", false,-1);
    tracep->declBus(c+174,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+694,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+175,"auto_in_arready", false,-1);
    tracep->declBit(c+176,"auto_in_arvalid", false,-1);
    tracep->declBus(c+177,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+178,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+179,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+910,"auto_in_rready", false,-1);
    tracep->declBit(c+911,"auto_in_rvalid", false,-1);
    tracep->declBus(c+180,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+695,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+694,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+159,"auto_out_psel", false,-1);
    tracep->declBit(c+160,"auto_out_penable", false,-1);
    tracep->declBit(c+161,"auto_out_pwrite", false,-1);
    tracep->declBus(c+871,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+162,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+163,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+906,"auto_out_pready", false,-1);
    tracep->declBit(c+872,"auto_out_pslverr", false,-1);
    tracep->declBus(c+907,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+160,"nodeOut_penable", false,-1);
    tracep->declBus(c+181,"state", false,-1, 1,0);
    tracep->declBit(c+175,"accept_read", false,-1);
    tracep->declBit(c+165,"accept_write", false,-1);
    tracep->declBit(c+182,"is_write_r", false,-1);
    tracep->declBit(c+161,"is_write", false,-1);
    tracep->declBus(c+180,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+174,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+183,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+184,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+185,"awaddr_reg", false,-1, 31,0);
    tracep->declQuad(c+186,"wdata_reg_r", false,-1, 63,0);
    tracep->declQuad(c+188,"wdata_reg", false,-1, 63,0);
    tracep->declBus(c+190,"wstrb_reg_r", false,-1, 7,0);
    tracep->declBus(c+191,"wstrb_reg", false,-1, 7,0);
    tracep->declBus(c+887,"resp", false,-1, 1,0);
    tracep->declBus(c+192,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+694,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+911,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+193,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+909,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+194,"auto_in_awready", false,-1);
    tracep->declBit(c+195,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1074,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+196,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1075,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+197,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1076,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+198,"auto_in_wready", false,-1);
    tracep->declBit(c+199,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+200,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+202,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+203,"auto_in_wlast", false,-1);
    tracep->declBit(c+204,"auto_in_bready", false,-1);
    tracep->declBit(c+912,"auto_in_bvalid", false,-1);
    tracep->declBus(c+913,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+697,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+205,"auto_in_arready", false,-1);
    tracep->declBit(c+206,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1074,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+207,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1075,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+208,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1076,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+209,"auto_in_rready", false,-1);
    tracep->declBit(c+914,"auto_in_rvalid", false,-1);
    tracep->declBus(c+915,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+698,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+1040,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+916,"auto_in_rlast", false,-1);
    tracep->declBit(c+917,"auto_out_awready", false,-1);
    tracep->declBit(c+210,"auto_out_awvalid", false,-1);
    tracep->declBus(c+167,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+168,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+169,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+211,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+918,"auto_out_wready", false,-1);
    tracep->declBit(c+212,"auto_out_wvalid", false,-1);
    tracep->declQuad(c+171,"auto_out_wdata", false,-1, 63,0);
    tracep->declBus(c+173,"auto_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+213,"auto_out_wlast", false,-1);
    tracep->declBit(c+919,"auto_out_bready", false,-1);
    tracep->declBit(c+920,"auto_out_bvalid", false,-1);
    tracep->declBus(c+913,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+921,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+922,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+923,"auto_out_arready", false,-1);
    tracep->declBit(c+214,"auto_out_arvalid", false,-1);
    tracep->declBus(c+177,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+178,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+179,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+215,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+209,"auto_out_rready", false,-1);
    tracep->declBit(c+914,"auto_out_rvalid", false,-1);
    tracep->declBus(c+915,"auto_out_rid", false,-1, 3,0);
    tracep->declQuad(c+698,"auto_out_rdata", false,-1, 63,0);
    tracep->declBus(c+1040,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+700,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+924,"auto_out_rlast", false,-1);
    tracep->declBit(c+212,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+216,"w_idle", false,-1);
    tracep->declBit(c+925,"in_awready", false,-1);
    tracep->declBit(c+217,"busy", false,-1);
    tracep->declBus(c+218,"r_addr", false,-1, 31,0);
    tracep->declBus(c+219,"r_len", false,-1, 7,0);
    tracep->declBus(c+220,"len", false,-1, 7,0);
    tracep->declBus(c+221,"addr", false,-1, 31,0);
    tracep->declBit(c+222,"busy_1", false,-1);
    tracep->declBus(c+223,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+224,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+225,"len_1", false,-1, 7,0);
    tracep->declBus(c+226,"addr_1", false,-1, 31,0);
    tracep->declBit(c+227,"wbeats_latched", false,-1);
    tracep->declBit(c+210,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+228,"wbeats_valid", false,-1);
    tracep->declBus(c+229,"w_counter", false,-1, 8,0);
    tracep->declBus(c+230,"w_todo", false,-1, 8,0);
    tracep->declBit(c+213,"w_last", false,-1);
    tracep->declBit(c+919,"nodeOut_bready", false,-1);
    tracep->declBus(c+231,"error_0", false,-1, 1,0);
    tracep->declBus(c+232,"error_1", false,-1, 1,0);
    tracep->declBus(c+233,"error_2", false,-1, 1,0);
    tracep->declBus(c+234,"error_3", false,-1, 1,0);
    tracep->declBus(c+235,"error_4", false,-1, 1,0);
    tracep->declBus(c+236,"error_5", false,-1, 1,0);
    tracep->declBus(c+237,"error_6", false,-1, 1,0);
    tracep->declBus(c+238,"error_7", false,-1, 1,0);
    tracep->declBus(c+239,"error_8", false,-1, 1,0);
    tracep->declBus(c+240,"error_9", false,-1, 1,0);
    tracep->declBus(c+241,"error_10", false,-1, 1,0);
    tracep->declBus(c+242,"error_11", false,-1, 1,0);
    tracep->declBus(c+243,"error_12", false,-1, 1,0);
    tracep->declBus(c+244,"error_13", false,-1, 1,0);
    tracep->declBus(c+245,"error_14", false,-1, 1,0);
    tracep->declBus(c+246,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+205,"io_enq_ready", false,-1);
    tracep->declBit(c+206,"io_enq_valid", false,-1);
    tracep->declBus(c+1074,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+207,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1075,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+208,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1076,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+926,"io_deq_ready", false,-1);
    tracep->declBit(c+214,"io_deq_valid", false,-1);
    tracep->declBus(c+177,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+247,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+248,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+179,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+249,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+250,"ram", false,-1, 48,0);
    tracep->declBit(c+252,"full", false,-1);
    tracep->declBit(c+214,"io_deq_valid_0", false,-1);
    tracep->declBit(c+927,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+194,"io_enq_ready", false,-1);
    tracep->declBit(c+195,"io_enq_valid", false,-1);
    tracep->declBus(c+1074,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+196,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1075,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+197,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1076,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+928,"io_deq_ready", false,-1);
    tracep->declBit(c+253,"io_deq_valid", false,-1);
    tracep->declBus(c+167,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+254,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+255,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+169,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+256,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+257,"ram", false,-1, 48,0);
    tracep->declBit(c+259,"full", false,-1);
    tracep->declBit(c+253,"io_deq_valid_0", false,-1);
    tracep->declBit(c+929,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+198,"io_enq_ready", false,-1);
    tracep->declBit(c+199,"io_enq_valid", false,-1);
    tracep->declQuad(c+200,"io_enq_bits_data", false,-1, 63,0);
    tracep->declBus(c+202,"io_enq_bits_strb", false,-1, 7,0);
    tracep->declBit(c+203,"io_enq_bits_last", false,-1);
    tracep->declBit(c+930,"io_deq_ready", false,-1);
    tracep->declBit(c+260,"io_deq_valid", false,-1);
    tracep->declQuad(c+171,"io_deq_bits_data", false,-1, 63,0);
    tracep->declBus(c+173,"io_deq_bits_strb", false,-1, 7,0);
    tracep->declBit(c+261,"io_deq_bits_last", false,-1);
    tracep->declArray(c+262,"ram", false,-1, 72,0);
    tracep->declBit(c+265,"full", false,-1);
    tracep->declBit(c+260,"io_deq_valid_0", false,-1);
    tracep->declBit(c+931,"do_enq", false,-1);
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
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+932,"auto_in_awready", false,-1);
    tracep->declBit(c+266,"auto_in_awvalid", false,-1);
    tracep->declBus(c+167,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+267,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+701,"auto_in_wready", false,-1);
    tracep->declBit(c+268,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+171,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+173,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+933,"auto_in_bready", false,-1);
    tracep->declBit(c+269,"auto_in_bvalid", false,-1);
    tracep->declBus(c+270,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+271,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+934,"auto_in_arready", false,-1);
    tracep->declBit(c+272,"auto_in_arvalid", false,-1);
    tracep->declBus(c+177,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+273,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+935,"auto_in_rready", false,-1);
    tracep->declBit(c+274,"auto_in_rvalid", false,-1);
    tracep->declBus(c+275,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+276,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+278,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+934,"nodeIn_arready", false,-1);
    tracep->declBit(c+932,"nodeIn_awready", false,-1);
    tracep->declBit(c+279,"w_sel0", false,-1);
    tracep->declBit(c+269,"w_full", false,-1);
    tracep->declBus(c+270,"w_id", false,-1, 3,0);
    tracep->declBit(c+280,"r_sel1", false,-1);
    tracep->declBit(c+281,"w_sel1", false,-1);
    tracep->declBit(c+274,"r_full", false,-1);
    tracep->declBus(c+275,"r_id", false,-1, 3,0);
    tracep->declBit(c+936,"ren", false,-1);
    tracep->declBit(c+282,"rdata_REG", false,-1);
    tracep->declBus(c+283,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+284,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+285,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+286,"rdata_r3", false,-1, 7,0);
    tracep->declBus(c+287,"rdata_r4", false,-1, 7,0);
    tracep->declBus(c+288,"rdata_r5", false,-1, 7,0);
    tracep->declBus(c+289,"rdata_r6", false,-1, 7,0);
    tracep->declBus(c+290,"rdata_r7", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+291,"R0_addr", false,-1, 9,0);
    tracep->declBit(c+936,"R0_en", false,-1);
    tracep->declBit(c+1010,"R0_clk", false,-1);
    tracep->declQuad(c+292,"R0_data", false,-1, 63,0);
    tracep->declBus(c+294,"W0_addr", false,-1, 9,0);
    tracep->declBit(c+937,"W0_en", false,-1);
    tracep->declBit(c+1010,"W0_clk", false,-1);
    tracep->declQuad(c+171,"W0_data", false,-1, 63,0);
    tracep->declBus(c+173,"W0_mask", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+194,"auto_in_awready", false,-1);
    tracep->declBit(c+195,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1074,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+196,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1075,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+197,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1076,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+198,"auto_in_wready", false,-1);
    tracep->declBit(c+199,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+200,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+202,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+203,"auto_in_wlast", false,-1);
    tracep->declBit(c+204,"auto_in_bready", false,-1);
    tracep->declBit(c+912,"auto_in_bvalid", false,-1);
    tracep->declBus(c+913,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+697,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+205,"auto_in_arready", false,-1);
    tracep->declBit(c+206,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1074,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+207,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1075,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+208,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1076,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+209,"auto_in_rready", false,-1);
    tracep->declBit(c+914,"auto_in_rvalid", false,-1);
    tracep->declBus(c+915,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+698,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+1040,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+916,"auto_in_rlast", false,-1);
    tracep->declBit(c+194,"auto_out_awready", false,-1);
    tracep->declBit(c+195,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1074,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+196,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1075,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+197,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1076,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+198,"auto_out_wready", false,-1);
    tracep->declBit(c+199,"auto_out_wvalid", false,-1);
    tracep->declQuad(c+200,"auto_out_wdata", false,-1, 63,0);
    tracep->declBus(c+202,"auto_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+203,"auto_out_wlast", false,-1);
    tracep->declBit(c+204,"auto_out_bready", false,-1);
    tracep->declBit(c+912,"auto_out_bvalid", false,-1);
    tracep->declBus(c+913,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+697,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+205,"auto_out_arready", false,-1);
    tracep->declBit(c+206,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1074,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+207,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1075,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+208,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1076,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+209,"auto_out_rready", false,-1);
    tracep->declBit(c+914,"auto_out_rvalid", false,-1);
    tracep->declBus(c+915,"auto_out_rid", false,-1, 3,0);
    tracep->declQuad(c+698,"auto_out_rdata", false,-1, 63,0);
    tracep->declBus(c+1040,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+916,"auto_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+938,"auto_in_awready", false,-1);
    tracep->declBit(c+295,"auto_in_awvalid", false,-1);
    tracep->declBus(c+167,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+168,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+169,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+918,"auto_in_wready", false,-1);
    tracep->declBit(c+212,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+171,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+173,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+213,"auto_in_wlast", false,-1);
    tracep->declBit(c+919,"auto_in_bready", false,-1);
    tracep->declBit(c+920,"auto_in_bvalid", false,-1);
    tracep->declBus(c+913,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+921,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+939,"auto_in_arready", false,-1);
    tracep->declBit(c+296,"auto_in_arvalid", false,-1);
    tracep->declBus(c+177,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+178,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+179,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+209,"auto_in_rready", false,-1);
    tracep->declBit(c+914,"auto_in_rvalid", false,-1);
    tracep->declBus(c+915,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+698,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+1040,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+924,"auto_in_rlast", false,-1);
    tracep->declBit(c+932,"auto_out_2_awready", false,-1);
    tracep->declBit(c+266,"auto_out_2_awvalid", false,-1);
    tracep->declBus(c+167,"auto_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+267,"auto_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+701,"auto_out_2_wready", false,-1);
    tracep->declBit(c+268,"auto_out_2_wvalid", false,-1);
    tracep->declQuad(c+171,"auto_out_2_wdata", false,-1, 63,0);
    tracep->declBus(c+173,"auto_out_2_wstrb", false,-1, 7,0);
    tracep->declBit(c+933,"auto_out_2_bready", false,-1);
    tracep->declBit(c+269,"auto_out_2_bvalid", false,-1);
    tracep->declBus(c+270,"auto_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+271,"auto_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+934,"auto_out_2_arready", false,-1);
    tracep->declBit(c+272,"auto_out_2_arvalid", false,-1);
    tracep->declBus(c+177,"auto_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+273,"auto_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+935,"auto_out_2_rready", false,-1);
    tracep->declBit(c+274,"auto_out_2_rvalid", false,-1);
    tracep->declBus(c+275,"auto_out_2_rid", false,-1, 3,0);
    tracep->declQuad(c+276,"auto_out_2_rdata", false,-1, 63,0);
    tracep->declBus(c+278,"auto_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+297,"auto_out_1_awvalid", false,-1);
    tracep->declBit(c+298,"auto_out_1_wvalid", false,-1);
    tracep->declBit(c+299,"auto_out_1_arready", false,-1);
    tracep->declBit(c+300,"auto_out_1_arvalid", false,-1);
    tracep->declBus(c+177,"auto_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+301,"auto_out_1_araddr", false,-1, 29,0);
    tracep->declBus(c+179,"auto_out_1_arsize", false,-1, 2,0);
    tracep->declBit(c+702,"auto_out_1_rready", false,-1);
    tracep->declBit(c+302,"auto_out_1_rvalid", false,-1);
    tracep->declBus(c+303,"auto_out_1_rid", false,-1, 3,0);
    tracep->declQuad(c+304,"auto_out_1_rdata", false,-1, 63,0);
    tracep->declBit(c+165,"auto_out_0_awready", false,-1);
    tracep->declBit(c+166,"auto_out_0_awvalid", false,-1);
    tracep->declBus(c+167,"auto_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+168,"auto_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+169,"auto_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+165,"auto_out_0_wready", false,-1);
    tracep->declBit(c+170,"auto_out_0_wvalid", false,-1);
    tracep->declQuad(c+171,"auto_out_0_wdata", false,-1, 63,0);
    tracep->declBus(c+173,"auto_out_0_wstrb", false,-1, 7,0);
    tracep->declBit(c+908,"auto_out_0_bready", false,-1);
    tracep->declBit(c+909,"auto_out_0_bvalid", false,-1);
    tracep->declBus(c+174,"auto_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+694,"auto_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+175,"auto_out_0_arready", false,-1);
    tracep->declBit(c+176,"auto_out_0_arvalid", false,-1);
    tracep->declBus(c+177,"auto_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+178,"auto_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+179,"auto_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+910,"auto_out_0_rready", false,-1);
    tracep->declBit(c+911,"auto_out_0_rvalid", false,-1);
    tracep->declBus(c+180,"auto_out_0_rid", false,-1, 3,0);
    tracep->declQuad(c+695,"auto_out_0_rdata", false,-1, 63,0);
    tracep->declBus(c+694,"auto_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+920,"in_0_bvalid", false,-1);
    tracep->declBit(c+914,"in_0_rvalid", false,-1);
    tracep->declBit(c+938,"nodeIn_awready", false,-1);
    tracep->declBit(c+306,"requestARIO_0_0", false,-1);
    tracep->declBit(c+307,"requestARIO_0_1", false,-1);
    tracep->declBit(c+308,"requestARIO_0_2", false,-1);
    tracep->declBit(c+309,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+310,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+311,"requestAWIO_0_2", false,-1);
    tracep->declBit(c+312,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+313,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+314,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+315,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+316,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+317,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+318,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+319,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+320,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+321,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+322,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+323,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+324,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+325,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+326,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+327,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+328,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+329,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+330,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+331,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+332,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+333,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+334,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+335,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+336,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+337,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+338,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+339,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+340,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+341,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+342,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+343,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+344,"latched", false,-1);
    tracep->declBit(c+345,"in_0_awvalid", false,-1);
    tracep->declBit(c+346,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+347,"in_0_wvalid", false,-1);
    tracep->declBit(c+348,"idle_3", false,-1);
    tracep->declBit(c+940,"anyValid", false,-1);
    tracep->declBus(c+941,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+349,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+942,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+943,"prefixOR_1", false,-1);
    tracep->declBit(c+944,"winner_3_1", false,-1);
    tracep->declBit(c+945,"winner_3_2", false,-1);
    tracep->declBit(c+350,"state_3_0", false,-1);
    tracep->declBit(c+351,"state_3_1", false,-1);
    tracep->declBit(c+352,"state_3_2", false,-1);
    tracep->declBit(c+946,"muxState_3_0", false,-1);
    tracep->declBit(c+947,"muxState_3_1", false,-1);
    tracep->declBit(c+948,"muxState_3_2", false,-1);
    tracep->declBit(c+353,"idle_4", false,-1);
    tracep->declBit(c+949,"anyValid_1", false,-1);
    tracep->declBus(c+950,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+354,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+951,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+952,"winner_4_0", false,-1);
    tracep->declBit(c+953,"winner_4_2", false,-1);
    tracep->declBit(c+355,"state_4_0", false,-1);
    tracep->declBit(c+356,"state_4_2", false,-1);
    tracep->declBit(c+954,"muxState_4_0", false,-1);
    tracep->declBit(c+955,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+357,"io_enq_ready", false,-1);
    tracep->declBit(c+346,"io_enq_valid", false,-1);
    tracep->declBus(c+358,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+956,"io_deq_ready", false,-1);
    tracep->declBit(c+359,"io_deq_valid", false,-1);
    tracep->declBus(c+360,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+361,"wrap", false,-1);
    tracep->declBit(c+362,"wrap_1", false,-1);
    tracep->declBit(c+363,"maybe_full", false,-1);
    tracep->declBit(c+364,"ptr_match", false,-1);
    tracep->declBit(c+365,"empty", false,-1);
    tracep->declBit(c+366,"full", false,-1);
    tracep->declBit(c+359,"io_deq_valid_0", false,-1);
    tracep->declBit(c+957,"do_deq", false,-1);
    tracep->declBit(c+958,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+362,"R0_addr", false,-1);
    tracep->declBit(c+1077,"R0_en", false,-1);
    tracep->declBit(c+1010,"R0_clk", false,-1);
    tracep->declBus(c+367,"R0_data", false,-1, 2,0);
    tracep->declBit(c+361,"W0_addr", false,-1);
    tracep->declBit(c+958,"W0_en", false,-1);
    tracep->declBit(c+1010,"W0_clk", false,-1);
    tracep->declBus(c+358,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+368+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+917,"auto_in_awready", false,-1);
    tracep->declBit(c+210,"auto_in_awvalid", false,-1);
    tracep->declBus(c+167,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+168,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+169,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+211,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+918,"auto_in_wready", false,-1);
    tracep->declBit(c+212,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+171,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+173,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+213,"auto_in_wlast", false,-1);
    tracep->declBit(c+919,"auto_in_bready", false,-1);
    tracep->declBit(c+920,"auto_in_bvalid", false,-1);
    tracep->declBus(c+913,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+921,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+922,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+923,"auto_in_arready", false,-1);
    tracep->declBit(c+214,"auto_in_arvalid", false,-1);
    tracep->declBus(c+177,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+178,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+179,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+215,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+209,"auto_in_rready", false,-1);
    tracep->declBit(c+914,"auto_in_rvalid", false,-1);
    tracep->declBus(c+915,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+698,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+1040,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+700,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+924,"auto_in_rlast", false,-1);
    tracep->declBit(c+938,"auto_out_awready", false,-1);
    tracep->declBit(c+295,"auto_out_awvalid", false,-1);
    tracep->declBus(c+167,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+168,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+169,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+918,"auto_out_wready", false,-1);
    tracep->declBit(c+212,"auto_out_wvalid", false,-1);
    tracep->declQuad(c+171,"auto_out_wdata", false,-1, 63,0);
    tracep->declBus(c+173,"auto_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+213,"auto_out_wlast", false,-1);
    tracep->declBit(c+919,"auto_out_bready", false,-1);
    tracep->declBit(c+920,"auto_out_bvalid", false,-1);
    tracep->declBus(c+913,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+921,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+939,"auto_out_arready", false,-1);
    tracep->declBit(c+296,"auto_out_arvalid", false,-1);
    tracep->declBus(c+177,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+178,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+179,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+209,"auto_out_rready", false,-1);
    tracep->declBit(c+914,"auto_out_rvalid", false,-1);
    tracep->declBus(c+915,"auto_out_rid", false,-1, 3,0);
    tracep->declQuad(c+698,"auto_out_rdata", false,-1, 63,0);
    tracep->declBus(c+1040,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+924,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+370,"io_enq_ready", false,-1);
    tracep->declBit(c+703,"io_enq_valid", false,-1);
    tracep->declBit(c+215,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+959,"io_deq_ready", false,-1);
    tracep->declBit(c+371,"io_deq_valid", false,-1);
    tracep->declBit(c+372,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+372,"ram_real_last", false,-1);
    tracep->declBit(c+371,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+373,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+374,"io_enq_ready", false,-1);
    tracep->declBit(c+704,"io_enq_valid", false,-1);
    tracep->declBit(c+215,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+960,"io_deq_ready", false,-1);
    tracep->declBit(c+375,"io_deq_valid", false,-1);
    tracep->declBit(c+376,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+376,"ram_real_last", false,-1);
    tracep->declBit(c+375,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+377,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+378,"io_enq_ready", false,-1);
    tracep->declBit(c+705,"io_enq_valid", false,-1);
    tracep->declBit(c+215,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+961,"io_deq_ready", false,-1);
    tracep->declBit(c+379,"io_deq_valid", false,-1);
    tracep->declBit(c+380,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+380,"ram_real_last", false,-1);
    tracep->declBit(c+379,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+381,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+382,"io_enq_ready", false,-1);
    tracep->declBit(c+706,"io_enq_valid", false,-1);
    tracep->declBit(c+215,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+962,"io_deq_ready", false,-1);
    tracep->declBit(c+383,"io_deq_valid", false,-1);
    tracep->declBit(c+384,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+384,"ram_real_last", false,-1);
    tracep->declBit(c+383,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+385,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+386,"io_enq_ready", false,-1);
    tracep->declBit(c+707,"io_enq_valid", false,-1);
    tracep->declBit(c+215,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+963,"io_deq_ready", false,-1);
    tracep->declBit(c+387,"io_deq_valid", false,-1);
    tracep->declBit(c+388,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+388,"ram_real_last", false,-1);
    tracep->declBit(c+387,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+389,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+390,"io_enq_ready", false,-1);
    tracep->declBit(c+708,"io_enq_valid", false,-1);
    tracep->declBit(c+215,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+964,"io_deq_ready", false,-1);
    tracep->declBit(c+391,"io_deq_valid", false,-1);
    tracep->declBit(c+392,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+392,"ram_real_last", false,-1);
    tracep->declBit(c+391,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+393,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+394,"io_enq_ready", false,-1);
    tracep->declBit(c+709,"io_enq_valid", false,-1);
    tracep->declBit(c+215,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+965,"io_deq_ready", false,-1);
    tracep->declBit(c+395,"io_deq_valid", false,-1);
    tracep->declBit(c+396,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+396,"ram_real_last", false,-1);
    tracep->declBit(c+395,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+397,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+398,"io_enq_ready", false,-1);
    tracep->declBit(c+710,"io_enq_valid", false,-1);
    tracep->declBit(c+215,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+966,"io_deq_ready", false,-1);
    tracep->declBit(c+399,"io_deq_valid", false,-1);
    tracep->declBit(c+400,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+400,"ram_real_last", false,-1);
    tracep->declBit(c+399,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+401,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+402,"io_enq_ready", false,-1);
    tracep->declBit(c+711,"io_enq_valid", false,-1);
    tracep->declBit(c+211,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+967,"io_deq_ready", false,-1);
    tracep->declBit(c+403,"io_deq_valid", false,-1);
    tracep->declBit(c+404,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+404,"ram_real_last", false,-1);
    tracep->declBit(c+403,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+405,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+406,"io_enq_ready", false,-1);
    tracep->declBit(c+712,"io_enq_valid", false,-1);
    tracep->declBit(c+211,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+968,"io_deq_ready", false,-1);
    tracep->declBit(c+407,"io_deq_valid", false,-1);
    tracep->declBit(c+408,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+408,"ram_real_last", false,-1);
    tracep->declBit(c+407,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+409,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+410,"io_enq_ready", false,-1);
    tracep->declBit(c+713,"io_enq_valid", false,-1);
    tracep->declBit(c+211,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+969,"io_deq_ready", false,-1);
    tracep->declBit(c+411,"io_deq_valid", false,-1);
    tracep->declBit(c+412,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+412,"ram_real_last", false,-1);
    tracep->declBit(c+411,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+413,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+414,"io_enq_ready", false,-1);
    tracep->declBit(c+714,"io_enq_valid", false,-1);
    tracep->declBit(c+211,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+970,"io_deq_ready", false,-1);
    tracep->declBit(c+415,"io_deq_valid", false,-1);
    tracep->declBit(c+416,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+416,"ram_real_last", false,-1);
    tracep->declBit(c+415,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+417,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+418,"io_enq_ready", false,-1);
    tracep->declBit(c+715,"io_enq_valid", false,-1);
    tracep->declBit(c+215,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+971,"io_deq_ready", false,-1);
    tracep->declBit(c+419,"io_deq_valid", false,-1);
    tracep->declBit(c+420,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+420,"ram_real_last", false,-1);
    tracep->declBit(c+419,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+421,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+422,"io_enq_ready", false,-1);
    tracep->declBit(c+716,"io_enq_valid", false,-1);
    tracep->declBit(c+211,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+972,"io_deq_ready", false,-1);
    tracep->declBit(c+423,"io_deq_valid", false,-1);
    tracep->declBit(c+424,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+424,"ram_real_last", false,-1);
    tracep->declBit(c+423,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+425,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+426,"io_enq_ready", false,-1);
    tracep->declBit(c+717,"io_enq_valid", false,-1);
    tracep->declBit(c+211,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+973,"io_deq_ready", false,-1);
    tracep->declBit(c+427,"io_deq_valid", false,-1);
    tracep->declBit(c+428,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+428,"ram_real_last", false,-1);
    tracep->declBit(c+427,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+429,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+430,"io_enq_ready", false,-1);
    tracep->declBit(c+718,"io_enq_valid", false,-1);
    tracep->declBit(c+211,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+974,"io_deq_ready", false,-1);
    tracep->declBit(c+431,"io_deq_valid", false,-1);
    tracep->declBit(c+432,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+432,"ram_real_last", false,-1);
    tracep->declBit(c+431,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+433,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+434,"io_enq_ready", false,-1);
    tracep->declBit(c+719,"io_enq_valid", false,-1);
    tracep->declBit(c+211,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+975,"io_deq_ready", false,-1);
    tracep->declBit(c+435,"io_deq_valid", false,-1);
    tracep->declBit(c+436,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+436,"ram_real_last", false,-1);
    tracep->declBit(c+435,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+437,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+438,"io_enq_ready", false,-1);
    tracep->declBit(c+720,"io_enq_valid", false,-1);
    tracep->declBit(c+211,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+976,"io_deq_ready", false,-1);
    tracep->declBit(c+439,"io_deq_valid", false,-1);
    tracep->declBit(c+440,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+440,"ram_real_last", false,-1);
    tracep->declBit(c+439,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+441,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+442,"io_enq_ready", false,-1);
    tracep->declBit(c+721,"io_enq_valid", false,-1);
    tracep->declBit(c+211,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+977,"io_deq_ready", false,-1);
    tracep->declBit(c+443,"io_deq_valid", false,-1);
    tracep->declBit(c+444,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+444,"ram_real_last", false,-1);
    tracep->declBit(c+443,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+445,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+446,"io_enq_ready", false,-1);
    tracep->declBit(c+722,"io_enq_valid", false,-1);
    tracep->declBit(c+211,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+978,"io_deq_ready", false,-1);
    tracep->declBit(c+447,"io_deq_valid", false,-1);
    tracep->declBit(c+448,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+448,"ram_real_last", false,-1);
    tracep->declBit(c+447,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+449,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+450,"io_enq_ready", false,-1);
    tracep->declBit(c+723,"io_enq_valid", false,-1);
    tracep->declBit(c+211,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+979,"io_deq_ready", false,-1);
    tracep->declBit(c+451,"io_deq_valid", false,-1);
    tracep->declBit(c+452,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+452,"ram_real_last", false,-1);
    tracep->declBit(c+451,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+453,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+454,"io_enq_ready", false,-1);
    tracep->declBit(c+724,"io_enq_valid", false,-1);
    tracep->declBit(c+211,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+980,"io_deq_ready", false,-1);
    tracep->declBit(c+455,"io_deq_valid", false,-1);
    tracep->declBit(c+456,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+456,"ram_real_last", false,-1);
    tracep->declBit(c+455,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+457,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+458,"io_enq_ready", false,-1);
    tracep->declBit(c+725,"io_enq_valid", false,-1);
    tracep->declBit(c+211,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+981,"io_deq_ready", false,-1);
    tracep->declBit(c+459,"io_deq_valid", false,-1);
    tracep->declBit(c+460,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+460,"ram_real_last", false,-1);
    tracep->declBit(c+459,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+461,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+462,"io_enq_ready", false,-1);
    tracep->declBit(c+726,"io_enq_valid", false,-1);
    tracep->declBit(c+215,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+982,"io_deq_ready", false,-1);
    tracep->declBit(c+463,"io_deq_valid", false,-1);
    tracep->declBit(c+464,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+464,"ram_real_last", false,-1);
    tracep->declBit(c+463,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+465,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+466,"io_enq_ready", false,-1);
    tracep->declBit(c+727,"io_enq_valid", false,-1);
    tracep->declBit(c+211,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+983,"io_deq_ready", false,-1);
    tracep->declBit(c+467,"io_deq_valid", false,-1);
    tracep->declBit(c+468,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+468,"ram_real_last", false,-1);
    tracep->declBit(c+467,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+469,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+470,"io_enq_ready", false,-1);
    tracep->declBit(c+728,"io_enq_valid", false,-1);
    tracep->declBit(c+211,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+984,"io_deq_ready", false,-1);
    tracep->declBit(c+471,"io_deq_valid", false,-1);
    tracep->declBit(c+472,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+472,"ram_real_last", false,-1);
    tracep->declBit(c+471,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+473,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+474,"io_enq_ready", false,-1);
    tracep->declBit(c+729,"io_enq_valid", false,-1);
    tracep->declBit(c+215,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+985,"io_deq_ready", false,-1);
    tracep->declBit(c+475,"io_deq_valid", false,-1);
    tracep->declBit(c+476,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+476,"ram_real_last", false,-1);
    tracep->declBit(c+475,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+477,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+478,"io_enq_ready", false,-1);
    tracep->declBit(c+730,"io_enq_valid", false,-1);
    tracep->declBit(c+215,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+986,"io_deq_ready", false,-1);
    tracep->declBit(c+479,"io_deq_valid", false,-1);
    tracep->declBit(c+480,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+480,"ram_real_last", false,-1);
    tracep->declBit(c+479,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+481,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+482,"io_enq_ready", false,-1);
    tracep->declBit(c+731,"io_enq_valid", false,-1);
    tracep->declBit(c+215,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+987,"io_deq_ready", false,-1);
    tracep->declBit(c+483,"io_deq_valid", false,-1);
    tracep->declBit(c+484,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+484,"ram_real_last", false,-1);
    tracep->declBit(c+483,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+485,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+486,"io_enq_ready", false,-1);
    tracep->declBit(c+732,"io_enq_valid", false,-1);
    tracep->declBit(c+215,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+988,"io_deq_ready", false,-1);
    tracep->declBit(c+487,"io_deq_valid", false,-1);
    tracep->declBit(c+488,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+488,"ram_real_last", false,-1);
    tracep->declBit(c+487,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+489,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+490,"io_enq_ready", false,-1);
    tracep->declBit(c+733,"io_enq_valid", false,-1);
    tracep->declBit(c+215,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+989,"io_deq_ready", false,-1);
    tracep->declBit(c+491,"io_deq_valid", false,-1);
    tracep->declBit(c+492,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+492,"ram_real_last", false,-1);
    tracep->declBit(c+491,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+493,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+494,"io_enq_ready", false,-1);
    tracep->declBit(c+734,"io_enq_valid", false,-1);
    tracep->declBit(c+215,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+990,"io_deq_ready", false,-1);
    tracep->declBit(c+495,"io_deq_valid", false,-1);
    tracep->declBit(c+496,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+496,"ram_real_last", false,-1);
    tracep->declBit(c+495,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+497,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+194,"auto_master_out_awready", false,-1);
    tracep->declBit(c+195,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1074,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+196,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1075,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+197,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1076,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+198,"auto_master_out_wready", false,-1);
    tracep->declBit(c+199,"auto_master_out_wvalid", false,-1);
    tracep->declQuad(c+200,"auto_master_out_wdata", false,-1, 63,0);
    tracep->declBus(c+202,"auto_master_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+203,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+204,"auto_master_out_bready", false,-1);
    tracep->declBit(c+912,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+913,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+697,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+205,"auto_master_out_arready", false,-1);
    tracep->declBit(c+206,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1074,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+207,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1075,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+208,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1076,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+209,"auto_master_out_rready", false,-1);
    tracep->declBit(c+914,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+915,"auto_master_out_rid", false,-1, 3,0);
    tracep->declQuad(c+698,"auto_master_out_rdata", false,-1, 63,0);
    tracep->declBus(c+1040,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+916,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBit(c+1064,"io_interrupt", false,-1);
    tracep->declBit(c+194,"io_master_awready", false,-1);
    tracep->declBit(c+195,"io_master_awvalid", false,-1);
    tracep->declBus(c+196,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1074,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1075,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+197,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1076,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+198,"io_master_wready", false,-1);
    tracep->declBit(c+199,"io_master_wvalid", false,-1);
    tracep->declQuad(c+200,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+202,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+203,"io_master_wlast", false,-1);
    tracep->declBit(c+204,"io_master_bready", false,-1);
    tracep->declBit(c+912,"io_master_bvalid", false,-1);
    tracep->declBus(c+697,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+913,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+205,"io_master_arready", false,-1);
    tracep->declBit(c+206,"io_master_arvalid", false,-1);
    tracep->declBus(c+207,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1074,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1075,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+208,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1076,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+209,"io_master_rready", false,-1);
    tracep->declBit(c+914,"io_master_rvalid", false,-1);
    tracep->declBus(c+1040,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+698,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+916,"io_master_rlast", false,-1);
    tracep->declBus(c+915,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1078,"io_slave_awready", false,-1);
    tracep->declBit(c+1064,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1079,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1074,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1075,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1080,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1081,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1082,"io_slave_wready", false,-1);
    tracep->declBit(c+1064,"io_slave_wvalid", false,-1);
    tracep->declQuad(c+1083,"io_slave_wdata", false,-1, 63,0);
    tracep->declBus(c+1075,"io_slave_wstrb", false,-1, 7,0);
    tracep->declBit(c+1064,"io_slave_wlast", false,-1);
    tracep->declBit(c+1064,"io_slave_bready", false,-1);
    tracep->declBit(c+1085,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1086,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1087,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1088,"io_slave_arready", false,-1);
    tracep->declBit(c+1064,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1079,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1074,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1075,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1080,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1081,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1064,"io_slave_rready", false,-1);
    tracep->declBit(c+1089,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1090,"io_slave_rresp", false,-1, 1,0);
    tracep->declQuad(c+1091,"io_slave_rdata", false,-1, 63,0);
    tracep->declBit(c+1093,"io_slave_rlast", false,-1);
    tracep->declBus(c+1094,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+498,"ifu_pc", false,-1, 31,0);
    tracep->declBus(c+499,"ifu_inst", false,-1, 31,0);
    tracep->declBus(c+1095,"ifu_inst_t", false,-1, 31,0);
    tracep->declBit(c+500,"ifu_stall", false,-1);
    tracep->declBus(c+501,"jump_pc", false,-1, 31,0);
    tracep->declBit(c+502,"jump_pc_valid", false,-1);
    tracep->declBit(c+991,"stall", false,-1);
    tracep->declBit(c+503,"ifu_r_valid_o", false,-1);
    tracep->declBus(c+504,"ifu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+992,"ifu_r_ready_i", false,-1);
    tracep->declBus(c+993,"ifu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+1075,"ifu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+994,"ifu_r_last_i", false,-1);
    tracep->declBit(c+505,"idu_branch", false,-1);
    tracep->declBit(c+506,"idu_jal", false,-1);
    tracep->declBit(c+507,"idu_jalr", false,-1);
    tracep->declBus(c+508,"idu_rd", false,-1, 4,0);
    tracep->declBit(c+509,"idu_rd_wen", false,-1);
    tracep->declBus(c+510,"idu_rs1", false,-1, 4,0);
    tracep->declBus(c+511,"idu_rs2", false,-1, 4,0);
    tracep->declBus(c+512,"idu_imm", false,-1, 31,0);
    tracep->declBus(c+513,"idu_alu_opt", false,-1, 3,0);
    tracep->declBus(c+514,"idu_src_sel", false,-1, 1,0);
    tracep->declBus(c+515,"idu_lsu_opt", false,-1, 1,0);
    tracep->declBus(c+516,"idu_funct3", false,-1, 2,0);
    tracep->declBus(c+517,"src1", false,-1, 31,0);
    tracep->declBus(c+518,"src2", false,-1, 31,0);
    tracep->declBus(c+1042,"rd_data", false,-1, 31,0);
    tracep->declBit(c+519,"zero_flag", false,-1);
    tracep->declBus(c+520,"exu_result", false,-1, 31,0);
    tracep->declBus(c+1096,"exu_result_t", false,-1, 31,0);
    tracep->declBus(c+735,"lsu_result", false,-1, 31,0);
    tracep->declBit(c+991,"mem_stall", false,-1);
    tracep->declBit(c+995,"lsu_rd_wen", false,-1);
    tracep->declBit(c+521,"lsu_r_valid_o", false,-1);
    tracep->declBus(c+522,"lsu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+736,"lsu_r_ready_i", false,-1);
    tracep->declBus(c+737,"lsu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+523,"lsu_r_size_o", false,-1, 2,0);
    tracep->declBus(c+1075,"lsu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+738,"lsu_r_last_i", false,-1);
    tracep->declBit(c+524,"lsu_w_valid_o", false,-1);
    tracep->declBus(c+196,"lsu_w_addr_o", false,-1, 31,0);
    tracep->declBit(c+198,"lsu_w_ready_i", false,-1);
    tracep->declBus(c+518,"lsu_w_data_o", false,-1, 31,0);
    tracep->declBus(c+197,"lsu_w_size_o", false,-1, 2,0);
    tracep->declBus(c+1075,"lsu_w_len_o", false,-1, 7,0);
    tracep->declBit(c+912,"lsu_w_last_i", false,-1);
    tracep->declBit(c+739,"wbu_rd_wen", false,-1);
    tracep->declBit(c+525,"csr_ecall", false,-1);
    tracep->declBit(c+526,"csr_mret", false,-1);
    tracep->declBus(c+527,"wr_csr_data", false,-1, 31,0);
    tracep->declBus(c+1043,"rd_csr_data", false,-1, 31,0);
    tracep->declBus(c+528,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+529,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+530,"csr_mpec", false,-1, 31,0);
    tracep->pushNamePrefix("axi_arbiter_u0 ");
    tracep->declBit(c+1010,"aclk", false,-1);
    tracep->declBit(c+1041,"areset_n", false,-1);
    tracep->declBit(c+503,"ifu_r_valid_i", false,-1);
    tracep->declBus(c+504,"ifu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+992,"ifu_r_ready_o", false,-1);
    tracep->declBus(c+993,"ifu_r_data_o", false,-1, 31,0);
    tracep->declBus(c+1075,"ifu_r_len_i", false,-1, 7,0);
    tracep->declBit(c+994,"ifu_r_last_o", false,-1);
    tracep->declBit(c+521,"lsu_r_valid_i", false,-1);
    tracep->declBus(c+522,"lsu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+736,"lsu_r_ready_o", false,-1);
    tracep->declBus(c+737,"lsu_r_data_o", false,-1, 31,0);
    tracep->declBus(c+523,"lsu_r_size_i", false,-1, 2,0);
    tracep->declBus(c+1075,"lsu_r_len_i", false,-1, 7,0);
    tracep->declBit(c+738,"lsu_r_last_o", false,-1);
    tracep->declBit(c+524,"lsu_w_valid_i", false,-1);
    tracep->declBus(c+196,"lsu_w_addr_i", false,-1, 31,0);
    tracep->declBit(c+198,"lsu_w_ready_o", false,-1);
    tracep->declBus(c+518,"lsu_w_data_i", false,-1, 31,0);
    tracep->declBus(c+197,"lsu_w_size_i", false,-1, 2,0);
    tracep->declBus(c+1075,"lsu_w_len_i", false,-1, 7,0);
    tracep->declBit(c+912,"lsu_w_last_o", false,-1);
    tracep->declBit(c+194,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+195,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+196,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+1074,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+1075,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+197,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+1076,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+198,"axi_w_ready_i", false,-1);
    tracep->declBit(c+199,"axi_w_valid_o", false,-1);
    tracep->declQuad(c+200,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+202,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+203,"axi_w_last_o", false,-1);
    tracep->declBit(c+204,"axi_b_ready_o", false,-1);
    tracep->declBit(c+912,"axi_b_valid_i", false,-1);
    tracep->declBus(c+697,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+913,"axi_b_id_i", false,-1, 3,0);
    tracep->declBit(c+205,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+206,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+207,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+1074,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+1075,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+208,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+1076,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+209,"axi_r_ready_o", false,-1);
    tracep->declBit(c+914,"axi_r_valid_i", false,-1);
    tracep->declBus(c+1040,"axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+698,"axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+916,"axi_r_last_i", false,-1);
    tracep->declBus(c+915,"axi_r_id_i", false,-1, 3,0);
    tracep->declBit(c+531,"cpu_r_valid_o", false,-1);
    tracep->declBus(c+207,"cpu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+914,"cpu_r_ready_i", false,-1);
    tracep->declBus(c+996,"cpu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+208,"cpu_r_size_o", false,-1, 2,0);
    tracep->declBus(c+1075,"cpu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+916,"cpu_r_last_i", false,-1);
    tracep->declBit(c+524,"cpu_w_valid_o", false,-1);
    tracep->declBus(c+196,"cpu_w_addr_o", false,-1, 31,0);
    tracep->declBit(c+198,"cpu_w_ready_i", false,-1);
    tracep->declBus(c+518,"cpu_w_data_o", false,-1, 31,0);
    tracep->declBus(c+197,"cpu_w_size_o", false,-1, 2,0);
    tracep->declBus(c+1075,"cpu_w_len_o", false,-1, 7,0);
    tracep->declBit(c+912,"cpu_w_last_i", false,-1);
    tracep->declBus(c+532,"arbiter_state", false,-1, 1,0);
    tracep->declBus(c+1081,"ARB_IDLE", false,-1, 1,0);
    tracep->declBus(c+1076,"ARB_IFU", false,-1, 1,0);
    tracep->declBus(c+1097,"ARB_LSU", false,-1, 1,0);
    tracep->pushNamePrefix("axi_u0 ");
    tracep->declBit(c+1010,"aclk", false,-1);
    tracep->declBit(c+1041,"areset_n", false,-1);
    tracep->declBit(c+531,"cpu_r_valid_i", false,-1);
    tracep->declBus(c+207,"cpu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+914,"cpu_r_ready_o", false,-1);
    tracep->declBus(c+996,"cpu_r_data_o", false,-1, 31,0);
    tracep->declBus(c+208,"cpu_r_size_i", false,-1, 2,0);
    tracep->declBus(c+1075,"cpu_r_len_i", false,-1, 7,0);
    tracep->declBit(c+916,"cpu_r_last_o", false,-1);
    tracep->declBit(c+524,"cpu_w_valid_i", false,-1);
    tracep->declBus(c+196,"cpu_w_addr_i", false,-1, 31,0);
    tracep->declBit(c+198,"cpu_w_ready_o", false,-1);
    tracep->declBus(c+518,"cpu_w_data_i", false,-1, 31,0);
    tracep->declBus(c+197,"cpu_w_size_i", false,-1, 2,0);
    tracep->declBus(c+1075,"cpu_w_len_i", false,-1, 7,0);
    tracep->declBit(c+912,"cpu_w_last_o", false,-1);
    tracep->declBit(c+194,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+195,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+196,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+1074,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+1075,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+197,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+1076,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+198,"axi_w_ready_i", false,-1);
    tracep->declBit(c+199,"axi_w_valid_o", false,-1);
    tracep->declQuad(c+200,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+202,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+203,"axi_w_last_o", false,-1);
    tracep->declBit(c+204,"axi_b_ready_o", false,-1);
    tracep->declBit(c+912,"axi_b_valid_i", false,-1);
    tracep->declBus(c+697,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+913,"axi_b_id_i", false,-1, 3,0);
    tracep->declBit(c+205,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+206,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+207,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+1074,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+1075,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+208,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+1076,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+209,"axi_r_ready_o", false,-1);
    tracep->declBit(c+914,"axi_r_valid_i", false,-1);
    tracep->declBus(c+1040,"axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+698,"axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+916,"axi_r_last_i", false,-1);
    tracep->declBus(c+915,"axi_r_id_i", false,-1, 3,0);
    tracep->declBus(c+533,"axi_w_state", false,-1, 2,0);
    tracep->declBus(c+1080,"AXI_W_IDLE", false,-1, 2,0);
    tracep->declBus(c+1063,"AXI_W_ADDR", false,-1, 2,0);
    tracep->declBus(c+1098,"AXI_W_DATA", false,-1, 2,0);
    tracep->declBus(c+1099,"AXI_W_RESP", false,-1, 2,0);
    tracep->declQuad(c+534,"axi_w_data_t", false,-1, 63,0);
    tracep->declBus(c+536,"axi_w_strb_t", false,-1, 7,0);
    tracep->declBus(c+537,"axi_w_cnt", false,-1, 7,0);
    tracep->declBus(c+538,"axi_r_state", false,-1, 1,0);
    tracep->declBus(c+1081,"AXI_R_IDLE", false,-1, 1,0);
    tracep->declBus(c+1076,"AXI_R_ADDR", false,-1, 1,0);
    tracep->declBus(c+1097,"AXI_R_DATA", false,-1, 1,0);
    tracep->declBus(c+1100,"axi_r_cnt", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csr_u0 ");
    tracep->declBit(c+1010,"clk", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBus(c+539,"wr_addr", false,-1, 11,0);
    tracep->declBus(c+527,"wr_data", false,-1, 31,0);
    tracep->declBus(c+539,"rd_addr", false,-1, 11,0);
    tracep->declBus(c+1043,"rd_data", false,-1, 31,0);
    tracep->declBit(c+525,"i_csr_ecall", false,-1);
    tracep->declBit(c+526,"i_csr_mret", false,-1);
    tracep->declBus(c+499,"i_inst", false,-1, 31,0);
    tracep->declBus(c+498,"i_pc", false,-1, 31,0);
    tracep->declBus(c+528,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+529,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+530,"o_mpec", false,-1, 31,0);
    tracep->declBus(c+1043,"rd_data_r", false,-1, 31,0);
    tracep->declBit(c+540,"wr_en", false,-1);
    tracep->declBit(c+540,"rd_en", false,-1);
    tracep->declBus(c+541,"wr_data_r", false,-1, 31,0);
    tracep->declBus(c+542,"temp", false,-1, 31,0);
    tracep->declBus(c+528,"o_mstatus_r", false,-1, 31,0);
    tracep->declBus(c+543,"mepc_inst_r", false,-1, 31,0);
    tracep->declBus(c+544,"mcause", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu_u0 ");
    tracep->declBus(c+498,"pc", false,-1, 31,0);
    tracep->declBus(c+517,"src1", false,-1, 31,0);
    tracep->declBus(c+518,"src2", false,-1, 31,0);
    tracep->declBus(c+512,"imm", false,-1, 31,0);
    tracep->declBit(c+505,"branch", false,-1);
    tracep->declBus(c+513,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+514,"src_sel", false,-1, 1,0);
    tracep->declBus(c+516,"funct3", false,-1, 2,0);
    tracep->declBit(c+519,"zero_flag", false,-1);
    tracep->declBus(c+520,"exu_result", false,-1, 31,0);
    tracep->declBus(c+545,"alu_a_data", false,-1, 31,0);
    tracep->declBus(c+546,"alu_b_data", false,-1, 31,0);
    tracep->declBus(c+547,"alu_out_data", false,-1, 31,0);
    tracep->declBit(c+1101,"carry_flag", false,-1);
    tracep->declBit(c+1102,"signed_flag", false,-1);
    tracep->declBus(c+520,"exu_result_r", false,-1, 31,0);
    tracep->pushNamePrefix("ex_alu ");
    tracep->declBus(c+513,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+545,"alu_a_data", false,-1, 31,0);
    tracep->declBus(c+546,"alu_b_data", false,-1, 31,0);
    tracep->declBus(c+547,"alu_out_data", false,-1, 31,0);
    tracep->declBit(c+548,"sub_flag", false,-1);
    tracep->declQuad(c+549,"alu_a_t", false,-1, 32,0);
    tracep->declQuad(c+551,"alu_b_t", false,-1, 32,0);
    tracep->declQuad(c+553,"cin", false,-1, 32,0);
    tracep->declQuad(c+555,"add_out", false,-1, 32,0);
    tracep->declBit(c+557,"top_A", false,-1);
    tracep->declBit(c+558,"top_B", false,-1);
    tracep->declBit(c+559,"top_C", false,-1);
    tracep->declBit(c+560,"sign_flag", false,-1);
    tracep->declBit(c+561,"over_flag", false,-1);
    tracep->declBit(c+562,"carry_flag", false,-1);
    tracep->declBus(c+563,"sra_result", false,-1, 31,0);
    tracep->declBus(c+547,"alu_out_data_r", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu_u0 ");
    tracep->declBus(c+499,"inst", false,-1, 31,0);
    tracep->declBit(c+505,"branch", false,-1);
    tracep->declBit(c+506,"jal", false,-1);
    tracep->declBit(c+507,"jalr", false,-1);
    tracep->declBus(c+508,"rd", false,-1, 4,0);
    tracep->declBit(c+509,"rd_wen", false,-1);
    tracep->declBus(c+510,"rs1", false,-1, 4,0);
    tracep->declBus(c+511,"rs2", false,-1, 4,0);
    tracep->declBus(c+512,"imm", false,-1, 31,0);
    tracep->declBus(c+513,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+514,"src_sel", false,-1, 1,0);
    tracep->declBus(c+515,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+516,"funct3", false,-1, 2,0);
    tracep->declBus(c+564,"opcode", false,-1, 6,0);
    tracep->declBus(c+565,"funct7", false,-1, 6,0);
    tracep->declBus(c+1103,"reg_zero", false,-1, 4,0);
    tracep->pushNamePrefix("id_imm_idu ");
    tracep->declBus(c+499,"inst", false,-1, 31,0);
    tracep->declBus(c+512,"imm", false,-1, 31,0);
    tracep->declBus(c+512,"imm_r", false,-1, 31,0);
    tracep->declBus(c+566,"imm_typeI", false,-1, 31,0);
    tracep->declBus(c+567,"imm_typeU", false,-1, 31,0);
    tracep->declBus(c+568,"imm_typeS", false,-1, 31,0);
    tracep->declBus(c+569,"imm_typeB", false,-1, 31,0);
    tracep->declBus(c+570,"imm_typeJ", false,-1, 31,0);
    tracep->declBus(c+1079,"imm_typeR", false,-1, 31,0);
    tracep->declBus(c+1079,"imm_type_NONE", false,-1, 31,0);
    tracep->pushNamePrefix("id_imm_ext_typeB ");
    tracep->declBus(c+1104,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+571,"imm_in", false,-1, 12,0);
    tracep->declBus(c+569,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeI ");
    tracep->declBus(c+1105,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+572,"imm_in", false,-1, 11,0);
    tracep->declBus(c+566,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeJ ");
    tracep->declBus(c+1106,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+573,"imm_in", false,-1, 20,0);
    tracep->declBus(c+570,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeS ");
    tracep->declBus(c+1105,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+574,"imm_in", false,-1, 11,0);
    tracep->declBus(c+568,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeU ");
    tracep->declBus(c+1107,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+567,"imm_in", false,-1, 31,0);
    tracep->declBus(c+567,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_opt_idu ");
    tracep->declBus(c+564,"opcode", false,-1, 6,0);
    tracep->declBus(c+516,"funct3", false,-1, 2,0);
    tracep->declBus(c+565,"funct7", false,-1, 6,0);
    tracep->declBus(c+513,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+514,"src_sel", false,-1, 1,0);
    tracep->declBus(c+515,"lsu_opt", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu_u0 ");
    tracep->declBit(c+1010,"clk", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBus(c+501,"jump_pc", false,-1, 31,0);
    tracep->declBit(c+502,"jump_pc_valid", false,-1);
    tracep->declBit(c+991,"stall", false,-1);
    tracep->declBit(c+995,"wbu_stall", false,-1);
    tracep->declBit(c+503,"ifu_r_valid_o", false,-1);
    tracep->declBus(c+504,"ifu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+992,"ifu_r_ready_i", false,-1);
    tracep->declBus(c+993,"ifu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+1075,"ifu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+994,"ifu_r_last_i", false,-1);
    tracep->declBit(c+500,"ifu_stall", false,-1);
    tracep->declBus(c+498,"ifu_pc_o", false,-1, 31,0);
    tracep->declBus(c+499,"ifu_inst_o", false,-1, 31,0);
    tracep->declBus(c+498,"ifu_pc_o_r", false,-1, 31,0);
    tracep->declBus(c+499,"ifu_inst_o_r", false,-1, 31,0);
    tracep->declBus(c+575,"ifu_pc_o_t", false,-1, 31,0);
    tracep->declBus(c+576,"ifu_inst_o_t", false,-1, 31,0);
    tracep->declBus(c+504,"pc", false,-1, 31,0);
    tracep->declBus(c+993,"inst", false,-1, 31,0);
    tracep->declBus(c+1108,"inst_t", false,-1, 31,0);
    tracep->declBit(c+500,"ifu_stall_r", false,-1);
    tracep->declBit(c+577,"flush_inst", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_u0 ");
    tracep->declBit(c+1010,"clk", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBus(c+517,"src1", false,-1, 31,0);
    tracep->declBus(c+518,"src2", false,-1, 31,0);
    tracep->declBus(c+512,"imm", false,-1, 31,0);
    tracep->declBus(c+515,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+516,"funct3", false,-1, 2,0);
    tracep->declBit(c+500,"ifu_stall", false,-1);
    tracep->declBit(c+521,"lsu_r_valid_o", false,-1);
    tracep->declBus(c+522,"lsu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+736,"lsu_r_ready_i", false,-1);
    tracep->declBus(c+737,"lsu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+523,"lsu_r_size_o", false,-1, 2,0);
    tracep->declBus(c+1075,"lsu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+738,"lsu_r_last_i", false,-1);
    tracep->declBit(c+524,"lsu_w_valid_o", false,-1);
    tracep->declBus(c+196,"lsu_w_addr_o", false,-1, 31,0);
    tracep->declBit(c+198,"lsu_w_ready_i", false,-1);
    tracep->declBus(c+518,"lsu_w_data_o", false,-1, 31,0);
    tracep->declBus(c+197,"lsu_w_size_o", false,-1, 2,0);
    tracep->declBus(c+1075,"lsu_w_len_o", false,-1, 7,0);
    tracep->declBit(c+912,"lsu_w_last_i", false,-1);
    tracep->declBit(c+991,"mem_stall", false,-1);
    tracep->declBit(c+995,"lsu_rd_wen", false,-1);
    tracep->declBus(c+735,"lsu_result", false,-1, 31,0);
    tracep->declBus(c+522,"raddr", false,-1, 31,0);
    tracep->declBus(c+737,"rdata", false,-1, 31,0);
    tracep->declBus(c+578,"rsize", false,-1, 31,0);
    tracep->declBus(c+196,"waddr", false,-1, 31,0);
    tracep->declBus(c+518,"wdata", false,-1, 31,0);
    tracep->declBus(c+579,"wmask", false,-1, 31,0);
    tracep->declBus(c+579,"mask", false,-1, 31,0);
    tracep->declBus(c+735,"lsu_result_r", false,-1, 31,0);
    tracep->declBit(c+521,"ren", false,-1);
    tracep->declBit(c+524,"wen", false,-1);
    tracep->declBit(c+997,"lsu_rd_wen_r", false,-1);
    tracep->declBit(c+998,"lsu_rd_wen_w", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile_u0 ");
    tracep->declBit(c+1010,"clk", false,-1);
    tracep->declBit(c+1041,"reset", false,-1);
    tracep->declBus(c+510,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+517,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+511,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+518,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+739,"rd_en", false,-1);
    tracep->declBus(c+508,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+1042,"rd_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+580+i*1,"gpr", true,(i+0), 31,0);
    }
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu_u0 ");
    tracep->declBus(c+515,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+520,"exu_result", false,-1, 31,0);
    tracep->declBus(c+735,"lsu_result", false,-1, 31,0);
    tracep->declBus(c+1043,"csr_result", false,-1, 31,0);
    tracep->declBit(c+995,"lsu_rd_wen", false,-1);
    tracep->declBit(c+612,"idu_rd_wen", false,-1);
    tracep->declBit(c+739,"wbu_rd_wen", false,-1);
    tracep->declBus(c+1042,"wbu_result", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"io_d", false,-1);
    tracep->declBit(c+613,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"io_d", false,-1);
    tracep->declBit(c+613,"io_q", false,-1);
    tracep->declBit(c+613,"sync_0", false,-1);
    tracep->declBit(c+614,"sync_1", false,-1);
    tracep->declBit(c+615,"sync_2", false,-1);
    tracep->declBit(c+616,"sync_3", false,-1);
    tracep->declBit(c+617,"sync_4", false,-1);
    tracep->declBit(c+618,"sync_5", false,-1);
    tracep->declBit(c+619,"sync_6", false,-1);
    tracep->declBit(c+620,"sync_7", false,-1);
    tracep->declBit(c+621,"sync_8", false,-1);
    tracep->declBit(c+622,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+690,"auto_in_psel", false,-1);
    tracep->declBit(c+691,"auto_in_penable", false,-1);
    tracep->declBit(c+161,"auto_in_pwrite", false,-1);
    tracep->declBus(c+874,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1063,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+162,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+163,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1071,"auto_in_pready", false,-1);
    tracep->declBit(c+1072,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1073,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1012,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1013,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1014,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1015,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1016,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1017,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1018,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1019,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1020,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1021,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBus(c+888,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+690,"in_psel", false,-1);
    tracep->declBit(c+691,"in_penable", false,-1);
    tracep->declBus(c+1063,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+161,"in_pwrite", false,-1);
    tracep->declBus(c+162,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+163,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1071,"in_pready", false,-1);
    tracep->declBus(c+1073,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1072,"in_pslverr", false,-1);
    tracep->declBus(c+1012,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1013,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1014,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1015,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1016,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1017,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1018,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1019,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1020,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1021,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+688,"auto_in_psel", false,-1);
    tracep->declBit(c+689,"auto_in_penable", false,-1);
    tracep->declBit(c+161,"auto_in_pwrite", false,-1);
    tracep->declBus(c+874,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1063,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+162,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+163,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1068,"auto_in_pready", false,-1);
    tracep->declBit(c+1069,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1070,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1022,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1023,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBus(c+888,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+688,"in_psel", false,-1);
    tracep->declBit(c+689,"in_penable", false,-1);
    tracep->declBus(c+1063,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+161,"in_pwrite", false,-1);
    tracep->declBus(c+162,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+163,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1068,"in_pready", false,-1);
    tracep->declBus(c+1070,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1069,"in_pslverr", false,-1);
    tracep->declBit(c+1022,"ps2_clk", false,-1);
    tracep->declBit(c+1023,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+297,"auto_in_awvalid", false,-1);
    tracep->declBit(c+298,"auto_in_wvalid", false,-1);
    tracep->declBit(c+299,"auto_in_arready", false,-1);
    tracep->declBit(c+300,"auto_in_arvalid", false,-1);
    tracep->declBus(c+177,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+301,"auto_in_araddr", false,-1, 29,0);
    tracep->declBus(c+179,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+702,"auto_in_rready", false,-1);
    tracep->declBit(c+302,"auto_in_rvalid", false,-1);
    tracep->declBus(c+303,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+304,"auto_in_rdata", false,-1, 63,0);
    tracep->declBit(c+302,"state", false,-1);
    tracep->declQuad(c+304,"nodeIn_rdata_r", false,-1, 63,0);
    tracep->declBus(c+303,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+623,"raddr", false,-1, 31,0);
    tracep->declBit(c+624,"ren", false,-1);
    tracep->declBus(c+625,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+875,"auto_in_psel", false,-1);
    tracep->declBit(c+692,"auto_in_penable", false,-1);
    tracep->declBit(c+161,"auto_in_pwrite", false,-1);
    tracep->declBus(c+871,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1063,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+162,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+163,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1036,"auto_in_pready", false,-1);
    tracep->declBit(c+1064,"auto_in_pslverr", false,-1);
    tracep->declBus(c+164,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+904,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+905,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1033,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBus(c+871,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+875,"in_psel", false,-1);
    tracep->declBit(c+692,"in_penable", false,-1);
    tracep->declBus(c+1063,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+161,"in_pwrite", false,-1);
    tracep->declBus(c+162,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+163,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1036,"in_pready", false,-1);
    tracep->declBus(c+164,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1064,"in_pslverr", false,-1);
    tracep->declBit(c+904,"qspi_sck", false,-1);
    tracep->declBit(c+905,"qspi_ce_n", false,-1);
    tracep->declBus(c+1033,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1033,"din", false,-1, 3,0);
    tracep->declBus(c+999,"dout", false,-1, 3,0);
    tracep->declBus(c+1000,"douten", false,-1, 3,0);
    tracep->declBit(c+1044,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1010,"clk_i", false,-1);
    tracep->declBit(c+1011,"rst_i", false,-1);
    tracep->declBus(c+871,"adr_i", false,-1, 31,0);
    tracep->declBus(c+162,"dat_i", false,-1, 31,0);
    tracep->declBus(c+164,"dat_o", false,-1, 31,0);
    tracep->declBus(c+163,"sel_i", false,-1, 3,0);
    tracep->declBit(c+875,"cyc_i", false,-1);
    tracep->declBit(c+875,"stb_i", false,-1);
    tracep->declBit(c+1044,"ack_o", false,-1);
    tracep->declBit(c+161,"we_i", false,-1);
    tracep->declBit(c+904,"sck", false,-1);
    tracep->declBit(c+905,"ce_n", false,-1);
    tracep->declBus(c+1033,"din", false,-1, 3,0);
    tracep->declBus(c+999,"dout", false,-1, 3,0);
    tracep->declBus(c+1000,"douten", false,-1, 3,0);
    tracep->declBus(c+1081,"ST_INIT", false,-1, 1,0);
    tracep->declBus(c+1076,"ST_IDLE", false,-1, 1,0);
    tracep->declBus(c+1097,"ST_WAIT", false,-1, 1,0);
    tracep->declBit(c+776,"mr_sck", false,-1);
    tracep->declBit(c+13,"mr_ce_n", false,-1);
    tracep->declBus(c+1033,"mr_din", false,-1, 3,0);
    tracep->declBus(c+1045,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+777,"mr_doe", false,-1);
    tracep->declBit(c+14,"mw_sck", false,-1);
    tracep->declBit(c+15,"mw_ce_n", false,-1);
    tracep->declBus(c+1033,"mw_din", false,-1, 3,0);
    tracep->declBus(c+862,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+16,"mw_doe", false,-1);
    tracep->declBit(c+17,"init_start", false,-1);
    tracep->declBit(c+18,"init_done", false,-1);
    tracep->declBit(c+19,"init_sck", false,-1);
    tracep->declBit(c+20,"init_ce_n", false,-1);
    tracep->declBus(c+21,"init_dout", false,-1, 3,0);
    tracep->declBit(c+1077,"init_doe", false,-1);
    tracep->declBit(c+1001,"mr_rd", false,-1);
    tracep->declBit(c+778,"mr_done", false,-1);
    tracep->declBit(c+1002,"mw_wr", false,-1);
    tracep->declBit(c+863,"mw_done", false,-1);
    tracep->declBit(c+875,"wb_valid", false,-1);
    tracep->declBit(c+889,"wb_we", false,-1);
    tracep->declBit(c+890,"wb_re", false,-1);
    tracep->declBus(c+22,"state", false,-1, 1,0);
    tracep->declBus(c+1003,"nstate", false,-1, 1,0);
    tracep->declBus(c+626,"size", false,-1, 2,0);
    tracep->declBus(c+627,"byte0", false,-1, 7,0);
    tracep->declBus(c+628,"byte1", false,-1, 7,0);
    tracep->declBus(c+629,"byte2", false,-1, 7,0);
    tracep->declBus(c+630,"byte3", false,-1, 7,0);
    tracep->declBus(c+631,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("INIT ");
    tracep->declBit(c+1010,"clk", false,-1);
    tracep->declBit(c+1046,"rst_n", false,-1);
    tracep->declBit(c+17,"start", false,-1);
    tracep->declBit(c+18,"done", false,-1);
    tracep->declBit(c+19,"sck", false,-1);
    tracep->declBit(c+20,"ce_n", false,-1);
    tracep->declBus(c+21,"dout", false,-1, 3,0);
    tracep->declBit(c+1077,"douten", false,-1);
    tracep->declBus(c+1109,"CMD_35H", false,-1, 7,0);
    tracep->declBus(c+23,"counter", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1010,"clk", false,-1);
    tracep->declBit(c+1046,"rst_n", false,-1);
    tracep->declBus(c+891,"addr", false,-1, 23,0);
    tracep->declBit(c+1001,"rd", false,-1);
    tracep->declBus(c+1110,"size", false,-1, 2,0);
    tracep->declBit(c+778,"done", false,-1);
    tracep->declBus(c+164,"line", false,-1, 31,0);
    tracep->declBit(c+776,"sck", false,-1);
    tracep->declBit(c+13,"ce_n", false,-1);
    tracep->declBus(c+1033,"din", false,-1, 3,0);
    tracep->declBus(c+1045,"dout", false,-1, 3,0);
    tracep->declBit(c+777,"douten", false,-1);
    tracep->declBus(c+1111,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1112,"READ", false,-1, 0,0);
    tracep->declBus(c+1113,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+24,"state", false,-1);
    tracep->declBit(c+1004,"nstate", false,-1);
    tracep->declBus(c+779,"counter", false,-1, 7,0);
    tracep->declBus(c+25,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+632+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1114,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+780,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1010,"clk", false,-1);
    tracep->declBit(c+1046,"rst_n", false,-1);
    tracep->declBus(c+892,"addr", false,-1, 23,0);
    tracep->declBus(c+631,"line", false,-1, 31,0);
    tracep->declBus(c+626,"size", false,-1, 2,0);
    tracep->declBit(c+1002,"wr", false,-1);
    tracep->declBit(c+863,"done", false,-1);
    tracep->declBit(c+14,"sck", false,-1);
    tracep->declBit(c+15,"ce_n", false,-1);
    tracep->declBus(c+1033,"din", false,-1, 3,0);
    tracep->declBus(c+862,"dout", false,-1, 3,0);
    tracep->declBit(c+16,"douten", false,-1);
    tracep->declBus(c+1111,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1112,"WRITE", false,-1, 0,0);
    tracep->declBus(c+636,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+26,"state", false,-1);
    tracep->declBit(c+1005,"nstate", false,-1);
    tracep->declBus(c+27,"counter", false,-1, 7,0);
    tracep->declBus(c+28,"saddr", false,-1, 23,0);
    tracep->declBus(c+1115,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+684,"auto_in_psel", false,-1);
    tracep->declBit(c+685,"auto_in_penable", false,-1);
    tracep->declBit(c+161,"auto_in_pwrite", false,-1);
    tracep->declBus(c+871,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1063,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+162,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+163,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+775,"auto_in_pready", false,-1);
    tracep->declBit(c+1064,"auto_in_pslverr", false,-1);
    tracep->declBus(c+12,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1034,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+767,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+768,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+769,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+770,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+771,"sdram_bundle_we", false,-1);
    tracep->declBus(c+772,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+773,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+774,"sdram_bundle_dqm", false,-1, 1,0);
    tracep->declBus(c+1035,"sdram_bundle_dq", false,-1, 15,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBus(c+871,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+684,"in_psel", false,-1);
    tracep->declBit(c+685,"in_penable", false,-1);
    tracep->declBus(c+1063,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+161,"in_pwrite", false,-1);
    tracep->declBus(c+162,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+163,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+775,"in_pready", false,-1);
    tracep->declBus(c+12,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1064,"in_pslverr", false,-1);
    tracep->declBit(c+1034,"sdram_clk", false,-1);
    tracep->declBit(c+767,"sdram_cke", false,-1);
    tracep->declBit(c+768,"sdram_cs", false,-1);
    tracep->declBit(c+769,"sdram_ras", false,-1);
    tracep->declBit(c+770,"sdram_cas", false,-1);
    tracep->declBit(c+771,"sdram_we", false,-1);
    tracep->declBus(c+772,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+773,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+774,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+1035,"sdram_dq", false,-1, 15,0);
    tracep->declBit(c+29,"sdram_dout_en", false,-1);
    tracep->declBus(c+30,"sdram_dout", false,-1, 15,0);
    tracep->declBus(c+637,"state", false,-1, 1,0);
    tracep->declBit(c+781,"req_accept", false,-1);
    tracep->declBit(c+893,"is_read", false,-1);
    tracep->declBit(c+894,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1010,"clk_i", false,-1);
    tracep->declBit(c+1011,"rst_i", false,-1);
    tracep->declBus(c+895,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+893,"inport_rd_i", false,-1);
    tracep->declBus(c+1075,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+871,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+162,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1035,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+781,"inport_accept_o", false,-1);
    tracep->declBit(c+775,"inport_ack_o", false,-1);
    tracep->declBit(c+1064,"inport_error_o", false,-1);
    tracep->declBus(c+12,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1034,"sdram_clk_o", false,-1);
    tracep->declBit(c+767,"sdram_cke_o", false,-1);
    tracep->declBit(c+768,"sdram_cs_o", false,-1);
    tracep->declBit(c+769,"sdram_ras_o", false,-1);
    tracep->declBit(c+770,"sdram_cas_o", false,-1);
    tracep->declBit(c+771,"sdram_we_o", false,-1);
    tracep->declBus(c+774,"sdram_dqm_o", false,-1, 1,0);
    tracep->declBus(c+772,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+773,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+30,"sdram_data_output_o", false,-1, 15,0);
    tracep->declBit(c+29,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1116,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1117,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1118,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1119,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1119,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1119,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1120,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1104,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1121,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1122,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1123,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1120,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1124,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1125,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1126,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1127,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1128,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1129,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1130,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1074,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1131,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1120,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1074,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1130,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1129,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1125,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1127,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1126,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1128,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1124,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1132,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1133,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1134,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1134,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1135,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1134,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1119,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1119,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1136,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+871,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+895,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+893,"ram_rd_w", false,-1);
    tracep->declBit(c+781,"ram_accept_w", false,-1);
    tracep->declBus(c+162,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+12,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+775,"ram_ack_w", false,-1);
    tracep->declBit(c+896,"ram_req_w", false,-1);
    tracep->declBus(c+782,"command_q", false,-1, 3,0);
    tracep->declBus(c+772,"addr_q", false,-1, 12,0);
    tracep->declBus(c+30,"data_q", false,-1, 15,0);
    tracep->declBit(c+31,"data_rd_en_q", false,-1);
    tracep->declBus(c+774,"dqm_q", false,-1, 1,0);
    tracep->declBit(c+767,"cke_q", false,-1);
    tracep->declBus(c+773,"bank_q", false,-1, 1,0);
    tracep->declBus(c+32,"data_buffer_q", false,-1, 15,0);
    tracep->declBus(c+783,"dqm_buffer_q", false,-1, 1,0);
    tracep->declBus(c+1035,"sdram_data_in_w", false,-1, 15,0);
    tracep->declBit(c+33,"refresh_q", false,-1);
    tracep->declBus(c+34,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+35+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+784,"state_q", false,-1, 3,0);
    tracep->declBus(c+1006,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1007,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+39,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+40,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+897,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+898,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+899,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1120,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+41,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1008,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1137,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+785,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+42,"sample_data0_q", false,-1, 15,0);
    tracep->declBus(c+43,"sample_data_q", false,-1, 15,0);
    tracep->declBus(c+44,"idx", false,-1, 31,0);
    tracep->declBus(c+786,"rd_q", false,-1, 3,0);
    tracep->declBit(c+775,"ack_q", false,-1);
    tracep->declArray(c+787,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+879,"auto_in_psel", false,-1);
    tracep->declBit(c+693,"auto_in_penable", false,-1);
    tracep->declBit(c+161,"auto_in_pwrite", false,-1);
    tracep->declBus(c+873,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1063,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+162,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+163,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1038,"auto_in_pready", false,-1);
    tracep->declBit(c+1064,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1039,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+765,"spi_bundle_sck", false,-1);
    tracep->declBus(c+766,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+11,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1032,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1138,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1139,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1140,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBus(c+900,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+879,"in_psel", false,-1);
    tracep->declBit(c+693,"in_penable", false,-1);
    tracep->declBus(c+1063,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+161,"in_pwrite", false,-1);
    tracep->declBus(c+162,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+163,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1038,"in_pready", false,-1);
    tracep->declBus(c+1039,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1064,"in_pslverr", false,-1);
    tracep->declBit(c+765,"spi_sck", false,-1);
    tracep->declBus(c+766,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+11,"spi_mosi", false,-1);
    tracep->declBit(c+1032,"spi_miso", false,-1);
    tracep->declBit(c+1141,"spi_irq_out", false,-1);
    tracep->declBus(c+638,"wb_adr_i", false,-1, 31,0);
    tracep->declBus(c+639,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+45,"wb_dat_o", false,-1, 31,0);
    tracep->declBit(c+640,"wb_we_i", false,-1);
    tracep->declBit(c+641,"wb_stb_i", false,-1);
    tracep->declBit(c+642,"wb_cyc_i", false,-1);
    tracep->declBit(c+790,"wb_ack_o", false,-1);
    tracep->declBit(c+791,"wb_int_o", false,-1);
    tracep->declBus(c+643,"wb_sel_i", false,-1, 3,0);
    tracep->declBus(c+644,"spi_state", false,-1, 3,0);
    tracep->declBus(c+1074,"SPI_IDLE", false,-1, 3,0);
    tracep->declBus(c+1130,"SPI_REG", false,-1, 3,0);
    tracep->declBus(c+1129,"SPI_FLASH_TX1", false,-1, 3,0);
    tracep->declBus(c+1125,"SPI_FLASH_TX0", false,-1, 3,0);
    tracep->declBus(c+1127,"SPI_FLASH_SS1", false,-1, 3,0);
    tracep->declBus(c+1126,"SPI_FLASH_CTRL", false,-1, 3,0);
    tracep->declBus(c+1128,"SPI_FLASH_INTT", false,-1, 3,0);
    tracep->declBus(c+1124,"SPI_FLASH_SS0", false,-1, 3,0);
    tracep->declBus(c+1132,"SPI_FLASH_DATA", false,-1, 3,0);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1142,"Tp", false,-1, 31,0);
    tracep->declBit(c+1010,"wb_clk_i", false,-1);
    tracep->declBit(c+1011,"wb_rst_i", false,-1);
    tracep->declBus(c+645,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+639,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+45,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+643,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+640,"wb_we_i", false,-1);
    tracep->declBit(c+641,"wb_stb_i", false,-1);
    tracep->declBit(c+642,"wb_cyc_i", false,-1);
    tracep->declBit(c+790,"wb_ack_o", false,-1);
    tracep->declBit(c+1064,"wb_err_o", false,-1);
    tracep->declBit(c+791,"wb_int_o", false,-1);
    tracep->declBus(c+766,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+765,"sclk_pad_o", false,-1);
    tracep->declBit(c+11,"mosi_pad_o", false,-1);
    tracep->declBit(c+1032,"miso_pad_i", false,-1);
    tracep->declBus(c+792,"divider", false,-1, 15,0);
    tracep->declBus(c+793,"ctrl", false,-1, 13,0);
    tracep->declBus(c+46,"ss", false,-1, 7,0);
    tracep->declBus(c+864,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+47,"rx", false,-1, 127,0);
    tracep->declBit(c+794,"rx_negedge", false,-1);
    tracep->declBit(c+795,"tx_negedge", false,-1);
    tracep->declBus(c+796,"char_len", false,-1, 6,0);
    tracep->declBit(c+797,"go", false,-1);
    tracep->declBit(c+798,"lsb", false,-1);
    tracep->declBit(c+799,"ie", false,-1);
    tracep->declBit(c+800,"ass", false,-1);
    tracep->declBit(c+646,"spi_divider_sel", false,-1);
    tracep->declBit(c+647,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+648,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+649,"spi_ss_sel", false,-1);
    tracep->declBit(c+801,"tip", false,-1);
    tracep->declBit(c+802,"pos_edge", false,-1);
    tracep->declBit(c+51,"neg_edge", false,-1);
    tracep->declBit(c+803,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1142,"Tp", false,-1, 31,0);
    tracep->declBit(c+1010,"clk_in", false,-1);
    tracep->declBit(c+1011,"rst", false,-1);
    tracep->declBit(c+801,"enable", false,-1);
    tracep->declBit(c+797,"go", false,-1);
    tracep->declBit(c+803,"last_clk", false,-1);
    tracep->declBus(c+792,"divider", false,-1, 15,0);
    tracep->declBit(c+765,"clk_out", false,-1);
    tracep->declBit(c+802,"pos_edge", false,-1);
    tracep->declBit(c+51,"neg_edge", false,-1);
    tracep->declBus(c+804,"cnt", false,-1, 15,0);
    tracep->declBit(c+805,"cnt_zero", false,-1);
    tracep->declBit(c+806,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1142,"Tp", false,-1, 31,0);
    tracep->declBit(c+1010,"clk", false,-1);
    tracep->declBit(c+1011,"rst", false,-1);
    tracep->declBus(c+650,"latch", false,-1, 3,0);
    tracep->declBus(c+643,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+796,"len", false,-1, 6,0);
    tracep->declBit(c+798,"lsb", false,-1);
    tracep->declBit(c+797,"go", false,-1);
    tracep->declBit(c+802,"pos_edge", false,-1);
    tracep->declBit(c+51,"neg_edge", false,-1);
    tracep->declBit(c+794,"rx_negedge", false,-1);
    tracep->declBit(c+795,"tx_negedge", false,-1);
    tracep->declBit(c+801,"tip", false,-1);
    tracep->declBit(c+803,"last", false,-1);
    tracep->declBus(c+639,"p_in", false,-1, 31,0);
    tracep->declArray(c+47,"p_out", false,-1, 127,0);
    tracep->declBit(c+765,"s_clk", false,-1);
    tracep->declBit(c+1032,"s_in", false,-1);
    tracep->declBit(c+11,"s_out", false,-1);
    tracep->declBus(c+807,"cnt", false,-1, 7,0);
    tracep->declArray(c+47,"data", false,-1, 127,0);
    tracep->declBus(c+808,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+809,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+810,"rx_clk", false,-1);
    tracep->declBit(c+811,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+876,"auto_in_psel", false,-1);
    tracep->declBit(c+877,"auto_in_penable", false,-1);
    tracep->declBit(c+161,"auto_in_pwrite", false,-1);
    tracep->declBus(c+874,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1063,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+162,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+163,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+878,"auto_in_pready", false,-1);
    tracep->declBit(c+1064,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1037,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1030,"uart_rx", false,-1);
    tracep->declBit(c+1031,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+876,"in_psel", false,-1);
    tracep->declBit(c+877,"in_penable", false,-1);
    tracep->declBus(c+1063,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+878,"in_pready", false,-1);
    tracep->declBit(c+1064,"in_pslverr", false,-1);
    tracep->declBus(c+888,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+161,"in_pwrite", false,-1);
    tracep->declBus(c+1037,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+162,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+163,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1030,"uart_rx", false,-1);
    tracep->declBit(c+1031,"uart_tx", false,-1);
    tracep->declBit(c+52,"rtsn", false,-1);
    tracep->declBit(c+1064,"ctsn", false,-1);
    tracep->declBit(c+53,"dtr_pad_o", false,-1);
    tracep->declBit(c+1064,"dsr_pad_i", false,-1);
    tracep->declBit(c+1064,"ri_pad_i", false,-1);
    tracep->declBit(c+1064,"dcd_pad_i", false,-1);
    tracep->declBit(c+54,"interrupt", false,-1);
    tracep->declBit(c+1047,"reg_we", false,-1);
    tracep->declBit(c+1048,"reg_re", false,-1);
    tracep->declBus(c+901,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+902,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+651,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1009,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+55,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1010,"clk", false,-1);
    tracep->declBit(c+1011,"wb_rst_i", false,-1);
    tracep->declBus(c+901,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+903,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1009,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1047,"wb_we_i", false,-1);
    tracep->declBit(c+1048,"wb_re_i", false,-1);
    tracep->declBit(c+1031,"stx_pad_o", false,-1);
    tracep->declBit(c+1030,"srx_pad_i", false,-1);
    tracep->declBus(c+1132,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+55,"rts_pad_o", false,-1);
    tracep->declBit(c+53,"dtr_pad_o", false,-1);
    tracep->declBit(c+54,"int_o", false,-1);
    tracep->declBit(c+812,"enable", false,-1);
    tracep->declBit(c+56,"srx_pad", false,-1);
    tracep->declBus(c+57,"ier", false,-1, 3,0);
    tracep->declBus(c+58,"iir", false,-1, 3,0);
    tracep->declBus(c+59,"fcr", false,-1, 1,0);
    tracep->declBus(c+60,"mcr", false,-1, 4,0);
    tracep->declBus(c+813,"lcr", false,-1, 7,0);
    tracep->declBus(c+61,"msr", false,-1, 7,0);
    tracep->declBus(c+814,"dl", false,-1, 15,0);
    tracep->declBus(c+62,"scratch", false,-1, 7,0);
    tracep->declBit(c+63,"start_dlc", false,-1);
    tracep->declBit(c+64,"lsr_mask_d", false,-1);
    tracep->declBit(c+65,"msi_reset", false,-1);
    tracep->declBus(c+815,"dlc", false,-1, 15,0);
    tracep->declBus(c+66,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+67,"rx_reset", false,-1);
    tracep->declBit(c+816,"tx_reset", false,-1);
    tracep->declBit(c+817,"dlab", false,-1);
    tracep->declBit(c+1077,"cts_pad_i", false,-1);
    tracep->declBit(c+1064,"dsr_pad_i", false,-1);
    tracep->declBit(c+1064,"ri_pad_i", false,-1);
    tracep->declBit(c+1064,"dcd_pad_i", false,-1);
    tracep->declBit(c+68,"loopback", false,-1);
    tracep->declBit(c+1064,"cts", false,-1);
    tracep->declBit(c+1077,"dsr", false,-1);
    tracep->declBit(c+1077,"ri", false,-1);
    tracep->declBit(c+1077,"dcd", false,-1);
    tracep->declBit(c+69,"cts_c", false,-1);
    tracep->declBit(c+70,"dsr_c", false,-1);
    tracep->declBit(c+71,"ri_c", false,-1);
    tracep->declBit(c+72,"dcd_c", false,-1);
    tracep->declBus(c+73,"lsr", false,-1, 7,0);
    tracep->declBit(c+818,"lsr0", false,-1);
    tracep->declBit(c+74,"lsr1", false,-1);
    tracep->declBit(c+75,"lsr2", false,-1);
    tracep->declBit(c+76,"lsr3", false,-1);
    tracep->declBit(c+77,"lsr4", false,-1);
    tracep->declBit(c+819,"lsr5", false,-1);
    tracep->declBit(c+820,"lsr6", false,-1);
    tracep->declBit(c+78,"lsr7", false,-1);
    tracep->declBit(c+79,"lsr0r", false,-1);
    tracep->declBit(c+80,"lsr1r", false,-1);
    tracep->declBit(c+81,"lsr2r", false,-1);
    tracep->declBit(c+82,"lsr3r", false,-1);
    tracep->declBit(c+83,"lsr4r", false,-1);
    tracep->declBit(c+84,"lsr5r", false,-1);
    tracep->declBit(c+85,"lsr6r", false,-1);
    tracep->declBit(c+86,"lsr7r", false,-1);
    tracep->declBit(c+2,"lsr_mask", false,-1);
    tracep->declBit(c+87,"rls_int", false,-1);
    tracep->declBit(c+88,"rda_int", false,-1);
    tracep->declBit(c+89,"ti_int", false,-1);
    tracep->declBit(c+90,"thre_int", false,-1);
    tracep->declBit(c+91,"ms_int", false,-1);
    tracep->declBit(c+821,"tf_push", false,-1);
    tracep->declBit(c+92,"rf_pop", false,-1);
    tracep->declBus(c+1049,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+93,"rf_error_bit", false,-1);
    tracep->declBit(c+74,"rf_overrun", false,-1);
    tracep->declBit(c+822,"rf_push_pulse", false,-1);
    tracep->declBus(c+94,"rf_count", false,-1, 4,0);
    tracep->declBus(c+823,"tf_count", false,-1, 4,0);
    tracep->declBus(c+824,"tstate", false,-1, 2,0);
    tracep->declBus(c+825,"rstate", false,-1, 3,0);
    tracep->declBus(c+95,"counter_t", false,-1, 9,0);
    tracep->declBit(c+96,"thre_set_en", false,-1);
    tracep->declBus(c+97,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+826,"block_value", false,-1, 7,0);
    tracep->declBit(c+827,"serial_out", false,-1);
    tracep->declBit(c+828,"serial_in", false,-1);
    tracep->declBit(c+3,"lsr_mask_condition", false,-1);
    tracep->declBit(c+4,"iir_read", false,-1);
    tracep->declBit(c+5,"msr_read", false,-1);
    tracep->declBit(c+6,"fifo_read", false,-1);
    tracep->declBit(c+7,"fifo_write", false,-1);
    tracep->declBus(c+98,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+99,"lsr0_d", false,-1);
    tracep->declBit(c+100,"lsr1_d", false,-1);
    tracep->declBit(c+101,"lsr2_d", false,-1);
    tracep->declBit(c+102,"lsr3_d", false,-1);
    tracep->declBit(c+103,"lsr4_d", false,-1);
    tracep->declBit(c+104,"lsr5_d", false,-1);
    tracep->declBit(c+105,"lsr6_d", false,-1);
    tracep->declBit(c+106,"lsr7_d", false,-1);
    tracep->declBit(c+107,"rls_int_d", false,-1);
    tracep->declBit(c+108,"thre_int_d", false,-1);
    tracep->declBit(c+109,"ms_int_d", false,-1);
    tracep->declBit(c+110,"ti_int_d", false,-1);
    tracep->declBit(c+111,"rda_int_d", false,-1);
    tracep->declBit(c+112,"rls_int_rise", false,-1);
    tracep->declBit(c+113,"thre_int_rise", false,-1);
    tracep->declBit(c+114,"ms_int_rise", false,-1);
    tracep->declBit(c+115,"ti_int_rise", false,-1);
    tracep->declBit(c+116,"rda_int_rise", false,-1);
    tracep->declBit(c+117,"rls_int_pnd", false,-1);
    tracep->declBit(c+118,"rda_int_pnd", false,-1);
    tracep->declBit(c+119,"thre_int_pnd", false,-1);
    tracep->declBit(c+120,"ms_int_pnd", false,-1);
    tracep->declBit(c+121,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1142,"Tp", false,-1, 31,0);
    tracep->declBus(c+1142,"width", false,-1, 31,0);
    tracep->declBus(c+1112,"init_value", false,-1, 0,0);
    tracep->declBit(c+1011,"rst_i", false,-1);
    tracep->declBit(c+1010,"clk_i", false,-1);
    tracep->declBit(c+1064,"stage1_rst_i", false,-1);
    tracep->declBit(c+1077,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1030,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+56,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+122,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1010,"clk", false,-1);
    tracep->declBit(c+1011,"wb_rst_i", false,-1);
    tracep->declBus(c+813,"lcr", false,-1, 7,0);
    tracep->declBit(c+92,"rf_pop", false,-1);
    tracep->declBit(c+828,"srx_pad_i", false,-1);
    tracep->declBit(c+812,"enable", false,-1);
    tracep->declBit(c+67,"rx_reset", false,-1);
    tracep->declBit(c+2,"lsr_mask", false,-1);
    tracep->declBus(c+95,"counter_t", false,-1, 9,0);
    tracep->declBus(c+94,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1049,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+74,"rf_overrun", false,-1);
    tracep->declBit(c+93,"rf_error_bit", false,-1);
    tracep->declBus(c+825,"rstate", false,-1, 3,0);
    tracep->declBit(c+822,"rf_push_pulse", false,-1);
    tracep->declBus(c+829,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+830,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+831,"rshift", false,-1, 7,0);
    tracep->declBit(c+832,"rparity", false,-1);
    tracep->declBit(c+833,"rparity_error", false,-1);
    tracep->declBit(c+834,"rframing_error", false,-1);
    tracep->declBit(c+123,"rbit_in", false,-1);
    tracep->declBit(c+835,"rparity_xor", false,-1);
    tracep->declBus(c+836,"counter_b", false,-1, 7,0);
    tracep->declBit(c+124,"rf_push_q", false,-1);
    tracep->declBus(c+837,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+838,"rf_push", false,-1);
    tracep->declBit(c+839,"break_error", false,-1);
    tracep->declBit(c+840,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+841,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+842,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+843,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1074,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1130,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1129,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1125,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1127,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1126,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1128,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1124,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1132,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1133,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1143,"sr_push", false,-1, 3,0);
    tracep->declBus(c+844,"toc_value", false,-1, 9,0);
    tracep->declBus(c+845,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1144,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1135,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1120,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1145,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1010,"clk", false,-1);
    tracep->declBit(c+1011,"wb_rst_i", false,-1);
    tracep->declBit(c+822,"push", false,-1);
    tracep->declBit(c+92,"pop", false,-1);
    tracep->declBus(c+837,"data_in", false,-1, 10,0);
    tracep->declBit(c+67,"fifo_reset", false,-1);
    tracep->declBit(c+2,"reset_status", false,-1);
    tracep->declBus(c+1049,"data_out", false,-1, 10,0);
    tracep->declBit(c+74,"overrun", false,-1);
    tracep->declBus(c+94,"count", false,-1, 4,0);
    tracep->declBit(c+93,"error_bit", false,-1);
    tracep->declBus(c+1050,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+125+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+846,"top", false,-1, 3,0);
    tracep->declBus(c+141,"bottom", false,-1, 3,0);
    tracep->declBus(c+847,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+142,"word0", false,-1, 2,0);
    tracep->declBus(c+143,"word1", false,-1, 2,0);
    tracep->declBus(c+144,"word2", false,-1, 2,0);
    tracep->declBus(c+145,"word3", false,-1, 2,0);
    tracep->declBus(c+146,"word4", false,-1, 2,0);
    tracep->declBus(c+147,"word5", false,-1, 2,0);
    tracep->declBus(c+148,"word6", false,-1, 2,0);
    tracep->declBus(c+149,"word7", false,-1, 2,0);
    tracep->declBus(c+150,"word8", false,-1, 2,0);
    tracep->declBus(c+151,"word9", false,-1, 2,0);
    tracep->declBus(c+152,"word10", false,-1, 2,0);
    tracep->declBus(c+153,"word11", false,-1, 2,0);
    tracep->declBus(c+154,"word12", false,-1, 2,0);
    tracep->declBus(c+155,"word13", false,-1, 2,0);
    tracep->declBus(c+156,"word14", false,-1, 2,0);
    tracep->declBus(c+157,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1120,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1140,"data_width", false,-1, 31,0);
    tracep->declBus(c+1135,"depth", false,-1, 31,0);
    tracep->declBit(c+1010,"clk", false,-1);
    tracep->declBit(c+822,"we", false,-1);
    tracep->declBus(c+846,"a", false,-1, 3,0);
    tracep->declBus(c+141,"dpra", false,-1, 3,0);
    tracep->declBus(c+848,"di", false,-1, 7,0);
    tracep->declBus(c+1050,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+652+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1010,"clk", false,-1);
    tracep->declBit(c+1011,"wb_rst_i", false,-1);
    tracep->declBus(c+813,"lcr", false,-1, 7,0);
    tracep->declBit(c+821,"tf_push", false,-1);
    tracep->declBus(c+903,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+812,"enable", false,-1);
    tracep->declBit(c+816,"tx_reset", false,-1);
    tracep->declBit(c+2,"lsr_mask", false,-1);
    tracep->declBit(c+827,"stx_pad_o", false,-1);
    tracep->declBus(c+824,"tstate", false,-1, 2,0);
    tracep->declBus(c+823,"tf_count", false,-1, 4,0);
    tracep->declBus(c+849,"counter", false,-1, 4,0);
    tracep->declBus(c+850,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+851,"shift_out", false,-1, 6,0);
    tracep->declBit(c+852,"stx_o_tmp", false,-1);
    tracep->declBit(c+853,"parity_xor", false,-1);
    tracep->declBit(c+854,"tf_pop", false,-1);
    tracep->declBit(c+855,"bit_out", false,-1);
    tracep->declBus(c+903,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+865,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+158,"tf_overrun", false,-1);
    tracep->declBus(c+1080,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1063,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1098,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1099,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1110,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1146,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1140,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1135,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1120,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1145,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1010,"clk", false,-1);
    tracep->declBit(c+1011,"wb_rst_i", false,-1);
    tracep->declBit(c+821,"push", false,-1);
    tracep->declBit(c+854,"pop", false,-1);
    tracep->declBus(c+903,"data_in", false,-1, 7,0);
    tracep->declBit(c+816,"fifo_reset", false,-1);
    tracep->declBit(c+2,"reset_status", false,-1);
    tracep->declBus(c+865,"data_out", false,-1, 7,0);
    tracep->declBit(c+158,"overrun", false,-1);
    tracep->declBus(c+823,"count", false,-1, 4,0);
    tracep->declBus(c+856,"top", false,-1, 3,0);
    tracep->declBus(c+857,"bottom", false,-1, 3,0);
    tracep->declBus(c+858,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1120,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1140,"data_width", false,-1, 31,0);
    tracep->declBus(c+1135,"depth", false,-1, 31,0);
    tracep->declBit(c+1010,"clk", false,-1);
    tracep->declBit(c+821,"we", false,-1);
    tracep->declBus(c+856,"a", false,-1, 3,0);
    tracep->declBus(c+857,"dpra", false,-1, 3,0);
    tracep->declBus(c+903,"di", false,-1, 7,0);
    tracep->declBus(c+865,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+668+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBit(c+686,"auto_in_psel", false,-1);
    tracep->declBit(c+687,"auto_in_penable", false,-1);
    tracep->declBit(c+161,"auto_in_pwrite", false,-1);
    tracep->declBus(c+873,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1063,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+162,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+163,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1065,"auto_in_pready", false,-1);
    tracep->declBit(c+1066,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1067,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1024,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1025,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1026,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1027,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1028,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1029,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1010,"clock", false,-1);
    tracep->declBit(c+1011,"reset", false,-1);
    tracep->declBus(c+900,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+686,"in_psel", false,-1);
    tracep->declBit(c+687,"in_penable", false,-1);
    tracep->declBus(c+1063,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+161,"in_pwrite", false,-1);
    tracep->declBus(c+162,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+163,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1065,"in_pready", false,-1);
    tracep->declBus(c+1067,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1066,"in_pslverr", false,-1);
    tracep->declBus(c+1024,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1025,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1026,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1027,"vga_hsync", false,-1);
    tracep->declBit(c+1028,"vga_vsync", false,-1);
    tracep->declBit(c+1029,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+765,"sck", false,-1);
    tracep->declBit(c+859,"ss", false,-1);
    tracep->declBit(c+11,"mosi", false,-1);
    tracep->declBit(c+1051,"miso", false,-1);
    tracep->declBus(c+8,"data", false,-1, 7,0);
    tracep->declBus(c+9,"bit_cnt", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+765,"sck", false,-1);
    tracep->declBit(c+860,"ss", false,-1);
    tracep->declBit(c+11,"mosi", false,-1);
    tracep->declBit(c+1052,"miso", false,-1);
    tracep->declBit(c+860,"reset", false,-1);
    tracep->declBus(c+761,"state", false,-1, 2,0);
    tracep->declBus(c+762,"counter", false,-1, 7,0);
    tracep->declBus(c+1053,"cmd", false,-1, 7,0);
    tracep->declBus(c+1054,"addr", false,-1, 23,0);
    tracep->declBus(c+763,"data", false,-1, 31,0);
    tracep->declBit(c+764,"ren", false,-1);
    tracep->declBus(c+10,"rdata", false,-1, 31,0);
    tracep->declBus(c+1055,"raddr", false,-1, 31,0);
    tracep->declBus(c+1056,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+765,"clock", false,-1);
    tracep->declBit(c+764,"valid", false,-1);
    tracep->declBus(c+1053,"cmd", false,-1, 7,0);
    tracep->declBus(c+1055,"addr", false,-1, 31,0);
    tracep->declBus(c+10,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+904,"sck", false,-1);
    tracep->declBit(c+905,"ce_n", false,-1);
    tracep->declBus(c+1033,"dio", false,-1, 3,0);
    tracep->declBus(c+866,"dout_en", false,-1, 3,0);
    tracep->declBus(c+1057,"dout", false,-1, 3,0);
    tracep->declBus(c+1033,"din", false,-1, 3,0);
    tracep->declBit(c+1058,"QPI_MODE", false,-1);
    tracep->declBus(c+867,"cmd", false,-1, 7,0);
    tracep->declBus(c+868,"addr", false,-1, 23,0);
    tracep->declBus(c+1059,"data", false,-1, 31,0);
    tracep->declBus(c+1060,"rdata", false,-1, 31,0);
    tracep->declBus(c+869,"counter", false,-1, 7,0);
    tracep->declBus(c+870,"state", false,-1, 3,0);
    tracep->declBus(c+1061,"data_bswap", false,-1, 31,0);
    tracep->declBus(c+1062,"wdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1034,"clk", false,-1);
    tracep->declBit(c+767,"cke", false,-1);
    tracep->declBit(c+768,"cs", false,-1);
    tracep->declBit(c+769,"ras", false,-1);
    tracep->declBit(c+770,"cas", false,-1);
    tracep->declBit(c+771,"we", false,-1);
    tracep->declBus(c+772,"a", false,-1, 12,0);
    tracep->declBus(c+773,"ba", false,-1, 1,0);
    tracep->declBus(c+774,"dqm", false,-1, 1,0);
    tracep->declBus(c+1035,"dq", false,-1, 15,0);
    tracep->declBus(c+1147,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1148,"CMD_NOP", false,-1, 2,0);
    tracep->declBus(c+1099,"CMD_ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1146,"CMD_READ", false,-1, 2,0);
    tracep->declBus(c+1110,"CMD_WRITE", false,-1, 2,0);
    tracep->declBus(c+1149,"CMD_TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1098,"CMD_PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1063,"CMD_REFRESH", false,-1, 2,0);
    tracep->declBus(c+1080,"CMD_LOAD_MODE", false,-1, 2,0);
    tracep->declBus(c+1150,"SDRAM_SIZE", false,-1, 31,0);
    tracep->declQuad(c+740,"bank_temp", false,-1, 63,0);
    tracep->declBus(c+742,"dout_en", false,-1, 15,0);
    tracep->declBus(c+743,"dout", false,-1, 15,0);
    tracep->declBus(c+1035,"din", false,-1, 15,0);
    tracep->declBus(c+744,"CAS_Latency", false,-1, 2,0);
    tracep->declBus(c+745,"Brust_Length", false,-1, 2,0);
    tracep->declBus(c+861,"command", false,-1, 2,0);
    tracep->declBus(c+746,"Line_Address", false,-1, 12,0);
    tracep->declBus(c+747,"L_Bank", false,-1, 1,0);
    tracep->declBus(c+748,"Row_Address", false,-1, 8,0);
    tracep->declBus(c+749,"dqm_buf1", false,-1, 1,0);
    tracep->declBus(c+750,"dqm_buf2", false,-1, 1,0);
    tracep->declBus(c+751,"dqm_buf3", false,-1, 1,0);
    tracep->declBus(c+752,"r_counter", false,-1, 3,0);
    tracep->declBus(c+753,"w_counter", false,-1, 3,0);
    tracep->declBit(c+754,"read_flag", false,-1);
    tracep->declBus(c+755,"R_Address", false,-1, 8,0);
    tracep->declBus(c+756,"W_Address", false,-1, 8,0);
    tracep->declBus(c+757,"W_data", false,-1, 15,0);
    tracep->declBus(c+758,"r_sdram_address", false,-1, 23,0);
    tracep->declBus(c+759,"w_sdram_address", false,-1, 23,0);
    tracep->declBus(c+760,"Length", false,-1, 3,0);
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
    bufp->fullIData(oldp+12,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                               << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))),32);
    bufp->fullBit(oldp+13,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullBit(oldp+14,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+15,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+16,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+17,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))));
    bufp->fullBit(oldp+18,((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter))));
    bufp->fullBit(oldp+19,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_sck));
    bufp->fullBit(oldp+20,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_ce_n));
    bufp->fullCData(oldp+21,(((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter))
                               ? (1U & (0x35U >> (7U 
                                                  & ((IData)(7U) 
                                                     - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter)))))
                               : 0U)),4);
    bufp->fullCData(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullCData(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter),8);
    bufp->fullBit(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullIData(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullBit(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+29,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullSData(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),16);
    bufp->fullBit(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullSData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),16);
    bufp->fullBit(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullSData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),16);
    bufp->fullSData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),16);
    bufp->fullIData(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullIData(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullCData(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+52,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                     >> 1U)))));
    bufp->fullBit(oldp+53,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+55,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                  >> 1U))));
    bufp->fullBit(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullCData(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullCData(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+68,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                  >> 4U))));
    bufp->fullBit(oldp+69,((IData)((0x10U != (0x12U 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+70,((IData)((0x11U == (0x11U 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+71,((IData)((0x14U == (0x14U 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+72,((IData)((0x18U == (0x18U 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+73,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+75,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                  >> 1U))));
    bufp->fullBit(oldp+76,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+77,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                  >> 2U))));
    bufp->fullBit(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+93,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullCData(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullSData(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+96,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+112,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+113,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+114,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+115,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+116,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullBit(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullCData(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullBit(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullBit(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+160,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w),32);
    bufp->fullCData(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullIData(oldp+164,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullBit(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_awvalid));
    bufp->fullCData(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_wvalid));
    bufp->fullQData(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),64);
    bufp->fullCData(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),8);
    bufp->fullCData(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_arvalid));
    bufp->fullCData(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg),32);
    bufp->fullQData(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),64);
    bufp->fullQData(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg),64);
    bufp->fullCData(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),8);
    bufp->fullCData(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg),8);
    bufp->fullCData(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+194,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+195,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state))));
    bufp->fullIData(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_w_addr_o),32);
    bufp->fullCData(oldp+197,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__mask)),3);
    bufp->fullBit(oldp+198,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+199,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state))));
    bufp->fullQData(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata),64);
    bufp->fullCData(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb),8);
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast));
    bufp->fullBit(oldp+204,(((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state)) 
                             | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state)))));
    bufp->fullBit(oldp+205,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+206,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_state))));
    bufp->fullIData(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_addr_o),32);
    bufp->fullCData(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_size_o),3);
    bufp->fullBit(oldp+209,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_state))));
    bufp->fullBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+211,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+213,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+215,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+216,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullCData(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullSData(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullCData(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullIData(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullQData(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullQData(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+261,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                    ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram[2U] 
                                       >> 8U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast)))));
    bufp->fullWData(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),73);
    bufp->fullBit(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid));
    bufp->fullIData(oldp+267,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+268,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+271,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+272,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+273,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullQData(oldp+276,((((QData)((IData)((0xffU 
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
    bufp->fullCData(oldp+278,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+279,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullBit(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullCData(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r4),8);
    bufp->fullCData(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r5),8);
    bufp->fullCData(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r6),8);
    bufp->fullCData(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r7),8);
    bufp->fullSData(oldp+291,((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 3U))),10);
    bufp->fullQData(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),64);
    bufp->fullSData(oldp+294,((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 3U))),10);
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+297,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
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
    bufp->fullBit(oldp+298,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 1U))));
    bufp->fullBit(oldp+299,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+300,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+301,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullQData(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),64);
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+310,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                    | ((0xcU & (8U 
                                                ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                       | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x17U)) 
                                          | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
    bufp->fullBit(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+357,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullCData(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+370,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+374,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+378,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+382,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+386,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+390,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+394,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+398,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+402,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+406,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+410,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+414,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+418,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+422,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+426,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+430,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+434,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+438,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+442,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+446,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+450,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+454,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+458,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+462,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+466,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+470,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+474,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+478,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+482,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+486,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+490,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+494,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_pc_o_r),32);
    bufp->fullIData(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r),32);
    bufp->fullBit(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_stall_r));
    bufp->fullIData(oldp+501,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_mret)
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
    bufp->fullBit(oldp+502,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_mret) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_ecall) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h15124160__0) 
                                   | (0x67U == (0x7fU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)))))));
    bufp->fullBit(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_r_valid_o));
    bufp->fullIData(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__pc),32);
    bufp->fullBit(oldp+505,((0x63U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r))));
    bufp->fullBit(oldp+506,((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r))));
    bufp->fullBit(oldp+507,((0x67U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r))));
    bufp->fullCData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_rd),5);
    bufp->fullBit(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_rd_wen));
    bufp->fullCData(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_rs1),5);
    bufp->fullCData(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_rs2),5);
    bufp->fullIData(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r),32);
    bufp->fullCData(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_alu_opt),4);
    bufp->fullCData(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_src_sel),2);
    bufp->fullCData(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt),2);
    bufp->fullCData(oldp+516,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                     >> 0xcU))),3);
    bufp->fullIData(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src1),32);
    bufp->fullIData(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src2),32);
    bufp->fullBit(oldp+519,((1U & (~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__exu_result_r))))));
    bufp->fullIData(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__exu_result_r),32);
    bufp->fullBit(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__ren));
    bufp->fullIData(oldp+522,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h623bd169__0
                                : 0U)),32);
    bufp->fullCData(oldp+523,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__rsize)),3);
    bufp->fullBit(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__wen));
    bufp->fullBit(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_ecall));
    bufp->fullBit(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_mret));
    bufp->fullIData(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wr_csr_data),32);
    bufp->fullIData(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                              [0x300U]),32);
    bufp->fullIData(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                              [0x305U]),32);
    bufp->fullIData(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                              [0x341U]),32);
    bufp->fullBit(oldp+531,((1U & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_r_valid_o)
                                    : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state))
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__ren)
                                        : 0U)))));
    bufp->fullCData(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state),2);
    bufp->fullCData(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state),3);
    bufp->fullQData(oldp+534,((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src2))),64);
    bufp->fullCData(oldp+536,(((0U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__mask))
                                ? 1U : ((1U == (7U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__mask))
                                         ? 3U : 0xfU))),8);
    bufp->fullCData(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_cnt),8);
    bufp->fullCData(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_state),2);
    bufp->fullSData(oldp+539,((0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r)),12);
    bufp->fullBit(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__wr_en));
    bufp->fullIData(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__wr_data_r),32);
    bufp->fullIData(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__temp),32);
    bufp->fullIData(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__mepc_inst_r),32);
    bufp->fullIData(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                              [0x342U]),32);
    bufp->fullIData(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data),32);
    bufp->fullIData(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_b_data),32);
    bufp->fullIData(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__alu_out_data_r),32);
    bufp->fullBit(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__sub_flag));
    bufp->fullQData(oldp+549,((((QData)((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data 
                                                 >> 0x1fU))) 
                                << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data)))),33);
    bufp->fullQData(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__alu_b_t),33);
    bufp->fullQData(oldp+553,((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__sub_flag))),33);
    bufp->fullQData(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out),33);
    bufp->fullBit(oldp+557,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data 
                             >> 0x1fU)));
    bufp->fullBit(oldp+558,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__alu_b_t 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+559,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+560,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+561,((1U & VL_REDXOR_64((0x180000000ULL 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out)))));
    bufp->fullBit(oldp+562,((1U & ((((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data 
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
    bufp->fullIData(oldp+563,((IData)(((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data))) 
                                       >> (0x3fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_b_data)))),32);
    bufp->fullCData(oldp+564,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)),7);
    bufp->fullCData(oldp+565,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                               >> 0x19U)),7);
    bufp->fullIData(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_typeI),32);
    bufp->fullIData(oldp+567,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)),32);
    bufp->fullIData(oldp+568,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+569,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
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
    bufp->fullIData(oldp+570,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
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
    bufp->fullSData(oldp+571,(((0x1000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                           >> 0x13U)) 
                               | ((0x800U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                             << 4U)) 
                                  | ((0x7e0U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                >> 0x14U)) 
                                     | (0x1eU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                 >> 7U)))))),13);
    bufp->fullSData(oldp+572,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+573,(((0x100000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                             >> 0xbU)) 
                               | ((0xff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r) 
                                  | ((0x800U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                >> 9U)) 
                                     | (0x7feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                  >> 0x14U)))))),21);
    bufp->fullSData(oldp+574,(((0xfe0U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                           >> 7U)))),12);
    bufp->fullIData(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_pc_o_t),32);
    bufp->fullIData(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_t),32);
    bufp->fullBit(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__flush_inst));
    bufp->fullIData(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__rsize),32);
    bufp->fullIData(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__mask),32);
    bufp->fullIData(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[0]),32);
    bufp->fullIData(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[1]),32);
    bufp->fullIData(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[2]),32);
    bufp->fullIData(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[3]),32);
    bufp->fullIData(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[4]),32);
    bufp->fullIData(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[5]),32);
    bufp->fullIData(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[6]),32);
    bufp->fullIData(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[7]),32);
    bufp->fullIData(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[8]),32);
    bufp->fullIData(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[9]),32);
    bufp->fullIData(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[10]),32);
    bufp->fullIData(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[11]),32);
    bufp->fullIData(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[12]),32);
    bufp->fullIData(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[13]),32);
    bufp->fullIData(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[14]),32);
    bufp->fullIData(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[15]),32);
    bufp->fullIData(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[16]),32);
    bufp->fullIData(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[17]),32);
    bufp->fullIData(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[18]),32);
    bufp->fullIData(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[19]),32);
    bufp->fullIData(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[20]),32);
    bufp->fullIData(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[21]),32);
    bufp->fullIData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[22]),32);
    bufp->fullIData(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[23]),32);
    bufp->fullIData(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[24]),32);
    bufp->fullIData(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[25]),32);
    bufp->fullIData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[26]),32);
    bufp->fullIData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[27]),32);
    bufp->fullIData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[28]),32);
    bufp->fullIData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[29]),32);
    bufp->fullIData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[30]),32);
    bufp->fullIData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[31]),32);
    bufp->fullBit(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu_u0__idu_rd_wen));
    bufp->fullBit(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullIData(oldp+623,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+629,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+630,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+631,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                   << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullCData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+636,((0xffU & ((IData)(7U) 
                                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                           << 1U)))),8);
    bufp->fullCData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullIData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),32);
    bufp->fullIData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullBit(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullCData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullCData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_state),4);
    bufp->fullCData(oldp+645,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i)),5);
    bufp->fullBit(oldp+646,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i)))));
    bufp->fullBit(oldp+647,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i)))));
    bufp->fullCData(oldp+648,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
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
    bufp->fullBit(oldp+649,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i)))));
    bufp->fullCData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+684,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+685,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+686,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+687,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+688,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+689,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+690,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+691,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+692,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+693,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullCData(oldp+694,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                   << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r))),2);
    bufp->fullQData(oldp+695,((((QData)((IData)(((1U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                  : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((1U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                              ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                              : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))))),64);
    bufp->fullCData(oldp+697,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullQData(oldp+698,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullBit(oldp+700,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+701,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+702,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+703,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+704,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+705,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+706,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+707,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+708,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+709,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+710,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+711,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+712,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+713,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+714,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+715,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+716,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+717,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+718,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+719,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+720,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+721,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+722,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+723,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+724,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+725,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+726,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+727,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+728,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+729,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+730,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+731,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+732,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+733,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+734,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullIData(oldp+735,(((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
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
    bufp->fullBit(oldp+736,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_ready_i))));
    bufp->fullIData(oldp+737,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state))
                                ? (IData)(vlSelf->__VdfgTmp_hfe507537__0)
                                : 0U)),32);
    bufp->fullBit(oldp+738,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_last_i))));
    bufp->fullBit(oldp+739,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu_u0__idu_rd_wen)
                              : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu_u0__idu_rd_wen)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rd_wen)))));
    bufp->fullQData(oldp+740,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank
                                                [0U])) 
                                << 0x30U) | (((QData)((IData)(
                                                              ((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank
                                                                [1U] 
                                                                << 0x10U) 
                                                               | vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank
                                                               [2U]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank
                                                               [3U]))))),64);
    bufp->fullSData(oldp+742,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__read_flag)
                                ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+743,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__dout),16);
    bufp->fullCData(oldp+744,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__CAS_Latency),3);
    bufp->fullCData(oldp+745,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__Brust_Length),3);
    bufp->fullSData(oldp+746,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__Line_Address),13);
    bufp->fullCData(oldp+747,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__L_Bank),2);
    bufp->fullSData(oldp+748,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__Row_Address),9);
    bufp->fullCData(oldp+749,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__dqm_buf1),2);
    bufp->fullCData(oldp+750,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__dqm_buf2),2);
    bufp->fullCData(oldp+751,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__dqm_buf3),2);
    bufp->fullCData(oldp+752,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__r_counter),4);
    bufp->fullCData(oldp+753,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__w_counter),4);
    bufp->fullBit(oldp+754,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__read_flag));
    bufp->fullSData(oldp+755,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__R_Address),9);
    bufp->fullSData(oldp+756,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__W_Address),9);
    bufp->fullSData(oldp+757,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__W_data),16);
    bufp->fullIData(oldp+758,((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__L_Bank) 
                                << 0x16U) | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__Line_Address) 
                                              << 9U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__R_Address)))),24);
    bufp->fullIData(oldp+759,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__w_sdram_address),24);
    bufp->fullCData(oldp+760,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__Length),4);
    bufp->fullCData(oldp+761,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+762,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullIData(oldp+763,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+764,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+765,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+766,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+768,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+769,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+770,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+771,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),2);
    bufp->fullBit(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullBit(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+777,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+778,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullCData(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullCData(oldp+780,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+781,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullCData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),2);
    bufp->fullCData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullIData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullCData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullWData(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullBit(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_int_o));
    bufp->fullSData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullBit(oldp+794,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+795,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+796,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+797,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+798,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+799,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+800,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+803,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+805,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+806,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+808,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullCData(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullSData(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullSData(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullBit(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+817,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullCData(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullSData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+839,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+840,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+841,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+842,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+843,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+845,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+847,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+848,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullCData(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+858,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+859,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                   >> 7U))));
    bufp->fullBit(oldp+860,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+861,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))),3);
    bufp->fullCData(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullIData(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullCData(oldp+866,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h299493e7__0)
                                ? 0xfU : 0U)),4);
    bufp->fullCData(oldp+867,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+868,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+869,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullCData(oldp+870,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),4);
    bufp->fullIData(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w),32);
    bufp->fullBit(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullIData(oldp+873,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),30);
    bufp->fullIData(oldp+874,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),29);
    bufp->fullBit(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel));
    bufp->fullBit(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel));
    bufp->fullBit(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable));
    bufp->fullBit(oldp+878,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel))));
    bufp->fullBit(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_psel));
    bufp->fullBit(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullCData(oldp+887,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullIData(oldp+888,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullBit(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullIData(oldp+891,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullIData(oldp+892,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullBit(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+897,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                         >> 1U))),13);
    bufp->fullSData(oldp+898,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+899,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                     >> 0xaU))),2);
    bufp->fullIData(oldp+900,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullCData(oldp+901,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),3);
    bufp->fullCData(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullBit(oldp+904,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+905,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullBit(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_bready));
    bufp->fullBit(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_rready));
    bufp->fullBit(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_w_last_i));
    bufp->fullCData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_ready_i));
    bufp->fullCData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19),4);
    bufp->fullBit(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_last_i));
    bufp->fullBit(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4));
    bufp->fullBit(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_bready));
    bufp->fullBit(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_rready));
    bufp->fullBit(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__nodeIn_awready));
    bufp->fullBit(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAROI_in_0_arready_T_4));
    bufp->fullBit(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+959,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+960,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+961,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+962,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+963,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+964,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+965,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+966,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+967,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+968,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+969,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+970,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+971,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+972,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+973,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+974,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+975,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+976,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+977,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+978,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+979,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+980,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+981,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+982,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+983,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+984,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+985,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+986,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+987,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+988,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+989,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+990,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__stall));
    bufp->fullBit(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_r_ready_i));
    bufp->fullIData(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__inst),32);
    bufp->fullBit(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_r_last_i));
    bufp->fullBit(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rd_wen));
    bufp->fullIData(oldp+996,((IData)(vlSelf->__VdfgTmp_hfe507537__0)),32);
    bufp->fullBit(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__lsu_rd_wen_r));
    bufp->fullBit(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__lsu_rd_wen_w));
    bufp->fullCData(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullCData(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate),2);
    bufp->fullBit(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullCData(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1010,(vlSelf->clock));
    bufp->fullBit(oldp+1011,(vlSelf->reset));
    bufp->fullSData(oldp+1012,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1013,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1014,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1015,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1016,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1017,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1018,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1019,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1020,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1021,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1022,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1023,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1024,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1025,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1026,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1027,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1028,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1029,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1030,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1031,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1032,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din),4);
    bufp->fullBit(oldp+1034,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullSData(oldp+1035,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__din),16);
    bufp->fullBit(oldp+1036,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel))));
    bufp->fullIData(oldp+1037,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1038,((1U & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_state))
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o)
                                     : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_state))
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o)
                                         : 0U)))));
    bufp->fullIData(oldp+1039,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_state))
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
    bufp->fullCData(oldp+1040,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                         << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r))
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullBit(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullIData(oldp+1042,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
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
    bufp->fullIData(oldp+1043,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)
                                 ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__wr_en)
                                          ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                                         [(0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r)]
                                          : 0U))),32);
    bufp->fullBit(oldp+1044,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+1045,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+1046,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1049,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullBit(oldp+1051,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullBit(oldp+1052,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullCData(oldp+1053,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1054,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1055,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1056,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+1057,((vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h6b154942__0 
                                >> 0x1cU)),4);
    bufp->fullBit(oldp+1058,(vlSelf->ysyxSoCFull__DOT__psram__DOT__QPI_MODE));
    bufp->fullIData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data),32);
    bufp->fullIData(oldp+1060,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullIData(oldp+1061,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bswap),32);
    bufp->fullIData(oldp+1062,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                    >> 0x18U))))),32);
    bufp->fullCData(oldp+1063,(1U),3);
    bufp->fullBit(oldp+1064,(0U));
    bufp->fullBit(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+1074,(0U),4);
    bufp->fullCData(oldp+1075,(0U),8);
    bufp->fullCData(oldp+1076,(1U),2);
    bufp->fullBit(oldp+1077,(1U));
    bufp->fullBit(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1079,(0U),32);
    bufp->fullCData(oldp+1080,(0U),3);
    bufp->fullCData(oldp+1081,(0U),2);
    bufp->fullBit(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullQData(oldp+1083,(0ULL),64);
    bufp->fullBit(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullQData(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),64);
    bufp->fullBit(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_inst_t),32);
    bufp->fullIData(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_result_t),32);
    bufp->fullCData(oldp+1097,(2U),2);
    bufp->fullCData(oldp+1098,(2U),3);
    bufp->fullCData(oldp+1099,(3U),3);
    bufp->fullCData(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_cnt),8);
    bufp->fullBit(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__carry_flag));
    bufp->fullBit(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__signed_flag));
    bufp->fullCData(oldp+1103,(0U),5);
    bufp->fullIData(oldp+1104,(0xdU),32);
    bufp->fullIData(oldp+1105,(0xcU),32);
    bufp->fullIData(oldp+1106,(0x15U),32);
    bufp->fullIData(oldp+1107,(0x20U),32);
    bufp->fullIData(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__inst_t),32);
    bufp->fullCData(oldp+1109,(0x35U),8);
    bufp->fullCData(oldp+1110,(4U),3);
    bufp->fullBit(oldp+1111,(0U));
    bufp->fullBit(oldp+1112,(1U));
    bufp->fullCData(oldp+1113,(0x15U),8);
    bufp->fullCData(oldp+1114,(0xebU),8);
    bufp->fullCData(oldp+1115,(0x38U),8);
    bufp->fullIData(oldp+1116,(0x64U),32);
    bufp->fullIData(oldp+1117,(0x18U),32);
    bufp->fullIData(oldp+1118,(9U),32);
    bufp->fullIData(oldp+1119,(2U),32);
    bufp->fullIData(oldp+1120,(4U),32);
    bufp->fullIData(oldp+1121,(0x2000U),32);
    bufp->fullIData(oldp+1122,(0x2710U),32);
    bufp->fullIData(oldp+1123,(0x30cU),32);
    bufp->fullCData(oldp+1124,(7U),4);
    bufp->fullCData(oldp+1125,(3U),4);
    bufp->fullCData(oldp+1126,(5U),4);
    bufp->fullCData(oldp+1127,(4U),4);
    bufp->fullCData(oldp+1128,(6U),4);
    bufp->fullCData(oldp+1129,(2U),4);
    bufp->fullCData(oldp+1130,(1U),4);
    bufp->fullSData(oldp+1131,(0x21U),13);
    bufp->fullCData(oldp+1132,(8U),4);
    bufp->fullCData(oldp+1133,(9U),4);
    bufp->fullIData(oldp+1134,(0xaU),32);
    bufp->fullIData(oldp+1135,(0x10U),32);
    bufp->fullIData(oldp+1136,(6U),32);
    bufp->fullIData(oldp+1137,(0x11U),32);
    bufp->fullIData(oldp+1138,(0x30000000U),32);
    bufp->fullIData(oldp+1139,(0x3fffffffU),32);
    bufp->fullIData(oldp+1140,(8U),32);
    bufp->fullBit(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullIData(oldp+1142,(1U),32);
    bufp->fullCData(oldp+1143,(0xaU),4);
    bufp->fullIData(oldp+1144,(0xbU),32);
    bufp->fullIData(oldp+1145,(5U),32);
    bufp->fullCData(oldp+1146,(5U),3);
    bufp->fullIData(oldp+1147,(3U),32);
    bufp->fullCData(oldp+1148,(7U),3);
    bufp->fullCData(oldp+1149,(6U),3);
    bufp->fullIData(oldp+1150,(0x1000000U),32);
}
