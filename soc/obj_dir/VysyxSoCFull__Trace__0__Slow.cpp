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
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBus(c+1022,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1023,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1024,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1025,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1026,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1027,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1028,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1029,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1030,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1031,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1032,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1033,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1034,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1035,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1036,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1037,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1038,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1039,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1040,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1041,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBus(c+1022,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1023,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1024,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1025,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1026,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1027,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1028,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1029,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1030,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1031,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1032,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1033,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1034,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1035,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1036,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1037,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1038,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1039,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1040,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1041,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+775,"spi_sck", false,-1);
    tracep->declBus(c+776,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+11,"spi_mosi", false,-1);
    tracep->declBit(c+1042,"spi_miso", false,-1);
    tracep->declBit(c+1040,"uart_rx", false,-1);
    tracep->declBit(c+1041,"uart_tx", false,-1);
    tracep->declBit(c+914,"psram_sck", false,-1);
    tracep->declBit(c+915,"psram_ce_n", false,-1);
    tracep->declBus(c+1043,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1044,"sdram_clk", false,-1);
    tracep->declBit(c+777,"sdram_cke", false,-1);
    tracep->declBit(c+778,"sdram_cs", false,-1);
    tracep->declBit(c+779,"sdram_ras", false,-1);
    tracep->declBit(c+780,"sdram_cas", false,-1);
    tracep->declBit(c+781,"sdram_we", false,-1);
    tracep->declBus(c+782,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+783,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+784,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+1045,"sdram_dq", false,-1, 15,0);
    tracep->declBus(c+1022,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1023,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1024,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1025,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1026,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1027,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1028,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1029,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1030,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1031,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1032,"ps2_clk", false,-1);
    tracep->declBit(c+1033,"ps2_data", false,-1);
    tracep->declBus(c+1034,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1035,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1036,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1037,"vga_hsync", false,-1);
    tracep->declBit(c+1038,"vga_vsync", false,-1);
    tracep->declBit(c+1039,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBus(c+881,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+190,"in_psel", false,-1);
    tracep->declBit(c+191,"in_penable", false,-1);
    tracep->declBus(c+1073,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+192,"in_pwrite", false,-1);
    tracep->declBus(c+193,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+194,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+916,"in_pready", false,-1);
    tracep->declBus(c+917,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+882,"in_pslverr", false,-1);
    tracep->declBus(c+881,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+190,"out_psel", false,-1);
    tracep->declBit(c+191,"out_penable", false,-1);
    tracep->declBus(c+1073,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+192,"out_pwrite", false,-1);
    tracep->declBus(c+193,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+194,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+916,"out_pready", false,-1);
    tracep->declBus(c+917,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+882,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+190,"auto_in_psel", false,-1);
    tracep->declBit(c+191,"auto_in_penable", false,-1);
    tracep->declBit(c+192,"auto_in_pwrite", false,-1);
    tracep->declBus(c+881,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1073,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+193,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+194,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+916,"auto_in_pready", false,-1);
    tracep->declBit(c+882,"auto_in_pslverr", false,-1);
    tracep->declBus(c+917,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+715,"auto_out_6_psel", false,-1);
    tracep->declBit(c+716,"auto_out_6_penable", false,-1);
    tracep->declBit(c+192,"auto_out_6_pwrite", false,-1);
    tracep->declBus(c+881,"auto_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1073,"auto_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+193,"auto_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+194,"auto_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+785,"auto_out_6_pready", false,-1);
    tracep->declBit(c+1074,"auto_out_6_pslverr", false,-1);
    tracep->declBus(c+12,"auto_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+717,"auto_out_5_psel", false,-1);
    tracep->declBit(c+718,"auto_out_5_penable", false,-1);
    tracep->declBit(c+192,"auto_out_5_pwrite", false,-1);
    tracep->declBus(c+883,"auto_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1073,"auto_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+193,"auto_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+194,"auto_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1075,"auto_out_5_pready", false,-1);
    tracep->declBit(c+1076,"auto_out_5_pslverr", false,-1);
    tracep->declBus(c+1077,"auto_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+719,"auto_out_4_psel", false,-1);
    tracep->declBit(c+720,"auto_out_4_penable", false,-1);
    tracep->declBit(c+192,"auto_out_4_pwrite", false,-1);
    tracep->declBus(c+884,"auto_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1073,"auto_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+193,"auto_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+194,"auto_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1078,"auto_out_4_pready", false,-1);
    tracep->declBit(c+1079,"auto_out_4_pslverr", false,-1);
    tracep->declBus(c+1080,"auto_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+721,"auto_out_3_psel", false,-1);
    tracep->declBit(c+722,"auto_out_3_penable", false,-1);
    tracep->declBit(c+192,"auto_out_3_pwrite", false,-1);
    tracep->declBus(c+884,"auto_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1073,"auto_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+193,"auto_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+194,"auto_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1081,"auto_out_3_pready", false,-1);
    tracep->declBit(c+1082,"auto_out_3_pslverr", false,-1);
    tracep->declBus(c+1083,"auto_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+885,"auto_out_2_psel", false,-1);
    tracep->declBit(c+723,"auto_out_2_penable", false,-1);
    tracep->declBit(c+192,"auto_out_2_pwrite", false,-1);
    tracep->declBus(c+881,"auto_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1073,"auto_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+193,"auto_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+194,"auto_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1046,"auto_out_2_pready", false,-1);
    tracep->declBit(c+1074,"auto_out_2_pslverr", false,-1);
    tracep->declBus(c+195,"auto_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+886,"auto_out_1_psel", false,-1);
    tracep->declBit(c+887,"auto_out_1_penable", false,-1);
    tracep->declBit(c+192,"auto_out_1_pwrite", false,-1);
    tracep->declBus(c+884,"auto_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1073,"auto_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+193,"auto_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+194,"auto_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+888,"auto_out_1_pready", false,-1);
    tracep->declBit(c+1074,"auto_out_1_pslverr", false,-1);
    tracep->declBus(c+1047,"auto_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+889,"auto_out_0_psel", false,-1);
    tracep->declBit(c+724,"auto_out_0_penable", false,-1);
    tracep->declBit(c+192,"auto_out_0_pwrite", false,-1);
    tracep->declBus(c+883,"auto_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1073,"auto_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+193,"auto_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+194,"auto_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1048,"auto_out_0_pready", false,-1);
    tracep->declBit(c+1074,"auto_out_0_pslverr", false,-1);
    tracep->declBus(c+1049,"auto_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+890,"sel_0", false,-1);
    tracep->declBit(c+891,"sel_1", false,-1);
    tracep->declBit(c+892,"sel_2", false,-1);
    tracep->declBit(c+893,"sel_3", false,-1);
    tracep->declBit(c+894,"sel_4", false,-1);
    tracep->declBit(c+895,"sel_5", false,-1);
    tracep->declBit(c+896,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+196,"auto_in_awready", false,-1);
    tracep->declBit(c+197,"auto_in_awvalid", false,-1);
    tracep->declBus(c+198,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+199,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+200,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+196,"auto_in_wready", false,-1);
    tracep->declBit(c+201,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+202,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+204,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+918,"auto_in_bready", false,-1);
    tracep->declBit(c+919,"auto_in_bvalid", false,-1);
    tracep->declBus(c+205,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+725,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+206,"auto_in_arready", false,-1);
    tracep->declBit(c+207,"auto_in_arvalid", false,-1);
    tracep->declBus(c+208,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+209,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+210,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+920,"auto_in_rready", false,-1);
    tracep->declBit(c+921,"auto_in_rvalid", false,-1);
    tracep->declBus(c+211,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+726,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+725,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+190,"auto_out_psel", false,-1);
    tracep->declBit(c+191,"auto_out_penable", false,-1);
    tracep->declBit(c+192,"auto_out_pwrite", false,-1);
    tracep->declBus(c+881,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+193,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+194,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+916,"auto_out_pready", false,-1);
    tracep->declBit(c+882,"auto_out_pslverr", false,-1);
    tracep->declBus(c+917,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+191,"nodeOut_penable", false,-1);
    tracep->declBus(c+212,"state", false,-1, 1,0);
    tracep->declBit(c+206,"accept_read", false,-1);
    tracep->declBit(c+196,"accept_write", false,-1);
    tracep->declBit(c+213,"is_write_r", false,-1);
    tracep->declBit(c+192,"is_write", false,-1);
    tracep->declBus(c+211,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+205,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+214,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+215,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+216,"awaddr_reg", false,-1, 31,0);
    tracep->declQuad(c+217,"wdata_reg_r", false,-1, 63,0);
    tracep->declQuad(c+219,"wdata_reg", false,-1, 63,0);
    tracep->declBus(c+221,"wstrb_reg_r", false,-1, 7,0);
    tracep->declBus(c+222,"wstrb_reg", false,-1, 7,0);
    tracep->declBus(c+897,"resp", false,-1, 1,0);
    tracep->declBus(c+223,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+725,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+921,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+224,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+919,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+225,"auto_in_awready", false,-1);
    tracep->declBit(c+226,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1084,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+227,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1085,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+228,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1086,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+229,"auto_in_wready", false,-1);
    tracep->declBit(c+230,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+231,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+233,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+234,"auto_in_wlast", false,-1);
    tracep->declBit(c+235,"auto_in_bready", false,-1);
    tracep->declBit(c+922,"auto_in_bvalid", false,-1);
    tracep->declBus(c+923,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+728,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+236,"auto_in_arready", false,-1);
    tracep->declBit(c+237,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1084,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+238,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1085,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+239,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1086,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+240,"auto_in_rready", false,-1);
    tracep->declBit(c+924,"auto_in_rvalid", false,-1);
    tracep->declBus(c+925,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+729,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+1050,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+926,"auto_in_rlast", false,-1);
    tracep->declBit(c+927,"auto_out_awready", false,-1);
    tracep->declBit(c+241,"auto_out_awvalid", false,-1);
    tracep->declBus(c+198,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+199,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+200,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+242,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+928,"auto_out_wready", false,-1);
    tracep->declBit(c+243,"auto_out_wvalid", false,-1);
    tracep->declQuad(c+202,"auto_out_wdata", false,-1, 63,0);
    tracep->declBus(c+204,"auto_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+244,"auto_out_wlast", false,-1);
    tracep->declBit(c+929,"auto_out_bready", false,-1);
    tracep->declBit(c+930,"auto_out_bvalid", false,-1);
    tracep->declBus(c+923,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+931,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+932,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+933,"auto_out_arready", false,-1);
    tracep->declBit(c+245,"auto_out_arvalid", false,-1);
    tracep->declBus(c+208,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+209,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+210,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+246,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+240,"auto_out_rready", false,-1);
    tracep->declBit(c+924,"auto_out_rvalid", false,-1);
    tracep->declBus(c+925,"auto_out_rid", false,-1, 3,0);
    tracep->declQuad(c+729,"auto_out_rdata", false,-1, 63,0);
    tracep->declBus(c+1050,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+731,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+934,"auto_out_rlast", false,-1);
    tracep->declBit(c+243,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+247,"w_idle", false,-1);
    tracep->declBit(c+935,"in_awready", false,-1);
    tracep->declBit(c+248,"busy", false,-1);
    tracep->declBus(c+249,"r_addr", false,-1, 31,0);
    tracep->declBus(c+250,"r_len", false,-1, 7,0);
    tracep->declBus(c+251,"len", false,-1, 7,0);
    tracep->declBus(c+252,"addr", false,-1, 31,0);
    tracep->declBit(c+253,"busy_1", false,-1);
    tracep->declBus(c+254,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+255,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+256,"len_1", false,-1, 7,0);
    tracep->declBus(c+257,"addr_1", false,-1, 31,0);
    tracep->declBit(c+258,"wbeats_latched", false,-1);
    tracep->declBit(c+241,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+259,"wbeats_valid", false,-1);
    tracep->declBus(c+260,"w_counter", false,-1, 8,0);
    tracep->declBus(c+261,"w_todo", false,-1, 8,0);
    tracep->declBit(c+244,"w_last", false,-1);
    tracep->declBit(c+929,"nodeOut_bready", false,-1);
    tracep->declBus(c+262,"error_0", false,-1, 1,0);
    tracep->declBus(c+263,"error_1", false,-1, 1,0);
    tracep->declBus(c+264,"error_2", false,-1, 1,0);
    tracep->declBus(c+265,"error_3", false,-1, 1,0);
    tracep->declBus(c+266,"error_4", false,-1, 1,0);
    tracep->declBus(c+267,"error_5", false,-1, 1,0);
    tracep->declBus(c+268,"error_6", false,-1, 1,0);
    tracep->declBus(c+269,"error_7", false,-1, 1,0);
    tracep->declBus(c+270,"error_8", false,-1, 1,0);
    tracep->declBus(c+271,"error_9", false,-1, 1,0);
    tracep->declBus(c+272,"error_10", false,-1, 1,0);
    tracep->declBus(c+273,"error_11", false,-1, 1,0);
    tracep->declBus(c+274,"error_12", false,-1, 1,0);
    tracep->declBus(c+275,"error_13", false,-1, 1,0);
    tracep->declBus(c+276,"error_14", false,-1, 1,0);
    tracep->declBus(c+277,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+236,"io_enq_ready", false,-1);
    tracep->declBit(c+237,"io_enq_valid", false,-1);
    tracep->declBus(c+1084,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+238,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1085,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+239,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1086,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+936,"io_deq_ready", false,-1);
    tracep->declBit(c+245,"io_deq_valid", false,-1);
    tracep->declBus(c+208,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+278,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+279,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+210,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+280,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+281,"ram", false,-1, 48,0);
    tracep->declBit(c+283,"full", false,-1);
    tracep->declBit(c+245,"io_deq_valid_0", false,-1);
    tracep->declBit(c+937,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+225,"io_enq_ready", false,-1);
    tracep->declBit(c+226,"io_enq_valid", false,-1);
    tracep->declBus(c+1084,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+227,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1085,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+228,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1086,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+938,"io_deq_ready", false,-1);
    tracep->declBit(c+284,"io_deq_valid", false,-1);
    tracep->declBus(c+198,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+285,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+286,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+200,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+287,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+288,"ram", false,-1, 48,0);
    tracep->declBit(c+290,"full", false,-1);
    tracep->declBit(c+284,"io_deq_valid_0", false,-1);
    tracep->declBit(c+939,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+229,"io_enq_ready", false,-1);
    tracep->declBit(c+230,"io_enq_valid", false,-1);
    tracep->declQuad(c+231,"io_enq_bits_data", false,-1, 63,0);
    tracep->declBus(c+233,"io_enq_bits_strb", false,-1, 7,0);
    tracep->declBit(c+234,"io_enq_bits_last", false,-1);
    tracep->declBit(c+940,"io_deq_ready", false,-1);
    tracep->declBit(c+291,"io_deq_valid", false,-1);
    tracep->declQuad(c+202,"io_deq_bits_data", false,-1, 63,0);
    tracep->declBus(c+204,"io_deq_bits_strb", false,-1, 7,0);
    tracep->declBit(c+292,"io_deq_bits_last", false,-1);
    tracep->declArray(c+293,"ram", false,-1, 72,0);
    tracep->declBit(c+296,"full", false,-1);
    tracep->declBit(c+291,"io_deq_valid_0", false,-1);
    tracep->declBit(c+941,"do_enq", false,-1);
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
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+942,"auto_in_awready", false,-1);
    tracep->declBit(c+297,"auto_in_awvalid", false,-1);
    tracep->declBus(c+198,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+298,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+732,"auto_in_wready", false,-1);
    tracep->declBit(c+299,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+202,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+204,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+943,"auto_in_bready", false,-1);
    tracep->declBit(c+300,"auto_in_bvalid", false,-1);
    tracep->declBus(c+301,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+302,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+944,"auto_in_arready", false,-1);
    tracep->declBit(c+303,"auto_in_arvalid", false,-1);
    tracep->declBus(c+208,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+304,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+945,"auto_in_rready", false,-1);
    tracep->declBit(c+305,"auto_in_rvalid", false,-1);
    tracep->declBus(c+306,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+307,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+309,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+944,"nodeIn_arready", false,-1);
    tracep->declBit(c+942,"nodeIn_awready", false,-1);
    tracep->declBit(c+310,"w_sel0", false,-1);
    tracep->declBit(c+300,"w_full", false,-1);
    tracep->declBus(c+301,"w_id", false,-1, 3,0);
    tracep->declBit(c+311,"r_sel1", false,-1);
    tracep->declBit(c+312,"w_sel1", false,-1);
    tracep->declBit(c+305,"r_full", false,-1);
    tracep->declBus(c+306,"r_id", false,-1, 3,0);
    tracep->declBit(c+946,"ren", false,-1);
    tracep->declBit(c+313,"rdata_REG", false,-1);
    tracep->declBus(c+314,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+315,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+316,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+317,"rdata_r3", false,-1, 7,0);
    tracep->declBus(c+318,"rdata_r4", false,-1, 7,0);
    tracep->declBus(c+319,"rdata_r5", false,-1, 7,0);
    tracep->declBus(c+320,"rdata_r6", false,-1, 7,0);
    tracep->declBus(c+321,"rdata_r7", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+322,"R0_addr", false,-1, 9,0);
    tracep->declBit(c+946,"R0_en", false,-1);
    tracep->declBit(c+1020,"R0_clk", false,-1);
    tracep->declQuad(c+323,"R0_data", false,-1, 63,0);
    tracep->declBus(c+325,"W0_addr", false,-1, 9,0);
    tracep->declBit(c+947,"W0_en", false,-1);
    tracep->declBit(c+1020,"W0_clk", false,-1);
    tracep->declQuad(c+202,"W0_data", false,-1, 63,0);
    tracep->declBus(c+204,"W0_mask", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+225,"auto_in_awready", false,-1);
    tracep->declBit(c+226,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1084,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+227,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1085,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+228,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1086,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+229,"auto_in_wready", false,-1);
    tracep->declBit(c+230,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+231,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+233,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+234,"auto_in_wlast", false,-1);
    tracep->declBit(c+235,"auto_in_bready", false,-1);
    tracep->declBit(c+922,"auto_in_bvalid", false,-1);
    tracep->declBus(c+923,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+728,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+236,"auto_in_arready", false,-1);
    tracep->declBit(c+237,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1084,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+238,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1085,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+239,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1086,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+240,"auto_in_rready", false,-1);
    tracep->declBit(c+924,"auto_in_rvalid", false,-1);
    tracep->declBus(c+925,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+729,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+1050,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+926,"auto_in_rlast", false,-1);
    tracep->declBit(c+225,"auto_out_awready", false,-1);
    tracep->declBit(c+226,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1084,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+227,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1085,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+228,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1086,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+229,"auto_out_wready", false,-1);
    tracep->declBit(c+230,"auto_out_wvalid", false,-1);
    tracep->declQuad(c+231,"auto_out_wdata", false,-1, 63,0);
    tracep->declBus(c+233,"auto_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+234,"auto_out_wlast", false,-1);
    tracep->declBit(c+235,"auto_out_bready", false,-1);
    tracep->declBit(c+922,"auto_out_bvalid", false,-1);
    tracep->declBus(c+923,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+728,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+236,"auto_out_arready", false,-1);
    tracep->declBit(c+237,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1084,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+238,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1085,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+239,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1086,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+240,"auto_out_rready", false,-1);
    tracep->declBit(c+924,"auto_out_rvalid", false,-1);
    tracep->declBus(c+925,"auto_out_rid", false,-1, 3,0);
    tracep->declQuad(c+729,"auto_out_rdata", false,-1, 63,0);
    tracep->declBus(c+1050,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+926,"auto_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+948,"auto_in_awready", false,-1);
    tracep->declBit(c+326,"auto_in_awvalid", false,-1);
    tracep->declBus(c+198,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+199,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+200,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+928,"auto_in_wready", false,-1);
    tracep->declBit(c+243,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+202,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+204,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+244,"auto_in_wlast", false,-1);
    tracep->declBit(c+929,"auto_in_bready", false,-1);
    tracep->declBit(c+930,"auto_in_bvalid", false,-1);
    tracep->declBus(c+923,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+931,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+949,"auto_in_arready", false,-1);
    tracep->declBit(c+327,"auto_in_arvalid", false,-1);
    tracep->declBus(c+208,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+209,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+210,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+240,"auto_in_rready", false,-1);
    tracep->declBit(c+924,"auto_in_rvalid", false,-1);
    tracep->declBus(c+925,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+729,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+1050,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+934,"auto_in_rlast", false,-1);
    tracep->declBit(c+942,"auto_out_2_awready", false,-1);
    tracep->declBit(c+297,"auto_out_2_awvalid", false,-1);
    tracep->declBus(c+198,"auto_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+298,"auto_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+732,"auto_out_2_wready", false,-1);
    tracep->declBit(c+299,"auto_out_2_wvalid", false,-1);
    tracep->declQuad(c+202,"auto_out_2_wdata", false,-1, 63,0);
    tracep->declBus(c+204,"auto_out_2_wstrb", false,-1, 7,0);
    tracep->declBit(c+943,"auto_out_2_bready", false,-1);
    tracep->declBit(c+300,"auto_out_2_bvalid", false,-1);
    tracep->declBus(c+301,"auto_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+302,"auto_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+944,"auto_out_2_arready", false,-1);
    tracep->declBit(c+303,"auto_out_2_arvalid", false,-1);
    tracep->declBus(c+208,"auto_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+304,"auto_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+945,"auto_out_2_rready", false,-1);
    tracep->declBit(c+305,"auto_out_2_rvalid", false,-1);
    tracep->declBus(c+306,"auto_out_2_rid", false,-1, 3,0);
    tracep->declQuad(c+307,"auto_out_2_rdata", false,-1, 63,0);
    tracep->declBus(c+309,"auto_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+328,"auto_out_1_awvalid", false,-1);
    tracep->declBit(c+329,"auto_out_1_wvalid", false,-1);
    tracep->declBit(c+330,"auto_out_1_arready", false,-1);
    tracep->declBit(c+331,"auto_out_1_arvalid", false,-1);
    tracep->declBus(c+208,"auto_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+332,"auto_out_1_araddr", false,-1, 29,0);
    tracep->declBus(c+210,"auto_out_1_arsize", false,-1, 2,0);
    tracep->declBit(c+733,"auto_out_1_rready", false,-1);
    tracep->declBit(c+333,"auto_out_1_rvalid", false,-1);
    tracep->declBus(c+334,"auto_out_1_rid", false,-1, 3,0);
    tracep->declQuad(c+335,"auto_out_1_rdata", false,-1, 63,0);
    tracep->declBit(c+196,"auto_out_0_awready", false,-1);
    tracep->declBit(c+197,"auto_out_0_awvalid", false,-1);
    tracep->declBus(c+198,"auto_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+199,"auto_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+200,"auto_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+196,"auto_out_0_wready", false,-1);
    tracep->declBit(c+201,"auto_out_0_wvalid", false,-1);
    tracep->declQuad(c+202,"auto_out_0_wdata", false,-1, 63,0);
    tracep->declBus(c+204,"auto_out_0_wstrb", false,-1, 7,0);
    tracep->declBit(c+918,"auto_out_0_bready", false,-1);
    tracep->declBit(c+919,"auto_out_0_bvalid", false,-1);
    tracep->declBus(c+205,"auto_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+725,"auto_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+206,"auto_out_0_arready", false,-1);
    tracep->declBit(c+207,"auto_out_0_arvalid", false,-1);
    tracep->declBus(c+208,"auto_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+209,"auto_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+210,"auto_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+920,"auto_out_0_rready", false,-1);
    tracep->declBit(c+921,"auto_out_0_rvalid", false,-1);
    tracep->declBus(c+211,"auto_out_0_rid", false,-1, 3,0);
    tracep->declQuad(c+726,"auto_out_0_rdata", false,-1, 63,0);
    tracep->declBus(c+725,"auto_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+930,"in_0_bvalid", false,-1);
    tracep->declBit(c+924,"in_0_rvalid", false,-1);
    tracep->declBit(c+948,"nodeIn_awready", false,-1);
    tracep->declBit(c+337,"requestARIO_0_0", false,-1);
    tracep->declBit(c+338,"requestARIO_0_1", false,-1);
    tracep->declBit(c+339,"requestARIO_0_2", false,-1);
    tracep->declBit(c+340,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+341,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+342,"requestAWIO_0_2", false,-1);
    tracep->declBit(c+343,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+344,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+345,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+346,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+347,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+348,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+349,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+350,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+351,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+352,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+353,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+354,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+355,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+356,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+357,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+358,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+359,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+360,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+361,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+362,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+363,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+364,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+365,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+366,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+367,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+368,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+369,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+370,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+371,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+372,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+373,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+374,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+375,"latched", false,-1);
    tracep->declBit(c+376,"in_0_awvalid", false,-1);
    tracep->declBit(c+377,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+378,"in_0_wvalid", false,-1);
    tracep->declBit(c+379,"idle_3", false,-1);
    tracep->declBit(c+950,"anyValid", false,-1);
    tracep->declBus(c+951,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+380,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+952,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+953,"prefixOR_1", false,-1);
    tracep->declBit(c+954,"winner_3_1", false,-1);
    tracep->declBit(c+955,"winner_3_2", false,-1);
    tracep->declBit(c+381,"state_3_0", false,-1);
    tracep->declBit(c+382,"state_3_1", false,-1);
    tracep->declBit(c+383,"state_3_2", false,-1);
    tracep->declBit(c+956,"muxState_3_0", false,-1);
    tracep->declBit(c+957,"muxState_3_1", false,-1);
    tracep->declBit(c+958,"muxState_3_2", false,-1);
    tracep->declBit(c+384,"idle_4", false,-1);
    tracep->declBit(c+959,"anyValid_1", false,-1);
    tracep->declBus(c+960,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+385,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+961,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+962,"winner_4_0", false,-1);
    tracep->declBit(c+963,"winner_4_2", false,-1);
    tracep->declBit(c+386,"state_4_0", false,-1);
    tracep->declBit(c+387,"state_4_2", false,-1);
    tracep->declBit(c+964,"muxState_4_0", false,-1);
    tracep->declBit(c+965,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+388,"io_enq_ready", false,-1);
    tracep->declBit(c+377,"io_enq_valid", false,-1);
    tracep->declBus(c+389,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+966,"io_deq_ready", false,-1);
    tracep->declBit(c+390,"io_deq_valid", false,-1);
    tracep->declBus(c+391,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+392,"wrap", false,-1);
    tracep->declBit(c+393,"wrap_1", false,-1);
    tracep->declBit(c+394,"maybe_full", false,-1);
    tracep->declBit(c+395,"ptr_match", false,-1);
    tracep->declBit(c+396,"empty", false,-1);
    tracep->declBit(c+397,"full", false,-1);
    tracep->declBit(c+390,"io_deq_valid_0", false,-1);
    tracep->declBit(c+967,"do_deq", false,-1);
    tracep->declBit(c+968,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+393,"R0_addr", false,-1);
    tracep->declBit(c+1087,"R0_en", false,-1);
    tracep->declBit(c+1020,"R0_clk", false,-1);
    tracep->declBus(c+398,"R0_data", false,-1, 2,0);
    tracep->declBit(c+392,"W0_addr", false,-1);
    tracep->declBit(c+968,"W0_en", false,-1);
    tracep->declBit(c+1020,"W0_clk", false,-1);
    tracep->declBus(c+389,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+399+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+927,"auto_in_awready", false,-1);
    tracep->declBit(c+241,"auto_in_awvalid", false,-1);
    tracep->declBus(c+198,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+199,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+200,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+242,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+928,"auto_in_wready", false,-1);
    tracep->declBit(c+243,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+202,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+204,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+244,"auto_in_wlast", false,-1);
    tracep->declBit(c+929,"auto_in_bready", false,-1);
    tracep->declBit(c+930,"auto_in_bvalid", false,-1);
    tracep->declBus(c+923,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+931,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+932,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+933,"auto_in_arready", false,-1);
    tracep->declBit(c+245,"auto_in_arvalid", false,-1);
    tracep->declBus(c+208,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+209,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+210,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+246,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+240,"auto_in_rready", false,-1);
    tracep->declBit(c+924,"auto_in_rvalid", false,-1);
    tracep->declBus(c+925,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+729,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+1050,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+731,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+934,"auto_in_rlast", false,-1);
    tracep->declBit(c+948,"auto_out_awready", false,-1);
    tracep->declBit(c+326,"auto_out_awvalid", false,-1);
    tracep->declBus(c+198,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+199,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+200,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+928,"auto_out_wready", false,-1);
    tracep->declBit(c+243,"auto_out_wvalid", false,-1);
    tracep->declQuad(c+202,"auto_out_wdata", false,-1, 63,0);
    tracep->declBus(c+204,"auto_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+244,"auto_out_wlast", false,-1);
    tracep->declBit(c+929,"auto_out_bready", false,-1);
    tracep->declBit(c+930,"auto_out_bvalid", false,-1);
    tracep->declBus(c+923,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+931,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+949,"auto_out_arready", false,-1);
    tracep->declBit(c+327,"auto_out_arvalid", false,-1);
    tracep->declBus(c+208,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+209,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+210,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+240,"auto_out_rready", false,-1);
    tracep->declBit(c+924,"auto_out_rvalid", false,-1);
    tracep->declBus(c+925,"auto_out_rid", false,-1, 3,0);
    tracep->declQuad(c+729,"auto_out_rdata", false,-1, 63,0);
    tracep->declBus(c+1050,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+934,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+401,"io_enq_ready", false,-1);
    tracep->declBit(c+734,"io_enq_valid", false,-1);
    tracep->declBit(c+246,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+969,"io_deq_ready", false,-1);
    tracep->declBit(c+402,"io_deq_valid", false,-1);
    tracep->declBit(c+403,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+403,"ram_real_last", false,-1);
    tracep->declBit(c+402,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+404,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+405,"io_enq_ready", false,-1);
    tracep->declBit(c+735,"io_enq_valid", false,-1);
    tracep->declBit(c+246,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+970,"io_deq_ready", false,-1);
    tracep->declBit(c+406,"io_deq_valid", false,-1);
    tracep->declBit(c+407,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+407,"ram_real_last", false,-1);
    tracep->declBit(c+406,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+408,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+409,"io_enq_ready", false,-1);
    tracep->declBit(c+736,"io_enq_valid", false,-1);
    tracep->declBit(c+246,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+971,"io_deq_ready", false,-1);
    tracep->declBit(c+410,"io_deq_valid", false,-1);
    tracep->declBit(c+411,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+411,"ram_real_last", false,-1);
    tracep->declBit(c+410,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+412,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+413,"io_enq_ready", false,-1);
    tracep->declBit(c+737,"io_enq_valid", false,-1);
    tracep->declBit(c+246,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+972,"io_deq_ready", false,-1);
    tracep->declBit(c+414,"io_deq_valid", false,-1);
    tracep->declBit(c+415,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+415,"ram_real_last", false,-1);
    tracep->declBit(c+414,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+416,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+417,"io_enq_ready", false,-1);
    tracep->declBit(c+738,"io_enq_valid", false,-1);
    tracep->declBit(c+246,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+973,"io_deq_ready", false,-1);
    tracep->declBit(c+418,"io_deq_valid", false,-1);
    tracep->declBit(c+419,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+419,"ram_real_last", false,-1);
    tracep->declBit(c+418,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+420,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+421,"io_enq_ready", false,-1);
    tracep->declBit(c+739,"io_enq_valid", false,-1);
    tracep->declBit(c+246,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+974,"io_deq_ready", false,-1);
    tracep->declBit(c+422,"io_deq_valid", false,-1);
    tracep->declBit(c+423,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+423,"ram_real_last", false,-1);
    tracep->declBit(c+422,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+424,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+425,"io_enq_ready", false,-1);
    tracep->declBit(c+740,"io_enq_valid", false,-1);
    tracep->declBit(c+246,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+975,"io_deq_ready", false,-1);
    tracep->declBit(c+426,"io_deq_valid", false,-1);
    tracep->declBit(c+427,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+427,"ram_real_last", false,-1);
    tracep->declBit(c+426,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+428,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+429,"io_enq_ready", false,-1);
    tracep->declBit(c+741,"io_enq_valid", false,-1);
    tracep->declBit(c+246,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+976,"io_deq_ready", false,-1);
    tracep->declBit(c+430,"io_deq_valid", false,-1);
    tracep->declBit(c+431,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+431,"ram_real_last", false,-1);
    tracep->declBit(c+430,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+432,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+433,"io_enq_ready", false,-1);
    tracep->declBit(c+742,"io_enq_valid", false,-1);
    tracep->declBit(c+242,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+977,"io_deq_ready", false,-1);
    tracep->declBit(c+434,"io_deq_valid", false,-1);
    tracep->declBit(c+435,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+435,"ram_real_last", false,-1);
    tracep->declBit(c+434,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+436,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+437,"io_enq_ready", false,-1);
    tracep->declBit(c+743,"io_enq_valid", false,-1);
    tracep->declBit(c+242,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+978,"io_deq_ready", false,-1);
    tracep->declBit(c+438,"io_deq_valid", false,-1);
    tracep->declBit(c+439,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+439,"ram_real_last", false,-1);
    tracep->declBit(c+438,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+440,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+441,"io_enq_ready", false,-1);
    tracep->declBit(c+744,"io_enq_valid", false,-1);
    tracep->declBit(c+242,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+979,"io_deq_ready", false,-1);
    tracep->declBit(c+442,"io_deq_valid", false,-1);
    tracep->declBit(c+443,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+443,"ram_real_last", false,-1);
    tracep->declBit(c+442,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+444,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+445,"io_enq_ready", false,-1);
    tracep->declBit(c+745,"io_enq_valid", false,-1);
    tracep->declBit(c+242,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+980,"io_deq_ready", false,-1);
    tracep->declBit(c+446,"io_deq_valid", false,-1);
    tracep->declBit(c+447,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+447,"ram_real_last", false,-1);
    tracep->declBit(c+446,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+448,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+449,"io_enq_ready", false,-1);
    tracep->declBit(c+746,"io_enq_valid", false,-1);
    tracep->declBit(c+246,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+981,"io_deq_ready", false,-1);
    tracep->declBit(c+450,"io_deq_valid", false,-1);
    tracep->declBit(c+451,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+451,"ram_real_last", false,-1);
    tracep->declBit(c+450,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+452,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+453,"io_enq_ready", false,-1);
    tracep->declBit(c+747,"io_enq_valid", false,-1);
    tracep->declBit(c+242,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+982,"io_deq_ready", false,-1);
    tracep->declBit(c+454,"io_deq_valid", false,-1);
    tracep->declBit(c+455,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+455,"ram_real_last", false,-1);
    tracep->declBit(c+454,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+456,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+457,"io_enq_ready", false,-1);
    tracep->declBit(c+748,"io_enq_valid", false,-1);
    tracep->declBit(c+242,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+983,"io_deq_ready", false,-1);
    tracep->declBit(c+458,"io_deq_valid", false,-1);
    tracep->declBit(c+459,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+459,"ram_real_last", false,-1);
    tracep->declBit(c+458,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+460,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+461,"io_enq_ready", false,-1);
    tracep->declBit(c+749,"io_enq_valid", false,-1);
    tracep->declBit(c+242,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+984,"io_deq_ready", false,-1);
    tracep->declBit(c+462,"io_deq_valid", false,-1);
    tracep->declBit(c+463,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+463,"ram_real_last", false,-1);
    tracep->declBit(c+462,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+464,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+465,"io_enq_ready", false,-1);
    tracep->declBit(c+750,"io_enq_valid", false,-1);
    tracep->declBit(c+242,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+985,"io_deq_ready", false,-1);
    tracep->declBit(c+466,"io_deq_valid", false,-1);
    tracep->declBit(c+467,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+467,"ram_real_last", false,-1);
    tracep->declBit(c+466,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+468,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+469,"io_enq_ready", false,-1);
    tracep->declBit(c+751,"io_enq_valid", false,-1);
    tracep->declBit(c+242,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+986,"io_deq_ready", false,-1);
    tracep->declBit(c+470,"io_deq_valid", false,-1);
    tracep->declBit(c+471,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+471,"ram_real_last", false,-1);
    tracep->declBit(c+470,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+472,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+473,"io_enq_ready", false,-1);
    tracep->declBit(c+752,"io_enq_valid", false,-1);
    tracep->declBit(c+242,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+987,"io_deq_ready", false,-1);
    tracep->declBit(c+474,"io_deq_valid", false,-1);
    tracep->declBit(c+475,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+475,"ram_real_last", false,-1);
    tracep->declBit(c+474,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+476,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+477,"io_enq_ready", false,-1);
    tracep->declBit(c+753,"io_enq_valid", false,-1);
    tracep->declBit(c+242,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+988,"io_deq_ready", false,-1);
    tracep->declBit(c+478,"io_deq_valid", false,-1);
    tracep->declBit(c+479,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+479,"ram_real_last", false,-1);
    tracep->declBit(c+478,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+480,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+481,"io_enq_ready", false,-1);
    tracep->declBit(c+754,"io_enq_valid", false,-1);
    tracep->declBit(c+242,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+989,"io_deq_ready", false,-1);
    tracep->declBit(c+482,"io_deq_valid", false,-1);
    tracep->declBit(c+483,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+483,"ram_real_last", false,-1);
    tracep->declBit(c+482,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+484,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+485,"io_enq_ready", false,-1);
    tracep->declBit(c+755,"io_enq_valid", false,-1);
    tracep->declBit(c+242,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+990,"io_deq_ready", false,-1);
    tracep->declBit(c+486,"io_deq_valid", false,-1);
    tracep->declBit(c+487,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+487,"ram_real_last", false,-1);
    tracep->declBit(c+486,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+488,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+489,"io_enq_ready", false,-1);
    tracep->declBit(c+756,"io_enq_valid", false,-1);
    tracep->declBit(c+242,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+991,"io_deq_ready", false,-1);
    tracep->declBit(c+490,"io_deq_valid", false,-1);
    tracep->declBit(c+491,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+491,"ram_real_last", false,-1);
    tracep->declBit(c+490,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+492,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+493,"io_enq_ready", false,-1);
    tracep->declBit(c+757,"io_enq_valid", false,-1);
    tracep->declBit(c+246,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+992,"io_deq_ready", false,-1);
    tracep->declBit(c+494,"io_deq_valid", false,-1);
    tracep->declBit(c+495,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+495,"ram_real_last", false,-1);
    tracep->declBit(c+494,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+496,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+497,"io_enq_ready", false,-1);
    tracep->declBit(c+758,"io_enq_valid", false,-1);
    tracep->declBit(c+242,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+993,"io_deq_ready", false,-1);
    tracep->declBit(c+498,"io_deq_valid", false,-1);
    tracep->declBit(c+499,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+499,"ram_real_last", false,-1);
    tracep->declBit(c+498,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+500,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+501,"io_enq_ready", false,-1);
    tracep->declBit(c+759,"io_enq_valid", false,-1);
    tracep->declBit(c+242,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+994,"io_deq_ready", false,-1);
    tracep->declBit(c+502,"io_deq_valid", false,-1);
    tracep->declBit(c+503,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+503,"ram_real_last", false,-1);
    tracep->declBit(c+502,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+504,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+505,"io_enq_ready", false,-1);
    tracep->declBit(c+760,"io_enq_valid", false,-1);
    tracep->declBit(c+246,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+995,"io_deq_ready", false,-1);
    tracep->declBit(c+506,"io_deq_valid", false,-1);
    tracep->declBit(c+507,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+507,"ram_real_last", false,-1);
    tracep->declBit(c+506,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+508,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+509,"io_enq_ready", false,-1);
    tracep->declBit(c+761,"io_enq_valid", false,-1);
    tracep->declBit(c+246,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+996,"io_deq_ready", false,-1);
    tracep->declBit(c+510,"io_deq_valid", false,-1);
    tracep->declBit(c+511,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+511,"ram_real_last", false,-1);
    tracep->declBit(c+510,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+512,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+513,"io_enq_ready", false,-1);
    tracep->declBit(c+762,"io_enq_valid", false,-1);
    tracep->declBit(c+246,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+997,"io_deq_ready", false,-1);
    tracep->declBit(c+514,"io_deq_valid", false,-1);
    tracep->declBit(c+515,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+515,"ram_real_last", false,-1);
    tracep->declBit(c+514,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+516,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+517,"io_enq_ready", false,-1);
    tracep->declBit(c+763,"io_enq_valid", false,-1);
    tracep->declBit(c+246,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+998,"io_deq_ready", false,-1);
    tracep->declBit(c+518,"io_deq_valid", false,-1);
    tracep->declBit(c+519,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+519,"ram_real_last", false,-1);
    tracep->declBit(c+518,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+520,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+521,"io_enq_ready", false,-1);
    tracep->declBit(c+764,"io_enq_valid", false,-1);
    tracep->declBit(c+246,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+999,"io_deq_ready", false,-1);
    tracep->declBit(c+522,"io_deq_valid", false,-1);
    tracep->declBit(c+523,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+523,"ram_real_last", false,-1);
    tracep->declBit(c+522,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+524,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+525,"io_enq_ready", false,-1);
    tracep->declBit(c+765,"io_enq_valid", false,-1);
    tracep->declBit(c+246,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1000,"io_deq_ready", false,-1);
    tracep->declBit(c+526,"io_deq_valid", false,-1);
    tracep->declBit(c+527,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+527,"ram_real_last", false,-1);
    tracep->declBit(c+526,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+528,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1051,"reset", false,-1);
    tracep->declBit(c+225,"auto_master_out_awready", false,-1);
    tracep->declBit(c+226,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1084,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+227,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1085,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+228,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1086,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+229,"auto_master_out_wready", false,-1);
    tracep->declBit(c+230,"auto_master_out_wvalid", false,-1);
    tracep->declQuad(c+231,"auto_master_out_wdata", false,-1, 63,0);
    tracep->declBus(c+233,"auto_master_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+234,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+235,"auto_master_out_bready", false,-1);
    tracep->declBit(c+922,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+923,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+728,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+236,"auto_master_out_arready", false,-1);
    tracep->declBit(c+237,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1084,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+238,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1085,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+239,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1086,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+240,"auto_master_out_rready", false,-1);
    tracep->declBit(c+924,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+925,"auto_master_out_rid", false,-1, 3,0);
    tracep->declQuad(c+729,"auto_master_out_rdata", false,-1, 63,0);
    tracep->declBus(c+1050,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+926,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1051,"reset", false,-1);
    tracep->declBit(c+1074,"io_interrupt", false,-1);
    tracep->declBit(c+225,"io_master_awready", false,-1);
    tracep->declBit(c+226,"io_master_awvalid", false,-1);
    tracep->declBus(c+227,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1084,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1085,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+228,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1086,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+229,"io_master_wready", false,-1);
    tracep->declBit(c+230,"io_master_wvalid", false,-1);
    tracep->declQuad(c+231,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+233,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+234,"io_master_wlast", false,-1);
    tracep->declBit(c+235,"io_master_bready", false,-1);
    tracep->declBit(c+922,"io_master_bvalid", false,-1);
    tracep->declBus(c+728,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+923,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+236,"io_master_arready", false,-1);
    tracep->declBit(c+237,"io_master_arvalid", false,-1);
    tracep->declBus(c+238,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1084,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1085,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+239,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1086,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+240,"io_master_rready", false,-1);
    tracep->declBit(c+924,"io_master_rvalid", false,-1);
    tracep->declBus(c+1050,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+729,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+926,"io_master_rlast", false,-1);
    tracep->declBus(c+925,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1088,"io_slave_awready", false,-1);
    tracep->declBit(c+1074,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1089,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1084,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1085,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1090,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1091,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1092,"io_slave_wready", false,-1);
    tracep->declBit(c+1074,"io_slave_wvalid", false,-1);
    tracep->declQuad(c+1093,"io_slave_wdata", false,-1, 63,0);
    tracep->declBus(c+1085,"io_slave_wstrb", false,-1, 7,0);
    tracep->declBit(c+1074,"io_slave_wlast", false,-1);
    tracep->declBit(c+1074,"io_slave_bready", false,-1);
    tracep->declBit(c+1095,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1096,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1097,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1098,"io_slave_arready", false,-1);
    tracep->declBit(c+1074,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1089,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1084,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1085,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1090,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1091,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1074,"io_slave_rready", false,-1);
    tracep->declBit(c+1099,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1100,"io_slave_rresp", false,-1, 1,0);
    tracep->declQuad(c+1101,"io_slave_rdata", false,-1, 63,0);
    tracep->declBit(c+1103,"io_slave_rlast", false,-1);
    tracep->declBus(c+1104,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+529,"ifu_pc", false,-1, 31,0);
    tracep->declBus(c+530,"ifu_inst", false,-1, 31,0);
    tracep->declBus(c+1105,"ifu_inst_t", false,-1, 31,0);
    tracep->declBit(c+531,"ifu_stall", false,-1);
    tracep->declBus(c+532,"jump_pc", false,-1, 31,0);
    tracep->declBit(c+533,"jump_pc_valid", false,-1);
    tracep->declBit(c+1001,"stall", false,-1);
    tracep->declBit(c+534,"ifu_r_valid_o", false,-1);
    tracep->declBus(c+535,"ifu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+1002,"ifu_r_ready_i", false,-1);
    tracep->declBus(c+1003,"ifu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+1085,"ifu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+1004,"ifu_r_last_i", false,-1);
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
    tracep->declBus(c+1052,"rd_data", false,-1, 31,0);
    tracep->declBit(c+550,"zero_flag", false,-1);
    tracep->declBus(c+551,"exu_result", false,-1, 31,0);
    tracep->declBus(c+1106,"exu_result_t", false,-1, 31,0);
    tracep->declBus(c+766,"lsu_result", false,-1, 31,0);
    tracep->declBit(c+1001,"mem_stall", false,-1);
    tracep->declBit(c+1005,"lsu_rd_wen", false,-1);
    tracep->declBit(c+552,"lsu_r_valid_o", false,-1);
    tracep->declBus(c+553,"lsu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+767,"lsu_r_ready_i", false,-1);
    tracep->declBus(c+768,"lsu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+554,"lsu_r_size_o", false,-1, 2,0);
    tracep->declBus(c+1085,"lsu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+769,"lsu_r_last_i", false,-1);
    tracep->declBit(c+555,"lsu_w_valid_o", false,-1);
    tracep->declBus(c+227,"lsu_w_addr_o", false,-1, 31,0);
    tracep->declBit(c+229,"lsu_w_ready_i", false,-1);
    tracep->declBus(c+549,"lsu_w_data_o", false,-1, 31,0);
    tracep->declBus(c+228,"lsu_w_size_o", false,-1, 2,0);
    tracep->declBus(c+1085,"lsu_w_len_o", false,-1, 7,0);
    tracep->declBit(c+922,"lsu_w_last_i", false,-1);
    tracep->declBit(c+770,"wbu_rd_wen", false,-1);
    tracep->declBit(c+556,"csr_ecall", false,-1);
    tracep->declBit(c+557,"csr_mret", false,-1);
    tracep->declBus(c+558,"wr_csr_data", false,-1, 31,0);
    tracep->declBus(c+1053,"rd_csr_data", false,-1, 31,0);
    tracep->declBus(c+559,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+560,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+561,"csr_mpec", false,-1, 31,0);
    tracep->pushNamePrefix("axi_arbiter_u0 ");
    tracep->declBit(c+1020,"aclk", false,-1);
    tracep->declBit(c+1051,"areset_n", false,-1);
    tracep->declBit(c+534,"ifu_r_valid_i", false,-1);
    tracep->declBus(c+535,"ifu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+1002,"ifu_r_ready_o", false,-1);
    tracep->declBus(c+1003,"ifu_r_data_o", false,-1, 31,0);
    tracep->declBus(c+1085,"ifu_r_len_i", false,-1, 7,0);
    tracep->declBit(c+1004,"ifu_r_last_o", false,-1);
    tracep->declBit(c+552,"lsu_r_valid_i", false,-1);
    tracep->declBus(c+553,"lsu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+767,"lsu_r_ready_o", false,-1);
    tracep->declBus(c+768,"lsu_r_data_o", false,-1, 31,0);
    tracep->declBus(c+554,"lsu_r_size_i", false,-1, 2,0);
    tracep->declBus(c+1085,"lsu_r_len_i", false,-1, 7,0);
    tracep->declBit(c+769,"lsu_r_last_o", false,-1);
    tracep->declBit(c+555,"lsu_w_valid_i", false,-1);
    tracep->declBus(c+227,"lsu_w_addr_i", false,-1, 31,0);
    tracep->declBit(c+229,"lsu_w_ready_o", false,-1);
    tracep->declBus(c+549,"lsu_w_data_i", false,-1, 31,0);
    tracep->declBus(c+228,"lsu_w_size_i", false,-1, 2,0);
    tracep->declBus(c+1085,"lsu_w_len_i", false,-1, 7,0);
    tracep->declBit(c+922,"lsu_w_last_o", false,-1);
    tracep->declBit(c+225,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+226,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+227,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+1084,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+1085,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+228,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+1086,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+229,"axi_w_ready_i", false,-1);
    tracep->declBit(c+230,"axi_w_valid_o", false,-1);
    tracep->declQuad(c+231,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+233,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+234,"axi_w_last_o", false,-1);
    tracep->declBit(c+235,"axi_b_ready_o", false,-1);
    tracep->declBit(c+922,"axi_b_valid_i", false,-1);
    tracep->declBus(c+728,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+923,"axi_b_id_i", false,-1, 3,0);
    tracep->declBit(c+236,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+237,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+238,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+1084,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+1085,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+239,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+1086,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+240,"axi_r_ready_o", false,-1);
    tracep->declBit(c+924,"axi_r_valid_i", false,-1);
    tracep->declBus(c+1050,"axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+729,"axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+926,"axi_r_last_i", false,-1);
    tracep->declBus(c+925,"axi_r_id_i", false,-1, 3,0);
    tracep->declBit(c+562,"cpu_r_valid_o", false,-1);
    tracep->declBus(c+238,"cpu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+924,"cpu_r_ready_i", false,-1);
    tracep->declBus(c+1006,"cpu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+239,"cpu_r_size_o", false,-1, 2,0);
    tracep->declBus(c+1085,"cpu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+926,"cpu_r_last_i", false,-1);
    tracep->declBit(c+555,"cpu_w_valid_o", false,-1);
    tracep->declBus(c+227,"cpu_w_addr_o", false,-1, 31,0);
    tracep->declBit(c+229,"cpu_w_ready_i", false,-1);
    tracep->declBus(c+549,"cpu_w_data_o", false,-1, 31,0);
    tracep->declBus(c+228,"cpu_w_size_o", false,-1, 2,0);
    tracep->declBus(c+1085,"cpu_w_len_o", false,-1, 7,0);
    tracep->declBit(c+922,"cpu_w_last_i", false,-1);
    tracep->declBus(c+563,"arbiter_state", false,-1, 1,0);
    tracep->declBus(c+1091,"ARB_IDLE", false,-1, 1,0);
    tracep->declBus(c+1086,"ARB_IFU", false,-1, 1,0);
    tracep->declBus(c+1107,"ARB_LSU", false,-1, 1,0);
    tracep->pushNamePrefix("axi_u0 ");
    tracep->declBit(c+1020,"aclk", false,-1);
    tracep->declBit(c+1051,"areset_n", false,-1);
    tracep->declBit(c+562,"cpu_r_valid_i", false,-1);
    tracep->declBus(c+238,"cpu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+924,"cpu_r_ready_o", false,-1);
    tracep->declBus(c+1006,"cpu_r_data_o", false,-1, 31,0);
    tracep->declBus(c+239,"cpu_r_size_i", false,-1, 2,0);
    tracep->declBus(c+1085,"cpu_r_len_i", false,-1, 7,0);
    tracep->declBit(c+926,"cpu_r_last_o", false,-1);
    tracep->declBit(c+555,"cpu_w_valid_i", false,-1);
    tracep->declBus(c+227,"cpu_w_addr_i", false,-1, 31,0);
    tracep->declBit(c+229,"cpu_w_ready_o", false,-1);
    tracep->declBus(c+549,"cpu_w_data_i", false,-1, 31,0);
    tracep->declBus(c+228,"cpu_w_size_i", false,-1, 2,0);
    tracep->declBus(c+1085,"cpu_w_len_i", false,-1, 7,0);
    tracep->declBit(c+922,"cpu_w_last_o", false,-1);
    tracep->declBit(c+225,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+226,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+227,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+1084,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+1085,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+228,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+1086,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+229,"axi_w_ready_i", false,-1);
    tracep->declBit(c+230,"axi_w_valid_o", false,-1);
    tracep->declQuad(c+231,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+233,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+234,"axi_w_last_o", false,-1);
    tracep->declBit(c+235,"axi_b_ready_o", false,-1);
    tracep->declBit(c+922,"axi_b_valid_i", false,-1);
    tracep->declBus(c+728,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+923,"axi_b_id_i", false,-1, 3,0);
    tracep->declBit(c+236,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+237,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+238,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+1084,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+1085,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+239,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+1086,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+240,"axi_r_ready_o", false,-1);
    tracep->declBit(c+924,"axi_r_valid_i", false,-1);
    tracep->declBus(c+1050,"axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+729,"axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+926,"axi_r_last_i", false,-1);
    tracep->declBus(c+925,"axi_r_id_i", false,-1, 3,0);
    tracep->declBus(c+564,"axi_w_state", false,-1, 2,0);
    tracep->declBus(c+1090,"AXI_W_IDLE", false,-1, 2,0);
    tracep->declBus(c+1073,"AXI_W_ADDR", false,-1, 2,0);
    tracep->declBus(c+1108,"AXI_W_DATA", false,-1, 2,0);
    tracep->declBus(c+1109,"AXI_W_RESP", false,-1, 2,0);
    tracep->declQuad(c+565,"axi_w_data_t", false,-1, 63,0);
    tracep->declBus(c+567,"axi_w_strb_t", false,-1, 7,0);
    tracep->declBus(c+568,"axi_w_cnt", false,-1, 7,0);
    tracep->declBus(c+569,"axi_r_state", false,-1, 1,0);
    tracep->declBus(c+1091,"AXI_R_IDLE", false,-1, 1,0);
    tracep->declBus(c+1086,"AXI_R_ADDR", false,-1, 1,0);
    tracep->declBus(c+1107,"AXI_R_DATA", false,-1, 1,0);
    tracep->declBus(c+1110,"axi_r_cnt", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csr_u0 ");
    tracep->declBit(c+1020,"clk", false,-1);
    tracep->declBit(c+1051,"reset", false,-1);
    tracep->declBus(c+570,"wr_addr", false,-1, 11,0);
    tracep->declBus(c+558,"wr_data", false,-1, 31,0);
    tracep->declBus(c+570,"rd_addr", false,-1, 11,0);
    tracep->declBus(c+1053,"rd_data", false,-1, 31,0);
    tracep->declBit(c+556,"i_csr_ecall", false,-1);
    tracep->declBit(c+557,"i_csr_mret", false,-1);
    tracep->declBus(c+530,"i_inst", false,-1, 31,0);
    tracep->declBus(c+529,"i_pc", false,-1, 31,0);
    tracep->declBus(c+559,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+560,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+561,"o_mpec", false,-1, 31,0);
    tracep->declBus(c+1053,"rd_data_r", false,-1, 31,0);
    tracep->declBit(c+571,"wr_en", false,-1);
    tracep->declBit(c+571,"rd_en", false,-1);
    tracep->declBus(c+572,"wr_data_r", false,-1, 31,0);
    tracep->declBus(c+573,"temp", false,-1, 31,0);
    tracep->declBus(c+559,"o_mstatus_r", false,-1, 31,0);
    tracep->declBus(c+574,"mepc_inst_r", false,-1, 31,0);
    tracep->declBus(c+575,"mcause", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu_u0 ");
    tracep->declBus(c+529,"pc", false,-1, 31,0);
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
    tracep->declBit(c+1111,"carry_flag", false,-1);
    tracep->declBit(c+1112,"signed_flag", false,-1);
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
    tracep->declBus(c+530,"inst", false,-1, 31,0);
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
    tracep->declBus(c+1113,"reg_zero", false,-1, 4,0);
    tracep->pushNamePrefix("id_imm_idu ");
    tracep->declBus(c+530,"inst", false,-1, 31,0);
    tracep->declBus(c+543,"imm", false,-1, 31,0);
    tracep->declBus(c+543,"imm_r", false,-1, 31,0);
    tracep->declBus(c+597,"imm_typeI", false,-1, 31,0);
    tracep->declBus(c+598,"imm_typeU", false,-1, 31,0);
    tracep->declBus(c+599,"imm_typeS", false,-1, 31,0);
    tracep->declBus(c+600,"imm_typeB", false,-1, 31,0);
    tracep->declBus(c+601,"imm_typeJ", false,-1, 31,0);
    tracep->declBus(c+1089,"imm_typeR", false,-1, 31,0);
    tracep->declBus(c+1089,"imm_type_NONE", false,-1, 31,0);
    tracep->pushNamePrefix("id_imm_ext_typeB ");
    tracep->declBus(c+1114,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+602,"imm_in", false,-1, 12,0);
    tracep->declBus(c+600,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeI ");
    tracep->declBus(c+1115,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+603,"imm_in", false,-1, 11,0);
    tracep->declBus(c+597,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeJ ");
    tracep->declBus(c+1116,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+604,"imm_in", false,-1, 20,0);
    tracep->declBus(c+601,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeS ");
    tracep->declBus(c+1115,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+605,"imm_in", false,-1, 11,0);
    tracep->declBus(c+599,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeU ");
    tracep->declBus(c+1117,"INPUT_WIDTH", false,-1, 31,0);
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
    tracep->declBit(c+1020,"clk", false,-1);
    tracep->declBit(c+1051,"reset", false,-1);
    tracep->declBus(c+532,"jump_pc", false,-1, 31,0);
    tracep->declBit(c+533,"jump_pc_valid", false,-1);
    tracep->declBit(c+1001,"stall", false,-1);
    tracep->declBit(c+1005,"wbu_stall", false,-1);
    tracep->declBit(c+534,"ifu_r_valid_o", false,-1);
    tracep->declBus(c+535,"ifu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+1002,"ifu_r_ready_i", false,-1);
    tracep->declBus(c+1003,"ifu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+1085,"ifu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+1004,"ifu_r_last_i", false,-1);
    tracep->declBit(c+531,"ifu_stall", false,-1);
    tracep->declBus(c+529,"ifu_pc_o", false,-1, 31,0);
    tracep->declBus(c+530,"ifu_inst_o", false,-1, 31,0);
    tracep->declBus(c+529,"ifu_pc_o_r", false,-1, 31,0);
    tracep->declBus(c+530,"ifu_inst_o_r", false,-1, 31,0);
    tracep->declBus(c+606,"ifu_pc_o_t", false,-1, 31,0);
    tracep->declBus(c+607,"ifu_inst_o_t", false,-1, 31,0);
    tracep->declBus(c+535,"pc", false,-1, 31,0);
    tracep->declBus(c+1003,"inst", false,-1, 31,0);
    tracep->declBus(c+1118,"inst_t", false,-1, 31,0);
    tracep->declBit(c+531,"ifu_stall_r", false,-1);
    tracep->declBit(c+608,"flush_inst", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_u0 ");
    tracep->declBit(c+1020,"clk", false,-1);
    tracep->declBit(c+1051,"reset", false,-1);
    tracep->declBus(c+548,"src1", false,-1, 31,0);
    tracep->declBus(c+549,"src2", false,-1, 31,0);
    tracep->declBus(c+543,"imm", false,-1, 31,0);
    tracep->declBus(c+546,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+547,"funct3", false,-1, 2,0);
    tracep->declBit(c+531,"ifu_stall", false,-1);
    tracep->declBit(c+552,"lsu_r_valid_o", false,-1);
    tracep->declBus(c+553,"lsu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+767,"lsu_r_ready_i", false,-1);
    tracep->declBus(c+768,"lsu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+554,"lsu_r_size_o", false,-1, 2,0);
    tracep->declBus(c+1085,"lsu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+769,"lsu_r_last_i", false,-1);
    tracep->declBit(c+555,"lsu_w_valid_o", false,-1);
    tracep->declBus(c+227,"lsu_w_addr_o", false,-1, 31,0);
    tracep->declBit(c+229,"lsu_w_ready_i", false,-1);
    tracep->declBus(c+549,"lsu_w_data_o", false,-1, 31,0);
    tracep->declBus(c+228,"lsu_w_size_o", false,-1, 2,0);
    tracep->declBus(c+1085,"lsu_w_len_o", false,-1, 7,0);
    tracep->declBit(c+922,"lsu_w_last_i", false,-1);
    tracep->declBit(c+1001,"mem_stall", false,-1);
    tracep->declBit(c+1005,"lsu_rd_wen", false,-1);
    tracep->declBus(c+766,"lsu_result", false,-1, 31,0);
    tracep->declBus(c+553,"raddr", false,-1, 31,0);
    tracep->declBus(c+768,"rdata", false,-1, 31,0);
    tracep->declBus(c+609,"rsize", false,-1, 31,0);
    tracep->declBus(c+227,"waddr", false,-1, 31,0);
    tracep->declBus(c+549,"wdata", false,-1, 31,0);
    tracep->declBus(c+610,"wmask", false,-1, 31,0);
    tracep->declBus(c+610,"mask", false,-1, 31,0);
    tracep->declBus(c+766,"lsu_result_r", false,-1, 31,0);
    tracep->declBit(c+552,"ren", false,-1);
    tracep->declBit(c+555,"wen", false,-1);
    tracep->declBit(c+1007,"lsu_rd_wen_r", false,-1);
    tracep->declBit(c+1008,"lsu_rd_wen_w", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile_u0 ");
    tracep->declBit(c+1020,"clk", false,-1);
    tracep->declBit(c+1051,"reset", false,-1);
    tracep->declBus(c+541,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+548,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+542,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+549,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+770,"rd_en", false,-1);
    tracep->declBus(c+539,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+1052,"rd_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+611+i*1,"gpr", true,(i+0), 31,0);
    }
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu_u0 ");
    tracep->declBus(c+546,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+551,"exu_result", false,-1, 31,0);
    tracep->declBus(c+766,"lsu_result", false,-1, 31,0);
    tracep->declBus(c+1053,"csr_result", false,-1, 31,0);
    tracep->declBit(c+1005,"lsu_rd_wen", false,-1);
    tracep->declBit(c+643,"idu_rd_wen", false,-1);
    tracep->declBit(c+770,"wbu_rd_wen", false,-1);
    tracep->declBus(c+1052,"wbu_result", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"io_d", false,-1);
    tracep->declBit(c+644,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"io_d", false,-1);
    tracep->declBit(c+644,"io_q", false,-1);
    tracep->declBit(c+644,"sync_0", false,-1);
    tracep->declBit(c+645,"sync_1", false,-1);
    tracep->declBit(c+646,"sync_2", false,-1);
    tracep->declBit(c+647,"sync_3", false,-1);
    tracep->declBit(c+648,"sync_4", false,-1);
    tracep->declBit(c+649,"sync_5", false,-1);
    tracep->declBit(c+650,"sync_6", false,-1);
    tracep->declBit(c+651,"sync_7", false,-1);
    tracep->declBit(c+652,"sync_8", false,-1);
    tracep->declBit(c+653,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+721,"auto_in_psel", false,-1);
    tracep->declBit(c+722,"auto_in_penable", false,-1);
    tracep->declBit(c+192,"auto_in_pwrite", false,-1);
    tracep->declBus(c+884,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1073,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+193,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+194,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1081,"auto_in_pready", false,-1);
    tracep->declBit(c+1082,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1083,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1022,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1023,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1024,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1025,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1026,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1027,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1028,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1029,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1030,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1031,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBus(c+898,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+721,"in_psel", false,-1);
    tracep->declBit(c+722,"in_penable", false,-1);
    tracep->declBus(c+1073,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+192,"in_pwrite", false,-1);
    tracep->declBus(c+193,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+194,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1081,"in_pready", false,-1);
    tracep->declBus(c+1083,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1082,"in_pslverr", false,-1);
    tracep->declBus(c+1022,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1023,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1024,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1025,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1026,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1027,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1028,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1029,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1030,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1031,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+719,"auto_in_psel", false,-1);
    tracep->declBit(c+720,"auto_in_penable", false,-1);
    tracep->declBit(c+192,"auto_in_pwrite", false,-1);
    tracep->declBus(c+884,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1073,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+193,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+194,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1078,"auto_in_pready", false,-1);
    tracep->declBit(c+1079,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1080,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1032,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1033,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBus(c+898,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+719,"in_psel", false,-1);
    tracep->declBit(c+720,"in_penable", false,-1);
    tracep->declBus(c+1073,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+192,"in_pwrite", false,-1);
    tracep->declBus(c+193,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+194,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1078,"in_pready", false,-1);
    tracep->declBus(c+1080,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1079,"in_pslverr", false,-1);
    tracep->declBit(c+1032,"ps2_clk", false,-1);
    tracep->declBit(c+1033,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+328,"auto_in_awvalid", false,-1);
    tracep->declBit(c+329,"auto_in_wvalid", false,-1);
    tracep->declBit(c+330,"auto_in_arready", false,-1);
    tracep->declBit(c+331,"auto_in_arvalid", false,-1);
    tracep->declBus(c+208,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+332,"auto_in_araddr", false,-1, 29,0);
    tracep->declBus(c+210,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+733,"auto_in_rready", false,-1);
    tracep->declBit(c+333,"auto_in_rvalid", false,-1);
    tracep->declBus(c+334,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+335,"auto_in_rdata", false,-1, 63,0);
    tracep->declBit(c+333,"state", false,-1);
    tracep->declQuad(c+335,"nodeIn_rdata_r", false,-1, 63,0);
    tracep->declBus(c+334,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+654,"raddr", false,-1, 31,0);
    tracep->declBit(c+655,"ren", false,-1);
    tracep->declBus(c+656,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+885,"auto_in_psel", false,-1);
    tracep->declBit(c+723,"auto_in_penable", false,-1);
    tracep->declBit(c+192,"auto_in_pwrite", false,-1);
    tracep->declBus(c+881,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1073,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+193,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+194,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1046,"auto_in_pready", false,-1);
    tracep->declBit(c+1074,"auto_in_pslverr", false,-1);
    tracep->declBus(c+195,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+914,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+915,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1043,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBus(c+881,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+885,"in_psel", false,-1);
    tracep->declBit(c+723,"in_penable", false,-1);
    tracep->declBus(c+1073,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+192,"in_pwrite", false,-1);
    tracep->declBus(c+193,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+194,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1046,"in_pready", false,-1);
    tracep->declBus(c+195,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1074,"in_pslverr", false,-1);
    tracep->declBit(c+914,"qspi_sck", false,-1);
    tracep->declBit(c+915,"qspi_ce_n", false,-1);
    tracep->declBus(c+1043,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1043,"din", false,-1, 3,0);
    tracep->declBus(c+1009,"dout", false,-1, 3,0);
    tracep->declBus(c+1010,"douten", false,-1, 3,0);
    tracep->declBit(c+1054,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1020,"clk_i", false,-1);
    tracep->declBit(c+1021,"rst_i", false,-1);
    tracep->declBus(c+881,"adr_i", false,-1, 31,0);
    tracep->declBus(c+193,"dat_i", false,-1, 31,0);
    tracep->declBus(c+195,"dat_o", false,-1, 31,0);
    tracep->declBus(c+194,"sel_i", false,-1, 3,0);
    tracep->declBit(c+885,"cyc_i", false,-1);
    tracep->declBit(c+885,"stb_i", false,-1);
    tracep->declBit(c+1054,"ack_o", false,-1);
    tracep->declBit(c+192,"we_i", false,-1);
    tracep->declBit(c+914,"sck", false,-1);
    tracep->declBit(c+915,"ce_n", false,-1);
    tracep->declBus(c+1043,"din", false,-1, 3,0);
    tracep->declBus(c+1009,"dout", false,-1, 3,0);
    tracep->declBus(c+1010,"douten", false,-1, 3,0);
    tracep->declBus(c+1091,"ST_INIT", false,-1, 1,0);
    tracep->declBus(c+1086,"ST_IDLE", false,-1, 1,0);
    tracep->declBus(c+1107,"ST_WAIT", false,-1, 1,0);
    tracep->declBit(c+786,"mr_sck", false,-1);
    tracep->declBit(c+13,"mr_ce_n", false,-1);
    tracep->declBus(c+1043,"mr_din", false,-1, 3,0);
    tracep->declBus(c+1055,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+787,"mr_doe", false,-1);
    tracep->declBit(c+14,"mw_sck", false,-1);
    tracep->declBit(c+15,"mw_ce_n", false,-1);
    tracep->declBus(c+1043,"mw_din", false,-1, 3,0);
    tracep->declBus(c+872,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+16,"mw_doe", false,-1);
    tracep->declBit(c+17,"init_start", false,-1);
    tracep->declBit(c+18,"init_done", false,-1);
    tracep->declBit(c+19,"init_sck", false,-1);
    tracep->declBit(c+20,"init_ce_n", false,-1);
    tracep->declBus(c+21,"init_dout", false,-1, 3,0);
    tracep->declBit(c+1087,"init_doe", false,-1);
    tracep->declBit(c+1011,"mr_rd", false,-1);
    tracep->declBit(c+788,"mr_done", false,-1);
    tracep->declBit(c+1012,"mw_wr", false,-1);
    tracep->declBit(c+873,"mw_done", false,-1);
    tracep->declBit(c+885,"wb_valid", false,-1);
    tracep->declBit(c+899,"wb_we", false,-1);
    tracep->declBit(c+900,"wb_re", false,-1);
    tracep->declBus(c+22,"state", false,-1, 1,0);
    tracep->declBus(c+1013,"nstate", false,-1, 1,0);
    tracep->declBus(c+657,"size", false,-1, 2,0);
    tracep->declBus(c+658,"byte0", false,-1, 7,0);
    tracep->declBus(c+659,"byte1", false,-1, 7,0);
    tracep->declBus(c+660,"byte2", false,-1, 7,0);
    tracep->declBus(c+661,"byte3", false,-1, 7,0);
    tracep->declBus(c+662,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("INIT ");
    tracep->declBit(c+1020,"clk", false,-1);
    tracep->declBit(c+1056,"rst_n", false,-1);
    tracep->declBit(c+17,"start", false,-1);
    tracep->declBit(c+18,"done", false,-1);
    tracep->declBit(c+19,"sck", false,-1);
    tracep->declBit(c+20,"ce_n", false,-1);
    tracep->declBus(c+21,"dout", false,-1, 3,0);
    tracep->declBit(c+1087,"douten", false,-1);
    tracep->declBus(c+1119,"CMD_35H", false,-1, 7,0);
    tracep->declBus(c+23,"counter", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1020,"clk", false,-1);
    tracep->declBit(c+1056,"rst_n", false,-1);
    tracep->declBus(c+901,"addr", false,-1, 23,0);
    tracep->declBit(c+1011,"rd", false,-1);
    tracep->declBus(c+1120,"size", false,-1, 2,0);
    tracep->declBit(c+788,"done", false,-1);
    tracep->declBus(c+195,"line", false,-1, 31,0);
    tracep->declBit(c+786,"sck", false,-1);
    tracep->declBit(c+13,"ce_n", false,-1);
    tracep->declBus(c+1043,"din", false,-1, 3,0);
    tracep->declBus(c+1055,"dout", false,-1, 3,0);
    tracep->declBit(c+787,"douten", false,-1);
    tracep->declBus(c+1121,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1122,"READ", false,-1, 0,0);
    tracep->declBus(c+1123,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+24,"state", false,-1);
    tracep->declBit(c+1014,"nstate", false,-1);
    tracep->declBus(c+789,"counter", false,-1, 7,0);
    tracep->declBus(c+25,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+663+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1124,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+790,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1020,"clk", false,-1);
    tracep->declBit(c+1056,"rst_n", false,-1);
    tracep->declBus(c+902,"addr", false,-1, 23,0);
    tracep->declBus(c+662,"line", false,-1, 31,0);
    tracep->declBus(c+657,"size", false,-1, 2,0);
    tracep->declBit(c+1012,"wr", false,-1);
    tracep->declBit(c+873,"done", false,-1);
    tracep->declBit(c+14,"sck", false,-1);
    tracep->declBit(c+15,"ce_n", false,-1);
    tracep->declBus(c+1043,"din", false,-1, 3,0);
    tracep->declBus(c+872,"dout", false,-1, 3,0);
    tracep->declBit(c+16,"douten", false,-1);
    tracep->declBus(c+1121,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1122,"WRITE", false,-1, 0,0);
    tracep->declBus(c+667,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+26,"state", false,-1);
    tracep->declBit(c+1015,"nstate", false,-1);
    tracep->declBus(c+27,"counter", false,-1, 7,0);
    tracep->declBus(c+28,"saddr", false,-1, 23,0);
    tracep->declBus(c+1125,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+715,"auto_in_psel", false,-1);
    tracep->declBit(c+716,"auto_in_penable", false,-1);
    tracep->declBit(c+192,"auto_in_pwrite", false,-1);
    tracep->declBus(c+881,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1073,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+193,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+194,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+785,"auto_in_pready", false,-1);
    tracep->declBit(c+1074,"auto_in_pslverr", false,-1);
    tracep->declBus(c+12,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1044,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+777,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+778,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+779,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+780,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+781,"sdram_bundle_we", false,-1);
    tracep->declBus(c+782,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+783,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+784,"sdram_bundle_dqm", false,-1, 1,0);
    tracep->declBus(c+1045,"sdram_bundle_dq", false,-1, 15,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBus(c+881,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+715,"in_psel", false,-1);
    tracep->declBit(c+716,"in_penable", false,-1);
    tracep->declBus(c+1073,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+192,"in_pwrite", false,-1);
    tracep->declBus(c+193,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+194,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+785,"in_pready", false,-1);
    tracep->declBus(c+12,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1074,"in_pslverr", false,-1);
    tracep->declBit(c+1044,"sdram_clk", false,-1);
    tracep->declBit(c+777,"sdram_cke", false,-1);
    tracep->declBit(c+778,"sdram_cs", false,-1);
    tracep->declBit(c+779,"sdram_ras", false,-1);
    tracep->declBit(c+780,"sdram_cas", false,-1);
    tracep->declBit(c+781,"sdram_we", false,-1);
    tracep->declBus(c+782,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+783,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+784,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+1045,"sdram_dq", false,-1, 15,0);
    tracep->declBit(c+29,"sdram_dout_en", false,-1);
    tracep->declBus(c+30,"sdram_dout", false,-1, 15,0);
    tracep->declBus(c+668,"state", false,-1, 1,0);
    tracep->declBit(c+791,"req_accept", false,-1);
    tracep->declBit(c+903,"is_read", false,-1);
    tracep->declBit(c+904,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1020,"clk_i", false,-1);
    tracep->declBit(c+1021,"rst_i", false,-1);
    tracep->declBus(c+905,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+903,"inport_rd_i", false,-1);
    tracep->declBus(c+1085,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+881,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+193,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1045,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+791,"inport_accept_o", false,-1);
    tracep->declBit(c+785,"inport_ack_o", false,-1);
    tracep->declBit(c+1074,"inport_error_o", false,-1);
    tracep->declBus(c+12,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1044,"sdram_clk_o", false,-1);
    tracep->declBit(c+777,"sdram_cke_o", false,-1);
    tracep->declBit(c+778,"sdram_cs_o", false,-1);
    tracep->declBit(c+779,"sdram_ras_o", false,-1);
    tracep->declBit(c+780,"sdram_cas_o", false,-1);
    tracep->declBit(c+781,"sdram_we_o", false,-1);
    tracep->declBus(c+784,"sdram_dqm_o", false,-1, 1,0);
    tracep->declBus(c+782,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+783,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+30,"sdram_data_output_o", false,-1, 15,0);
    tracep->declBit(c+29,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1126,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1127,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1128,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1129,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1129,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1129,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1130,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1114,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1131,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1132,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1133,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1130,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1134,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1135,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1136,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1137,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1138,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1139,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1140,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1084,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1141,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1130,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1084,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1140,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1139,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1135,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1137,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1136,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1138,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1134,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1142,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1143,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1144,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1144,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1145,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1144,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1129,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1129,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1146,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+881,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+905,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+903,"ram_rd_w", false,-1);
    tracep->declBit(c+791,"ram_accept_w", false,-1);
    tracep->declBus(c+193,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+12,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+785,"ram_ack_w", false,-1);
    tracep->declBit(c+906,"ram_req_w", false,-1);
    tracep->declBus(c+792,"command_q", false,-1, 3,0);
    tracep->declBus(c+782,"addr_q", false,-1, 12,0);
    tracep->declBus(c+30,"data_q", false,-1, 15,0);
    tracep->declBit(c+31,"data_rd_en_q", false,-1);
    tracep->declBus(c+784,"dqm_q", false,-1, 1,0);
    tracep->declBit(c+777,"cke_q", false,-1);
    tracep->declBus(c+783,"bank_q", false,-1, 1,0);
    tracep->declBus(c+32,"data_buffer_q", false,-1, 15,0);
    tracep->declBus(c+793,"dqm_buffer_q", false,-1, 1,0);
    tracep->declBus(c+1045,"sdram_data_in_w", false,-1, 15,0);
    tracep->declBit(c+33,"refresh_q", false,-1);
    tracep->declBus(c+34,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+35+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+794,"state_q", false,-1, 3,0);
    tracep->declBus(c+1016,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1017,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+39,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+40,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+907,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+908,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+909,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1130,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+41,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1018,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1147,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+795,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+42,"sample_data0_q", false,-1, 15,0);
    tracep->declBus(c+43,"sample_data_q", false,-1, 15,0);
    tracep->declBus(c+44,"idx", false,-1, 31,0);
    tracep->declBus(c+796,"rd_q", false,-1, 3,0);
    tracep->declBit(c+785,"ack_q", false,-1);
    tracep->declArray(c+797,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+889,"auto_in_psel", false,-1);
    tracep->declBit(c+724,"auto_in_penable", false,-1);
    tracep->declBit(c+192,"auto_in_pwrite", false,-1);
    tracep->declBus(c+883,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1073,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+193,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+194,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1048,"auto_in_pready", false,-1);
    tracep->declBit(c+1074,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1049,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+775,"spi_bundle_sck", false,-1);
    tracep->declBus(c+776,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+11,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1042,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1148,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1149,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1150,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBus(c+910,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+889,"in_psel", false,-1);
    tracep->declBit(c+724,"in_penable", false,-1);
    tracep->declBus(c+1073,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+192,"in_pwrite", false,-1);
    tracep->declBus(c+193,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+194,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1048,"in_pready", false,-1);
    tracep->declBus(c+1049,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1074,"in_pslverr", false,-1);
    tracep->declBit(c+775,"spi_sck", false,-1);
    tracep->declBus(c+776,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+11,"spi_mosi", false,-1);
    tracep->declBit(c+1042,"spi_miso", false,-1);
    tracep->declBit(c+1151,"spi_irq_out", false,-1);
    tracep->declBus(c+669,"wb_adr_i", false,-1, 31,0);
    tracep->declBus(c+670,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+45,"wb_dat_o", false,-1, 31,0);
    tracep->declBit(c+671,"wb_we_i", false,-1);
    tracep->declBit(c+672,"wb_stb_i", false,-1);
    tracep->declBit(c+673,"wb_cyc_i", false,-1);
    tracep->declBit(c+800,"wb_ack_o", false,-1);
    tracep->declBit(c+801,"wb_int_o", false,-1);
    tracep->declBus(c+674,"wb_sel_i", false,-1, 3,0);
    tracep->declBus(c+675,"spi_state", false,-1, 3,0);
    tracep->declBus(c+1084,"SPI_IDLE", false,-1, 3,0);
    tracep->declBus(c+1140,"SPI_REG", false,-1, 3,0);
    tracep->declBus(c+1139,"SPI_FLASH_TX1", false,-1, 3,0);
    tracep->declBus(c+1135,"SPI_FLASH_TX0", false,-1, 3,0);
    tracep->declBus(c+1137,"SPI_FLASH_SS1", false,-1, 3,0);
    tracep->declBus(c+1136,"SPI_FLASH_CTRL", false,-1, 3,0);
    tracep->declBus(c+1138,"SPI_FLASH_INTT", false,-1, 3,0);
    tracep->declBus(c+1134,"SPI_FLASH_SS0", false,-1, 3,0);
    tracep->declBus(c+1142,"SPI_FLASH_DATA", false,-1, 3,0);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1152,"Tp", false,-1, 31,0);
    tracep->declBit(c+1020,"wb_clk_i", false,-1);
    tracep->declBit(c+1021,"wb_rst_i", false,-1);
    tracep->declBus(c+676,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+670,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+45,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+674,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+671,"wb_we_i", false,-1);
    tracep->declBit(c+672,"wb_stb_i", false,-1);
    tracep->declBit(c+673,"wb_cyc_i", false,-1);
    tracep->declBit(c+800,"wb_ack_o", false,-1);
    tracep->declBit(c+1074,"wb_err_o", false,-1);
    tracep->declBit(c+801,"wb_int_o", false,-1);
    tracep->declBus(c+776,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+775,"sclk_pad_o", false,-1);
    tracep->declBit(c+11,"mosi_pad_o", false,-1);
    tracep->declBit(c+1042,"miso_pad_i", false,-1);
    tracep->declBus(c+802,"divider", false,-1, 15,0);
    tracep->declBus(c+803,"ctrl", false,-1, 13,0);
    tracep->declBus(c+46,"ss", false,-1, 7,0);
    tracep->declBus(c+874,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+47,"rx", false,-1, 127,0);
    tracep->declBit(c+804,"rx_negedge", false,-1);
    tracep->declBit(c+805,"tx_negedge", false,-1);
    tracep->declBus(c+806,"char_len", false,-1, 6,0);
    tracep->declBit(c+807,"go", false,-1);
    tracep->declBit(c+808,"lsb", false,-1);
    tracep->declBit(c+809,"ie", false,-1);
    tracep->declBit(c+810,"ass", false,-1);
    tracep->declBit(c+677,"spi_divider_sel", false,-1);
    tracep->declBit(c+678,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+679,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+680,"spi_ss_sel", false,-1);
    tracep->declBit(c+811,"tip", false,-1);
    tracep->declBit(c+812,"pos_edge", false,-1);
    tracep->declBit(c+51,"neg_edge", false,-1);
    tracep->declBit(c+813,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1152,"Tp", false,-1, 31,0);
    tracep->declBit(c+1020,"clk_in", false,-1);
    tracep->declBit(c+1021,"rst", false,-1);
    tracep->declBit(c+811,"enable", false,-1);
    tracep->declBit(c+807,"go", false,-1);
    tracep->declBit(c+813,"last_clk", false,-1);
    tracep->declBus(c+802,"divider", false,-1, 15,0);
    tracep->declBit(c+775,"clk_out", false,-1);
    tracep->declBit(c+812,"pos_edge", false,-1);
    tracep->declBit(c+51,"neg_edge", false,-1);
    tracep->declBus(c+814,"cnt", false,-1, 15,0);
    tracep->declBit(c+815,"cnt_zero", false,-1);
    tracep->declBit(c+816,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1152,"Tp", false,-1, 31,0);
    tracep->declBit(c+1020,"clk", false,-1);
    tracep->declBit(c+1021,"rst", false,-1);
    tracep->declBus(c+681,"latch", false,-1, 3,0);
    tracep->declBus(c+674,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+806,"len", false,-1, 6,0);
    tracep->declBit(c+808,"lsb", false,-1);
    tracep->declBit(c+807,"go", false,-1);
    tracep->declBit(c+812,"pos_edge", false,-1);
    tracep->declBit(c+51,"neg_edge", false,-1);
    tracep->declBit(c+804,"rx_negedge", false,-1);
    tracep->declBit(c+805,"tx_negedge", false,-1);
    tracep->declBit(c+811,"tip", false,-1);
    tracep->declBit(c+813,"last", false,-1);
    tracep->declBus(c+670,"p_in", false,-1, 31,0);
    tracep->declArray(c+47,"p_out", false,-1, 127,0);
    tracep->declBit(c+775,"s_clk", false,-1);
    tracep->declBit(c+1042,"s_in", false,-1);
    tracep->declBit(c+11,"s_out", false,-1);
    tracep->declBus(c+817,"cnt", false,-1, 7,0);
    tracep->declArray(c+47,"data", false,-1, 127,0);
    tracep->declBus(c+818,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+819,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+820,"rx_clk", false,-1);
    tracep->declBit(c+821,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+886,"auto_in_psel", false,-1);
    tracep->declBit(c+887,"auto_in_penable", false,-1);
    tracep->declBit(c+192,"auto_in_pwrite", false,-1);
    tracep->declBus(c+884,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1073,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+193,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+194,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+888,"auto_in_pready", false,-1);
    tracep->declBit(c+1074,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1047,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1040,"uart_rx", false,-1);
    tracep->declBit(c+1041,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+886,"in_psel", false,-1);
    tracep->declBit(c+887,"in_penable", false,-1);
    tracep->declBus(c+1073,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+888,"in_pready", false,-1);
    tracep->declBit(c+1074,"in_pslverr", false,-1);
    tracep->declBus(c+898,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+192,"in_pwrite", false,-1);
    tracep->declBus(c+1047,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+193,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+194,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1040,"uart_rx", false,-1);
    tracep->declBit(c+1041,"uart_tx", false,-1);
    tracep->declBit(c+52,"rtsn", false,-1);
    tracep->declBit(c+1074,"ctsn", false,-1);
    tracep->declBit(c+53,"dtr_pad_o", false,-1);
    tracep->declBit(c+1074,"dsr_pad_i", false,-1);
    tracep->declBit(c+1074,"ri_pad_i", false,-1);
    tracep->declBit(c+1074,"dcd_pad_i", false,-1);
    tracep->declBit(c+54,"interrupt", false,-1);
    tracep->declBit(c+1057,"reg_we", false,-1);
    tracep->declBit(c+1058,"reg_re", false,-1);
    tracep->declBus(c+911,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+912,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+682,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1019,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+55,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1020,"clk", false,-1);
    tracep->declBit(c+1021,"wb_rst_i", false,-1);
    tracep->declBus(c+911,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+913,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1019,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1057,"wb_we_i", false,-1);
    tracep->declBit(c+1058,"wb_re_i", false,-1);
    tracep->declBit(c+1041,"stx_pad_o", false,-1);
    tracep->declBit(c+1040,"srx_pad_i", false,-1);
    tracep->declBus(c+1142,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+55,"rts_pad_o", false,-1);
    tracep->declBit(c+53,"dtr_pad_o", false,-1);
    tracep->declBit(c+54,"int_o", false,-1);
    tracep->declBit(c+822,"enable", false,-1);
    tracep->declBit(c+56,"srx_pad", false,-1);
    tracep->declBus(c+57,"ier", false,-1, 3,0);
    tracep->declBus(c+58,"iir", false,-1, 3,0);
    tracep->declBus(c+59,"fcr", false,-1, 1,0);
    tracep->declBus(c+60,"mcr", false,-1, 4,0);
    tracep->declBus(c+823,"lcr", false,-1, 7,0);
    tracep->declBus(c+61,"msr", false,-1, 7,0);
    tracep->declBus(c+824,"dl", false,-1, 15,0);
    tracep->declBus(c+62,"scratch", false,-1, 7,0);
    tracep->declBit(c+63,"start_dlc", false,-1);
    tracep->declBit(c+64,"lsr_mask_d", false,-1);
    tracep->declBit(c+65,"msi_reset", false,-1);
    tracep->declBus(c+825,"dlc", false,-1, 15,0);
    tracep->declBus(c+66,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+67,"rx_reset", false,-1);
    tracep->declBit(c+826,"tx_reset", false,-1);
    tracep->declBit(c+827,"dlab", false,-1);
    tracep->declBit(c+1087,"cts_pad_i", false,-1);
    tracep->declBit(c+1074,"dsr_pad_i", false,-1);
    tracep->declBit(c+1074,"ri_pad_i", false,-1);
    tracep->declBit(c+1074,"dcd_pad_i", false,-1);
    tracep->declBit(c+68,"loopback", false,-1);
    tracep->declBit(c+1074,"cts", false,-1);
    tracep->declBit(c+1087,"dsr", false,-1);
    tracep->declBit(c+1087,"ri", false,-1);
    tracep->declBit(c+1087,"dcd", false,-1);
    tracep->declBit(c+69,"cts_c", false,-1);
    tracep->declBit(c+70,"dsr_c", false,-1);
    tracep->declBit(c+71,"ri_c", false,-1);
    tracep->declBit(c+72,"dcd_c", false,-1);
    tracep->declBus(c+73,"lsr", false,-1, 7,0);
    tracep->declBit(c+828,"lsr0", false,-1);
    tracep->declBit(c+74,"lsr1", false,-1);
    tracep->declBit(c+75,"lsr2", false,-1);
    tracep->declBit(c+76,"lsr3", false,-1);
    tracep->declBit(c+77,"lsr4", false,-1);
    tracep->declBit(c+829,"lsr5", false,-1);
    tracep->declBit(c+830,"lsr6", false,-1);
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
    tracep->declBit(c+831,"tf_push", false,-1);
    tracep->declBit(c+92,"rf_pop", false,-1);
    tracep->declBus(c+1059,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+93,"rf_error_bit", false,-1);
    tracep->declBit(c+74,"rf_overrun", false,-1);
    tracep->declBit(c+832,"rf_push_pulse", false,-1);
    tracep->declBus(c+94,"rf_count", false,-1, 4,0);
    tracep->declBus(c+833,"tf_count", false,-1, 4,0);
    tracep->declBus(c+834,"tstate", false,-1, 2,0);
    tracep->declBus(c+835,"rstate", false,-1, 3,0);
    tracep->declBus(c+95,"counter_t", false,-1, 9,0);
    tracep->declBit(c+96,"thre_set_en", false,-1);
    tracep->declBus(c+97,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+836,"block_value", false,-1, 7,0);
    tracep->declBit(c+837,"serial_out", false,-1);
    tracep->declBit(c+838,"serial_in", false,-1);
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
    tracep->declBus(c+1152,"Tp", false,-1, 31,0);
    tracep->declBus(c+1152,"width", false,-1, 31,0);
    tracep->declBus(c+1122,"init_value", false,-1, 0,0);
    tracep->declBit(c+1021,"rst_i", false,-1);
    tracep->declBit(c+1020,"clk_i", false,-1);
    tracep->declBit(c+1074,"stage1_rst_i", false,-1);
    tracep->declBit(c+1087,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1040,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+56,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+122,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1020,"clk", false,-1);
    tracep->declBit(c+1021,"wb_rst_i", false,-1);
    tracep->declBus(c+823,"lcr", false,-1, 7,0);
    tracep->declBit(c+92,"rf_pop", false,-1);
    tracep->declBit(c+838,"srx_pad_i", false,-1);
    tracep->declBit(c+822,"enable", false,-1);
    tracep->declBit(c+67,"rx_reset", false,-1);
    tracep->declBit(c+2,"lsr_mask", false,-1);
    tracep->declBus(c+95,"counter_t", false,-1, 9,0);
    tracep->declBus(c+94,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1059,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+74,"rf_overrun", false,-1);
    tracep->declBit(c+93,"rf_error_bit", false,-1);
    tracep->declBus(c+835,"rstate", false,-1, 3,0);
    tracep->declBit(c+832,"rf_push_pulse", false,-1);
    tracep->declBus(c+839,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+840,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+841,"rshift", false,-1, 7,0);
    tracep->declBit(c+842,"rparity", false,-1);
    tracep->declBit(c+843,"rparity_error", false,-1);
    tracep->declBit(c+844,"rframing_error", false,-1);
    tracep->declBit(c+123,"rbit_in", false,-1);
    tracep->declBit(c+845,"rparity_xor", false,-1);
    tracep->declBus(c+846,"counter_b", false,-1, 7,0);
    tracep->declBit(c+124,"rf_push_q", false,-1);
    tracep->declBus(c+847,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+848,"rf_push", false,-1);
    tracep->declBit(c+849,"break_error", false,-1);
    tracep->declBit(c+850,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+851,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+852,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+853,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1084,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1140,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1139,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1135,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1137,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1136,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1138,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1134,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1142,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1143,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1153,"sr_push", false,-1, 3,0);
    tracep->declBus(c+854,"toc_value", false,-1, 9,0);
    tracep->declBus(c+855,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1154,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1145,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1130,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1155,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1020,"clk", false,-1);
    tracep->declBit(c+1021,"wb_rst_i", false,-1);
    tracep->declBit(c+832,"push", false,-1);
    tracep->declBit(c+92,"pop", false,-1);
    tracep->declBus(c+847,"data_in", false,-1, 10,0);
    tracep->declBit(c+67,"fifo_reset", false,-1);
    tracep->declBit(c+2,"reset_status", false,-1);
    tracep->declBus(c+1059,"data_out", false,-1, 10,0);
    tracep->declBit(c+74,"overrun", false,-1);
    tracep->declBus(c+94,"count", false,-1, 4,0);
    tracep->declBit(c+93,"error_bit", false,-1);
    tracep->declBus(c+1060,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+125+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+856,"top", false,-1, 3,0);
    tracep->declBus(c+141,"bottom", false,-1, 3,0);
    tracep->declBus(c+857,"top_plus_1", false,-1, 3,0);
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
    tracep->declBus(c+1130,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1150,"data_width", false,-1, 31,0);
    tracep->declBus(c+1145,"depth", false,-1, 31,0);
    tracep->declBit(c+1020,"clk", false,-1);
    tracep->declBit(c+832,"we", false,-1);
    tracep->declBus(c+856,"a", false,-1, 3,0);
    tracep->declBus(c+141,"dpra", false,-1, 3,0);
    tracep->declBus(c+858,"di", false,-1, 7,0);
    tracep->declBus(c+1060,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+683+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1020,"clk", false,-1);
    tracep->declBit(c+1021,"wb_rst_i", false,-1);
    tracep->declBus(c+823,"lcr", false,-1, 7,0);
    tracep->declBit(c+831,"tf_push", false,-1);
    tracep->declBus(c+913,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+822,"enable", false,-1);
    tracep->declBit(c+826,"tx_reset", false,-1);
    tracep->declBit(c+2,"lsr_mask", false,-1);
    tracep->declBit(c+837,"stx_pad_o", false,-1);
    tracep->declBus(c+834,"tstate", false,-1, 2,0);
    tracep->declBus(c+833,"tf_count", false,-1, 4,0);
    tracep->declBus(c+859,"counter", false,-1, 4,0);
    tracep->declBus(c+860,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+861,"shift_out", false,-1, 6,0);
    tracep->declBit(c+862,"stx_o_tmp", false,-1);
    tracep->declBit(c+863,"parity_xor", false,-1);
    tracep->declBit(c+864,"tf_pop", false,-1);
    tracep->declBit(c+865,"bit_out", false,-1);
    tracep->declBus(c+913,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+875,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+158,"tf_overrun", false,-1);
    tracep->declBus(c+1090,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1073,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1108,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1109,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1120,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1156,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1150,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1145,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1130,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1155,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1020,"clk", false,-1);
    tracep->declBit(c+1021,"wb_rst_i", false,-1);
    tracep->declBit(c+831,"push", false,-1);
    tracep->declBit(c+864,"pop", false,-1);
    tracep->declBus(c+913,"data_in", false,-1, 7,0);
    tracep->declBit(c+826,"fifo_reset", false,-1);
    tracep->declBit(c+2,"reset_status", false,-1);
    tracep->declBus(c+875,"data_out", false,-1, 7,0);
    tracep->declBit(c+158,"overrun", false,-1);
    tracep->declBus(c+833,"count", false,-1, 4,0);
    tracep->declBus(c+866,"top", false,-1, 3,0);
    tracep->declBus(c+867,"bottom", false,-1, 3,0);
    tracep->declBus(c+868,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1130,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1150,"data_width", false,-1, 31,0);
    tracep->declBus(c+1145,"depth", false,-1, 31,0);
    tracep->declBit(c+1020,"clk", false,-1);
    tracep->declBit(c+831,"we", false,-1);
    tracep->declBus(c+866,"a", false,-1, 3,0);
    tracep->declBus(c+867,"dpra", false,-1, 3,0);
    tracep->declBus(c+913,"di", false,-1, 7,0);
    tracep->declBus(c+875,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+699+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBit(c+717,"auto_in_psel", false,-1);
    tracep->declBit(c+718,"auto_in_penable", false,-1);
    tracep->declBit(c+192,"auto_in_pwrite", false,-1);
    tracep->declBus(c+883,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1073,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+193,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+194,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1075,"auto_in_pready", false,-1);
    tracep->declBit(c+1076,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1077,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1034,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1035,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1036,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1037,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1038,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1039,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1020,"clock", false,-1);
    tracep->declBit(c+1021,"reset", false,-1);
    tracep->declBus(c+910,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+717,"in_psel", false,-1);
    tracep->declBit(c+718,"in_penable", false,-1);
    tracep->declBus(c+1073,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+192,"in_pwrite", false,-1);
    tracep->declBus(c+193,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+194,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1075,"in_pready", false,-1);
    tracep->declBus(c+1077,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1076,"in_pslverr", false,-1);
    tracep->declBus(c+1034,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1035,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1036,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1037,"vga_hsync", false,-1);
    tracep->declBit(c+1038,"vga_vsync", false,-1);
    tracep->declBit(c+1039,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+775,"sck", false,-1);
    tracep->declBit(c+869,"ss", false,-1);
    tracep->declBit(c+11,"mosi", false,-1);
    tracep->declBit(c+1061,"miso", false,-1);
    tracep->declBus(c+8,"data", false,-1, 7,0);
    tracep->declBus(c+9,"bit_cnt", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+775,"sck", false,-1);
    tracep->declBit(c+870,"ss", false,-1);
    tracep->declBit(c+11,"mosi", false,-1);
    tracep->declBit(c+1062,"miso", false,-1);
    tracep->declBit(c+870,"reset", false,-1);
    tracep->declBus(c+771,"state", false,-1, 2,0);
    tracep->declBus(c+772,"counter", false,-1, 7,0);
    tracep->declBus(c+1063,"cmd", false,-1, 7,0);
    tracep->declBus(c+1064,"addr", false,-1, 23,0);
    tracep->declBus(c+773,"data", false,-1, 31,0);
    tracep->declBit(c+774,"ren", false,-1);
    tracep->declBus(c+10,"rdata", false,-1, 31,0);
    tracep->declBus(c+1065,"raddr", false,-1, 31,0);
    tracep->declBus(c+1066,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+775,"clock", false,-1);
    tracep->declBit(c+774,"valid", false,-1);
    tracep->declBus(c+1063,"cmd", false,-1, 7,0);
    tracep->declBus(c+1065,"addr", false,-1, 31,0);
    tracep->declBus(c+10,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+914,"sck", false,-1);
    tracep->declBit(c+915,"ce_n", false,-1);
    tracep->declBus(c+1043,"dio", false,-1, 3,0);
    tracep->declBus(c+876,"dout_en", false,-1, 3,0);
    tracep->declBus(c+1067,"dout", false,-1, 3,0);
    tracep->declBus(c+1043,"din", false,-1, 3,0);
    tracep->declBit(c+1068,"QPI_MODE", false,-1);
    tracep->declBus(c+877,"cmd", false,-1, 7,0);
    tracep->declBus(c+878,"addr", false,-1, 23,0);
    tracep->declBus(c+1069,"data", false,-1, 31,0);
    tracep->declBus(c+1070,"rdata", false,-1, 31,0);
    tracep->declBus(c+879,"counter", false,-1, 7,0);
    tracep->declBus(c+880,"state", false,-1, 3,0);
    tracep->declBus(c+1071,"data_bswap", false,-1, 31,0);
    tracep->declBus(c+1072,"wdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1044,"clk", false,-1);
    tracep->declBit(c+777,"cke", false,-1);
    tracep->declBit(c+778,"cs", false,-1);
    tracep->declBit(c+779,"ras", false,-1);
    tracep->declBit(c+780,"cas", false,-1);
    tracep->declBit(c+781,"we", false,-1);
    tracep->declBus(c+782,"a", false,-1, 12,0);
    tracep->declBus(c+783,"ba", false,-1, 1,0);
    tracep->declBus(c+784,"dqm", false,-1, 1,0);
    tracep->declBus(c+1045,"dq", false,-1, 15,0);
    tracep->declBus(c+1157,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1158,"CMD_NOP", false,-1, 2,0);
    tracep->declBus(c+1109,"CMD_ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1156,"CMD_READ", false,-1, 2,0);
    tracep->declBus(c+1120,"CMD_WRITE", false,-1, 2,0);
    tracep->declBus(c+1159,"CMD_TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1108,"CMD_PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1073,"CMD_REFRESH", false,-1, 2,0);
    tracep->declBus(c+1090,"CMD_LOAD_MODE", false,-1, 2,0);
    tracep->declBus(c+1160,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+159+i*1,"Line_Address", true,(i+0), 12,0);
    }
    tracep->declBus(c+163,"dout_en", false,-1, 15,0);
    tracep->declBus(c+164,"dout", false,-1, 15,0);
    tracep->declBus(c+1045,"din", false,-1, 15,0);
    tracep->declBus(c+165,"CAS_Latency", false,-1, 2,0);
    tracep->declBus(c+166,"Brust_Length", false,-1, 2,0);
    tracep->declBus(c+871,"command", false,-1, 2,0);
    tracep->declBus(c+167,"L_Bank", false,-1, 1,0);
    tracep->declBus(c+168,"Row_Address", false,-1, 8,0);
    tracep->declBus(c+169,"dqm_buf1", false,-1, 1,0);
    tracep->declBus(c+170,"dqm_buf2", false,-1, 1,0);
    tracep->declBus(c+171,"dqm_buf3", false,-1, 1,0);
    tracep->declBus(c+172,"r_counter", false,-1, 3,0);
    tracep->declBus(c+173,"w_counter", false,-1, 3,0);
    tracep->declBit(c+174,"read_flag", false,-1);
    tracep->declBus(c+175,"R_Address", false,-1, 8,0);
    tracep->declBus(c+176,"W_Address", false,-1, 8,0);
    tracep->declBus(c+177,"W_data", false,-1, 15,0);
    tracep->declBus(c+178,"r_sdram_address", false,-1, 21,0);
    tracep->declBus(c+179,"w_sdram_address", false,-1, 21,0);
    tracep->declBus(c+180,"Length", false,-1, 3,0);
    tracep->declBus(c+181,"sdram_address_t", false,-1, 21,0);
    tracep->declQuad(c+182,"bank0_temp", false,-1, 63,0);
    tracep->declQuad(c+184,"bank1_temp", false,-1, 63,0);
    tracep->declQuad(c+186,"bank2_temp", false,-1, 63,0);
    tracep->declQuad(c+188,"bank3_temp", false,-1, 63,0);
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
    bufp->fullSData(oldp+159,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__Line_Address[0]),13);
    bufp->fullSData(oldp+160,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__Line_Address[1]),13);
    bufp->fullSData(oldp+161,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__Line_Address[2]),13);
    bufp->fullSData(oldp+162,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__Line_Address[3]),13);
    bufp->fullSData(oldp+163,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__read_flag)
                                ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+164,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__dout),16);
    bufp->fullCData(oldp+165,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__CAS_Latency),3);
    bufp->fullCData(oldp+166,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__Brust_Length),3);
    bufp->fullCData(oldp+167,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__L_Bank),2);
    bufp->fullSData(oldp+168,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__Row_Address),9);
    bufp->fullCData(oldp+169,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__dqm_buf1),2);
    bufp->fullCData(oldp+170,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__dqm_buf2),2);
    bufp->fullCData(oldp+171,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__dqm_buf3),2);
    bufp->fullCData(oldp+172,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__r_counter),4);
    bufp->fullCData(oldp+173,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__w_counter),4);
    bufp->fullBit(oldp+174,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__read_flag));
    bufp->fullSData(oldp+175,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__R_Address),9);
    bufp->fullSData(oldp+176,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__W_Address),9);
    bufp->fullSData(oldp+177,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__W_data),16);
    bufp->fullIData(oldp+178,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+179,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+180,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__Length),4);
    bufp->fullIData(oldp+181,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_address_t),22);
    bufp->fullQData(oldp+182,((((QData)((IData)(((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank
                                                  [0U]
                                                  [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_address_t] 
                                                  << 0x10U) 
                                                 | vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank
                                                 [0U]
                                                 [(0x3fffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_address_t))]))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank
                                                              [0U]
                                                              [
                                                              (0x3fffffU 
                                                               & ((IData)(2U) 
                                                                  + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_address_t))] 
                                                              << 0x10U) 
                                                             | vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank
                                                             [0U]
                                                             [
                                                             (0x3fffffU 
                                                              & ((IData)(3U) 
                                                                 + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_address_t))]))))),64);
    bufp->fullQData(oldp+184,((((QData)((IData)(((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank
                                                  [1U]
                                                  [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_address_t] 
                                                  << 0x10U) 
                                                 | vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank
                                                 [1U]
                                                 [(0x3fffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_address_t))]))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank
                                                              [1U]
                                                              [
                                                              (0x3fffffU 
                                                               & ((IData)(2U) 
                                                                  + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_address_t))] 
                                                              << 0x10U) 
                                                             | vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank
                                                             [1U]
                                                             [
                                                             (0x3fffffU 
                                                              & ((IData)(3U) 
                                                                 + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_address_t))]))))),64);
    bufp->fullQData(oldp+186,((((QData)((IData)(((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank
                                                  [2U]
                                                  [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_address_t] 
                                                  << 0x10U) 
                                                 | vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank
                                                 [2U]
                                                 [(0x3fffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_address_t))]))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank
                                                              [2U]
                                                              [
                                                              (0x3fffffU 
                                                               & ((IData)(2U) 
                                                                  + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_address_t))] 
                                                              << 0x10U) 
                                                             | vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank
                                                             [2U]
                                                             [
                                                             (0x3fffffU 
                                                              & ((IData)(3U) 
                                                                 + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_address_t))]))))),64);
    bufp->fullQData(oldp+188,((((QData)((IData)(((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank
                                                  [3U]
                                                  [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_address_t] 
                                                  << 0x10U) 
                                                 | vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank
                                                 [3U]
                                                 [(0x3fffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_address_t))]))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank
                                                              [3U]
                                                              [
                                                              (0x3fffffU 
                                                               & ((IData)(2U) 
                                                                  + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_address_t))] 
                                                              << 0x10U) 
                                                             | vlSelf->ysyxSoCFull__DOT__sdram__DOT__bank
                                                             [3U]
                                                             [
                                                             (0x3fffffU 
                                                              & ((IData)(3U) 
                                                                 + vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_address_t))]))))),64);
    bufp->fullBit(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+191,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w),32);
    bufp->fullCData(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullIData(oldp+195,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullBit(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_awvalid));
    bufp->fullCData(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_wvalid));
    bufp->fullQData(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),64);
    bufp->fullCData(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),8);
    bufp->fullCData(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_arvalid));
    bufp->fullCData(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg),32);
    bufp->fullQData(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),64);
    bufp->fullQData(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg),64);
    bufp->fullCData(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),8);
    bufp->fullCData(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg),8);
    bufp->fullCData(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+225,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+226,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state))));
    bufp->fullIData(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_w_addr_o),32);
    bufp->fullCData(oldp+228,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__mask)),3);
    bufp->fullBit(oldp+229,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+230,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state))));
    bufp->fullQData(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata),64);
    bufp->fullCData(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb),8);
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast));
    bufp->fullBit(oldp+235,(((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state)) 
                             | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state)))));
    bufp->fullBit(oldp+236,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+237,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_state))));
    bufp->fullIData(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_addr_o),32);
    bufp->fullCData(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_size_o),3);
    bufp->fullBit(oldp+240,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_state))));
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+242,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+244,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+246,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+247,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullCData(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullSData(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullCData(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullIData(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullQData(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullQData(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+292,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                    ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram[2U] 
                                       >> 8U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast)))));
    bufp->fullWData(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),73);
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid));
    bufp->fullIData(oldp+298,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+299,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+302,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+303,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+304,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullQData(oldp+307,((((QData)((IData)((0xffU 
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
    bufp->fullCData(oldp+309,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+310,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullBit(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullCData(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r4),8);
    bufp->fullCData(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r5),8);
    bufp->fullCData(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r6),8);
    bufp->fullCData(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r7),8);
    bufp->fullSData(oldp+322,((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 3U))),10);
    bufp->fullQData(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),64);
    bufp->fullSData(oldp+325,((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 3U))),10);
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+328,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
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
    bufp->fullBit(oldp+329,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 1U))));
    bufp->fullBit(oldp+330,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+331,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+332,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullQData(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),64);
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+341,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                    | ((0xcU & (8U 
                                                ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                       | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x17U)) 
                                          | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+388,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullCData(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+401,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+405,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+409,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+413,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+417,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+421,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+425,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+429,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+433,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+437,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+441,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+445,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+449,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+453,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+457,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+461,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+465,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+469,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+473,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+477,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+481,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+485,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+489,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+493,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+497,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+501,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+505,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+509,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+513,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+517,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+521,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+525,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_pc_o_r),32);
    bufp->fullIData(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r),32);
    bufp->fullBit(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_stall_r));
    bufp->fullIData(oldp+532,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_mret)
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
    bufp->fullBit(oldp+533,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_mret) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_ecall) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h15124160__0) 
                                   | (0x67U == (0x7fU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)))))));
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_r_valid_o));
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
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_r_valid_o)
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
    bufp->fullIData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_pc_o_t),32);
    bufp->fullIData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_t),32);
    bufp->fullBit(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__flush_inst));
    bufp->fullIData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__rsize),32);
    bufp->fullIData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__mask),32);
    bufp->fullIData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[0]),32);
    bufp->fullIData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[1]),32);
    bufp->fullIData(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[2]),32);
    bufp->fullIData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[3]),32);
    bufp->fullIData(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[4]),32);
    bufp->fullIData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[5]),32);
    bufp->fullIData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[6]),32);
    bufp->fullIData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[7]),32);
    bufp->fullIData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[8]),32);
    bufp->fullIData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[9]),32);
    bufp->fullIData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[10]),32);
    bufp->fullIData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[11]),32);
    bufp->fullIData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[12]),32);
    bufp->fullIData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[13]),32);
    bufp->fullIData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[14]),32);
    bufp->fullIData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[15]),32);
    bufp->fullIData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[16]),32);
    bufp->fullIData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[17]),32);
    bufp->fullIData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[18]),32);
    bufp->fullIData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[19]),32);
    bufp->fullIData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[20]),32);
    bufp->fullIData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[21]),32);
    bufp->fullIData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[22]),32);
    bufp->fullIData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[23]),32);
    bufp->fullIData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[24]),32);
    bufp->fullIData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[25]),32);
    bufp->fullIData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[26]),32);
    bufp->fullIData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[27]),32);
    bufp->fullIData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[28]),32);
    bufp->fullIData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[29]),32);
    bufp->fullIData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[30]),32);
    bufp->fullIData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[31]),32);
    bufp->fullBit(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu_u0__idu_rd_wen));
    bufp->fullBit(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullIData(oldp+654,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+660,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+661,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+662,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                   << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullCData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+667,((0xffU & ((IData)(7U) 
                                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                           << 1U)))),8);
    bufp->fullCData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullIData(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),32);
    bufp->fullIData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullBit(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullCData(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullCData(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_state),4);
    bufp->fullCData(oldp+676,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i)),5);
    bufp->fullBit(oldp+677,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i)))));
    bufp->fullBit(oldp+678,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i)))));
    bufp->fullCData(oldp+679,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
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
    bufp->fullBit(oldp+680,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i)))));
    bufp->fullCData(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+715,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+716,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+717,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+718,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+719,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+720,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+721,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+722,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+723,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+724,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullCData(oldp+725,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                   << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r))),2);
    bufp->fullQData(oldp+726,((((QData)((IData)(((1U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                  : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((1U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                              ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                              : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))))),64);
    bufp->fullCData(oldp+728,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullQData(oldp+729,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullBit(oldp+731,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+732,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+733,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+734,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+735,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+736,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+737,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+738,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+739,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+740,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+741,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+742,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+743,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+744,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+745,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+746,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+747,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+748,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+749,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+750,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+751,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+752,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+753,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+754,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+755,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+756,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+757,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+758,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+759,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+760,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+761,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+762,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+763,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+764,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+765,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullIData(oldp+766,(((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
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
    bufp->fullBit(oldp+767,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_ready_i))));
    bufp->fullIData(oldp+768,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state))
                                ? (IData)(vlSelf->__VdfgTmp_hfe507537__0)
                                : 0U)),32);
    bufp->fullBit(oldp+769,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_last_i))));
    bufp->fullBit(oldp+770,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu_u0__idu_rd_wen)
                              : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu_u0__idu_rd_wen)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rd_wen)))));
    bufp->fullCData(oldp+771,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+772,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullIData(oldp+773,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+774,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+775,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+776,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+778,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+779,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+780,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+781,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),2);
    bufp->fullBit(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullBit(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+787,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+788,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullCData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullCData(oldp+790,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+791,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullCData(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),2);
    bufp->fullCData(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullIData(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullCData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullWData(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullBit(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_int_o));
    bufp->fullSData(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullBit(oldp+804,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+805,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+806,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+807,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+808,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+809,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+810,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+813,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+815,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+816,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+818,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullCData(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullSData(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullSData(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullBit(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+827,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullCData(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullSData(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+849,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+850,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+851,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+852,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+853,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+855,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+857,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+858,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullCData(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+868,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+869,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                   >> 7U))));
    bufp->fullBit(oldp+870,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+871,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))),3);
    bufp->fullCData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullIData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullCData(oldp+876,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h299493e7__0)
                                ? 0xfU : 0U)),4);
    bufp->fullCData(oldp+877,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+878,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+879,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullCData(oldp+880,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),4);
    bufp->fullIData(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w),32);
    bufp->fullBit(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullIData(oldp+883,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),30);
    bufp->fullIData(oldp+884,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),29);
    bufp->fullBit(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel));
    bufp->fullBit(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel));
    bufp->fullBit(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable));
    bufp->fullBit(oldp+888,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel))));
    bufp->fullBit(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_psel));
    bufp->fullBit(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullCData(oldp+897,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullIData(oldp+898,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullBit(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullIData(oldp+901,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullIData(oldp+902,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullBit(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+907,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                         >> 1U))),13);
    bufp->fullSData(oldp+908,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+909,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                     >> 0xaU))),2);
    bufp->fullIData(oldp+910,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullCData(oldp+911,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),3);
    bufp->fullCData(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullBit(oldp+914,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+915,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullBit(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_bready));
    bufp->fullBit(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_rready));
    bufp->fullBit(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_w_last_i));
    bufp->fullCData(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_ready_i));
    bufp->fullCData(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19),4);
    bufp->fullBit(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_last_i));
    bufp->fullBit(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4));
    bufp->fullBit(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_bready));
    bufp->fullBit(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_rready));
    bufp->fullBit(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__nodeIn_awready));
    bufp->fullBit(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAROI_in_0_arready_T_4));
    bufp->fullBit(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+969,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+970,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+971,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+972,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+973,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+974,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+975,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+976,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+977,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+978,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+979,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+980,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+981,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+982,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+983,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+984,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+985,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+986,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+987,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+988,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+989,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+990,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+991,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+992,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+993,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+994,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+995,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+996,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+997,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+998,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+999,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1000,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__stall));
    bufp->fullBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_r_ready_i));
    bufp->fullIData(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__inst),32);
    bufp->fullBit(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_r_last_i));
    bufp->fullBit(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rd_wen));
    bufp->fullIData(oldp+1006,((IData)(vlSelf->__VdfgTmp_hfe507537__0)),32);
    bufp->fullBit(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__lsu_rd_wen_r));
    bufp->fullBit(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__lsu_rd_wen_w));
    bufp->fullCData(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullCData(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate),2);
    bufp->fullBit(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullCData(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1020,(vlSelf->clock));
    bufp->fullBit(oldp+1021,(vlSelf->reset));
    bufp->fullSData(oldp+1022,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1023,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1024,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1025,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1026,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1027,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1028,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1029,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1030,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1031,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1032,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1033,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1034,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1035,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1036,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1037,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1038,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1039,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1040,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1041,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1042,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din),4);
    bufp->fullBit(oldp+1044,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullSData(oldp+1045,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__din),16);
    bufp->fullBit(oldp+1046,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel))));
    bufp->fullIData(oldp+1047,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1048,((1U & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_state))
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o)
                                     : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_state))
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o)
                                         : 0U)))));
    bufp->fullIData(oldp+1049,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_state))
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
    bufp->fullCData(oldp+1050,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                         << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r))
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullBit(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullIData(oldp+1052,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
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
    bufp->fullIData(oldp+1053,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)
                                 ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__wr_en)
                                          ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                                         [(0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r)]
                                          : 0U))),32);
    bufp->fullBit(oldp+1054,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+1055,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+1056,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1059,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullBit(oldp+1061,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullBit(oldp+1062,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullCData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1064,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1065,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1066,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+1067,((vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h6b154942__0 
                                >> 0x1cU)),4);
    bufp->fullBit(oldp+1068,(vlSelf->ysyxSoCFull__DOT__psram__DOT__QPI_MODE));
    bufp->fullIData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data),32);
    bufp->fullIData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullIData(oldp+1071,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bswap),32);
    bufp->fullIData(oldp+1072,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                    >> 0x18U))))),32);
    bufp->fullCData(oldp+1073,(1U),3);
    bufp->fullBit(oldp+1074,(0U));
    bufp->fullBit(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+1084,(0U),4);
    bufp->fullCData(oldp+1085,(0U),8);
    bufp->fullCData(oldp+1086,(1U),2);
    bufp->fullBit(oldp+1087,(1U));
    bufp->fullBit(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1089,(0U),32);
    bufp->fullCData(oldp+1090,(0U),3);
    bufp->fullCData(oldp+1091,(0U),2);
    bufp->fullBit(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullQData(oldp+1093,(0ULL),64);
    bufp->fullBit(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullQData(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),64);
    bufp->fullBit(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_inst_t),32);
    bufp->fullIData(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_result_t),32);
    bufp->fullCData(oldp+1107,(2U),2);
    bufp->fullCData(oldp+1108,(2U),3);
    bufp->fullCData(oldp+1109,(3U),3);
    bufp->fullCData(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_cnt),8);
    bufp->fullBit(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__carry_flag));
    bufp->fullBit(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__signed_flag));
    bufp->fullCData(oldp+1113,(0U),5);
    bufp->fullIData(oldp+1114,(0xdU),32);
    bufp->fullIData(oldp+1115,(0xcU),32);
    bufp->fullIData(oldp+1116,(0x15U),32);
    bufp->fullIData(oldp+1117,(0x20U),32);
    bufp->fullIData(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__inst_t),32);
    bufp->fullCData(oldp+1119,(0x35U),8);
    bufp->fullCData(oldp+1120,(4U),3);
    bufp->fullBit(oldp+1121,(0U));
    bufp->fullBit(oldp+1122,(1U));
    bufp->fullCData(oldp+1123,(0x15U),8);
    bufp->fullCData(oldp+1124,(0xebU),8);
    bufp->fullCData(oldp+1125,(0x38U),8);
    bufp->fullIData(oldp+1126,(0x64U),32);
    bufp->fullIData(oldp+1127,(0x18U),32);
    bufp->fullIData(oldp+1128,(9U),32);
    bufp->fullIData(oldp+1129,(2U),32);
    bufp->fullIData(oldp+1130,(4U),32);
    bufp->fullIData(oldp+1131,(0x2000U),32);
    bufp->fullIData(oldp+1132,(0x2710U),32);
    bufp->fullIData(oldp+1133,(0x30cU),32);
    bufp->fullCData(oldp+1134,(7U),4);
    bufp->fullCData(oldp+1135,(3U),4);
    bufp->fullCData(oldp+1136,(5U),4);
    bufp->fullCData(oldp+1137,(4U),4);
    bufp->fullCData(oldp+1138,(6U),4);
    bufp->fullCData(oldp+1139,(2U),4);
    bufp->fullCData(oldp+1140,(1U),4);
    bufp->fullSData(oldp+1141,(0x21U),13);
    bufp->fullCData(oldp+1142,(8U),4);
    bufp->fullCData(oldp+1143,(9U),4);
    bufp->fullIData(oldp+1144,(0xaU),32);
    bufp->fullIData(oldp+1145,(0x10U),32);
    bufp->fullIData(oldp+1146,(6U),32);
    bufp->fullIData(oldp+1147,(0x11U),32);
    bufp->fullIData(oldp+1148,(0x30000000U),32);
    bufp->fullIData(oldp+1149,(0x3fffffffU),32);
    bufp->fullIData(oldp+1150,(8U),32);
    bufp->fullBit(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullIData(oldp+1152,(1U),32);
    bufp->fullCData(oldp+1153,(0xaU),4);
    bufp->fullIData(oldp+1154,(0xbU),32);
    bufp->fullIData(oldp+1155,(5U),32);
    bufp->fullCData(oldp+1156,(5U),3);
    bufp->fullIData(oldp+1157,(3U),32);
    bufp->fullCData(oldp+1158,(7U),3);
    bufp->fullCData(oldp+1159,(6U),3);
    bufp->fullIData(oldp+1160,(0x400000U),32);
}
