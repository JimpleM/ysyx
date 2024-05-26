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
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBus(c+934,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+935,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+936,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+937,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+938,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+939,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+940,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+941,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+942,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+943,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+944,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+945,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+946,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+947,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+948,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+949,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+950,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+951,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+952,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+953,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBus(c+934,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+935,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+936,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+937,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+938,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+939,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+940,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+941,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+942,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+943,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+944,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+945,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+946,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+947,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+948,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+949,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+950,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+951,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+952,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+953,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+1,"spi_sck", false,-1);
    tracep->declBus(c+974,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+975,"spi_mosi", false,-1);
    tracep->declBit(c+954,"spi_miso", false,-1);
    tracep->declBit(c+952,"uart_rx", false,-1);
    tracep->declBit(c+953,"uart_tx", false,-1);
    tracep->declBit(c+955,"psram_sck", false,-1);
    tracep->declBit(c+956,"psram_ce_n", false,-1);
    tracep->declBus(c+829,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+957,"sdram_clk", false,-1);
    tracep->declBit(c+10,"sdram_cke", false,-1);
    tracep->declBit(c+11,"sdram_cs", false,-1);
    tracep->declBit(c+12,"sdram_ras", false,-1);
    tracep->declBit(c+13,"sdram_cas", false,-1);
    tracep->declBit(c+14,"sdram_we", false,-1);
    tracep->declBus(c+15,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+16,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+17,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+18,"sdram_dq", false,-1, 15,0);
    tracep->declBus(c+934,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+935,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+936,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+937,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+938,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+939,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+940,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+941,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+942,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+943,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+944,"ps2_clk", false,-1);
    tracep->declBit(c+945,"ps2_data", false,-1);
    tracep->declBus(c+946,"vga_r", false,-1, 7,0);
    tracep->declBus(c+947,"vga_g", false,-1, 7,0);
    tracep->declBus(c+948,"vga_b", false,-1, 7,0);
    tracep->declBit(c+949,"vga_hsync", false,-1);
    tracep->declBit(c+950,"vga_vsync", false,-1);
    tracep->declBit(c+951,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBus(c+793,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+156,"in_psel", false,-1);
    tracep->declBit(c+157,"in_penable", false,-1);
    tracep->declBus(c+976,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+158,"in_pwrite", false,-1);
    tracep->declBus(c+159,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+160,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+830,"in_pready", false,-1);
    tracep->declBus(c+831,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+794,"in_pslverr", false,-1);
    tracep->declBus(c+793,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+156,"out_psel", false,-1);
    tracep->declBit(c+157,"out_penable", false,-1);
    tracep->declBus(c+976,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+158,"out_pwrite", false,-1);
    tracep->declBus(c+159,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+160,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+830,"out_pready", false,-1);
    tracep->declBus(c+831,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+794,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+156,"auto_in_psel", false,-1);
    tracep->declBit(c+157,"auto_in_penable", false,-1);
    tracep->declBit(c+158,"auto_in_pwrite", false,-1);
    tracep->declBus(c+793,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+976,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+159,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+160,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+830,"auto_in_pready", false,-1);
    tracep->declBit(c+794,"auto_in_pslverr", false,-1);
    tracep->declBus(c+831,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+666,"auto_out_6_psel", false,-1);
    tracep->declBit(c+667,"auto_out_6_penable", false,-1);
    tracep->declBit(c+158,"auto_out_6_pwrite", false,-1);
    tracep->declBus(c+793,"auto_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+976,"auto_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+159,"auto_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+160,"auto_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+725,"auto_out_6_pready", false,-1);
    tracep->declBit(c+977,"auto_out_6_pslverr", false,-1);
    tracep->declBus(c+19,"auto_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+668,"auto_out_5_psel", false,-1);
    tracep->declBit(c+669,"auto_out_5_penable", false,-1);
    tracep->declBit(c+158,"auto_out_5_pwrite", false,-1);
    tracep->declBus(c+795,"auto_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+976,"auto_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+159,"auto_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+160,"auto_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+978,"auto_out_5_pready", false,-1);
    tracep->declBit(c+979,"auto_out_5_pslverr", false,-1);
    tracep->declBus(c+980,"auto_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+670,"auto_out_4_psel", false,-1);
    tracep->declBit(c+671,"auto_out_4_penable", false,-1);
    tracep->declBit(c+158,"auto_out_4_pwrite", false,-1);
    tracep->declBus(c+796,"auto_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+976,"auto_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+159,"auto_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+160,"auto_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+981,"auto_out_4_pready", false,-1);
    tracep->declBit(c+982,"auto_out_4_pslverr", false,-1);
    tracep->declBus(c+983,"auto_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+672,"auto_out_3_psel", false,-1);
    tracep->declBit(c+673,"auto_out_3_penable", false,-1);
    tracep->declBit(c+158,"auto_out_3_pwrite", false,-1);
    tracep->declBus(c+796,"auto_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+976,"auto_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+159,"auto_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+160,"auto_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+984,"auto_out_3_pready", false,-1);
    tracep->declBit(c+985,"auto_out_3_pslverr", false,-1);
    tracep->declBus(c+986,"auto_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+797,"auto_out_2_psel", false,-1);
    tracep->declBit(c+674,"auto_out_2_penable", false,-1);
    tracep->declBit(c+158,"auto_out_2_pwrite", false,-1);
    tracep->declBus(c+793,"auto_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+976,"auto_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+159,"auto_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+160,"auto_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+958,"auto_out_2_pready", false,-1);
    tracep->declBit(c+977,"auto_out_2_pslverr", false,-1);
    tracep->declBus(c+161,"auto_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+798,"auto_out_1_psel", false,-1);
    tracep->declBit(c+799,"auto_out_1_penable", false,-1);
    tracep->declBit(c+158,"auto_out_1_pwrite", false,-1);
    tracep->declBus(c+796,"auto_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+976,"auto_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+159,"auto_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+160,"auto_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+800,"auto_out_1_pready", false,-1);
    tracep->declBit(c+977,"auto_out_1_pslverr", false,-1);
    tracep->declBus(c+959,"auto_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+801,"auto_out_0_psel", false,-1);
    tracep->declBit(c+802,"auto_out_0_penable", false,-1);
    tracep->declBit(c+158,"auto_out_0_pwrite", false,-1);
    tracep->declBus(c+795,"auto_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+976,"auto_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+159,"auto_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+160,"auto_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+675,"auto_out_0_pready", false,-1);
    tracep->declBit(c+977,"auto_out_0_pslverr", false,-1);
    tracep->declBus(c+162,"auto_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+803,"sel_0", false,-1);
    tracep->declBit(c+804,"sel_1", false,-1);
    tracep->declBit(c+805,"sel_2", false,-1);
    tracep->declBit(c+806,"sel_3", false,-1);
    tracep->declBit(c+807,"sel_4", false,-1);
    tracep->declBit(c+808,"sel_5", false,-1);
    tracep->declBit(c+809,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+163,"auto_in_awready", false,-1);
    tracep->declBit(c+164,"auto_in_awvalid", false,-1);
    tracep->declBus(c+165,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+166,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+167,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+163,"auto_in_wready", false,-1);
    tracep->declBit(c+168,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+169,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+171,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+832,"auto_in_bready", false,-1);
    tracep->declBit(c+833,"auto_in_bvalid", false,-1);
    tracep->declBus(c+172,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+676,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+173,"auto_in_arready", false,-1);
    tracep->declBit(c+174,"auto_in_arvalid", false,-1);
    tracep->declBus(c+175,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+176,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+177,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+834,"auto_in_rready", false,-1);
    tracep->declBit(c+835,"auto_in_rvalid", false,-1);
    tracep->declBus(c+178,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+677,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+676,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+156,"auto_out_psel", false,-1);
    tracep->declBit(c+157,"auto_out_penable", false,-1);
    tracep->declBit(c+158,"auto_out_pwrite", false,-1);
    tracep->declBus(c+793,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+159,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+160,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+830,"auto_out_pready", false,-1);
    tracep->declBit(c+794,"auto_out_pslverr", false,-1);
    tracep->declBus(c+831,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+157,"nodeOut_penable", false,-1);
    tracep->declBus(c+179,"state", false,-1, 1,0);
    tracep->declBit(c+173,"accept_read", false,-1);
    tracep->declBit(c+163,"accept_write", false,-1);
    tracep->declBit(c+180,"is_write_r", false,-1);
    tracep->declBit(c+158,"is_write", false,-1);
    tracep->declBus(c+178,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+172,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+181,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+182,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+183,"awaddr_reg", false,-1, 31,0);
    tracep->declQuad(c+184,"wdata_reg_r", false,-1, 63,0);
    tracep->declQuad(c+186,"wdata_reg", false,-1, 63,0);
    tracep->declBus(c+188,"wstrb_reg_r", false,-1, 7,0);
    tracep->declBus(c+189,"wstrb_reg", false,-1, 7,0);
    tracep->declBus(c+810,"resp", false,-1, 1,0);
    tracep->declBus(c+190,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+676,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+835,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+191,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+833,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+192,"auto_in_awready", false,-1);
    tracep->declBit(c+193,"auto_in_awvalid", false,-1);
    tracep->declBus(c+987,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+194,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+974,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+195,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+988,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+196,"auto_in_wready", false,-1);
    tracep->declBit(c+197,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+198,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+200,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+201,"auto_in_wlast", false,-1);
    tracep->declBit(c+202,"auto_in_bready", false,-1);
    tracep->declBit(c+836,"auto_in_bvalid", false,-1);
    tracep->declBus(c+837,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+679,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+203,"auto_in_arready", false,-1);
    tracep->declBit(c+204,"auto_in_arvalid", false,-1);
    tracep->declBus(c+987,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+205,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+974,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+206,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+988,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+207,"auto_in_rready", false,-1);
    tracep->declBit(c+838,"auto_in_rvalid", false,-1);
    tracep->declBus(c+839,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+680,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+960,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+840,"auto_in_rlast", false,-1);
    tracep->declBit(c+841,"auto_out_awready", false,-1);
    tracep->declBit(c+208,"auto_out_awvalid", false,-1);
    tracep->declBus(c+165,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+166,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+167,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+209,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+842,"auto_out_wready", false,-1);
    tracep->declBit(c+210,"auto_out_wvalid", false,-1);
    tracep->declQuad(c+169,"auto_out_wdata", false,-1, 63,0);
    tracep->declBus(c+171,"auto_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+211,"auto_out_wlast", false,-1);
    tracep->declBit(c+843,"auto_out_bready", false,-1);
    tracep->declBit(c+844,"auto_out_bvalid", false,-1);
    tracep->declBus(c+837,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+845,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+846,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+847,"auto_out_arready", false,-1);
    tracep->declBit(c+212,"auto_out_arvalid", false,-1);
    tracep->declBus(c+175,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+176,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+177,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+213,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+207,"auto_out_rready", false,-1);
    tracep->declBit(c+838,"auto_out_rvalid", false,-1);
    tracep->declBus(c+839,"auto_out_rid", false,-1, 3,0);
    tracep->declQuad(c+680,"auto_out_rdata", false,-1, 63,0);
    tracep->declBus(c+960,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+682,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+848,"auto_out_rlast", false,-1);
    tracep->declBit(c+210,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+214,"w_idle", false,-1);
    tracep->declBit(c+849,"in_awready", false,-1);
    tracep->declBit(c+215,"busy", false,-1);
    tracep->declBus(c+216,"r_addr", false,-1, 31,0);
    tracep->declBus(c+217,"r_len", false,-1, 7,0);
    tracep->declBus(c+218,"len", false,-1, 7,0);
    tracep->declBus(c+219,"addr", false,-1, 31,0);
    tracep->declBit(c+220,"busy_1", false,-1);
    tracep->declBus(c+221,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+222,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+223,"len_1", false,-1, 7,0);
    tracep->declBus(c+224,"addr_1", false,-1, 31,0);
    tracep->declBit(c+225,"wbeats_latched", false,-1);
    tracep->declBit(c+208,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+226,"wbeats_valid", false,-1);
    tracep->declBus(c+227,"w_counter", false,-1, 8,0);
    tracep->declBus(c+228,"w_todo", false,-1, 8,0);
    tracep->declBit(c+211,"w_last", false,-1);
    tracep->declBit(c+843,"nodeOut_bready", false,-1);
    tracep->declBus(c+229,"error_0", false,-1, 1,0);
    tracep->declBus(c+230,"error_1", false,-1, 1,0);
    tracep->declBus(c+231,"error_2", false,-1, 1,0);
    tracep->declBus(c+232,"error_3", false,-1, 1,0);
    tracep->declBus(c+233,"error_4", false,-1, 1,0);
    tracep->declBus(c+234,"error_5", false,-1, 1,0);
    tracep->declBus(c+235,"error_6", false,-1, 1,0);
    tracep->declBus(c+236,"error_7", false,-1, 1,0);
    tracep->declBus(c+237,"error_8", false,-1, 1,0);
    tracep->declBus(c+238,"error_9", false,-1, 1,0);
    tracep->declBus(c+239,"error_10", false,-1, 1,0);
    tracep->declBus(c+240,"error_11", false,-1, 1,0);
    tracep->declBus(c+241,"error_12", false,-1, 1,0);
    tracep->declBus(c+242,"error_13", false,-1, 1,0);
    tracep->declBus(c+243,"error_14", false,-1, 1,0);
    tracep->declBus(c+244,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+203,"io_enq_ready", false,-1);
    tracep->declBit(c+204,"io_enq_valid", false,-1);
    tracep->declBus(c+987,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+205,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+974,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+206,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+988,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+850,"io_deq_ready", false,-1);
    tracep->declBit(c+212,"io_deq_valid", false,-1);
    tracep->declBus(c+175,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+245,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+246,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+177,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+247,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+248,"ram", false,-1, 48,0);
    tracep->declBit(c+250,"full", false,-1);
    tracep->declBit(c+212,"io_deq_valid_0", false,-1);
    tracep->declBit(c+851,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+192,"io_enq_ready", false,-1);
    tracep->declBit(c+193,"io_enq_valid", false,-1);
    tracep->declBus(c+987,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+194,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+974,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+195,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+988,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+852,"io_deq_ready", false,-1);
    tracep->declBit(c+251,"io_deq_valid", false,-1);
    tracep->declBus(c+165,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+252,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+253,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+167,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+254,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+255,"ram", false,-1, 48,0);
    tracep->declBit(c+257,"full", false,-1);
    tracep->declBit(c+251,"io_deq_valid_0", false,-1);
    tracep->declBit(c+853,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+196,"io_enq_ready", false,-1);
    tracep->declBit(c+197,"io_enq_valid", false,-1);
    tracep->declQuad(c+198,"io_enq_bits_data", false,-1, 63,0);
    tracep->declBus(c+200,"io_enq_bits_strb", false,-1, 7,0);
    tracep->declBit(c+201,"io_enq_bits_last", false,-1);
    tracep->declBit(c+854,"io_deq_ready", false,-1);
    tracep->declBit(c+258,"io_deq_valid", false,-1);
    tracep->declQuad(c+169,"io_deq_bits_data", false,-1, 63,0);
    tracep->declBus(c+171,"io_deq_bits_strb", false,-1, 7,0);
    tracep->declBit(c+259,"io_deq_bits_last", false,-1);
    tracep->declArray(c+260,"ram", false,-1, 72,0);
    tracep->declBit(c+263,"full", false,-1);
    tracep->declBit(c+258,"io_deq_valid_0", false,-1);
    tracep->declBit(c+855,"do_enq", false,-1);
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
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+856,"auto_in_awready", false,-1);
    tracep->declBit(c+264,"auto_in_awvalid", false,-1);
    tracep->declBus(c+165,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+265,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+683,"auto_in_wready", false,-1);
    tracep->declBit(c+266,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+169,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+171,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+857,"auto_in_bready", false,-1);
    tracep->declBit(c+267,"auto_in_bvalid", false,-1);
    tracep->declBus(c+268,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+269,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+858,"auto_in_arready", false,-1);
    tracep->declBit(c+270,"auto_in_arvalid", false,-1);
    tracep->declBus(c+175,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+271,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+859,"auto_in_rready", false,-1);
    tracep->declBit(c+272,"auto_in_rvalid", false,-1);
    tracep->declBus(c+273,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+274,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+276,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+858,"nodeIn_arready", false,-1);
    tracep->declBit(c+856,"nodeIn_awready", false,-1);
    tracep->declBit(c+277,"w_sel0", false,-1);
    tracep->declBit(c+267,"w_full", false,-1);
    tracep->declBus(c+268,"w_id", false,-1, 3,0);
    tracep->declBit(c+278,"r_sel1", false,-1);
    tracep->declBit(c+279,"w_sel1", false,-1);
    tracep->declBit(c+272,"r_full", false,-1);
    tracep->declBus(c+273,"r_id", false,-1, 3,0);
    tracep->declBit(c+860,"ren", false,-1);
    tracep->declBit(c+280,"rdata_REG", false,-1);
    tracep->declBus(c+281,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+282,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+283,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+284,"rdata_r3", false,-1, 7,0);
    tracep->declBus(c+285,"rdata_r4", false,-1, 7,0);
    tracep->declBus(c+286,"rdata_r5", false,-1, 7,0);
    tracep->declBus(c+287,"rdata_r6", false,-1, 7,0);
    tracep->declBus(c+288,"rdata_r7", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+289,"R0_addr", false,-1, 9,0);
    tracep->declBit(c+860,"R0_en", false,-1);
    tracep->declBit(c+932,"R0_clk", false,-1);
    tracep->declQuad(c+290,"R0_data", false,-1, 63,0);
    tracep->declBus(c+292,"W0_addr", false,-1, 9,0);
    tracep->declBit(c+861,"W0_en", false,-1);
    tracep->declBit(c+932,"W0_clk", false,-1);
    tracep->declQuad(c+169,"W0_data", false,-1, 63,0);
    tracep->declBus(c+171,"W0_mask", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+192,"auto_in_awready", false,-1);
    tracep->declBit(c+193,"auto_in_awvalid", false,-1);
    tracep->declBus(c+987,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+194,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+974,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+195,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+988,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+196,"auto_in_wready", false,-1);
    tracep->declBit(c+197,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+198,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+200,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+201,"auto_in_wlast", false,-1);
    tracep->declBit(c+202,"auto_in_bready", false,-1);
    tracep->declBit(c+836,"auto_in_bvalid", false,-1);
    tracep->declBus(c+837,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+679,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+203,"auto_in_arready", false,-1);
    tracep->declBit(c+204,"auto_in_arvalid", false,-1);
    tracep->declBus(c+987,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+205,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+974,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+206,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+988,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+207,"auto_in_rready", false,-1);
    tracep->declBit(c+838,"auto_in_rvalid", false,-1);
    tracep->declBus(c+839,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+680,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+960,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+840,"auto_in_rlast", false,-1);
    tracep->declBit(c+192,"auto_out_awready", false,-1);
    tracep->declBit(c+193,"auto_out_awvalid", false,-1);
    tracep->declBus(c+987,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+194,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+974,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+195,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+988,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+196,"auto_out_wready", false,-1);
    tracep->declBit(c+197,"auto_out_wvalid", false,-1);
    tracep->declQuad(c+198,"auto_out_wdata", false,-1, 63,0);
    tracep->declBus(c+200,"auto_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+201,"auto_out_wlast", false,-1);
    tracep->declBit(c+202,"auto_out_bready", false,-1);
    tracep->declBit(c+836,"auto_out_bvalid", false,-1);
    tracep->declBus(c+837,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+679,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+203,"auto_out_arready", false,-1);
    tracep->declBit(c+204,"auto_out_arvalid", false,-1);
    tracep->declBus(c+987,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+205,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+974,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+206,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+988,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+207,"auto_out_rready", false,-1);
    tracep->declBit(c+838,"auto_out_rvalid", false,-1);
    tracep->declBus(c+839,"auto_out_rid", false,-1, 3,0);
    tracep->declQuad(c+680,"auto_out_rdata", false,-1, 63,0);
    tracep->declBus(c+960,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+840,"auto_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+862,"auto_in_awready", false,-1);
    tracep->declBit(c+293,"auto_in_awvalid", false,-1);
    tracep->declBus(c+165,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+166,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+167,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+842,"auto_in_wready", false,-1);
    tracep->declBit(c+210,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+169,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+171,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+211,"auto_in_wlast", false,-1);
    tracep->declBit(c+843,"auto_in_bready", false,-1);
    tracep->declBit(c+844,"auto_in_bvalid", false,-1);
    tracep->declBus(c+837,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+845,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+863,"auto_in_arready", false,-1);
    tracep->declBit(c+294,"auto_in_arvalid", false,-1);
    tracep->declBus(c+175,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+176,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+177,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+207,"auto_in_rready", false,-1);
    tracep->declBit(c+838,"auto_in_rvalid", false,-1);
    tracep->declBus(c+839,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+680,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+960,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+848,"auto_in_rlast", false,-1);
    tracep->declBit(c+856,"auto_out_2_awready", false,-1);
    tracep->declBit(c+264,"auto_out_2_awvalid", false,-1);
    tracep->declBus(c+165,"auto_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+265,"auto_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+683,"auto_out_2_wready", false,-1);
    tracep->declBit(c+266,"auto_out_2_wvalid", false,-1);
    tracep->declQuad(c+169,"auto_out_2_wdata", false,-1, 63,0);
    tracep->declBus(c+171,"auto_out_2_wstrb", false,-1, 7,0);
    tracep->declBit(c+857,"auto_out_2_bready", false,-1);
    tracep->declBit(c+267,"auto_out_2_bvalid", false,-1);
    tracep->declBus(c+268,"auto_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+269,"auto_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+858,"auto_out_2_arready", false,-1);
    tracep->declBit(c+270,"auto_out_2_arvalid", false,-1);
    tracep->declBus(c+175,"auto_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+271,"auto_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+859,"auto_out_2_rready", false,-1);
    tracep->declBit(c+272,"auto_out_2_rvalid", false,-1);
    tracep->declBus(c+273,"auto_out_2_rid", false,-1, 3,0);
    tracep->declQuad(c+274,"auto_out_2_rdata", false,-1, 63,0);
    tracep->declBus(c+276,"auto_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+295,"auto_out_1_awvalid", false,-1);
    tracep->declBit(c+296,"auto_out_1_wvalid", false,-1);
    tracep->declBit(c+297,"auto_out_1_arready", false,-1);
    tracep->declBit(c+298,"auto_out_1_arvalid", false,-1);
    tracep->declBus(c+175,"auto_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+299,"auto_out_1_araddr", false,-1, 29,0);
    tracep->declBus(c+177,"auto_out_1_arsize", false,-1, 2,0);
    tracep->declBit(c+684,"auto_out_1_rready", false,-1);
    tracep->declBit(c+300,"auto_out_1_rvalid", false,-1);
    tracep->declBus(c+301,"auto_out_1_rid", false,-1, 3,0);
    tracep->declQuad(c+302,"auto_out_1_rdata", false,-1, 63,0);
    tracep->declBit(c+163,"auto_out_0_awready", false,-1);
    tracep->declBit(c+164,"auto_out_0_awvalid", false,-1);
    tracep->declBus(c+165,"auto_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+166,"auto_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+167,"auto_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+163,"auto_out_0_wready", false,-1);
    tracep->declBit(c+168,"auto_out_0_wvalid", false,-1);
    tracep->declQuad(c+169,"auto_out_0_wdata", false,-1, 63,0);
    tracep->declBus(c+171,"auto_out_0_wstrb", false,-1, 7,0);
    tracep->declBit(c+832,"auto_out_0_bready", false,-1);
    tracep->declBit(c+833,"auto_out_0_bvalid", false,-1);
    tracep->declBus(c+172,"auto_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+676,"auto_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+173,"auto_out_0_arready", false,-1);
    tracep->declBit(c+174,"auto_out_0_arvalid", false,-1);
    tracep->declBus(c+175,"auto_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+176,"auto_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+177,"auto_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+834,"auto_out_0_rready", false,-1);
    tracep->declBit(c+835,"auto_out_0_rvalid", false,-1);
    tracep->declBus(c+178,"auto_out_0_rid", false,-1, 3,0);
    tracep->declQuad(c+677,"auto_out_0_rdata", false,-1, 63,0);
    tracep->declBus(c+676,"auto_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+844,"in_0_bvalid", false,-1);
    tracep->declBit(c+838,"in_0_rvalid", false,-1);
    tracep->declBit(c+862,"nodeIn_awready", false,-1);
    tracep->declBit(c+304,"requestARIO_0_0", false,-1);
    tracep->declBit(c+305,"requestARIO_0_1", false,-1);
    tracep->declBit(c+306,"requestARIO_0_2", false,-1);
    tracep->declBit(c+307,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+308,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+309,"requestAWIO_0_2", false,-1);
    tracep->declBit(c+310,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+311,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+312,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+313,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+314,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+315,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+316,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+317,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+318,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+319,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+320,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+321,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+322,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+323,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+324,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+325,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+326,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+327,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+328,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+329,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+330,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+331,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+332,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+333,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+334,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+335,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+336,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+337,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+338,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+339,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+340,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+341,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+342,"latched", false,-1);
    tracep->declBit(c+343,"in_0_awvalid", false,-1);
    tracep->declBit(c+344,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+345,"in_0_wvalid", false,-1);
    tracep->declBit(c+346,"idle_3", false,-1);
    tracep->declBit(c+864,"anyValid", false,-1);
    tracep->declBus(c+865,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+347,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+866,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+867,"prefixOR_1", false,-1);
    tracep->declBit(c+868,"winner_3_1", false,-1);
    tracep->declBit(c+869,"winner_3_2", false,-1);
    tracep->declBit(c+348,"state_3_0", false,-1);
    tracep->declBit(c+349,"state_3_1", false,-1);
    tracep->declBit(c+350,"state_3_2", false,-1);
    tracep->declBit(c+870,"muxState_3_0", false,-1);
    tracep->declBit(c+871,"muxState_3_1", false,-1);
    tracep->declBit(c+872,"muxState_3_2", false,-1);
    tracep->declBit(c+351,"idle_4", false,-1);
    tracep->declBit(c+873,"anyValid_1", false,-1);
    tracep->declBus(c+874,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+352,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+875,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+876,"winner_4_0", false,-1);
    tracep->declBit(c+877,"winner_4_2", false,-1);
    tracep->declBit(c+353,"state_4_0", false,-1);
    tracep->declBit(c+354,"state_4_2", false,-1);
    tracep->declBit(c+878,"muxState_4_0", false,-1);
    tracep->declBit(c+879,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+355,"io_enq_ready", false,-1);
    tracep->declBit(c+344,"io_enq_valid", false,-1);
    tracep->declBus(c+356,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+880,"io_deq_ready", false,-1);
    tracep->declBit(c+357,"io_deq_valid", false,-1);
    tracep->declBus(c+358,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+359,"wrap", false,-1);
    tracep->declBit(c+360,"wrap_1", false,-1);
    tracep->declBit(c+361,"maybe_full", false,-1);
    tracep->declBit(c+362,"ptr_match", false,-1);
    tracep->declBit(c+363,"empty", false,-1);
    tracep->declBit(c+364,"full", false,-1);
    tracep->declBit(c+357,"io_deq_valid_0", false,-1);
    tracep->declBit(c+881,"do_deq", false,-1);
    tracep->declBit(c+882,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+360,"R0_addr", false,-1);
    tracep->declBit(c+975,"R0_en", false,-1);
    tracep->declBit(c+932,"R0_clk", false,-1);
    tracep->declBus(c+365,"R0_data", false,-1, 2,0);
    tracep->declBit(c+359,"W0_addr", false,-1);
    tracep->declBit(c+882,"W0_en", false,-1);
    tracep->declBit(c+932,"W0_clk", false,-1);
    tracep->declBus(c+356,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+366+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+841,"auto_in_awready", false,-1);
    tracep->declBit(c+208,"auto_in_awvalid", false,-1);
    tracep->declBus(c+165,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+166,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+167,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+209,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+842,"auto_in_wready", false,-1);
    tracep->declBit(c+210,"auto_in_wvalid", false,-1);
    tracep->declQuad(c+169,"auto_in_wdata", false,-1, 63,0);
    tracep->declBus(c+171,"auto_in_wstrb", false,-1, 7,0);
    tracep->declBit(c+211,"auto_in_wlast", false,-1);
    tracep->declBit(c+843,"auto_in_bready", false,-1);
    tracep->declBit(c+844,"auto_in_bvalid", false,-1);
    tracep->declBus(c+837,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+845,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+846,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+847,"auto_in_arready", false,-1);
    tracep->declBit(c+212,"auto_in_arvalid", false,-1);
    tracep->declBus(c+175,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+176,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+177,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+213,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+207,"auto_in_rready", false,-1);
    tracep->declBit(c+838,"auto_in_rvalid", false,-1);
    tracep->declBus(c+839,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+680,"auto_in_rdata", false,-1, 63,0);
    tracep->declBus(c+960,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+682,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+848,"auto_in_rlast", false,-1);
    tracep->declBit(c+862,"auto_out_awready", false,-1);
    tracep->declBit(c+293,"auto_out_awvalid", false,-1);
    tracep->declBus(c+165,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+166,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+167,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+842,"auto_out_wready", false,-1);
    tracep->declBit(c+210,"auto_out_wvalid", false,-1);
    tracep->declQuad(c+169,"auto_out_wdata", false,-1, 63,0);
    tracep->declBus(c+171,"auto_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+211,"auto_out_wlast", false,-1);
    tracep->declBit(c+843,"auto_out_bready", false,-1);
    tracep->declBit(c+844,"auto_out_bvalid", false,-1);
    tracep->declBus(c+837,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+845,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+863,"auto_out_arready", false,-1);
    tracep->declBit(c+294,"auto_out_arvalid", false,-1);
    tracep->declBus(c+175,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+176,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+177,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+207,"auto_out_rready", false,-1);
    tracep->declBit(c+838,"auto_out_rvalid", false,-1);
    tracep->declBus(c+839,"auto_out_rid", false,-1, 3,0);
    tracep->declQuad(c+680,"auto_out_rdata", false,-1, 63,0);
    tracep->declBus(c+960,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+848,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+368,"io_enq_ready", false,-1);
    tracep->declBit(c+685,"io_enq_valid", false,-1);
    tracep->declBit(c+213,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+883,"io_deq_ready", false,-1);
    tracep->declBit(c+369,"io_deq_valid", false,-1);
    tracep->declBit(c+370,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+370,"ram_real_last", false,-1);
    tracep->declBit(c+369,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+371,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+372,"io_enq_ready", false,-1);
    tracep->declBit(c+686,"io_enq_valid", false,-1);
    tracep->declBit(c+213,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+884,"io_deq_ready", false,-1);
    tracep->declBit(c+373,"io_deq_valid", false,-1);
    tracep->declBit(c+374,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+374,"ram_real_last", false,-1);
    tracep->declBit(c+373,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+375,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+376,"io_enq_ready", false,-1);
    tracep->declBit(c+687,"io_enq_valid", false,-1);
    tracep->declBit(c+213,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+885,"io_deq_ready", false,-1);
    tracep->declBit(c+377,"io_deq_valid", false,-1);
    tracep->declBit(c+378,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+378,"ram_real_last", false,-1);
    tracep->declBit(c+377,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+379,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+380,"io_enq_ready", false,-1);
    tracep->declBit(c+688,"io_enq_valid", false,-1);
    tracep->declBit(c+213,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+886,"io_deq_ready", false,-1);
    tracep->declBit(c+381,"io_deq_valid", false,-1);
    tracep->declBit(c+382,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+382,"ram_real_last", false,-1);
    tracep->declBit(c+381,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+383,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+384,"io_enq_ready", false,-1);
    tracep->declBit(c+689,"io_enq_valid", false,-1);
    tracep->declBit(c+213,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+887,"io_deq_ready", false,-1);
    tracep->declBit(c+385,"io_deq_valid", false,-1);
    tracep->declBit(c+386,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+386,"ram_real_last", false,-1);
    tracep->declBit(c+385,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+387,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+388,"io_enq_ready", false,-1);
    tracep->declBit(c+690,"io_enq_valid", false,-1);
    tracep->declBit(c+213,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+888,"io_deq_ready", false,-1);
    tracep->declBit(c+389,"io_deq_valid", false,-1);
    tracep->declBit(c+390,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+390,"ram_real_last", false,-1);
    tracep->declBit(c+389,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+391,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+392,"io_enq_ready", false,-1);
    tracep->declBit(c+691,"io_enq_valid", false,-1);
    tracep->declBit(c+213,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+889,"io_deq_ready", false,-1);
    tracep->declBit(c+393,"io_deq_valid", false,-1);
    tracep->declBit(c+394,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+394,"ram_real_last", false,-1);
    tracep->declBit(c+393,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+395,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+396,"io_enq_ready", false,-1);
    tracep->declBit(c+692,"io_enq_valid", false,-1);
    tracep->declBit(c+213,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+890,"io_deq_ready", false,-1);
    tracep->declBit(c+397,"io_deq_valid", false,-1);
    tracep->declBit(c+398,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+398,"ram_real_last", false,-1);
    tracep->declBit(c+397,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+399,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+400,"io_enq_ready", false,-1);
    tracep->declBit(c+693,"io_enq_valid", false,-1);
    tracep->declBit(c+209,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+891,"io_deq_ready", false,-1);
    tracep->declBit(c+401,"io_deq_valid", false,-1);
    tracep->declBit(c+402,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+402,"ram_real_last", false,-1);
    tracep->declBit(c+401,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+403,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+404,"io_enq_ready", false,-1);
    tracep->declBit(c+694,"io_enq_valid", false,-1);
    tracep->declBit(c+209,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+892,"io_deq_ready", false,-1);
    tracep->declBit(c+405,"io_deq_valid", false,-1);
    tracep->declBit(c+406,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+406,"ram_real_last", false,-1);
    tracep->declBit(c+405,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+407,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+408,"io_enq_ready", false,-1);
    tracep->declBit(c+695,"io_enq_valid", false,-1);
    tracep->declBit(c+209,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+893,"io_deq_ready", false,-1);
    tracep->declBit(c+409,"io_deq_valid", false,-1);
    tracep->declBit(c+410,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+410,"ram_real_last", false,-1);
    tracep->declBit(c+409,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+411,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+412,"io_enq_ready", false,-1);
    tracep->declBit(c+696,"io_enq_valid", false,-1);
    tracep->declBit(c+209,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+894,"io_deq_ready", false,-1);
    tracep->declBit(c+413,"io_deq_valid", false,-1);
    tracep->declBit(c+414,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+414,"ram_real_last", false,-1);
    tracep->declBit(c+413,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+415,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+416,"io_enq_ready", false,-1);
    tracep->declBit(c+697,"io_enq_valid", false,-1);
    tracep->declBit(c+213,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+895,"io_deq_ready", false,-1);
    tracep->declBit(c+417,"io_deq_valid", false,-1);
    tracep->declBit(c+418,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+418,"ram_real_last", false,-1);
    tracep->declBit(c+417,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+419,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+420,"io_enq_ready", false,-1);
    tracep->declBit(c+698,"io_enq_valid", false,-1);
    tracep->declBit(c+209,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+896,"io_deq_ready", false,-1);
    tracep->declBit(c+421,"io_deq_valid", false,-1);
    tracep->declBit(c+422,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+422,"ram_real_last", false,-1);
    tracep->declBit(c+421,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+423,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+424,"io_enq_ready", false,-1);
    tracep->declBit(c+699,"io_enq_valid", false,-1);
    tracep->declBit(c+209,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+897,"io_deq_ready", false,-1);
    tracep->declBit(c+425,"io_deq_valid", false,-1);
    tracep->declBit(c+426,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+426,"ram_real_last", false,-1);
    tracep->declBit(c+425,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+427,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+428,"io_enq_ready", false,-1);
    tracep->declBit(c+700,"io_enq_valid", false,-1);
    tracep->declBit(c+209,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+898,"io_deq_ready", false,-1);
    tracep->declBit(c+429,"io_deq_valid", false,-1);
    tracep->declBit(c+430,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+430,"ram_real_last", false,-1);
    tracep->declBit(c+429,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+431,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+432,"io_enq_ready", false,-1);
    tracep->declBit(c+701,"io_enq_valid", false,-1);
    tracep->declBit(c+209,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+899,"io_deq_ready", false,-1);
    tracep->declBit(c+433,"io_deq_valid", false,-1);
    tracep->declBit(c+434,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+434,"ram_real_last", false,-1);
    tracep->declBit(c+433,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+435,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+436,"io_enq_ready", false,-1);
    tracep->declBit(c+702,"io_enq_valid", false,-1);
    tracep->declBit(c+209,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+900,"io_deq_ready", false,-1);
    tracep->declBit(c+437,"io_deq_valid", false,-1);
    tracep->declBit(c+438,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+438,"ram_real_last", false,-1);
    tracep->declBit(c+437,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+439,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+440,"io_enq_ready", false,-1);
    tracep->declBit(c+703,"io_enq_valid", false,-1);
    tracep->declBit(c+209,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+901,"io_deq_ready", false,-1);
    tracep->declBit(c+441,"io_deq_valid", false,-1);
    tracep->declBit(c+442,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+442,"ram_real_last", false,-1);
    tracep->declBit(c+441,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+443,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+444,"io_enq_ready", false,-1);
    tracep->declBit(c+704,"io_enq_valid", false,-1);
    tracep->declBit(c+209,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+902,"io_deq_ready", false,-1);
    tracep->declBit(c+445,"io_deq_valid", false,-1);
    tracep->declBit(c+446,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+446,"ram_real_last", false,-1);
    tracep->declBit(c+445,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+447,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+448,"io_enq_ready", false,-1);
    tracep->declBit(c+705,"io_enq_valid", false,-1);
    tracep->declBit(c+209,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+903,"io_deq_ready", false,-1);
    tracep->declBit(c+449,"io_deq_valid", false,-1);
    tracep->declBit(c+450,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+450,"ram_real_last", false,-1);
    tracep->declBit(c+449,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+451,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+452,"io_enq_ready", false,-1);
    tracep->declBit(c+706,"io_enq_valid", false,-1);
    tracep->declBit(c+209,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+904,"io_deq_ready", false,-1);
    tracep->declBit(c+453,"io_deq_valid", false,-1);
    tracep->declBit(c+454,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+454,"ram_real_last", false,-1);
    tracep->declBit(c+453,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+455,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+456,"io_enq_ready", false,-1);
    tracep->declBit(c+707,"io_enq_valid", false,-1);
    tracep->declBit(c+209,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+905,"io_deq_ready", false,-1);
    tracep->declBit(c+457,"io_deq_valid", false,-1);
    tracep->declBit(c+458,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+458,"ram_real_last", false,-1);
    tracep->declBit(c+457,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+459,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+460,"io_enq_ready", false,-1);
    tracep->declBit(c+708,"io_enq_valid", false,-1);
    tracep->declBit(c+213,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+906,"io_deq_ready", false,-1);
    tracep->declBit(c+461,"io_deq_valid", false,-1);
    tracep->declBit(c+462,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+462,"ram_real_last", false,-1);
    tracep->declBit(c+461,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+463,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+464,"io_enq_ready", false,-1);
    tracep->declBit(c+709,"io_enq_valid", false,-1);
    tracep->declBit(c+209,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+907,"io_deq_ready", false,-1);
    tracep->declBit(c+465,"io_deq_valid", false,-1);
    tracep->declBit(c+466,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+466,"ram_real_last", false,-1);
    tracep->declBit(c+465,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+467,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+468,"io_enq_ready", false,-1);
    tracep->declBit(c+710,"io_enq_valid", false,-1);
    tracep->declBit(c+209,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+908,"io_deq_ready", false,-1);
    tracep->declBit(c+469,"io_deq_valid", false,-1);
    tracep->declBit(c+470,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+470,"ram_real_last", false,-1);
    tracep->declBit(c+469,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+471,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+472,"io_enq_ready", false,-1);
    tracep->declBit(c+711,"io_enq_valid", false,-1);
    tracep->declBit(c+213,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+909,"io_deq_ready", false,-1);
    tracep->declBit(c+473,"io_deq_valid", false,-1);
    tracep->declBit(c+474,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+474,"ram_real_last", false,-1);
    tracep->declBit(c+473,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+475,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+476,"io_enq_ready", false,-1);
    tracep->declBit(c+712,"io_enq_valid", false,-1);
    tracep->declBit(c+213,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+910,"io_deq_ready", false,-1);
    tracep->declBit(c+477,"io_deq_valid", false,-1);
    tracep->declBit(c+478,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+478,"ram_real_last", false,-1);
    tracep->declBit(c+477,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+479,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+480,"io_enq_ready", false,-1);
    tracep->declBit(c+713,"io_enq_valid", false,-1);
    tracep->declBit(c+213,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+911,"io_deq_ready", false,-1);
    tracep->declBit(c+481,"io_deq_valid", false,-1);
    tracep->declBit(c+482,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+482,"ram_real_last", false,-1);
    tracep->declBit(c+481,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+483,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+484,"io_enq_ready", false,-1);
    tracep->declBit(c+714,"io_enq_valid", false,-1);
    tracep->declBit(c+213,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+912,"io_deq_ready", false,-1);
    tracep->declBit(c+485,"io_deq_valid", false,-1);
    tracep->declBit(c+486,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+486,"ram_real_last", false,-1);
    tracep->declBit(c+485,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+487,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+488,"io_enq_ready", false,-1);
    tracep->declBit(c+715,"io_enq_valid", false,-1);
    tracep->declBit(c+213,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+913,"io_deq_ready", false,-1);
    tracep->declBit(c+489,"io_deq_valid", false,-1);
    tracep->declBit(c+490,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+490,"ram_real_last", false,-1);
    tracep->declBit(c+489,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+491,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+492,"io_enq_ready", false,-1);
    tracep->declBit(c+716,"io_enq_valid", false,-1);
    tracep->declBit(c+213,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+914,"io_deq_ready", false,-1);
    tracep->declBit(c+493,"io_deq_valid", false,-1);
    tracep->declBit(c+494,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+494,"ram_real_last", false,-1);
    tracep->declBit(c+493,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+495,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+961,"reset", false,-1);
    tracep->declBit(c+192,"auto_master_out_awready", false,-1);
    tracep->declBit(c+193,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+987,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+194,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+974,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+195,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+988,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+196,"auto_master_out_wready", false,-1);
    tracep->declBit(c+197,"auto_master_out_wvalid", false,-1);
    tracep->declQuad(c+198,"auto_master_out_wdata", false,-1, 63,0);
    tracep->declBus(c+200,"auto_master_out_wstrb", false,-1, 7,0);
    tracep->declBit(c+201,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+202,"auto_master_out_bready", false,-1);
    tracep->declBit(c+836,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+837,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+679,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+203,"auto_master_out_arready", false,-1);
    tracep->declBit(c+204,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+987,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+205,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+974,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+206,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+988,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+207,"auto_master_out_rready", false,-1);
    tracep->declBit(c+838,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+839,"auto_master_out_rid", false,-1, 3,0);
    tracep->declQuad(c+680,"auto_master_out_rdata", false,-1, 63,0);
    tracep->declBus(c+960,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+840,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+961,"reset", false,-1);
    tracep->declBit(c+977,"io_interrupt", false,-1);
    tracep->declBit(c+192,"io_master_awready", false,-1);
    tracep->declBit(c+193,"io_master_awvalid", false,-1);
    tracep->declBus(c+194,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+987,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+974,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+195,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+988,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+196,"io_master_wready", false,-1);
    tracep->declBit(c+197,"io_master_wvalid", false,-1);
    tracep->declQuad(c+198,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+200,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+201,"io_master_wlast", false,-1);
    tracep->declBit(c+202,"io_master_bready", false,-1);
    tracep->declBit(c+836,"io_master_bvalid", false,-1);
    tracep->declBus(c+679,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+837,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+203,"io_master_arready", false,-1);
    tracep->declBit(c+204,"io_master_arvalid", false,-1);
    tracep->declBus(c+205,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+987,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+974,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+206,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+988,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+207,"io_master_rready", false,-1);
    tracep->declBit(c+838,"io_master_rvalid", false,-1);
    tracep->declBus(c+960,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+680,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+840,"io_master_rlast", false,-1);
    tracep->declBus(c+839,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+989,"io_slave_awready", false,-1);
    tracep->declBit(c+977,"io_slave_awvalid", false,-1);
    tracep->declBus(c+990,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+987,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+974,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+991,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+992,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+993,"io_slave_wready", false,-1);
    tracep->declBit(c+977,"io_slave_wvalid", false,-1);
    tracep->declQuad(c+994,"io_slave_wdata", false,-1, 63,0);
    tracep->declBus(c+974,"io_slave_wstrb", false,-1, 7,0);
    tracep->declBit(c+977,"io_slave_wlast", false,-1);
    tracep->declBit(c+977,"io_slave_bready", false,-1);
    tracep->declBit(c+996,"io_slave_bvalid", false,-1);
    tracep->declBus(c+997,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+998,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+999,"io_slave_arready", false,-1);
    tracep->declBit(c+977,"io_slave_arvalid", false,-1);
    tracep->declBus(c+990,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+987,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+974,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+991,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+992,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+977,"io_slave_rready", false,-1);
    tracep->declBit(c+1000,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1001,"io_slave_rresp", false,-1, 1,0);
    tracep->declQuad(c+1002,"io_slave_rdata", false,-1, 63,0);
    tracep->declBit(c+1004,"io_slave_rlast", false,-1);
    tracep->declBus(c+1005,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+496,"ifu_pc", false,-1, 31,0);
    tracep->declBus(c+497,"ifu_inst", false,-1, 31,0);
    tracep->declBus(c+1006,"ifu_inst_t", false,-1, 31,0);
    tracep->declBit(c+498,"ifu_stall", false,-1);
    tracep->declBus(c+499,"jump_pc", false,-1, 31,0);
    tracep->declBit(c+500,"jump_pc_valid", false,-1);
    tracep->declBit(c+915,"stall", false,-1);
    tracep->declBit(c+498,"ifu_r_valid_o", false,-1);
    tracep->declBus(c+501,"ifu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+717,"ifu_r_ready_i", false,-1);
    tracep->declBus(c+718,"ifu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+974,"ifu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+719,"ifu_r_last_i", false,-1);
    tracep->declBit(c+502,"idu_branch", false,-1);
    tracep->declBit(c+503,"idu_jal", false,-1);
    tracep->declBit(c+504,"idu_jalr", false,-1);
    tracep->declBus(c+505,"idu_rd", false,-1, 4,0);
    tracep->declBit(c+506,"idu_rd_wen", false,-1);
    tracep->declBus(c+507,"idu_rs1", false,-1, 4,0);
    tracep->declBus(c+508,"idu_rs2", false,-1, 4,0);
    tracep->declBus(c+509,"idu_imm", false,-1, 31,0);
    tracep->declBus(c+510,"idu_alu_opt", false,-1, 3,0);
    tracep->declBus(c+511,"idu_src_sel", false,-1, 1,0);
    tracep->declBus(c+512,"idu_lsu_opt", false,-1, 1,0);
    tracep->declBus(c+513,"idu_funct3", false,-1, 2,0);
    tracep->declBus(c+514,"src1", false,-1, 31,0);
    tracep->declBus(c+515,"src2", false,-1, 31,0);
    tracep->declBus(c+962,"rd_data", false,-1, 31,0);
    tracep->declBit(c+516,"zero_flag", false,-1);
    tracep->declBus(c+517,"exu_result", false,-1, 31,0);
    tracep->declBus(c+1007,"exu_result_t", false,-1, 31,0);
    tracep->declBus(c+720,"lsu_result", false,-1, 31,0);
    tracep->declBit(c+915,"mem_stall", false,-1);
    tracep->declBit(c+916,"lsu_rd_wen", false,-1);
    tracep->declBit(c+518,"lsu_r_valid_o", false,-1);
    tracep->declBus(c+519,"lsu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+721,"lsu_r_ready_i", false,-1);
    tracep->declBus(c+722,"lsu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+520,"lsu_r_size_o", false,-1, 2,0);
    tracep->declBus(c+974,"lsu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+723,"lsu_r_last_i", false,-1);
    tracep->declBit(c+521,"lsu_w_valid_o", false,-1);
    tracep->declBus(c+194,"lsu_w_addr_o", false,-1, 31,0);
    tracep->declBit(c+196,"lsu_w_ready_i", false,-1);
    tracep->declBus(c+515,"lsu_w_data_o", false,-1, 31,0);
    tracep->declBus(c+195,"lsu_w_size_o", false,-1, 2,0);
    tracep->declBus(c+974,"lsu_w_len_o", false,-1, 7,0);
    tracep->declBit(c+836,"lsu_w_last_i", false,-1);
    tracep->declBit(c+724,"wbu_rd_wen", false,-1);
    tracep->declBit(c+522,"csr_ecall", false,-1);
    tracep->declBit(c+523,"csr_mret", false,-1);
    tracep->declBus(c+524,"wr_csr_data", false,-1, 31,0);
    tracep->declBus(c+963,"rd_csr_data", false,-1, 31,0);
    tracep->declBus(c+525,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+526,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+527,"csr_mpec", false,-1, 31,0);
    tracep->pushNamePrefix("axi_arbiter_u0 ");
    tracep->declBit(c+932,"aclk", false,-1);
    tracep->declBit(c+961,"areset_n", false,-1);
    tracep->declBit(c+498,"ifu_r_valid_i", false,-1);
    tracep->declBus(c+501,"ifu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+717,"ifu_r_ready_o", false,-1);
    tracep->declBus(c+718,"ifu_r_data_o", false,-1, 31,0);
    tracep->declBus(c+974,"ifu_r_len_i", false,-1, 7,0);
    tracep->declBit(c+719,"ifu_r_last_o", false,-1);
    tracep->declBit(c+518,"lsu_r_valid_i", false,-1);
    tracep->declBus(c+519,"lsu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+721,"lsu_r_ready_o", false,-1);
    tracep->declBus(c+722,"lsu_r_data_o", false,-1, 31,0);
    tracep->declBus(c+520,"lsu_r_size_i", false,-1, 2,0);
    tracep->declBus(c+974,"lsu_r_len_i", false,-1, 7,0);
    tracep->declBit(c+723,"lsu_r_last_o", false,-1);
    tracep->declBit(c+521,"lsu_w_valid_i", false,-1);
    tracep->declBus(c+194,"lsu_w_addr_i", false,-1, 31,0);
    tracep->declBit(c+196,"lsu_w_ready_o", false,-1);
    tracep->declBus(c+515,"lsu_w_data_i", false,-1, 31,0);
    tracep->declBus(c+195,"lsu_w_size_i", false,-1, 2,0);
    tracep->declBus(c+974,"lsu_w_len_i", false,-1, 7,0);
    tracep->declBit(c+836,"lsu_w_last_o", false,-1);
    tracep->declBit(c+192,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+193,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+194,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+987,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+974,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+195,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+988,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+196,"axi_w_ready_i", false,-1);
    tracep->declBit(c+197,"axi_w_valid_o", false,-1);
    tracep->declQuad(c+198,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+200,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+201,"axi_w_last_o", false,-1);
    tracep->declBit(c+202,"axi_b_ready_o", false,-1);
    tracep->declBit(c+836,"axi_b_valid_i", false,-1);
    tracep->declBus(c+679,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+837,"axi_b_id_i", false,-1, 3,0);
    tracep->declBit(c+203,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+204,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+205,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+987,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+974,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+206,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+988,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+207,"axi_r_ready_o", false,-1);
    tracep->declBit(c+838,"axi_r_valid_i", false,-1);
    tracep->declBus(c+960,"axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+680,"axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+840,"axi_r_last_i", false,-1);
    tracep->declBus(c+839,"axi_r_id_i", false,-1, 3,0);
    tracep->declBit(c+528,"cpu_r_valid_o", false,-1);
    tracep->declBus(c+205,"cpu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+838,"cpu_r_ready_i", false,-1);
    tracep->declBus(c+917,"cpu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+206,"cpu_r_size_o", false,-1, 2,0);
    tracep->declBus(c+974,"cpu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+840,"cpu_r_last_i", false,-1);
    tracep->declBit(c+521,"cpu_w_valid_o", false,-1);
    tracep->declBus(c+194,"cpu_w_addr_o", false,-1, 31,0);
    tracep->declBit(c+196,"cpu_w_ready_i", false,-1);
    tracep->declBus(c+515,"cpu_w_data_o", false,-1, 31,0);
    tracep->declBus(c+195,"cpu_w_size_o", false,-1, 2,0);
    tracep->declBus(c+974,"cpu_w_len_o", false,-1, 7,0);
    tracep->declBit(c+836,"cpu_w_last_i", false,-1);
    tracep->declBus(c+529,"arbiter_state", false,-1, 1,0);
    tracep->declBus(c+992,"ARB_IDLE", false,-1, 1,0);
    tracep->declBus(c+988,"ARB_IFU", false,-1, 1,0);
    tracep->declBus(c+1008,"ARB_LSU", false,-1, 1,0);
    tracep->pushNamePrefix("axi_u0 ");
    tracep->declBit(c+932,"aclk", false,-1);
    tracep->declBit(c+961,"areset_n", false,-1);
    tracep->declBit(c+528,"cpu_r_valid_i", false,-1);
    tracep->declBus(c+205,"cpu_r_addr_i", false,-1, 31,0);
    tracep->declBit(c+838,"cpu_r_ready_o", false,-1);
    tracep->declBus(c+917,"cpu_r_data_o", false,-1, 31,0);
    tracep->declBus(c+206,"cpu_r_size_i", false,-1, 2,0);
    tracep->declBus(c+974,"cpu_r_len_i", false,-1, 7,0);
    tracep->declBit(c+840,"cpu_r_last_o", false,-1);
    tracep->declBit(c+521,"cpu_w_valid_i", false,-1);
    tracep->declBus(c+194,"cpu_w_addr_i", false,-1, 31,0);
    tracep->declBit(c+196,"cpu_w_ready_o", false,-1);
    tracep->declBus(c+515,"cpu_w_data_i", false,-1, 31,0);
    tracep->declBus(c+195,"cpu_w_size_i", false,-1, 2,0);
    tracep->declBus(c+974,"cpu_w_len_i", false,-1, 7,0);
    tracep->declBit(c+836,"cpu_w_last_o", false,-1);
    tracep->declBit(c+192,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+193,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+194,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+987,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+974,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+195,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+988,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+196,"axi_w_ready_i", false,-1);
    tracep->declBit(c+197,"axi_w_valid_o", false,-1);
    tracep->declQuad(c+198,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+200,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+201,"axi_w_last_o", false,-1);
    tracep->declBit(c+202,"axi_b_ready_o", false,-1);
    tracep->declBit(c+836,"axi_b_valid_i", false,-1);
    tracep->declBus(c+679,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+837,"axi_b_id_i", false,-1, 3,0);
    tracep->declBit(c+203,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+204,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+205,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+987,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+974,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+206,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+988,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+207,"axi_r_ready_o", false,-1);
    tracep->declBit(c+838,"axi_r_valid_i", false,-1);
    tracep->declBus(c+960,"axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+680,"axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+840,"axi_r_last_i", false,-1);
    tracep->declBus(c+839,"axi_r_id_i", false,-1, 3,0);
    tracep->declBus(c+530,"axi_w_state", false,-1, 2,0);
    tracep->declBus(c+991,"AXI_W_IDLE", false,-1, 2,0);
    tracep->declBus(c+976,"AXI_W_ADDR", false,-1, 2,0);
    tracep->declBus(c+1009,"AXI_W_DATA", false,-1, 2,0);
    tracep->declBus(c+1010,"AXI_W_RESP", false,-1, 2,0);
    tracep->declQuad(c+531,"axi_w_data_t", false,-1, 63,0);
    tracep->declBus(c+533,"axi_w_strb_t", false,-1, 7,0);
    tracep->declBus(c+534,"axi_w_cnt", false,-1, 7,0);
    tracep->declBus(c+535,"axi_r_state", false,-1, 1,0);
    tracep->declBus(c+992,"AXI_R_IDLE", false,-1, 1,0);
    tracep->declBus(c+988,"AXI_R_ADDR", false,-1, 1,0);
    tracep->declBus(c+1008,"AXI_R_DATA", false,-1, 1,0);
    tracep->declBus(c+1011,"axi_r_cnt", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csr_u0 ");
    tracep->declBit(c+932,"clk", false,-1);
    tracep->declBit(c+961,"reset", false,-1);
    tracep->declBus(c+536,"wr_addr", false,-1, 11,0);
    tracep->declBus(c+524,"wr_data", false,-1, 31,0);
    tracep->declBus(c+536,"rd_addr", false,-1, 11,0);
    tracep->declBus(c+963,"rd_data", false,-1, 31,0);
    tracep->declBit(c+522,"i_csr_ecall", false,-1);
    tracep->declBit(c+523,"i_csr_mret", false,-1);
    tracep->declBus(c+497,"i_inst", false,-1, 31,0);
    tracep->declBus(c+496,"i_pc", false,-1, 31,0);
    tracep->declBus(c+525,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+526,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+527,"o_mpec", false,-1, 31,0);
    tracep->declBus(c+963,"rd_data_r", false,-1, 31,0);
    tracep->declBit(c+537,"wr_en", false,-1);
    tracep->declBit(c+537,"rd_en", false,-1);
    tracep->declBus(c+538,"wr_data_r", false,-1, 31,0);
    tracep->declBus(c+539,"temp", false,-1, 31,0);
    tracep->declBus(c+525,"o_mstatus_r", false,-1, 31,0);
    tracep->declBus(c+540,"mepc_inst_r", false,-1, 31,0);
    tracep->declBus(c+541,"mcause", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu_u0 ");
    tracep->declBus(c+496,"pc", false,-1, 31,0);
    tracep->declBus(c+514,"src1", false,-1, 31,0);
    tracep->declBus(c+515,"src2", false,-1, 31,0);
    tracep->declBus(c+509,"imm", false,-1, 31,0);
    tracep->declBit(c+502,"branch", false,-1);
    tracep->declBus(c+510,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+511,"src_sel", false,-1, 1,0);
    tracep->declBus(c+513,"funct3", false,-1, 2,0);
    tracep->declBit(c+516,"zero_flag", false,-1);
    tracep->declBus(c+517,"exu_result", false,-1, 31,0);
    tracep->declBus(c+542,"alu_a_data", false,-1, 31,0);
    tracep->declBus(c+543,"alu_b_data", false,-1, 31,0);
    tracep->declBus(c+544,"alu_out_data", false,-1, 31,0);
    tracep->declBit(c+1012,"carry_flag", false,-1);
    tracep->declBit(c+1013,"signed_flag", false,-1);
    tracep->declBus(c+517,"exu_result_r", false,-1, 31,0);
    tracep->pushNamePrefix("ex_alu ");
    tracep->declBus(c+510,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+542,"alu_a_data", false,-1, 31,0);
    tracep->declBus(c+543,"alu_b_data", false,-1, 31,0);
    tracep->declBus(c+544,"alu_out_data", false,-1, 31,0);
    tracep->declBit(c+545,"sub_flag", false,-1);
    tracep->declQuad(c+546,"alu_a_t", false,-1, 32,0);
    tracep->declQuad(c+548,"alu_b_t", false,-1, 32,0);
    tracep->declQuad(c+550,"cin", false,-1, 32,0);
    tracep->declQuad(c+552,"add_out", false,-1, 32,0);
    tracep->declBit(c+554,"top_A", false,-1);
    tracep->declBit(c+555,"top_B", false,-1);
    tracep->declBit(c+556,"top_C", false,-1);
    tracep->declBit(c+557,"sign_flag", false,-1);
    tracep->declBit(c+558,"over_flag", false,-1);
    tracep->declBit(c+559,"carry_flag", false,-1);
    tracep->declBus(c+560,"sra_result", false,-1, 31,0);
    tracep->declBus(c+544,"alu_out_data_r", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu_u0 ");
    tracep->declBus(c+497,"inst", false,-1, 31,0);
    tracep->declBit(c+502,"branch", false,-1);
    tracep->declBit(c+503,"jal", false,-1);
    tracep->declBit(c+504,"jalr", false,-1);
    tracep->declBus(c+505,"rd", false,-1, 4,0);
    tracep->declBit(c+506,"rd_wen", false,-1);
    tracep->declBus(c+507,"rs1", false,-1, 4,0);
    tracep->declBus(c+508,"rs2", false,-1, 4,0);
    tracep->declBus(c+509,"imm", false,-1, 31,0);
    tracep->declBus(c+510,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+511,"src_sel", false,-1, 1,0);
    tracep->declBus(c+512,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+513,"funct3", false,-1, 2,0);
    tracep->declBus(c+561,"opcode", false,-1, 6,0);
    tracep->declBus(c+562,"funct7", false,-1, 6,0);
    tracep->declBus(c+1014,"reg_zero", false,-1, 4,0);
    tracep->pushNamePrefix("id_imm_idu ");
    tracep->declBus(c+497,"inst", false,-1, 31,0);
    tracep->declBus(c+509,"imm", false,-1, 31,0);
    tracep->declBus(c+509,"imm_r", false,-1, 31,0);
    tracep->declBus(c+563,"imm_typeI", false,-1, 31,0);
    tracep->declBus(c+564,"imm_typeU", false,-1, 31,0);
    tracep->declBus(c+565,"imm_typeS", false,-1, 31,0);
    tracep->declBus(c+566,"imm_typeB", false,-1, 31,0);
    tracep->declBus(c+567,"imm_typeJ", false,-1, 31,0);
    tracep->declBus(c+990,"imm_typeR", false,-1, 31,0);
    tracep->declBus(c+990,"imm_type_NONE", false,-1, 31,0);
    tracep->pushNamePrefix("id_imm_ext_typeB ");
    tracep->declBus(c+1015,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+568,"imm_in", false,-1, 12,0);
    tracep->declBus(c+566,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeI ");
    tracep->declBus(c+1016,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+569,"imm_in", false,-1, 11,0);
    tracep->declBus(c+563,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeJ ");
    tracep->declBus(c+1017,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+570,"imm_in", false,-1, 20,0);
    tracep->declBus(c+567,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeS ");
    tracep->declBus(c+1016,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+571,"imm_in", false,-1, 11,0);
    tracep->declBus(c+565,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_imm_ext_typeU ");
    tracep->declBus(c+1018,"INPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+564,"imm_in", false,-1, 31,0);
    tracep->declBus(c+564,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_opt_idu ");
    tracep->declBus(c+561,"opcode", false,-1, 6,0);
    tracep->declBus(c+513,"funct3", false,-1, 2,0);
    tracep->declBus(c+562,"funct7", false,-1, 6,0);
    tracep->declBus(c+510,"alu_opt", false,-1, 3,0);
    tracep->declBus(c+511,"src_sel", false,-1, 1,0);
    tracep->declBus(c+512,"lsu_opt", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu_u0 ");
    tracep->declBit(c+932,"clk", false,-1);
    tracep->declBit(c+961,"reset", false,-1);
    tracep->declBus(c+499,"jump_pc", false,-1, 31,0);
    tracep->declBit(c+500,"jump_pc_valid", false,-1);
    tracep->declBit(c+915,"stall", false,-1);
    tracep->declBit(c+916,"wbu_stall", false,-1);
    tracep->declBit(c+498,"ifu_r_valid_o", false,-1);
    tracep->declBus(c+501,"ifu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+717,"ifu_r_ready_i", false,-1);
    tracep->declBus(c+718,"ifu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+974,"ifu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+719,"ifu_r_last_i", false,-1);
    tracep->declBit(c+498,"ifu_stall", false,-1);
    tracep->declBus(c+496,"ifu_pc_o", false,-1, 31,0);
    tracep->declBus(c+497,"ifu_inst_o", false,-1, 31,0);
    tracep->declBus(c+496,"ifu_pc_o_r", false,-1, 31,0);
    tracep->declBus(c+497,"ifu_inst_o_r", false,-1, 31,0);
    tracep->declBus(c+501,"pc", false,-1, 31,0);
    tracep->declBus(c+718,"inst", false,-1, 31,0);
    tracep->declBus(c+1019,"inst_t", false,-1, 31,0);
    tracep->declBit(c+498,"ifu_stall_r", false,-1);
    tracep->declBit(c+918,"flush_inst", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_u0 ");
    tracep->declBit(c+932,"clk", false,-1);
    tracep->declBit(c+961,"reset", false,-1);
    tracep->declBus(c+514,"src1", false,-1, 31,0);
    tracep->declBus(c+515,"src2", false,-1, 31,0);
    tracep->declBus(c+509,"imm", false,-1, 31,0);
    tracep->declBus(c+512,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+513,"funct3", false,-1, 2,0);
    tracep->declBit(c+498,"ifu_stall", false,-1);
    tracep->declBit(c+518,"lsu_r_valid_o", false,-1);
    tracep->declBus(c+519,"lsu_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+721,"lsu_r_ready_i", false,-1);
    tracep->declBus(c+722,"lsu_r_data_i", false,-1, 31,0);
    tracep->declBus(c+520,"lsu_r_size_o", false,-1, 2,0);
    tracep->declBus(c+974,"lsu_r_len_o", false,-1, 7,0);
    tracep->declBit(c+723,"lsu_r_last_i", false,-1);
    tracep->declBit(c+521,"lsu_w_valid_o", false,-1);
    tracep->declBus(c+194,"lsu_w_addr_o", false,-1, 31,0);
    tracep->declBit(c+196,"lsu_w_ready_i", false,-1);
    tracep->declBus(c+515,"lsu_w_data_o", false,-1, 31,0);
    tracep->declBus(c+195,"lsu_w_size_o", false,-1, 2,0);
    tracep->declBus(c+974,"lsu_w_len_o", false,-1, 7,0);
    tracep->declBit(c+836,"lsu_w_last_i", false,-1);
    tracep->declBit(c+915,"mem_stall", false,-1);
    tracep->declBit(c+916,"lsu_rd_wen", false,-1);
    tracep->declBus(c+720,"lsu_result", false,-1, 31,0);
    tracep->declBus(c+519,"raddr", false,-1, 31,0);
    tracep->declBus(c+722,"rdata", false,-1, 31,0);
    tracep->declBus(c+572,"rsize", false,-1, 31,0);
    tracep->declBus(c+194,"waddr", false,-1, 31,0);
    tracep->declBus(c+515,"wdata", false,-1, 31,0);
    tracep->declBus(c+573,"wmask", false,-1, 31,0);
    tracep->declBus(c+573,"mask", false,-1, 31,0);
    tracep->declBus(c+720,"lsu_result_r", false,-1, 31,0);
    tracep->declBit(c+518,"ren", false,-1);
    tracep->declBit(c+521,"wen", false,-1);
    tracep->declBit(c+919,"lsu_rd_wen_r", false,-1);
    tracep->declBit(c+920,"lsu_rd_wen_w", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile_u0 ");
    tracep->declBit(c+932,"clk", false,-1);
    tracep->declBit(c+961,"reset", false,-1);
    tracep->declBus(c+507,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+514,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+508,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+515,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+724,"rd_en", false,-1);
    tracep->declBus(c+505,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+962,"rd_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+574+i*1,"gpr", true,(i+0), 31,0);
    }
    tracep->declBus(c+2,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu_u0 ");
    tracep->declBus(c+512,"lsu_opt", false,-1, 1,0);
    tracep->declBus(c+517,"exu_result", false,-1, 31,0);
    tracep->declBus(c+720,"lsu_result", false,-1, 31,0);
    tracep->declBus(c+963,"csr_result", false,-1, 31,0);
    tracep->declBit(c+916,"lsu_rd_wen", false,-1);
    tracep->declBit(c+606,"idu_rd_wen", false,-1);
    tracep->declBit(c+724,"wbu_rd_wen", false,-1);
    tracep->declBus(c+962,"wbu_result", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"io_d", false,-1);
    tracep->declBit(c+607,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"io_d", false,-1);
    tracep->declBit(c+607,"io_q", false,-1);
    tracep->declBit(c+607,"sync_0", false,-1);
    tracep->declBit(c+608,"sync_1", false,-1);
    tracep->declBit(c+609,"sync_2", false,-1);
    tracep->declBit(c+610,"sync_3", false,-1);
    tracep->declBit(c+611,"sync_4", false,-1);
    tracep->declBit(c+612,"sync_5", false,-1);
    tracep->declBit(c+613,"sync_6", false,-1);
    tracep->declBit(c+614,"sync_7", false,-1);
    tracep->declBit(c+615,"sync_8", false,-1);
    tracep->declBit(c+616,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+672,"auto_in_psel", false,-1);
    tracep->declBit(c+673,"auto_in_penable", false,-1);
    tracep->declBit(c+158,"auto_in_pwrite", false,-1);
    tracep->declBus(c+796,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+976,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+159,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+160,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+984,"auto_in_pready", false,-1);
    tracep->declBit(c+985,"auto_in_pslverr", false,-1);
    tracep->declBus(c+986,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+934,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+935,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+936,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+937,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+938,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+939,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+940,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+941,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+942,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+943,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBus(c+811,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+672,"in_psel", false,-1);
    tracep->declBit(c+673,"in_penable", false,-1);
    tracep->declBus(c+976,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+158,"in_pwrite", false,-1);
    tracep->declBus(c+159,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+160,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+984,"in_pready", false,-1);
    tracep->declBus(c+986,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+985,"in_pslverr", false,-1);
    tracep->declBus(c+934,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+935,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+936,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+937,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+938,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+939,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+940,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+941,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+942,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+943,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+670,"auto_in_psel", false,-1);
    tracep->declBit(c+671,"auto_in_penable", false,-1);
    tracep->declBit(c+158,"auto_in_pwrite", false,-1);
    tracep->declBus(c+796,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+976,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+159,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+160,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+981,"auto_in_pready", false,-1);
    tracep->declBit(c+982,"auto_in_pslverr", false,-1);
    tracep->declBus(c+983,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+944,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+945,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBus(c+811,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+670,"in_psel", false,-1);
    tracep->declBit(c+671,"in_penable", false,-1);
    tracep->declBus(c+976,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+158,"in_pwrite", false,-1);
    tracep->declBus(c+159,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+160,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+981,"in_pready", false,-1);
    tracep->declBus(c+983,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+982,"in_pslverr", false,-1);
    tracep->declBit(c+944,"ps2_clk", false,-1);
    tracep->declBit(c+945,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+295,"auto_in_awvalid", false,-1);
    tracep->declBit(c+296,"auto_in_wvalid", false,-1);
    tracep->declBit(c+297,"auto_in_arready", false,-1);
    tracep->declBit(c+298,"auto_in_arvalid", false,-1);
    tracep->declBus(c+175,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+299,"auto_in_araddr", false,-1, 29,0);
    tracep->declBus(c+177,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+684,"auto_in_rready", false,-1);
    tracep->declBit(c+300,"auto_in_rvalid", false,-1);
    tracep->declBus(c+301,"auto_in_rid", false,-1, 3,0);
    tracep->declQuad(c+302,"auto_in_rdata", false,-1, 63,0);
    tracep->declBit(c+300,"state", false,-1);
    tracep->declQuad(c+302,"nodeIn_rdata_r", false,-1, 63,0);
    tracep->declBus(c+301,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+617,"raddr", false,-1, 31,0);
    tracep->declBit(c+618,"ren", false,-1);
    tracep->declBus(c+619,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+797,"auto_in_psel", false,-1);
    tracep->declBit(c+674,"auto_in_penable", false,-1);
    tracep->declBit(c+158,"auto_in_pwrite", false,-1);
    tracep->declBus(c+793,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+976,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+159,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+160,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+958,"auto_in_pready", false,-1);
    tracep->declBit(c+977,"auto_in_pslverr", false,-1);
    tracep->declBus(c+161,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+955,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+956,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+829,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBus(c+793,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+797,"in_psel", false,-1);
    tracep->declBit(c+674,"in_penable", false,-1);
    tracep->declBus(c+976,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+158,"in_pwrite", false,-1);
    tracep->declBus(c+159,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+160,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+958,"in_pready", false,-1);
    tracep->declBus(c+161,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+977,"in_pslverr", false,-1);
    tracep->declBit(c+955,"qspi_sck", false,-1);
    tracep->declBit(c+956,"qspi_ce_n", false,-1);
    tracep->declBus(c+829,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+829,"din", false,-1, 3,0);
    tracep->declBus(c+921,"dout", false,-1, 3,0);
    tracep->declBus(c+922,"douten", false,-1, 3,0);
    tracep->declBit(c+964,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+932,"clk_i", false,-1);
    tracep->declBit(c+933,"rst_i", false,-1);
    tracep->declBus(c+793,"adr_i", false,-1, 31,0);
    tracep->declBus(c+159,"dat_i", false,-1, 31,0);
    tracep->declBus(c+161,"dat_o", false,-1, 31,0);
    tracep->declBus(c+160,"sel_i", false,-1, 3,0);
    tracep->declBit(c+797,"cyc_i", false,-1);
    tracep->declBit(c+797,"stb_i", false,-1);
    tracep->declBit(c+964,"ack_o", false,-1);
    tracep->declBit(c+158,"we_i", false,-1);
    tracep->declBit(c+955,"sck", false,-1);
    tracep->declBit(c+956,"ce_n", false,-1);
    tracep->declBus(c+829,"din", false,-1, 3,0);
    tracep->declBus(c+921,"dout", false,-1, 3,0);
    tracep->declBus(c+922,"douten", false,-1, 3,0);
    tracep->declBus(c+1020,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1021,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+726,"mr_sck", false,-1);
    tracep->declBit(c+20,"mr_ce_n", false,-1);
    tracep->declBus(c+829,"mr_din", false,-1, 3,0);
    tracep->declBus(c+965,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+727,"mr_doe", false,-1);
    tracep->declBit(c+21,"mw_sck", false,-1);
    tracep->declBit(c+22,"mw_ce_n", false,-1);
    tracep->declBus(c+829,"mw_din", false,-1, 3,0);
    tracep->declBus(c+784,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+23,"mw_doe", false,-1);
    tracep->declBit(c+923,"mr_rd", false,-1);
    tracep->declBit(c+728,"mr_done", false,-1);
    tracep->declBit(c+924,"mw_wr", false,-1);
    tracep->declBit(c+785,"mw_done", false,-1);
    tracep->declBit(c+797,"wb_valid", false,-1);
    tracep->declBit(c+812,"wb_we", false,-1);
    tracep->declBit(c+813,"wb_re", false,-1);
    tracep->declBit(c+24,"state", false,-1);
    tracep->declBit(c+925,"nstate", false,-1);
    tracep->declBus(c+620,"size", false,-1, 2,0);
    tracep->declBus(c+621,"byte0", false,-1, 7,0);
    tracep->declBus(c+622,"byte1", false,-1, 7,0);
    tracep->declBus(c+623,"byte2", false,-1, 7,0);
    tracep->declBus(c+624,"byte3", false,-1, 7,0);
    tracep->declBus(c+625,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+932,"clk", false,-1);
    tracep->declBit(c+966,"rst_n", false,-1);
    tracep->declBus(c+814,"addr", false,-1, 23,0);
    tracep->declBit(c+923,"rd", false,-1);
    tracep->declBus(c+1022,"size", false,-1, 2,0);
    tracep->declBit(c+728,"done", false,-1);
    tracep->declBus(c+161,"line", false,-1, 31,0);
    tracep->declBit(c+726,"sck", false,-1);
    tracep->declBit(c+20,"ce_n", false,-1);
    tracep->declBus(c+829,"din", false,-1, 3,0);
    tracep->declBus(c+965,"dout", false,-1, 3,0);
    tracep->declBit(c+727,"douten", false,-1);
    tracep->declBus(c+1020,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1021,"READ", false,-1, 0,0);
    tracep->declBus(c+1023,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+25,"state", false,-1);
    tracep->declBit(c+926,"nstate", false,-1);
    tracep->declBus(c+729,"counter", false,-1, 7,0);
    tracep->declBus(c+26,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+626+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1024,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+730,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+932,"clk", false,-1);
    tracep->declBit(c+966,"rst_n", false,-1);
    tracep->declBus(c+815,"addr", false,-1, 23,0);
    tracep->declBus(c+625,"line", false,-1, 31,0);
    tracep->declBus(c+620,"size", false,-1, 2,0);
    tracep->declBit(c+924,"wr", false,-1);
    tracep->declBit(c+785,"done", false,-1);
    tracep->declBit(c+21,"sck", false,-1);
    tracep->declBit(c+22,"ce_n", false,-1);
    tracep->declBus(c+829,"din", false,-1, 3,0);
    tracep->declBus(c+784,"dout", false,-1, 3,0);
    tracep->declBit(c+23,"douten", false,-1);
    tracep->declBus(c+1020,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1021,"WRITE", false,-1, 0,0);
    tracep->declBus(c+630,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+27,"state", false,-1);
    tracep->declBit(c+927,"nstate", false,-1);
    tracep->declBus(c+28,"counter", false,-1, 7,0);
    tracep->declBus(c+29,"saddr", false,-1, 23,0);
    tracep->declBus(c+1025,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+666,"auto_in_psel", false,-1);
    tracep->declBit(c+667,"auto_in_penable", false,-1);
    tracep->declBit(c+158,"auto_in_pwrite", false,-1);
    tracep->declBus(c+793,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+976,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+159,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+160,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+725,"auto_in_pready", false,-1);
    tracep->declBit(c+977,"auto_in_pslverr", false,-1);
    tracep->declBus(c+19,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+957,"sdram_bundle_clk", false,-1);
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
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBus(c+793,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+666,"in_psel", false,-1);
    tracep->declBit(c+667,"in_penable", false,-1);
    tracep->declBus(c+976,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+158,"in_pwrite", false,-1);
    tracep->declBus(c+159,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+160,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+725,"in_pready", false,-1);
    tracep->declBus(c+19,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+977,"in_pslverr", false,-1);
    tracep->declBit(c+957,"sdram_clk", false,-1);
    tracep->declBit(c+10,"sdram_cke", false,-1);
    tracep->declBit(c+11,"sdram_cs", false,-1);
    tracep->declBit(c+12,"sdram_ras", false,-1);
    tracep->declBit(c+13,"sdram_cas", false,-1);
    tracep->declBit(c+14,"sdram_we", false,-1);
    tracep->declBus(c+15,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+16,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+17,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+18,"sdram_dq", false,-1, 15,0);
    tracep->declBit(c+30,"sdram_dout_en", false,-1);
    tracep->declBus(c+31,"sdram_dout", false,-1, 15,0);
    tracep->declBus(c+631,"state", false,-1, 1,0);
    tracep->declBit(c+731,"req_accept", false,-1);
    tracep->declBit(c+816,"is_read", false,-1);
    tracep->declBit(c+817,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+932,"clk_i", false,-1);
    tracep->declBit(c+933,"rst_i", false,-1);
    tracep->declBus(c+818,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+816,"inport_rd_i", false,-1);
    tracep->declBus(c+974,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+793,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+159,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+18,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+731,"inport_accept_o", false,-1);
    tracep->declBit(c+725,"inport_ack_o", false,-1);
    tracep->declBit(c+977,"inport_error_o", false,-1);
    tracep->declBus(c+19,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+957,"sdram_clk_o", false,-1);
    tracep->declBit(c+10,"sdram_cke_o", false,-1);
    tracep->declBit(c+11,"sdram_cs_o", false,-1);
    tracep->declBit(c+12,"sdram_ras_o", false,-1);
    tracep->declBit(c+13,"sdram_cas_o", false,-1);
    tracep->declBit(c+14,"sdram_we_o", false,-1);
    tracep->declBus(c+17,"sdram_dqm_o", false,-1, 1,0);
    tracep->declBus(c+15,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+16,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+31,"sdram_data_output_o", false,-1, 15,0);
    tracep->declBit(c+30,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1026,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1027,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1028,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1029,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1029,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1029,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1030,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1015,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1031,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1032,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1033,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1030,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1034,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1035,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1036,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1037,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1038,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1039,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1040,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+987,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1041,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1030,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+987,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1040,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1039,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1035,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1037,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1036,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1038,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1034,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1042,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1043,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1044,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1044,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1045,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1044,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1029,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1029,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1046,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+793,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+818,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+816,"ram_rd_w", false,-1);
    tracep->declBit(c+731,"ram_accept_w", false,-1);
    tracep->declBus(c+159,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+19,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+725,"ram_ack_w", false,-1);
    tracep->declBit(c+819,"ram_req_w", false,-1);
    tracep->declBus(c+32,"command_q", false,-1, 3,0);
    tracep->declBus(c+15,"addr_q", false,-1, 12,0);
    tracep->declBus(c+31,"data_q", false,-1, 15,0);
    tracep->declBit(c+33,"data_rd_en_q", false,-1);
    tracep->declBus(c+17,"dqm_q", false,-1, 1,0);
    tracep->declBit(c+10,"cke_q", false,-1);
    tracep->declBus(c+16,"bank_q", false,-1, 1,0);
    tracep->declBus(c+34,"data_buffer_q", false,-1, 15,0);
    tracep->declBus(c+35,"dqm_buffer_q", false,-1, 1,0);
    tracep->declBus(c+18,"sdram_data_in_w", false,-1, 15,0);
    tracep->declBit(c+36,"refresh_q", false,-1);
    tracep->declBus(c+37,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+38+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+732,"state_q", false,-1, 3,0);
    tracep->declBus(c+928,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+929,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+42,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+43,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+820,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+821,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+822,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1030,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+44,"delay_q", false,-1, 3,0);
    tracep->declBus(c+930,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1047,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+45,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+46,"sample_data0_q", false,-1, 15,0);
    tracep->declBus(c+47,"sample_data_q", false,-1, 15,0);
    tracep->declBus(c+48,"idx", false,-1, 31,0);
    tracep->declBus(c+733,"rd_q", false,-1, 3,0);
    tracep->declBit(c+725,"ack_q", false,-1);
    tracep->declArray(c+734,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+801,"auto_in_psel", false,-1);
    tracep->declBit(c+802,"auto_in_penable", false,-1);
    tracep->declBit(c+158,"auto_in_pwrite", false,-1);
    tracep->declBus(c+795,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+976,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+159,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+160,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+675,"auto_in_pready", false,-1);
    tracep->declBit(c+977,"auto_in_pslverr", false,-1);
    tracep->declBus(c+162,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1,"spi_bundle_sck", false,-1);
    tracep->declBus(c+974,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+975,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+954,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1048,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1049,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1050,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBus(c+823,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+801,"in_psel", false,-1);
    tracep->declBit(c+802,"in_penable", false,-1);
    tracep->declBus(c+976,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+158,"in_pwrite", false,-1);
    tracep->declBus(c+159,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+160,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+675,"in_pready", false,-1);
    tracep->declBus(c+162,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+977,"in_pslverr", false,-1);
    tracep->declBit(c+1,"spi_sck", false,-1);
    tracep->declBus(c+974,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+975,"spi_mosi", false,-1);
    tracep->declBit(c+954,"spi_miso", false,-1);
    tracep->declBit(c+977,"spi_irq_out", false,-1);
    tracep->declBus(c+162,"data", false,-1, 31,0);
    tracep->declBus(c+974,"invalid_cmd", false,-1, 7,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+824,"valid", false,-1);
    tracep->declBus(c+632,"cmd", false,-1, 7,0);
    tracep->declBus(c+825,"addr", false,-1, 31,0);
    tracep->declBus(c+162,"data", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+798,"auto_in_psel", false,-1);
    tracep->declBit(c+799,"auto_in_penable", false,-1);
    tracep->declBit(c+158,"auto_in_pwrite", false,-1);
    tracep->declBus(c+796,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+976,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+159,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+160,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+800,"auto_in_pready", false,-1);
    tracep->declBit(c+977,"auto_in_pslverr", false,-1);
    tracep->declBus(c+959,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+952,"uart_rx", false,-1);
    tracep->declBit(c+953,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+798,"in_psel", false,-1);
    tracep->declBit(c+799,"in_penable", false,-1);
    tracep->declBus(c+976,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+800,"in_pready", false,-1);
    tracep->declBit(c+977,"in_pslverr", false,-1);
    tracep->declBus(c+811,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+158,"in_pwrite", false,-1);
    tracep->declBus(c+959,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+159,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+160,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+952,"uart_rx", false,-1);
    tracep->declBit(c+953,"uart_tx", false,-1);
    tracep->declBit(c+49,"rtsn", false,-1);
    tracep->declBit(c+977,"ctsn", false,-1);
    tracep->declBit(c+50,"dtr_pad_o", false,-1);
    tracep->declBit(c+977,"dsr_pad_i", false,-1);
    tracep->declBit(c+977,"ri_pad_i", false,-1);
    tracep->declBit(c+977,"dcd_pad_i", false,-1);
    tracep->declBit(c+51,"interrupt", false,-1);
    tracep->declBit(c+967,"reg_we", false,-1);
    tracep->declBit(c+968,"reg_re", false,-1);
    tracep->declBus(c+826,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+827,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+633,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+931,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+52,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+932,"clk", false,-1);
    tracep->declBit(c+933,"wb_rst_i", false,-1);
    tracep->declBus(c+826,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+828,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+931,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+967,"wb_we_i", false,-1);
    tracep->declBit(c+968,"wb_re_i", false,-1);
    tracep->declBit(c+953,"stx_pad_o", false,-1);
    tracep->declBit(c+952,"srx_pad_i", false,-1);
    tracep->declBus(c+1042,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+52,"rts_pad_o", false,-1);
    tracep->declBit(c+50,"dtr_pad_o", false,-1);
    tracep->declBit(c+51,"int_o", false,-1);
    tracep->declBit(c+737,"enable", false,-1);
    tracep->declBit(c+53,"srx_pad", false,-1);
    tracep->declBus(c+54,"ier", false,-1, 3,0);
    tracep->declBus(c+55,"iir", false,-1, 3,0);
    tracep->declBus(c+56,"fcr", false,-1, 1,0);
    tracep->declBus(c+57,"mcr", false,-1, 4,0);
    tracep->declBus(c+738,"lcr", false,-1, 7,0);
    tracep->declBus(c+58,"msr", false,-1, 7,0);
    tracep->declBus(c+739,"dl", false,-1, 15,0);
    tracep->declBus(c+59,"scratch", false,-1, 7,0);
    tracep->declBit(c+60,"start_dlc", false,-1);
    tracep->declBit(c+61,"lsr_mask_d", false,-1);
    tracep->declBit(c+62,"msi_reset", false,-1);
    tracep->declBus(c+740,"dlc", false,-1, 15,0);
    tracep->declBus(c+63,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+64,"rx_reset", false,-1);
    tracep->declBit(c+741,"tx_reset", false,-1);
    tracep->declBit(c+742,"dlab", false,-1);
    tracep->declBit(c+975,"cts_pad_i", false,-1);
    tracep->declBit(c+977,"dsr_pad_i", false,-1);
    tracep->declBit(c+977,"ri_pad_i", false,-1);
    tracep->declBit(c+977,"dcd_pad_i", false,-1);
    tracep->declBit(c+65,"loopback", false,-1);
    tracep->declBit(c+977,"cts", false,-1);
    tracep->declBit(c+975,"dsr", false,-1);
    tracep->declBit(c+975,"ri", false,-1);
    tracep->declBit(c+975,"dcd", false,-1);
    tracep->declBit(c+66,"cts_c", false,-1);
    tracep->declBit(c+67,"dsr_c", false,-1);
    tracep->declBit(c+68,"ri_c", false,-1);
    tracep->declBit(c+69,"dcd_c", false,-1);
    tracep->declBus(c+70,"lsr", false,-1, 7,0);
    tracep->declBit(c+743,"lsr0", false,-1);
    tracep->declBit(c+71,"lsr1", false,-1);
    tracep->declBit(c+72,"lsr2", false,-1);
    tracep->declBit(c+73,"lsr3", false,-1);
    tracep->declBit(c+74,"lsr4", false,-1);
    tracep->declBit(c+744,"lsr5", false,-1);
    tracep->declBit(c+745,"lsr6", false,-1);
    tracep->declBit(c+75,"lsr7", false,-1);
    tracep->declBit(c+76,"lsr0r", false,-1);
    tracep->declBit(c+77,"lsr1r", false,-1);
    tracep->declBit(c+78,"lsr2r", false,-1);
    tracep->declBit(c+79,"lsr3r", false,-1);
    tracep->declBit(c+80,"lsr4r", false,-1);
    tracep->declBit(c+81,"lsr5r", false,-1);
    tracep->declBit(c+82,"lsr6r", false,-1);
    tracep->declBit(c+83,"lsr7r", false,-1);
    tracep->declBit(c+4,"lsr_mask", false,-1);
    tracep->declBit(c+84,"rls_int", false,-1);
    tracep->declBit(c+85,"rda_int", false,-1);
    tracep->declBit(c+86,"ti_int", false,-1);
    tracep->declBit(c+87,"thre_int", false,-1);
    tracep->declBit(c+88,"ms_int", false,-1);
    tracep->declBit(c+746,"tf_push", false,-1);
    tracep->declBit(c+89,"rf_pop", false,-1);
    tracep->declBus(c+969,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+90,"rf_error_bit", false,-1);
    tracep->declBit(c+71,"rf_overrun", false,-1);
    tracep->declBit(c+747,"rf_push_pulse", false,-1);
    tracep->declBus(c+91,"rf_count", false,-1, 4,0);
    tracep->declBus(c+748,"tf_count", false,-1, 4,0);
    tracep->declBus(c+749,"tstate", false,-1, 2,0);
    tracep->declBus(c+750,"rstate", false,-1, 3,0);
    tracep->declBus(c+92,"counter_t", false,-1, 9,0);
    tracep->declBit(c+93,"thre_set_en", false,-1);
    tracep->declBus(c+94,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+751,"block_value", false,-1, 7,0);
    tracep->declBit(c+752,"serial_out", false,-1);
    tracep->declBit(c+753,"serial_in", false,-1);
    tracep->declBit(c+5,"lsr_mask_condition", false,-1);
    tracep->declBit(c+6,"iir_read", false,-1);
    tracep->declBit(c+7,"msr_read", false,-1);
    tracep->declBit(c+8,"fifo_read", false,-1);
    tracep->declBit(c+9,"fifo_write", false,-1);
    tracep->declBus(c+95,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+96,"lsr0_d", false,-1);
    tracep->declBit(c+97,"lsr1_d", false,-1);
    tracep->declBit(c+98,"lsr2_d", false,-1);
    tracep->declBit(c+99,"lsr3_d", false,-1);
    tracep->declBit(c+100,"lsr4_d", false,-1);
    tracep->declBit(c+101,"lsr5_d", false,-1);
    tracep->declBit(c+102,"lsr6_d", false,-1);
    tracep->declBit(c+103,"lsr7_d", false,-1);
    tracep->declBit(c+104,"rls_int_d", false,-1);
    tracep->declBit(c+105,"thre_int_d", false,-1);
    tracep->declBit(c+106,"ms_int_d", false,-1);
    tracep->declBit(c+107,"ti_int_d", false,-1);
    tracep->declBit(c+108,"rda_int_d", false,-1);
    tracep->declBit(c+109,"rls_int_rise", false,-1);
    tracep->declBit(c+110,"thre_int_rise", false,-1);
    tracep->declBit(c+111,"ms_int_rise", false,-1);
    tracep->declBit(c+112,"ti_int_rise", false,-1);
    tracep->declBit(c+113,"rda_int_rise", false,-1);
    tracep->declBit(c+114,"rls_int_pnd", false,-1);
    tracep->declBit(c+115,"rda_int_pnd", false,-1);
    tracep->declBit(c+116,"thre_int_pnd", false,-1);
    tracep->declBit(c+117,"ms_int_pnd", false,-1);
    tracep->declBit(c+118,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1051,"Tp", false,-1, 31,0);
    tracep->declBus(c+1051,"width", false,-1, 31,0);
    tracep->declBus(c+1021,"init_value", false,-1, 0,0);
    tracep->declBit(c+933,"rst_i", false,-1);
    tracep->declBit(c+932,"clk_i", false,-1);
    tracep->declBit(c+977,"stage1_rst_i", false,-1);
    tracep->declBit(c+975,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+952,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+53,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+119,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+932,"clk", false,-1);
    tracep->declBit(c+933,"wb_rst_i", false,-1);
    tracep->declBus(c+738,"lcr", false,-1, 7,0);
    tracep->declBit(c+89,"rf_pop", false,-1);
    tracep->declBit(c+753,"srx_pad_i", false,-1);
    tracep->declBit(c+737,"enable", false,-1);
    tracep->declBit(c+64,"rx_reset", false,-1);
    tracep->declBit(c+4,"lsr_mask", false,-1);
    tracep->declBus(c+92,"counter_t", false,-1, 9,0);
    tracep->declBus(c+91,"rf_count", false,-1, 4,0);
    tracep->declBus(c+969,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+71,"rf_overrun", false,-1);
    tracep->declBit(c+90,"rf_error_bit", false,-1);
    tracep->declBus(c+750,"rstate", false,-1, 3,0);
    tracep->declBit(c+747,"rf_push_pulse", false,-1);
    tracep->declBus(c+754,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+755,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+756,"rshift", false,-1, 7,0);
    tracep->declBit(c+757,"rparity", false,-1);
    tracep->declBit(c+758,"rparity_error", false,-1);
    tracep->declBit(c+759,"rframing_error", false,-1);
    tracep->declBit(c+120,"rbit_in", false,-1);
    tracep->declBit(c+760,"rparity_xor", false,-1);
    tracep->declBus(c+761,"counter_b", false,-1, 7,0);
    tracep->declBit(c+121,"rf_push_q", false,-1);
    tracep->declBus(c+762,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+763,"rf_push", false,-1);
    tracep->declBit(c+764,"break_error", false,-1);
    tracep->declBit(c+765,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+766,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+767,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+768,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+987,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1040,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1039,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1035,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1037,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1036,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1038,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1034,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1042,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1043,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1052,"sr_push", false,-1, 3,0);
    tracep->declBus(c+769,"toc_value", false,-1, 9,0);
    tracep->declBus(c+770,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1053,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1045,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1030,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1054,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+932,"clk", false,-1);
    tracep->declBit(c+933,"wb_rst_i", false,-1);
    tracep->declBit(c+747,"push", false,-1);
    tracep->declBit(c+89,"pop", false,-1);
    tracep->declBus(c+762,"data_in", false,-1, 10,0);
    tracep->declBit(c+64,"fifo_reset", false,-1);
    tracep->declBit(c+4,"reset_status", false,-1);
    tracep->declBus(c+969,"data_out", false,-1, 10,0);
    tracep->declBit(c+71,"overrun", false,-1);
    tracep->declBus(c+91,"count", false,-1, 4,0);
    tracep->declBit(c+90,"error_bit", false,-1);
    tracep->declBus(c+970,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+122+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+771,"top", false,-1, 3,0);
    tracep->declBus(c+138,"bottom", false,-1, 3,0);
    tracep->declBus(c+772,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+139,"word0", false,-1, 2,0);
    tracep->declBus(c+140,"word1", false,-1, 2,0);
    tracep->declBus(c+141,"word2", false,-1, 2,0);
    tracep->declBus(c+142,"word3", false,-1, 2,0);
    tracep->declBus(c+143,"word4", false,-1, 2,0);
    tracep->declBus(c+144,"word5", false,-1, 2,0);
    tracep->declBus(c+145,"word6", false,-1, 2,0);
    tracep->declBus(c+146,"word7", false,-1, 2,0);
    tracep->declBus(c+147,"word8", false,-1, 2,0);
    tracep->declBus(c+148,"word9", false,-1, 2,0);
    tracep->declBus(c+149,"word10", false,-1, 2,0);
    tracep->declBus(c+150,"word11", false,-1, 2,0);
    tracep->declBus(c+151,"word12", false,-1, 2,0);
    tracep->declBus(c+152,"word13", false,-1, 2,0);
    tracep->declBus(c+153,"word14", false,-1, 2,0);
    tracep->declBus(c+154,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1030,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1050,"data_width", false,-1, 31,0);
    tracep->declBus(c+1045,"depth", false,-1, 31,0);
    tracep->declBit(c+932,"clk", false,-1);
    tracep->declBit(c+747,"we", false,-1);
    tracep->declBus(c+771,"a", false,-1, 3,0);
    tracep->declBus(c+138,"dpra", false,-1, 3,0);
    tracep->declBus(c+773,"di", false,-1, 7,0);
    tracep->declBus(c+970,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+634+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+932,"clk", false,-1);
    tracep->declBit(c+933,"wb_rst_i", false,-1);
    tracep->declBus(c+738,"lcr", false,-1, 7,0);
    tracep->declBit(c+746,"tf_push", false,-1);
    tracep->declBus(c+828,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+737,"enable", false,-1);
    tracep->declBit(c+741,"tx_reset", false,-1);
    tracep->declBit(c+4,"lsr_mask", false,-1);
    tracep->declBit(c+752,"stx_pad_o", false,-1);
    tracep->declBus(c+749,"tstate", false,-1, 2,0);
    tracep->declBus(c+748,"tf_count", false,-1, 4,0);
    tracep->declBus(c+774,"counter", false,-1, 4,0);
    tracep->declBus(c+775,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+776,"shift_out", false,-1, 6,0);
    tracep->declBit(c+777,"stx_o_tmp", false,-1);
    tracep->declBit(c+778,"parity_xor", false,-1);
    tracep->declBit(c+779,"tf_pop", false,-1);
    tracep->declBit(c+780,"bit_out", false,-1);
    tracep->declBus(c+828,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+786,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+155,"tf_overrun", false,-1);
    tracep->declBus(c+991,"s_idle", false,-1, 2,0);
    tracep->declBus(c+976,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1009,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1010,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1022,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1055,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1050,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1045,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1030,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1054,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+932,"clk", false,-1);
    tracep->declBit(c+933,"wb_rst_i", false,-1);
    tracep->declBit(c+746,"push", false,-1);
    tracep->declBit(c+779,"pop", false,-1);
    tracep->declBus(c+828,"data_in", false,-1, 7,0);
    tracep->declBit(c+741,"fifo_reset", false,-1);
    tracep->declBit(c+4,"reset_status", false,-1);
    tracep->declBus(c+786,"data_out", false,-1, 7,0);
    tracep->declBit(c+155,"overrun", false,-1);
    tracep->declBus(c+748,"count", false,-1, 4,0);
    tracep->declBus(c+781,"top", false,-1, 3,0);
    tracep->declBus(c+782,"bottom", false,-1, 3,0);
    tracep->declBus(c+783,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1030,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1050,"data_width", false,-1, 31,0);
    tracep->declBus(c+1045,"depth", false,-1, 31,0);
    tracep->declBit(c+932,"clk", false,-1);
    tracep->declBit(c+746,"we", false,-1);
    tracep->declBus(c+781,"a", false,-1, 3,0);
    tracep->declBus(c+782,"dpra", false,-1, 3,0);
    tracep->declBus(c+828,"di", false,-1, 7,0);
    tracep->declBus(c+786,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+650+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBit(c+668,"auto_in_psel", false,-1);
    tracep->declBit(c+669,"auto_in_penable", false,-1);
    tracep->declBit(c+158,"auto_in_pwrite", false,-1);
    tracep->declBus(c+795,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+976,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+159,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+160,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+978,"auto_in_pready", false,-1);
    tracep->declBit(c+979,"auto_in_pslverr", false,-1);
    tracep->declBus(c+980,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+946,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+947,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+948,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+949,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+950,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+951,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+932,"clock", false,-1);
    tracep->declBit(c+933,"reset", false,-1);
    tracep->declBus(c+823,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+668,"in_psel", false,-1);
    tracep->declBit(c+669,"in_penable", false,-1);
    tracep->declBus(c+976,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+158,"in_pwrite", false,-1);
    tracep->declBus(c+159,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+160,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+978,"in_pready", false,-1);
    tracep->declBus(c+980,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+979,"in_pslverr", false,-1);
    tracep->declBus(c+946,"vga_r", false,-1, 7,0);
    tracep->declBus(c+947,"vga_g", false,-1, 7,0);
    tracep->declBus(c+948,"vga_b", false,-1, 7,0);
    tracep->declBit(c+949,"vga_hsync", false,-1);
    tracep->declBit(c+950,"vga_vsync", false,-1);
    tracep->declBit(c+951,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+1,"sck", false,-1);
    tracep->declBit(c+977,"ss", false,-1);
    tracep->declBit(c+975,"mosi", false,-1);
    tracep->declBit(c+975,"miso", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+1,"sck", false,-1);
    tracep->declBit(c+3,"ss", false,-1);
    tracep->declBit(c+975,"mosi", false,-1);
    tracep->declBit(c+954,"miso", false,-1);
    tracep->declBit(c+3,"reset", false,-1);
    tracep->declBus(c+787,"state", false,-1, 2,0);
    tracep->declBus(c+788,"counter", false,-1, 7,0);
    tracep->declBus(c+789,"cmd", false,-1, 7,0);
    tracep->declBus(c+790,"addr", false,-1, 23,0);
    tracep->declBus(c+971,"data", false,-1, 31,0);
    tracep->declBit(c+791,"ren", false,-1);
    tracep->declBus(c+972,"rdata", false,-1, 31,0);
    tracep->declBus(c+792,"raddr", false,-1, 31,0);
    tracep->declBus(c+973,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+791,"valid", false,-1);
    tracep->declBus(c+789,"cmd", false,-1, 7,0);
    tracep->declBus(c+792,"addr", false,-1, 31,0);
    tracep->declBus(c+972,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+955,"sck", false,-1);
    tracep->declBit(c+956,"ce_n", false,-1);
    tracep->declBus(c+829,"dio", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+957,"clk", false,-1);
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
    bufp->fullBit(oldp+1,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullIData(oldp+2,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__i),32);
    bufp->fullBit(oldp+3,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+4,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+5,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+6,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+7,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+8,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+9,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
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
    bufp->fullBit(oldp+20,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullBit(oldp+21,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+23,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullIData(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullBit(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+30,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullSData(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),16);
    bufp->fullCData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullBit(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullSData(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),16);
    bufp->fullCData(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),2);
    bufp->fullBit(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullSData(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),16);
    bufp->fullSData(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),16);
    bufp->fullIData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullBit(oldp+49,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                     >> 1U)))));
    bufp->fullBit(oldp+50,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+52,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                  >> 1U))));
    bufp->fullBit(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullCData(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullCData(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+65,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                  >> 4U))));
    bufp->fullBit(oldp+66,((IData)((0x10U != (0x12U 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+67,((IData)((0x11U == (0x11U 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+68,((IData)((0x14U == (0x14U 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+69,((IData)((0x18U == (0x18U 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+70,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+72,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                  >> 1U))));
    bufp->fullBit(oldp+73,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+74,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                  >> 2U))));
    bufp->fullBit(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+90,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullCData(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullSData(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+93,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+109,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+110,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+111,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+112,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+113,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullBit(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullCData(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullBit(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullBit(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+157,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w),32);
    bufp->fullCData(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullIData(oldp+161,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullIData(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data),32);
    bufp->fullBit(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_awvalid));
    bufp->fullCData(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_wvalid));
    bufp->fullQData(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),64);
    bufp->fullCData(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),8);
    bufp->fullCData(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_arvalid));
    bufp->fullCData(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg),32);
    bufp->fullQData(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),64);
    bufp->fullQData(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg),64);
    bufp->fullCData(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),8);
    bufp->fullCData(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg),8);
    bufp->fullCData(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+192,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+193,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state))));
    bufp->fullIData(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_w_addr_o),32);
    bufp->fullCData(oldp+195,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__mask)),3);
    bufp->fullBit(oldp+196,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+197,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state))));
    bufp->fullQData(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata),64);
    bufp->fullCData(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb),8);
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast));
    bufp->fullBit(oldp+202,(((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state)) 
                             | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state)))));
    bufp->fullBit(oldp+203,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+204,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_state))));
    bufp->fullIData(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_addr_o),32);
    bufp->fullCData(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_size_o),3);
    bufp->fullBit(oldp+207,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_state))));
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+209,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+211,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+213,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+214,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullCData(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullSData(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullCData(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullIData(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullQData(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullQData(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+259,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                    ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram[2U] 
                                       >> 8U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast)))));
    bufp->fullWData(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),73);
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid));
    bufp->fullIData(oldp+265,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+266,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+269,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+270,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+271,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullQData(oldp+274,((((QData)((IData)((0xffU 
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
    bufp->fullCData(oldp+276,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+277,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullCData(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r4),8);
    bufp->fullCData(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r5),8);
    bufp->fullCData(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r6),8);
    bufp->fullCData(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r7),8);
    bufp->fullSData(oldp+289,((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 3U))),10);
    bufp->fullQData(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),64);
    bufp->fullSData(oldp+292,((0x3ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 3U))),10);
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+295,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
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
    bufp->fullBit(oldp+296,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 1U))));
    bufp->fullBit(oldp+297,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+298,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+299,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullQData(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),64);
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+308,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                    | ((0xcU & (8U 
                                                ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                       | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x17U)) 
                                          | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+355,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullCData(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+368,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+372,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+376,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+380,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+384,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+388,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+392,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+396,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+400,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+404,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+408,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+412,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+416,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+420,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+424,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+428,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+432,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+436,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+440,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+444,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+448,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+452,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+456,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+460,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+464,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+468,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+472,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+476,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+480,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+484,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+488,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+492,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_pc_o_r),32);
    bufp->fullIData(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r),32);
    bufp->fullBit(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_stall_r));
    bufp->fullIData(oldp+499,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_mret)
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
    bufp->fullBit(oldp+500,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_mret) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_ecall) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h15124160__0) 
                                   | (0x67U == (0x7fU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)))))));
    bufp->fullIData(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__pc),32);
    bufp->fullBit(oldp+502,((0x63U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r))));
    bufp->fullBit(oldp+503,((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r))));
    bufp->fullBit(oldp+504,((0x67U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r))));
    bufp->fullCData(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_rd),5);
    bufp->fullBit(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_rd_wen));
    bufp->fullCData(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_rs1),5);
    bufp->fullCData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_rs2),5);
    bufp->fullIData(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r),32);
    bufp->fullCData(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_alu_opt),4);
    bufp->fullCData(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_src_sel),2);
    bufp->fullCData(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt),2);
    bufp->fullCData(oldp+513,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                     >> 0xcU))),3);
    bufp->fullIData(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src1),32);
    bufp->fullIData(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src2),32);
    bufp->fullBit(oldp+516,((1U & (~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__exu_result_r))))));
    bufp->fullIData(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__exu_result_r),32);
    bufp->fullBit(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__ren));
    bufp->fullIData(oldp+519,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h623bd169__0
                                : 0U)),32);
    bufp->fullCData(oldp+520,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__rsize)),3);
    bufp->fullBit(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__wen));
    bufp->fullBit(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_ecall));
    bufp->fullBit(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_mret));
    bufp->fullIData(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wr_csr_data),32);
    bufp->fullIData(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                              [0x300U]),32);
    bufp->fullIData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                              [0x305U]),32);
    bufp->fullIData(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                              [0x341U]),32);
    bufp->fullBit(oldp+528,((1U & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_stall_r)
                                    : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state))
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__ren)
                                        : 0U)))));
    bufp->fullCData(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state),2);
    bufp->fullCData(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_state),3);
    bufp->fullQData(oldp+531,((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src2))),64);
    bufp->fullCData(oldp+533,(((0U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__mask))
                                ? 1U : ((1U == (7U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__mask))
                                         ? 3U : 0xfU))),8);
    bufp->fullCData(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_w_cnt),8);
    bufp->fullCData(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_state),2);
    bufp->fullSData(oldp+536,((0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r)),12);
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__wr_en));
    bufp->fullIData(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__wr_data_r),32);
    bufp->fullIData(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__temp),32);
    bufp->fullIData(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__mepc_inst_r),32);
    bufp->fullIData(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                              [0x342U]),32);
    bufp->fullIData(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data),32);
    bufp->fullIData(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_b_data),32);
    bufp->fullIData(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__alu_out_data_r),32);
    bufp->fullBit(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__sub_flag));
    bufp->fullQData(oldp+546,((((QData)((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data 
                                                 >> 0x1fU))) 
                                << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data)))),33);
    bufp->fullQData(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__alu_b_t),33);
    bufp->fullQData(oldp+550,((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__sub_flag))),33);
    bufp->fullQData(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out),33);
    bufp->fullBit(oldp+554,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data 
                             >> 0x1fU)));
    bufp->fullBit(oldp+555,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__alu_b_t 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+556,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+557,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+558,((1U & VL_REDXOR_64((0x180000000ULL 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__ex_alu__DOT__add_out)))));
    bufp->fullBit(oldp+559,((1U & ((((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data 
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
    bufp->fullIData(oldp+560,((IData)(((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_a_data))) 
                                       >> (0x3fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__alu_b_data)))),32);
    bufp->fullCData(oldp+561,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)),7);
    bufp->fullCData(oldp+562,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                               >> 0x19U)),7);
    bufp->fullIData(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_typeI),32);
    bufp->fullIData(oldp+564,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)),32);
    bufp->fullIData(oldp+565,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+566,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
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
    bufp->fullIData(oldp+567,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
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
    bufp->fullSData(oldp+568,(((0x1000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                           >> 0x13U)) 
                               | ((0x800U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                             << 4U)) 
                                  | ((0x7e0U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                >> 0x14U)) 
                                     | (0x1eU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                 >> 7U)))))),13);
    bufp->fullSData(oldp+569,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+570,(((0x100000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                             >> 0xbU)) 
                               | ((0xff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r) 
                                  | ((0x800U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                >> 9U)) 
                                     | (0x7feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                                  >> 0x14U)))))),21);
    bufp->fullSData(oldp+571,(((0xfe0U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r 
                                           >> 7U)))),12);
    bufp->fullIData(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__rsize),32);
    bufp->fullIData(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__mask),32);
    bufp->fullIData(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[0]),32);
    bufp->fullIData(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[1]),32);
    bufp->fullIData(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[2]),32);
    bufp->fullIData(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[3]),32);
    bufp->fullIData(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[4]),32);
    bufp->fullIData(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[5]),32);
    bufp->fullIData(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[6]),32);
    bufp->fullIData(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[7]),32);
    bufp->fullIData(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[8]),32);
    bufp->fullIData(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[9]),32);
    bufp->fullIData(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[10]),32);
    bufp->fullIData(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[11]),32);
    bufp->fullIData(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[12]),32);
    bufp->fullIData(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[13]),32);
    bufp->fullIData(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[14]),32);
    bufp->fullIData(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[15]),32);
    bufp->fullIData(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[16]),32);
    bufp->fullIData(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[17]),32);
    bufp->fullIData(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[18]),32);
    bufp->fullIData(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[19]),32);
    bufp->fullIData(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[20]),32);
    bufp->fullIData(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[21]),32);
    bufp->fullIData(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[22]),32);
    bufp->fullIData(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[23]),32);
    bufp->fullIData(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[24]),32);
    bufp->fullIData(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[25]),32);
    bufp->fullIData(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[26]),32);
    bufp->fullIData(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[27]),32);
    bufp->fullIData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[28]),32);
    bufp->fullIData(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[29]),32);
    bufp->fullIData(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[30]),32);
    bufp->fullIData(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile_u0__DOT__gpr[31]),32);
    bufp->fullBit(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu_u0__idu_rd_wen));
    bufp->fullBit(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullIData(oldp+617,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+623,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+624,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+625,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                   << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullCData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+630,((0xffU & ((IData)(0xdU) 
                                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                           << 1U)))),8);
    bufp->fullCData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+632,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)
                                ? 0U : 3U)),8);
    bufp->fullCData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+666,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+667,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+668,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+669,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+670,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+671,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+672,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+673,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+674,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+675,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_penable) 
                             & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_psel)))));
    bufp->fullCData(oldp+676,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                   << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r))),2);
    bufp->fullQData(oldp+677,((((QData)((IData)(((1U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                  : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((1U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                              ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                              : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))))),64);
    bufp->fullCData(oldp+679,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullQData(oldp+680,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullBit(oldp+682,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+683,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+684,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+685,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+686,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+687,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+688,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+689,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+690,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+691,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+692,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+693,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+694,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+695,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+696,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+697,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+698,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+699,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+700,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+701,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+702,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+703,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+704,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+705,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+706,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+707,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+708,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+709,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+710,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+711,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+712,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+713,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+714,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+715,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+716,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+717,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_ready_i))));
    bufp->fullIData(oldp+718,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state))
                                ? (IData)(vlSelf->__VdfgTmp_h082df4c2__0)
                                : 0U)),32);
    bufp->fullBit(oldp+719,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_last_i))));
    bufp->fullIData(oldp+720,(((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
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
                                                   ? (IData)(vlSelf->__VdfgTmp_h082df4c2__0)
                                                   : 0U))
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                  ? 
                                                 (((- (IData)(
                                                              ((2U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                                                               & (IData)(
                                                                         (vlSelf->__VdfgTmp_h082df4c2__0 
                                                                          >> 0xfU))))) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h56d28e90__0))
                                                  : 
                                                 (((- (IData)(
                                                              ((2U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                                                               & (IData)(
                                                                         (vlSelf->__VdfgTmp_h082df4c2__0 
                                                                          >> 7U))))) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h56d2889a__0)))))
                                         : 0U))),32);
    bufp->fullBit(oldp+721,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_ready_i))));
    bufp->fullIData(oldp+722,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state))
                                ? (IData)(vlSelf->__VdfgTmp_h082df4c2__0)
                                : 0U)),32);
    bufp->fullBit(oldp+723,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_last_i))));
    bufp->fullBit(oldp+724,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu_u0__idu_rd_wen)
                              : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu_u0__idu_rd_wen)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rd_wen)))));
    bufp->fullBit(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullBit(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+727,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+728,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullCData(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullCData(oldp+730,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+731,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullCData(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullWData(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullCData(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullSData(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullSData(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullBit(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+742,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullCData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullSData(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+764,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+765,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+766,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+767,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+768,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+770,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+772,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+773,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullCData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+783,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullCData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullCData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullCData(oldp+787,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+788,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+789,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+790,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullBit(oldp+791,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullIData(oldp+792,((1U | (0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                                  << 1U)))),32);
    bufp->fullIData(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w),32);
    bufp->fullBit(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullIData(oldp+795,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),30);
    bufp->fullIData(oldp+796,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),29);
    bufp->fullBit(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel));
    bufp->fullBit(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel));
    bufp->fullBit(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable));
    bufp->fullBit(oldp+800,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel))));
    bufp->fullBit(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_psel));
    bufp->fullBit(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_penable));
    bufp->fullBit(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullCData(oldp+810,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullIData(oldp+811,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullBit(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullIData(oldp+814,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullIData(oldp+815,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullBit(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+820,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                         >> 1U))),13);
    bufp->fullSData(oldp+821,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+822,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                     >> 0xaU))),2);
    bufp->fullIData(oldp+823,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullBit(oldp+824,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_penable)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_psel))));
    bufp->fullIData(oldp+825,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullCData(oldp+826,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),3);
    bufp->fullCData(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in),8);
    bufp->fullCData(oldp+829,((((((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten))) 
                                  | (0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten)))) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0))),4);
    bufp->fullBit(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_bready));
    bufp->fullBit(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_rready));
    bufp->fullBit(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_w_last_i));
    bufp->fullCData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_ready_i));
    bufp->fullCData(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19),4);
    bufp->fullBit(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__cpu_r_last_i));
    bufp->fullBit(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4));
    bufp->fullBit(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_bready));
    bufp->fullBit(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_rready));
    bufp->fullBit(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__nodeIn_awready));
    bufp->fullBit(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAROI_in_0_arready_T_4));
    bufp->fullBit(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+883,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+884,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+885,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+886,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+887,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+888,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+889,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+890,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+891,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+892,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+893,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+894,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+895,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+896,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+897,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+898,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+899,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+900,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+901,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+902,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+903,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+904,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+905,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+906,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+907,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+908,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+909,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+910,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+911,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+912,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+913,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+914,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__stall));
    bufp->fullBit(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rd_wen));
    bufp->fullIData(oldp+917,((IData)(vlSelf->__VdfgTmp_h082df4c2__0)),32);
    bufp->fullBit(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__flush_inst));
    bufp->fullBit(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__lsu_rd_wen_r));
    bufp->fullBit(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT__lsu_rd_wen_w));
    bufp->fullCData(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullCData(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+932,(vlSelf->clock));
    bufp->fullBit(oldp+933,(vlSelf->reset));
    bufp->fullSData(oldp+934,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+935,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+936,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+937,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+938,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+939,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+940,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+941,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+942,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+943,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+944,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+945,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+946,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+947,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+948,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+949,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+950,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+951,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+952,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+953,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+954,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                   | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                        ? ((vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                            << 0x18U) 
                                           | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                    >> 0x18U))))
                                        : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                      >> 0x1fU)))));
    bufp->fullBit(oldp+955,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)
                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))));
    bufp->fullBit(oldp+956,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)
                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n))));
    bufp->fullBit(oldp+957,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+958,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel))));
    bufp->fullIData(oldp+959,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel)
                                ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                    << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                : 0U)),32);
    bufp->fullCData(oldp+960,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                 ? ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                        << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r))
                                 : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                           ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                               ? 0U
                                               : 3U)
                                           : 0U))),2);
    bufp->fullBit(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullIData(oldp+962,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_lsu_opt))
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
                                                     ? (IData)(vlSelf->__VdfgTmp_h082df4c2__0)
                                                     : 0U))
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__ifu_inst_o_r)
                                                    ? 
                                                   (((- (IData)(
                                                                ((2U 
                                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                                                                 & (IData)(
                                                                           (vlSelf->__VdfgTmp_h082df4c2__0 
                                                                            >> 0xfU))))) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h56d28e90__0))
                                                    : 
                                                   (((- (IData)(
                                                                ((2U 
                                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__arbiter_state)) 
                                                                 & (IData)(
                                                                           (vlSelf->__VdfgTmp_h082df4c2__0 
                                                                            >> 7U))))) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_u0__DOT____VdfgTmp_h56d2889a__0)))))
                                                 : 0U))))),32);
    bufp->fullIData(oldp+963,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)
                                ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__wr_en)
                                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_u0__DOT__csr_reg
                                        [(0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_u0__DOT__id_imm_idu__DOT__imm_r)]
                                         : 0U))),32);
    bufp->fullBit(oldp+964,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                              : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+965,((0xfU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+966,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+969,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullIData(oldp+971,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullIData(oldp+972,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+973,(((vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                << 0x18U) | ((0xff0000U 
                                              & (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                 << 8U)) 
                                             | ((0xff00U 
                                                 & (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                    >> 8U)) 
                                                | (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                   >> 0x18U))))),32);
    bufp->fullCData(oldp+974,(0U),8);
    bufp->fullBit(oldp+975,(1U));
    bufp->fullCData(oldp+976,(1U),3);
    bufp->fullBit(oldp+977,(0U));
    bufp->fullBit(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+987,(0U),4);
    bufp->fullCData(oldp+988,(1U),2);
    bufp->fullBit(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+990,(0U),32);
    bufp->fullCData(oldp+991,(0U),3);
    bufp->fullCData(oldp+992,(0U),2);
    bufp->fullBit(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullQData(oldp+994,(0ULL),64);
    bufp->fullBit(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullQData(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),64);
    bufp->fullBit(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_inst_t),32);
    bufp->fullIData(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_result_t),32);
    bufp->fullCData(oldp+1008,(2U),2);
    bufp->fullCData(oldp+1009,(2U),3);
    bufp->fullCData(oldp+1010,(3U),3);
    bufp->fullCData(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_arbiter_u0__DOT__axi_u0__DOT__axi_r_cnt),8);
    bufp->fullBit(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__carry_flag));
    bufp->fullBit(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_u0__DOT__signed_flag));
    bufp->fullCData(oldp+1014,(0U),5);
    bufp->fullIData(oldp+1015,(0xdU),32);
    bufp->fullIData(oldp+1016,(0xcU),32);
    bufp->fullIData(oldp+1017,(0x15U),32);
    bufp->fullIData(oldp+1018,(0x20U),32);
    bufp->fullIData(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_u0__DOT__inst_t),32);
    bufp->fullBit(oldp+1020,(0U));
    bufp->fullBit(oldp+1021,(1U));
    bufp->fullCData(oldp+1022,(4U),3);
    bufp->fullCData(oldp+1023,(0x1bU),8);
    bufp->fullCData(oldp+1024,(0xebU),8);
    bufp->fullCData(oldp+1025,(0x38U),8);
    bufp->fullIData(oldp+1026,(0x64U),32);
    bufp->fullIData(oldp+1027,(0x18U),32);
    bufp->fullIData(oldp+1028,(9U),32);
    bufp->fullIData(oldp+1029,(2U),32);
    bufp->fullIData(oldp+1030,(4U),32);
    bufp->fullIData(oldp+1031,(0x2000U),32);
    bufp->fullIData(oldp+1032,(0x2710U),32);
    bufp->fullIData(oldp+1033,(0x30cU),32);
    bufp->fullCData(oldp+1034,(7U),4);
    bufp->fullCData(oldp+1035,(3U),4);
    bufp->fullCData(oldp+1036,(5U),4);
    bufp->fullCData(oldp+1037,(4U),4);
    bufp->fullCData(oldp+1038,(6U),4);
    bufp->fullCData(oldp+1039,(2U),4);
    bufp->fullCData(oldp+1040,(1U),4);
    bufp->fullSData(oldp+1041,(0x21U),13);
    bufp->fullCData(oldp+1042,(8U),4);
    bufp->fullCData(oldp+1043,(9U),4);
    bufp->fullIData(oldp+1044,(0xaU),32);
    bufp->fullIData(oldp+1045,(0x10U),32);
    bufp->fullIData(oldp+1046,(6U),32);
    bufp->fullIData(oldp+1047,(0x11U),32);
    bufp->fullIData(oldp+1048,(0x30000000U),32);
    bufp->fullIData(oldp+1049,(0x3fffffffU),32);
    bufp->fullIData(oldp+1050,(8U),32);
    bufp->fullIData(oldp+1051,(1U),32);
    bufp->fullCData(oldp+1052,(0xaU),4);
    bufp->fullIData(oldp+1053,(0xbU),32);
    bufp->fullIData(oldp+1054,(5U),32);
    bufp->fullCData(oldp+1055,(5U),3);
}
