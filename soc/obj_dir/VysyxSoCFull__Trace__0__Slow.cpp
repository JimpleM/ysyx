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
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBus(c+1131,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1132,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1133,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1134,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1135,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1136,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1137,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1138,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1139,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1140,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1141,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1142,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1143,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1144,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1145,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1146,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1147,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1148,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1149,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1150,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBus(c+1131,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1132,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1133,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1134,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1135,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1136,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1137,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1138,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1139,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1140,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1141,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1142,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1143,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1144,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1145,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1146,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1147,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1148,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1149,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1150,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+921,"spi_sck", false,-1);
    tracep->declBus(c+922,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+591,"spi_mosi", false,-1);
    tracep->declBit(c+1151,"spi_miso", false,-1);
    tracep->declBit(c+1149,"uart_rx", false,-1);
    tracep->declBit(c+1150,"uart_tx", false,-1);
    tracep->declBit(c+1014,"psram_sck", false,-1);
    tracep->declBit(c+1015,"psram_ce_n", false,-1);
    tracep->declBus(c+1152,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1153,"sdram_clk", false,-1);
    tracep->declBit(c+923,"sdram_cke", false,-1);
    tracep->declBit(c+924,"sdram_cs", false,-1);
    tracep->declBit(c+925,"sdram_ras", false,-1);
    tracep->declBit(c+926,"sdram_cas", false,-1);
    tracep->declBit(c+927,"sdram_we", false,-1);
    tracep->declBus(c+1016,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+928,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+929,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+971,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1131,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1132,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1133,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1134,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1135,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1136,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1137,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1138,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1139,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1140,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1141,"ps2_clk", false,-1);
    tracep->declBit(c+1142,"ps2_data", false,-1);
    tracep->declBus(c+1143,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1144,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1145,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1146,"vga_hsync", false,-1);
    tracep->declBit(c+1147,"vga_vsync", false,-1);
    tracep->declBit(c+1148,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBus(c+979,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+876,"in_psel", false,-1);
    tracep->declBit(c+877,"in_penable", false,-1);
    tracep->declBus(c+1185,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+878,"in_pwrite", false,-1);
    tracep->declBus(c+879,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+880,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1017,"in_pready", false,-1);
    tracep->declBus(c+1018,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+980,"in_pslverr", false,-1);
    tracep->declBus(c+979,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+876,"out_psel", false,-1);
    tracep->declBit(c+877,"out_penable", false,-1);
    tracep->declBus(c+1185,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+878,"out_pwrite", false,-1);
    tracep->declBus(c+879,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+880,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1017,"out_pready", false,-1);
    tracep->declBus(c+1018,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+980,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+876,"auto_in_psel", false,-1);
    tracep->declBit(c+877,"auto_in_penable", false,-1);
    tracep->declBit(c+878,"auto_in_pwrite", false,-1);
    tracep->declBus(c+979,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1185,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+879,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+880,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1017,"auto_in_pready", false,-1);
    tracep->declBit(c+980,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1018,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+908,"auto_out_6_psel", false,-1);
    tracep->declBit(c+909,"auto_out_6_penable", false,-1);
    tracep->declBit(c+878,"auto_out_6_pwrite", false,-1);
    tracep->declBus(c+979,"auto_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1185,"auto_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+879,"auto_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+880,"auto_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+592,"auto_out_6_pready", false,-1);
    tracep->declBit(c+1186,"auto_out_6_pslverr", false,-1);
    tracep->declBus(c+593,"auto_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+910,"auto_out_5_psel", false,-1);
    tracep->declBit(c+911,"auto_out_5_penable", false,-1);
    tracep->declBit(c+878,"auto_out_5_pwrite", false,-1);
    tracep->declBus(c+981,"auto_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1185,"auto_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+879,"auto_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+880,"auto_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1187,"auto_out_5_pready", false,-1);
    tracep->declBit(c+1188,"auto_out_5_pslverr", false,-1);
    tracep->declBus(c+1189,"auto_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+912,"auto_out_4_psel", false,-1);
    tracep->declBit(c+913,"auto_out_4_penable", false,-1);
    tracep->declBit(c+878,"auto_out_4_pwrite", false,-1);
    tracep->declBus(c+982,"auto_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1185,"auto_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+879,"auto_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+880,"auto_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1190,"auto_out_4_pready", false,-1);
    tracep->declBit(c+1191,"auto_out_4_pslverr", false,-1);
    tracep->declBus(c+1192,"auto_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+914,"auto_out_3_psel", false,-1);
    tracep->declBit(c+915,"auto_out_3_penable", false,-1);
    tracep->declBit(c+878,"auto_out_3_pwrite", false,-1);
    tracep->declBus(c+982,"auto_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1185,"auto_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+879,"auto_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+880,"auto_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1193,"auto_out_3_pready", false,-1);
    tracep->declBit(c+1194,"auto_out_3_pslverr", false,-1);
    tracep->declBus(c+1195,"auto_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+983,"auto_out_2_psel", false,-1);
    tracep->declBit(c+916,"auto_out_2_penable", false,-1);
    tracep->declBit(c+878,"auto_out_2_pwrite", false,-1);
    tracep->declBus(c+979,"auto_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1185,"auto_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+879,"auto_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+880,"auto_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1154,"auto_out_2_pready", false,-1);
    tracep->declBit(c+1186,"auto_out_2_pslverr", false,-1);
    tracep->declBus(c+11,"auto_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+984,"auto_out_1_psel", false,-1);
    tracep->declBit(c+985,"auto_out_1_penable", false,-1);
    tracep->declBit(c+878,"auto_out_1_pwrite", false,-1);
    tracep->declBus(c+982,"auto_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1185,"auto_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+879,"auto_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+880,"auto_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+986,"auto_out_1_pready", false,-1);
    tracep->declBit(c+1186,"auto_out_1_pslverr", false,-1);
    tracep->declBus(c+1155,"auto_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+987,"auto_out_0_psel", false,-1);
    tracep->declBit(c+917,"auto_out_0_penable", false,-1);
    tracep->declBit(c+878,"auto_out_0_pwrite", false,-1);
    tracep->declBus(c+981,"auto_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1185,"auto_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+879,"auto_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+880,"auto_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1156,"auto_out_0_pready", false,-1);
    tracep->declBit(c+1186,"auto_out_0_pslverr", false,-1);
    tracep->declBus(c+1157,"auto_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+988,"sel_0", false,-1);
    tracep->declBit(c+989,"sel_1", false,-1);
    tracep->declBit(c+990,"sel_2", false,-1);
    tracep->declBit(c+991,"sel_3", false,-1);
    tracep->declBit(c+992,"sel_4", false,-1);
    tracep->declBit(c+993,"sel_5", false,-1);
    tracep->declBit(c+994,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+881,"auto_in_awready", false,-1);
    tracep->declBit(c+12,"auto_in_awvalid", false,-1);
    tracep->declBus(c+13,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+14,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+15,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+881,"auto_in_wready", false,-1);
    tracep->declBit(c+16,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+17,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+19,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+1019,"auto_in_bready", false,-1);
    tracep->declBit(c+1020,"auto_in_bvalid", false,-1);
    tracep->declBus(c+20,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+995,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+882,"auto_in_arready", false,-1);
    tracep->declBit(c+21,"auto_in_arvalid", false,-1);
    tracep->declBus(c+22,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+23,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+24,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1021,"auto_in_rready", false,-1);
    tracep->declBit(c+1022,"auto_in_rvalid", false,-1);
    tracep->declBus(c+25,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+1158,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+995,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+876,"auto_out_psel", false,-1);
    tracep->declBit(c+877,"auto_out_penable", false,-1);
    tracep->declBit(c+878,"auto_out_pwrite", false,-1);
    tracep->declBus(c+979,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+879,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+880,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1017,"auto_out_pready", false,-1);
    tracep->declBit(c+980,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1018,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+877,"nodeOut_penable", false,-1);
    tracep->declBus(c+883,"state", false,-1, 1,0);
    tracep->declBit(c+882,"accept_read", false,-1);
    tracep->declBit(c+881,"accept_write", false,-1);
    tracep->declBit(c+26,"is_write_r", false,-1);
    tracep->declBit(c+878,"is_write", false,-1);
    tracep->declBus(c+25,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+20,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+27,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+28,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+884,"awaddr_reg", false,-1, 31,0);
    tracep->declQuad(c+29,"wdata_reg_r", false,-1, 63,0);
    tracep->declQuad(c+885,"wdata_reg", false,-1, 63,0);
    tracep->declBus(c+31,"wstrb_reg_r", false,-1, 7,0);
    tracep->declBus(c+887,"wstrb_reg", false,-1, 7,0);
    tracep->declBus(c+996,"resp", false,-1, 1,0);
    tracep->declBus(c+32,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+995,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1022,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+33,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1020,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+34,"auto_in_awready", false,-1);
    tracep->declBit(c+35,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1196,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+36,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1197,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+37,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+38,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+39,"auto_in_wready", false,-1);
    tracep->declBit(c+40,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+41,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+43,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+44,"auto_in_wlast", false,-1);
    tracep->declBit(c+45,"auto_in_bready", false,-1);
    tracep->declBit(c+1023,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1024,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+547,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+46,"auto_in_arready", false,-1);
    tracep->declBit(c+47,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1196,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+48,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1197,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+49,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+50,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+51,"auto_in_rready", false,-1);
    tracep->declBit(c+1025,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1026,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+1160,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+1162,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+548,"auto_in_rlast", false,-1);
    tracep->declBit(c+1027,"auto_out_awready", false,-1);
    tracep->declBit(c+52,"auto_out_awvalid", false,-1);
    tracep->declBus(c+13,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+14,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+15,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+53,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1028,"auto_out_wready", false,-1);
    tracep->declBit(c+54,"auto_out_wvalid", false,-1);
    tracep->declQuad(c+17,"auto_out_wdata", false,-1, 63,0);
    tracep->declBus(c+19,"auto_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+55,"auto_out_wlast", false,-1);
    tracep->declBit(c+1029,"auto_out_bready", false,-1);
    tracep->declBit(c+1030,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1024,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1031,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1032,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1033,"auto_out_arready", false,-1);
    tracep->declBit(c+56,"auto_out_arvalid", false,-1);
    tracep->declBus(c+22,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+23,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+24,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+57,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+51,"auto_out_rready", false,-1);
    tracep->declBit(c+1025,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1026,"auto_out_rid", false,-1, 3,0);
    tracep->declQuad(c+1160,"auto_out_rdata", false,-1, 63,0);
    tracep->declBus(c+1162,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+549,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+1034,"auto_out_rlast", false,-1);
    tracep->declBit(c+54,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+58,"w_idle", false,-1);
    tracep->declBit(c+1035,"in_awready", false,-1);
    tracep->declBit(c+59,"busy", false,-1);
    tracep->declBus(c+60,"r_addr", false,-1, 31,0);
    tracep->declBus(c+61,"r_len", false,-1, 7,0);
    tracep->declBus(c+62,"len", false,-1, 7,0);
    tracep->declBus(c+63,"addr", false,-1, 31,0);
    tracep->declBit(c+64,"busy_1", false,-1);
    tracep->declBus(c+65,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+66,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+67,"len_1", false,-1, 7,0);
    tracep->declBus(c+68,"addr_1", false,-1, 31,0);
    tracep->declBit(c+69,"wbeats_latched", false,-1);
    tracep->declBit(c+52,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+70,"wbeats_valid", false,-1);
    tracep->declBus(c+71,"w_counter", false,-1, 8,0);
    tracep->declBus(c+72,"w_todo", false,-1, 8,0);
    tracep->declBit(c+55,"w_last", false,-1);
    tracep->declBit(c+1029,"nodeOut_bready", false,-1);
    tracep->declBus(c+73,"error_0", false,-1, 1,0);
    tracep->declBus(c+74,"error_1", false,-1, 1,0);
    tracep->declBus(c+75,"error_2", false,-1, 1,0);
    tracep->declBus(c+76,"error_3", false,-1, 1,0);
    tracep->declBus(c+77,"error_4", false,-1, 1,0);
    tracep->declBus(c+78,"error_5", false,-1, 1,0);
    tracep->declBus(c+79,"error_6", false,-1, 1,0);
    tracep->declBus(c+80,"error_7", false,-1, 1,0);
    tracep->declBus(c+81,"error_8", false,-1, 1,0);
    tracep->declBus(c+82,"error_9", false,-1, 1,0);
    tracep->declBus(c+83,"error_10", false,-1, 1,0);
    tracep->declBus(c+84,"error_11", false,-1, 1,0);
    tracep->declBus(c+85,"error_12", false,-1, 1,0);
    tracep->declBus(c+86,"error_13", false,-1, 1,0);
    tracep->declBus(c+87,"error_14", false,-1, 1,0);
    tracep->declBus(c+88,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+46,"io_enq_ready", false,-1);
    tracep->declBit(c+47,"io_enq_valid", false,-1);
    tracep->declBus(c+1196,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+48,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1197,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+49,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+50,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1036,"io_deq_ready", false,-1);
    tracep->declBit(c+56,"io_deq_valid", false,-1);
    tracep->declBus(c+22,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+89,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+90,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+24,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+91,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+92,"ram", false,-1, 48,0);
    tracep->declBit(c+94,"full", false,-1);
    tracep->declBit(c+56,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1037,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+34,"io_enq_ready", false,-1);
    tracep->declBit(c+35,"io_enq_valid", false,-1);
    tracep->declBus(c+1196,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+36,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1197,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+37,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+38,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1038,"io_deq_ready", false,-1);
    tracep->declBit(c+95,"io_deq_valid", false,-1);
    tracep->declBus(c+13,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+96,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+97,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+15,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+98,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+99,"ram", false,-1, 48,0);
    tracep->declBit(c+101,"full", false,-1);
    tracep->declBit(c+95,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1039,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+39,"io_enq_ready", false,-1);
    tracep->declBit(c+40,"io_enq_valid", false,-1);
    tracep->declQuad(c+41,"io_enq_bits_data", false,-1, 63,0);
    tracep->declBus(c+43,"io_enq_bits_strb", false,-1, 7,0);
    tracep->declBit(c+44,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1040,"io_deq_ready", false,-1);
    tracep->declBit(c+102,"io_deq_valid", false,-1);
    tracep->declQuad(c+17,"io_deq_bits_data", false,-1, 63,0);
    tracep->declBus(c+19,"io_deq_bits_strb", false,-1, 7,0);
    tracep->declBit(c+103,"io_deq_bits_last", false,-1);
    tracep->declArray(c+104,"ram", false,-1, 72,0);
    tracep->declBit(c+107,"full", false,-1);
    tracep->declBit(c+102,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1041,"do_enq", false,-1);
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
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+1042,"auto_in_awready", false,-1);
    tracep->declBit(c+108,"auto_in_awvalid", false,-1);
    tracep->declBus(c+13,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+109,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+550,"auto_in_wready", false,-1);
    tracep->declBit(c+110,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+17,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+19,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+1043,"auto_in_bready", false,-1);
    tracep->declBit(c+111,"auto_in_bvalid", false,-1);
    tracep->declBus(c+112,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+113,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1044,"auto_in_arready", false,-1);
    tracep->declBit(c+114,"auto_in_arvalid", false,-1);
    tracep->declBus(c+22,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+115,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1045,"auto_in_rready", false,-1);
    tracep->declBit(c+116,"auto_in_rvalid", false,-1);
    tracep->declBus(c+117,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+118,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+120,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1044,"nodeIn_arready", false,-1);
    tracep->declBit(c+1042,"nodeIn_awready", false,-1);
    tracep->declBit(c+121,"w_sel0", false,-1);
    tracep->declBit(c+111,"w_full", false,-1);
    tracep->declBus(c+112,"w_id", false,-1, 3,0);
    tracep->declBit(c+122,"r_sel1", false,-1);
    tracep->declBit(c+123,"w_sel1", false,-1);
    tracep->declBit(c+116,"r_full", false,-1);
    tracep->declBus(c+117,"r_id", false,-1, 3,0);
    tracep->declBit(c+1046,"ren", false,-1);
    tracep->declBit(c+124,"rdata_REG", false,-1);
    tracep->declBus(c+125,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+126,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+127,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+128,"rdata_r3", false,-1, 7,0);
    tracep->declBus(c+129,"rdata_r4", false,-1, 7,0);
    tracep->declBus(c+130,"rdata_r5", false,-1, 7,0);
    tracep->declBus(c+131,"rdata_r6", false,-1, 7,0);
    tracep->declBus(c+132,"rdata_r7", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+133,"R0_addr", false,-1, 9,0);
    tracep->declBit(c+1046,"R0_en", false,-1);
    tracep->declBit(c+1129,"R0_clk", false,-1);
    tracep->declQuad(c+134,"R0_data", false,-1, 63,0);
    tracep->declBus(c+136,"W0_addr", false,-1, 9,0);
    tracep->declBit(c+1047,"W0_en", false,-1);
    tracep->declBit(c+1129,"W0_clk", false,-1);
    tracep->declQuad(c+17,"W0_data", false,-1, 63,0);
    tracep->declBus(c+19,"W0_mask", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+34,"auto_in_awready", false,-1);
    tracep->declBit(c+35,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1196,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+36,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1197,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+37,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+38,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+39,"auto_in_wready", false,-1);
    tracep->declBit(c+40,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+41,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+43,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+44,"auto_in_wlast", false,-1);
    tracep->declBit(c+45,"auto_in_bready", false,-1);
    tracep->declBit(c+1023,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1024,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+547,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+46,"auto_in_arready", false,-1);
    tracep->declBit(c+47,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1196,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+48,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1197,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+49,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+50,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+51,"auto_in_rready", false,-1);
    tracep->declBit(c+1025,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1026,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+1160,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+1162,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+548,"auto_in_rlast", false,-1);
    tracep->declBit(c+34,"auto_out_awready", false,-1);
    tracep->declBit(c+35,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1196,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+36,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1197,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+37,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+38,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+39,"auto_out_wready", false,-1);
    tracep->declBit(c+40,"auto_out_wvalid", false,-1);
    tracep->declQuad(c+41,"auto_out_wdata", false,-1, 63,0);
    tracep->declBus(c+43,"auto_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+44,"auto_out_wlast", false,-1);
    tracep->declBit(c+45,"auto_out_bready", false,-1);
    tracep->declBit(c+1023,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1024,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+547,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+46,"auto_out_arready", false,-1);
    tracep->declBit(c+47,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1196,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+48,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1197,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+49,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+50,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+51,"auto_out_rready", false,-1);
    tracep->declBit(c+1025,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1026,"auto_out_rid", false,-1, 3,0);
    tracep->declQuad(c+1160,"auto_out_rdata", false,-1, 63,0);
    tracep->declBus(c+1162,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+548,"auto_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+1048,"auto_in_awready", false,-1);
    tracep->declBit(c+137,"auto_in_awvalid", false,-1);
    tracep->declBus(c+13,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+14,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+15,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1028,"auto_in_wready", false,-1);
    tracep->declBit(c+54,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+17,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+19,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+55,"auto_in_wlast", false,-1);
    tracep->declBit(c+1029,"auto_in_bready", false,-1);
    tracep->declBit(c+1030,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1024,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1031,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1049,"auto_in_arready", false,-1);
    tracep->declBit(c+138,"auto_in_arvalid", false,-1);
    tracep->declBus(c+22,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+23,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+24,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+51,"auto_in_rready", false,-1);
    tracep->declBit(c+1025,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1026,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+1160,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+1162,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1034,"auto_in_rlast", false,-1);
    tracep->declBit(c+1042,"auto_out_2_awready", false,-1);
    tracep->declBit(c+108,"auto_out_2_awvalid", false,-1);
    tracep->declBus(c+13,"auto_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+109,"auto_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+550,"auto_out_2_wready", false,-1);
    tracep->declBit(c+110,"auto_out_2_wvalid", false,-1);
    tracep->declQuad(c+17,"auto_out_2_wdata", false,-1, 63,0);
    tracep->declBus(c+19,"auto_out_2_wstrb", false,-1, 7,0);
    tracep->declBit(c+1043,"auto_out_2_bready", false,-1);
    tracep->declBit(c+111,"auto_out_2_bvalid", false,-1);
    tracep->declBus(c+112,"auto_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+113,"auto_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1044,"auto_out_2_arready", false,-1);
    tracep->declBit(c+114,"auto_out_2_arvalid", false,-1);
    tracep->declBus(c+22,"auto_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+115,"auto_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1045,"auto_out_2_rready", false,-1);
    tracep->declBit(c+116,"auto_out_2_rvalid", false,-1);
    tracep->declBus(c+117,"auto_out_2_rid", false,-1, 3,0);
    tracep->declQuad(c+118,"auto_out_2_rdata", false,-1, 63,0);
    tracep->declBus(c+120,"auto_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+139,"auto_out_1_awvalid", false,-1);
    tracep->declBit(c+140,"auto_out_1_wvalid", false,-1);
    tracep->declBit(c+141,"auto_out_1_arready", false,-1);
    tracep->declBit(c+142,"auto_out_1_arvalid", false,-1);
    tracep->declBus(c+22,"auto_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+143,"auto_out_1_araddr", false,-1, 29,0);
    tracep->declBus(c+24,"auto_out_1_arsize", false,-1, 2,0);
    tracep->declBit(c+551,"auto_out_1_rready", false,-1);
    tracep->declBit(c+144,"auto_out_1_rvalid", false,-1);
    tracep->declBus(c+145,"auto_out_1_rid", false,-1, 3,0);
    tracep->declQuad(c+146,"auto_out_1_rdata", false,-1, 63,0);
    tracep->declBit(c+881,"auto_out_0_awready", false,-1);
    tracep->declBit(c+12,"auto_out_0_awvalid", false,-1);
    tracep->declBus(c+13,"auto_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+14,"auto_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+15,"auto_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+881,"auto_out_0_wready", false,-1);
    tracep->declBit(c+16,"auto_out_0_wvalid", false,-1);
    tracep->declQuad(c+17,"auto_out_0_wdata", false,-1, 63,0);
    tracep->declBus(c+19,"auto_out_0_wstrb", false,-1, 7,0);
    tracep->declBit(c+1019,"auto_out_0_bready", false,-1);
    tracep->declBit(c+1020,"auto_out_0_bvalid", false,-1);
    tracep->declBus(c+20,"auto_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+995,"auto_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+882,"auto_out_0_arready", false,-1);
    tracep->declBit(c+21,"auto_out_0_arvalid", false,-1);
    tracep->declBus(c+22,"auto_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+23,"auto_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+24,"auto_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+1021,"auto_out_0_rready", false,-1);
    tracep->declBit(c+1022,"auto_out_0_rvalid", false,-1);
    tracep->declBus(c+25,"auto_out_0_rid", false,-1, 3,0);
    tracep->declQuad(c+1158,"auto_out_0_rdata", false,-1, 63,0);
    tracep->declBus(c+995,"auto_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+1030,"in_0_bvalid", false,-1);
    tracep->declBit(c+1025,"in_0_rvalid", false,-1);
    tracep->declBit(c+1048,"nodeIn_awready", false,-1);
    tracep->declBit(c+148,"requestARIO_0_0", false,-1);
    tracep->declBit(c+149,"requestARIO_0_1", false,-1);
    tracep->declBit(c+150,"requestARIO_0_2", false,-1);
    tracep->declBit(c+151,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+152,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+153,"requestAWIO_0_2", false,-1);
    tracep->declBit(c+154,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+155,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+156,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+157,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+158,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+159,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+160,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+161,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+162,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+163,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+164,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+165,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+166,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+167,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+168,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+169,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+170,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+171,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+172,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+173,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+174,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+175,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+176,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+177,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+178,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+179,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+180,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+181,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+182,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+183,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+184,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+185,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+186,"latched", false,-1);
    tracep->declBit(c+187,"in_0_awvalid", false,-1);
    tracep->declBit(c+188,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+189,"in_0_wvalid", false,-1);
    tracep->declBit(c+190,"idle_3", false,-1);
    tracep->declBit(c+1050,"anyValid", false,-1);
    tracep->declBus(c+1051,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+191,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+1052,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+1053,"prefixOR_1", false,-1);
    tracep->declBit(c+1054,"winner_3_1", false,-1);
    tracep->declBit(c+1055,"winner_3_2", false,-1);
    tracep->declBit(c+192,"state_3_0", false,-1);
    tracep->declBit(c+193,"state_3_1", false,-1);
    tracep->declBit(c+194,"state_3_2", false,-1);
    tracep->declBit(c+1056,"muxState_3_0", false,-1);
    tracep->declBit(c+1057,"muxState_3_1", false,-1);
    tracep->declBit(c+1058,"muxState_3_2", false,-1);
    tracep->declBit(c+195,"idle_4", false,-1);
    tracep->declBit(c+1059,"anyValid_1", false,-1);
    tracep->declBus(c+1060,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+196,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+1061,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+1062,"winner_4_0", false,-1);
    tracep->declBit(c+1063,"winner_4_2", false,-1);
    tracep->declBit(c+197,"state_4_0", false,-1);
    tracep->declBit(c+198,"state_4_2", false,-1);
    tracep->declBit(c+1064,"muxState_4_0", false,-1);
    tracep->declBit(c+1065,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+199,"io_enq_ready", false,-1);
    tracep->declBit(c+188,"io_enq_valid", false,-1);
    tracep->declBus(c+200,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1066,"io_deq_ready", false,-1);
    tracep->declBit(c+201,"io_deq_valid", false,-1);
    tracep->declBus(c+202,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+203,"wrap", false,-1);
    tracep->declBit(c+204,"wrap_1", false,-1);
    tracep->declBit(c+205,"maybe_full", false,-1);
    tracep->declBit(c+206,"ptr_match", false,-1);
    tracep->declBit(c+207,"empty", false,-1);
    tracep->declBit(c+208,"full", false,-1);
    tracep->declBit(c+201,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1067,"do_deq", false,-1);
    tracep->declBit(c+1068,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+204,"R0_addr", false,-1);
    tracep->declBit(c+1198,"R0_en", false,-1);
    tracep->declBit(c+1129,"R0_clk", false,-1);
    tracep->declBus(c+209,"R0_data", false,-1, 2,0);
    tracep->declBit(c+203,"W0_addr", false,-1);
    tracep->declBit(c+1068,"W0_en", false,-1);
    tracep->declBit(c+1129,"W0_clk", false,-1);
    tracep->declBus(c+200,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+210+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+1027,"auto_in_awready", false,-1);
    tracep->declBit(c+52,"auto_in_awvalid", false,-1);
    tracep->declBus(c+13,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+14,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+15,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+53,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1028,"auto_in_wready", false,-1);
    tracep->declBit(c+54,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+17,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+19,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+55,"auto_in_wlast", false,-1);
    tracep->declBit(c+1029,"auto_in_bready", false,-1);
    tracep->declBit(c+1030,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1024,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1031,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1032,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1033,"auto_in_arready", false,-1);
    tracep->declBit(c+56,"auto_in_arvalid", false,-1);
    tracep->declBus(c+22,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+23,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+24,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+57,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+51,"auto_in_rready", false,-1);
    tracep->declBit(c+1025,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1026,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+1160,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+1162,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+549,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+1034,"auto_in_rlast", false,-1);
    tracep->declBit(c+1048,"auto_out_awready", false,-1);
    tracep->declBit(c+137,"auto_out_awvalid", false,-1);
    tracep->declBus(c+13,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+14,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+15,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1028,"auto_out_wready", false,-1);
    tracep->declBit(c+54,"auto_out_wvalid", false,-1);
    tracep->declQuad(c+17,"auto_out_wdata", false,-1, 63,0);
    tracep->declBus(c+19,"auto_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+55,"auto_out_wlast", false,-1);
    tracep->declBit(c+1029,"auto_out_bready", false,-1);
    tracep->declBit(c+1030,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1024,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1031,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1049,"auto_out_arready", false,-1);
    tracep->declBit(c+138,"auto_out_arvalid", false,-1);
    tracep->declBus(c+22,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+23,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+24,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+51,"auto_out_rready", false,-1);
    tracep->declBit(c+1025,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1026,"auto_out_rid", false,-1, 3,0);
    tracep->declQuad(c+1160,"auto_out_rdata", false,-1, 63,0);
    tracep->declBus(c+1162,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1034,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+212,"io_enq_ready", false,-1);
    tracep->declBit(c+552,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1069,"io_deq_ready", false,-1);
    tracep->declBit(c+213,"io_deq_valid", false,-1);
    tracep->declBit(c+214,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+214,"ram_real_last", false,-1);
    tracep->declBit(c+213,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+215,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+216,"io_enq_ready", false,-1);
    tracep->declBit(c+553,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1070,"io_deq_ready", false,-1);
    tracep->declBit(c+217,"io_deq_valid", false,-1);
    tracep->declBit(c+218,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+218,"ram_real_last", false,-1);
    tracep->declBit(c+217,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+219,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+220,"io_enq_ready", false,-1);
    tracep->declBit(c+554,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1071,"io_deq_ready", false,-1);
    tracep->declBit(c+221,"io_deq_valid", false,-1);
    tracep->declBit(c+222,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+222,"ram_real_last", false,-1);
    tracep->declBit(c+221,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+223,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+224,"io_enq_ready", false,-1);
    tracep->declBit(c+555,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1072,"io_deq_ready", false,-1);
    tracep->declBit(c+225,"io_deq_valid", false,-1);
    tracep->declBit(c+226,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+226,"ram_real_last", false,-1);
    tracep->declBit(c+225,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+227,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+228,"io_enq_ready", false,-1);
    tracep->declBit(c+556,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1073,"io_deq_ready", false,-1);
    tracep->declBit(c+229,"io_deq_valid", false,-1);
    tracep->declBit(c+230,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+230,"ram_real_last", false,-1);
    tracep->declBit(c+229,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+231,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+232,"io_enq_ready", false,-1);
    tracep->declBit(c+557,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1074,"io_deq_ready", false,-1);
    tracep->declBit(c+233,"io_deq_valid", false,-1);
    tracep->declBit(c+234,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+234,"ram_real_last", false,-1);
    tracep->declBit(c+233,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+235,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+236,"io_enq_ready", false,-1);
    tracep->declBit(c+558,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1075,"io_deq_ready", false,-1);
    tracep->declBit(c+237,"io_deq_valid", false,-1);
    tracep->declBit(c+238,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+238,"ram_real_last", false,-1);
    tracep->declBit(c+237,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+239,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+240,"io_enq_ready", false,-1);
    tracep->declBit(c+559,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1076,"io_deq_ready", false,-1);
    tracep->declBit(c+241,"io_deq_valid", false,-1);
    tracep->declBit(c+242,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+242,"ram_real_last", false,-1);
    tracep->declBit(c+241,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+243,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+244,"io_enq_ready", false,-1);
    tracep->declBit(c+560,"io_enq_valid", false,-1);
    tracep->declBit(c+53,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1077,"io_deq_ready", false,-1);
    tracep->declBit(c+245,"io_deq_valid", false,-1);
    tracep->declBit(c+246,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+246,"ram_real_last", false,-1);
    tracep->declBit(c+245,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+247,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+248,"io_enq_ready", false,-1);
    tracep->declBit(c+561,"io_enq_valid", false,-1);
    tracep->declBit(c+53,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1078,"io_deq_ready", false,-1);
    tracep->declBit(c+249,"io_deq_valid", false,-1);
    tracep->declBit(c+250,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+250,"ram_real_last", false,-1);
    tracep->declBit(c+249,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+251,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+252,"io_enq_ready", false,-1);
    tracep->declBit(c+562,"io_enq_valid", false,-1);
    tracep->declBit(c+53,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1079,"io_deq_ready", false,-1);
    tracep->declBit(c+253,"io_deq_valid", false,-1);
    tracep->declBit(c+254,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+254,"ram_real_last", false,-1);
    tracep->declBit(c+253,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+255,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+256,"io_enq_ready", false,-1);
    tracep->declBit(c+563,"io_enq_valid", false,-1);
    tracep->declBit(c+53,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1080,"io_deq_ready", false,-1);
    tracep->declBit(c+257,"io_deq_valid", false,-1);
    tracep->declBit(c+258,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+258,"ram_real_last", false,-1);
    tracep->declBit(c+257,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+259,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+260,"io_enq_ready", false,-1);
    tracep->declBit(c+564,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1081,"io_deq_ready", false,-1);
    tracep->declBit(c+261,"io_deq_valid", false,-1);
    tracep->declBit(c+262,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+262,"ram_real_last", false,-1);
    tracep->declBit(c+261,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+263,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+264,"io_enq_ready", false,-1);
    tracep->declBit(c+565,"io_enq_valid", false,-1);
    tracep->declBit(c+53,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1082,"io_deq_ready", false,-1);
    tracep->declBit(c+265,"io_deq_valid", false,-1);
    tracep->declBit(c+266,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+266,"ram_real_last", false,-1);
    tracep->declBit(c+265,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+267,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+268,"io_enq_ready", false,-1);
    tracep->declBit(c+566,"io_enq_valid", false,-1);
    tracep->declBit(c+53,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1083,"io_deq_ready", false,-1);
    tracep->declBit(c+269,"io_deq_valid", false,-1);
    tracep->declBit(c+270,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+270,"ram_real_last", false,-1);
    tracep->declBit(c+269,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+271,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+272,"io_enq_ready", false,-1);
    tracep->declBit(c+567,"io_enq_valid", false,-1);
    tracep->declBit(c+53,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1084,"io_deq_ready", false,-1);
    tracep->declBit(c+273,"io_deq_valid", false,-1);
    tracep->declBit(c+274,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+274,"ram_real_last", false,-1);
    tracep->declBit(c+273,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+275,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+276,"io_enq_ready", false,-1);
    tracep->declBit(c+568,"io_enq_valid", false,-1);
    tracep->declBit(c+53,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1085,"io_deq_ready", false,-1);
    tracep->declBit(c+277,"io_deq_valid", false,-1);
    tracep->declBit(c+278,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+278,"ram_real_last", false,-1);
    tracep->declBit(c+277,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+279,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+280,"io_enq_ready", false,-1);
    tracep->declBit(c+569,"io_enq_valid", false,-1);
    tracep->declBit(c+53,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1086,"io_deq_ready", false,-1);
    tracep->declBit(c+281,"io_deq_valid", false,-1);
    tracep->declBit(c+282,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+282,"ram_real_last", false,-1);
    tracep->declBit(c+281,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+283,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+284,"io_enq_ready", false,-1);
    tracep->declBit(c+570,"io_enq_valid", false,-1);
    tracep->declBit(c+53,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1087,"io_deq_ready", false,-1);
    tracep->declBit(c+285,"io_deq_valid", false,-1);
    tracep->declBit(c+286,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+286,"ram_real_last", false,-1);
    tracep->declBit(c+285,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+287,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+288,"io_enq_ready", false,-1);
    tracep->declBit(c+571,"io_enq_valid", false,-1);
    tracep->declBit(c+53,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1088,"io_deq_ready", false,-1);
    tracep->declBit(c+289,"io_deq_valid", false,-1);
    tracep->declBit(c+290,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+290,"ram_real_last", false,-1);
    tracep->declBit(c+289,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+291,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+292,"io_enq_ready", false,-1);
    tracep->declBit(c+572,"io_enq_valid", false,-1);
    tracep->declBit(c+53,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1089,"io_deq_ready", false,-1);
    tracep->declBit(c+293,"io_deq_valid", false,-1);
    tracep->declBit(c+294,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+294,"ram_real_last", false,-1);
    tracep->declBit(c+293,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+295,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+296,"io_enq_ready", false,-1);
    tracep->declBit(c+573,"io_enq_valid", false,-1);
    tracep->declBit(c+53,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1090,"io_deq_ready", false,-1);
    tracep->declBit(c+297,"io_deq_valid", false,-1);
    tracep->declBit(c+298,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+298,"ram_real_last", false,-1);
    tracep->declBit(c+297,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+299,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+300,"io_enq_ready", false,-1);
    tracep->declBit(c+574,"io_enq_valid", false,-1);
    tracep->declBit(c+53,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1091,"io_deq_ready", false,-1);
    tracep->declBit(c+301,"io_deq_valid", false,-1);
    tracep->declBit(c+302,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+302,"ram_real_last", false,-1);
    tracep->declBit(c+301,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+303,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+304,"io_enq_ready", false,-1);
    tracep->declBit(c+575,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1092,"io_deq_ready", false,-1);
    tracep->declBit(c+305,"io_deq_valid", false,-1);
    tracep->declBit(c+306,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+306,"ram_real_last", false,-1);
    tracep->declBit(c+305,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+307,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+308,"io_enq_ready", false,-1);
    tracep->declBit(c+576,"io_enq_valid", false,-1);
    tracep->declBit(c+53,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1093,"io_deq_ready", false,-1);
    tracep->declBit(c+309,"io_deq_valid", false,-1);
    tracep->declBit(c+310,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+310,"ram_real_last", false,-1);
    tracep->declBit(c+309,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+311,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+312,"io_enq_ready", false,-1);
    tracep->declBit(c+577,"io_enq_valid", false,-1);
    tracep->declBit(c+53,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1094,"io_deq_ready", false,-1);
    tracep->declBit(c+313,"io_deq_valid", false,-1);
    tracep->declBit(c+314,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+314,"ram_real_last", false,-1);
    tracep->declBit(c+313,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+315,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+316,"io_enq_ready", false,-1);
    tracep->declBit(c+578,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1095,"io_deq_ready", false,-1);
    tracep->declBit(c+317,"io_deq_valid", false,-1);
    tracep->declBit(c+318,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+318,"ram_real_last", false,-1);
    tracep->declBit(c+317,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+319,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+320,"io_enq_ready", false,-1);
    tracep->declBit(c+579,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1096,"io_deq_ready", false,-1);
    tracep->declBit(c+321,"io_deq_valid", false,-1);
    tracep->declBit(c+322,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+322,"ram_real_last", false,-1);
    tracep->declBit(c+321,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+323,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+324,"io_enq_ready", false,-1);
    tracep->declBit(c+580,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1097,"io_deq_ready", false,-1);
    tracep->declBit(c+325,"io_deq_valid", false,-1);
    tracep->declBit(c+326,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+326,"ram_real_last", false,-1);
    tracep->declBit(c+325,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+327,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+328,"io_enq_ready", false,-1);
    tracep->declBit(c+581,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1098,"io_deq_ready", false,-1);
    tracep->declBit(c+329,"io_deq_valid", false,-1);
    tracep->declBit(c+330,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+330,"ram_real_last", false,-1);
    tracep->declBit(c+329,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+331,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+332,"io_enq_ready", false,-1);
    tracep->declBit(c+582,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1099,"io_deq_ready", false,-1);
    tracep->declBit(c+333,"io_deq_valid", false,-1);
    tracep->declBit(c+334,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+334,"ram_real_last", false,-1);
    tracep->declBit(c+333,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+335,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+336,"io_enq_ready", false,-1);
    tracep->declBit(c+583,"io_enq_valid", false,-1);
    tracep->declBit(c+57,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1100,"io_deq_ready", false,-1);
    tracep->declBit(c+337,"io_deq_valid", false,-1);
    tracep->declBit(c+338,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+338,"ram_real_last", false,-1);
    tracep->declBit(c+337,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+339,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1163,"reset", false,-1);
    tracep->declBit(c+34,"auto_master_out_awready", false,-1);
    tracep->declBit(c+35,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1196,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+36,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1197,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+37,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+38,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+39,"auto_master_out_wready", false,-1);
    tracep->declBit(c+40,"auto_master_out_wvalid", false,-1);
    tracep->declQuad(c+41,"auto_master_out_wdata", false,-1, 63,0);
    tracep->declBus(c+43,"auto_master_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+44,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+45,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1023,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1024,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+547,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+46,"auto_master_out_arready", false,-1);
    tracep->declBit(c+47,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1196,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+48,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1197,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+49,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+50,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+51,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1025,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1026,"auto_master_out_rid", false,-1, 3,0);
    tracep->declQuad(c+1160,"auto_master_out_rdata", false,-1, 63,0);
    tracep->declBus(c+1162,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+548,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1163,"reset", false,-1);
    tracep->declBit(c+1186,"io_interrupt", false,-1);
    tracep->declBit(c+34,"io_master_awready", false,-1);
    tracep->declBit(c+35,"io_master_awvalid", false,-1);
    tracep->declBus(c+36,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1196,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1197,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+37,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+38,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+39,"io_master_wready", false,-1);
    tracep->declBit(c+40,"io_master_wvalid", false,-1);
    tracep->declQuad(c+41,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+43,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+44,"io_master_wlast", false,-1);
    tracep->declBit(c+45,"io_master_bready", false,-1);
    tracep->declBit(c+1023,"io_master_bvalid", false,-1);
    tracep->declBus(c+547,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+1024,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+46,"io_master_arready", false,-1);
    tracep->declBit(c+47,"io_master_arvalid", false,-1);
    tracep->declBus(c+48,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1196,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1197,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+49,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+50,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+51,"io_master_rready", false,-1);
    tracep->declBit(c+1025,"io_master_rvalid", false,-1);
    tracep->declBus(c+1162,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+1160,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+548,"io_master_rlast", false,-1);
    tracep->declBus(c+1026,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1199,"io_slave_awready", false,-1);
    tracep->declBit(c+1186,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1200,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1196,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1197,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1201,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1202,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1203,"io_slave_wready", false,-1);
    tracep->declBit(c+1186,"io_slave_wvalid", false,-1);
    tracep->declQuad(c+1204,"io_slave_wdata", false,-1, 63,0);
    tracep->declBus(c+1197,"io_slave_wstrb", false,-1, 7,0);
    tracep->declBit(c+1186,"io_slave_wlast", false,-1);
    tracep->declBit(c+1186,"io_slave_bready", false,-1);
    tracep->declBit(c+1206,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1207,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1208,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1209,"io_slave_arready", false,-1);
    tracep->declBit(c+1186,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1200,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1196,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1197,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1201,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1202,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1186,"io_slave_rready", false,-1);
    tracep->declBit(c+1210,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1211,"io_slave_rresp", false,-1, 1,0);
    tracep->declQuad(c+1212,"io_slave_rdata", false,-1, 63,0);
    tracep->declBit(c+1214,"io_slave_rlast", false,-1);
    tracep->declBus(c+1215,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+340,"ifu_pc", false,-1, 31,0);
    tracep->declBus(c+341,"ifu_inst", false,-1, 31,0);
    tracep->declBus(c+1216,"ifu_inst_t", false,-1, 31,0);
    tracep->declBit(c+342,"ifu_stall", false,-1);
    tracep->declBus(c+343,"jump_pc", false,-1, 31,0);
    tracep->declBit(c+344,"jump_pc_valid", false,-1);
    tracep->declBit(c+1101,"stall", false,-1);
    tracep->declBit(c+345,"ifu_r_valid_o", false,-1);
    tracep->declBus(c+346,"ifu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+1102,"ifu_r_ready_i", false,-1);
    tracep->declBus(c+1103,"ifu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+1197,"ifu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+1104,"ifu_r_last_i", false,-1);
    tracep->declBit(c+347,"idu_branch", false,-1);
    tracep->declBit(c+348,"idu_jal", false,-1);
    tracep->declBit(c+349,"idu_jalr", false,-1);
    tracep->declBus(c+350,"idu_rd", false,-1, 4,0);
    tracep->declBit(c+351,"idu_rd_wen", false,-1);
    tracep->declBus(c+352,"idu_rs1", false,-1, 4,0);
    tracep->declBus(c+353,"idu_rs2", false,-1, 4,0);
    tracep->declBus(c+354,"idu_imm", false,-1, 31,0);
    tracep->declBus(c+355,"idu_alu_opt", false,-1, 3,0);
    tracep->declBus(c+356,"idu_src_sel", false,-1, 1,0);
    tracep->declBus(c+357,"idu_lsu_opt", false,-1, 1,0);
    tracep->declBus(c+358,"idu_funct3", false,-1, 2,0);
    tracep->declBus(c+359,"src1", false,-1, 31,0);
    tracep->declBus(c+360,"src2", false,-1, 31,0);
    tracep->declBus(c+1164,"rd_data", false,-1, 31,0);
    tracep->declBit(c+361,"zero_flag", false,-1);
    tracep->declBus(c+362,"exu_result", false,-1, 31,0);
    tracep->declBus(c+1217,"exu_result_t", false,-1, 31,0);
    tracep->declBus(c+584,"lsu_result", false,-1, 31,0);
    tracep->declBit(c+1101,"mem_stall", false,-1);
    tracep->declBit(c+1105,"lsu_rd_wen", false,-1);
    tracep->declBit(c+363,"lsu_r_valid_o", false,-1);
    tracep->declBus(c+364,"lsu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+585,"lsu_r_ready_i", false,-1);
    tracep->declBus(c+586,"lsu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+365,"lsu_r_size_o", false,-1, 2,0);
    tracep->declBus(c+1197,"lsu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+587,"lsu_r_last_i", false,-1);
    tracep->declBit(c+366,"lsu_w_valid_o", false,-1);
    tracep->declBus(c+367,"lsu_w_addr_o", false,-1, 31,0);
    tracep->declBit(c+368,"lsu_w_ready_i", false,-1);
    tracep->declBus(c+360,"lsu_w_data_o", false,-1, 31,0);
    tracep->declBus(c+369,"lsu_w_size_o", false,-1, 2,0);
    tracep->declBus(c+1197,"lsu_w_len_o", false,-1, 7,0);
    tracep->declBit(c+1106,"lsu_w_last_i", false,-1);
    tracep->declBit(c+588,"wbu_rd_wen", false,-1);
    tracep->declBit(c+370,"csr_ecall", false,-1);
    tracep->declBit(c+371,"csr_mret", false,-1);
    tracep->declBus(c+372,"wr_csr_data", false,-1, 31,0);
    tracep->declBus(c+1165,"rd_csr_data", false,-1, 31,0);
    tracep->declBus(c+373,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+374,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+375,"csr_mpec", false,-1, 31,0);
    tracep->pushNamePrefix("axi_arbiter_u0 ");
    tracep->declBit(c+1129,"aclk", false,-1);
    tracep->declBit(c+1163,"areset_n", false,-1);
    tracep->declBit(c+345,"ifu_r_valid_i", false,-1);
    tracep->declBus(c+346,"ifu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+1102,"ifu_r_ready_o", false,-1);
    tracep->declBus(c+1103,"ifu_r_data_o", false,-1, 31,0);
    tracep->declBus(c+1197,"ifu_r_len_i", false,-1, 7,0);
    tracep->declBit(c+1104,"ifu_r_last_o", false,-1);
    tracep->declBit(c+363,"lsu_r_valid_i", false,-1);
    tracep->declBus(c+364,"lsu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+585,"lsu_r_ready_o", false,-1);
    tracep->declBus(c+586,"lsu_r_data_o", false,-1, 31,0);
    tracep->declBus(c+365,"lsu_r_size_i", false,-1, 2,0);
    tracep->declBus(c+1197,"lsu_r_len_i", false,-1, 7,0);
    tracep->declBit(c+587,"lsu_r_last_o", false,-1);
    tracep->declBit(c+366,"lsu_w_valid_i", false,-1);
    tracep->declBus(c+367,"lsu_w_addr_i", false,-1, 31,0);
    tracep->declBit(c+368,"lsu_w_ready_o", false,-1);
    tracep->declBus(c+360,"lsu_w_data_i", false,-1, 31,0);
    tracep->declBus(c+369,"lsu_w_size_i", false,-1, 2,0);
    tracep->declBus(c+1197,"lsu_w_len_i", false,-1, 7,0);
    tracep->declBit(c+1106,"lsu_w_last_o", false,-1);
    tracep->declBit(c+34,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+35,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+36,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+1196,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+1197,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+37,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+38,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+39,"axi_w_ready_i", false,-1);
    tracep->declBit(c+40,"axi_w_valid_o", false,-1);
    tracep->declQuad(c+41,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+43,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+44,"axi_w_last_o", false,-1);
    tracep->declBit(c+45,"axi_b_ready_o", false,-1);
    tracep->declBit(c+1023,"axi_b_valid_i", false,-1);
    tracep->declBus(c+547,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+1024,"axi_b_id_i", false,-1, 3,0);
    tracep->declBit(c+46,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+47,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+48,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+1196,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+1197,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+49,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+50,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+51,"axi_r_ready_o", false,-1);
    tracep->declBit(c+1025,"axi_r_valid_i", false,-1);
    tracep->declBus(c+1162,"axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+1160,"axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+548,"axi_r_last_i", false,-1);
    tracep->declBus(c+1026,"axi_r_id_i", false,-1, 3,0);
    tracep->declBit(c+376,"cpu_r_valid_o", false,-1);
    tracep->declBus(c+377,"cpu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+1107,"cpu_r_ready_i", false,-1);
    tracep->declBus(c+1108,"cpu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+378,"cpu_r_size_o", false,-1, 2,0);
    tracep->declBus(c+1197,"cpu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+1109,"cpu_r_last_i", false,-1);
    tracep->declBit(c+366,"cpu_w_valid_o", false,-1);
    tracep->declBus(c+367,"cpu_w_addr_o", false,-1, 31,0);
    tracep->declBit(c+368,"cpu_w_ready_i", false,-1);
    tracep->declBus(c+360,"cpu_w_data_o", false,-1, 31,0);
    tracep->declBus(c+369,"cpu_w_size_o", false,-1, 2,0);
    tracep->declBus(c+1197,"cpu_w_len_o", false,-1, 7,0);
    tracep->declBit(c+1106,"cpu_w_last_i", false,-1);
    tracep->declBus(c+379,"arbiter_state", false,-1, 1,0);
    tracep->declBus(c+1202,"ARB_IDLE", false,-1, 1,0);
    tracep->declBus(c+1218,"ARB_IFU", false,-1, 1,0);
    tracep->declBus(c+1219,"ARB_LSU", false,-1, 1,0);
    tracep->declBit(c+380,"arb_axi_aw_ready_i", false,-1);
    tracep->declBit(c+381,"arb_axi_aw_valid_o", false,-1);
    tracep->declBus(c+367,"arb_axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+1196,"arb_axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+1197,"arb_axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+369,"arb_axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+1218,"arb_axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+368,"arb_axi_w_ready_i", false,-1);
    tracep->declBit(c+382,"arb_axi_w_valid_o", false,-1);
    tracep->declQuad(c+383,"arb_axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+385,"arb_axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+386,"arb_axi_w_last_o", false,-1);
    tracep->declBit(c+387,"arb_axi_b_ready_o", false,-1);
    tracep->declBit(c+1106,"arb_axi_b_valid_i", false,-1);
    tracep->declBus(c+589,"arb_axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+1110,"arb_axi_b_id_i", false,-1, 3,0);
    tracep->declBit(c+388,"arb_axi_ar_ready_i", false,-1);
    tracep->declBit(c+389,"arb_axi_ar_valid_o", false,-1);
    tracep->declBus(c+377,"arb_axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+1196,"arb_axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+1197,"arb_axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+378,"arb_axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+1218,"arb_axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+390,"arb_axi_r_ready_o", false,-1);
    tracep->declBit(c+1107,"arb_axi_r_valid_i", false,-1);
    tracep->declBus(c+1166,"arb_axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+1111,"arb_axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+1109,"arb_axi_r_last_i", false,-1);
    tracep->declBus(c+590,"arb_axi_r_id_i", false,-1, 3,0);
    tracep->pushNamePrefix("axi_u0 ");
    tracep->declBit(c+1129,"aclk", false,-1);
    tracep->declBit(c+1163,"areset_n", false,-1);
    tracep->declBit(c+376,"cpu_r_valid_i", false,-1);
    tracep->declBus(c+377,"cpu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+1107,"cpu_r_ready_o", false,-1);
    tracep->declBus(c+1108,"cpu_r_data_o", false,-1, 31,0);
    tracep->declBus(c+378,"cpu_r_size_i", false,-1, 2,0);
    tracep->declBus(c+1197,"cpu_r_len_i", false,-1, 7,0);
    tracep->declBit(c+1109,"cpu_r_last_o", false,-1);
    tracep->declBit(c+366,"cpu_w_valid_i", false,-1);
    tracep->declBus(c+367,"cpu_w_addr_i", false,-1, 31,0);
    tracep->declBit(c+368,"cpu_w_ready_o", false,-1);
    tracep->declBus(c+360,"cpu_w_data_i", false,-1, 31,0);
    tracep->declBus(c+369,"cpu_w_size_i", false,-1, 2,0);
    tracep->declBus(c+1197,"cpu_w_len_i", false,-1, 7,0);
    tracep->declBit(c+1106,"cpu_w_last_o", false,-1);
    tracep->declBit(c+380,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+381,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+367,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+1196,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+1197,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+369,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+1218,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+368,"axi_w_ready_i", false,-1);
    tracep->declBit(c+382,"axi_w_valid_o", false,-1);
    tracep->declQuad(c+383,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+385,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+386,"axi_w_last_o", false,-1);
    tracep->declBit(c+387,"axi_b_ready_o", false,-1);
    tracep->declBit(c+1106,"axi_b_valid_i", false,-1);
    tracep->declBus(c+589,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+1110,"axi_b_id_i", false,-1, 3,0);
    tracep->declBit(c+388,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+389,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+377,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+1196,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+1197,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+378,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+1218,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+390,"axi_r_ready_o", false,-1);
    tracep->declBit(c+1107,"axi_r_valid_i", false,-1);
    tracep->declBus(c+1166,"axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+1111,"axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+1109,"axi_r_last_i", false,-1);
    tracep->declBus(c+590,"axi_r_id_i", false,-1, 3,0);
    tracep->declBus(c+391,"axi_w_state", false,-1, 2,0);
    tracep->declBus(c+1201,"AXI_W_IDLE", false,-1, 2,0);
    tracep->declBus(c+1185,"AXI_W_ADDR", false,-1, 2,0);
    tracep->declBus(c+1220,"AXI_W_DATA", false,-1, 2,0);
    tracep->declBus(c+1221,"AXI_W_RESP", false,-1, 2,0);
    tracep->declQuad(c+392,"axi_w_data_t", false,-1, 63,0);
    tracep->declBus(c+394,"axi_w_strb_t", false,-1, 7,0);
    tracep->declBus(c+395,"axi_w_cnt", false,-1, 7,0);
    tracep->declBus(c+396,"axi_r_state", false,-1, 1,0);
    tracep->declBus(c+1202,"AXI_R_IDLE", false,-1, 1,0);
    tracep->declBus(c+1218,"AXI_R_ADDR", false,-1, 1,0);
    tracep->declBus(c+1219,"AXI_R_DATA", false,-1, 1,0);
    tracep->declBus(c+1222,"axi_r_cnt", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_23060077_axi_xbar ");
    tracep->declBit(c+1129,"aclk", false,-1);
    tracep->declBit(c+1163,"areset_n", false,-1);
    tracep->declBit(c+34,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+35,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+36,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+1196,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+1197,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+37,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+38,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+39,"axi_w_ready_i", false,-1);
    tracep->declBit(c+40,"axi_w_valid_o", false,-1);
    tracep->declQuad(c+41,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+43,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+44,"axi_w_last_o", false,-1);
    tracep->declBit(c+45,"axi_b_ready_o", false,-1);
    tracep->declBit(c+1023,"axi_b_valid_i", false,-1);
    tracep->declBus(c+547,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+1024,"axi_b_id_i", false,-1, 3,0);
    tracep->declBit(c+46,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+47,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+48,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+1196,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+1197,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+49,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+50,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+51,"axi_r_ready_o", false,-1);
    tracep->declBit(c+1025,"axi_r_valid_i", false,-1);
    tracep->declBus(c+1162,"axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+1160,"axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+548,"axi_r_last_i", false,-1);
    tracep->declBus(c+1026,"axi_r_id_i", false,-1, 3,0);
    tracep->declBit(c+380,"arb_axi_aw_ready_o", false,-1);
    tracep->declBit(c+381,"arb_axi_aw_valid_i", false,-1);
    tracep->declBus(c+367,"arb_axi_aw_addr_i", false,-1, 31,0);
    tracep->declBus(c+1196,"arb_axi_aw_id_i", false,-1, 3,0);
    tracep->declBus(c+1197,"arb_axi_aw_len_i", false,-1, 7,0);
    tracep->declBus(c+369,"arb_axi_aw_size_i", false,-1, 2,0);
    tracep->declBus(c+1218,"arb_axi_aw_burst_i", false,-1, 1,0);
    tracep->declBit(c+368,"arb_axi_w_ready_o", false,-1);
    tracep->declBit(c+382,"arb_axi_w_valid_i", false,-1);
    tracep->declQuad(c+383,"arb_axi_w_data_i", false,-1, 63,0);
    tracep->declBus(c+385,"arb_axi_w_strb_i", false,-1, 7,0);
    tracep->declBit(c+386,"arb_axi_w_last_i", false,-1);
    tracep->declBit(c+387,"arb_axi_b_ready_i", false,-1);
    tracep->declBit(c+1106,"arb_axi_b_valid_o", false,-1);
    tracep->declBus(c+589,"arb_axi_b_resp_o", false,-1, 1,0);
    tracep->declBus(c+1110,"arb_axi_b_id_o", false,-1, 3,0);
    tracep->declBit(c+388,"arb_axi_ar_ready_o", false,-1);
    tracep->declBit(c+389,"arb_axi_ar_valid_i", false,-1);
    tracep->declBus(c+377,"arb_axi_ar_addr_i", false,-1, 31,0);
    tracep->declBus(c+1196,"arb_axi_ar_id_i", false,-1, 3,0);
    tracep->declBus(c+1197,"arb_axi_ar_len_i", false,-1, 7,0);
    tracep->declBus(c+378,"arb_axi_ar_size_i", false,-1, 2,0);
    tracep->declBus(c+1218,"arb_axi_ar_burst_i", false,-1, 1,0);
    tracep->declBit(c+390,"arb_axi_r_ready_i", false,-1);
    tracep->declBit(c+1107,"arb_axi_r_valid_o", false,-1);
    tracep->declBus(c+1166,"arb_axi_r_resp_o", false,-1, 1,0);
    tracep->declQuad(c+1111,"arb_axi_r_data_o", false,-1, 63,0);
    tracep->declBit(c+1109,"arb_axi_r_last_o", false,-1);
    tracep->declBus(c+590,"arb_axi_r_id_o", false,-1, 3,0);
    tracep->declBit(c+1223,"axi_clint_aw_ready_i", false,-1);
    tracep->declBit(c+397,"axi_clint_aw_valid_o", false,-1);
    tracep->declBus(c+398,"axi_clint_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+1196,"axi_clint_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+1197,"axi_clint_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+399,"axi_clint_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+400,"axi_clint_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+1224,"axi_clint_w_ready_i", false,-1);
    tracep->declBit(c+401,"axi_clint_w_valid_o", false,-1);
    tracep->declQuad(c+402,"axi_clint_w_data_o", false,-1, 63,0);
    tracep->declBus(c+404,"axi_clint_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+405,"axi_clint_w_last_o", false,-1);
    tracep->declBit(c+406,"axi_clint_b_ready_o", false,-1);
    tracep->declBit(c+1225,"axi_clint_b_valid_i", false,-1);
    tracep->declBus(c+1226,"axi_clint_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+1227,"axi_clint_b_id_i", false,-1, 3,0);
    tracep->declBit(c+407,"axi_clint_ar_ready_i", false,-1);
    tracep->declBit(c+408,"axi_clint_ar_valid_o", false,-1);
    tracep->declBus(c+409,"axi_clint_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+1196,"axi_clint_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+1197,"axi_clint_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+410,"axi_clint_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+411,"axi_clint_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+412,"axi_clint_r_ready_o", false,-1);
    tracep->declBit(c+413,"axi_clint_r_valid_i", false,-1);
    tracep->declBus(c+1202,"axi_clint_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+414,"axi_clint_r_data_i", false,-1, 63,0);
    tracep->declBit(c+413,"axi_clint_r_last_i", false,-1);
    tracep->declBus(c+1196,"axi_clint_r_id_i", false,-1, 3,0);
    tracep->pushNamePrefix("u_ysyx_23060077_axi_clint ");
    tracep->declBit(c+1129,"aclk", false,-1);
    tracep->declBit(c+1163,"areset_n", false,-1);
    tracep->declBit(c+1223,"axi_clint_aw_ready_o", false,-1);
    tracep->declBit(c+397,"axi_clint_aw_valid_i", false,-1);
    tracep->declBus(c+398,"axi_clint_aw_addr_i", false,-1, 31,0);
    tracep->declBus(c+1196,"axi_clint_aw_id_i", false,-1, 3,0);
    tracep->declBus(c+1197,"axi_clint_aw_len_i", false,-1, 7,0);
    tracep->declBus(c+399,"axi_clint_aw_size_i", false,-1, 2,0);
    tracep->declBus(c+400,"axi_clint_aw_burst_i", false,-1, 1,0);
    tracep->declBit(c+1224,"axi_clint_w_ready_o", false,-1);
    tracep->declBit(c+401,"axi_clint_w_valid_i", false,-1);
    tracep->declQuad(c+402,"axi_clint_w_data_i", false,-1, 63,0);
    tracep->declBus(c+404,"axi_clint_w_strb_i", false,-1, 7,0);
    tracep->declBit(c+405,"axi_clint_w_last_i", false,-1);
    tracep->declBit(c+406,"axi_clint_b_ready_i", false,-1);
    tracep->declBit(c+1225,"axi_clint_b_valid_o", false,-1);
    tracep->declBus(c+1226,"axi_clint_b_resp_o", false,-1, 1,0);
    tracep->declBus(c+1227,"axi_clint_b_id_o", false,-1, 3,0);
    tracep->declBit(c+407,"axi_clint_ar_ready_o", false,-1);
    tracep->declBit(c+408,"axi_clint_ar_valid_i", false,-1);
    tracep->declBus(c+409,"axi_clint_ar_addr_i", false,-1, 31,0);
    tracep->declBus(c+1196,"axi_clint_ar_id_i", false,-1, 3,0);
    tracep->declBus(c+1197,"axi_clint_ar_len_i", false,-1, 7,0);
    tracep->declBus(c+410,"axi_clint_ar_size_i", false,-1, 2,0);
    tracep->declBus(c+411,"axi_clint_ar_burst_i", false,-1, 1,0);
    tracep->declBit(c+412,"axi_clint_r_ready_i", false,-1);
    tracep->declBit(c+413,"axi_clint_r_valid_o", false,-1);
    tracep->declBus(c+1202,"axi_clint_r_resp_o", false,-1, 1,0);
    tracep->declQuad(c+414,"axi_clint_r_data_o", false,-1, 63,0);
    tracep->declBit(c+413,"axi_clint_r_last_o", false,-1);
    tracep->declBus(c+1196,"axi_clint_r_id_o", false,-1, 3,0);
    tracep->declQuad(c+416,"clint_data", false,-1, 63,0);
    tracep->declQuad(c+418,"data_store", false,-1, 63,0);
    tracep->declBus(c+420,"addr", false,-1, 31,0);
    tracep->declBus(c+421,"clint_r_state", false,-1, 1,0);
    tracep->declBus(c+1202,"CLINT_R_IDLE", false,-1, 1,0);
    tracep->declBus(c+1218,"CLINT_R_ADDR", false,-1, 1,0);
    tracep->declBus(c+1219,"CLINT_R_DATA", false,-1, 1,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("csr_u0 ");
    tracep->declBit(c+1129,"clk", false,-1);
    tracep->declBit(c+1163,"reset", false,-1);
    tracep->declBus(c+422,"wr_addr", false,-1, 11,0);
    tracep->declBus(c+372,"wr_data", false,-1, 31,0);
    tracep->declBus(c+422,"rd_addr", false,-1, 11,0);
    tracep->declBus(c+1165,"rd_data", false,-1, 31,0);
    tracep->declBit(c+370,"i_csr_ecall", false,-1);
    tracep->declBit(c+371,"i_csr_mret", false,-1);
    tracep->declBus(c+341,"i_inst", false,-1, 31,0);
    tracep->declBus(c+340,"i_pc", false,-1, 31,0);
    tracep->declBus(c+373,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+374,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+375,"o_mpec", false,-1, 31,0);
    tracep->declBus(c+1165,"rd_data_r", false,-1, 31,0);
    tracep->declBit(c+423,"wr_en", false,-1);
    tracep->declBit(c+423,"rd_en", false,-1);
    tracep->declBus(c+424,"wr_data_r", false,-1, 31,0);
    tracep->declBus(c+425,"temp", false,-1, 31,0);
    tracep->declBus(c+373,"o_mstatus_r", false,-1, 31,0);
    tracep->declBus(c+426,"mepc_inst_r", false,-1, 31,0);
    tracep->declBus(c+427,"mcause", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu_u0 ");
    tracep->declBus(c+340,"pc", false,-1, 31,0);
    tracep->declBus(c+359,"src1", false,-1, 31,0);
    tracep->declBus(c+360,"src2", false,-1, 31,0);
    tracep->declBus(c+354,"imm", false,-1, 31,0);
    tracep->declBit(c+347,"branch", false,-1);
    tracep->declBus(c+355,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+356,"src_sel", false,-1, 1,0);
    tracep->declBus(c+358,"funct3", false,-1, 2,0);
    tracep->declBit(c+361,"zero_flag", false,-1);
    tracep->declBus(c+362,"exu_result", false,-1, 31,0);
    tracep->declBus(c+428,"alu_a_data", false,-1, 31,0);
    tracep->declBus(c+429,"alu_b_data", false,-1, 31,0);
    tracep->declBus(c+430,"alu_out_data", false,-1, 31,0);
    tracep->declBit(c+1228,"carry_flag", false,-1);
    tracep->declBit(c+1229,"signed_flag", false,-1);
    tracep->declBus(c+362,"exu_result_r", false,-1, 31,0);
    tracep->pushNamePrefix("ex_alu ");
    tracep->declBus(c+355,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+428,"alu_a_data", false,-1, 31,0);
    tracep->declBus(c+429,"alu_b_data", false,-1, 31,0);
    tracep->declBus(c+430,"alu_out_data", false,-1, 31,0);
    tracep->declBit(c+431,"sub_flag", false,-1);
    tracep->declQuad(c+432,"alu_a_t", false,-1, 32,0);
    tracep->declQuad(c+434,"alu_b_t", false,-1, 32,0);
    tracep->declQuad(c+436,"cin", false,-1, 32,0);
    tracep->declQuad(c+438,"add_out", false,-1, 32,0);
    tracep->declBit(c+440,"top_A", false,-1);
    tracep->declBit(c+441,"top_B", false,-1);
    tracep->declBit(c+442,"top_C", false,-1);
    tracep->declBit(c+443,"sign_flag", false,-1);
    tracep->declBit(c+444,"over_flag", false,-1);
    tracep->declBit(c+445,"carry_flag", false,-1);
    tracep->declBus(c+446,"sra_result", false,-1, 31,0);
    tracep->declBus(c+430,"alu_out_data_r", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu_u0 ");
    tracep->declBus(c+341,"inst", false,-1, 31,0);
    tracep->declBit(c+347,"branch", false,-1);
    tracep->declBit(c+348,"jal", false,-1);
    tracep->declBit(c+349,"jalr", false,-1);
    tracep->declBus(c+350,"rd", false,-1, 4,0);
    tracep->declBit(c+351,"rd_wen", false,-1);
    tracep->declBus(c+352,"rs1", false,-1, 4,0);
    tracep->declBus(c+353,"rs2", false,-1, 4,0);
    tracep->declBus(c+354,"imm", false,-1, 31,0);
    tracep->declBus(c+355,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+356,"src_sel", false,-1, 1,0);
    tracep->declBus(c+357,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+358,"funct3", false,-1, 2,0);
    tracep->declBus(c+447,"opcode", false,-1, 6,0);
    tracep->declBus(c+448,"funct7", false,-1, 6,0);
    tracep->declBus(c+1230,"reg_zero", false,-1, 4,0);
    tracep->pushNamePrefix("id_imm_idu ");
    tracep->declBus(c+341,"inst", false,-1, 31,0);
    tracep->declBus(c+354,"imm", false,-1, 31,0);
    tracep->declBus(c+354,"imm_r", false,-1, 31,0);
    tracep->declBus(c+449,"imm_typeI", false,-1, 31,0);
    tracep->declBus(c+450,"imm_typeU", false,-1, 31,0);
    tracep->declBus(c+451,"imm_typeS", false,-1, 31,0);
    tracep->declBus(c+452,"imm_typeB", false,-1, 31,0);
    tracep->declBus(c+453,"imm_typeJ", false,-1, 31,0);
    tracep->declBus(c+1200,"imm_typeR", false,-1, 31,0);
    tracep->declBus(c+1200,"imm_type_NONE", false,-1, 31,0);
    tracep->pushNamePrefix("id_imm_ext_typeB ");
    tracep->declBus(c+1231,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+454,"imm_in", false,-1, 12,0);
    tracep->declBus(c+452,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeI ");
    tracep->declBus(c+1232,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+455,"imm_in", false,-1, 11,0);
    tracep->declBus(c+449,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeJ ");
    tracep->declBus(c+1233,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+456,"imm_in", false,-1, 20,0);
    tracep->declBus(c+453,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeS ");
    tracep->declBus(c+1232,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+457,"imm_in", false,-1, 11,0);
    tracep->declBus(c+451,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeU ");
    tracep->declBus(c+1234,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+450,"imm_in", false,-1, 31,0);
    tracep->declBus(c+450,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_opt_idu ");
    tracep->declBus(c+447,"opcode", false,-1, 6,0);
    tracep->declBus(c+358,"funct3", false,-1, 2,0);
    tracep->declBus(c+448,"funct7", false,-1, 6,0);
    tracep->declBus(c+355,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+356,"src_sel", false,-1, 1,0);
    tracep->declBus(c+357,"lsu_opt", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu_u0 ");
    tracep->declBit(c+1129,"clk", false,-1);
    tracep->declBit(c+1163,"reset", false,-1);
    tracep->declBus(c+343,"jump_pc", false,-1, 31,0);
    tracep->declBit(c+344,"jump_pc_valid", false,-1);
    tracep->declBit(c+1101,"stall", false,-1);
    tracep->declBit(c+1105,"wbu_stall", false,-1);
    tracep->declBit(c+345,"ifu_r_valid_o", false,-1);
    tracep->declBus(c+346,"ifu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+1102,"ifu_r_ready_i", false,-1);
    tracep->declBus(c+1103,"ifu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+1197,"ifu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+1104,"ifu_r_last_i", false,-1);
    tracep->declBit(c+342,"ifu_stall", false,-1);
    tracep->declBus(c+340,"ifu_pc_o", false,-1, 31,0);
    tracep->declBus(c+341,"ifu_inst_o", false,-1, 31,0);
    tracep->declBus(c+340,"ifu_pc_o_r", false,-1, 31,0);
    tracep->declBus(c+341,"ifu_inst_o_r", false,-1, 31,0);
    tracep->declBus(c+458,"ifu_pc_o_t", false,-1, 31,0);
    tracep->declBus(c+459,"ifu_inst_o_t", false,-1, 31,0);
    tracep->declBus(c+346,"pc", false,-1, 31,0);
    tracep->declBus(c+1103,"inst", false,-1, 31,0);
    tracep->declBus(c+1235,"inst_t", false,-1, 31,0);
    tracep->declBit(c+342,"ifu_stall_r", false,-1);
    tracep->declBit(c+460,"flush_inst", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_u0 ");
    tracep->declBit(c+1129,"clk", false,-1);
    tracep->declBit(c+1163,"reset", false,-1);
    tracep->declBus(c+359,"src1", false,-1, 31,0);
    tracep->declBus(c+360,"src2", false,-1, 31,0);
    tracep->declBus(c+354,"imm", false,-1, 31,0);
    tracep->declBus(c+357,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+358,"funct3", false,-1, 2,0);
    tracep->declBit(c+342,"ifu_stall", false,-1);
    tracep->declBit(c+363,"lsu_r_valid_o", false,-1);
    tracep->declBus(c+364,"lsu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+585,"lsu_r_ready_i", false,-1);
    tracep->declBus(c+586,"lsu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+365,"lsu_r_size_o", false,-1, 2,0);
    tracep->declBus(c+1197,"lsu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+587,"lsu_r_last_i", false,-1);
    tracep->declBit(c+366,"lsu_w_valid_o", false,-1);
    tracep->declBus(c+367,"lsu_w_addr_o", false,-1, 31,0);
    tracep->declBit(c+368,"lsu_w_ready_i", false,-1);
    tracep->declBus(c+360,"lsu_w_data_o", false,-1, 31,0);
    tracep->declBus(c+369,"lsu_w_size_o", false,-1, 2,0);
    tracep->declBus(c+1197,"lsu_w_len_o", false,-1, 7,0);
    tracep->declBit(c+1106,"lsu_w_last_i", false,-1);
    tracep->declBit(c+1101,"mem_stall", false,-1);
    tracep->declBit(c+1105,"lsu_rd_wen", false,-1);
    tracep->declBus(c+584,"lsu_result", false,-1, 31,0);
    tracep->declBus(c+364,"raddr", false,-1, 31,0);
    tracep->declBus(c+586,"rdata", false,-1, 31,0);
    tracep->declBus(c+461,"rsize", false,-1, 31,0);
    tracep->declBus(c+367,"waddr", false,-1, 31,0);
    tracep->declBus(c+360,"wdata", false,-1, 31,0);
    tracep->declBus(c+462,"wmask", false,-1, 31,0);
    tracep->declBus(c+462,"mask", false,-1, 31,0);
    tracep->declBus(c+584,"lsu_result_r", false,-1, 31,0);
    tracep->declBit(c+363,"ren", false,-1);
    tracep->declBit(c+366,"wen", false,-1);
    tracep->declBit(c+1113,"lsu_rd_wen_r", false,-1);
    tracep->declBit(c+1114,"lsu_rd_wen_w", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile_u0 ");
    tracep->declBit(c+1129,"clk", false,-1);
    tracep->declBit(c+1163,"reset", false,-1);
    tracep->declBus(c+352,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+359,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+353,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+360,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+588,"rd_en", false,-1);
    tracep->declBus(c+350,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+1164,"rd_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+463+i*1,"gpr", true,(i+0), 31,0);
    }
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu_u0 ");
    tracep->declBus(c+357,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+362,"exu_result", false,-1, 31,0);
    tracep->declBus(c+584,"lsu_result", false,-1, 31,0);
    tracep->declBus(c+1165,"csr_result", false,-1, 31,0);
    tracep->declBit(c+1105,"lsu_rd_wen", false,-1);
    tracep->declBit(c+495,"idu_rd_wen", false,-1);
    tracep->declBit(c+588,"wbu_rd_wen", false,-1);
    tracep->declBus(c+1164,"wbu_result", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"io_d", false,-1);
    tracep->declBit(c+496,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"io_d", false,-1);
    tracep->declBit(c+496,"io_q", false,-1);
    tracep->declBit(c+496,"sync_0", false,-1);
    tracep->declBit(c+497,"sync_1", false,-1);
    tracep->declBit(c+498,"sync_2", false,-1);
    tracep->declBit(c+499,"sync_3", false,-1);
    tracep->declBit(c+500,"sync_4", false,-1);
    tracep->declBit(c+501,"sync_5", false,-1);
    tracep->declBit(c+502,"sync_6", false,-1);
    tracep->declBit(c+503,"sync_7", false,-1);
    tracep->declBit(c+504,"sync_8", false,-1);
    tracep->declBit(c+505,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+914,"auto_in_psel", false,-1);
    tracep->declBit(c+915,"auto_in_penable", false,-1);
    tracep->declBit(c+878,"auto_in_pwrite", false,-1);
    tracep->declBus(c+982,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1185,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+879,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+880,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1193,"auto_in_pready", false,-1);
    tracep->declBit(c+1194,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1195,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1131,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1132,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1133,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1134,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1135,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1136,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1137,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1138,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1139,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1140,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBus(c+997,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+914,"in_psel", false,-1);
    tracep->declBit(c+915,"in_penable", false,-1);
    tracep->declBus(c+1185,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+878,"in_pwrite", false,-1);
    tracep->declBus(c+879,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+880,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1193,"in_pready", false,-1);
    tracep->declBus(c+1195,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1194,"in_pslverr", false,-1);
    tracep->declBus(c+1131,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1132,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1133,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1134,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1135,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1136,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1137,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1138,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1139,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1140,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+912,"auto_in_psel", false,-1);
    tracep->declBit(c+913,"auto_in_penable", false,-1);
    tracep->declBit(c+878,"auto_in_pwrite", false,-1);
    tracep->declBus(c+982,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1185,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+879,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+880,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1190,"auto_in_pready", false,-1);
    tracep->declBit(c+1191,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1192,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1141,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1142,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBus(c+997,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+912,"in_psel", false,-1);
    tracep->declBit(c+913,"in_penable", false,-1);
    tracep->declBus(c+1185,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+878,"in_pwrite", false,-1);
    tracep->declBus(c+879,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+880,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1190,"in_pready", false,-1);
    tracep->declBus(c+1192,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1191,"in_pslverr", false,-1);
    tracep->declBit(c+1141,"ps2_clk", false,-1);
    tracep->declBit(c+1142,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+139,"auto_in_awvalid", false,-1);
    tracep->declBit(c+140,"auto_in_wvalid", false,-1);
    tracep->declBit(c+141,"auto_in_arready", false,-1);
    tracep->declBit(c+142,"auto_in_arvalid", false,-1);
    tracep->declBus(c+22,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+143,"auto_in_araddr", false,-1, 29,0);
    tracep->declBus(c+24,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+551,"auto_in_rready", false,-1);
    tracep->declBit(c+144,"auto_in_rvalid", false,-1);
    tracep->declBus(c+145,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+146,"auto_in_rdata", false,-1, 63,0);
    tracep->declBit(c+144,"state", false,-1);
    tracep->declQuad(c+146,"nodeIn_rdata_r", false,-1, 63,0);
    tracep->declBus(c+145,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+506,"raddr", false,-1, 31,0);
    tracep->declBit(c+507,"ren", false,-1);
    tracep->declBus(c+508,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+983,"auto_in_psel", false,-1);
    tracep->declBit(c+916,"auto_in_penable", false,-1);
    tracep->declBit(c+878,"auto_in_pwrite", false,-1);
    tracep->declBus(c+979,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1185,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+879,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+880,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1154,"auto_in_pready", false,-1);
    tracep->declBit(c+1186,"auto_in_pslverr", false,-1);
    tracep->declBus(c+11,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1014,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1015,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1152,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBus(c+979,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+983,"in_psel", false,-1);
    tracep->declBit(c+916,"in_penable", false,-1);
    tracep->declBus(c+1185,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+878,"in_pwrite", false,-1);
    tracep->declBus(c+879,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+880,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1154,"in_pready", false,-1);
    tracep->declBus(c+11,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1186,"in_pslverr", false,-1);
    tracep->declBit(c+1014,"qspi_sck", false,-1);
    tracep->declBit(c+1015,"qspi_ce_n", false,-1);
    tracep->declBus(c+1152,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1152,"din", false,-1, 3,0);
    tracep->declBus(c+1115,"dout", false,-1, 3,0);
    tracep->declBus(c+1116,"douten", false,-1, 3,0);
    tracep->declBit(c+1167,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1129,"clk_i", false,-1);
    tracep->declBit(c+1130,"rst_i", false,-1);
    tracep->declBus(c+979,"adr_i", false,-1, 31,0);
    tracep->declBus(c+879,"dat_i", false,-1, 31,0);
    tracep->declBus(c+11,"dat_o", false,-1, 31,0);
    tracep->declBus(c+880,"sel_i", false,-1, 3,0);
    tracep->declBit(c+983,"cyc_i", false,-1);
    tracep->declBit(c+983,"stb_i", false,-1);
    tracep->declBit(c+1167,"ack_o", false,-1);
    tracep->declBit(c+878,"we_i", false,-1);
    tracep->declBit(c+1014,"sck", false,-1);
    tracep->declBit(c+1015,"ce_n", false,-1);
    tracep->declBus(c+1152,"din", false,-1, 3,0);
    tracep->declBus(c+1115,"dout", false,-1, 3,0);
    tracep->declBus(c+1116,"douten", false,-1, 3,0);
    tracep->declBus(c+1202,"ST_INIT", false,-1, 1,0);
    tracep->declBus(c+1218,"ST_IDLE", false,-1, 1,0);
    tracep->declBus(c+1219,"ST_WAIT", false,-1, 1,0);
    tracep->declBit(c+594,"mr_sck", false,-1);
    tracep->declBit(c+595,"mr_ce_n", false,-1);
    tracep->declBus(c+1152,"mr_din", false,-1, 3,0);
    tracep->declBus(c+596,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+597,"mr_doe", false,-1);
    tracep->declBit(c+598,"mw_sck", false,-1);
    tracep->declBit(c+599,"mw_ce_n", false,-1);
    tracep->declBus(c+1152,"mw_din", false,-1, 3,0);
    tracep->declBus(c+918,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+600,"mw_doe", false,-1);
    tracep->declBit(c+601,"init_start", false,-1);
    tracep->declBit(c+602,"init_done", false,-1);
    tracep->declBit(c+603,"init_sck", false,-1);
    tracep->declBit(c+604,"init_ce_n", false,-1);
    tracep->declBus(c+605,"init_dout", false,-1, 3,0);
    tracep->declBit(c+1198,"init_doe", false,-1);
    tracep->declBit(c+1117,"mr_rd", false,-1);
    tracep->declBit(c+606,"mr_done", false,-1);
    tracep->declBit(c+1118,"mw_wr", false,-1);
    tracep->declBit(c+919,"mw_done", false,-1);
    tracep->declBit(c+983,"wb_valid", false,-1);
    tracep->declBit(c+998,"wb_we", false,-1);
    tracep->declBit(c+999,"wb_re", false,-1);
    tracep->declBus(c+607,"state", false,-1, 1,0);
    tracep->declBus(c+1119,"nstate", false,-1, 1,0);
    tracep->declBus(c+888,"size", false,-1, 2,0);
    tracep->declBus(c+889,"byte0", false,-1, 7,0);
    tracep->declBus(c+890,"byte1", false,-1, 7,0);
    tracep->declBus(c+891,"byte2", false,-1, 7,0);
    tracep->declBus(c+892,"byte3", false,-1, 7,0);
    tracep->declBus(c+893,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("INIT ");
    tracep->declBit(c+1129,"clk", false,-1);
    tracep->declBit(c+1168,"rst_n", false,-1);
    tracep->declBit(c+601,"start", false,-1);
    tracep->declBit(c+602,"done", false,-1);
    tracep->declBit(c+603,"sck", false,-1);
    tracep->declBit(c+604,"ce_n", false,-1);
    tracep->declBus(c+605,"dout", false,-1, 3,0);
    tracep->declBit(c+1198,"douten", false,-1);
    tracep->declBus(c+1236,"CMD_35H", false,-1, 7,0);
    tracep->declBus(c+608,"counter", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1129,"clk", false,-1);
    tracep->declBit(c+1168,"rst_n", false,-1);
    tracep->declBus(c+1000,"addr", false,-1, 23,0);
    tracep->declBit(c+1117,"rd", false,-1);
    tracep->declBus(c+1237,"size", false,-1, 2,0);
    tracep->declBit(c+606,"done", false,-1);
    tracep->declBus(c+11,"line", false,-1, 31,0);
    tracep->declBit(c+594,"sck", false,-1);
    tracep->declBit(c+595,"ce_n", false,-1);
    tracep->declBus(c+1152,"din", false,-1, 3,0);
    tracep->declBus(c+596,"dout", false,-1, 3,0);
    tracep->declBit(c+597,"douten", false,-1);
    tracep->declBus(c+1238,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1239,"READ", false,-1, 0,0);
    tracep->declBus(c+1240,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+609,"state", false,-1);
    tracep->declBit(c+1120,"nstate", false,-1);
    tracep->declBus(c+610,"counter", false,-1, 7,0);
    tracep->declBus(c+611,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+509+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1241,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+612,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1129,"clk", false,-1);
    tracep->declBit(c+1168,"rst_n", false,-1);
    tracep->declBus(c+1001,"addr", false,-1, 23,0);
    tracep->declBus(c+893,"line", false,-1, 31,0);
    tracep->declBus(c+888,"size", false,-1, 2,0);
    tracep->declBit(c+1118,"wr", false,-1);
    tracep->declBit(c+919,"done", false,-1);
    tracep->declBit(c+598,"sck", false,-1);
    tracep->declBit(c+599,"ce_n", false,-1);
    tracep->declBus(c+1152,"din", false,-1, 3,0);
    tracep->declBus(c+918,"dout", false,-1, 3,0);
    tracep->declBit(c+600,"douten", false,-1);
    tracep->declBus(c+1238,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1239,"WRITE", false,-1, 0,0);
    tracep->declBus(c+894,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+613,"state", false,-1);
    tracep->declBit(c+1121,"nstate", false,-1);
    tracep->declBus(c+614,"counter", false,-1, 7,0);
    tracep->declBus(c+615,"saddr", false,-1, 23,0);
    tracep->declBus(c+1242,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+908,"auto_in_psel", false,-1);
    tracep->declBit(c+909,"auto_in_penable", false,-1);
    tracep->declBit(c+878,"auto_in_pwrite", false,-1);
    tracep->declBus(c+979,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1185,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+879,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+880,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+592,"auto_in_pready", false,-1);
    tracep->declBit(c+1186,"auto_in_pslverr", false,-1);
    tracep->declBus(c+593,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1153,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+923,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+924,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+925,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+926,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+927,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1016,"sdram_bundle_a", false,-1, 13,0);
    tracep->declBus(c+928,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+929,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+971,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBus(c+979,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+908,"in_psel", false,-1);
    tracep->declBit(c+909,"in_penable", false,-1);
    tracep->declBus(c+1185,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+878,"in_pwrite", false,-1);
    tracep->declBus(c+879,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+880,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+592,"in_pready", false,-1);
    tracep->declBus(c+593,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1186,"in_pslverr", false,-1);
    tracep->declBit(c+1153,"sdram_clk", false,-1);
    tracep->declBit(c+923,"sdram_cke", false,-1);
    tracep->declBit(c+924,"sdram_cs", false,-1);
    tracep->declBit(c+925,"sdram_ras", false,-1);
    tracep->declBit(c+926,"sdram_cas", false,-1);
    tracep->declBit(c+927,"sdram_we", false,-1);
    tracep->declBus(c+1016,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+928,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+929,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+971,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+616,"sdram_dout_en", false,-1);
    tracep->declBus(c+617,"sdram_dout", false,-1, 31,0);
    tracep->declBus(c+513,"state", false,-1, 1,0);
    tracep->declBit(c+930,"req_accept", false,-1);
    tracep->declBit(c+1002,"is_read", false,-1);
    tracep->declBit(c+1003,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1129,"clk_i", false,-1);
    tracep->declBit(c+1130,"rst_i", false,-1);
    tracep->declBus(c+1004,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1002,"inport_rd_i", false,-1);
    tracep->declBus(c+1197,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+979,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+879,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+971,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+930,"inport_accept_o", false,-1);
    tracep->declBit(c+592,"inport_ack_o", false,-1);
    tracep->declBit(c+1186,"inport_error_o", false,-1);
    tracep->declBus(c+593,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1153,"sdram_clk_o", false,-1);
    tracep->declBit(c+923,"sdram_cke_o", false,-1);
    tracep->declBit(c+924,"sdram_cs_o", false,-1);
    tracep->declBit(c+925,"sdram_ras_o", false,-1);
    tracep->declBit(c+926,"sdram_cas_o", false,-1);
    tracep->declBit(c+927,"sdram_we_o", false,-1);
    tracep->declBus(c+929,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1016,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+928,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+617,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+616,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1243,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1244,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1245,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1246,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1246,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1247,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1248,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1231,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1249,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1250,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1251,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1247,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1252,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1253,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1254,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1255,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1256,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1257,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1258,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1196,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1259,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1247,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1196,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1258,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1257,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1253,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1255,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1254,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1256,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1252,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1260,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1261,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1262,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1262,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1234,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1262,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1246,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1246,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1263,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+979,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1004,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1002,"ram_rd_w", false,-1);
    tracep->declBit(c+930,"ram_accept_w", false,-1);
    tracep->declBus(c+879,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+593,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+592,"ram_ack_w", false,-1);
    tracep->declBit(c+1005,"ram_req_w", false,-1);
    tracep->declBus(c+931,"command_q", false,-1, 3,0);
    tracep->declBus(c+932,"addr_q", false,-1, 12,0);
    tracep->declBus(c+617,"data_q", false,-1, 31,0);
    tracep->declBit(c+618,"data_rd_en_q", false,-1);
    tracep->declBus(c+929,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+923,"cke_q", false,-1);
    tracep->declBus(c+928,"bank_q", false,-1, 1,0);
    tracep->declBus(c+971,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+619,"refresh_q", false,-1);
    tracep->declBus(c+620,"row_open_q", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+621+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+933,"state_q", false,-1, 3,0);
    tracep->declBus(c+1122,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1123,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+629,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+630,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1006,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1007,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1008,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1009,"addr_bank_double", false,-1, 2,0);
    tracep->declBus(c+1247,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+631,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1124,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1264,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+934,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+632,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+593,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+633,"idx", false,-1, 31,0);
    tracep->declBus(c+634,"rd_q", false,-1, 3,0);
    tracep->declBit(c+592,"ack_q", false,-1);
    tracep->declArray(c+935,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+987,"auto_in_psel", false,-1);
    tracep->declBit(c+917,"auto_in_penable", false,-1);
    tracep->declBit(c+878,"auto_in_pwrite", false,-1);
    tracep->declBus(c+981,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1185,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+879,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+880,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1156,"auto_in_pready", false,-1);
    tracep->declBit(c+1186,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1157,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+921,"spi_bundle_sck", false,-1);
    tracep->declBus(c+922,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+591,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1151,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1265,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1266,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1248,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBus(c+1010,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+987,"in_psel", false,-1);
    tracep->declBit(c+917,"in_penable", false,-1);
    tracep->declBus(c+1185,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+878,"in_pwrite", false,-1);
    tracep->declBus(c+879,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+880,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1156,"in_pready", false,-1);
    tracep->declBus(c+1157,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1186,"in_pslverr", false,-1);
    tracep->declBit(c+921,"spi_sck", false,-1);
    tracep->declBus(c+922,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+591,"spi_mosi", false,-1);
    tracep->declBit(c+1151,"spi_miso", false,-1);
    tracep->declBit(c+1267,"spi_irq_out", false,-1);
    tracep->declBus(c+895,"wb_adr_i", false,-1, 31,0);
    tracep->declBus(c+896,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+635,"wb_dat_o", false,-1, 31,0);
    tracep->declBit(c+897,"wb_we_i", false,-1);
    tracep->declBit(c+898,"wb_stb_i", false,-1);
    tracep->declBit(c+899,"wb_cyc_i", false,-1);
    tracep->declBit(c+938,"wb_ack_o", false,-1);
    tracep->declBit(c+939,"wb_int_o", false,-1);
    tracep->declBus(c+900,"wb_sel_i", false,-1, 3,0);
    tracep->declBus(c+901,"spi_state", false,-1, 3,0);
    tracep->declBus(c+1196,"SPI_IDLE", false,-1, 3,0);
    tracep->declBus(c+1258,"SPI_REG", false,-1, 3,0);
    tracep->declBus(c+1257,"SPI_FLASH_TX1", false,-1, 3,0);
    tracep->declBus(c+1253,"SPI_FLASH_TX0", false,-1, 3,0);
    tracep->declBus(c+1255,"SPI_FLASH_SS1", false,-1, 3,0);
    tracep->declBus(c+1254,"SPI_FLASH_CTRL", false,-1, 3,0);
    tracep->declBus(c+1256,"SPI_FLASH_INTT", false,-1, 3,0);
    tracep->declBus(c+1252,"SPI_FLASH_SS0", false,-1, 3,0);
    tracep->declBus(c+1260,"SPI_FLASH_DATA", false,-1, 3,0);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1268,"Tp", false,-1, 31,0);
    tracep->declBit(c+1129,"wb_clk_i", false,-1);
    tracep->declBit(c+1130,"wb_rst_i", false,-1);
    tracep->declBus(c+902,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+896,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+635,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+900,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+897,"wb_we_i", false,-1);
    tracep->declBit(c+898,"wb_stb_i", false,-1);
    tracep->declBit(c+899,"wb_cyc_i", false,-1);
    tracep->declBit(c+938,"wb_ack_o", false,-1);
    tracep->declBit(c+1186,"wb_err_o", false,-1);
    tracep->declBit(c+939,"wb_int_o", false,-1);
    tracep->declBus(c+922,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+921,"sclk_pad_o", false,-1);
    tracep->declBit(c+591,"mosi_pad_o", false,-1);
    tracep->declBit(c+1151,"miso_pad_i", false,-1);
    tracep->declBus(c+940,"divider", false,-1, 15,0);
    tracep->declBus(c+941,"ctrl", false,-1, 13,0);
    tracep->declBus(c+636,"ss", false,-1, 7,0);
    tracep->declBus(c+1125,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+637,"rx", false,-1, 127,0);
    tracep->declBit(c+942,"rx_negedge", false,-1);
    tracep->declBit(c+943,"tx_negedge", false,-1);
    tracep->declBus(c+944,"char_len", false,-1, 6,0);
    tracep->declBit(c+945,"go", false,-1);
    tracep->declBit(c+946,"lsb", false,-1);
    tracep->declBit(c+947,"ie", false,-1);
    tracep->declBit(c+948,"ass", false,-1);
    tracep->declBit(c+903,"spi_divider_sel", false,-1);
    tracep->declBit(c+904,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+905,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+906,"spi_ss_sel", false,-1);
    tracep->declBit(c+949,"tip", false,-1);
    tracep->declBit(c+950,"pos_edge", false,-1);
    tracep->declBit(c+641,"neg_edge", false,-1);
    tracep->declBit(c+951,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1268,"Tp", false,-1, 31,0);
    tracep->declBit(c+1129,"clk_in", false,-1);
    tracep->declBit(c+1130,"rst", false,-1);
    tracep->declBit(c+949,"enable", false,-1);
    tracep->declBit(c+945,"go", false,-1);
    tracep->declBit(c+951,"last_clk", false,-1);
    tracep->declBus(c+940,"divider", false,-1, 15,0);
    tracep->declBit(c+921,"clk_out", false,-1);
    tracep->declBit(c+950,"pos_edge", false,-1);
    tracep->declBit(c+641,"neg_edge", false,-1);
    tracep->declBus(c+952,"cnt", false,-1, 15,0);
    tracep->declBit(c+953,"cnt_zero", false,-1);
    tracep->declBit(c+954,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1268,"Tp", false,-1, 31,0);
    tracep->declBit(c+1129,"clk", false,-1);
    tracep->declBit(c+1130,"rst", false,-1);
    tracep->declBus(c+907,"latch", false,-1, 3,0);
    tracep->declBus(c+900,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+944,"len", false,-1, 6,0);
    tracep->declBit(c+946,"lsb", false,-1);
    tracep->declBit(c+945,"go", false,-1);
    tracep->declBit(c+950,"pos_edge", false,-1);
    tracep->declBit(c+641,"neg_edge", false,-1);
    tracep->declBit(c+942,"rx_negedge", false,-1);
    tracep->declBit(c+943,"tx_negedge", false,-1);
    tracep->declBit(c+949,"tip", false,-1);
    tracep->declBit(c+951,"last", false,-1);
    tracep->declBus(c+896,"p_in", false,-1, 31,0);
    tracep->declArray(c+637,"p_out", false,-1, 127,0);
    tracep->declBit(c+921,"s_clk", false,-1);
    tracep->declBit(c+1151,"s_in", false,-1);
    tracep->declBit(c+591,"s_out", false,-1);
    tracep->declBus(c+955,"cnt", false,-1, 7,0);
    tracep->declArray(c+637,"data", false,-1, 127,0);
    tracep->declBus(c+956,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+957,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+958,"rx_clk", false,-1);
    tracep->declBit(c+959,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+984,"auto_in_psel", false,-1);
    tracep->declBit(c+985,"auto_in_penable", false,-1);
    tracep->declBit(c+878,"auto_in_pwrite", false,-1);
    tracep->declBus(c+982,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1185,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+879,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+880,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+986,"auto_in_pready", false,-1);
    tracep->declBit(c+1186,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1155,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1149,"uart_rx", false,-1);
    tracep->declBit(c+1150,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+984,"in_psel", false,-1);
    tracep->declBit(c+985,"in_penable", false,-1);
    tracep->declBus(c+1185,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+986,"in_pready", false,-1);
    tracep->declBit(c+1186,"in_pslverr", false,-1);
    tracep->declBus(c+997,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+878,"in_pwrite", false,-1);
    tracep->declBus(c+1155,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+879,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+880,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1149,"uart_rx", false,-1);
    tracep->declBit(c+1150,"uart_tx", false,-1);
    tracep->declBit(c+642,"rtsn", false,-1);
    tracep->declBit(c+1186,"ctsn", false,-1);
    tracep->declBit(c+643,"dtr_pad_o", false,-1);
    tracep->declBit(c+1186,"dsr_pad_i", false,-1);
    tracep->declBit(c+1186,"ri_pad_i", false,-1);
    tracep->declBit(c+1186,"dcd_pad_i", false,-1);
    tracep->declBit(c+644,"interrupt", false,-1);
    tracep->declBit(c+1169,"reg_we", false,-1);
    tracep->declBit(c+1170,"reg_re", false,-1);
    tracep->declBus(c+1011,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1012,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+514,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1126,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+645,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1129,"clk", false,-1);
    tracep->declBit(c+1130,"wb_rst_i", false,-1);
    tracep->declBus(c+1011,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1013,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1126,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1169,"wb_we_i", false,-1);
    tracep->declBit(c+1170,"wb_re_i", false,-1);
    tracep->declBit(c+1150,"stx_pad_o", false,-1);
    tracep->declBit(c+1149,"srx_pad_i", false,-1);
    tracep->declBus(c+1260,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+645,"rts_pad_o", false,-1);
    tracep->declBit(c+643,"dtr_pad_o", false,-1);
    tracep->declBit(c+644,"int_o", false,-1);
    tracep->declBit(c+646,"enable", false,-1);
    tracep->declBit(c+647,"srx_pad", false,-1);
    tracep->declBus(c+648,"ier", false,-1, 3,0);
    tracep->declBus(c+649,"iir", false,-1, 3,0);
    tracep->declBus(c+650,"fcr", false,-1, 1,0);
    tracep->declBus(c+651,"mcr", false,-1, 4,0);
    tracep->declBus(c+652,"lcr", false,-1, 7,0);
    tracep->declBus(c+653,"msr", false,-1, 7,0);
    tracep->declBus(c+654,"dl", false,-1, 15,0);
    tracep->declBus(c+655,"scratch", false,-1, 7,0);
    tracep->declBit(c+656,"start_dlc", false,-1);
    tracep->declBit(c+657,"lsr_mask_d", false,-1);
    tracep->declBit(c+658,"msi_reset", false,-1);
    tracep->declBus(c+659,"dlc", false,-1, 15,0);
    tracep->declBus(c+660,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+661,"rx_reset", false,-1);
    tracep->declBit(c+662,"tx_reset", false,-1);
    tracep->declBit(c+663,"dlab", false,-1);
    tracep->declBit(c+1198,"cts_pad_i", false,-1);
    tracep->declBit(c+1186,"dsr_pad_i", false,-1);
    tracep->declBit(c+1186,"ri_pad_i", false,-1);
    tracep->declBit(c+1186,"dcd_pad_i", false,-1);
    tracep->declBit(c+664,"loopback", false,-1);
    tracep->declBit(c+1186,"cts", false,-1);
    tracep->declBit(c+1198,"dsr", false,-1);
    tracep->declBit(c+1198,"ri", false,-1);
    tracep->declBit(c+1198,"dcd", false,-1);
    tracep->declBit(c+665,"cts_c", false,-1);
    tracep->declBit(c+666,"dsr_c", false,-1);
    tracep->declBit(c+667,"ri_c", false,-1);
    tracep->declBit(c+668,"dcd_c", false,-1);
    tracep->declBus(c+669,"lsr", false,-1, 7,0);
    tracep->declBit(c+670,"lsr0", false,-1);
    tracep->declBit(c+671,"lsr1", false,-1);
    tracep->declBit(c+672,"lsr2", false,-1);
    tracep->declBit(c+673,"lsr3", false,-1);
    tracep->declBit(c+674,"lsr4", false,-1);
    tracep->declBit(c+675,"lsr5", false,-1);
    tracep->declBit(c+676,"lsr6", false,-1);
    tracep->declBit(c+677,"lsr7", false,-1);
    tracep->declBit(c+678,"lsr0r", false,-1);
    tracep->declBit(c+679,"lsr1r", false,-1);
    tracep->declBit(c+680,"lsr2r", false,-1);
    tracep->declBit(c+681,"lsr3r", false,-1);
    tracep->declBit(c+682,"lsr4r", false,-1);
    tracep->declBit(c+683,"lsr5r", false,-1);
    tracep->declBit(c+684,"lsr6r", false,-1);
    tracep->declBit(c+685,"lsr7r", false,-1);
    tracep->declBit(c+2,"lsr_mask", false,-1);
    tracep->declBit(c+686,"rls_int", false,-1);
    tracep->declBit(c+687,"rda_int", false,-1);
    tracep->declBit(c+688,"ti_int", false,-1);
    tracep->declBit(c+689,"thre_int", false,-1);
    tracep->declBit(c+690,"ms_int", false,-1);
    tracep->declBit(c+691,"tf_push", false,-1);
    tracep->declBit(c+692,"rf_pop", false,-1);
    tracep->declBus(c+1171,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+693,"rf_error_bit", false,-1);
    tracep->declBit(c+671,"rf_overrun", false,-1);
    tracep->declBit(c+694,"rf_push_pulse", false,-1);
    tracep->declBus(c+695,"rf_count", false,-1, 4,0);
    tracep->declBus(c+696,"tf_count", false,-1, 4,0);
    tracep->declBus(c+697,"tstate", false,-1, 2,0);
    tracep->declBus(c+698,"rstate", false,-1, 3,0);
    tracep->declBus(c+699,"counter_t", false,-1, 9,0);
    tracep->declBit(c+700,"thre_set_en", false,-1);
    tracep->declBus(c+701,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+702,"block_value", false,-1, 7,0);
    tracep->declBit(c+703,"serial_out", false,-1);
    tracep->declBit(c+704,"serial_in", false,-1);
    tracep->declBit(c+3,"lsr_mask_condition", false,-1);
    tracep->declBit(c+4,"iir_read", false,-1);
    tracep->declBit(c+5,"msr_read", false,-1);
    tracep->declBit(c+6,"fifo_read", false,-1);
    tracep->declBit(c+7,"fifo_write", false,-1);
    tracep->declBus(c+705,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+706,"lsr0_d", false,-1);
    tracep->declBit(c+707,"lsr1_d", false,-1);
    tracep->declBit(c+708,"lsr2_d", false,-1);
    tracep->declBit(c+709,"lsr3_d", false,-1);
    tracep->declBit(c+710,"lsr4_d", false,-1);
    tracep->declBit(c+711,"lsr5_d", false,-1);
    tracep->declBit(c+712,"lsr6_d", false,-1);
    tracep->declBit(c+713,"lsr7_d", false,-1);
    tracep->declBit(c+714,"rls_int_d", false,-1);
    tracep->declBit(c+715,"thre_int_d", false,-1);
    tracep->declBit(c+716,"ms_int_d", false,-1);
    tracep->declBit(c+717,"ti_int_d", false,-1);
    tracep->declBit(c+718,"rda_int_d", false,-1);
    tracep->declBit(c+719,"rls_int_rise", false,-1);
    tracep->declBit(c+720,"thre_int_rise", false,-1);
    tracep->declBit(c+721,"ms_int_rise", false,-1);
    tracep->declBit(c+722,"ti_int_rise", false,-1);
    tracep->declBit(c+723,"rda_int_rise", false,-1);
    tracep->declBit(c+724,"rls_int_pnd", false,-1);
    tracep->declBit(c+725,"rda_int_pnd", false,-1);
    tracep->declBit(c+726,"thre_int_pnd", false,-1);
    tracep->declBit(c+727,"ms_int_pnd", false,-1);
    tracep->declBit(c+728,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1268,"Tp", false,-1, 31,0);
    tracep->declBus(c+1268,"width", false,-1, 31,0);
    tracep->declBus(c+1239,"init_value", false,-1, 0,0);
    tracep->declBit(c+1130,"rst_i", false,-1);
    tracep->declBit(c+1129,"clk_i", false,-1);
    tracep->declBit(c+1186,"stage1_rst_i", false,-1);
    tracep->declBit(c+1198,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1149,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+647,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+729,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1129,"clk", false,-1);
    tracep->declBit(c+1130,"wb_rst_i", false,-1);
    tracep->declBus(c+652,"lcr", false,-1, 7,0);
    tracep->declBit(c+692,"rf_pop", false,-1);
    tracep->declBit(c+704,"srx_pad_i", false,-1);
    tracep->declBit(c+646,"enable", false,-1);
    tracep->declBit(c+661,"rx_reset", false,-1);
    tracep->declBit(c+2,"lsr_mask", false,-1);
    tracep->declBus(c+699,"counter_t", false,-1, 9,0);
    tracep->declBus(c+695,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1171,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+671,"rf_overrun", false,-1);
    tracep->declBit(c+693,"rf_error_bit", false,-1);
    tracep->declBus(c+698,"rstate", false,-1, 3,0);
    tracep->declBit(c+694,"rf_push_pulse", false,-1);
    tracep->declBus(c+730,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+731,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+732,"rshift", false,-1, 7,0);
    tracep->declBit(c+733,"rparity", false,-1);
    tracep->declBit(c+734,"rparity_error", false,-1);
    tracep->declBit(c+735,"rframing_error", false,-1);
    tracep->declBit(c+736,"rbit_in", false,-1);
    tracep->declBit(c+737,"rparity_xor", false,-1);
    tracep->declBus(c+738,"counter_b", false,-1, 7,0);
    tracep->declBit(c+739,"rf_push_q", false,-1);
    tracep->declBus(c+740,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+741,"rf_push", false,-1);
    tracep->declBit(c+742,"break_error", false,-1);
    tracep->declBit(c+743,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+744,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+745,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+746,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1196,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1258,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1257,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1253,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1255,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1254,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1256,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1252,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1260,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1261,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1269,"sr_push", false,-1, 3,0);
    tracep->declBus(c+747,"toc_value", false,-1, 9,0);
    tracep->declBus(c+748,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1270,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1271,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1247,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1272,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1129,"clk", false,-1);
    tracep->declBit(c+1130,"wb_rst_i", false,-1);
    tracep->declBit(c+694,"push", false,-1);
    tracep->declBit(c+692,"pop", false,-1);
    tracep->declBus(c+740,"data_in", false,-1, 10,0);
    tracep->declBit(c+661,"fifo_reset", false,-1);
    tracep->declBit(c+2,"reset_status", false,-1);
    tracep->declBus(c+1171,"data_out", false,-1, 10,0);
    tracep->declBit(c+671,"overrun", false,-1);
    tracep->declBus(c+695,"count", false,-1, 4,0);
    tracep->declBit(c+693,"error_bit", false,-1);
    tracep->declBus(c+1172,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+749+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+765,"top", false,-1, 3,0);
    tracep->declBus(c+766,"bottom", false,-1, 3,0);
    tracep->declBus(c+767,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+768,"word0", false,-1, 2,0);
    tracep->declBus(c+769,"word1", false,-1, 2,0);
    tracep->declBus(c+770,"word2", false,-1, 2,0);
    tracep->declBus(c+771,"word3", false,-1, 2,0);
    tracep->declBus(c+772,"word4", false,-1, 2,0);
    tracep->declBus(c+773,"word5", false,-1, 2,0);
    tracep->declBus(c+774,"word6", false,-1, 2,0);
    tracep->declBus(c+775,"word7", false,-1, 2,0);
    tracep->declBus(c+776,"word8", false,-1, 2,0);
    tracep->declBus(c+777,"word9", false,-1, 2,0);
    tracep->declBus(c+778,"word10", false,-1, 2,0);
    tracep->declBus(c+779,"word11", false,-1, 2,0);
    tracep->declBus(c+780,"word12", false,-1, 2,0);
    tracep->declBus(c+781,"word13", false,-1, 2,0);
    tracep->declBus(c+782,"word14", false,-1, 2,0);
    tracep->declBus(c+783,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1247,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1248,"data_width", false,-1, 31,0);
    tracep->declBus(c+1271,"depth", false,-1, 31,0);
    tracep->declBit(c+1129,"clk", false,-1);
    tracep->declBit(c+694,"we", false,-1);
    tracep->declBus(c+765,"a", false,-1, 3,0);
    tracep->declBus(c+766,"dpra", false,-1, 3,0);
    tracep->declBus(c+784,"di", false,-1, 7,0);
    tracep->declBus(c+1172,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+515+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1129,"clk", false,-1);
    tracep->declBit(c+1130,"wb_rst_i", false,-1);
    tracep->declBus(c+652,"lcr", false,-1, 7,0);
    tracep->declBit(c+691,"tf_push", false,-1);
    tracep->declBus(c+1013,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+646,"enable", false,-1);
    tracep->declBit(c+662,"tx_reset", false,-1);
    tracep->declBit(c+2,"lsr_mask", false,-1);
    tracep->declBit(c+703,"stx_pad_o", false,-1);
    tracep->declBus(c+697,"tstate", false,-1, 2,0);
    tracep->declBus(c+696,"tf_count", false,-1, 4,0);
    tracep->declBus(c+785,"counter", false,-1, 4,0);
    tracep->declBus(c+786,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+787,"shift_out", false,-1, 6,0);
    tracep->declBit(c+788,"stx_o_tmp", false,-1);
    tracep->declBit(c+789,"parity_xor", false,-1);
    tracep->declBit(c+790,"tf_pop", false,-1);
    tracep->declBit(c+791,"bit_out", false,-1);
    tracep->declBus(c+1013,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+920,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+792,"tf_overrun", false,-1);
    tracep->declBus(c+1201,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1185,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1220,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1221,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1237,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1273,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1248,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1271,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1247,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1272,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1129,"clk", false,-1);
    tracep->declBit(c+1130,"wb_rst_i", false,-1);
    tracep->declBit(c+691,"push", false,-1);
    tracep->declBit(c+790,"pop", false,-1);
    tracep->declBus(c+1013,"data_in", false,-1, 7,0);
    tracep->declBit(c+662,"fifo_reset", false,-1);
    tracep->declBit(c+2,"reset_status", false,-1);
    tracep->declBus(c+920,"data_out", false,-1, 7,0);
    tracep->declBit(c+792,"overrun", false,-1);
    tracep->declBus(c+696,"count", false,-1, 4,0);
    tracep->declBus(c+793,"top", false,-1, 3,0);
    tracep->declBus(c+794,"bottom", false,-1, 3,0);
    tracep->declBus(c+795,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1247,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1248,"data_width", false,-1, 31,0);
    tracep->declBus(c+1271,"depth", false,-1, 31,0);
    tracep->declBit(c+1129,"clk", false,-1);
    tracep->declBit(c+691,"we", false,-1);
    tracep->declBus(c+793,"a", false,-1, 3,0);
    tracep->declBus(c+794,"dpra", false,-1, 3,0);
    tracep->declBus(c+1013,"di", false,-1, 7,0);
    tracep->declBus(c+920,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+531+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBit(c+910,"auto_in_psel", false,-1);
    tracep->declBit(c+911,"auto_in_penable", false,-1);
    tracep->declBit(c+878,"auto_in_pwrite", false,-1);
    tracep->declBus(c+981,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1185,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+879,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+880,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1187,"auto_in_pready", false,-1);
    tracep->declBit(c+1188,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1189,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1143,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1144,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1145,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1146,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1147,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1148,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1129,"clock", false,-1);
    tracep->declBit(c+1130,"reset", false,-1);
    tracep->declBus(c+1010,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+910,"in_psel", false,-1);
    tracep->declBit(c+911,"in_penable", false,-1);
    tracep->declBus(c+1185,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+878,"in_pwrite", false,-1);
    tracep->declBus(c+879,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+880,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1187,"in_pready", false,-1);
    tracep->declBus(c+1189,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1188,"in_pslverr", false,-1);
    tracep->declBus(c+1143,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1144,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1145,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1146,"vga_hsync", false,-1);
    tracep->declBit(c+1147,"vga_vsync", false,-1);
    tracep->declBit(c+1148,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+921,"sck", false,-1);
    tracep->declBit(c+960,"ss", false,-1);
    tracep->declBit(c+591,"mosi", false,-1);
    tracep->declBit(c+1173,"miso", false,-1);
    tracep->declBus(c+8,"data", false,-1, 7,0);
    tracep->declBus(c+9,"bit_cnt", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+921,"sck", false,-1);
    tracep->declBit(c+961,"ss", false,-1);
    tracep->declBit(c+591,"mosi", false,-1);
    tracep->declBit(c+1174,"miso", false,-1);
    tracep->declBit(c+961,"reset", false,-1);
    tracep->declBus(c+872,"state", false,-1, 2,0);
    tracep->declBus(c+873,"counter", false,-1, 7,0);
    tracep->declBus(c+1175,"cmd", false,-1, 7,0);
    tracep->declBus(c+1176,"addr", false,-1, 23,0);
    tracep->declBus(c+874,"data", false,-1, 31,0);
    tracep->declBit(c+875,"ren", false,-1);
    tracep->declBus(c+10,"rdata", false,-1, 31,0);
    tracep->declBus(c+1177,"raddr", false,-1, 31,0);
    tracep->declBus(c+1178,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+921,"clock", false,-1);
    tracep->declBit(c+875,"valid", false,-1);
    tracep->declBus(c+1175,"cmd", false,-1, 7,0);
    tracep->declBus(c+1177,"addr", false,-1, 31,0);
    tracep->declBus(c+10,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1014,"sck", false,-1);
    tracep->declBit(c+1015,"ce_n", false,-1);
    tracep->declBus(c+1152,"dio", false,-1, 3,0);
    tracep->declBus(c+974,"dout_en", false,-1, 3,0);
    tracep->declBus(c+1179,"dout", false,-1, 3,0);
    tracep->declBus(c+1152,"din", false,-1, 3,0);
    tracep->declBit(c+1180,"QPI_MODE", false,-1);
    tracep->declBus(c+975,"cmd", false,-1, 7,0);
    tracep->declBus(c+976,"addr", false,-1, 23,0);
    tracep->declBus(c+1181,"data", false,-1, 31,0);
    tracep->declBus(c+1182,"rdata", false,-1, 31,0);
    tracep->declBus(c+977,"counter", false,-1, 7,0);
    tracep->declBus(c+978,"state", false,-1, 3,0);
    tracep->declBus(c+1183,"data_bswap", false,-1, 31,0);
    tracep->declBus(c+1184,"wdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1153,"clk", false,-1);
    tracep->declBit(c+923,"cke", false,-1);
    tracep->declBit(c+924,"cs", false,-1);
    tracep->declBit(c+925,"ras", false,-1);
    tracep->declBit(c+926,"cas", false,-1);
    tracep->declBit(c+927,"we", false,-1);
    tracep->declBus(c+1016,"a", false,-1, 13,0);
    tracep->declBus(c+928,"ba", false,-1, 1,0);
    tracep->declBus(c+929,"dqm", false,-1, 3,0);
    tracep->declBus(c+971,"dq", false,-1, 31,0);
    tracep->declBus(c+962,"command", false,-1, 2,0);
    tracep->declBit(c+965,"ras_u0", false,-1);
    tracep->declBit(c+966,"cas_u0", false,-1);
    tracep->declBit(c+967,"we_u0", false,-1);
    tracep->declBit(c+968,"ras_u1", false,-1);
    tracep->declBit(c+969,"cas_u1", false,-1);
    tracep->declBit(c+970,"we_u1", false,-1);
    tracep->pushNamePrefix("sdram_double_u0 ");
    tracep->declBit(c+1153,"clk", false,-1);
    tracep->declBit(c+923,"cke", false,-1);
    tracep->declBit(c+924,"cs", false,-1);
    tracep->declBit(c+965,"ras", false,-1);
    tracep->declBit(c+966,"cas", false,-1);
    tracep->declBit(c+967,"we", false,-1);
    tracep->declBus(c+932,"a", false,-1, 12,0);
    tracep->declBus(c+928,"ba", false,-1, 1,0);
    tracep->declBus(c+929,"dqm", false,-1, 3,0);
    tracep->declBus(c+971,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("sdram_single_u0 ");
    tracep->declBit(c+1153,"clk", false,-1);
    tracep->declBit(c+923,"cke", false,-1);
    tracep->declBit(c+924,"cs", false,-1);
    tracep->declBit(c+965,"ras", false,-1);
    tracep->declBit(c+966,"cas", false,-1);
    tracep->declBit(c+967,"we", false,-1);
    tracep->declBus(c+932,"a", false,-1, 12,0);
    tracep->declBus(c+928,"ba", false,-1, 1,0);
    tracep->declBus(c+963,"dqm", false,-1, 1,0);
    tracep->declBus(c+972,"dq", false,-1, 15,0);
    tracep->declBus(c+1274,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1275,"CMD_NOP", false,-1, 2,0);
    tracep->declBus(c+1221,"CMD_ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1273,"CMD_READ", false,-1, 2,0);
    tracep->declBus(c+1237,"CMD_WRITE", false,-1, 2,0);
    tracep->declBus(c+1276,"CMD_TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1220,"CMD_PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1185,"CMD_REFRESH", false,-1, 2,0);
    tracep->declBus(c+1201,"CMD_LOAD_MODE", false,-1, 2,0);
    tracep->declBus(c+1277,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+796+i*1,"Line_Address", true,(i+0), 12,0);
    }
    tracep->declBus(c+800,"dout_en", false,-1, 15,0);
    tracep->declBus(c+801,"dout", false,-1, 15,0);
    tracep->declBus(c+972,"din", false,-1, 15,0);
    tracep->declBus(c+802,"CAS_Latency", false,-1, 2,0);
    tracep->declBus(c+803,"Brust_Length", false,-1, 2,0);
    tracep->declBus(c+1127,"command", false,-1, 2,0);
    tracep->declBus(c+804,"L_Bank", false,-1, 1,0);
    tracep->declBus(c+805,"dqm_buf1", false,-1, 1,0);
    tracep->declBus(c+806,"R_Counter", false,-1, 3,0);
    tracep->declBus(c+807,"W_Counter", false,-1, 3,0);
    tracep->declBit(c+808,"read_flag", false,-1);
    tracep->declBus(c+809,"R_Address", false,-1, 8,0);
    tracep->declBus(c+810,"W_Address", false,-1, 8,0);
    tracep->declBus(c+811,"W_Data", false,-1, 15,0);
    tracep->declBus(c+812,"r_sdram_address", false,-1, 21,0);
    tracep->declBus(c+813,"w_sdram_address", false,-1, 21,0);
    tracep->declBus(c+814,"Length", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram_single_u1 ");
    tracep->declBit(c+1153,"clk", false,-1);
    tracep->declBit(c+923,"cke", false,-1);
    tracep->declBit(c+924,"cs", false,-1);
    tracep->declBit(c+965,"ras", false,-1);
    tracep->declBit(c+966,"cas", false,-1);
    tracep->declBit(c+967,"we", false,-1);
    tracep->declBus(c+932,"a", false,-1, 12,0);
    tracep->declBus(c+928,"ba", false,-1, 1,0);
    tracep->declBus(c+964,"dqm", false,-1, 1,0);
    tracep->declBus(c+973,"dq", false,-1, 15,0);
    tracep->declBus(c+1274,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1275,"CMD_NOP", false,-1, 2,0);
    tracep->declBus(c+1221,"CMD_ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1273,"CMD_READ", false,-1, 2,0);
    tracep->declBus(c+1237,"CMD_WRITE", false,-1, 2,0);
    tracep->declBus(c+1276,"CMD_TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1220,"CMD_PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1185,"CMD_REFRESH", false,-1, 2,0);
    tracep->declBus(c+1201,"CMD_LOAD_MODE", false,-1, 2,0);
    tracep->declBus(c+1277,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+815+i*1,"Line_Address", true,(i+0), 12,0);
    }
    tracep->declBus(c+819,"dout_en", false,-1, 15,0);
    tracep->declBus(c+820,"dout", false,-1, 15,0);
    tracep->declBus(c+973,"din", false,-1, 15,0);
    tracep->declBus(c+821,"CAS_Latency", false,-1, 2,0);
    tracep->declBus(c+822,"Brust_Length", false,-1, 2,0);
    tracep->declBus(c+1127,"command", false,-1, 2,0);
    tracep->declBus(c+823,"L_Bank", false,-1, 1,0);
    tracep->declBus(c+824,"dqm_buf1", false,-1, 1,0);
    tracep->declBus(c+825,"R_Counter", false,-1, 3,0);
    tracep->declBus(c+826,"W_Counter", false,-1, 3,0);
    tracep->declBit(c+827,"read_flag", false,-1);
    tracep->declBus(c+828,"R_Address", false,-1, 8,0);
    tracep->declBus(c+829,"W_Address", false,-1, 8,0);
    tracep->declBus(c+830,"W_Data", false,-1, 15,0);
    tracep->declBus(c+831,"r_sdram_address", false,-1, 21,0);
    tracep->declBus(c+832,"w_sdram_address", false,-1, 21,0);
    tracep->declBus(c+833,"Length", false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram_double_u1 ");
    tracep->declBit(c+1153,"clk", false,-1);
    tracep->declBit(c+923,"cke", false,-1);
    tracep->declBit(c+924,"cs", false,-1);
    tracep->declBit(c+968,"ras", false,-1);
    tracep->declBit(c+969,"cas", false,-1);
    tracep->declBit(c+970,"we", false,-1);
    tracep->declBus(c+932,"a", false,-1, 12,0);
    tracep->declBus(c+928,"ba", false,-1, 1,0);
    tracep->declBus(c+929,"dqm", false,-1, 3,0);
    tracep->declBus(c+971,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("sdram_single_u0 ");
    tracep->declBit(c+1153,"clk", false,-1);
    tracep->declBit(c+923,"cke", false,-1);
    tracep->declBit(c+924,"cs", false,-1);
    tracep->declBit(c+968,"ras", false,-1);
    tracep->declBit(c+969,"cas", false,-1);
    tracep->declBit(c+970,"we", false,-1);
    tracep->declBus(c+932,"a", false,-1, 12,0);
    tracep->declBus(c+928,"ba", false,-1, 1,0);
    tracep->declBus(c+963,"dqm", false,-1, 1,0);
    tracep->declBus(c+972,"dq", false,-1, 15,0);
    tracep->declBus(c+1274,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1275,"CMD_NOP", false,-1, 2,0);
    tracep->declBus(c+1221,"CMD_ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1273,"CMD_READ", false,-1, 2,0);
    tracep->declBus(c+1237,"CMD_WRITE", false,-1, 2,0);
    tracep->declBus(c+1276,"CMD_TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1220,"CMD_PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1185,"CMD_REFRESH", false,-1, 2,0);
    tracep->declBus(c+1201,"CMD_LOAD_MODE", false,-1, 2,0);
    tracep->declBus(c+1277,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+834+i*1,"Line_Address", true,(i+0), 12,0);
    }
    tracep->declBus(c+838,"dout_en", false,-1, 15,0);
    tracep->declBus(c+839,"dout", false,-1, 15,0);
    tracep->declBus(c+972,"din", false,-1, 15,0);
    tracep->declBus(c+840,"CAS_Latency", false,-1, 2,0);
    tracep->declBus(c+841,"Brust_Length", false,-1, 2,0);
    tracep->declBus(c+1128,"command", false,-1, 2,0);
    tracep->declBus(c+842,"L_Bank", false,-1, 1,0);
    tracep->declBus(c+843,"dqm_buf1", false,-1, 1,0);
    tracep->declBus(c+844,"R_Counter", false,-1, 3,0);
    tracep->declBus(c+845,"W_Counter", false,-1, 3,0);
    tracep->declBit(c+846,"read_flag", false,-1);
    tracep->declBus(c+847,"R_Address", false,-1, 8,0);
    tracep->declBus(c+848,"W_Address", false,-1, 8,0);
    tracep->declBus(c+849,"W_Data", false,-1, 15,0);
    tracep->declBus(c+850,"r_sdram_address", false,-1, 21,0);
    tracep->declBus(c+851,"w_sdram_address", false,-1, 21,0);
    tracep->declBus(c+852,"Length", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram_single_u1 ");
    tracep->declBit(c+1153,"clk", false,-1);
    tracep->declBit(c+923,"cke", false,-1);
    tracep->declBit(c+924,"cs", false,-1);
    tracep->declBit(c+968,"ras", false,-1);
    tracep->declBit(c+969,"cas", false,-1);
    tracep->declBit(c+970,"we", false,-1);
    tracep->declBus(c+932,"a", false,-1, 12,0);
    tracep->declBus(c+928,"ba", false,-1, 1,0);
    tracep->declBus(c+964,"dqm", false,-1, 1,0);
    tracep->declBus(c+973,"dq", false,-1, 15,0);
    tracep->declBus(c+1274,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1275,"CMD_NOP", false,-1, 2,0);
    tracep->declBus(c+1221,"CMD_ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1273,"CMD_READ", false,-1, 2,0);
    tracep->declBus(c+1237,"CMD_WRITE", false,-1, 2,0);
    tracep->declBus(c+1276,"CMD_TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1220,"CMD_PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1185,"CMD_REFRESH", false,-1, 2,0);
    tracep->declBus(c+1201,"CMD_LOAD_MODE", false,-1, 2,0);
    tracep->declBus(c+1277,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+853+i*1,"Line_Address", true,(i+0), 12,0);
    }
    tracep->declBus(c+857,"dout_en", false,-1, 15,0);
    tracep->declBus(c+858,"dout", false,-1, 15,0);
    tracep->declBus(c+973,"din", false,-1, 15,0);
    tracep->declBus(c+859,"CAS_Latency", false,-1, 2,0);
    tracep->declBus(c+860,"Brust_Length", false,-1, 2,0);
    tracep->declBus(c+1128,"command", false,-1, 2,0);
    tracep->declBus(c+861,"L_Bank", false,-1, 1,0);
    tracep->declBus(c+862,"dqm_buf1", false,-1, 1,0);
    tracep->declBus(c+863,"R_Counter", false,-1, 3,0);
    tracep->declBus(c+864,"W_Counter", false,-1, 3,0);
    tracep->declBit(c+865,"read_flag", false,-1);
    tracep->declBus(c+866,"R_Address", false,-1, 8,0);
    tracep->declBus(c+867,"W_Address", false,-1, 8,0);
    tracep->declBus(c+868,"W_Data", false,-1, 15,0);
    tracep->declBus(c+869,"r_sdram_address", false,-1, 21,0);
    tracep->declBus(c+870,"w_sdram_address", false,-1, 21,0);
    tracep->declBus(c+871,"Length", false,-1, 3,0);
    tracep->popNamePrefix(4);
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
    bufp->fullIData(oldp+11,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                               [3U] << 0x18U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                  [2U] 
                                                  << 0x10U) 
                                                 | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [1U] 
                                                     << 8U) 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [0U])))),32);
    bufp->fullBit(oldp+12,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_awvalid));
    bufp->fullCData(oldp+13,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+14,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+15,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+16,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_wvalid));
    bufp->fullQData(oldp+17,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),64);
    bufp->fullCData(oldp+19,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),8);
    bufp->fullCData(oldp+20,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+21,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_arvalid));
    bufp->fullCData(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullBit(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullQData(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),64);
    bufp->fullCData(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),8);
    bufp->fullCData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+34,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
    bufp->fullIData(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr),32);
    bufp->fullCData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize),3);
    bufp->fullCData(oldp+38,(((0x2000000U == (0xffff0000U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_w_addr_o))
                               ? 0U : 1U)),2);
    bufp->fullBit(oldp+39,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid));
    bufp->fullQData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata),64);
    bufp->fullCData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb),8);
    bufp->fullBit(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast));
    bufp->fullBit(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready));
    bufp->fullBit(oldp+46,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullIData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
    bufp->fullCData(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize),3);
    bufp->fullCData(oldp+50,(((0x2000000U == (0xffff0000U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_addr_o))
                               ? 0U : 1U)),2);
    bufp->fullBit(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready));
    bufp->fullBit(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+53,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+55,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+57,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+58,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullCData(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullBit(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullBit(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullSData(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullCData(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullIData(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullQData(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullBit(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullQData(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+103,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                    ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram[2U] 
                                       >> 8U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast)))));
    bufp->fullWData(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),73);
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid));
    bufp->fullIData(oldp+109,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+110,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+113,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+114,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+115,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullQData(oldp+118,((((QData)((IData)((0xffU 
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
    bufp->fullCData(oldp+120,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+121,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullBit(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullCData(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r4),8);
    bufp->fullCData(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r5),8);
    bufp->fullCData(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r6),8);
    bufp->fullCData(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r7),8);
    bufp->fullSData(oldp+133,((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 3U))),10);
    bufp->fullQData(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),64);
    bufp->fullSData(oldp+136,((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 3U))),10);
    bufp->fullBit(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+139,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
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
    bufp->fullBit(oldp+140,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 1U))));
    bufp->fullBit(oldp+141,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+142,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+143,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullQData(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),64);
    bufp->fullBit(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+152,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                    | ((0xcU & (8U 
                                                ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                       | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x17U)) 
                                          | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
    bufp->fullBit(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullBit(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+199,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullCData(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+212,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+216,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+220,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+224,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+228,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+232,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+236,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+240,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+244,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+248,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+252,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+256,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+260,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+264,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+268,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+272,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+276,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+280,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+284,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+288,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+292,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+296,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+300,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+304,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+308,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+312,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+316,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+320,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+324,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+328,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+332,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+336,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_pc_o_r),32);
    bufp->fullIData(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r),32);
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_stall_r));
    bufp->fullIData(oldp+343,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_mret)
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
    bufp->fullBit(oldp+344,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_mret) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_ecall) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h15124160__0) 
                                   | (0x67U == (0x7fU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)))))));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_r_valid_o));
    bufp->fullIData(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__pc),32);
    bufp->fullBit(oldp+347,((0x63U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r))));
    bufp->fullBit(oldp+348,((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r))));
    bufp->fullBit(oldp+349,((0x67U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r))));
    bufp->fullCData(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_rd),5);
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_rd_wen));
    bufp->fullCData(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_rs1),5);
    bufp->fullCData(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_rs2),5);
    bufp->fullIData(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r),32);
    bufp->fullCData(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_alu_opt),4);
    bufp->fullCData(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_src_sel),2);
    bufp->fullCData(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt),2);
    bufp->fullCData(oldp+358,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                     >> 0xcU))),3);
    bufp->fullIData(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src1),32);
    bufp->fullIData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src2),32);
    bufp->fullBit(oldp+361,((1U & (~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__exu_result_r))))));
    bufp->fullIData(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__exu_result_r),32);
    bufp->fullBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__ren));
    bufp->fullIData(oldp+364,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h623bd169__0
                                : 0U)),32);
    bufp->fullCData(oldp+365,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__rsize)),3);
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__wen));
    bufp->fullIData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_w_addr_o),32);
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arb_axi_w_ready_i));
    bufp->fullCData(oldp+369,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__mask)),3);
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_ecall));
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_mret));
    bufp->fullIData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wr_csr_data),32);
    bufp->fullIData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                              [0x300U]),32);
    bufp->fullIData(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                              [0x305U]),32);
    bufp->fullIData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                              [0x341U]),32);
    bufp->fullBit(oldp+376,((1U & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_r_valid_o)
                                    : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state))
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__ren)
                                        : 0U)))));
    bufp->fullIData(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_addr_o),32);
    bufp->fullCData(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_size_o),3);
    bufp->fullCData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state),2);
    bufp->fullBit(oldp+380,((1U & ((0x2000000U == (0xffff0000U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_w_addr_o))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_clint_aw_ready_i)
                                    : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full))))));
    bufp->fullBit(oldp+381,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state))));
    bufp->fullBit(oldp+382,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state))));
    bufp->fullQData(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arb_axi_w_data_o),64);
    bufp->fullCData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arb_axi_w_strb_o),8);
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arb_axi_w_last_o));
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arb_axi_b_ready_o));
    bufp->fullBit(oldp+388,((1U & ((0x2000000U == (0xffff0000U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_addr_o))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_clint_ar_ready_i)
                                    : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full))))));
    bufp->fullBit(oldp+389,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_state))));
    bufp->fullBit(oldp+390,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_state))));
    bufp->fullCData(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state),3);
    bufp->fullQData(oldp+392,((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src2))),64);
    bufp->fullCData(oldp+394,(((0U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__mask))
                                ? 1U : ((1U == (7U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__mask))
                                         ? 3U : 0xfU))),8);
    bufp->fullCData(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_cnt),8);
    bufp->fullCData(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_state),2);
    bufp->fullBit(oldp+397,(((0x2000000U == (0xffff0000U 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_w_addr_o)) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state)))));
    bufp->fullIData(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_clint_aw_addr_o),32);
    bufp->fullCData(oldp+399,(((0x2000000U == (0xffff0000U 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_w_addr_o))
                                ? (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__mask)
                                : 0U)),3);
    bufp->fullCData(oldp+400,(((0x2000000U == (0xffff0000U 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_w_addr_o))
                                ? 1U : 0U)),2);
    bufp->fullBit(oldp+401,(((0x2000000U == (0xffff0000U 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_w_addr_o)) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state)))));
    bufp->fullQData(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_clint_w_data_o),64);
    bufp->fullCData(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_clint_w_strb_o),8);
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_clint_w_last_o));
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_clint_b_ready_o));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_clint_ar_ready_i));
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_clint_ar_valid_o));
    bufp->fullIData(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_clint_ar_addr_o),32);
    bufp->fullCData(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_clint_ar_size_o),3);
    bufp->fullCData(oldp+411,(((0x2000000U == (0xffff0000U 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_addr_o))
                                ? 1U : 0U)),2);
    bufp->fullBit(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_clint_r_ready_o));
    bufp->fullBit(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_clint_r_valid_i));
    bufp->fullQData(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_clint_r_data_i),64);
    bufp->fullQData(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_clint__DOT__clint_data),64);
    bufp->fullQData(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_clint__DOT__data_store),64);
    bufp->fullIData(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_clint__DOT__addr),32);
    bufp->fullCData(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__u_ysyx_23060077_axi_clint__DOT__clint_r_state),2);
    bufp->fullSData(oldp+422,((0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r)),12);
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__wr_en));
    bufp->fullIData(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__wr_data_r),32);
    bufp->fullIData(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__temp),32);
    bufp->fullIData(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__mepc_inst_r),32);
    bufp->fullIData(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                              [0x342U]),32);
    bufp->fullIData(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data),32);
    bufp->fullIData(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_b_data),32);
    bufp->fullIData(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__alu_out_data_r),32);
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__sub_flag));
    bufp->fullQData(oldp+432,((((QData)((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data 
                                                 >> 0x1fU))) 
                                << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data)))),33);
    bufp->fullQData(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__alu_b_t),33);
    bufp->fullQData(oldp+436,((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__sub_flag))),33);
    bufp->fullQData(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out),33);
    bufp->fullBit(oldp+440,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data 
                             >> 0x1fU)));
    bufp->fullBit(oldp+441,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__alu_b_t 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+442,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+443,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+444,((1U & VL_REDXOR_64((0x180000000ULL 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out)))));
    bufp->fullBit(oldp+445,((1U & ((((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data 
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
    bufp->fullIData(oldp+446,((IData)(((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data))) 
                                       >> (0x3fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_b_data)))),32);
    bufp->fullCData(oldp+447,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)),7);
    bufp->fullCData(oldp+448,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                               >> 0x19U)),7);
    bufp->fullIData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_typeI),32);
    bufp->fullIData(oldp+450,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)),32);
    bufp->fullIData(oldp+451,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+452,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
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
    bufp->fullIData(oldp+453,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
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
    bufp->fullSData(oldp+454,(((0x1000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                           >> 0x13U)) 
                               | ((0x800U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                             << 4U)) 
                                  | ((0x7e0U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                >> 0x14U)) 
                                     | (0x1eU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                 >> 7U)))))),13);
    bufp->fullSData(oldp+455,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+456,(((0x100000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                             >> 0xbU)) 
                               | ((0xff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r) 
                                  | ((0x800U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                >> 9U)) 
                                     | (0x7feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                  >> 0x14U)))))),21);
    bufp->fullSData(oldp+457,(((0xfe0U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                           >> 7U)))),12);
    bufp->fullIData(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_pc_o_t),32);
    bufp->fullIData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_t),32);
    bufp->fullBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__flush_inst));
    bufp->fullIData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__rsize),32);
    bufp->fullIData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__mask),32);
    bufp->fullIData(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[0]),32);
    bufp->fullIData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[1]),32);
    bufp->fullIData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[2]),32);
    bufp->fullIData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[3]),32);
    bufp->fullIData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[4]),32);
    bufp->fullIData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[5]),32);
    bufp->fullIData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[6]),32);
    bufp->fullIData(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[7]),32);
    bufp->fullIData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[8]),32);
    bufp->fullIData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[9]),32);
    bufp->fullIData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[10]),32);
    bufp->fullIData(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[11]),32);
    bufp->fullIData(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[12]),32);
    bufp->fullIData(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[13]),32);
    bufp->fullIData(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[14]),32);
    bufp->fullIData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[15]),32);
    bufp->fullIData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[16]),32);
    bufp->fullIData(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[17]),32);
    bufp->fullIData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[18]),32);
    bufp->fullIData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[19]),32);
    bufp->fullIData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[20]),32);
    bufp->fullIData(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[21]),32);
    bufp->fullIData(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[22]),32);
    bufp->fullIData(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[23]),32);
    bufp->fullIData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[24]),32);
    bufp->fullIData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[25]),32);
    bufp->fullIData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[26]),32);
    bufp->fullIData(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[27]),32);
    bufp->fullIData(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[28]),32);
    bufp->fullIData(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[29]),32);
    bufp->fullIData(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[30]),32);
    bufp->fullIData(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[31]),32);
    bufp->fullBit(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu_u0__idu_rd_wen));
    bufp->fullBit(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullIData(oldp+506,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+547,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullBit(oldp+548,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
                              >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4))));
    bufp->fullBit(oldp+549,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+550,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+551,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+552,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+553,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+554,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+555,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+556,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+557,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+558,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+559,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+560,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+561,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+562,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+563,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+564,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+565,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+566,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+567,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+568,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+569,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+570,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+571,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+572,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+573,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+574,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+575,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+576,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+577,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+578,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+579,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+580,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+581,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+582,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+583,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullIData(oldp+584,(((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
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
                                                   ? (IData)(vlSelf->__VdfgTmp_hc772c02b__0)
                                                   : 0U))
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                  ? 
                                                 (((- (IData)(
                                                              ((2U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                                                               & (IData)(
                                                                         (vlSelf->__VdfgTmp_hc772c02b__0 
                                                                          >> 0xfU))))) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h56d28e90__0))
                                                  : 
                                                 (((- (IData)(
                                                              ((2U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                                                               & (IData)(
                                                                         (vlSelf->__VdfgTmp_hc772c02b__0 
                                                                          >> 7U))))) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h56d2889a__0)))))
                                         : 0U))),32);
    bufp->fullBit(oldp+585,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arb_axi_r_valid_i))));
    bufp->fullIData(oldp+586,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state))
                                ? (IData)(vlSelf->__VdfgTmp_hc772c02b__0)
                                : 0U)),32);
    bufp->fullBit(oldp+587,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arb_axi_r_last_i))));
    bufp->fullBit(oldp+588,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu_u0__idu_rd_wen)
                              : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu_u0__idu_rd_wen)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rd_wen)))));
    bufp->fullCData(oldp+589,((3U & ((0x2000000U == 
                                      (0xffff0000U 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_w_addr_o))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_clint_b_resp_i)
                                      : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
                                            >> (0x1fU 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                                   << 1U))))))),2);
    bufp->fullCData(oldp+590,(((0x2000000U == (0xffff0000U 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_addr_o))
                                ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19))),4);
    bufp->fullBit(oldp+591,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),32);
    bufp->fullBit(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+596,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                ? 0xeU : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                           ? 0xbU : 
                                          (0xfU & (
                                                   (2U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 0x14U)
                                                    : 
                                                   ((3U 
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
    bufp->fullBit(oldp+597,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+600,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+601,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))));
    bufp->fullBit(oldp+602,((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter))));
    bufp->fullBit(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_sck));
    bufp->fullBit(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_ce_n));
    bufp->fullCData(oldp+605,(((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter))
                                ? (1U & (0x35U >> (7U 
                                                   & ((IData)(7U) 
                                                      - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter)))))
                                : 0U)),4);
    bufp->fullBit(oldp+606,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullCData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullCData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter),8);
    bufp->fullBit(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+612,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+616,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),32);
    bufp->fullBit(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullBit(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),8);
    bufp->fullSData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullSData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[4]),13);
    bufp->fullSData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[5]),13);
    bufp->fullSData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[6]),13);
    bufp->fullSData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[7]),13);
    bufp->fullCData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullIData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o),32);
    bufp->fullCData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+642,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+643,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+645,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+663,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+664,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+665,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+666,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+667,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+668,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+669,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+672,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+673,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+674,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+693,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+700,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+719,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+720,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+721,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+722,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+723,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+742,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+743,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+744,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+745,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+746,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+748,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+767,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+784,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+795,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullSData(oldp+796,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u0__DOT__Line_Address[0]),13);
    bufp->fullSData(oldp+797,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u0__DOT__Line_Address[1]),13);
    bufp->fullSData(oldp+798,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u0__DOT__Line_Address[2]),13);
    bufp->fullSData(oldp+799,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u0__DOT__Line_Address[3]),13);
    bufp->fullSData(oldp+800,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u0__DOT__read_flag)
                                ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+801,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u0__DOT__dout),16);
    bufp->fullCData(oldp+802,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u0__DOT__CAS_Latency),3);
    bufp->fullCData(oldp+803,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u0__DOT__Brust_Length),3);
    bufp->fullCData(oldp+804,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u0__DOT__L_Bank),2);
    bufp->fullCData(oldp+805,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u0__DOT__dqm_buf1),2);
    bufp->fullCData(oldp+806,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u0__DOT__R_Counter),4);
    bufp->fullCData(oldp+807,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u0__DOT__W_Counter),4);
    bufp->fullBit(oldp+808,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u0__DOT__read_flag));
    bufp->fullSData(oldp+809,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u0__DOT__R_Address),9);
    bufp->fullSData(oldp+810,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u0__DOT__W_Address),9);
    bufp->fullSData(oldp+811,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u0__DOT__W_Data),16);
    bufp->fullIData(oldp+812,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u0__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+813,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u0__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+814,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u0__DOT__Length),4);
    bufp->fullSData(oldp+815,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u1__DOT__Line_Address[0]),13);
    bufp->fullSData(oldp+816,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u1__DOT__Line_Address[1]),13);
    bufp->fullSData(oldp+817,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u1__DOT__Line_Address[2]),13);
    bufp->fullSData(oldp+818,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u1__DOT__Line_Address[3]),13);
    bufp->fullSData(oldp+819,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u1__DOT__read_flag)
                                ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+820,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u1__DOT__dout),16);
    bufp->fullCData(oldp+821,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u1__DOT__CAS_Latency),3);
    bufp->fullCData(oldp+822,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u1__DOT__Brust_Length),3);
    bufp->fullCData(oldp+823,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u1__DOT__L_Bank),2);
    bufp->fullCData(oldp+824,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u1__DOT__dqm_buf1),2);
    bufp->fullCData(oldp+825,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u1__DOT__R_Counter),4);
    bufp->fullCData(oldp+826,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u1__DOT__W_Counter),4);
    bufp->fullBit(oldp+827,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u1__DOT__read_flag));
    bufp->fullSData(oldp+828,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u1__DOT__R_Address),9);
    bufp->fullSData(oldp+829,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u1__DOT__W_Address),9);
    bufp->fullSData(oldp+830,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u1__DOT__W_Data),16);
    bufp->fullIData(oldp+831,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u1__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+832,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u1__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+833,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u1__DOT__Length),4);
    bufp->fullSData(oldp+834,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u0__DOT__Line_Address[0]),13);
    bufp->fullSData(oldp+835,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u0__DOT__Line_Address[1]),13);
    bufp->fullSData(oldp+836,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u0__DOT__Line_Address[2]),13);
    bufp->fullSData(oldp+837,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u0__DOT__Line_Address[3]),13);
    bufp->fullSData(oldp+838,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u0__DOT__read_flag)
                                ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+839,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u0__DOT__dout),16);
    bufp->fullCData(oldp+840,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u0__DOT__CAS_Latency),3);
    bufp->fullCData(oldp+841,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u0__DOT__Brust_Length),3);
    bufp->fullCData(oldp+842,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u0__DOT__L_Bank),2);
    bufp->fullCData(oldp+843,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u0__DOT__dqm_buf1),2);
    bufp->fullCData(oldp+844,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u0__DOT__R_Counter),4);
    bufp->fullCData(oldp+845,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u0__DOT__W_Counter),4);
    bufp->fullBit(oldp+846,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u0__DOT__read_flag));
    bufp->fullSData(oldp+847,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u0__DOT__R_Address),9);
    bufp->fullSData(oldp+848,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u0__DOT__W_Address),9);
    bufp->fullSData(oldp+849,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u0__DOT__W_Data),16);
    bufp->fullIData(oldp+850,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u0__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+851,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u0__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+852,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u0__DOT__Length),4);
    bufp->fullSData(oldp+853,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u1__DOT__Line_Address[0]),13);
    bufp->fullSData(oldp+854,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u1__DOT__Line_Address[1]),13);
    bufp->fullSData(oldp+855,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u1__DOT__Line_Address[2]),13);
    bufp->fullSData(oldp+856,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u1__DOT__Line_Address[3]),13);
    bufp->fullSData(oldp+857,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u1__DOT__read_flag)
                                ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+858,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u1__DOT__dout),16);
    bufp->fullCData(oldp+859,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u1__DOT__CAS_Latency),3);
    bufp->fullCData(oldp+860,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u1__DOT__Brust_Length),3);
    bufp->fullCData(oldp+861,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u1__DOT__L_Bank),2);
    bufp->fullCData(oldp+862,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u1__DOT__dqm_buf1),2);
    bufp->fullCData(oldp+863,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u1__DOT__R_Counter),4);
    bufp->fullCData(oldp+864,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u1__DOT__W_Counter),4);
    bufp->fullBit(oldp+865,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u1__DOT__read_flag));
    bufp->fullSData(oldp+866,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u1__DOT__R_Address),9);
    bufp->fullSData(oldp+867,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u1__DOT__W_Address),9);
    bufp->fullSData(oldp+868,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u1__DOT__W_Data),16);
    bufp->fullIData(oldp+869,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u1__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+870,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u1__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+871,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u1__DOT__Length),4);
    bufp->fullCData(oldp+872,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+873,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullIData(oldp+874,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+875,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+877,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w),32);
    bufp->fullCData(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullCData(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullIData(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg),32);
    bufp->fullQData(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg),64);
    bufp->fullCData(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg),8);
    bufp->fullCData(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+891,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+892,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+893,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                   << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullCData(oldp+894,((0xffU & ((IData)(7U) 
                                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                           << 1U)))),8);
    bufp->fullIData(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i),32);
    bufp->fullIData(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i),32);
    bufp->fullBit(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i));
    bufp->fullBit(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i));
    bufp->fullBit(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i));
    bufp->fullCData(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i),4);
    bufp->fullCData(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_state),4);
    bufp->fullCData(oldp+902,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i)),5);
    bufp->fullBit(oldp+903,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i)))));
    bufp->fullBit(oldp+904,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i)))));
    bufp->fullCData(oldp+905,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
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
    bufp->fullBit(oldp+906,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i)))));
    bufp->fullCData(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullBit(oldp+908,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+909,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+910,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+911,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+912,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+913,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+914,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+915,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+916,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+917,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullCData(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullCData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullBit(oldp+921,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+922,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+924,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+925,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+926,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+927,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullCData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),4);
    bufp->fullBit(oldp+930,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullSData(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullIData(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o));
    bufp->fullBit(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_int_o));
    bufp->fullSData(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullBit(oldp+942,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+943,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+944,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+945,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+946,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+947,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+948,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+951,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+953,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+954,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+956,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+960,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                   >> 7U))));
    bufp->fullBit(oldp+961,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+962,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))),3);
    bufp->fullCData(oldp+963,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q))),2);
    bufp->fullCData(oldp+964,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                                     >> 2U))),2);
    bufp->fullBit(oldp+965,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                    | (7U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                       >> 2U) : (((0x2000U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                                   ? 7U
                                                   : 
                                                  (7U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                                 >> 2U)))));
    bufp->fullBit(oldp+966,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                    | (7U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                       >> 1U) : (((0x2000U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                                   ? 7U
                                                   : 
                                                  (7U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                                 >> 1U)))));
    bufp->fullBit(oldp+967,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                    | (7U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)
                                    : ((0x2000U & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                        ? 7U : (7U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)))))));
    bufp->fullBit(oldp+968,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                    | (7U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                       >> 2U) : (((0x2000U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                                   ? 
                                                  (7U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))
                                                   : 7U) 
                                                 >> 2U)))));
    bufp->fullBit(oldp+969,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                    | (7U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                       >> 1U) : (((0x2000U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                                   ? 
                                                  (7U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))
                                                   : 7U) 
                                                 >> 1U)))));
    bufp->fullBit(oldp+970,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                    | (7U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)
                                    : ((0x2000U & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                        ? (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))
                                        : 7U)))));
    bufp->fullIData(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w),32);
    bufp->fullSData(oldp+972,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w)),16);
    bufp->fullSData(oldp+973,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w 
                               >> 0x10U)),16);
    bufp->fullCData(oldp+974,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h299493e7__0)
                                ? 0xfU : 0U)),4);
    bufp->fullCData(oldp+975,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+976,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+977,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullCData(oldp+978,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),4);
    bufp->fullIData(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w),32);
    bufp->fullBit(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullIData(oldp+981,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),30);
    bufp->fullIData(oldp+982,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),29);
    bufp->fullBit(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel));
    bufp->fullBit(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel));
    bufp->fullBit(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable));
    bufp->fullBit(oldp+986,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel))));
    bufp->fullBit(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_psel));
    bufp->fullBit(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullCData(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullCData(oldp+996,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullIData(oldp+997,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullBit(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullIData(oldp+1000,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullIData(oldp+1001,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+1006,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                          >> 1U))),13);
    bufp->fullSData(oldp+1007,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                           >> 0xcU))),13);
    bufp->fullCData(oldp+1008,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                      >> 0xaU))),2);
    bufp->fullCData(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_double),3);
    bufp->fullIData(oldp+1010,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullCData(oldp+1011,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),3);
    bufp->fullCData(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullBit(oldp+1014,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1015,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullSData(oldp+1016,(vlSelf->ysyxSoCFull__DOT___asic_sdram_a),14);
    bufp->fullBit(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_bready));
    bufp->fullBit(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_rready));
    bufp->fullBit(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1023,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))));
    bufp->fullCData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19),4);
    bufp->fullBit(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4));
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_bready));
    bufp->fullBit(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_rready));
    bufp->fullBit(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAROI_in_0_arready_T_4));
    bufp->fullBit(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1069,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1070,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1071,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1072,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1073,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1074,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1075,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1076,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1077,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1078,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1079,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1080,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1081,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1082,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1083,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1084,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1085,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1086,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1087,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1088,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1089,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1090,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1091,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1092,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1093,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1094,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1095,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1096,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1097,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1098,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1099,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1100,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__stall));
    bufp->fullBit(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_r_ready_i));
    bufp->fullIData(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__inst),32);
    bufp->fullBit(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_r_last_i));
    bufp->fullBit(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rd_wen));
    bufp->fullBit(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arb_axi_b_valid_i));
    bufp->fullBit(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arb_axi_r_valid_i));
    bufp->fullIData(oldp+1108,((IData)(vlSelf->__VdfgTmp_hc772c02b__0)),32);
    bufp->fullBit(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arb_axi_r_last_i));
    bufp->fullCData(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arb_axi_b_id_i),4);
    bufp->fullQData(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arb_axi_r_data_i),64);
    bufp->fullBit(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__lsu_rd_wen_r));
    bufp->fullBit(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__lsu_rd_wen_w));
    bufp->fullCData(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullCData(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate),2);
    bufp->fullBit(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullIData(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+1126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1127,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u0__DOT__sdram_single_u0__DOT__command),3);
    bufp->fullCData(oldp+1128,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_double_u1__DOT__sdram_single_u0__DOT__command),3);
    bufp->fullBit(oldp+1129,(vlSelf->clock));
    bufp->fullBit(oldp+1130,(vlSelf->reset));
    bufp->fullSData(oldp+1131,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1132,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1133,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1134,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1135,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1136,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1137,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1138,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1139,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1140,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1141,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1142,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1143,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1144,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1145,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1146,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1147,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1148,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1149,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1150,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1151,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din),4);
    bufp->fullBit(oldp+1153,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+1154,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel))));
    bufp->fullIData(oldp+1155,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1156,((1U & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_state))
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o)
                                     : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_state))
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o)
                                         : 0U)))));
    bufp->fullIData(oldp+1157,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_state))
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
    bufp->fullQData(oldp+1158,((((QData)((IData)(((1U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                   : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((1U 
                                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                               ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                               : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))))),64);
    bufp->fullQData(oldp+1160,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
                                                 ? 
                                                (((QData)((IData)(
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
    bufp->fullCData(oldp+1162,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullBit(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullIData(oldp+1164,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
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
                                                      ? (IData)(vlSelf->__VdfgTmp_hc772c02b__0)
                                                      : 0U))
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                     ? 
                                                    (((- (IData)(
                                                                 ((2U 
                                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                                                                  & (IData)(
                                                                            (vlSelf->__VdfgTmp_hc772c02b__0 
                                                                             >> 0xfU))))) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h56d28e90__0))
                                                     : 
                                                    (((- (IData)(
                                                                 ((2U 
                                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                                                                  & (IData)(
                                                                            (vlSelf->__VdfgTmp_hc772c02b__0 
                                                                             >> 7U))))) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h56d2889a__0)))))
                                                  : 0U))))),32);
    bufp->fullIData(oldp+1165,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)
                                 ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__wr_en)
                                          ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                                         [(0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r)]
                                          : 0U))),32);
    bufp->fullCData(oldp+1166,(((0x2000000U == (0xffff0000U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_addr_o))
                                 ? 0U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                           : 0U) | 
                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                           ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                               ? 0U
                                               : 3U)
                                           : 0U)))),2);
    bufp->fullBit(oldp+1167,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1168,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1171,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullBit(oldp+1173,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullBit(oldp+1174,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullCData(oldp+1175,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1176,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1177,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1178,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+1179,((vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h6b154942__0 
                                >> 0x1cU)),4);
    bufp->fullBit(oldp+1180,(vlSelf->ysyxSoCFull__DOT__psram__DOT__QPI_MODE));
    bufp->fullIData(oldp+1181,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data),32);
    bufp->fullIData(oldp+1182,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullIData(oldp+1183,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bswap),32);
    bufp->fullIData(oldp+1184,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                    >> 0x18U))))),32);
    bufp->fullCData(oldp+1185,(1U),3);
    bufp->fullBit(oldp+1186,(0U));
    bufp->fullBit(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+1196,(0U),4);
    bufp->fullCData(oldp+1197,(0U),8);
    bufp->fullBit(oldp+1198,(1U));
    bufp->fullBit(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1200,(0U),32);
    bufp->fullCData(oldp+1201,(0U),3);
    bufp->fullCData(oldp+1202,(0U),2);
    bufp->fullBit(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullQData(oldp+1204,(0ULL),64);
    bufp->fullBit(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullQData(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),64);
    bufp->fullBit(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_inst_t),32);
    bufp->fullIData(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_result_t),32);
    bufp->fullCData(oldp+1218,(1U),2);
    bufp->fullCData(oldp+1219,(2U),2);
    bufp->fullCData(oldp+1220,(2U),3);
    bufp->fullCData(oldp+1221,(3U),3);
    bufp->fullCData(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_cnt),8);
    bufp->fullBit(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_clint_aw_ready_i));
    bufp->fullBit(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_clint_w_ready_i));
    bufp->fullBit(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_clint_b_valid_i));
    bufp->fullCData(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_clint_b_resp_i),2);
    bufp->fullCData(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__u_ysyx_23060077_axi_xbar__DOT__axi_clint_b_id_i),4);
    bufp->fullBit(oldp+1228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__carry_flag));
    bufp->fullBit(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__signed_flag));
    bufp->fullCData(oldp+1230,(0U),5);
    bufp->fullIData(oldp+1231,(0xdU),32);
    bufp->fullIData(oldp+1232,(0xcU),32);
    bufp->fullIData(oldp+1233,(0x15U),32);
    bufp->fullIData(oldp+1234,(0x20U),32);
    bufp->fullIData(oldp+1235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__inst_t),32);
    bufp->fullCData(oldp+1236,(0x35U),8);
    bufp->fullCData(oldp+1237,(4U),3);
    bufp->fullBit(oldp+1238,(0U));
    bufp->fullBit(oldp+1239,(1U));
    bufp->fullCData(oldp+1240,(0x15U),8);
    bufp->fullCData(oldp+1241,(0xebU),8);
    bufp->fullCData(oldp+1242,(0x38U),8);
    bufp->fullIData(oldp+1243,(0x64U),32);
    bufp->fullIData(oldp+1244,(0x18U),32);
    bufp->fullIData(oldp+1245,(9U),32);
    bufp->fullIData(oldp+1246,(2U),32);
    bufp->fullIData(oldp+1247,(4U),32);
    bufp->fullIData(oldp+1248,(8U),32);
    bufp->fullIData(oldp+1249,(0x2000U),32);
    bufp->fullIData(oldp+1250,(0x2710U),32);
    bufp->fullIData(oldp+1251,(0x30cU),32);
    bufp->fullCData(oldp+1252,(7U),4);
    bufp->fullCData(oldp+1253,(3U),4);
    bufp->fullCData(oldp+1254,(5U),4);
    bufp->fullCData(oldp+1255,(4U),4);
    bufp->fullCData(oldp+1256,(6U),4);
    bufp->fullCData(oldp+1257,(2U),4);
    bufp->fullCData(oldp+1258,(1U),4);
    bufp->fullSData(oldp+1259,(0x20U),13);
    bufp->fullCData(oldp+1260,(8U),4);
    bufp->fullCData(oldp+1261,(9U),4);
    bufp->fullIData(oldp+1262,(0xaU),32);
    bufp->fullIData(oldp+1263,(6U),32);
    bufp->fullIData(oldp+1264,(0x11U),32);
    bufp->fullIData(oldp+1265,(0x30000000U),32);
    bufp->fullIData(oldp+1266,(0x3fffffffU),32);
    bufp->fullBit(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullIData(oldp+1268,(1U),32);
    bufp->fullCData(oldp+1269,(0xaU),4);
    bufp->fullIData(oldp+1270,(0xbU),32);
    bufp->fullIData(oldp+1271,(0x10U),32);
    bufp->fullIData(oldp+1272,(5U),32);
    bufp->fullCData(oldp+1273,(5U),3);
    bufp->fullIData(oldp+1274,(3U),32);
    bufp->fullCData(oldp+1275,(7U),3);
    bufp->fullCData(oldp+1276,(6U),3);
    bufp->fullIData(oldp+1277,(0x400000U),32);
}
