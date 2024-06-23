// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[1U][0U] 
        = ((0xbfffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [1U][0U]) | (0x40000000U & (((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h50e97101__0 
                                                  >> 0x1eU)) 
                                         << 0x1eU) 
                                        ^ (0xc0000000U 
                                           & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                               [4U][0U] 
                                               ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                               [3U][0U]) 
                                              << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[1U][0U] 
        = ((0x7fffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [1U][0U]) | (0x80000000U & (((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h50e97101__0 
                                                  >> 0x1fU)) 
                                         << 0x1fU) 
                                        ^ (0x80000000U 
                                           & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                               [4U][0U] 
                                               ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                               [3U][0U]) 
                                              << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[1U][1U] 
        = ((0xfffffffeU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [1U][1U]) | (1U & ((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h50e97101__0 
                                        >> 0x20U)) 
                               ^ ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                   [4U][0U] ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                   [3U][0U]) >> 0x1fU))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[1U][1U] 
        = ((0xfffffffdU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [1U][1U]) | (2U & (((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h50e97101__0 
                                         >> 0x21U)) 
                                ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                   [4U][1U] ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                   [3U][1U])) << 1U)));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[1U][1U] 
        = ((0xfffffffbU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [1U][1U]) | (4U & (((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h50e97101__0 
                                         >> 0x21U)) 
                                << 2U) ^ (0xfffffffcU 
                                          & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                              [4U][1U] 
                                              ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                              [3U][1U]) 
                                             << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[1U][1U] 
        = ((0xfffffff7U & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [1U][1U]) | (8U & (((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h50e97101__0 
                                         >> 0x21U)) 
                                << 3U) ^ (0xfffffff8U 
                                          & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                              [4U][1U] 
                                              ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                              [3U][1U]) 
                                             << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[1U][1U] 
        = ((0xffffffefU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [1U][1U]) | (0x10U & (((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h50e97101__0 
                                            >> 0x21U)) 
                                   << 4U) ^ (0xfffffff0U 
                                             & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                                 [4U][1U] 
                                                 ^ 
                                                 vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                                 [3U][1U]) 
                                                << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[1U][1U] 
        = ((0xffffffdfU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [1U][1U]) | (0x20U & (((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h50e97101__0 
                                            >> 0x21U)) 
                                   << 5U) ^ (0xffffffe0U 
                                             & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                                 [4U][1U] 
                                                 ^ 
                                                 vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                                 [3U][1U]) 
                                                << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[1U][1U] 
        = ((0xffffffbfU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [1U][1U]) | (0x40U & (((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h50e97101__0 
                                            >> 0x21U)) 
                                   << 6U) ^ (0xffffffc0U 
                                             & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                                 [4U][1U] 
                                                 ^ 
                                                 vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                                 [3U][1U]) 
                                                << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[1U][1U] 
        = ((0xffffff7fU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [1U][1U]) | (0x80U & (((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h50e97101__0 
                                            >> 0x21U)) 
                                   << 7U) ^ (0xffffff80U 
                                             & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                                 [4U][1U] 
                                                 ^ 
                                                 vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                                 [3U][1U]) 
                                                << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[1U][1U] 
        = ((0xfffffeffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [1U][1U]) | (0x100U & (((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h50e97101__0 
                                             >> 0x21U)) 
                                    << 8U) ^ (0xffffff00U 
                                              & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                                  [4U][1U] 
                                                  ^ 
                                                  vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                                  [3U][1U]) 
                                                 << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[1U][1U] 
        = ((0xfffffdffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [1U][1U]) | (0x200U & (((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h50e97101__0 
                                             >> 0x21U)) 
                                    << 9U) ^ (0xfffffe00U 
                                              & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                                  [4U][1U] 
                                                  ^ 
                                                  vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                                  [3U][1U]) 
                                                 << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[1U][1U] 
        = ((0xfffffbffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [1U][1U]) | (0x400U & (((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h50e97101__0 
                                             >> 0x21U)) 
                                    << 0xaU) ^ (0xfffffc00U 
                                                & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                                    [4U][1U] 
                                                    ^ 
                                                    vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                                    [3U][1U]) 
                                                   << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[1U][1U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [1U][1U]) | (0x800U & (((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h50e97101__0 
                                             >> 0x21U)) 
                                    << 0xbU) ^ (0xfffff800U 
                                                & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                                    [4U][1U] 
                                                    ^ 
                                                    vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                                    [3U][1U]) 
                                                   << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[1U][1U] 
        = ((0xffffefffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [1U][1U]) | (0x1000U & (((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h50e97101__0 
                                              >> 0x21U)) 
                                     << 0xcU) ^ (0xfffff000U 
                                                 & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                                     [4U][1U] 
                                                     ^ 
                                                     vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                                     [3U][1U]) 
                                                    << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[1U][1U] 
        = ((0xffffdfffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [1U][1U]) | (0x2000U & (((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h50e97101__0 
                                              >> 0x21U)) 
                                     << 0xdU) ^ (0xffffe000U 
                                                 & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                                     [4U][1U] 
                                                     ^ 
                                                     vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                                     [3U][1U]) 
                                                    << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[1U][1U] 
        = ((0xffffbfffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [1U][1U]) | (0x4000U & (((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h50e97101__0 
                                              >> 0x21U)) 
                                     << 0xeU) ^ (0xffffc000U 
                                                 & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                                     [4U][1U] 
                                                     ^ 
                                                     vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                                     [3U][1U]) 
                                                    << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[1U][1U] 
        = ((0xffff7fffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [1U][1U]) | (0x8000U & (((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h50e97101__0 
                                              >> 0x21U)) 
                                     << 0xfU) ^ (0xffff8000U 
                                                 & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                                     [4U][1U] 
                                                     ^ 
                                                     vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                                     [3U][1U]) 
                                                    << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[1U][1U] 
        = ((0xfffeffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [1U][1U]) | (0x10000U & (((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h50e97101__0 
                                               >> 0x21U)) 
                                      << 0x10U) ^ (0xffff0000U 
                                                   & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                                       [4U][1U] 
                                                       ^ 
                                                       vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                                       [3U][1U]) 
                                                      << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[1U][1U] 
        = ((0xfffdffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [1U][1U]) | (0x20000U & (((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h50e97101__0 
                                               >> 0x21U)) 
                                      << 0x11U) ^ (0xfffe0000U 
                                                   & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                                       [4U][1U] 
                                                       ^ 
                                                       vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                                       [3U][1U]) 
                                                      << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[1U][1U] 
        = ((0xfffbffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [1U][1U]) | (0x40000U & (((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h50e97101__0 
                                               >> 0x21U)) 
                                      << 0x12U) ^ (0xfffc0000U 
                                                   & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                                       [4U][1U] 
                                                       ^ 
                                                       vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                                       [3U][1U]) 
                                                      << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[1U][1U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [1U][1U]) | (0x80000U & (((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h50e97101__0 
                                               >> 0x21U)) 
                                      << 0x13U) ^ (0xfff80000U 
                                                   & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                                       [4U][1U] 
                                                       ^ 
                                                       vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                                       [3U][1U]) 
                                                      << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[1U][1U] 
        = ((0xffefffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [1U][1U]) | (0x100000U & (((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h50e97101__0 
                                                >> 0x21U)) 
                                       << 0x14U) ^ 
                                      (0xfff00000U 
                                       & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                           [4U][1U] 
                                           ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                           [3U][1U]) 
                                          << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[1U][1U] 
        = ((0xffdfffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [1U][1U]) | (0x200000U & (((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h50e97101__0 
                                                >> 0x21U)) 
                                       << 0x15U) ^ 
                                      (0xffe00000U 
                                       & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                           [4U][1U] 
                                           ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                           [3U][1U]) 
                                          << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[1U][1U] 
        = ((0xffbfffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [1U][1U]) | (0x400000U & (((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h50e97101__0 
                                                >> 0x21U)) 
                                       << 0x16U) ^ 
                                      (0xffc00000U 
                                       & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                           [4U][1U] 
                                           ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                           [3U][1U]) 
                                          << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[1U][1U] 
        = ((0xff7fffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [1U][1U]) | (0x800000U & (((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h50e97101__0 
                                                >> 0x21U)) 
                                       << 0x17U) ^ 
                                      (0xff800000U 
                                       & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                           [4U][1U] 
                                           ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                           [3U][1U]) 
                                          << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[1U][1U] 
        = ((0xfeffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [1U][1U]) | (0x1000000U & (((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h50e97101__0 
                                                 >> 0x21U)) 
                                        << 0x18U) ^ 
                                       (0xff000000U 
                                        & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                            [4U][1U] 
                                            ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                            [3U][1U]) 
                                           << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[1U][1U] 
        = ((0xfdffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [1U][1U]) | (0x2000000U & (((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h50e97101__0 
                                                 >> 0x21U)) 
                                        << 0x19U) ^ 
                                       (0xfe000000U 
                                        & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                            [4U][1U] 
                                            ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                            [3U][1U]) 
                                           << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[1U][1U] 
        = ((0xfbffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [1U][1U]) | (0x4000000U & (((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h50e97101__0 
                                                 >> 0x21U)) 
                                        << 0x1aU) ^ 
                                       (0xfc000000U 
                                        & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                            [4U][1U] 
                                            ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                            [3U][1U]) 
                                           << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[1U][1U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [1U][1U]) | (0x8000000U & (((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h50e97101__0 
                                                 >> 0x21U)) 
                                        << 0x1bU) ^ 
                                       (0xf8000000U 
                                        & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                            [4U][1U] 
                                            ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                            [3U][1U]) 
                                           << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[1U][1U] 
        = ((0xefffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [1U][1U]) | (0x10000000U & (((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h50e97101__0 
                                                  >> 0x21U)) 
                                         << 0x1cU) 
                                        ^ (0xf0000000U 
                                           & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                               [4U][1U] 
                                               ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                               [3U][1U]) 
                                              << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[1U][1U] 
        = ((0xdfffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [1U][1U]) | (0x20000000U & (((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h50e97101__0 
                                                  >> 0x21U)) 
                                         << 0x1dU) 
                                        ^ (0xe0000000U 
                                           & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                               [4U][1U] 
                                               ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                               [3U][1U]) 
                                              << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[1U][1U] 
        = ((0xbfffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [1U][1U]) | (0x40000000U & (((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h50e97101__0 
                                                  >> 0x21U)) 
                                         << 0x1eU) 
                                        ^ (0xc0000000U 
                                           & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                               [4U][1U] 
                                               ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                               [3U][1U]) 
                                              << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[1U][1U] 
        = ((0x7fffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [1U][1U]) | (0x80000000U & (((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h50e97101__0 
                                                  >> 0x21U)) 
                                         << 0x1fU) 
                                        ^ (0x80000000U 
                                           & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                               [4U][1U] 
                                               ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                               [3U][1U]) 
                                              << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[1U][2U] 
        = ((0xeU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [1U][2U]) | (1U & ((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h50e97101__0 
                                        >> 0x21U)) 
                               ^ ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                   [4U][1U] ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                   [3U][1U]) >> 0x1fU))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[1U][2U] 
        = ((0xdU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [1U][2U]) | (2U & (((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h50e97101__0 
                                         >> 0x21U)) 
                                ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                   [4U][2U] ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                   [3U][2U])) << 1U)));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[1U][2U] 
        = ((0xbU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [1U][2U]) | (4U & (((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h50e97101__0 
                                         >> 0x21U)) 
                                << 2U) ^ (0xfffffffcU 
                                          & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                              [4U][2U] 
                                              ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                              [3U][2U]) 
                                             << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[1U][2U] 
        = ((7U & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [1U][2U]) | (8U & (((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h50e97101__0 
                                         >> 0x21U)) 
                                << 3U) ^ (0xfffffff8U 
                                          & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                              [4U][2U] 
                                              ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_c
                                              [3U][2U]) 
                                             << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][0U] 
        = ((0xfffffffeU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][0U]) | (1U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [4U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [3U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [3U][0U] 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [4U][0U]) 
                                             & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                             [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][0U] 
        = ((0xfffffffdU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][0U]) | (2U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                               [1U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                               [0U][0U])));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][0U] 
        = ((0xfffffffdU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][0U]) | (2U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [4U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [3U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [3U][0U] 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [4U][0U]) 
                                             & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                             [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][0U] 
        = ((0xfffffffbU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][0U]) | (4U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [4U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [3U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [3U][0U] 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [4U][0U]) 
                                             & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                             [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][0U] 
        = ((0xfffffff7U & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][0U]) | (8U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [4U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [3U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [3U][0U] 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [4U][0U]) 
                                             & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                             [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][0U] 
        = ((0xffffffefU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][0U]) | (0x10U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [4U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [3U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [3U][0U] 
                                                 | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [4U][0U]) 
                                                & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][0U] 
        = ((0xffffffdfU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][0U]) | (0x20U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [4U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [3U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [3U][0U] 
                                                 | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [4U][0U]) 
                                                & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][0U] 
        = ((0xffffffbfU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][0U]) | (0x40U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [4U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [3U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [3U][0U] 
                                                 | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [4U][0U]) 
                                                & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][0U] 
        = ((0xffffff7fU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][0U]) | (0x80U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [4U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [3U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [3U][0U] 
                                                 | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [4U][0U]) 
                                                & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][0U] 
        = ((0xfffffeffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][0U]) | (0x100U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [4U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [3U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [3U][0U] 
                                                  | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [4U][0U]) 
                                                 & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][0U] 
        = ((0xfffffdffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][0U]) | (0x200U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [4U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [3U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [3U][0U] 
                                                  | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [4U][0U]) 
                                                 & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][0U] 
        = ((0xfffffbffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][0U]) | (0x400U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [4U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [3U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [3U][0U] 
                                                  | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [4U][0U]) 
                                                 & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][0U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][0U]) | (0x800U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [4U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [3U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [3U][0U] 
                                                  | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [4U][0U]) 
                                                 & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][0U] 
        = ((0xffffefffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][0U]) | (0x1000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [4U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [3U][0U]) | ((
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [3U][0U] 
                                                   | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [4U][0U]) 
                                                  & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][0U] 
        = ((0xffffdfffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][0U]) | (0x2000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [4U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [3U][0U]) | ((
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [3U][0U] 
                                                   | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [4U][0U]) 
                                                  & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][0U] 
        = ((0xffffbfffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][0U]) | (0x4000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [4U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [3U][0U]) | ((
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [3U][0U] 
                                                   | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [4U][0U]) 
                                                  & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][0U] 
        = ((0xffff7fffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][0U]) | (0x8000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [4U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [3U][0U]) | ((
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [3U][0U] 
                                                   | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [4U][0U]) 
                                                  & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][0U] 
        = ((0xfffeffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][0U]) | (0x10000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [4U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [3U][0U]) | (
                                                   (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                    [3U][0U] 
                                                    | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                    [4U][0U]) 
                                                   & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][0U] 
        = ((0xfffdffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][0U]) | (0x20000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [4U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [3U][0U]) | (
                                                   (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                    [3U][0U] 
                                                    | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                    [4U][0U]) 
                                                   & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][0U] 
        = ((0xfffbffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][0U]) | (0x40000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [4U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [3U][0U]) | (
                                                   (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                    [3U][0U] 
                                                    | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                    [4U][0U]) 
                                                   & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][0U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][0U]) | (0x80000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [4U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [3U][0U]) | (
                                                   (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                    [3U][0U] 
                                                    | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                    [4U][0U]) 
                                                   & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][0U] 
        = ((0xffefffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][0U]) | (0x100000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [4U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [3U][0U]) | 
                                      ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [3U][0U] | 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [4U][0U]) & 
                                       vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][0U] 
        = ((0xffdfffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][0U]) | (0x200000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [4U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [3U][0U]) | 
                                      ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [3U][0U] | 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [4U][0U]) & 
                                       vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][0U] 
        = ((0xffbfffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][0U]) | (0x400000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [4U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [3U][0U]) | 
                                      ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [3U][0U] | 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [4U][0U]) & 
                                       vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][0U] 
        = ((0xff7fffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][0U]) | (0x800000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [4U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [3U][0U]) | 
                                      ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [3U][0U] | 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [4U][0U]) & 
                                       vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][0U] 
        = ((0xfeffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][0U]) | (0x1000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [4U][0U] & 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [3U][0U]) | 
                                       ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [3U][0U] | 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [4U][0U]) 
                                        & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][0U] 
        = ((0xfdffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][0U]) | (0x2000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [4U][0U] & 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [3U][0U]) | 
                                       ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [3U][0U] | 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [4U][0U]) 
                                        & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][0U] 
        = ((0xfbffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][0U]) | (0x4000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [4U][0U] & 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [3U][0U]) | 
                                       ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [3U][0U] | 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [4U][0U]) 
                                        & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][0U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][0U]) | (0x8000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [4U][0U] & 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [3U][0U]) | 
                                       ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [3U][0U] | 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [4U][0U]) 
                                        & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][0U] 
        = ((0xefffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][0U]) | (0x10000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [4U][0U] & 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [3U][0U]) 
                                        | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                            [3U][0U] 
                                            | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                            [4U][0U]) 
                                           & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                           [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][0U] 
        = ((0xdfffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][0U]) | (0x20000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [4U][0U] & 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [3U][0U]) 
                                        | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                            [3U][0U] 
                                            | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                            [4U][0U]) 
                                           & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                           [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][0U] 
        = ((0xbfffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][0U]) | (0x40000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [4U][0U] & 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [3U][0U]) 
                                        | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                            [3U][0U] 
                                            | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                            [4U][0U]) 
                                           & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                           [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][0U] 
        = ((0x7fffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][0U]) | (0x80000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [4U][0U] & 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [3U][0U]) 
                                        | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                            [3U][0U] 
                                            | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                            [4U][0U]) 
                                           & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                           [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][1U] 
        = ((0xfffffffeU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][1U]) | (1U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [4U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [3U][1U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [3U][1U] 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [4U][1U]) 
                                             & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                             [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][1U] 
        = ((0xfffffffdU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][1U]) | (2U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [4U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [3U][1U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [3U][1U] 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [4U][1U]) 
                                             & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                             [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][1U] 
        = ((0xfffffffbU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][1U]) | (4U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [4U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [3U][1U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [3U][1U] 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [4U][1U]) 
                                             & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                             [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][1U] 
        = ((0xfffffff7U & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][1U]) | (8U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [4U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [3U][1U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [3U][1U] 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [4U][1U]) 
                                             & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                             [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][1U] 
        = ((0xffffffefU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][1U]) | (0x10U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [4U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [3U][1U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [3U][1U] 
                                                 | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [4U][1U]) 
                                                & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][1U] 
        = ((0xffffffdfU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][1U]) | (0x20U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [4U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [3U][1U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [3U][1U] 
                                                 | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [4U][1U]) 
                                                & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][1U] 
        = ((0xffffffbfU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][1U]) | (0x40U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [4U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [3U][1U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [3U][1U] 
                                                 | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [4U][1U]) 
                                                & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][1U] 
        = ((0xffffff7fU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][1U]) | (0x80U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [4U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [3U][1U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [3U][1U] 
                                                 | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [4U][1U]) 
                                                & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][1U] 
        = ((0xfffffeffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][1U]) | (0x100U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [4U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [3U][1U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [3U][1U] 
                                                  | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [4U][1U]) 
                                                 & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][1U] 
        = ((0xfffffdffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][1U]) | (0x200U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [4U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [3U][1U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [3U][1U] 
                                                  | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [4U][1U]) 
                                                 & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][1U] 
        = ((0xfffffbffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][1U]) | (0x400U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [4U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [3U][1U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [3U][1U] 
                                                  | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [4U][1U]) 
                                                 & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][1U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][1U]) | (0x800U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [4U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [3U][1U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [3U][1U] 
                                                  | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [4U][1U]) 
                                                 & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][1U] 
        = ((0xffffefffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][1U]) | (0x1000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [4U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [3U][1U]) | ((
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [3U][1U] 
                                                   | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [4U][1U]) 
                                                  & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][1U] 
        = ((0xffffdfffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][1U]) | (0x2000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [4U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [3U][1U]) | ((
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [3U][1U] 
                                                   | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [4U][1U]) 
                                                  & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][1U] 
        = ((0xffffbfffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][1U]) | (0x4000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [4U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [3U][1U]) | ((
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [3U][1U] 
                                                   | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [4U][1U]) 
                                                  & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][1U] 
        = ((0xffff7fffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][1U]) | (0x8000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [4U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [3U][1U]) | ((
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [3U][1U] 
                                                   | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [4U][1U]) 
                                                  & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][1U] 
        = ((0xfffeffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][1U]) | (0x10000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [4U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [3U][1U]) | (
                                                   (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                    [3U][1U] 
                                                    | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                    [4U][1U]) 
                                                   & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][1U] 
        = ((0xfffdffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][1U]) | (0x20000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [4U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [3U][1U]) | (
                                                   (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                    [3U][1U] 
                                                    | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                    [4U][1U]) 
                                                   & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][1U] 
        = ((0xfffbffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][1U]) | (0x40000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [4U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [3U][1U]) | (
                                                   (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                    [3U][1U] 
                                                    | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                    [4U][1U]) 
                                                   & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][1U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][1U]) | (0x80000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [4U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [3U][1U]) | (
                                                   (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                    [3U][1U] 
                                                    | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                    [4U][1U]) 
                                                   & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][1U] 
        = ((0xffefffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][1U]) | (0x100000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [4U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [3U][1U]) | 
                                      ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [3U][1U] | 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [4U][1U]) & 
                                       vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][1U] 
        = ((0xffdfffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][1U]) | (0x200000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [4U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [3U][1U]) | 
                                      ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [3U][1U] | 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [4U][1U]) & 
                                       vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][1U] 
        = ((0xffbfffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][1U]) | (0x400000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [4U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [3U][1U]) | 
                                      ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [3U][1U] | 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [4U][1U]) & 
                                       vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][1U] 
        = ((0xff7fffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][1U]) | (0x800000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [4U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [3U][1U]) | 
                                      ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [3U][1U] | 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [4U][1U]) & 
                                       vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][1U] 
        = ((0xfeffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][1U]) | (0x1000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [4U][1U] & 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [3U][1U]) | 
                                       ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [3U][1U] | 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [4U][1U]) 
                                        & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][1U] 
        = ((0xfdffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][1U]) | (0x2000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [4U][1U] & 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [3U][1U]) | 
                                       ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [3U][1U] | 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [4U][1U]) 
                                        & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][1U] 
        = ((0xfbffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][1U]) | (0x4000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [4U][1U] & 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [3U][1U]) | 
                                       ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [3U][1U] | 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [4U][1U]) 
                                        & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][1U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][1U]) | (0x8000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [4U][1U] & 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [3U][1U]) | 
                                       ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [3U][1U] | 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [4U][1U]) 
                                        & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][1U] 
        = ((0xefffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][1U]) | (0x10000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [4U][1U] & 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [3U][1U]) 
                                        | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                            [3U][1U] 
                                            | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                            [4U][1U]) 
                                           & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                           [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][1U] 
        = ((0xdfffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][1U]) | (0x20000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [4U][1U] & 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [3U][1U]) 
                                        | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                            [3U][1U] 
                                            | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                            [4U][1U]) 
                                           & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                           [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][1U] 
        = ((0xbfffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][1U]) | (0x40000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [4U][1U] & 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [3U][1U]) 
                                        | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                            [3U][1U] 
                                            | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                            [4U][1U]) 
                                           & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                           [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][1U] 
        = ((0x7fffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][1U]) | (0x80000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [4U][1U] & 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [3U][1U]) 
                                        | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                            [3U][1U] 
                                            | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                            [4U][1U]) 
                                           & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                           [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][2U] 
        = ((0xeU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][2U]) | (1U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [4U][2U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [3U][2U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [3U][2U] 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [4U][2U]) 
                                             & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                             [2U][2U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][2U] 
        = ((0xdU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][2U]) | (2U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [4U][2U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [3U][2U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [3U][2U] 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [4U][2U]) 
                                             & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                             [2U][2U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][2U] 
        = ((0xbU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][2U]) | (4U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [4U][2U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [3U][2U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [3U][2U] 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [4U][2U]) 
                                             & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                             [2U][2U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[3U][2U] 
        = ((7U & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [3U][2U]) | (8U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [4U][2U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [3U][2U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [3U][2U] 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [4U][2U]) 
                                             & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                             [2U][2U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][0U] 
        = ((0xfffffffeU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][0U]) | (1U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [1U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [0U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [0U][0U] 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [1U][0U]) 
                                             & (IData)(vlSelf->top__DOT__wallace_u0__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__wallace_csa__DOT__cin)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][0U] 
        = ((0xfffffffbU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][0U]) | (4U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [1U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [0U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [0U][0U] 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [1U][0U]) 
                                             & ((IData)(vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0) 
                                                << 2U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][0U] 
        = ((0xfffffff7U & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][0U]) | (8U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [1U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [0U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [0U][0U] 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [1U][0U]) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                         >> 1U)) 
                                                << 3U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][0U] 
        = ((0xffffffefU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][0U]) | (0x10U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [1U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [0U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [0U][0U] 
                                                 | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [1U][0U]) 
                                                & ((IData)(
                                                           (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                            >> 2U)) 
                                                   << 4U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][0U] 
        = ((0xffffffdfU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][0U]) | (0x20U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [1U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [0U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [0U][0U] 
                                                 | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [1U][0U]) 
                                                & ((IData)(
                                                           (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                            >> 3U)) 
                                                   << 5U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][0U] 
        = ((0xffffffbfU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][0U]) | (0x40U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [1U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [0U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [0U][0U] 
                                                 | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [1U][0U]) 
                                                & ((IData)(
                                                           (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                            >> 4U)) 
                                                   << 6U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][0U] 
        = ((0xffffff7fU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][0U]) | (0x80U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [1U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [0U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [0U][0U] 
                                                 | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [1U][0U]) 
                                                & ((IData)(
                                                           (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                            >> 5U)) 
                                                   << 7U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][0U] 
        = ((0xfffffeffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][0U]) | (0x100U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [1U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [0U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [0U][0U] 
                                                  | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [1U][0U]) 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                             >> 6U)) 
                                                    << 8U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][0U] 
        = ((0xfffffdffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][0U]) | (0x200U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [1U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [0U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [0U][0U] 
                                                  | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [1U][0U]) 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                             >> 7U)) 
                                                    << 9U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][0U] 
        = ((0xfffffbffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][0U]) | (0x400U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [1U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [0U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [0U][0U] 
                                                  | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [1U][0U]) 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                             >> 8U)) 
                                                    << 0xaU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][0U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][0U]) | (0x800U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [1U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [0U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [0U][0U] 
                                                  | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [1U][0U]) 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                             >> 9U)) 
                                                    << 0xbU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][0U] 
        = ((0xffffefffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][0U]) | (0x1000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [1U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [0U][0U]) | ((
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [0U][0U] 
                                                   | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [1U][0U]) 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                              >> 0xaU)) 
                                                     << 0xcU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][0U] 
        = ((0xffffdfffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][0U]) | (0x2000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [1U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [0U][0U]) | ((
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [0U][0U] 
                                                   | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [1U][0U]) 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                              >> 0xbU)) 
                                                     << 0xdU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][0U] 
        = ((0xffffbfffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][0U]) | (0x4000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [1U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [0U][0U]) | ((
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [0U][0U] 
                                                   | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [1U][0U]) 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                              >> 0xcU)) 
                                                     << 0xeU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][0U] 
        = ((0xffff7fffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][0U]) | (0x8000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [1U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [0U][0U]) | ((
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [0U][0U] 
                                                   | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [1U][0U]) 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                              >> 0xdU)) 
                                                     << 0xfU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][0U] 
        = ((0xfffeffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][0U]) | (0x10000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [1U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [0U][0U]) | (
                                                   (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                    [0U][0U] 
                                                    | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                    [1U][0U]) 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                               >> 0xeU)) 
                                                      << 0x10U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][0U] 
        = ((0xfffdffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][0U]) | (0x20000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [1U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [0U][0U]) | (
                                                   (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                    [0U][0U] 
                                                    | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                    [1U][0U]) 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                               >> 0xfU)) 
                                                      << 0x11U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][0U] 
        = ((0xfffbffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][0U]) | (0x40000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [1U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [0U][0U]) | (
                                                   (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                    [0U][0U] 
                                                    | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                    [1U][0U]) 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                               >> 0x10U)) 
                                                      << 0x12U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][0U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][0U]) | (0x80000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [1U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [0U][0U]) | (
                                                   (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                    [0U][0U] 
                                                    | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                    [1U][0U]) 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                               >> 0x11U)) 
                                                      << 0x13U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][0U] 
        = ((0xffefffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][0U]) | (0x100000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [1U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [0U][0U]) | 
                                      ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [0U][0U] | 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [1U][0U]) & 
                                       ((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                 >> 0x12U)) 
                                        << 0x14U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][0U] 
        = ((0xffdfffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][0U]) | (0x200000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [1U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [0U][0U]) | 
                                      ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [0U][0U] | 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [1U][0U]) & 
                                       ((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                 >> 0x13U)) 
                                        << 0x15U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][0U] 
        = ((0xffbfffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][0U]) | (0x400000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [1U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [0U][0U]) | 
                                      ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [0U][0U] | 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [1U][0U]) & 
                                       ((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                 >> 0x14U)) 
                                        << 0x16U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][0U] 
        = ((0xff7fffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][0U]) | (0x800000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [1U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [0U][0U]) | 
                                      ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [0U][0U] | 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [1U][0U]) & 
                                       ((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                 >> 0x15U)) 
                                        << 0x17U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][0U] 
        = ((0xfeffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][0U]) | (0x1000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [1U][0U] & 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [0U][0U]) | 
                                       ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [0U][0U] | 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [1U][0U]) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                    >> 0x16U)) 
                                           << 0x18U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][0U] 
        = ((0xfdffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][0U]) | (0x2000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [1U][0U] & 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [0U][0U]) | 
                                       ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [0U][0U] | 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [1U][0U]) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                    >> 0x17U)) 
                                           << 0x19U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][0U] 
        = ((0xfbffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][0U]) | (0x4000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [1U][0U] & 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [0U][0U]) | 
                                       ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [0U][0U] | 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [1U][0U]) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                    >> 0x18U)) 
                                           << 0x1aU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][0U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][0U]) | (0x8000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [1U][0U] & 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [0U][0U]) | 
                                       ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [0U][0U] | 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [1U][0U]) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                    >> 0x19U)) 
                                           << 0x1bU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][0U] 
        = ((0xefffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][0U]) | (0x10000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [1U][0U] & 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [0U][0U]) 
                                        | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                            [0U][0U] 
                                            | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                            [1U][0U]) 
                                           & ((IData)(
                                                      (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                       >> 0x1aU)) 
                                              << 0x1cU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][0U] 
        = ((0xdfffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][0U]) | (0x20000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [1U][0U] & 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [0U][0U]) 
                                        | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                            [0U][0U] 
                                            | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                            [1U][0U]) 
                                           & ((IData)(
                                                      (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                       >> 0x1bU)) 
                                              << 0x1dU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][0U] 
        = ((0xbfffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][0U]) | (0x40000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [1U][0U] & 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [0U][0U]) 
                                        | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                            [0U][0U] 
                                            | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                            [1U][0U]) 
                                           & ((IData)(
                                                      (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                       >> 0x1cU)) 
                                              << 0x1eU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][0U] 
        = ((0x7fffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][0U]) | (0x80000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [1U][0U] & 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [0U][0U]) 
                                        | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                            [0U][0U] 
                                            | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                            [1U][0U]) 
                                           & ((IData)(
                                                      (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                       >> 0x1dU)) 
                                              << 0x1fU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][1U] 
        = ((0xfffffffeU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][1U]) | (1U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [1U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [0U][1U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [0U][1U] 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [1U][1U]) 
                                             & (IData)(
                                                       (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                        >> 0x1eU))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][1U] 
        = ((0xfffffffdU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][1U]) | (2U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [1U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [0U][1U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [0U][1U] 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [1U][1U]) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                         >> 0x1fU)) 
                                                << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][1U] 
        = ((0xfffffffbU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][1U]) | (4U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [1U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [0U][1U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [0U][1U] 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [1U][1U]) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                         >> 0x20U)) 
                                                << 2U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][1U] 
        = ((0xfffffff7U & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][1U]) | (8U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [1U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [0U][1U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [0U][1U] 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [1U][1U]) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                         >> 0x21U)) 
                                                << 3U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][1U] 
        = ((0xffffffefU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][1U]) | (0x10U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [1U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [0U][1U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [0U][1U] 
                                                 | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [1U][1U]) 
                                                & ((IData)(
                                                           (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                            >> 0x21U)) 
                                                   << 4U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][1U] 
        = ((0xffffffdfU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][1U]) | (0x20U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [1U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [0U][1U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [0U][1U] 
                                                 | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [1U][1U]) 
                                                & ((IData)(
                                                           (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                            >> 0x21U)) 
                                                   << 5U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][1U] 
        = ((0xffffffbfU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][1U]) | (0x40U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [1U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [0U][1U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [0U][1U] 
                                                 | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [1U][1U]) 
                                                & ((IData)(
                                                           (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                            >> 0x21U)) 
                                                   << 6U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][1U] 
        = ((0xffffff7fU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][1U]) | (0x80U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [1U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [0U][1U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [0U][1U] 
                                                 | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [1U][1U]) 
                                                & ((IData)(
                                                           (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                            >> 0x21U)) 
                                                   << 7U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][1U] 
        = ((0xfffffeffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][1U]) | (0x100U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [1U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [0U][1U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [0U][1U] 
                                                  | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [1U][1U]) 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                             >> 0x21U)) 
                                                    << 8U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][1U] 
        = ((0xfffffdffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][1U]) | (0x200U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [1U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [0U][1U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [0U][1U] 
                                                  | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [1U][1U]) 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                             >> 0x21U)) 
                                                    << 9U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][1U] 
        = ((0xfffffbffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][1U]) | (0x400U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [1U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [0U][1U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [0U][1U] 
                                                  | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [1U][1U]) 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                             >> 0x21U)) 
                                                    << 0xaU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][1U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][1U]) | (0x800U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [1U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [0U][1U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [0U][1U] 
                                                  | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [1U][1U]) 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                             >> 0x21U)) 
                                                    << 0xbU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][1U] 
        = ((0xffffefffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][1U]) | (0x1000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [1U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [0U][1U]) | ((
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [0U][1U] 
                                                   | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [1U][1U]) 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                              >> 0x21U)) 
                                                     << 0xcU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][1U] 
        = ((0xffffdfffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][1U]) | (0x2000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [1U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [0U][1U]) | ((
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [0U][1U] 
                                                   | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [1U][1U]) 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                              >> 0x21U)) 
                                                     << 0xdU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][1U] 
        = ((0xffffbfffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][1U]) | (0x4000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [1U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [0U][1U]) | ((
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [0U][1U] 
                                                   | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [1U][1U]) 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                              >> 0x21U)) 
                                                     << 0xeU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][1U] 
        = ((0xffff7fffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][1U]) | (0x8000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [1U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [0U][1U]) | ((
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [0U][1U] 
                                                   | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [1U][1U]) 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                              >> 0x21U)) 
                                                     << 0xfU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][1U] 
        = ((0xfffeffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][1U]) | (0x10000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [1U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [0U][1U]) | (
                                                   (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                    [0U][1U] 
                                                    | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                    [1U][1U]) 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                               >> 0x21U)) 
                                                      << 0x10U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][1U] 
        = ((0xfffdffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][1U]) | (0x20000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [1U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [0U][1U]) | (
                                                   (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                    [0U][1U] 
                                                    | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                    [1U][1U]) 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                               >> 0x21U)) 
                                                      << 0x11U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][1U] 
        = ((0xfffbffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][1U]) | (0x40000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [1U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [0U][1U]) | (
                                                   (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                    [0U][1U] 
                                                    | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                    [1U][1U]) 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                               >> 0x21U)) 
                                                      << 0x12U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][1U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][1U]) | (0x80000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [1U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [0U][1U]) | (
                                                   (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                    [0U][1U] 
                                                    | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                    [1U][1U]) 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                               >> 0x21U)) 
                                                      << 0x13U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][1U] 
        = ((0xffefffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][1U]) | (0x100000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [1U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [0U][1U]) | 
                                      ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [0U][1U] | 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [1U][1U]) & 
                                       ((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                 >> 0x21U)) 
                                        << 0x14U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][1U] 
        = ((0xffdfffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][1U]) | (0x200000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [1U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [0U][1U]) | 
                                      ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [0U][1U] | 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [1U][1U]) & 
                                       ((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                 >> 0x21U)) 
                                        << 0x15U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][1U] 
        = ((0xffbfffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][1U]) | (0x400000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [1U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [0U][1U]) | 
                                      ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [0U][1U] | 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [1U][1U]) & 
                                       ((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                 >> 0x21U)) 
                                        << 0x16U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][1U] 
        = ((0xff7fffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][1U]) | (0x800000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [1U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [0U][1U]) | 
                                      ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [0U][1U] | 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [1U][1U]) & 
                                       ((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                 >> 0x21U)) 
                                        << 0x17U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][1U] 
        = ((0xfeffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][1U]) | (0x1000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [1U][1U] & 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [0U][1U]) | 
                                       ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [0U][1U] | 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [1U][1U]) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                    >> 0x21U)) 
                                           << 0x18U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][1U] 
        = ((0xfdffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][1U]) | (0x2000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [1U][1U] & 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [0U][1U]) | 
                                       ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [0U][1U] | 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [1U][1U]) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                    >> 0x21U)) 
                                           << 0x19U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][1U] 
        = ((0xfbffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][1U]) | (0x4000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [1U][1U] & 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [0U][1U]) | 
                                       ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [0U][1U] | 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [1U][1U]) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                    >> 0x21U)) 
                                           << 0x1aU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][1U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][1U]) | (0x8000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [1U][1U] & 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [0U][1U]) | 
                                       ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [0U][1U] | 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [1U][1U]) 
                                        & ((IData)(
                                                   (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                    >> 0x21U)) 
                                           << 0x1bU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][1U] 
        = ((0xefffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][1U]) | (0x10000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [1U][1U] & 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [0U][1U]) 
                                        | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                            [0U][1U] 
                                            | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                            [1U][1U]) 
                                           & ((IData)(
                                                      (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                       >> 0x21U)) 
                                              << 0x1cU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][1U] 
        = ((0xdfffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][1U]) | (0x20000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [1U][1U] & 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [0U][1U]) 
                                        | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                            [0U][1U] 
                                            | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                            [1U][1U]) 
                                           & ((IData)(
                                                      (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                       >> 0x21U)) 
                                              << 0x1dU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][1U] 
        = ((0xbfffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][1U]) | (0x40000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [1U][1U] & 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [0U][1U]) 
                                        | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                            [0U][1U] 
                                            | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                            [1U][1U]) 
                                           & ((IData)(
                                                      (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                       >> 0x21U)) 
                                              << 0x1eU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][1U] 
        = ((0x7fffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][1U]) | (0x80000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [1U][1U] & 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [0U][1U]) 
                                        | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                            [0U][1U] 
                                            | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                            [1U][1U]) 
                                           & ((IData)(
                                                      (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                       >> 0x21U)) 
                                              << 0x1fU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][2U] 
        = ((0xeU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][2U]) | (1U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [1U][2U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [0U][2U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [0U][2U] 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [1U][2U]) 
                                             & (IData)(
                                                       (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                        >> 0x21U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][2U] 
        = ((0xdU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][2U]) | (2U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [1U][2U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [0U][2U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [0U][2U] 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [1U][2U]) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                         >> 0x21U)) 
                                                << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][2U] 
        = ((0xbU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][2U]) | (4U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [1U][2U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [0U][2U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [0U][2U] 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [1U][2U]) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                         >> 0x21U)) 
                                                << 2U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c[2U][2U] 
        = ((7U & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
            [2U][2U]) | (8U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [1U][2U] & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [0U][2U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [0U][2U] 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [1U][2U]) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                         >> 0x21U)) 
                                                << 3U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][0U] 
        = ((0xfffffffeU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][0U]) | (1U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                               [4U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                           [3U][0U] 
                                           ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                           [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][0U] 
        = ((0xfffffffdU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][0U]) | (2U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                               [1U][0U] ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                               [0U][0U])));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][0U] 
        = ((0xfffffffdU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][0U]) | (2U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                               [4U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                           [3U][0U] 
                                           ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                           [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][0U] 
        = ((0xfffffffbU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][0U]) | (4U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                               [4U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                           [3U][0U] 
                                           ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                           [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][0U] 
        = ((0xfffffff7U & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][0U]) | (8U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                               [4U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                           [3U][0U] 
                                           ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                           [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][0U] 
        = ((0xffffffefU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][0U]) | (0x10U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                  [4U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [3U][0U] 
                                              ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][0U] 
        = ((0xffffffdfU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][0U]) | (0x20U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                  [4U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [3U][0U] 
                                              ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][0U] 
        = ((0xffffffbfU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][0U]) | (0x40U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                  [4U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [3U][0U] 
                                              ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][0U] 
        = ((0xffffff7fU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][0U]) | (0x80U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                  [4U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [3U][0U] 
                                              ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][0U] 
        = ((0xfffffeffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][0U]) | (0x100U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [4U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                               [3U][0U] 
                                               ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                               [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][0U] 
        = ((0xfffffdffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][0U]) | (0x200U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [4U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                               [3U][0U] 
                                               ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                               [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][0U] 
        = ((0xfffffbffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][0U]) | (0x400U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [4U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                               [3U][0U] 
                                               ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                               [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][0U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][0U]) | (0x800U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [4U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                               [3U][0U] 
                                               ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                               [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][0U] 
        = ((0xffffefffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][0U]) | (0x1000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [4U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                [3U][0U] 
                                                ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][0U] 
        = ((0xffffdfffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][0U]) | (0x2000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [4U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                [3U][0U] 
                                                ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][0U] 
        = ((0xffffbfffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][0U]) | (0x4000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [4U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                [3U][0U] 
                                                ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][0U] 
        = ((0xffff7fffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][0U]) | (0x8000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [4U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                [3U][0U] 
                                                ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][0U] 
        = ((0xfffeffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][0U]) | (0x10000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [4U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [3U][0U] 
                                                 ^ 
                                                 vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][0U] 
        = ((0xfffdffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][0U]) | (0x20000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [4U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [3U][0U] 
                                                 ^ 
                                                 vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][0U] 
        = ((0xfffbffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][0U]) | (0x40000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [4U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [3U][0U] 
                                                 ^ 
                                                 vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][0U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][0U]) | (0x80000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [4U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [3U][0U] 
                                                 ^ 
                                                 vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][0U] 
        = ((0xffefffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][0U]) | (0x100000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [4U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [3U][0U] 
                                                  ^ 
                                                  vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][0U] 
        = ((0xffdfffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][0U]) | (0x200000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [4U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [3U][0U] 
                                                  ^ 
                                                  vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][0U] 
        = ((0xffbfffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][0U]) | (0x400000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [4U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [3U][0U] 
                                                  ^ 
                                                  vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][0U] 
        = ((0xff7fffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][0U]) | (0x800000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [4U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [3U][0U] 
                                                  ^ 
                                                  vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][0U] 
        = ((0xfeffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][0U]) | (0x1000000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [4U][0U] ^ (
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [3U][0U] 
                                                   ^ 
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][0U] 
        = ((0xfdffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][0U]) | (0x2000000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [4U][0U] ^ (
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [3U][0U] 
                                                   ^ 
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][0U] 
        = ((0xfbffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][0U]) | (0x4000000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [4U][0U] ^ (
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [3U][0U] 
                                                   ^ 
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][0U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][0U]) | (0x8000000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [4U][0U] ^ (
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [3U][0U] 
                                                   ^ 
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][0U] 
        = ((0xefffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][0U]) | (0x10000000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [4U][0U] ^ 
                                        (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [3U][0U] ^ 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][0U] 
        = ((0xdfffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][0U]) | (0x20000000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [4U][0U] ^ 
                                        (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [3U][0U] ^ 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][0U] 
        = ((0xbfffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][0U]) | (0x40000000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [4U][0U] ^ 
                                        (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [3U][0U] ^ 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][0U] 
        = ((0x7fffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][0U]) | (0x80000000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [4U][0U] ^ 
                                        (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [3U][0U] ^ 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [2U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][1U] 
        = ((0xfffffffeU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][1U]) | (1U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                               [4U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                           [3U][1U] 
                                           ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                           [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][1U] 
        = ((0xfffffffdU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][1U]) | (2U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                               [4U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                           [3U][1U] 
                                           ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                           [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][1U] 
        = ((0xfffffffbU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][1U]) | (4U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                               [4U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                           [3U][1U] 
                                           ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                           [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][1U] 
        = ((0xfffffff7U & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][1U]) | (8U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                               [4U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                           [3U][1U] 
                                           ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                           [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][1U] 
        = ((0xffffffefU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][1U]) | (0x10U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                  [4U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [3U][1U] 
                                              ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][1U] 
        = ((0xffffffdfU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][1U]) | (0x20U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                  [4U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [3U][1U] 
                                              ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][1U] 
        = ((0xffffffbfU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][1U]) | (0x40U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                  [4U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [3U][1U] 
                                              ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][1U] 
        = ((0xffffff7fU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][1U]) | (0x80U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                  [4U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [3U][1U] 
                                              ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][1U] 
        = ((0xfffffeffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][1U]) | (0x100U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [4U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                               [3U][1U] 
                                               ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                               [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][1U] 
        = ((0xfffffdffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][1U]) | (0x200U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [4U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                               [3U][1U] 
                                               ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                               [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][1U] 
        = ((0xfffffbffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][1U]) | (0x400U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [4U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                               [3U][1U] 
                                               ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                               [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][1U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][1U]) | (0x800U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [4U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                               [3U][1U] 
                                               ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                               [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][1U] 
        = ((0xffffefffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][1U]) | (0x1000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [4U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                [3U][1U] 
                                                ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][1U] 
        = ((0xffffdfffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][1U]) | (0x2000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [4U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                [3U][1U] 
                                                ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][1U] 
        = ((0xffffbfffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][1U]) | (0x4000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [4U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                [3U][1U] 
                                                ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][1U] 
        = ((0xffff7fffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][1U]) | (0x8000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [4U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                [3U][1U] 
                                                ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][1U] 
        = ((0xfffeffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][1U]) | (0x10000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [4U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [3U][1U] 
                                                 ^ 
                                                 vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][1U] 
        = ((0xfffdffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][1U]) | (0x20000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [4U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [3U][1U] 
                                                 ^ 
                                                 vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][1U] 
        = ((0xfffbffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][1U]) | (0x40000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [4U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [3U][1U] 
                                                 ^ 
                                                 vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][1U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][1U]) | (0x80000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [4U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [3U][1U] 
                                                 ^ 
                                                 vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][1U] 
        = ((0xffefffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][1U]) | (0x100000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [4U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [3U][1U] 
                                                  ^ 
                                                  vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][1U] 
        = ((0xffdfffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][1U]) | (0x200000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [4U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [3U][1U] 
                                                  ^ 
                                                  vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][1U] 
        = ((0xffbfffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][1U]) | (0x400000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [4U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [3U][1U] 
                                                  ^ 
                                                  vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][1U] 
        = ((0xff7fffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][1U]) | (0x800000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [4U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [3U][1U] 
                                                  ^ 
                                                  vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][1U] 
        = ((0xfeffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][1U]) | (0x1000000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [4U][1U] ^ (
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [3U][1U] 
                                                   ^ 
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][1U] 
        = ((0xfdffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][1U]) | (0x2000000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [4U][1U] ^ (
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [3U][1U] 
                                                   ^ 
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][1U] 
        = ((0xfbffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][1U]) | (0x4000000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [4U][1U] ^ (
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [3U][1U] 
                                                   ^ 
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][1U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][1U]) | (0x8000000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [4U][1U] ^ (
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [3U][1U] 
                                                   ^ 
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][1U] 
        = ((0xefffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][1U]) | (0x10000000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [4U][1U] ^ 
                                        (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [3U][1U] ^ 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][1U] 
        = ((0xdfffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][1U]) | (0x20000000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [4U][1U] ^ 
                                        (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [3U][1U] ^ 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][1U] 
        = ((0xbfffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][1U]) | (0x40000000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [4U][1U] ^ 
                                        (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [3U][1U] ^ 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][1U] 
        = ((0x7fffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][1U]) | (0x80000000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [4U][1U] ^ 
                                        (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [3U][1U] ^ 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [2U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][2U] 
        = ((0xeU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][2U]) | (1U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                               [4U][2U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                           [3U][2U] 
                                           ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                           [2U][2U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][2U] 
        = ((0xdU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][2U]) | (2U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                               [4U][2U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                           [3U][2U] 
                                           ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                           [2U][2U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][2U] 
        = ((0xbU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][2U]) | (4U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                               [4U][2U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                           [3U][2U] 
                                           ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                           [2U][2U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[3U][2U] 
        = ((7U & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [3U][2U]) | (8U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                               [4U][2U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                           [3U][2U] 
                                           ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                           [2U][2U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][0U] 
        = ((0xfffffffeU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][0U]) | (1U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                               [1U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                           [0U][0U] 
                                           ^ (IData)(vlSelf->top__DOT__wallace_u0__DOT__genblk3__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__wallace_csa__DOT__cin)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][0U] 
        = ((0xfffffffbU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][0U]) | (4U & ((0xfffffffcU & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [1U][0U]) ^ ((0xfffffffcU 
                                              & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [0U][0U]) 
                                             ^ ((IData)(vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0) 
                                                << 2U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][0U] 
        = ((0xfffffff7U & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][0U]) | (8U & ((0xfffffff8U & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [1U][0U]) ^ ((0xfffffff8U 
                                              & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [0U][0U]) 
                                             ^ ((IData)(
                                                        (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                         >> 1U)) 
                                                << 3U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][0U] 
        = ((0xffffffefU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][0U]) | (0x10U & ((0xfffffff0U & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [1U][0U]) ^ ((0xfffffff0U 
                                                 & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [0U][0U]) 
                                                ^ ((IData)(
                                                           (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                            >> 2U)) 
                                                   << 4U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][0U] 
        = ((0xffffffdfU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][0U]) | (0x20U & ((0xffffffe0U & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [1U][0U]) ^ ((0xffffffe0U 
                                                 & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [0U][0U]) 
                                                ^ ((IData)(
                                                           (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                            >> 3U)) 
                                                   << 5U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][0U] 
        = ((0xffffffbfU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][0U]) | (0x40U & ((0xffffffc0U & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [1U][0U]) ^ ((0xffffffc0U 
                                                 & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [0U][0U]) 
                                                ^ ((IData)(
                                                           (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                            >> 4U)) 
                                                   << 6U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][0U] 
        = ((0xffffff7fU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][0U]) | (0x80U & ((0xffffff80U & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [1U][0U]) ^ ((0xffffff80U 
                                                 & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [0U][0U]) 
                                                ^ ((IData)(
                                                           (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                            >> 5U)) 
                                                   << 7U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][0U] 
        = ((0xfffffeffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][0U]) | (0x100U & ((0xffffff00U & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [1U][0U]) ^ ((0xffffff00U 
                                                  & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [0U][0U]) 
                                                 ^ 
                                                 ((IData)(
                                                          (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                           >> 6U)) 
                                                  << 8U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][0U] 
        = ((0xfffffdffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][0U]) | (0x200U & ((0xfffffe00U & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [1U][0U]) ^ ((0xfffffe00U 
                                                  & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [0U][0U]) 
                                                 ^ 
                                                 ((IData)(
                                                          (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                           >> 7U)) 
                                                  << 9U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][0U] 
        = ((0xfffffbffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][0U]) | (0x400U & ((0xfffffc00U & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [1U][0U]) ^ ((0xfffffc00U 
                                                  & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [0U][0U]) 
                                                 ^ 
                                                 ((IData)(
                                                          (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                           >> 8U)) 
                                                  << 0xaU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][0U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][0U]) | (0x800U & ((0xfffff800U & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [1U][0U]) ^ ((0xfffff800U 
                                                  & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [0U][0U]) 
                                                 ^ 
                                                 ((IData)(
                                                          (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                           >> 9U)) 
                                                  << 0xbU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][0U] 
        = ((0xffffefffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][0U]) | (0x1000U & ((0xfffff000U & 
                                     vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [1U][0U]) ^ ((0xfffff000U 
                                                   & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [0U][0U]) 
                                                  ^ 
                                                  ((IData)(
                                                           (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                            >> 0xaU)) 
                                                   << 0xcU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][0U] 
        = ((0xffffdfffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][0U]) | (0x2000U & ((0xffffe000U & 
                                     vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [1U][0U]) ^ ((0xffffe000U 
                                                   & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [0U][0U]) 
                                                  ^ 
                                                  ((IData)(
                                                           (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                            >> 0xbU)) 
                                                   << 0xdU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][0U] 
        = ((0xffffbfffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][0U]) | (0x4000U & ((0xffffc000U & 
                                     vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [1U][0U]) ^ ((0xffffc000U 
                                                   & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [0U][0U]) 
                                                  ^ 
                                                  ((IData)(
                                                           (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                            >> 0xcU)) 
                                                   << 0xeU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][0U] 
        = ((0xffff7fffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][0U]) | (0x8000U & ((0xffff8000U & 
                                     vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [1U][0U]) ^ ((0xffff8000U 
                                                   & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [0U][0U]) 
                                                  ^ 
                                                  ((IData)(
                                                           (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                            >> 0xdU)) 
                                                   << 0xfU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][0U] 
        = ((0xfffeffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][0U]) | (0x10000U & ((0xffff0000U & 
                                      vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [1U][0U]) ^ (
                                                   (0xffff0000U 
                                                    & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                    [0U][0U]) 
                                                   ^ 
                                                   ((IData)(
                                                            (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                             >> 0xeU)) 
                                                    << 0x10U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][0U] 
        = ((0xfffdffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][0U]) | (0x20000U & ((0xfffe0000U & 
                                      vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [1U][0U]) ^ (
                                                   (0xfffe0000U 
                                                    & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                    [0U][0U]) 
                                                   ^ 
                                                   ((IData)(
                                                            (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                             >> 0xfU)) 
                                                    << 0x11U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][0U] 
        = ((0xfffbffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][0U]) | (0x40000U & ((0xfffc0000U & 
                                      vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [1U][0U]) ^ (
                                                   (0xfffc0000U 
                                                    & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                    [0U][0U]) 
                                                   ^ 
                                                   ((IData)(
                                                            (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                             >> 0x10U)) 
                                                    << 0x12U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][0U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][0U]) | (0x80000U & ((0xfff80000U & 
                                      vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [1U][0U]) ^ (
                                                   (0xfff80000U 
                                                    & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                    [0U][0U]) 
                                                   ^ 
                                                   ((IData)(
                                                            (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                             >> 0x11U)) 
                                                    << 0x13U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][0U] 
        = ((0xffefffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][0U]) | (0x100000U & ((0xfff00000U 
                                       & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [1U][0U]) ^ 
                                      ((0xfff00000U 
                                        & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [0U][0U]) ^ 
                                       ((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                 >> 0x12U)) 
                                        << 0x14U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][0U] 
        = ((0xffdfffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][0U]) | (0x200000U & ((0xffe00000U 
                                       & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [1U][0U]) ^ 
                                      ((0xffe00000U 
                                        & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [0U][0U]) ^ 
                                       ((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                 >> 0x13U)) 
                                        << 0x15U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][0U] 
        = ((0xffbfffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][0U]) | (0x400000U & ((0xffc00000U 
                                       & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [1U][0U]) ^ 
                                      ((0xffc00000U 
                                        & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [0U][0U]) ^ 
                                       ((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                 >> 0x14U)) 
                                        << 0x16U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][0U] 
        = ((0xff7fffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][0U]) | (0x800000U & ((0xff800000U 
                                       & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [1U][0U]) ^ 
                                      ((0xff800000U 
                                        & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [0U][0U]) ^ 
                                       ((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                 >> 0x15U)) 
                                        << 0x17U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][0U] 
        = ((0xfeffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][0U]) | (0x1000000U & ((0xff000000U 
                                        & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [1U][0U]) ^ 
                                       ((0xff000000U 
                                         & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [0U][0U]) 
                                        ^ ((IData)(
                                                   (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                    >> 0x16U)) 
                                           << 0x18U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][0U] 
        = ((0xfdffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][0U]) | (0x2000000U & ((0xfe000000U 
                                        & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [1U][0U]) ^ 
                                       ((0xfe000000U 
                                         & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [0U][0U]) 
                                        ^ ((IData)(
                                                   (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                    >> 0x17U)) 
                                           << 0x19U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][0U] 
        = ((0xfbffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][0U]) | (0x4000000U & ((0xfc000000U 
                                        & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [1U][0U]) ^ 
                                       ((0xfc000000U 
                                         & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [0U][0U]) 
                                        ^ ((IData)(
                                                   (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                    >> 0x18U)) 
                                           << 0x1aU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][0U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][0U]) | (0x8000000U & ((0xf8000000U 
                                        & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [1U][0U]) ^ 
                                       ((0xf8000000U 
                                         & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [0U][0U]) 
                                        ^ ((IData)(
                                                   (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                    >> 0x19U)) 
                                           << 0x1bU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][0U] 
        = ((0xefffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][0U]) | (0x10000000U & ((0xf0000000U 
                                         & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [1U][0U]) 
                                        ^ ((0xf0000000U 
                                            & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                            [0U][0U]) 
                                           ^ ((IData)(
                                                      (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                       >> 0x1aU)) 
                                              << 0x1cU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][0U] 
        = ((0xdfffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][0U]) | (0x20000000U & ((0xe0000000U 
                                         & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [1U][0U]) 
                                        ^ ((0xe0000000U 
                                            & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                            [0U][0U]) 
                                           ^ ((IData)(
                                                      (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                       >> 0x1bU)) 
                                              << 0x1dU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][0U] 
        = ((0xbfffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][0U]) | (0x40000000U & ((0xc0000000U 
                                         & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [1U][0U]) 
                                        ^ ((0xc0000000U 
                                            & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                            [0U][0U]) 
                                           ^ ((IData)(
                                                      (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                       >> 0x1cU)) 
                                              << 0x1eU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][0U] 
        = ((0x7fffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][0U]) | (0x80000000U & ((0x80000000U 
                                         & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [1U][0U]) 
                                        ^ ((0x80000000U 
                                            & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                            [0U][0U]) 
                                           ^ ((IData)(
                                                      (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                       >> 0x1dU)) 
                                              << 0x1fU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][1U] 
        = ((0xfffffffeU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][1U]) | (1U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                               [1U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                           [0U][1U] 
                                           ^ (IData)(
                                                     (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                      >> 0x1eU))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][1U] 
        = ((0xfffffffdU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][1U]) | (2U & ((0xfffffffeU & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [1U][1U]) ^ ((0xfffffffeU 
                                              & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [0U][1U]) 
                                             ^ ((IData)(
                                                        (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                         >> 0x1fU)) 
                                                << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][1U] 
        = ((0xfffffffbU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][1U]) | (4U & ((0xfffffffcU & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [1U][1U]) ^ ((0xfffffffcU 
                                              & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [0U][1U]) 
                                             ^ ((IData)(
                                                        (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                         >> 0x20U)) 
                                                << 2U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][1U] 
        = ((0xfffffff7U & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][1U]) | (8U & ((0xfffffff8U & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [1U][1U]) ^ ((0xfffffff8U 
                                              & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [0U][1U]) 
                                             ^ ((IData)(
                                                        (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                         >> 0x21U)) 
                                                << 3U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][1U] 
        = ((0xffffffefU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][1U]) | (0x10U & ((0xfffffff0U & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [1U][1U]) ^ ((0xfffffff0U 
                                                 & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [0U][1U]) 
                                                ^ ((IData)(
                                                           (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                            >> 0x21U)) 
                                                   << 4U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][1U] 
        = ((0xffffffdfU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][1U]) | (0x20U & ((0xffffffe0U & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [1U][1U]) ^ ((0xffffffe0U 
                                                 & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [0U][1U]) 
                                                ^ ((IData)(
                                                           (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                            >> 0x21U)) 
                                                   << 5U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][1U] 
        = ((0xffffffbfU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][1U]) | (0x40U & ((0xffffffc0U & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [1U][1U]) ^ ((0xffffffc0U 
                                                 & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [0U][1U]) 
                                                ^ ((IData)(
                                                           (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                            >> 0x21U)) 
                                                   << 6U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][1U] 
        = ((0xffffff7fU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][1U]) | (0x80U & ((0xffffff80U & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                   [1U][1U]) ^ ((0xffffff80U 
                                                 & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                 [0U][1U]) 
                                                ^ ((IData)(
                                                           (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                            >> 0x21U)) 
                                                   << 7U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][1U] 
        = ((0xfffffeffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][1U]) | (0x100U & ((0xffffff00U & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [1U][1U]) ^ ((0xffffff00U 
                                                  & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [0U][1U]) 
                                                 ^ 
                                                 ((IData)(
                                                          (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                           >> 0x21U)) 
                                                  << 8U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][1U] 
        = ((0xfffffdffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][1U]) | (0x200U & ((0xfffffe00U & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [1U][1U]) ^ ((0xfffffe00U 
                                                  & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [0U][1U]) 
                                                 ^ 
                                                 ((IData)(
                                                          (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                           >> 0x21U)) 
                                                  << 9U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][1U] 
        = ((0xfffffbffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][1U]) | (0x400U & ((0xfffffc00U & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [1U][1U]) ^ ((0xfffffc00U 
                                                  & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [0U][1U]) 
                                                 ^ 
                                                 ((IData)(
                                                          (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                           >> 0x21U)) 
                                                  << 0xaU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][1U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][1U]) | (0x800U & ((0xfffff800U & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                    [1U][1U]) ^ ((0xfffff800U 
                                                  & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                  [0U][1U]) 
                                                 ^ 
                                                 ((IData)(
                                                          (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                           >> 0x21U)) 
                                                  << 0xbU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][1U] 
        = ((0xffffefffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][1U]) | (0x1000U & ((0xfffff000U & 
                                     vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [1U][1U]) ^ ((0xfffff000U 
                                                   & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [0U][1U]) 
                                                  ^ 
                                                  ((IData)(
                                                           (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                            >> 0x21U)) 
                                                   << 0xcU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][1U] 
        = ((0xffffdfffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][1U]) | (0x2000U & ((0xffffe000U & 
                                     vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [1U][1U]) ^ ((0xffffe000U 
                                                   & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [0U][1U]) 
                                                  ^ 
                                                  ((IData)(
                                                           (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                            >> 0x21U)) 
                                                   << 0xdU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][1U] 
        = ((0xffffbfffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][1U]) | (0x4000U & ((0xffffc000U & 
                                     vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [1U][1U]) ^ ((0xffffc000U 
                                                   & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [0U][1U]) 
                                                  ^ 
                                                  ((IData)(
                                                           (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                            >> 0x21U)) 
                                                   << 0xeU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][1U] 
        = ((0xffff7fffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][1U]) | (0x8000U & ((0xffff8000U & 
                                     vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                     [1U][1U]) ^ ((0xffff8000U 
                                                   & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                   [0U][1U]) 
                                                  ^ 
                                                  ((IData)(
                                                           (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                            >> 0x21U)) 
                                                   << 0xfU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][1U] 
        = ((0xfffeffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][1U]) | (0x10000U & ((0xffff0000U & 
                                      vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [1U][1U]) ^ (
                                                   (0xffff0000U 
                                                    & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                    [0U][1U]) 
                                                   ^ 
                                                   ((IData)(
                                                            (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                             >> 0x21U)) 
                                                    << 0x10U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][1U] 
        = ((0xfffdffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][1U]) | (0x20000U & ((0xfffe0000U & 
                                      vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [1U][1U]) ^ (
                                                   (0xfffe0000U 
                                                    & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                    [0U][1U]) 
                                                   ^ 
                                                   ((IData)(
                                                            (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                             >> 0x21U)) 
                                                    << 0x11U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][1U] 
        = ((0xfffbffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][1U]) | (0x40000U & ((0xfffc0000U & 
                                      vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [1U][1U]) ^ (
                                                   (0xfffc0000U 
                                                    & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                    [0U][1U]) 
                                                   ^ 
                                                   ((IData)(
                                                            (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                             >> 0x21U)) 
                                                    << 0x12U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][1U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][1U]) | (0x80000U & ((0xfff80000U & 
                                      vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                      [1U][1U]) ^ (
                                                   (0xfff80000U 
                                                    & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                                    [0U][1U]) 
                                                   ^ 
                                                   ((IData)(
                                                            (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                             >> 0x21U)) 
                                                    << 0x13U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][1U] 
        = ((0xffefffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][1U]) | (0x100000U & ((0xfff00000U 
                                       & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [1U][1U]) ^ 
                                      ((0xfff00000U 
                                        & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [0U][1U]) ^ 
                                       ((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                 >> 0x21U)) 
                                        << 0x14U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][1U] 
        = ((0xffdfffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][1U]) | (0x200000U & ((0xffe00000U 
                                       & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [1U][1U]) ^ 
                                      ((0xffe00000U 
                                        & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [0U][1U]) ^ 
                                       ((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                 >> 0x21U)) 
                                        << 0x15U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][1U] 
        = ((0xffbfffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][1U]) | (0x400000U & ((0xffc00000U 
                                       & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [1U][1U]) ^ 
                                      ((0xffc00000U 
                                        & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [0U][1U]) ^ 
                                       ((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                 >> 0x21U)) 
                                        << 0x16U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][1U] 
        = ((0xff7fffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][1U]) | (0x800000U & ((0xff800000U 
                                       & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                       [1U][1U]) ^ 
                                      ((0xff800000U 
                                        & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [0U][1U]) ^ 
                                       ((IData)((vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                 >> 0x21U)) 
                                        << 0x17U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][1U] 
        = ((0xfeffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][1U]) | (0x1000000U & ((0xff000000U 
                                        & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [1U][1U]) ^ 
                                       ((0xff000000U 
                                         & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [0U][1U]) 
                                        ^ ((IData)(
                                                   (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                    >> 0x21U)) 
                                           << 0x18U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][1U] 
        = ((0xfdffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][1U]) | (0x2000000U & ((0xfe000000U 
                                        & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [1U][1U]) ^ 
                                       ((0xfe000000U 
                                         & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [0U][1U]) 
                                        ^ ((IData)(
                                                   (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                    >> 0x21U)) 
                                           << 0x19U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][1U] 
        = ((0xfbffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][1U]) | (0x4000000U & ((0xfc000000U 
                                        & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [1U][1U]) ^ 
                                       ((0xfc000000U 
                                         & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [0U][1U]) 
                                        ^ ((IData)(
                                                   (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                    >> 0x21U)) 
                                           << 0x1aU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][1U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][1U]) | (0x8000000U & ((0xf8000000U 
                                        & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                        [1U][1U]) ^ 
                                       ((0xf8000000U 
                                         & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [0U][1U]) 
                                        ^ ((IData)(
                                                   (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                    >> 0x21U)) 
                                           << 0x1bU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][1U] 
        = ((0xefffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][1U]) | (0x10000000U & ((0xf0000000U 
                                         & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [1U][1U]) 
                                        ^ ((0xf0000000U 
                                            & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                            [0U][1U]) 
                                           ^ ((IData)(
                                                      (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                       >> 0x21U)) 
                                              << 0x1cU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][1U] 
        = ((0xdfffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][1U]) | (0x20000000U & ((0xe0000000U 
                                         & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [1U][1U]) 
                                        ^ ((0xe0000000U 
                                            & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                            [0U][1U]) 
                                           ^ ((IData)(
                                                      (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                       >> 0x21U)) 
                                              << 0x1dU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][1U] 
        = ((0xbfffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][1U]) | (0x40000000U & ((0xc0000000U 
                                         & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                         [1U][1U]) 
                                        ^ ((0xc0000000U 
                                            & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                            [0U][1U]) 
                                           ^ ((IData)(
                                                      (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                       >> 0x21U)) 
                                              << 0x1eU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][1U] 
        = ((0x7fffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][1U]) | ((((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                            [1U][1U] ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                            [0U][1U]) >> 0x1fU) ^ (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                   >> 0x21U)) 
                         << 0x1fU));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][2U] 
        = ((0xeU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][2U]) | (1U & (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                               [1U][2U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                           [0U][2U] 
                                           ^ (IData)(
                                                     (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                      >> 0x21U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][2U] 
        = ((0xdU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][2U]) | (2U & ((0xfffffffeU & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [1U][2U]) ^ ((0xfffffffeU 
                                              & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [0U][2U]) 
                                             ^ ((IData)(
                                                        (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                         >> 0x21U)) 
                                                << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][2U] 
        = ((0xbU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][2U]) | (4U & ((0xfffffffcU & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                [1U][2U]) ^ ((0xfffffffcU 
                                              & vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                              [0U][2U]) 
                                             ^ ((IData)(
                                                        (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                                         >> 0x21U)) 
                                                << 2U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe2_s[2U][2U] 
        = ((7U & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
            [2U][2U]) | (0xfU & ((IData)((((vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                            [1U][2U] 
                                            ^ vlSelf->top__DOT__wallace_u0__DOT__pipe1_s
                                            [0U][2U]) 
                                           >> 3U) ^ 
                                          (vlSelf->top__DOT__wallace_u0__DOT__booth_code_u0__DOT____VdfgTmp_h98f3cb46__0 
                                           >> 0x21U))) 
                                 << 3U)));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][0U] 
        = ((0xfffffffeU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][0U]) | (1U & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                         [0U][0U]));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][0U] 
        = ((0xfffffffeU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][0U]) | (1U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                               [3U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [2U][0U] 
                                           ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][0U] 
        = ((0xfffffffdU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][0U]) | (2U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                               [3U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [2U][0U] 
                                           ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][0U] 
        = ((0xfffffffbU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][0U]) | (4U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                               [3U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [2U][0U] 
                                           ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][0U] 
        = ((0xfffffff7U & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][0U]) | (8U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                               [3U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [2U][0U] 
                                           ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][0U] 
        = ((0xffffffefU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][0U]) | (0x10U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                  [3U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [2U][0U] 
                                              ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][0U] 
        = ((0xffffffdfU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][0U]) | (0x20U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                  [3U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [2U][0U] 
                                              ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][0U] 
        = ((0xffffffbfU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][0U]) | (0x40U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                  [3U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [2U][0U] 
                                              ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][0U] 
        = ((0xffffff7fU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][0U]) | (0x80U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                  [3U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [2U][0U] 
                                              ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][0U] 
        = ((0xfffffeffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][0U]) | (0x100U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                   [3U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                               [2U][0U] 
                                               ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                               [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][0U] 
        = ((0xfffffdffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][0U]) | (0x200U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                   [3U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                               [2U][0U] 
                                               ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                               [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][0U] 
        = ((0xfffffbffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][0U]) | (0x400U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                   [3U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                               [2U][0U] 
                                               ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                               [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][0U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][0U]) | (0x800U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                   [3U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                               [2U][0U] 
                                               ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                               [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][0U] 
        = ((0xffffefffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][0U]) | (0x1000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                    [3U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                [2U][0U] 
                                                ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][0U] 
        = ((0xffffdfffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][0U]) | (0x2000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                    [3U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                [2U][0U] 
                                                ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][0U] 
        = ((0xffffbfffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][0U]) | (0x4000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                    [3U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                [2U][0U] 
                                                ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][0U] 
        = ((0xffff7fffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][0U]) | (0x8000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                    [3U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                [2U][0U] 
                                                ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][0U] 
        = ((0xfffeffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][0U]) | (0x10000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                     [3U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                 [2U][0U] 
                                                 ^ 
                                                 vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                 [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][0U] 
        = ((0xfffdffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][0U]) | (0x20000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                     [3U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                 [2U][0U] 
                                                 ^ 
                                                 vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                 [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][0U] 
        = ((0xfffbffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][0U]) | (0x40000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                     [3U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                 [2U][0U] 
                                                 ^ 
                                                 vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                 [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][0U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][0U]) | (0x80000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                     [3U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                 [2U][0U] 
                                                 ^ 
                                                 vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                 [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][0U] 
        = ((0xffefffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][0U]) | (0x100000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [3U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [2U][0U] 
                                                  ^ 
                                                  vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][0U] 
        = ((0xffdfffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][0U]) | (0x200000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [3U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [2U][0U] 
                                                  ^ 
                                                  vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][0U] 
        = ((0xffbfffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][0U]) | (0x400000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [3U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [2U][0U] 
                                                  ^ 
                                                  vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][0U] 
        = ((0xff7fffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][0U]) | (0x800000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [3U][0U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [2U][0U] 
                                                  ^ 
                                                  vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][0U] 
        = ((0xfeffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][0U]) | (0x1000000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [3U][0U] ^ (
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [2U][0U] 
                                                   ^ 
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][0U] 
        = ((0xfdffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][0U]) | (0x2000000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [3U][0U] ^ (
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [2U][0U] 
                                                   ^ 
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][0U] 
        = ((0xfbffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][0U]) | (0x4000000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [3U][0U] ^ (
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [2U][0U] 
                                                   ^ 
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][0U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][0U]) | (0x8000000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [3U][0U] ^ (
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [2U][0U] 
                                                   ^ 
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][0U] 
        = ((0xefffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][0U]) | (0x10000000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [3U][0U] ^ 
                                        (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [2U][0U] ^ 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][0U] 
        = ((0xdfffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][0U]) | (0x20000000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [3U][0U] ^ 
                                        (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [2U][0U] ^ 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][0U] 
        = ((0xbfffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][0U]) | (0x40000000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [3U][0U] ^ 
                                        (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [2U][0U] ^ 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][0U] 
        = ((0x7fffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][0U]) | (0x80000000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [3U][0U] ^ 
                                        (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [2U][0U] ^ 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][1U] 
        = ((0xfffffffeU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][1U]) | (1U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                               [3U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [2U][1U] 
                                           ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][1U] 
        = ((0xfffffffdU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][1U]) | (2U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                               [3U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [2U][1U] 
                                           ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][1U] 
        = ((0xfffffffbU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][1U]) | (4U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                               [3U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [2U][1U] 
                                           ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][1U] 
        = ((0xfffffff7U & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][1U]) | (8U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                               [3U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [2U][1U] 
                                           ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][1U] 
        = ((0xffffffefU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][1U]) | (0x10U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                  [3U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [2U][1U] 
                                              ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][1U] 
        = ((0xffffffdfU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][1U]) | (0x20U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                  [3U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [2U][1U] 
                                              ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][1U] 
        = ((0xffffffbfU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][1U]) | (0x40U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                  [3U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [2U][1U] 
                                              ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][1U] 
        = ((0xffffff7fU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][1U]) | (0x80U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                  [3U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [2U][1U] 
                                              ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][1U] 
        = ((0xfffffeffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][1U]) | (0x100U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                   [3U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                               [2U][1U] 
                                               ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                               [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][1U] 
        = ((0xfffffdffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][1U]) | (0x200U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                   [3U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                               [2U][1U] 
                                               ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                               [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][1U] 
        = ((0xfffffbffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][1U]) | (0x400U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                   [3U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                               [2U][1U] 
                                               ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                               [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][1U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][1U]) | (0x800U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                   [3U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                               [2U][1U] 
                                               ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                               [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][1U] 
        = ((0xffffefffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][1U]) | (0x1000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                    [3U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                [2U][1U] 
                                                ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][1U] 
        = ((0xffffdfffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][1U]) | (0x2000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                    [3U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                [2U][1U] 
                                                ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][1U] 
        = ((0xffffbfffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][1U]) | (0x4000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                    [3U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                [2U][1U] 
                                                ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][1U] 
        = ((0xffff7fffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][1U]) | (0x8000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                    [3U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                [2U][1U] 
                                                ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][1U] 
        = ((0xfffeffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][1U]) | (0x10000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                     [3U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                 [2U][1U] 
                                                 ^ 
                                                 vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                 [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][1U] 
        = ((0xfffdffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][1U]) | (0x20000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                     [3U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                 [2U][1U] 
                                                 ^ 
                                                 vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                 [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][1U] 
        = ((0xfffbffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][1U]) | (0x40000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                     [3U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                 [2U][1U] 
                                                 ^ 
                                                 vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                 [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][1U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][1U]) | (0x80000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                     [3U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                 [2U][1U] 
                                                 ^ 
                                                 vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                 [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][1U] 
        = ((0xffefffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][1U]) | (0x100000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [3U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [2U][1U] 
                                                  ^ 
                                                  vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][1U] 
        = ((0xffdfffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][1U]) | (0x200000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [3U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [2U][1U] 
                                                  ^ 
                                                  vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][1U] 
        = ((0xffbfffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][1U]) | (0x400000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [3U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [2U][1U] 
                                                  ^ 
                                                  vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][1U] 
        = ((0xff7fffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][1U]) | (0x800000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [3U][1U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [2U][1U] 
                                                  ^ 
                                                  vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][1U] 
        = ((0xfeffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][1U]) | (0x1000000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [3U][1U] ^ (
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [2U][1U] 
                                                   ^ 
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][1U] 
        = ((0xfdffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][1U]) | (0x2000000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [3U][1U] ^ (
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [2U][1U] 
                                                   ^ 
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][1U] 
        = ((0xfbffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][1U]) | (0x4000000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [3U][1U] ^ (
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [2U][1U] 
                                                   ^ 
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][1U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][1U]) | (0x8000000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [3U][1U] ^ (
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [2U][1U] 
                                                   ^ 
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][1U] 
        = ((0xefffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][1U]) | (0x10000000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [3U][1U] ^ 
                                        (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [2U][1U] ^ 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][1U] 
        = ((0xdfffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][1U]) | (0x20000000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [3U][1U] ^ 
                                        (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [2U][1U] ^ 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][1U] 
        = ((0xbfffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][1U]) | (0x40000000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [3U][1U] ^ 
                                        (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [2U][1U] ^ 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][1U] 
        = ((0x7fffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][1U]) | (0x80000000U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [3U][1U] ^ 
                                        (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [2U][1U] ^ 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][2U] 
        = ((0xeU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][2U]) | (1U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                               [3U][2U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [2U][2U] 
                                           ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [1U][2U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][2U] 
        = ((0xdU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][2U]) | (2U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                               [3U][2U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [2U][2U] 
                                           ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [1U][2U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][2U] 
        = ((0xbU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][2U]) | (4U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                               [3U][2U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [2U][2U] 
                                           ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [1U][2U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[1U][2U] 
        = ((7U & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [1U][2U]) | (8U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                               [3U][2U] ^ (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [2U][2U] 
                                           ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [1U][2U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][0U] 
        = ((0xfffffffdU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][0U]) | (2U & ((0xfffffffeU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                [0U][0U]) ^ ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                              [1U][0U] 
                                              ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                              [0U][0U]) 
                                             << 1U))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][0U] 
        = ((0xfffffffbU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][0U]) | (4U & ((0xfffffffcU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                [0U][0U]) ^ (0xfffffffcU 
                                             & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                 [1U][0U] 
                                                 ^ 
                                                 vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                 [0U][0U]) 
                                                << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][0U] 
        = ((0xfffffff7U & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][0U]) | (8U & ((0xfffffff8U & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                [0U][0U]) ^ (0xfffffff8U 
                                             & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                 [1U][0U] 
                                                 ^ 
                                                 vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                 [0U][0U]) 
                                                << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][0U] 
        = ((0xffffffefU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][0U]) | (0x10U & ((0xfffffff0U & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                   [0U][0U]) ^ (0xfffffff0U 
                                                & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                    [1U][0U] 
                                                    ^ 
                                                    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                    [0U][0U]) 
                                                   << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][0U] 
        = ((0xffffffdfU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][0U]) | (0x20U & ((0xffffffe0U & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                   [0U][0U]) ^ (0xffffffe0U 
                                                & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                    [1U][0U] 
                                                    ^ 
                                                    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                    [0U][0U]) 
                                                   << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][0U] 
        = ((0xffffffbfU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][0U]) | (0x40U & ((0xffffffc0U & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                   [0U][0U]) ^ (0xffffffc0U 
                                                & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                    [1U][0U] 
                                                    ^ 
                                                    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                    [0U][0U]) 
                                                   << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][0U] 
        = ((0xffffff7fU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][0U]) | (0x80U & ((0xffffff80U & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                   [0U][0U]) ^ (0xffffff80U 
                                                & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                    [1U][0U] 
                                                    ^ 
                                                    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                    [0U][0U]) 
                                                   << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][0U] 
        = ((0xfffffeffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][0U]) | (0x100U & ((0xffffff00U & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                    [0U][0U]) ^ (0xffffff00U 
                                                 & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                     [1U][0U] 
                                                     ^ 
                                                     vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                     [0U][0U]) 
                                                    << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][0U] 
        = ((0xfffffdffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][0U]) | (0x200U & ((0xfffffe00U & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                    [0U][0U]) ^ (0xfffffe00U 
                                                 & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                     [1U][0U] 
                                                     ^ 
                                                     vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                     [0U][0U]) 
                                                    << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][0U] 
        = ((0xfffffbffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][0U]) | (0x400U & ((0xfffffc00U & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                    [0U][0U]) ^ (0xfffffc00U 
                                                 & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                     [1U][0U] 
                                                     ^ 
                                                     vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                     [0U][0U]) 
                                                    << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][0U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][0U]) | (0x800U & ((0xfffff800U & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                    [0U][0U]) ^ (0xfffff800U 
                                                 & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                     [1U][0U] 
                                                     ^ 
                                                     vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                     [0U][0U]) 
                                                    << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][0U] 
        = ((0xffffefffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][0U]) | (0x1000U & ((0xfffff000U & 
                                     vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                     [0U][0U]) ^ (0xfffff000U 
                                                  & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                      [1U][0U] 
                                                      ^ 
                                                      vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                      [0U][0U]) 
                                                     << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][0U] 
        = ((0xffffdfffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][0U]) | (0x2000U & ((0xffffe000U & 
                                     vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                     [0U][0U]) ^ (0xffffe000U 
                                                  & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                      [1U][0U] 
                                                      ^ 
                                                      vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                      [0U][0U]) 
                                                     << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][0U] 
        = ((0xffffbfffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][0U]) | (0x4000U & ((0xffffc000U & 
                                     vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                     [0U][0U]) ^ (0xffffc000U 
                                                  & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                      [1U][0U] 
                                                      ^ 
                                                      vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                      [0U][0U]) 
                                                     << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][0U] 
        = ((0xffff7fffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][0U]) | (0x8000U & ((0xffff8000U & 
                                     vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                     [0U][0U]) ^ (0xffff8000U 
                                                  & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                      [1U][0U] 
                                                      ^ 
                                                      vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                      [0U][0U]) 
                                                     << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][0U] 
        = ((0xfffeffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][0U]) | (0x10000U & ((0xffff0000U & 
                                      vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [0U][0U]) ^ (0xffff0000U 
                                                   & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                       [1U][0U] 
                                                       ^ 
                                                       vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                       [0U][0U]) 
                                                      << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][0U] 
        = ((0xfffdffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][0U]) | (0x20000U & ((0xfffe0000U & 
                                      vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [0U][0U]) ^ (0xfffe0000U 
                                                   & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                       [1U][0U] 
                                                       ^ 
                                                       vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                       [0U][0U]) 
                                                      << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][0U] 
        = ((0xfffbffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][0U]) | (0x40000U & ((0xfffc0000U & 
                                      vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [0U][0U]) ^ (0xfffc0000U 
                                                   & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                       [1U][0U] 
                                                       ^ 
                                                       vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                       [0U][0U]) 
                                                      << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][0U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][0U]) | (0x80000U & ((0xfff80000U & 
                                      vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [0U][0U]) ^ (0xfff80000U 
                                                   & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                       [1U][0U] 
                                                       ^ 
                                                       vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                       [0U][0U]) 
                                                      << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][0U] 
        = ((0xffefffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][0U]) | (0x100000U & ((0xfff00000U 
                                       & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [0U][0U]) ^ 
                                      (0xfff00000U 
                                       & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                           [1U][0U] 
                                           ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                           [0U][0U]) 
                                          << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][0U] 
        = ((0xffdfffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][0U]) | (0x200000U & ((0xffe00000U 
                                       & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [0U][0U]) ^ 
                                      (0xffe00000U 
                                       & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                           [1U][0U] 
                                           ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                           [0U][0U]) 
                                          << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][0U] 
        = ((0xffbfffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][0U]) | (0x400000U & ((0xffc00000U 
                                       & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [0U][0U]) ^ 
                                      (0xffc00000U 
                                       & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                           [1U][0U] 
                                           ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                           [0U][0U]) 
                                          << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][0U] 
        = ((0xff7fffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][0U]) | (0x800000U & ((0xff800000U 
                                       & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [0U][0U]) ^ 
                                      (0xff800000U 
                                       & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                           [1U][0U] 
                                           ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                           [0U][0U]) 
                                          << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][0U] 
        = ((0xfeffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][0U]) | (0x1000000U & ((0xff000000U 
                                        & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [0U][0U]) ^ 
                                       (0xff000000U 
                                        & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                            [1U][0U] 
                                            ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                            [0U][0U]) 
                                           << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][0U] 
        = ((0xfdffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][0U]) | (0x2000000U & ((0xfe000000U 
                                        & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [0U][0U]) ^ 
                                       (0xfe000000U 
                                        & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                            [1U][0U] 
                                            ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                            [0U][0U]) 
                                           << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][0U] 
        = ((0xfbffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][0U]) | (0x4000000U & ((0xfc000000U 
                                        & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [0U][0U]) ^ 
                                       (0xfc000000U 
                                        & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                            [1U][0U] 
                                            ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                            [0U][0U]) 
                                           << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][0U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][0U]) | (0x8000000U & ((0xf8000000U 
                                        & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [0U][0U]) ^ 
                                       (0xf8000000U 
                                        & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                            [1U][0U] 
                                            ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                            [0U][0U]) 
                                           << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][0U] 
        = ((0xefffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][0U]) | (0x10000000U & ((0xf0000000U 
                                         & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [0U][0U]) 
                                        ^ (0xf0000000U 
                                           & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [1U][0U] 
                                               ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [0U][0U]) 
                                              << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][0U] 
        = ((0xdfffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][0U]) | (0x20000000U & ((0xe0000000U 
                                         & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [0U][0U]) 
                                        ^ (0xe0000000U 
                                           & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [1U][0U] 
                                               ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [0U][0U]) 
                                              << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][0U] 
        = ((0xbfffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][0U]) | (0x40000000U & ((0xc0000000U 
                                         & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [0U][0U]) 
                                        ^ (0xc0000000U 
                                           & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [1U][0U] 
                                               ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [0U][0U]) 
                                              << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][0U] 
        = ((0x7fffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][0U]) | (0x80000000U & ((0x80000000U 
                                         & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [0U][0U]) 
                                        ^ (0x80000000U 
                                           & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [1U][0U] 
                                               ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [0U][0U]) 
                                              << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][1U] 
        = ((0xfffffffeU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][1U]) | (1U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                               [0U][1U] ^ ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                            [1U][0U] 
                                            ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                            [0U][0U]) 
                                           >> 0x1fU))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][1U] 
        = ((0xfffffffdU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][1U]) | (2U & ((0xfffffffeU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                [0U][1U]) ^ ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                              [1U][1U] 
                                              ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                              [0U][1U]) 
                                             << 1U))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][1U] 
        = ((0xfffffffbU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][1U]) | (4U & ((0xfffffffcU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                [0U][1U]) ^ (0xfffffffcU 
                                             & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                 [1U][1U] 
                                                 ^ 
                                                 vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                 [0U][1U]) 
                                                << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][1U] 
        = ((0xfffffff7U & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][1U]) | (8U & ((0xfffffff8U & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                [0U][1U]) ^ (0xfffffff8U 
                                             & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                 [1U][1U] 
                                                 ^ 
                                                 vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                 [0U][1U]) 
                                                << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][1U] 
        = ((0xffffffefU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][1U]) | (0x10U & ((0xfffffff0U & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                   [0U][1U]) ^ (0xfffffff0U 
                                                & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                    [1U][1U] 
                                                    ^ 
                                                    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                    [0U][1U]) 
                                                   << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][1U] 
        = ((0xffffffdfU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][1U]) | (0x20U & ((0xffffffe0U & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                   [0U][1U]) ^ (0xffffffe0U 
                                                & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                    [1U][1U] 
                                                    ^ 
                                                    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                    [0U][1U]) 
                                                   << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][1U] 
        = ((0xffffffbfU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][1U]) | (0x40U & ((0xffffffc0U & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                   [0U][1U]) ^ (0xffffffc0U 
                                                & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                    [1U][1U] 
                                                    ^ 
                                                    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                    [0U][1U]) 
                                                   << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][1U] 
        = ((0xffffff7fU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][1U]) | (0x80U & ((0xffffff80U & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                   [0U][1U]) ^ (0xffffff80U 
                                                & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                    [1U][1U] 
                                                    ^ 
                                                    vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                    [0U][1U]) 
                                                   << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][1U] 
        = ((0xfffffeffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][1U]) | (0x100U & ((0xffffff00U & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                    [0U][1U]) ^ (0xffffff00U 
                                                 & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                     [1U][1U] 
                                                     ^ 
                                                     vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                     [0U][1U]) 
                                                    << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][1U] 
        = ((0xfffffdffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][1U]) | (0x200U & ((0xfffffe00U & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                    [0U][1U]) ^ (0xfffffe00U 
                                                 & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                     [1U][1U] 
                                                     ^ 
                                                     vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                     [0U][1U]) 
                                                    << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][1U] 
        = ((0xfffffbffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][1U]) | (0x400U & ((0xfffffc00U & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                    [0U][1U]) ^ (0xfffffc00U 
                                                 & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                     [1U][1U] 
                                                     ^ 
                                                     vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                     [0U][1U]) 
                                                    << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][1U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][1U]) | (0x800U & ((0xfffff800U & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                    [0U][1U]) ^ (0xfffff800U 
                                                 & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                     [1U][1U] 
                                                     ^ 
                                                     vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                     [0U][1U]) 
                                                    << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][1U] 
        = ((0xffffefffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][1U]) | (0x1000U & ((0xfffff000U & 
                                     vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                     [0U][1U]) ^ (0xfffff000U 
                                                  & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                      [1U][1U] 
                                                      ^ 
                                                      vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                      [0U][1U]) 
                                                     << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][1U] 
        = ((0xffffdfffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][1U]) | (0x2000U & ((0xffffe000U & 
                                     vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                     [0U][1U]) ^ (0xffffe000U 
                                                  & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                      [1U][1U] 
                                                      ^ 
                                                      vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                      [0U][1U]) 
                                                     << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][1U] 
        = ((0xffffbfffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][1U]) | (0x4000U & ((0xffffc000U & 
                                     vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                     [0U][1U]) ^ (0xffffc000U 
                                                  & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                      [1U][1U] 
                                                      ^ 
                                                      vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                      [0U][1U]) 
                                                     << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][1U] 
        = ((0xffff7fffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][1U]) | (0x8000U & ((0xffff8000U & 
                                     vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                     [0U][1U]) ^ (0xffff8000U 
                                                  & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                      [1U][1U] 
                                                      ^ 
                                                      vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                      [0U][1U]) 
                                                     << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][1U] 
        = ((0xfffeffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][1U]) | (0x10000U & ((0xffff0000U & 
                                      vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [0U][1U]) ^ (0xffff0000U 
                                                   & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                       [1U][1U] 
                                                       ^ 
                                                       vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                       [0U][1U]) 
                                                      << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][1U] 
        = ((0xfffdffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][1U]) | (0x20000U & ((0xfffe0000U & 
                                      vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [0U][1U]) ^ (0xfffe0000U 
                                                   & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                       [1U][1U] 
                                                       ^ 
                                                       vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                       [0U][1U]) 
                                                      << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][1U] 
        = ((0xfffbffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][1U]) | (0x40000U & ((0xfffc0000U & 
                                      vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [0U][1U]) ^ (0xfffc0000U 
                                                   & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                       [1U][1U] 
                                                       ^ 
                                                       vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                       [0U][1U]) 
                                                      << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][1U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][1U]) | (0x80000U & ((0xfff80000U & 
                                      vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [0U][1U]) ^ (0xfff80000U 
                                                   & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                       [1U][1U] 
                                                       ^ 
                                                       vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                       [0U][1U]) 
                                                      << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][1U] 
        = ((0xffefffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][1U]) | (0x100000U & ((0xfff00000U 
                                       & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [0U][1U]) ^ 
                                      (0xfff00000U 
                                       & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                           [1U][1U] 
                                           ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                           [0U][1U]) 
                                          << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][1U] 
        = ((0xffdfffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][1U]) | (0x200000U & ((0xffe00000U 
                                       & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [0U][1U]) ^ 
                                      (0xffe00000U 
                                       & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                           [1U][1U] 
                                           ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                           [0U][1U]) 
                                          << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][1U] 
        = ((0xffbfffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][1U]) | (0x400000U & ((0xffc00000U 
                                       & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [0U][1U]) ^ 
                                      (0xffc00000U 
                                       & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                           [1U][1U] 
                                           ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                           [0U][1U]) 
                                          << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][1U] 
        = ((0xff7fffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][1U]) | (0x800000U & ((0xff800000U 
                                       & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [0U][1U]) ^ 
                                      (0xff800000U 
                                       & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                           [1U][1U] 
                                           ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                           [0U][1U]) 
                                          << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][1U] 
        = ((0xfeffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][1U]) | (0x1000000U & ((0xff000000U 
                                        & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [0U][1U]) ^ 
                                       (0xff000000U 
                                        & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                            [1U][1U] 
                                            ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                            [0U][1U]) 
                                           << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][1U] 
        = ((0xfdffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][1U]) | (0x2000000U & ((0xfe000000U 
                                        & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [0U][1U]) ^ 
                                       (0xfe000000U 
                                        & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                            [1U][1U] 
                                            ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                            [0U][1U]) 
                                           << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][1U] 
        = ((0xfbffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][1U]) | (0x4000000U & ((0xfc000000U 
                                        & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [0U][1U]) ^ 
                                       (0xfc000000U 
                                        & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                            [1U][1U] 
                                            ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                            [0U][1U]) 
                                           << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][1U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][1U]) | (0x8000000U & ((0xf8000000U 
                                        & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [0U][1U]) ^ 
                                       (0xf8000000U 
                                        & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                            [1U][1U] 
                                            ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                            [0U][1U]) 
                                           << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][1U] 
        = ((0xefffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][1U]) | (0x10000000U & ((0xf0000000U 
                                         & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [0U][1U]) 
                                        ^ (0xf0000000U 
                                           & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [1U][1U] 
                                               ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [0U][1U]) 
                                              << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][1U] 
        = ((0xdfffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][1U]) | (0x20000000U & ((0xe0000000U 
                                         & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [0U][1U]) 
                                        ^ (0xe0000000U 
                                           & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [1U][1U] 
                                               ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [0U][1U]) 
                                              << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][1U] 
        = ((0xbfffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][1U]) | (0x40000000U & ((0xc0000000U 
                                         & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [0U][1U]) 
                                        ^ (0xc0000000U 
                                           & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [1U][1U] 
                                               ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [0U][1U]) 
                                              << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][1U] 
        = ((0x7fffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][1U]) | (0x80000000U & ((0x80000000U 
                                         & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [0U][1U]) 
                                        ^ (0x80000000U 
                                           & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [1U][1U] 
                                               ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [0U][1U]) 
                                              << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][2U] 
        = ((0xeU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][2U]) | (1U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                               [0U][2U] ^ ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                            [1U][1U] 
                                            ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                            [0U][1U]) 
                                           >> 0x1fU))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][2U] 
        = ((0xdU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][2U]) | (2U & ((0xfffffffeU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                [0U][2U]) ^ ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                              [1U][2U] 
                                              ^ vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                              [0U][2U]) 
                                             << 1U))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][2U] 
        = ((0xbU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][2U]) | (4U & ((0xfffffffcU & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                [0U][2U]) ^ (0xfffffffcU 
                                             & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                 [1U][2U] 
                                                 ^ 
                                                 vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                 [0U][2U]) 
                                                << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_s[0U][2U] 
        = ((7U & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
            [0U][2U]) | (8U & ((0xfffffff8U & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                [0U][2U]) ^ (0xfffffff8U 
                                             & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                 [1U][2U] 
                                                 ^ 
                                                 vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                 [0U][2U]) 
                                                << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][0U] 
        = ((0xfffffffeU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][0U]) | (1U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                [3U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                [2U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [2U][0U] 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [3U][0U]) 
                                             & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                             [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][0U] 
        = ((0xfffffffdU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][0U]) | (2U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                [3U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                [2U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [2U][0U] 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [3U][0U]) 
                                             & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                             [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][0U] 
        = ((0xfffffffbU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][0U]) | (4U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                [3U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                [2U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [2U][0U] 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [3U][0U]) 
                                             & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                             [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][0U] 
        = ((0xfffffff7U & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][0U]) | (8U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                [3U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                [2U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [2U][0U] 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [3U][0U]) 
                                             & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                             [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][0U] 
        = ((0xffffffefU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][0U]) | (0x10U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                   [3U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                   [2U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                 [2U][0U] 
                                                 | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                 [3U][0U]) 
                                                & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][0U] 
        = ((0xffffffdfU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][0U]) | (0x20U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                   [3U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                   [2U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                 [2U][0U] 
                                                 | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                 [3U][0U]) 
                                                & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][0U] 
        = ((0xffffffbfU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][0U]) | (0x40U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                   [3U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                   [2U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                 [2U][0U] 
                                                 | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                 [3U][0U]) 
                                                & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][0U] 
        = ((0xffffff7fU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][0U]) | (0x80U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                   [3U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                   [2U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                 [2U][0U] 
                                                 | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                 [3U][0U]) 
                                                & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][0U] 
        = ((0xfffffeffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][0U]) | (0x100U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                    [3U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                    [2U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [2U][0U] 
                                                  | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [3U][0U]) 
                                                 & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                 [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][0U] 
        = ((0xfffffdffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][0U]) | (0x200U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                    [3U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                    [2U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [2U][0U] 
                                                  | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [3U][0U]) 
                                                 & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                 [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][0U] 
        = ((0xfffffbffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][0U]) | (0x400U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                    [3U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                    [2U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [2U][0U] 
                                                  | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [3U][0U]) 
                                                 & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                 [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][0U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][0U]) | (0x800U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                    [3U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                    [2U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [2U][0U] 
                                                  | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [3U][0U]) 
                                                 & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                 [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][0U] 
        = ((0xffffefffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][0U]) | (0x1000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                     [3U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                     [2U][0U]) | ((
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [2U][0U] 
                                                   | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [3U][0U]) 
                                                  & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][0U] 
        = ((0xffffdfffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][0U]) | (0x2000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                     [3U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                     [2U][0U]) | ((
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [2U][0U] 
                                                   | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [3U][0U]) 
                                                  & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][0U] 
        = ((0xffffbfffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][0U]) | (0x4000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                     [3U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                     [2U][0U]) | ((
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [2U][0U] 
                                                   | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [3U][0U]) 
                                                  & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][0U] 
        = ((0xffff7fffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][0U]) | (0x8000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                     [3U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                     [2U][0U]) | ((
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [2U][0U] 
                                                   | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [3U][0U]) 
                                                  & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][0U] 
        = ((0xfffeffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][0U]) | (0x10000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [3U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [2U][0U]) | (
                                                   (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                    [2U][0U] 
                                                    | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                    [3U][0U]) 
                                                   & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][0U] 
        = ((0xfffdffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][0U]) | (0x20000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [3U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [2U][0U]) | (
                                                   (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                    [2U][0U] 
                                                    | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                    [3U][0U]) 
                                                   & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][0U] 
        = ((0xfffbffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][0U]) | (0x40000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [3U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [2U][0U]) | (
                                                   (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                    [2U][0U] 
                                                    | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                    [3U][0U]) 
                                                   & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][0U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][0U]) | (0x80000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [3U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [2U][0U]) | (
                                                   (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                    [2U][0U] 
                                                    | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                    [3U][0U]) 
                                                   & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][0U] 
        = ((0xffefffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][0U]) | (0x100000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [3U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [2U][0U]) | 
                                      ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [2U][0U] | 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [3U][0U]) & 
                                       vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][0U] 
        = ((0xffdfffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][0U]) | (0x200000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [3U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [2U][0U]) | 
                                      ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [2U][0U] | 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [3U][0U]) & 
                                       vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][0U] 
        = ((0xffbfffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][0U]) | (0x400000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [3U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [2U][0U]) | 
                                      ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [2U][0U] | 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [3U][0U]) & 
                                       vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][0U] 
        = ((0xff7fffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][0U]) | (0x800000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [3U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [2U][0U]) | 
                                      ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [2U][0U] | 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [3U][0U]) & 
                                       vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][0U] 
        = ((0xfeffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][0U]) | (0x1000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [3U][0U] & 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [2U][0U]) | 
                                       ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [2U][0U] | 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [3U][0U]) 
                                        & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][0U] 
        = ((0xfdffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][0U]) | (0x2000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [3U][0U] & 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [2U][0U]) | 
                                       ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [2U][0U] | 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [3U][0U]) 
                                        & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][0U] 
        = ((0xfbffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][0U]) | (0x4000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [3U][0U] & 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [2U][0U]) | 
                                       ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [2U][0U] | 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [3U][0U]) 
                                        & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][0U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][0U]) | (0x8000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [3U][0U] & 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [2U][0U]) | 
                                       ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [2U][0U] | 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [3U][0U]) 
                                        & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][0U] 
        = ((0xefffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][0U]) | (0x10000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [3U][0U] & 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [2U][0U]) 
                                        | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                            [2U][0U] 
                                            | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                            [3U][0U]) 
                                           & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][0U] 
        = ((0xdfffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][0U]) | (0x20000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [3U][0U] & 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [2U][0U]) 
                                        | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                            [2U][0U] 
                                            | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                            [3U][0U]) 
                                           & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][0U] 
        = ((0xbfffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][0U]) | (0x40000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [3U][0U] & 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [2U][0U]) 
                                        | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                            [2U][0U] 
                                            | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                            [3U][0U]) 
                                           & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][0U] 
        = ((0x7fffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][0U]) | (0x80000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [3U][0U] & 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [2U][0U]) 
                                        | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                            [2U][0U] 
                                            | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                            [3U][0U]) 
                                           & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [1U][0U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][1U] 
        = ((0xfffffffeU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][1U]) | (1U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                [3U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                [2U][1U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [2U][1U] 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [3U][1U]) 
                                             & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                             [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][1U] 
        = ((0xfffffffdU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][1U]) | (2U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                [3U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                [2U][1U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [2U][1U] 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [3U][1U]) 
                                             & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                             [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][1U] 
        = ((0xfffffffbU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][1U]) | (4U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                [3U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                [2U][1U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [2U][1U] 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [3U][1U]) 
                                             & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                             [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][1U] 
        = ((0xfffffff7U & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][1U]) | (8U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                [3U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                [2U][1U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [2U][1U] 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [3U][1U]) 
                                             & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                             [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][1U] 
        = ((0xffffffefU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][1U]) | (0x10U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                   [3U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                   [2U][1U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                 [2U][1U] 
                                                 | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                 [3U][1U]) 
                                                & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][1U] 
        = ((0xffffffdfU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][1U]) | (0x20U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                   [3U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                   [2U][1U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                 [2U][1U] 
                                                 | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                 [3U][1U]) 
                                                & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][1U] 
        = ((0xffffffbfU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][1U]) | (0x40U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                   [3U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                   [2U][1U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                 [2U][1U] 
                                                 | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                 [3U][1U]) 
                                                & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][1U] 
        = ((0xffffff7fU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][1U]) | (0x80U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                   [3U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                   [2U][1U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                 [2U][1U] 
                                                 | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                 [3U][1U]) 
                                                & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][1U] 
        = ((0xfffffeffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][1U]) | (0x100U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                    [3U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                    [2U][1U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [2U][1U] 
                                                  | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [3U][1U]) 
                                                 & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                 [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][1U] 
        = ((0xfffffdffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][1U]) | (0x200U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                    [3U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                    [2U][1U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [2U][1U] 
                                                  | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [3U][1U]) 
                                                 & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                 [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][1U] 
        = ((0xfffffbffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][1U]) | (0x400U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                    [3U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                    [2U][1U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [2U][1U] 
                                                  | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [3U][1U]) 
                                                 & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                 [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][1U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][1U]) | (0x800U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                    [3U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                    [2U][1U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [2U][1U] 
                                                  | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [3U][1U]) 
                                                 & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                 [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][1U] 
        = ((0xffffefffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][1U]) | (0x1000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                     [3U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                     [2U][1U]) | ((
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [2U][1U] 
                                                   | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [3U][1U]) 
                                                  & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][1U] 
        = ((0xffffdfffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][1U]) | (0x2000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                     [3U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                     [2U][1U]) | ((
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [2U][1U] 
                                                   | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [3U][1U]) 
                                                  & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][1U] 
        = ((0xffffbfffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][1U]) | (0x4000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                     [3U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                     [2U][1U]) | ((
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [2U][1U] 
                                                   | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [3U][1U]) 
                                                  & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][1U] 
        = ((0xffff7fffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][1U]) | (0x8000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                     [3U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                     [2U][1U]) | ((
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [2U][1U] 
                                                   | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [3U][1U]) 
                                                  & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][1U] 
        = ((0xfffeffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][1U]) | (0x10000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [3U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [2U][1U]) | (
                                                   (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                    [2U][1U] 
                                                    | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                    [3U][1U]) 
                                                   & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][1U] 
        = ((0xfffdffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][1U]) | (0x20000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [3U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [2U][1U]) | (
                                                   (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                    [2U][1U] 
                                                    | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                    [3U][1U]) 
                                                   & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][1U] 
        = ((0xfffbffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][1U]) | (0x40000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [3U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [2U][1U]) | (
                                                   (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                    [2U][1U] 
                                                    | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                    [3U][1U]) 
                                                   & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][1U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][1U]) | (0x80000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [3U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [2U][1U]) | (
                                                   (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                    [2U][1U] 
                                                    | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                    [3U][1U]) 
                                                   & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][1U] 
        = ((0xffefffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][1U]) | (0x100000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [3U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [2U][1U]) | 
                                      ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [2U][1U] | 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [3U][1U]) & 
                                       vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][1U] 
        = ((0xffdfffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][1U]) | (0x200000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [3U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [2U][1U]) | 
                                      ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [2U][1U] | 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [3U][1U]) & 
                                       vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][1U] 
        = ((0xffbfffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][1U]) | (0x400000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [3U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [2U][1U]) | 
                                      ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [2U][1U] | 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [3U][1U]) & 
                                       vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][1U] 
        = ((0xff7fffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][1U]) | (0x800000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [3U][1U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [2U][1U]) | 
                                      ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [2U][1U] | 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [3U][1U]) & 
                                       vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][1U] 
        = ((0xfeffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][1U]) | (0x1000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [3U][1U] & 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [2U][1U]) | 
                                       ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [2U][1U] | 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [3U][1U]) 
                                        & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][1U] 
        = ((0xfdffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][1U]) | (0x2000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [3U][1U] & 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [2U][1U]) | 
                                       ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [2U][1U] | 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [3U][1U]) 
                                        & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][1U] 
        = ((0xfbffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][1U]) | (0x4000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [3U][1U] & 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [2U][1U]) | 
                                       ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [2U][1U] | 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [3U][1U]) 
                                        & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][1U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][1U]) | (0x8000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [3U][1U] & 
                                        vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [2U][1U]) | 
                                       ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [2U][1U] | 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [3U][1U]) 
                                        & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][1U] 
        = ((0xefffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][1U]) | (0x10000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [3U][1U] & 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [2U][1U]) 
                                        | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                            [2U][1U] 
                                            | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                            [3U][1U]) 
                                           & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][1U] 
        = ((0xdfffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][1U]) | (0x20000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [3U][1U] & 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [2U][1U]) 
                                        | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                            [2U][1U] 
                                            | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                            [3U][1U]) 
                                           & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][1U] 
        = ((0xbfffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][1U]) | (0x40000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [3U][1U] & 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [2U][1U]) 
                                        | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                            [2U][1U] 
                                            | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                            [3U][1U]) 
                                           & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][1U] 
        = ((0x7fffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][1U]) | (0x80000000U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [3U][1U] & 
                                         vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                         [2U][1U]) 
                                        | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                            [2U][1U] 
                                            | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                            [3U][1U]) 
                                           & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [1U][1U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][2U] 
        = ((0xeU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][2U]) | (1U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                [3U][2U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                [2U][2U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [2U][2U] 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [3U][2U]) 
                                             & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                             [1U][2U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][2U] 
        = ((0xdU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][2U]) | (2U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                [3U][2U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                [2U][2U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [2U][2U] 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [3U][2U]) 
                                             & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                             [1U][2U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][2U] 
        = ((0xbU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][2U]) | (4U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                [3U][2U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                [2U][2U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [2U][2U] 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [3U][2U]) 
                                             & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                             [1U][2U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[1U][2U] 
        = ((7U & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [1U][2U]) | (8U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                [3U][2U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                [2U][2U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [2U][2U] 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [3U][2U]) 
                                             & vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                             [1U][2U]))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][0U] 
        = ((0xfffffffdU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][0U]) | (2U & ((0xfffffffeU & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                               [0U][0U] 
                                               & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                  [1U][0U] 
                                                  << 1U))) 
                               | (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                    [1U][0U] << 1U) 
                                   | (0xfffffffeU & 
                                      vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [0U][0U])) & 
                                  (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                   [0U][0U] << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][0U] 
        = ((0xfffffffbU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][0U]) | (4U & ((0xfffffffcU & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                               [0U][0U] 
                                               & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                  [1U][0U] 
                                                  << 1U))) 
                               | (0xfffffffcU & (((
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                   [1U][0U] 
                                                   << 1U) 
                                                  | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [0U][0U]) 
                                                 & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                    [0U][0U] 
                                                    << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][0U] 
        = ((0xfffffff7U & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][0U]) | (8U & ((0xfffffff8U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                               [0U][0U] 
                                               & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                  [1U][0U] 
                                                  << 1U))) 
                               | (0xfffffff8U & (((
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                   [1U][0U] 
                                                   << 1U) 
                                                  | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [0U][0U]) 
                                                 & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                    [0U][0U] 
                                                    << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][0U] 
        = ((0xffffffefU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][0U]) | (0x10U & ((0xfffffff0U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [0U][0U] 
                                                  & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                     [1U][0U] 
                                                     << 1U))) 
                                  | (0xfffffff0U & 
                                     (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                        [1U][0U] << 1U) 
                                       | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [0U][0U]) & 
                                      (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                       [0U][0U] << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][0U] 
        = ((0xffffffdfU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][0U]) | (0x20U & ((0xffffffe0U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [0U][0U] 
                                                  & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                     [1U][0U] 
                                                     << 1U))) 
                                  | (0xffffffe0U & 
                                     (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                        [1U][0U] << 1U) 
                                       | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [0U][0U]) & 
                                      (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                       [0U][0U] << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][0U] 
        = ((0xffffffbfU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][0U]) | (0x40U & ((0xffffffc0U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [0U][0U] 
                                                  & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                     [1U][0U] 
                                                     << 1U))) 
                                  | (0xffffffc0U & 
                                     (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                        [1U][0U] << 1U) 
                                       | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [0U][0U]) & 
                                      (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                       [0U][0U] << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][0U] 
        = ((0xffffff7fU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][0U]) | (0x80U & ((0xffffff80U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [0U][0U] 
                                                  & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                     [1U][0U] 
                                                     << 1U))) 
                                  | (0xffffff80U & 
                                     (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                        [1U][0U] << 1U) 
                                       | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [0U][0U]) & 
                                      (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                       [0U][0U] << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][0U] 
        = ((0xfffffeffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][0U]) | (0x100U & ((0xffffff00U & (
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [0U][0U] 
                                                   & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                      [1U][0U] 
                                                      << 1U))) 
                                   | (0xffffff00U & 
                                      (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                         [1U][0U] << 1U) 
                                        | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [0U][0U]) & 
                                       (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                        [0U][0U] << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][0U] 
        = ((0xfffffdffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][0U]) | (0x200U & ((0xfffffe00U & (
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [0U][0U] 
                                                   & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                      [1U][0U] 
                                                      << 1U))) 
                                   | (0xfffffe00U & 
                                      (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                         [1U][0U] << 1U) 
                                        | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [0U][0U]) & 
                                       (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                        [0U][0U] << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][0U] 
        = ((0xfffffbffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][0U]) | (0x400U & ((0xfffffc00U & (
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [0U][0U] 
                                                   & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                      [1U][0U] 
                                                      << 1U))) 
                                   | (0xfffffc00U & 
                                      (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                         [1U][0U] << 1U) 
                                        | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [0U][0U]) & 
                                       (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                        [0U][0U] << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][0U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][0U]) | (0x800U & ((0xfffff800U & (
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [0U][0U] 
                                                   & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                      [1U][0U] 
                                                      << 1U))) 
                                   | (0xfffff800U & 
                                      (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                         [1U][0U] << 1U) 
                                        | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [0U][0U]) & 
                                       (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                        [0U][0U] << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][0U] 
        = ((0xffffefffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][0U]) | (0x1000U & ((0xfffff000U & 
                                     (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [0U][0U] & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                  [1U][0U] 
                                                  << 1U))) 
                                    | (0xfffff000U 
                                       & (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                            [1U][0U] 
                                            << 1U) 
                                           | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [0U][0U]) 
                                          & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                             [0U][0U] 
                                             << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][0U] 
        = ((0xffffdfffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][0U]) | (0x2000U & ((0xffffe000U & 
                                     (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [0U][0U] & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                  [1U][0U] 
                                                  << 1U))) 
                                    | (0xffffe000U 
                                       & (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                            [1U][0U] 
                                            << 1U) 
                                           | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [0U][0U]) 
                                          & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                             [0U][0U] 
                                             << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][0U] 
        = ((0xffffbfffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][0U]) | (0x4000U & ((0xffffc000U & 
                                     (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [0U][0U] & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                  [1U][0U] 
                                                  << 1U))) 
                                    | (0xffffc000U 
                                       & (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                            [1U][0U] 
                                            << 1U) 
                                           | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [0U][0U]) 
                                          & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                             [0U][0U] 
                                             << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][0U] 
        = ((0xffff7fffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][0U]) | (0x8000U & ((0xffff8000U & 
                                     (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [0U][0U] & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                  [1U][0U] 
                                                  << 1U))) 
                                    | (0xffff8000U 
                                       & (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                            [1U][0U] 
                                            << 1U) 
                                           | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [0U][0U]) 
                                          & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                             [0U][0U] 
                                             << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][0U] 
        = ((0xfffeffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][0U]) | (0x10000U & ((0xffff0000U & 
                                      (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [0U][0U] & (
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                   [1U][0U] 
                                                   << 1U))) 
                                     | (0xffff0000U 
                                        & (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                             [1U][0U] 
                                             << 1U) 
                                            | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                            [0U][0U]) 
                                           & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                              [0U][0U] 
                                              << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][0U] 
        = ((0xfffdffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][0U]) | (0x20000U & ((0xfffe0000U & 
                                      (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [0U][0U] & (
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                   [1U][0U] 
                                                   << 1U))) 
                                     | (0xfffe0000U 
                                        & (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                             [1U][0U] 
                                             << 1U) 
                                            | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                            [0U][0U]) 
                                           & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                              [0U][0U] 
                                              << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][0U] 
        = ((0xfffbffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][0U]) | (0x40000U & ((0xfffc0000U & 
                                      (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [0U][0U] & (
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                   [1U][0U] 
                                                   << 1U))) 
                                     | (0xfffc0000U 
                                        & (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                             [1U][0U] 
                                             << 1U) 
                                            | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                            [0U][0U]) 
                                           & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                              [0U][0U] 
                                              << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][0U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][0U]) | (0x80000U & ((0xfff80000U & 
                                      (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [0U][0U] & (
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                   [1U][0U] 
                                                   << 1U))) 
                                     | (0xfff80000U 
                                        & (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                             [1U][0U] 
                                             << 1U) 
                                            | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                            [0U][0U]) 
                                           & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                              [0U][0U] 
                                              << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][0U] 
        = ((0xffefffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][0U]) | (0x100000U & ((0xfff00000U 
                                       & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                          [0U][0U] 
                                          & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                             [1U][0U] 
                                             << 1U))) 
                                      | (0xfff00000U 
                                         & (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                              [1U][0U] 
                                              << 1U) 
                                             | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                             [0U][0U]) 
                                            & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [0U][0U] 
                                               << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][0U] 
        = ((0xffdfffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][0U]) | (0x200000U & ((0xffe00000U 
                                       & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                          [0U][0U] 
                                          & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                             [1U][0U] 
                                             << 1U))) 
                                      | (0xffe00000U 
                                         & (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                              [1U][0U] 
                                              << 1U) 
                                             | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                             [0U][0U]) 
                                            & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [0U][0U] 
                                               << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][0U] 
        = ((0xffbfffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][0U]) | (0x400000U & ((0xffc00000U 
                                       & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                          [0U][0U] 
                                          & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                             [1U][0U] 
                                             << 1U))) 
                                      | (0xffc00000U 
                                         & (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                              [1U][0U] 
                                              << 1U) 
                                             | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                             [0U][0U]) 
                                            & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [0U][0U] 
                                               << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][0U] 
        = ((0xff7fffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][0U]) | (0x800000U & ((0xff800000U 
                                       & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                          [0U][0U] 
                                          & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                             [1U][0U] 
                                             << 1U))) 
                                      | (0xff800000U 
                                         & (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                              [1U][0U] 
                                              << 1U) 
                                             | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                             [0U][0U]) 
                                            & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [0U][0U] 
                                               << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][0U] 
        = ((0xfeffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][0U]) | (0x1000000U & ((0xff000000U 
                                        & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [0U][0U] 
                                           & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                              [1U][0U] 
                                              << 1U))) 
                                       | (0xff000000U 
                                          & (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [1U][0U] 
                                               << 1U) 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [0U][0U]) 
                                             & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                [0U][0U] 
                                                << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][0U] 
        = ((0xfdffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][0U]) | (0x2000000U & ((0xfe000000U 
                                        & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [0U][0U] 
                                           & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                              [1U][0U] 
                                              << 1U))) 
                                       | (0xfe000000U 
                                          & (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [1U][0U] 
                                               << 1U) 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [0U][0U]) 
                                             & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                [0U][0U] 
                                                << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][0U] 
        = ((0xfbffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][0U]) | (0x4000000U & ((0xfc000000U 
                                        & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [0U][0U] 
                                           & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                              [1U][0U] 
                                              << 1U))) 
                                       | (0xfc000000U 
                                          & (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [1U][0U] 
                                               << 1U) 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [0U][0U]) 
                                             & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                [0U][0U] 
                                                << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][0U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][0U]) | (0x8000000U & ((0xf8000000U 
                                        & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [0U][0U] 
                                           & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                              [1U][0U] 
                                              << 1U))) 
                                       | (0xf8000000U 
                                          & (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [1U][0U] 
                                               << 1U) 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [0U][0U]) 
                                             & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                [0U][0U] 
                                                << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][0U] 
        = ((0xefffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][0U]) | (0x10000000U & ((0xf0000000U 
                                         & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                            [0U][0U] 
                                            & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [1U][0U] 
                                               << 1U))) 
                                        | (0xf0000000U 
                                           & (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                [1U][0U] 
                                                << 1U) 
                                               | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                               [0U][0U]) 
                                              & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                 [0U][0U] 
                                                 << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][0U] 
        = ((0xdfffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][0U]) | (0x20000000U & ((0xe0000000U 
                                         & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                            [0U][0U] 
                                            & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [1U][0U] 
                                               << 1U))) 
                                        | (0xe0000000U 
                                           & (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                [1U][0U] 
                                                << 1U) 
                                               | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                               [0U][0U]) 
                                              & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                 [0U][0U] 
                                                 << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][0U] 
        = ((0xbfffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][0U]) | (0x40000000U & ((0xc0000000U 
                                         & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                            [0U][0U] 
                                            & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [1U][0U] 
                                               << 1U))) 
                                        | (0xc0000000U 
                                           & (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                [1U][0U] 
                                                << 1U) 
                                               | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                               [0U][0U]) 
                                              & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                 [0U][0U] 
                                                 << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][0U] 
        = ((0x7fffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][0U]) | (0x80000000U & ((0x80000000U 
                                         & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                            [0U][0U] 
                                            & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [1U][0U] 
                                               << 1U))) 
                                        | (0x80000000U 
                                           & (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                [1U][0U] 
                                                << 1U) 
                                               | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                               [0U][0U]) 
                                              & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                 [0U][0U] 
                                                 << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][1U] 
        = ((0xfffffffeU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][1U]) | (1U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                [0U][1U] & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                            [1U][0U] 
                                            >> 0x1fU)) 
                               | (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                    [1U][0U] >> 0x1fU) 
                                   | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                   [0U][1U]) & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                [0U][0U] 
                                                >> 0x1fU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][1U] 
        = ((0xfffffffdU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][1U]) | (2U & ((0xfffffffeU & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                               [0U][1U] 
                                               & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                  [1U][1U] 
                                                  << 1U))) 
                               | (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                    [1U][1U] << 1U) 
                                   | (0xfffffffeU & 
                                      vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [0U][1U])) & 
                                  (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                   [0U][1U] << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][1U] 
        = ((0xfffffffbU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][1U]) | (4U & ((0xfffffffcU & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                               [0U][1U] 
                                               & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                  [1U][1U] 
                                                  << 1U))) 
                               | (0xfffffffcU & (((
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                   [1U][1U] 
                                                   << 1U) 
                                                  | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [0U][1U]) 
                                                 & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                    [0U][1U] 
                                                    << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][1U] 
        = ((0xfffffff7U & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][1U]) | (8U & ((0xfffffff8U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                               [0U][1U] 
                                               & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                  [1U][1U] 
                                                  << 1U))) 
                               | (0xfffffff8U & (((
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                   [1U][1U] 
                                                   << 1U) 
                                                  | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [0U][1U]) 
                                                 & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                    [0U][1U] 
                                                    << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][1U] 
        = ((0xffffffefU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][1U]) | (0x10U & ((0xfffffff0U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [0U][1U] 
                                                  & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                     [1U][1U] 
                                                     << 1U))) 
                                  | (0xfffffff0U & 
                                     (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                        [1U][1U] << 1U) 
                                       | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [0U][1U]) & 
                                      (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                       [0U][1U] << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][1U] 
        = ((0xffffffdfU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][1U]) | (0x20U & ((0xffffffe0U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [0U][1U] 
                                                  & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                     [1U][1U] 
                                                     << 1U))) 
                                  | (0xffffffe0U & 
                                     (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                        [1U][1U] << 1U) 
                                       | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [0U][1U]) & 
                                      (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                       [0U][1U] << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][1U] 
        = ((0xffffffbfU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][1U]) | (0x40U & ((0xffffffc0U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [0U][1U] 
                                                  & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                     [1U][1U] 
                                                     << 1U))) 
                                  | (0xffffffc0U & 
                                     (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                        [1U][1U] << 1U) 
                                       | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [0U][1U]) & 
                                      (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                       [0U][1U] << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][1U] 
        = ((0xffffff7fU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][1U]) | (0x80U & ((0xffffff80U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [0U][1U] 
                                                  & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                     [1U][1U] 
                                                     << 1U))) 
                                  | (0xffffff80U & 
                                     (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                        [1U][1U] << 1U) 
                                       | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [0U][1U]) & 
                                      (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                       [0U][1U] << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][1U] 
        = ((0xfffffeffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][1U]) | (0x100U & ((0xffffff00U & (
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [0U][1U] 
                                                   & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                      [1U][1U] 
                                                      << 1U))) 
                                   | (0xffffff00U & 
                                      (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                         [1U][1U] << 1U) 
                                        | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [0U][1U]) & 
                                       (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                        [0U][1U] << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][1U] 
        = ((0xfffffdffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][1U]) | (0x200U & ((0xfffffe00U & (
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [0U][1U] 
                                                   & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                      [1U][1U] 
                                                      << 1U))) 
                                   | (0xfffffe00U & 
                                      (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                         [1U][1U] << 1U) 
                                        | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [0U][1U]) & 
                                       (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                        [0U][1U] << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][1U] 
        = ((0xfffffbffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][1U]) | (0x400U & ((0xfffffc00U & (
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [0U][1U] 
                                                   & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                      [1U][1U] 
                                                      << 1U))) 
                                   | (0xfffffc00U & 
                                      (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                         [1U][1U] << 1U) 
                                        | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [0U][1U]) & 
                                       (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                        [0U][1U] << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][1U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][1U]) | (0x800U & ((0xfffff800U & (
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                   [0U][1U] 
                                                   & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                      [1U][1U] 
                                                      << 1U))) 
                                   | (0xfffff800U & 
                                      (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                         [1U][1U] << 1U) 
                                        | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                        [0U][1U]) & 
                                       (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                        [0U][1U] << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][1U] 
        = ((0xffffefffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][1U]) | (0x1000U & ((0xfffff000U & 
                                     (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [0U][1U] & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                  [1U][1U] 
                                                  << 1U))) 
                                    | (0xfffff000U 
                                       & (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                            [1U][1U] 
                                            << 1U) 
                                           | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [0U][1U]) 
                                          & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                             [0U][1U] 
                                             << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][1U] 
        = ((0xffffdfffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][1U]) | (0x2000U & ((0xffffe000U & 
                                     (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [0U][1U] & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                  [1U][1U] 
                                                  << 1U))) 
                                    | (0xffffe000U 
                                       & (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                            [1U][1U] 
                                            << 1U) 
                                           | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [0U][1U]) 
                                          & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                             [0U][1U] 
                                             << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][1U] 
        = ((0xffffbfffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][1U]) | (0x4000U & ((0xffffc000U & 
                                     (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [0U][1U] & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                  [1U][1U] 
                                                  << 1U))) 
                                    | (0xffffc000U 
                                       & (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                            [1U][1U] 
                                            << 1U) 
                                           | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [0U][1U]) 
                                          & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                             [0U][1U] 
                                             << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][1U] 
        = ((0xffff7fffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][1U]) | (0x8000U & ((0xffff8000U & 
                                     (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [0U][1U] & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                  [1U][1U] 
                                                  << 1U))) 
                                    | (0xffff8000U 
                                       & (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                            [1U][1U] 
                                            << 1U) 
                                           | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [0U][1U]) 
                                          & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                             [0U][1U] 
                                             << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][1U] 
        = ((0xfffeffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][1U]) | (0x10000U & ((0xffff0000U & 
                                      (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [0U][1U] & (
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                   [1U][1U] 
                                                   << 1U))) 
                                     | (0xffff0000U 
                                        & (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                             [1U][1U] 
                                             << 1U) 
                                            | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                            [0U][1U]) 
                                           & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                              [0U][1U] 
                                              << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][1U] 
        = ((0xfffdffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][1U]) | (0x20000U & ((0xfffe0000U & 
                                      (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [0U][1U] & (
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                   [1U][1U] 
                                                   << 1U))) 
                                     | (0xfffe0000U 
                                        & (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                             [1U][1U] 
                                             << 1U) 
                                            | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                            [0U][1U]) 
                                           & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                              [0U][1U] 
                                              << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][1U] 
        = ((0xfffbffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][1U]) | (0x40000U & ((0xfffc0000U & 
                                      (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [0U][1U] & (
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                   [1U][1U] 
                                                   << 1U))) 
                                     | (0xfffc0000U 
                                        & (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                             [1U][1U] 
                                             << 1U) 
                                            | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                            [0U][1U]) 
                                           & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                              [0U][1U] 
                                              << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][1U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][1U]) | (0x80000U & ((0xfff80000U & 
                                      (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                       [0U][1U] & (
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                   [1U][1U] 
                                                   << 1U))) 
                                     | (0xfff80000U 
                                        & (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                             [1U][1U] 
                                             << 1U) 
                                            | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                            [0U][1U]) 
                                           & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                              [0U][1U] 
                                              << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][1U] 
        = ((0xffefffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][1U]) | (0x100000U & ((0xfff00000U 
                                       & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                          [0U][1U] 
                                          & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                             [1U][1U] 
                                             << 1U))) 
                                      | (0xfff00000U 
                                         & (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                              [1U][1U] 
                                              << 1U) 
                                             | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                             [0U][1U]) 
                                            & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [0U][1U] 
                                               << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][1U] 
        = ((0xffdfffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][1U]) | (0x200000U & ((0xffe00000U 
                                       & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                          [0U][1U] 
                                          & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                             [1U][1U] 
                                             << 1U))) 
                                      | (0xffe00000U 
                                         & (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                              [1U][1U] 
                                              << 1U) 
                                             | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                             [0U][1U]) 
                                            & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [0U][1U] 
                                               << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][1U] 
        = ((0xffbfffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][1U]) | (0x400000U & ((0xffc00000U 
                                       & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                          [0U][1U] 
                                          & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                             [1U][1U] 
                                             << 1U))) 
                                      | (0xffc00000U 
                                         & (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                              [1U][1U] 
                                              << 1U) 
                                             | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                             [0U][1U]) 
                                            & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [0U][1U] 
                                               << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][1U] 
        = ((0xff7fffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][1U]) | (0x800000U & ((0xff800000U 
                                       & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                          [0U][1U] 
                                          & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                             [1U][1U] 
                                             << 1U))) 
                                      | (0xff800000U 
                                         & (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                              [1U][1U] 
                                              << 1U) 
                                             | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                             [0U][1U]) 
                                            & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [0U][1U] 
                                               << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][1U] 
        = ((0xfeffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][1U]) | (0x1000000U & ((0xff000000U 
                                        & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [0U][1U] 
                                           & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                              [1U][1U] 
                                              << 1U))) 
                                       | (0xff000000U 
                                          & (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [1U][1U] 
                                               << 1U) 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [0U][1U]) 
                                             & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                [0U][1U] 
                                                << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][1U] 
        = ((0xfdffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][1U]) | (0x2000000U & ((0xfe000000U 
                                        & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [0U][1U] 
                                           & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                              [1U][1U] 
                                              << 1U))) 
                                       | (0xfe000000U 
                                          & (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [1U][1U] 
                                               << 1U) 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [0U][1U]) 
                                             & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                [0U][1U] 
                                                << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][1U] 
        = ((0xfbffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][1U]) | (0x4000000U & ((0xfc000000U 
                                        & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [0U][1U] 
                                           & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                              [1U][1U] 
                                              << 1U))) 
                                       | (0xfc000000U 
                                          & (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [1U][1U] 
                                               << 1U) 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [0U][1U]) 
                                             & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                [0U][1U] 
                                                << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][1U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][1U]) | (0x8000000U & ((0xf8000000U 
                                        & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                           [0U][1U] 
                                           & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                              [1U][1U] 
                                              << 1U))) 
                                       | (0xf8000000U 
                                          & (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [1U][1U] 
                                               << 1U) 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                              [0U][1U]) 
                                             & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                [0U][1U] 
                                                << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][1U] 
        = ((0xefffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][1U]) | (0x10000000U & ((0xf0000000U 
                                         & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                            [0U][1U] 
                                            & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [1U][1U] 
                                               << 1U))) 
                                        | (0xf0000000U 
                                           & (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                [1U][1U] 
                                                << 1U) 
                                               | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                               [0U][1U]) 
                                              & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                 [0U][1U] 
                                                 << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][1U] 
        = ((0xdfffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][1U]) | (0x20000000U & ((0xe0000000U 
                                         & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                            [0U][1U] 
                                            & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [1U][1U] 
                                               << 1U))) 
                                        | (0xe0000000U 
                                           & (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                [1U][1U] 
                                                << 1U) 
                                               | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                               [0U][1U]) 
                                              & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                 [0U][1U] 
                                                 << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][1U] 
        = ((0xbfffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][1U]) | (0x40000000U & ((0xc0000000U 
                                         & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                            [0U][1U] 
                                            & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [1U][1U] 
                                               << 1U))) 
                                        | (0xc0000000U 
                                           & (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                [1U][1U] 
                                                << 1U) 
                                               | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                               [0U][1U]) 
                                              & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                 [0U][1U] 
                                                 << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][1U] 
        = ((0x7fffffffU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][1U]) | (0x80000000U & ((0x80000000U 
                                         & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                            [0U][1U] 
                                            & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [1U][1U] 
                                               << 1U))) 
                                        | (0x80000000U 
                                           & (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                [1U][1U] 
                                                << 1U) 
                                               | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                               [0U][1U]) 
                                              & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                 [0U][1U] 
                                                 << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][2U] 
        = ((0xeU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][2U]) | (1U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                [0U][2U] & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                            [1U][1U] 
                                            >> 0x1fU)) 
                               | (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                    [1U][1U] >> 0x1fU) 
                                   | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                   [0U][2U]) & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                [0U][1U] 
                                                >> 0x1fU)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][2U] 
        = ((0xdU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][2U]) | (2U & ((0xfffffffeU & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                               [0U][2U] 
                                               & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                  [1U][2U] 
                                                  << 1U))) 
                               | (((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                    [1U][2U] << 1U) 
                                   | (0xfffffffeU & 
                                      vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                      [0U][2U])) & 
                                  (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                   [0U][2U] << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][2U] 
        = ((0xbU & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][2U]) | (4U & ((0xfffffffcU & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                               [0U][2U] 
                                               & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                  [1U][2U] 
                                                  << 1U))) 
                               | (0xfffffffcU & (((
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                   [1U][2U] 
                                                   << 1U) 
                                                  | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [0U][2U]) 
                                                 & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                    [0U][2U] 
                                                    << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe3_c[0U][2U] 
        = ((7U & vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
            [0U][2U]) | (8U & ((0xfffffff8U & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                               [0U][2U] 
                                               & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                  [1U][2U] 
                                                  << 1U))) 
                               | (0xfffffff8U & (((
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                   [1U][2U] 
                                                   << 1U) 
                                                  | vlSelf->top__DOT__wallace_u0__DOT__pipe2_s
                                                  [0U][2U]) 
                                                 & (vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                    [0U][2U] 
                                                    << 1U))))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe4_c[1U][0U] 
        = ((0xfffffffeU & vlSelf->top__DOT__wallace_u0__DOT__pipe4_c
            [1U][0U]) | (1U & (vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                               [1U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                               [0U][0U])));
    vlSelf->top__DOT__wallace_u0__DOT__pipe4_s[1U][0U] 
        = ((0xfffffffeU & vlSelf->top__DOT__wallace_u0__DOT__pipe4_s
            [1U][0U]) | (1U & (vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                               [1U][0U] ^ vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                               [0U][0U])));
    vlSelf->top__DOT__wallace_u0__DOT__pipe4_c[0U][0U] 
        = ((0xfffffffdU & vlSelf->top__DOT__wallace_u0__DOT__pipe4_c
            [0U][0U]) | (2U & (((vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
                                 [0U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                 [3U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [3U][0U] 
                                               | vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
                                               [0U][0U]) 
                                              & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                              [2U][0U])) 
                               << 1U)));
    vlSelf->top__DOT__wallace_u0__DOT__pipe4_c[1U][0U] 
        = ((0xfffffffdU & vlSelf->top__DOT__wallace_u0__DOT__pipe4_c
            [1U][0U]) | (2U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                [1U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                [0U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                              [0U][0U] 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                              [1U][0U]) 
                                             & (vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
                                                [1U][0U] 
                                                << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe4_c[0U][0U] 
        = ((0xfffffffbU & vlSelf->top__DOT__wallace_u0__DOT__pipe4_c
            [0U][0U]) | (4U & (((vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
                                 [0U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                 [3U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [3U][0U] 
                                               | vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
                                               [0U][0U]) 
                                              & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                              [2U][0U])) 
                               << 1U)));
    vlSelf->top__DOT__wallace_u0__DOT__pipe4_c[1U][0U] 
        = ((0xfffffffbU & vlSelf->top__DOT__wallace_u0__DOT__pipe4_c
            [1U][0U]) | (4U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                [1U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                [0U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                              [0U][0U] 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                              [1U][0U]) 
                                             & (vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
                                                [1U][0U] 
                                                << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe4_c[0U][0U] 
        = ((0xfffffff7U & vlSelf->top__DOT__wallace_u0__DOT__pipe4_c
            [0U][0U]) | (8U & (((vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
                                 [0U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                 [3U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                               [3U][0U] 
                                               | vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
                                               [0U][0U]) 
                                              & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                              [2U][0U])) 
                               << 1U)));
    vlSelf->top__DOT__wallace_u0__DOT__pipe4_c[1U][0U] 
        = ((0xfffffff7U & vlSelf->top__DOT__wallace_u0__DOT__pipe4_c
            [1U][0U]) | (8U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                [1U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                [0U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                              [0U][0U] 
                                              | vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                              [1U][0U]) 
                                             & (vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
                                                [1U][0U] 
                                                << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe4_c[0U][0U] 
        = ((0xffffffefU & vlSelf->top__DOT__wallace_u0__DOT__pipe4_c
            [0U][0U]) | (0x10U & (((vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
                                    [0U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                    [3U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                  [3U][0U] 
                                                  | vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
                                                  [0U][0U]) 
                                                 & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                 [2U][0U])) 
                                  << 1U)));
    vlSelf->top__DOT__wallace_u0__DOT__pipe4_c[1U][0U] 
        = ((0xffffffefU & vlSelf->top__DOT__wallace_u0__DOT__pipe4_c
            [1U][0U]) | (0x10U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                   [1U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                   [0U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                                 [0U][0U] 
                                                 | vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                                 [1U][0U]) 
                                                & (vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
                                                   [1U][0U] 
                                                   << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe4_c[0U][0U] 
        = ((0xffffffdfU & vlSelf->top__DOT__wallace_u0__DOT__pipe4_c
            [0U][0U]) | (0x20U & (((vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
                                    [0U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                    [3U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                  [3U][0U] 
                                                  | vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
                                                  [0U][0U]) 
                                                 & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                 [2U][0U])) 
                                  << 1U)));
    vlSelf->top__DOT__wallace_u0__DOT__pipe4_c[1U][0U] 
        = ((0xffffffdfU & vlSelf->top__DOT__wallace_u0__DOT__pipe4_c
            [1U][0U]) | (0x20U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                   [1U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                   [0U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                                 [0U][0U] 
                                                 | vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                                 [1U][0U]) 
                                                & (vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
                                                   [1U][0U] 
                                                   << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe4_c[0U][0U] 
        = ((0xffffffbfU & vlSelf->top__DOT__wallace_u0__DOT__pipe4_c
            [0U][0U]) | (0x40U & (((vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
                                    [0U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                    [3U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                  [3U][0U] 
                                                  | vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
                                                  [0U][0U]) 
                                                 & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                 [2U][0U])) 
                                  << 1U)));
    vlSelf->top__DOT__wallace_u0__DOT__pipe4_c[1U][0U] 
        = ((0xffffffbfU & vlSelf->top__DOT__wallace_u0__DOT__pipe4_c
            [1U][0U]) | (0x40U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                   [1U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                   [0U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                                 [0U][0U] 
                                                 | vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                                 [1U][0U]) 
                                                & (vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
                                                   [1U][0U] 
                                                   << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe4_c[0U][0U] 
        = ((0xffffff7fU & vlSelf->top__DOT__wallace_u0__DOT__pipe4_c
            [0U][0U]) | (0x80U & (((vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
                                    [0U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                    [3U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                  [3U][0U] 
                                                  | vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
                                                  [0U][0U]) 
                                                 & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                 [2U][0U])) 
                                  << 1U)));
    vlSelf->top__DOT__wallace_u0__DOT__pipe4_c[1U][0U] 
        = ((0xffffff7fU & vlSelf->top__DOT__wallace_u0__DOT__pipe4_c
            [1U][0U]) | (0x80U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                   [1U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                   [0U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                                 [0U][0U] 
                                                 | vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                                 [1U][0U]) 
                                                & (vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
                                                   [1U][0U] 
                                                   << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe4_c[0U][0U] 
        = ((0xfffffeffU & vlSelf->top__DOT__wallace_u0__DOT__pipe4_c
            [0U][0U]) | (0x100U & (((vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
                                     [0U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                     [3U][0U]) | ((
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                   [3U][0U] 
                                                   | vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
                                                   [0U][0U]) 
                                                  & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                  [2U][0U])) 
                                   << 1U)));
    vlSelf->top__DOT__wallace_u0__DOT__pipe4_c[1U][0U] 
        = ((0xfffffeffU & vlSelf->top__DOT__wallace_u0__DOT__pipe4_c
            [1U][0U]) | (0x100U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                    [1U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                    [0U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                                  [0U][0U] 
                                                  | vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                                  [1U][0U]) 
                                                 & (vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
                                                    [1U][0U] 
                                                    << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe4_c[0U][0U] 
        = ((0xfffffdffU & vlSelf->top__DOT__wallace_u0__DOT__pipe4_c
            [0U][0U]) | (0x200U & (((vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
                                     [0U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                     [3U][0U]) | ((
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                   [3U][0U] 
                                                   | vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
                                                   [0U][0U]) 
                                                  & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                  [2U][0U])) 
                                   << 1U)));
    vlSelf->top__DOT__wallace_u0__DOT__pipe4_c[1U][0U] 
        = ((0xfffffdffU & vlSelf->top__DOT__wallace_u0__DOT__pipe4_c
            [1U][0U]) | (0x200U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                    [1U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                    [0U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                                  [0U][0U] 
                                                  | vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                                  [1U][0U]) 
                                                 & (vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
                                                    [1U][0U] 
                                                    << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe4_c[0U][0U] 
        = ((0xfffffbffU & vlSelf->top__DOT__wallace_u0__DOT__pipe4_c
            [0U][0U]) | (0x400U & (((vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
                                     [0U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                     [3U][0U]) | ((
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                   [3U][0U] 
                                                   | vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
                                                   [0U][0U]) 
                                                  & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                  [2U][0U])) 
                                   << 1U)));
    vlSelf->top__DOT__wallace_u0__DOT__pipe4_c[1U][0U] 
        = ((0xfffffbffU & vlSelf->top__DOT__wallace_u0__DOT__pipe4_c
            [1U][0U]) | (0x400U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                    [1U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                    [0U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                                  [0U][0U] 
                                                  | vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                                  [1U][0U]) 
                                                 & (vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
                                                    [1U][0U] 
                                                    << 1U)))));
    vlSelf->top__DOT__wallace_u0__DOT__pipe4_c[0U][0U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__wallace_u0__DOT__pipe4_c
            [0U][0U]) | (0x800U & (((vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
                                     [0U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                     [3U][0U]) | ((
                                                   vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                   [3U][0U] 
                                                   | vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
                                                   [0U][0U]) 
                                                  & vlSelf->top__DOT__wallace_u0__DOT__pipe2_c
                                                  [2U][0U])) 
                                   << 1U)));
    vlSelf->top__DOT__wallace_u0__DOT__pipe4_c[1U][0U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__wallace_u0__DOT__pipe4_c
            [1U][0U]) | (0x800U & ((vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                    [1U][0U] & vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                    [0U][0U]) | ((vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                                  [0U][0U] 
                                                  | vlSelf->top__DOT__wallace_u0__DOT__pipe3_s
                                                  [1U][0U]) 
                                                 & (vlSelf->top__DOT__wallace_u0__DOT__pipe3_c
                                                    [1U][0U] 
                                                    << 1U)))));
}
