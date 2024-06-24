// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__top__DOT__div_u0__DOT__div_state;
    __Vdly__top__DOT__div_u0__DOT__div_state = 0;
    QData/*63:0*/ __Vdly__top__DOT__div_u0__DOT__d_reg;
    __Vdly__top__DOT__div_u0__DOT__d_reg = 0;
    IData/*31:0*/ __Vdly__top__DOT__div_u0__DOT__s_reg;
    __Vdly__top__DOT__div_u0__DOT__s_reg = 0;
    CData/*7:0*/ __Vdly__top__DOT__div_u0__DOT__div_count;
    __Vdly__top__DOT__div_u0__DOT__div_count = 0;
    IData/*31:0*/ __Vdly__top__DOT__div_u0__DOT__quot_r;
    __Vdly__top__DOT__div_u0__DOT__quot_r = 0;
    // Body
    __Vdly__top__DOT__div_u0__DOT__quot_r = vlSelf->top__DOT__div_u0__DOT__quot_r;
    __Vdly__top__DOT__div_u0__DOT__div_count = vlSelf->top__DOT__div_u0__DOT__div_count;
    __Vdly__top__DOT__div_u0__DOT__div_state = vlSelf->top__DOT__div_u0__DOT__div_state;
    __Vdly__top__DOT__div_u0__DOT__s_reg = vlSelf->top__DOT__div_u0__DOT__s_reg;
    __Vdly__top__DOT__div_u0__DOT__d_reg = vlSelf->top__DOT__div_u0__DOT__d_reg;
    if (vlSelf->reset) {
        __Vdly__top__DOT__div_u0__DOT__div_state = 0U;
        __Vdly__top__DOT__div_u0__DOT__d_reg = 0ULL;
        __Vdly__top__DOT__div_u0__DOT__s_reg = 0U;
        __Vdly__top__DOT__div_u0__DOT__div_count = 0U;
        __Vdly__top__DOT__div_u0__DOT__quot_r = 0U;
        vlSelf->quotient = 0U;
        vlSelf->remainder = 0U;
    } else if ((2U & (IData)(vlSelf->top__DOT__div_u0__DOT__div_state))) {
        if ((1U & (IData)(vlSelf->top__DOT__div_u0__DOT__div_state))) {
            __Vdly__top__DOT__div_u0__DOT__div_state = 0U;
        } else {
            vlSelf->quotient = (((vlSelf->a ^ vlSelf->b) 
                                 >> 0x1fU) ? ((IData)(1U) 
                                              + (~ vlSelf->top__DOT__div_u0__DOT__quot_r))
                                 : vlSelf->top__DOT__div_u0__DOT__quot_r);
            vlSelf->remainder = ((vlSelf->a >> 0x1fU)
                                  ? ((IData)(1U) + 
                                     (~ (IData)((vlSelf->top__DOT__div_u0__DOT__d_reg 
                                                 >> 0x20U))))
                                  : (IData)((vlSelf->top__DOT__div_u0__DOT__d_reg 
                                             >> 0x20U)));
            __Vdly__top__DOT__div_u0__DOT__div_state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->top__DOT__div_u0__DOT__div_state))) {
        __Vdly__top__DOT__div_u0__DOT__div_count = 
            (0xffU & ((IData)(vlSelf->top__DOT__div_u0__DOT__div_count) 
                      - (IData)(1U)));
        if (((vlSelf->top__DOT__div_u0__DOT__d_reg 
              >> 0x1fU) >= (QData)((IData)(vlSelf->top__DOT__div_u0__DOT__s_reg)))) {
            __Vdly__top__DOT__div_u0__DOT__quot_r = 
                (1U | (vlSelf->top__DOT__div_u0__DOT__quot_r 
                       << 1U));
            __Vdly__top__DOT__div_u0__DOT__d_reg = 
                (((QData)((IData)(vlSelf->top__DOT__div_u0__DOT__dividend_sub)) 
                  << 0x20U) | (QData)((IData)(((IData)(vlSelf->top__DOT__div_u0__DOT__d_reg) 
                                               << 1U))));
        } else {
            __Vdly__top__DOT__div_u0__DOT__quot_r = 
                (vlSelf->top__DOT__div_u0__DOT__quot_r 
                 << 1U);
            __Vdly__top__DOT__div_u0__DOT__d_reg = 
                (vlSelf->top__DOT__div_u0__DOT__d_reg 
                 << 1U);
        }
        __Vdly__top__DOT__div_u0__DOT__div_state = 
            ((0U == (IData)(vlSelf->top__DOT__div_u0__DOT__div_count))
              ? 2U : 1U);
    } else {
        __Vdly__top__DOT__div_u0__DOT__d_reg = (QData)((IData)(
                                                               ((vlSelf->a 
                                                                 >> 0x1fU)
                                                                 ? 
                                                                ((IData)(1U) 
                                                                 + 
                                                                 (~ vlSelf->a))
                                                                 : vlSelf->a)));
        __Vdly__top__DOT__div_u0__DOT__s_reg = ((vlSelf->b 
                                                 >> 0x1fU)
                                                 ? 
                                                ((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->b))
                                                 : vlSelf->b);
        __Vdly__top__DOT__div_u0__DOT__div_count = 0x1fU;
        __Vdly__top__DOT__div_u0__DOT__quot_r = 0U;
        vlSelf->quotient = 0U;
        vlSelf->remainder = 0U;
        __Vdly__top__DOT__div_u0__DOT__div_state = 1U;
    }
    vlSelf->top__DOT__div_u0__DOT__div_state = __Vdly__top__DOT__div_u0__DOT__div_state;
    vlSelf->top__DOT__div_u0__DOT__div_count = __Vdly__top__DOT__div_u0__DOT__div_count;
    vlSelf->top__DOT__div_u0__DOT__quot_r = __Vdly__top__DOT__div_u0__DOT__quot_r;
    vlSelf->top__DOT__div_u0__DOT__d_reg = __Vdly__top__DOT__div_u0__DOT__d_reg;
    vlSelf->top__DOT__div_u0__DOT__s_reg = __Vdly__top__DOT__div_u0__DOT__s_reg;
    vlSelf->top__DOT__div_u0__DOT__dividend_sub = (0x1ffffffffULL 
                                                   & ((vlSelf->top__DOT__div_u0__DOT__d_reg 
                                                       >> 0x1fU) 
                                                      - (QData)((IData)(vlSelf->top__DOT__div_u0__DOT__s_reg))));
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/jimple/Documents/ysyx/ysyx-workbench/test/div_test/vsrc/top.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/jimple/Documents/ysyx/ysyx-workbench/test/div_test/vsrc/top.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
