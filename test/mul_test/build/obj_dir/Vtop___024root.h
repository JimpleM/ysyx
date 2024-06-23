// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    CData/*0:0*/ top__DOT__wallace_u0__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__wallace_csa__DOT__cin;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    VL_IN(a,31,0);
    VL_IN(b,31,0);
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VL_OUT64(result,63,0);
    QData/*33:0*/ top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h50e97101__0;
    QData/*33:0*/ top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0;
    VlUnpacked<VlWide<3>/*67:0*/, 5> top__DOT__wallace_u0__DOT__pipe1_s;
    VlUnpacked<VlWide<3>/*67:0*/, 5> top__DOT__wallace_u0__DOT__pipe1_c;
    VlUnpacked<VlWide<3>/*67:0*/, 4> top__DOT__wallace_u0__DOT__pipe2_s;
    VlUnpacked<VlWide<3>/*67:0*/, 4> top__DOT__wallace_u0__DOT__pipe2_c;
    VlUnpacked<VlWide<3>/*67:0*/, 2> top__DOT__wallace_u0__DOT__pipe3_s;
    VlUnpacked<VlWide<3>/*67:0*/, 2> top__DOT__wallace_u0__DOT__pipe3_c;
    VlUnpacked<VlWide<3>/*67:0*/, 2> top__DOT__wallace_u0__DOT__pipe4_s;
    VlUnpacked<VlWide<3>/*67:0*/, 2> top__DOT__wallace_u0__DOT__pipe4_c;
    VlUnpacked<VlWide<3>/*67:0*/, 1> top__DOT__wallace_u0__DOT__pipe5_s;
    VlUnpacked<VlWide<3>/*67:0*/, 1> top__DOT__wallace_u0__DOT__pipe5_c;
    VlUnpacked<VlWide<3>/*67:0*/, 1> top__DOT__wallace_u0__DOT__pipe6_s;
    VlUnpacked<VlWide<3>/*67:0*/, 1> top__DOT__wallace_u0__DOT__pipe6_c;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
