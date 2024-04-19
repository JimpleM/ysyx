// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv32.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vriscv32___024root.h"

void Vriscv32___024root____Vdpiimwrap_riscv32__DOT__riscv_ifu_u0__DOT__riscv_pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata, CData/*0:0*/ ren);
void Vriscv32___024root____Vdpiimwrap_riscv32__DOT__riscv_ifu_u0__DOT__set_pc_ptr_TOP(IData/*31:0*/ pc);
void Vriscv32___024root____Vdpiimwrap_riscv32__DOT__riscv_ifu_u0__DOT__get_riscv32_rst_TOP(CData/*0:0*/ rst_n);
void Vriscv32___024root____Vdpiimwrap_riscv32__DOT__riscv_lsu_u0__DOT__riscv_pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ wmask);

VL_INLINE_OPT void Vriscv32___024root___ico_sequent__TOP__0(Vriscv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv32___024root___ico_sequent__TOP__0\n"); );
    // Body
    Vriscv32___024root____Vdpiimwrap_riscv32__DOT__riscv_ifu_u0__DOT__riscv_pmem_read_TOP(vlSelf->riscv32__DOT__ifu_pc, vlSelf->__Vtask_riscv32__DOT__riscv_ifu_u0__DOT__riscv_pmem_read__0__rdata, (IData)(vlSelf->rst_n));
    vlSelf->riscv32__DOT__ifu_inst = vlSelf->__Vtask_riscv32__DOT__riscv_ifu_u0__DOT__riscv_pmem_read__0__rdata;
    Vriscv32___024root____Vdpiimwrap_riscv32__DOT__riscv_ifu_u0__DOT__set_pc_ptr_TOP(vlSelf->riscv32__DOT__ifu_pc);
    Vriscv32___024root____Vdpiimwrap_riscv32__DOT__riscv_ifu_u0__DOT__get_riscv32_rst_TOP(vlSelf->rst_n);
    vlSelf->riscv32__DOT__riscv_csr_u0__DOT__wr_en 
        = ((0x73U == (0x7fU & vlSelf->riscv32__DOT__ifu_inst)) 
           & (0U != (7U & (vlSelf->riscv32__DOT__ifu_inst 
                           >> 0xcU))));
    vlSelf->riscv32__DOT____VdfgTmp_h05e9e7e0__0 = (IData)(
                                                           (0x73U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->riscv32__DOT__ifu_inst)));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[9U] 
        = (0x1700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->riscv32__DOT__ifu_inst))));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[0xaU] 
        = (0x3700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->riscv32__DOT__ifu_inst))));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[2U] 
        = (0x330001U | ((0xf800U & (vlSelf->riscv32__DOT__ifu_inst 
                                    >> 4U)) | ((0x7c0U 
                                                & (vlSelf->riscv32__DOT__ifu_inst 
                                                   >> 0xeU)) 
                                               | (0x3eU 
                                                  & (vlSelf->riscv32__DOT__ifu_inst 
                                                     >> 6U)))));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[8U] 
        = (0x6f0001U | (0x3eU & (vlSelf->riscv32__DOT__ifu_inst 
                                 >> 6U)));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[9U] 
        = (0x170001U | (0x3eU & (vlSelf->riscv32__DOT__ifu_inst 
                                 >> 6U)));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[0xaU] 
        = (0x370001U | (0x3eU & (vlSelf->riscv32__DOT__ifu_inst 
                                 >> 6U)));
    vlSelf->__VdfgTmp_h2d99613b__0 = ((0xf800U & (vlSelf->riscv32__DOT__ifu_inst 
                                                  >> 4U)) 
                                      | (0x7c0U & (vlSelf->riscv32__DOT__ifu_inst 
                                                   >> 0xeU)));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI 
        = (((- (IData)((vlSelf->riscv32__DOT__ifu_inst 
                        >> 0x1fU))) << 0xcU) | (vlSelf->riscv32__DOT__ifu_inst 
                                                >> 0x14U));
    vlSelf->__VdfgTmp_heb135ca6__0 = (1U | ((0xf800U 
                                             & (vlSelf->riscv32__DOT__ifu_inst 
                                                >> 4U)) 
                                            | (0x3eU 
                                               & (vlSelf->riscv32__DOT__ifu_inst 
                                                  >> 6U))));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key 
        = (((0x63U == (0x7fU & vlSelf->riscv32__DOT__ifu_inst)) 
            << 3U) | (7U & (vlSelf->riscv32__DOT__ifu_inst 
                            >> 0xcU)));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                       == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__hit 
        = ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
           == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->riscv32__DOT__idu_lsu_opt = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__hit)
                                          ? (IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__lut_out)
                                          : 0U);
    vlSelf->riscv32__DOT__idu_alu_opt = ((0x40U & vlSelf->riscv32__DOT__ifu_inst)
                                          ? ((0x20U 
                                              & vlSelf->riscv32__DOT__ifu_inst)
                                              ? ((0x10U 
                                                  & vlSelf->riscv32__DOT__ifu_inst)
                                                  ? 
                                                 ((8U 
                                                   & vlSelf->riscv32__DOT__ifu_inst)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSelf->riscv32__DOT__ifu_inst)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSelf->riscv32__DOT__ifu_inst)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->riscv32__DOT__ifu_inst)
                                                      ? 0xaU
                                                      : 0U)
                                                     : 0U)))
                                                  : 
                                                 ((8U 
                                                   & vlSelf->riscv32__DOT__ifu_inst)
                                                   ? 
                                                  ((4U 
                                                    & vlSelf->riscv32__DOT__ifu_inst)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->riscv32__DOT__ifu_inst)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->riscv32__DOT__ifu_inst)
                                                      ? 1U
                                                      : 0U)
                                                     : 0U)
                                                    : 0U)
                                                   : 
                                                  ((4U 
                                                    & vlSelf->riscv32__DOT__ifu_inst)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->riscv32__DOT__ifu_inst)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->riscv32__DOT__ifu_inst)
                                                      ? 1U
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((2U 
                                                     & vlSelf->riscv32__DOT__ifu_inst)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->riscv32__DOT__ifu_inst)
                                                      ? 
                                                     ((0x4000U 
                                                       & vlSelf->riscv32__DOT__ifu_inst)
                                                       ? 
                                                      ((0x2000U 
                                                        & vlSelf->riscv32__DOT__ifu_inst)
                                                        ? 5U
                                                        : 4U)
                                                       : 
                                                      ((0x2000U 
                                                        & vlSelf->riscv32__DOT__ifu_inst)
                                                        ? 0U
                                                        : 2U))
                                                      : 0U)
                                                     : 0U))))
                                              : 0U)
                                          : ((0x20U 
                                              & vlSelf->riscv32__DOT__ifu_inst)
                                              ? ((0x10U 
                                                  & vlSelf->riscv32__DOT__ifu_inst)
                                                  ? 
                                                 ((8U 
                                                   & vlSelf->riscv32__DOT__ifu_inst)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSelf->riscv32__DOT__ifu_inst)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->riscv32__DOT__ifu_inst)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->riscv32__DOT__ifu_inst)
                                                      ? 1U
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((2U 
                                                     & vlSelf->riscv32__DOT__ifu_inst)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->riscv32__DOT__ifu_inst)
                                                      ? 
                                                     ((0x4000U 
                                                       & vlSelf->riscv32__DOT__ifu_inst)
                                                       ? 
                                                      ((0x2000U 
                                                        & vlSelf->riscv32__DOT__ifu_inst)
                                                        ? 
                                                       ((0x1000U 
                                                         & vlSelf->riscv32__DOT__ifu_inst)
                                                         ? 0xaU
                                                         : 9U)
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelf->riscv32__DOT__ifu_inst)
                                                         ? 
                                                        ((0U 
                                                          == 
                                                          (vlSelf->riscv32__DOT__ifu_inst 
                                                           >> 0x19U))
                                                          ? 7U
                                                          : 
                                                         ((0x20U 
                                                           == 
                                                           (vlSelf->riscv32__DOT__ifu_inst 
                                                            >> 0x19U))
                                                           ? 8U
                                                           : 0U))
                                                         : 6U))
                                                       : 
                                                      ((0x2000U 
                                                        & vlSelf->riscv32__DOT__ifu_inst)
                                                        ? 
                                                       ((0x1000U 
                                                         & vlSelf->riscv32__DOT__ifu_inst)
                                                         ? 5U
                                                         : 4U)
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelf->riscv32__DOT__ifu_inst)
                                                         ? 3U
                                                         : 
                                                        ((0U 
                                                          == 
                                                          (vlSelf->riscv32__DOT__ifu_inst 
                                                           >> 0x19U))
                                                          ? 1U
                                                          : 
                                                         ((0x20U 
                                                           == 
                                                           (vlSelf->riscv32__DOT__ifu_inst 
                                                            >> 0x19U))
                                                           ? 2U
                                                           : 0U)))))
                                                      : 0U)
                                                     : 0U)))
                                                  : 
                                                 ((8U 
                                                   & vlSelf->riscv32__DOT__ifu_inst)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSelf->riscv32__DOT__ifu_inst)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSelf->riscv32__DOT__ifu_inst)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->riscv32__DOT__ifu_inst)
                                                      ? 1U
                                                      : 0U)
                                                     : 0U))))
                                              : ((0x10U 
                                                  & vlSelf->riscv32__DOT__ifu_inst)
                                                  ? 
                                                 ((8U 
                                                   & vlSelf->riscv32__DOT__ifu_inst)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSelf->riscv32__DOT__ifu_inst)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->riscv32__DOT__ifu_inst)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->riscv32__DOT__ifu_inst)
                                                      ? 1U
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((2U 
                                                     & vlSelf->riscv32__DOT__ifu_inst)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->riscv32__DOT__ifu_inst)
                                                      ? 
                                                     ((0x4000U 
                                                       & vlSelf->riscv32__DOT__ifu_inst)
                                                       ? 
                                                      ((0x2000U 
                                                        & vlSelf->riscv32__DOT__ifu_inst)
                                                        ? 
                                                       ((0x1000U 
                                                         & vlSelf->riscv32__DOT__ifu_inst)
                                                         ? 0xaU
                                                         : 9U)
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelf->riscv32__DOT__ifu_inst)
                                                         ? 
                                                        ((0U 
                                                          == 
                                                          (vlSelf->riscv32__DOT__ifu_inst 
                                                           >> 0x19U))
                                                          ? 7U
                                                          : 
                                                         ((0x20U 
                                                           == 
                                                           (vlSelf->riscv32__DOT__ifu_inst 
                                                            >> 0x19U))
                                                           ? 8U
                                                           : 0U))
                                                         : 6U))
                                                       : 
                                                      ((0x2000U 
                                                        & vlSelf->riscv32__DOT__ifu_inst)
                                                        ? 
                                                       ((0x1000U 
                                                         & vlSelf->riscv32__DOT__ifu_inst)
                                                         ? 5U
                                                         : 2U)
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelf->riscv32__DOT__ifu_inst)
                                                         ? 3U
                                                         : 1U)))
                                                      : 0U)
                                                     : 0U)))
                                                  : 
                                                 ((8U 
                                                   & vlSelf->riscv32__DOT__ifu_inst)
                                                   ? 
                                                  ((4U 
                                                    & vlSelf->riscv32__DOT__ifu_inst)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->riscv32__DOT__ifu_inst)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->riscv32__DOT__ifu_inst)
                                                      ? 0xaU
                                                      : 0U)
                                                     : 0U)
                                                    : 0U)
                                                   : 
                                                  ((4U 
                                                    & vlSelf->riscv32__DOT__ifu_inst)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSelf->riscv32__DOT__ifu_inst)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->riscv32__DOT__ifu_inst)
                                                      ? 1U
                                                      : 0U)
                                                     : 0U))))));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                       == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
           == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                          [3U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                          [4U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
              [4U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
              [4U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                          [5U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
              [5U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
              [5U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                          [6U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
              [6U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
              [6U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                          [7U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
              [7U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
              [7U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                          [8U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
              [8U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
              [8U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                          [9U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
              [9U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
              [9U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                          [0xaU]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
              [0xaU]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
              [0xaU]));
    vlSelf->riscv32__DOT__idu_src_sel = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit)
                                          ? (IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out)
                                          : 1U);
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[0U] 
        = (((- (IData)((vlSelf->riscv32__DOT__ifu_inst 
                        >> 0x1fU))) << 0xcU) | (vlSelf->riscv32__DOT__ifu_inst 
                                                >> 0x14U));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[3U] 
        = (((- (IData)((vlSelf->riscv32__DOT__ifu_inst 
                        >> 0x1fU))) << 0xcU) | (vlSelf->riscv32__DOT__ifu_inst 
                                                >> 0x14U));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[5U] 
        = (((- (IData)((vlSelf->riscv32__DOT__ifu_inst 
                        >> 0x1fU))) << 0xcU) | (vlSelf->riscv32__DOT__ifu_inst 
                                                >> 0x14U));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[7U] 
        = (((- (IData)((vlSelf->riscv32__DOT__ifu_inst 
                        >> 0x1fU))) << 0xcU) | (vlSelf->riscv32__DOT__ifu_inst 
                                                >> 0x14U));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[9U] 
        = (0xfffff000U & vlSelf->riscv32__DOT__ifu_inst);
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[0xaU] 
        = (0xfffff000U & vlSelf->riscv32__DOT__ifu_inst);
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____Vcellinp__riscv_id_imm_ext_typeS__imm_in 
        = ((0xfe0U & (vlSelf->riscv32__DOT__ifu_inst 
                      >> 0x14U)) | (0x1fU & (vlSelf->riscv32__DOT__ifu_inst 
                                             >> 7U)));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____Vcellinp__riscv_id_imm_ext_typeB__imm_in 
        = ((0x1000U & (vlSelf->riscv32__DOT__ifu_inst 
                       >> 0x13U)) | ((0x800U & (vlSelf->riscv32__DOT__ifu_inst 
                                                << 4U)) 
                                     | ((0x7e0U & (vlSelf->riscv32__DOT__ifu_inst 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->riscv32__DOT__ifu_inst 
                                            >> 7U)))));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____Vcellinp__riscv_id_imm_ext_typeJ__imm_in 
        = ((0x100000U & (vlSelf->riscv32__DOT__ifu_inst 
                         >> 0xbU)) | ((0xff000U & vlSelf->riscv32__DOT__ifu_inst) 
                                      | ((0x800U & 
                                          (vlSelf->riscv32__DOT__ifu_inst 
                                           >> 9U)) 
                                         | (0x7feU 
                                            & (vlSelf->riscv32__DOT__ifu_inst 
                                               >> 0x14U)))));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[0U] 
        = (1U | ((0xf800U & (vlSelf->riscv32__DOT__ifu_inst 
                             >> 4U)) | (0x3eU & (vlSelf->riscv32__DOT__ifu_inst 
                                                 >> 6U))));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[2U] 
        = (1U | ((0xf800U & (vlSelf->riscv32__DOT__ifu_inst 
                             >> 4U)) | ((0x7c0U & (vlSelf->riscv32__DOT__ifu_inst 
                                                   >> 0xeU)) 
                                        | (0x3eU & 
                                           (vlSelf->riscv32__DOT__ifu_inst 
                                            >> 6U)))));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[3U] 
        = (1U | ((0xf800U & (vlSelf->riscv32__DOT__ifu_inst 
                             >> 4U)) | (0x3eU & (vlSelf->riscv32__DOT__ifu_inst 
                                                 >> 6U))));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[4U] 
        = ((0xf800U & (vlSelf->riscv32__DOT__ifu_inst 
                       >> 4U)) | (0x7c0U & (vlSelf->riscv32__DOT__ifu_inst 
                                            >> 0xeU)));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[5U] 
        = (1U | ((0xf800U & (vlSelf->riscv32__DOT__ifu_inst 
                             >> 4U)) | (0x3eU & (vlSelf->riscv32__DOT__ifu_inst 
                                                 >> 6U))));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[6U] 
        = ((0xf800U & (vlSelf->riscv32__DOT__ifu_inst 
                       >> 4U)) | (0x7c0U & (vlSelf->riscv32__DOT__ifu_inst 
                                            >> 0xeU)));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[7U] 
        = (1U | ((0xf800U & (vlSelf->riscv32__DOT__ifu_inst 
                             >> 4U)) | (0x3eU & (vlSelf->riscv32__DOT__ifu_inst 
                                                 >> 6U))));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[8U] 
        = (1U | (0x3eU & (vlSelf->riscv32__DOT__ifu_inst 
                          >> 6U)));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[9U] 
        = (1U | (0x3eU & (vlSelf->riscv32__DOT__ifu_inst 
                          >> 6U)));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[0xaU] 
        = (1U | (0x3eU & (vlSelf->riscv32__DOT__ifu_inst 
                          >> 6U)));
    vlSelf->riscv32__DOT__csr_mret = ((IData)(vlSelf->riscv32__DOT____VdfgTmp_h05e9e7e0__0) 
                                      & (0x302U == 
                                         (vlSelf->riscv32__DOT__ifu_inst 
                                          >> 0x14U)));
    vlSelf->riscv32__DOT__csr_ecall = ((IData)(vlSelf->riscv32__DOT____VdfgTmp_h05e9e7e0__0) 
                                       & (0U == (vlSelf->riscv32__DOT__ifu_inst 
                                                 >> 0x14U)));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[4U] 
        = (0x230000U | (IData)(vlSelf->__VdfgTmp_h2d99613b__0));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[6U] 
        = (0x630000U | (IData)(vlSelf->__VdfgTmp_h2d99613b__0));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[0U] 
        = (0x7300000000ULL | (QData)((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI)));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[3U] 
        = (0x1300000000ULL | (QData)((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI)));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[5U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI)));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[7U] 
        = (0x6700000000ULL | (QData)((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI)));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellinp__riscv_mux_id_reg__lut[0U] 
        = (IData)((0x478000730000ULL | (((QData)((IData)(
                                                         (0x1fU 
                                                          & (vlSelf->riscv32__DOT__ifu_inst 
                                                             >> 0xfU)))) 
                                         << 0x39U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & (vlSelf->riscv32__DOT__ifu_inst 
                                                                >> 0x14U)))) 
                                            << 0x34U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSelf->riscv32__DOT__ifu_inst 
                                                                   >> 7U)))) 
                                               << 0x2fU) 
                                              | (QData)((IData)(vlSelf->__VdfgTmp_heb135ca6__0)))))));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellinp__riscv_mux_id_reg__lut[1U] 
        = (0xc0000000U | (IData)(((0x478000730000ULL 
                                   | (((QData)((IData)(
                                                       (0x1fU 
                                                        & (vlSelf->riscv32__DOT__ifu_inst 
                                                           >> 0xfU)))) 
                                       << 0x39U) | 
                                      (((QData)((IData)(
                                                        (0x1fU 
                                                         & (vlSelf->riscv32__DOT__ifu_inst 
                                                            >> 0x14U)))) 
                                        << 0x34U) | 
                                       (((QData)((IData)(
                                                         (0x1fU 
                                                          & (vlSelf->riscv32__DOT__ifu_inst 
                                                             >> 7U)))) 
                                         << 0x2fU) 
                                        | (QData)((IData)(vlSelf->__VdfgTmp_heb135ca6__0)))))) 
                                  >> 0x20U)));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellinp__riscv_mux_id_reg__lut[2U] 
        = (0x260000cU | ((0x1f0000U & (vlSelf->riscv32__DOT__ifu_inst 
                                       << 1U)) | (0xffffffe0U 
                                                  & (0x20U 
                                                     | (0x7c0U 
                                                        & (vlSelf->riscv32__DOT__ifu_inst 
                                                           >> 1U))))));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellinp__riscv_mux_id_reg__lut[3U] 
        = (0x23000U | ((0xc0000000U & (vlSelf->riscv32__DOT__ifu_inst 
                                       << 0xfU)) | 
                       ((0xfff80000U & (0x80000U | 
                                        (0x1f00000U 
                                         & (vlSelf->riscv32__DOT__ifu_inst 
                                            << 0xdU)))) 
                        | ((0xf80U & (vlSelf->riscv32__DOT__ifu_inst 
                                      >> 8U)) | (0x7cU 
                                                 & (vlSelf->riscv32__DOT__ifu_inst 
                                                    >> 0x12U))))));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellinp__riscv_mux_id_reg__lut[4U] 
        = (0x8c000018U | ((0x3e00000U & (vlSelf->riscv32__DOT__ifu_inst 
                                         << 6U)) | 
                          ((0x1f0000U & (vlSelf->riscv32__DOT__ifu_inst 
                                         >> 4U)) | 
                           (7U & (vlSelf->riscv32__DOT__ifu_inst 
                                  >> 0x11U)))));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellinp__riscv_mux_id_reg__lut[5U] 
        = (0x1ce0001U | ((0x3e000000U & (vlSelf->riscv32__DOT__ifu_inst 
                                         << 0x12U)) 
                         | ((0x1f000U & (vlSelf->riscv32__DOT__ifu_inst 
                                         >> 3U)) | 
                            (0xfffffffeU & (2U | (0x7cU 
                                                  & (vlSelf->riscv32__DOT__ifu_inst 
                                                     >> 5U)))))));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellinp__riscv_mux_id_reg__lut[6U] 
        = (0x8000ef00U | (0x1f0000U & (vlSelf->riscv32__DOT__ifu_inst 
                                       << 9U)));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellinp__riscv_mux_id_reg__lut[7U] 
        = (0xdc0004bU | (0xf80U & vlSelf->riscv32__DOT__ifu_inst));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[0U] 
        = (0x730000U | (IData)(vlSelf->__VdfgTmp_heb135ca6__0));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[3U] 
        = (0x130000U | (IData)(vlSelf->__VdfgTmp_heb135ca6__0));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[5U] 
        = (0x30000U | (IData)(vlSelf->__VdfgTmp_heb135ca6__0));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[7U] 
        = (0x670000U | (IData)(vlSelf->__VdfgTmp_heb135ca6__0));
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key 
        = (((IData)(vlSelf->riscv32__DOT__idu_lsu_opt) 
            << 3U) | (7U & (vlSelf->riscv32__DOT__ifu_inst 
                            >> 0xcU)));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag 
        = ((2U == (IData)(vlSelf->riscv32__DOT__idu_alu_opt)) 
           | ((4U == (IData)(vlSelf->riscv32__DOT__idu_alu_opt)) 
              | (5U == (IData)(vlSelf->riscv32__DOT__idu_alu_opt))));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeS 
        = (((- (IData)((vlSelf->riscv32__DOT__ifu_inst 
                        >> 0x1fU))) << 0xcU) | (IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____Vcellinp__riscv_id_imm_ext_typeS__imm_in));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[4U] 
        = (((- (IData)((vlSelf->riscv32__DOT__ifu_inst 
                        >> 0x1fU))) << 0xcU) | (IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____Vcellinp__riscv_id_imm_ext_typeS__imm_in));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeB 
        = (((- (IData)((vlSelf->riscv32__DOT__ifu_inst 
                        >> 0x1fU))) << 0xdU) | (IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____Vcellinp__riscv_id_imm_ext_typeB__imm_in));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[6U] 
        = (((- (IData)((vlSelf->riscv32__DOT__ifu_inst 
                        >> 0x1fU))) << 0xdU) | (IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____Vcellinp__riscv_id_imm_ext_typeB__imm_in));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeJ 
        = (((- (IData)((vlSelf->riscv32__DOT__ifu_inst 
                        >> 0x1fU))) << 0x15U) | vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____Vcellinp__riscv_id_imm_ext_typeJ__imm_in);
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[8U] 
        = (((- (IData)((vlSelf->riscv32__DOT__ifu_inst 
                        >> 0x1fU))) << 0x15U) | vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____Vcellinp__riscv_id_imm_ext_typeJ__imm_in);
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                       == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
           == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                          [3U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                          [4U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
              [4U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
              [4U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                          [5U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
              [5U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
              [5U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                          [6U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
              [6U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
              [6U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                          [7U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
              [7U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
              [7U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                          [8U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
              [8U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
              [8U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                          [9U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
              [9U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
              [9U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                          [0xaU]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
              [0xaU]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
              [0xaU]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit)
            ? (IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out)
            : 0U);
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
                       == vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
           == vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
                          == vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
              == vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
                          == vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
              == vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__mask = 
        ((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__hit)
          ? vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__lut_out
          : 0U);
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[4U] 
        = (0x2300000000ULL | (QData)((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeS)));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[6U] 
        = (0x6300000000ULL | (QData)((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeB)));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[8U] 
        = (0x6f00000000ULL | (QData)((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeJ)));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                       == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit 
        = ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
           == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
                          [3U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
                          [4U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list
              [4U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
              [4U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
                          [5U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list
              [5U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
              [5U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
                          [6U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list
              [6U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
              [6U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
                          [7U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list
              [7U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
              [7U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
                          [8U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list
              [8U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
              [8U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
                          [9U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list
              [9U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
              [9U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
                          [0xaU]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list
              [0xaU]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
              [0xaU]));
    vlSelf->riscv32__DOT__idu_imm = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit)
                                      ? vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out
                                      : 0U);
    vlSelf->riscv32__DOT__src2 = vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr
        [(0x1fU & ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                   >> 6U))];
    vlSelf->riscv32__DOT__src1 = vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr
        [(0x1fU & ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                   >> 0xbU))];
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[0U][0U] 
        = (IData)((((QData)((IData)(vlSelf->riscv32__DOT__ifu_pc)) 
                    << 0x20U) | (QData)((IData)(vlSelf->riscv32__DOT__idu_imm))));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[0U][1U] 
        = (IData)(((((QData)((IData)(vlSelf->riscv32__DOT__ifu_pc)) 
                     << 0x20U) | (QData)((IData)(vlSelf->riscv32__DOT__idu_imm))) 
                   >> 0x20U));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[0U][2U] = 3U;
    vlSelf->riscv32__DOT__riscv_csr_u0__DOT__temp = 
        vlSelf->riscv32__DOT__riscv_csr_u0__DOT__csr_reg
        [(0xfffU & vlSelf->riscv32__DOT__idu_imm)];
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->riscv32__DOT__ifu_pc)) 
            << 0x20U) | (QData)((IData)(vlSelf->riscv32__DOT__idu_imm)));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[2U][0U] 
        = (IData)((((QData)((IData)(vlSelf->riscv32__DOT__src1)) 
                    << 0x20U) | (QData)((IData)(vlSelf->riscv32__DOT__idu_imm))));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[2U][1U] 
        = (IData)(((((QData)((IData)(vlSelf->riscv32__DOT__src1)) 
                     << 0x20U) | (QData)((IData)(vlSelf->riscv32__DOT__idu_imm))) 
                   >> 0x20U));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[2U][2U] = 1U;
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[3U][0U] 
        = (IData)((((QData)((IData)(vlSelf->riscv32__DOT__src1)) 
                    << 0x20U) | (QData)((IData)(vlSelf->riscv32__DOT__src2))));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[3U][1U] 
        = (IData)(((((QData)((IData)(vlSelf->riscv32__DOT__src1)) 
                     << 0x20U) | (QData)((IData)(vlSelf->riscv32__DOT__src2))) 
                   >> 0x20U));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[3U][2U] = 0U;
    vlSelf->riscv32__DOT__wr_csr_data = ((0x4000U & vlSelf->riscv32__DOT__ifu_inst)
                                          ? (0x1fU 
                                             & (vlSelf->riscv32__DOT__ifu_inst 
                                                >> 0xfU))
                                          : vlSelf->riscv32__DOT__src1);
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->riscv32__DOT__src1)) 
            << 0x20U) | (QData)((IData)(vlSelf->riscv32__DOT__idu_imm)));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->riscv32__DOT__src1)) 
            << 0x20U) | (QData)((IData)(vlSelf->riscv32__DOT__src2)));
    vlSelf->riscv32__DOT__riscv_csr_u0__DOT__wr_data_r 
        = ((1U == (3U & (vlSelf->riscv32__DOT__ifu_inst 
                         >> 0xcU))) ? vlSelf->riscv32__DOT__wr_csr_data
            : ((2U == (3U & (vlSelf->riscv32__DOT__ifu_inst 
                             >> 0xcU))) ? (vlSelf->riscv32__DOT__riscv_csr_u0__DOT__temp 
                                           | vlSelf->riscv32__DOT__wr_csr_data)
                : ((~ vlSelf->riscv32__DOT__wr_csr_data) 
                   & vlSelf->riscv32__DOT__riscv_csr_u0__DOT__temp)));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->riscv32__DOT__idu_src_sel) 
                               == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list
                               [0U])))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__idu_src_sel) 
           == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->riscv32__DOT__idu_src_sel) 
                                  == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list
                                  [1U])))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__idu_src_sel) 
              == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->riscv32__DOT__idu_src_sel) 
                                  == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list
                                  [2U])))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__idu_src_sel) 
              == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->riscv32__DOT__idu_src_sel) 
                                  == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list
                                  [3U])))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__idu_src_sel) 
              == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit)
            ? vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out
            : 0ULL);
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[1U] 
        = (0xa00000000ULL | (QData)((IData)(((IData)(
                                                     (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                      >> 0x20U)) 
                                             & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[2U] 
        = (0x900000000ULL | (QData)((IData)(((IData)(
                                                     (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                      >> 0x20U)) 
                                             | (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[3U] 
        = (0x800000000ULL | (QData)((IData)(((((QData)((IData)(
                                                               (- (IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                                                >> 0x3fU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                                 >> 0x20U)))) 
                                             >> (0x3fU 
                                                 & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out))))));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[4U] 
        = (0x700000000ULL | (QData)((IData)(((0x1fU 
                                              >= (0x3fU 
                                                  & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
                                              ? ((IData)(
                                                         (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                          >> 0x20U)) 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
                                              : 0U))));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[5U] 
        = (0x600000000ULL | (QData)((IData)(((IData)(
                                                     (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                      >> 0x20U)) 
                                             ^ (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[8U] 
        = (0x300000000ULL | (QData)((IData)(((0x1fU 
                                              >= (0x3fU 
                                                  & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
                                              ? ((IData)(
                                                         (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                          >> 0x20U)) 
                                                 << 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
                                              : 0U))));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[1U] 
        = ((IData)((vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                    >> 0x20U)) & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[2U] 
        = ((IData)((vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                    >> 0x20U)) | (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[3U] 
        = (IData)(((((QData)((IData)((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                            >> 0x3fU))))))) 
                     << 0x20U) | (QData)((IData)((vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                  >> 0x20U)))) 
                   >> (0x3fU & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out))));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[4U] 
        = ((0x1fU >= (0x3fU & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
            ? ((IData)((vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                        >> 0x20U)) >> (0x3fU & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
            : 0U);
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[5U] 
        = ((IData)((vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                    >> 0x20U)) ^ (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[8U] 
        = ((0x1fU >= (0x3fU & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
            ? ((IData)((vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                        >> 0x20U)) << (0x3fU & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
            : 0U);
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t 
        = (0x1ffffffffULL & ((((QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                           >> 0x1fU))))) 
                               << 0x20U) | (QData)((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out))) 
                             ^ (- (QData)((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag)))));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
        = (0x1ffffffffULL & ((((QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                           >> 0x3fU))))) 
                               << 0x20U) | (QData)((IData)(
                                                           (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                            >> 0x20U)))) 
                             + (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t 
                                + (QData)((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag)))));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[0U] 
        = (0xb00000000ULL | (QData)((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out)));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[9U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out)));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[0xaU] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out)));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[0U] 
        = (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out);
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[9U] 
        = (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out);
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[0xaU] 
        = (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out);
    vlSelf->__VdfgTmp_h39dd3dac__0 = (1U & (IData)(
                                                   (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                                    >> 0x20U)));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__carry_flag 
        = (1U & ((((IData)((vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                            >> 0x3fU)) | ((IData)((vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t 
                                                   >> 0x20U)) 
                                          | (IData)(
                                                    (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                                     >> 0x20U)))) 
                  & (((IData)((vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                               >> 0x3fU)) | ((~ (IData)(
                                                        (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t 
                                                         >> 0x20U))) 
                                             | (~ (IData)(
                                                          (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                                           >> 0x20U))))) 
                     & ((~ (IData)((vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                    >> 0x3fU))) | (
                                                   ((~ (IData)(
                                                               (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                                                >> 0x20U))) 
                                                    | (IData)(
                                                              (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t 
                                                               >> 0x20U))) 
                                                   & ((~ (IData)(
                                                                 (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t 
                                                                  >> 0x20U))) 
                                                      | (IData)(
                                                                (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                                                 >> 0x20U))))))) 
                 ^ (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag)));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[7U] 
        = (0x400000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h39dd3dac__0)));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[7U] 
        = vlSelf->__VdfgTmp_h39dd3dac__0;
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[6U] 
        = (0x500000000ULL | (QData)((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__carry_flag)));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[6U] 
        = vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__carry_flag;
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
                       == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
           == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
                          == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
              == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
                          == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
              == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
                          == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                          [3U]))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
              == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
                          == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                          [4U]))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
              [4U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
              == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
              [4U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
                          == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                          [5U]))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
              [5U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
              == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
              [5U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
                          == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                          [6U]))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
              [6U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
              == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
              [6U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
                          == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                          [7U]))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
              [7U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
              == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
              [7U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
                          == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                          [8U]))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
              [8U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
              == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
              [8U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
                          == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                          [9U]))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
              [9U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
              == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
              [9U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
                          == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                          [0xaU]))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
              [0xaU]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
              == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
              [0xaU]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit)
            ? vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out
            : 0U);
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[0U] 
        = (0xf00000000ULL | (QData)((IData)((1U & (~ vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data)))));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[1U] 
        = (0xe00000000ULL | (QData)((IData)((1U & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data))));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[2U] 
        = (0xd00000000ULL | (QData)((IData)((1U & (~ vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data)))));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[3U] 
        = (0xc00000000ULL | (QData)((IData)((1U & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data))));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[4U] 
        = (0x900000000ULL | (QData)((IData)((0U != vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data))));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[5U] 
        = (0x800000000ULL | (QData)((IData)((1U & (~ (IData)(
                                                             (0U 
                                                              != vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data)))))));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[0U] 
        = (1U & (~ vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[1U] 
        = (1U & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data);
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[2U] 
        = (1U & (~ vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[3U] 
        = (1U & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data);
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[4U] 
        = (0U != vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data);
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[5U] 
        = (1U & (~ (IData)((0U != vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data))));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
                       == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
           == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
                          == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
              == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
                          == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
              == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
                          == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
                          [3U]))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
              == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
                          == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
                          [4U]))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list
              [4U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
              == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
              [4U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
                          == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
                          [5U]))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list
              [5U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
              == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
              [5U]));
    vlSelf->riscv32__DOT__exu_result = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit)
                                         ? vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out
                                         : vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data);
    Vriscv32___024root____Vdpiimwrap_riscv32__DOT__riscv_ifu_u0__DOT__riscv_pmem_read_TOP(vlSelf->riscv32__DOT__exu_result, vlSelf->__Vtask_riscv32__DOT__riscv_lsu_u0__DOT__riscv_pmem_read__4__rdata, 
                                                                                (0U 
                                                                                != (IData)(vlSelf->riscv32__DOT__idu_lsu_opt)));
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata 
        = vlSelf->__Vtask_riscv32__DOT__riscv_lsu_u0__DOT__riscv_pmem_read__4__rdata;
    Vriscv32___024root____Vdpiimwrap_riscv32__DOT__riscv_lsu_u0__DOT__riscv_pmem_write_TOP(
                                                                                vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellout__riscv_dff_pc__dout[2U], 
                                                                                vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellout__riscv_dff_pc__dout[1U], 
                                                                                vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellout__riscv_dff_pc__dout[0U]);
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[0U] 
        = (0xd00000000ULL | (QData)((IData)((0xffffU 
                                             & vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata))));
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[1U] 
        = (0xc00000000ULL | (QData)((IData)((0xffU 
                                             & vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata))));
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[2U] 
        = (0xa00000000ULL | (QData)((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata)));
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[3U] 
        = (0x900000000ULL | (QData)((IData)((((- (IData)(
                                                         (1U 
                                                          & (vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata 
                                                             >> 0xfU)))) 
                                              << 0x10U) 
                                             | (0xffffU 
                                                & vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata)))));
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[4U] 
        = (0x800000000ULL | (QData)((IData)((((- (IData)(
                                                         (1U 
                                                          & (vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata 
                                                             >> 7U)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata)))));
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[0U] 
        = (0xffffU & vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata);
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[1U] 
        = (0xffU & vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata);
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[2U] 
        = vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata;
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[3U] 
        = (((- (IData)((1U & (vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata 
                              >> 0xfU)))) << 0x10U) 
           | (0xffffU & vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata));
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[4U] 
        = (((- (IData)((1U & (vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata 
                              >> 7U)))) << 8U) | (0xffU 
                                                  & vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata));
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
                       == vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
           == vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
                          == vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
              == vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
                          == vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
              == vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
                          == vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list
                          [3U]))) & vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
              == vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
                          == vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list
                          [4U]))) & vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list
              [4U]));
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
              == vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list
              [4U]));
    vlSelf->riscv32__DOT__lsu_result = ((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit)
                                         ? vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out
                                         : 0U);
}

void Vriscv32___024root___eval_ico(Vriscv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv32___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vriscv32___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vriscv32___024root___eval_act(Vriscv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv32___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vriscv32___024root___nba_sequent__TOP__0(Vriscv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv32___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__riscv32__DOT__riscv_regfile_u0__DOT__gpr__v0;
    __Vdlyvdim0__riscv32__DOT__riscv_regfile_u0__DOT__gpr__v0 = 0;
    IData/*31:0*/ __Vdlyvval__riscv32__DOT__riscv_regfile_u0__DOT__gpr__v0;
    __Vdlyvval__riscv32__DOT__riscv_regfile_u0__DOT__gpr__v0 = 0;
    CData/*0:0*/ __Vdlyvset__riscv32__DOT__riscv_regfile_u0__DOT__gpr__v0;
    __Vdlyvset__riscv32__DOT__riscv_regfile_u0__DOT__gpr__v0 = 0;
    IData/*31:0*/ __Vdlyvval__riscv32__DOT__riscv_csr_u0__DOT__csr_reg__v0;
    __Vdlyvval__riscv32__DOT__riscv_csr_u0__DOT__csr_reg__v0 = 0;
    IData/*31:0*/ __Vdlyvval__riscv32__DOT__riscv_csr_u0__DOT__csr_reg__v1;
    __Vdlyvval__riscv32__DOT__riscv_csr_u0__DOT__csr_reg__v1 = 0;
    IData/*31:0*/ __Vdlyvval__riscv32__DOT__riscv_csr_u0__DOT__csr_reg__v2;
    __Vdlyvval__riscv32__DOT__riscv_csr_u0__DOT__csr_reg__v2 = 0;
    IData/*31:0*/ __Vdlyvval__riscv32__DOT__riscv_csr_u0__DOT__csr_reg__v3;
    __Vdlyvval__riscv32__DOT__riscv_csr_u0__DOT__csr_reg__v3 = 0;
    // Body
    __Vdlyvset__riscv32__DOT__riscv_regfile_u0__DOT__gpr__v0 = 0U;
    if (vlSelf->rst_n) {
        __Vdlyvval__riscv32__DOT__riscv_csr_u0__DOT__csr_reg__v1 
            = (((IData)(vlSelf->riscv32__DOT__riscv_csr_u0__DOT__wr_en) 
                & (0x305U == (0xfffU & vlSelf->riscv32__DOT__idu_imm)))
                ? vlSelf->riscv32__DOT__riscv_csr_u0__DOT__wr_data_r
                : vlSelf->riscv32__DOT__riscv_csr_u0__DOT__csr_reg
               [0x305U]);
        if (vlSelf->riscv32__DOT__csr_ecall) {
            __Vdlyvval__riscv32__DOT__riscv_csr_u0__DOT__csr_reg__v3 = 0xbU;
            __Vdlyvval__riscv32__DOT__riscv_csr_u0__DOT__csr_reg__v0 
                = (0x1800U | vlSelf->riscv32__DOT__riscv_csr_u0__DOT__o_mstatus_r);
            vlSelf->riscv32__DOT__riscv_csr_u0__DOT__mepc_inst_r 
                = vlSelf->riscv32__DOT__ifu_inst;
            __Vdlyvval__riscv32__DOT__riscv_csr_u0__DOT__csr_reg__v2 
                = vlSelf->riscv32__DOT__ifu_pc;
        } else {
            __Vdlyvval__riscv32__DOT__riscv_csr_u0__DOT__csr_reg__v3 
                = (((IData)(vlSelf->riscv32__DOT__riscv_csr_u0__DOT__wr_en) 
                    & (0x342U == (0xfffU & vlSelf->riscv32__DOT__idu_imm)))
                    ? vlSelf->riscv32__DOT__riscv_csr_u0__DOT__wr_data_r
                    : vlSelf->riscv32__DOT__riscv_csr_u0__DOT__csr_reg
                   [0x342U]);
            __Vdlyvval__riscv32__DOT__riscv_csr_u0__DOT__csr_reg__v0 
                = ((IData)(vlSelf->riscv32__DOT__csr_mret)
                    ? (0xffffe7ffU & vlSelf->riscv32__DOT__riscv_csr_u0__DOT__o_mstatus_r)
                    : (((IData)(vlSelf->riscv32__DOT__riscv_csr_u0__DOT__wr_en) 
                        & (0x300U == (0xfffU & vlSelf->riscv32__DOT__idu_imm)))
                        ? vlSelf->riscv32__DOT__riscv_csr_u0__DOT__wr_data_r
                        : vlSelf->riscv32__DOT__riscv_csr_u0__DOT__csr_reg
                       [0x300U]));
            vlSelf->riscv32__DOT__riscv_csr_u0__DOT__mepc_inst_r 
                = vlSelf->riscv32__DOT__riscv_csr_u0__DOT__mepc_inst_r;
            __Vdlyvval__riscv32__DOT__riscv_csr_u0__DOT__csr_reg__v2 
                = (((IData)(vlSelf->riscv32__DOT__riscv_csr_u0__DOT__wr_en) 
                    & (0x341U == (0xfffU & vlSelf->riscv32__DOT__idu_imm)))
                    ? vlSelf->riscv32__DOT__riscv_csr_u0__DOT__wr_data_r
                    : vlSelf->riscv32__DOT__riscv_csr_u0__DOT__csr_reg
                   [0x341U]);
        }
        vlSelf->riscv32__DOT__ifu_pc = ((IData)(vlSelf->riscv32__DOT__csr_mret)
                                         ? vlSelf->riscv32__DOT__riscv_csr_u0__DOT__csr_reg
                                        [0x341U] : 
                                        ((IData)(vlSelf->riscv32__DOT__csr_ecall)
                                          ? vlSelf->riscv32__DOT__riscv_csr_u0__DOT__csr_reg
                                         [0x305U] : 
                                         ((((0x63U 
                                             == (0x7fU 
                                                 & vlSelf->riscv32__DOT__ifu_inst)) 
                                            & (0U != vlSelf->riscv32__DOT__exu_result)) 
                                           | (0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->riscv32__DOT__ifu_inst)))
                                           ? (vlSelf->riscv32__DOT__ifu_pc 
                                              + vlSelf->riscv32__DOT__idu_imm)
                                           : ((0x67U 
                                               == (0x7fU 
                                                   & vlSelf->riscv32__DOT__ifu_inst))
                                               ? (vlSelf->riscv32__DOT__src1 
                                                  + vlSelf->riscv32__DOT__idu_imm)
                                               : ((IData)(4U) 
                                                  + vlSelf->riscv32__DOT__ifu_pc)))));
        vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellout__riscv_dff_pc__dout[0U] 
            = vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__mask;
        vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellout__riscv_dff_pc__dout[1U] 
            = (IData)((((QData)((IData)(vlSelf->riscv32__DOT__exu_result)) 
                        << 0x20U) | (QData)((IData)(vlSelf->riscv32__DOT__src2))));
        vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellout__riscv_dff_pc__dout[2U] 
            = (IData)(((((QData)((IData)(vlSelf->riscv32__DOT__exu_result)) 
                         << 0x20U) | (QData)((IData)(vlSelf->riscv32__DOT__src2))) 
                       >> 0x20U));
        vlSelf->riscv32__DOT__riscv_regfile_u0__DOT____Vcellout__riscv_dff_reg_t__dout 
            = ((0x20U & ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                         << 5U)) | (0x1fU & ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                                             >> 1U)));
    } else {
        __Vdlyvval__riscv32__DOT__riscv_csr_u0__DOT__csr_reg__v1 = 0U;
        __Vdlyvval__riscv32__DOT__riscv_csr_u0__DOT__csr_reg__v3 = 0U;
        __Vdlyvval__riscv32__DOT__riscv_csr_u0__DOT__csr_reg__v0 = 0U;
        vlSelf->riscv32__DOT__riscv_csr_u0__DOT__mepc_inst_r = 0U;
        __Vdlyvval__riscv32__DOT__riscv_csr_u0__DOT__csr_reg__v2 = 0U;
        vlSelf->riscv32__DOT__ifu_pc = 0x80000000U;
        vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellout__riscv_dff_pc__dout[0U] = 0U;
        vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellout__riscv_dff_pc__dout[1U] = 0U;
        vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellout__riscv_dff_pc__dout[2U] = 0U;
        vlSelf->riscv32__DOT__riscv_regfile_u0__DOT____Vcellout__riscv_dff_reg_t__dout = 0U;
    }
    if ((1U & (IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out))) {
        __Vdlyvval__riscv32__DOT__riscv_regfile_u0__DOT__gpr__v0 
            = ((0U == (0x1fU & ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                                >> 1U))) ? 0U : ((0U 
                                                  == (IData)(vlSelf->riscv32__DOT__idu_lsu_opt))
                                                  ? vlSelf->riscv32__DOT__exu_result
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->riscv32__DOT__idu_lsu_opt))
                                                   ? 
                                                  ((IData)(vlSelf->rst_n)
                                                    ? 
                                                   ((IData)(vlSelf->riscv32__DOT__riscv_csr_u0__DOT__wr_en)
                                                     ? 
                                                    vlSelf->riscv32__DOT__riscv_csr_u0__DOT__csr_reg
                                                    [
                                                    (0xfffU 
                                                     & vlSelf->riscv32__DOT__idu_imm)]
                                                     : 0U)
                                                    : 0U)
                                                   : vlSelf->riscv32__DOT__lsu_result)));
        __Vdlyvset__riscv32__DOT__riscv_regfile_u0__DOT__gpr__v0 = 1U;
        __Vdlyvdim0__riscv32__DOT__riscv_regfile_u0__DOT__gpr__v0 
            = (0x1fU & ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                        >> 1U));
    }
    if (__Vdlyvset__riscv32__DOT__riscv_regfile_u0__DOT__gpr__v0) {
        vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr[__Vdlyvdim0__riscv32__DOT__riscv_regfile_u0__DOT__gpr__v0] 
            = __Vdlyvval__riscv32__DOT__riscv_regfile_u0__DOT__gpr__v0;
    }
    vlSelf->riscv32__DOT__riscv_csr_u0__DOT__csr_reg[0x300U] 
        = __Vdlyvval__riscv32__DOT__riscv_csr_u0__DOT__csr_reg__v0;
    vlSelf->riscv32__DOT__riscv_csr_u0__DOT__csr_reg[0x305U] 
        = __Vdlyvval__riscv32__DOT__riscv_csr_u0__DOT__csr_reg__v1;
    vlSelf->riscv32__DOT__riscv_csr_u0__DOT__csr_reg[0x341U] 
        = __Vdlyvval__riscv32__DOT__riscv_csr_u0__DOT__csr_reg__v2;
    vlSelf->riscv32__DOT__riscv_csr_u0__DOT__csr_reg[0x342U] 
        = __Vdlyvval__riscv32__DOT__riscv_csr_u0__DOT__csr_reg__v3;
    vlSelf->riscv32__DOT__riscv_csr_u0__DOT__o_mstatus_r 
        = vlSelf->riscv32__DOT__riscv_csr_u0__DOT__csr_reg
        [0x300U];
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[1U][0U] 
        = (IData)((4ULL | ((QData)((IData)(vlSelf->riscv32__DOT__ifu_pc)) 
                           << 0x20U)));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[1U][1U] 
        = (IData)(((4ULL | ((QData)((IData)(vlSelf->riscv32__DOT__ifu_pc)) 
                            << 0x20U)) >> 0x20U));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[1U][2U] = 2U;
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[1U] 
        = (4ULL | ((QData)((IData)(vlSelf->riscv32__DOT__ifu_pc)) 
                   << 0x20U));
    Vriscv32___024root____Vdpiimwrap_riscv32__DOT__riscv_ifu_u0__DOT__riscv_pmem_read_TOP(vlSelf->riscv32__DOT__ifu_pc, vlSelf->__Vtask_riscv32__DOT__riscv_ifu_u0__DOT__riscv_pmem_read__0__rdata, (IData)(vlSelf->rst_n));
    vlSelf->riscv32__DOT__ifu_inst = vlSelf->__Vtask_riscv32__DOT__riscv_ifu_u0__DOT__riscv_pmem_read__0__rdata;
    Vriscv32___024root____Vdpiimwrap_riscv32__DOT__riscv_ifu_u0__DOT__set_pc_ptr_TOP(vlSelf->riscv32__DOT__ifu_pc);
    Vriscv32___024root____Vdpiimwrap_riscv32__DOT__riscv_ifu_u0__DOT__get_riscv32_rst_TOP(vlSelf->rst_n);
    vlSelf->riscv32__DOT__riscv_csr_u0__DOT__wr_en 
        = ((0x73U == (0x7fU & vlSelf->riscv32__DOT__ifu_inst)) 
           & (0U != (7U & (vlSelf->riscv32__DOT__ifu_inst 
                           >> 0xcU))));
    vlSelf->riscv32__DOT____VdfgTmp_h05e9e7e0__0 = (IData)(
                                                           (0x73U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->riscv32__DOT__ifu_inst)));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[9U] 
        = (0x1700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->riscv32__DOT__ifu_inst))));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[0xaU] 
        = (0x3700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->riscv32__DOT__ifu_inst))));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[2U] 
        = (0x330001U | ((0xf800U & (vlSelf->riscv32__DOT__ifu_inst 
                                    >> 4U)) | ((0x7c0U 
                                                & (vlSelf->riscv32__DOT__ifu_inst 
                                                   >> 0xeU)) 
                                               | (0x3eU 
                                                  & (vlSelf->riscv32__DOT__ifu_inst 
                                                     >> 6U)))));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[8U] 
        = (0x6f0001U | (0x3eU & (vlSelf->riscv32__DOT__ifu_inst 
                                 >> 6U)));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[9U] 
        = (0x170001U | (0x3eU & (vlSelf->riscv32__DOT__ifu_inst 
                                 >> 6U)));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[0xaU] 
        = (0x370001U | (0x3eU & (vlSelf->riscv32__DOT__ifu_inst 
                                 >> 6U)));
    vlSelf->__VdfgTmp_h2d99613b__0 = ((0xf800U & (vlSelf->riscv32__DOT__ifu_inst 
                                                  >> 4U)) 
                                      | (0x7c0U & (vlSelf->riscv32__DOT__ifu_inst 
                                                   >> 0xeU)));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI 
        = (((- (IData)((vlSelf->riscv32__DOT__ifu_inst 
                        >> 0x1fU))) << 0xcU) | (vlSelf->riscv32__DOT__ifu_inst 
                                                >> 0x14U));
    vlSelf->__VdfgTmp_heb135ca6__0 = (1U | ((0xf800U 
                                             & (vlSelf->riscv32__DOT__ifu_inst 
                                                >> 4U)) 
                                            | (0x3eU 
                                               & (vlSelf->riscv32__DOT__ifu_inst 
                                                  >> 6U))));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key 
        = (((0x63U == (0x7fU & vlSelf->riscv32__DOT__ifu_inst)) 
            << 3U) | (7U & (vlSelf->riscv32__DOT__ifu_inst 
                            >> 0xcU)));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                       == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__hit 
        = ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
           == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->riscv32__DOT__idu_lsu_opt = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__hit)
                                          ? (IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_lsu_opt__DOT__i1__DOT__lut_out)
                                          : 0U);
    vlSelf->riscv32__DOT__idu_alu_opt = ((0x40U & vlSelf->riscv32__DOT__ifu_inst)
                                          ? ((0x20U 
                                              & vlSelf->riscv32__DOT__ifu_inst)
                                              ? ((0x10U 
                                                  & vlSelf->riscv32__DOT__ifu_inst)
                                                  ? 
                                                 ((8U 
                                                   & vlSelf->riscv32__DOT__ifu_inst)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSelf->riscv32__DOT__ifu_inst)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSelf->riscv32__DOT__ifu_inst)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->riscv32__DOT__ifu_inst)
                                                      ? 0xaU
                                                      : 0U)
                                                     : 0U)))
                                                  : 
                                                 ((8U 
                                                   & vlSelf->riscv32__DOT__ifu_inst)
                                                   ? 
                                                  ((4U 
                                                    & vlSelf->riscv32__DOT__ifu_inst)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->riscv32__DOT__ifu_inst)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->riscv32__DOT__ifu_inst)
                                                      ? 1U
                                                      : 0U)
                                                     : 0U)
                                                    : 0U)
                                                   : 
                                                  ((4U 
                                                    & vlSelf->riscv32__DOT__ifu_inst)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->riscv32__DOT__ifu_inst)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->riscv32__DOT__ifu_inst)
                                                      ? 1U
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((2U 
                                                     & vlSelf->riscv32__DOT__ifu_inst)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->riscv32__DOT__ifu_inst)
                                                      ? 
                                                     ((0x4000U 
                                                       & vlSelf->riscv32__DOT__ifu_inst)
                                                       ? 
                                                      ((0x2000U 
                                                        & vlSelf->riscv32__DOT__ifu_inst)
                                                        ? 5U
                                                        : 4U)
                                                       : 
                                                      ((0x2000U 
                                                        & vlSelf->riscv32__DOT__ifu_inst)
                                                        ? 0U
                                                        : 2U))
                                                      : 0U)
                                                     : 0U))))
                                              : 0U)
                                          : ((0x20U 
                                              & vlSelf->riscv32__DOT__ifu_inst)
                                              ? ((0x10U 
                                                  & vlSelf->riscv32__DOT__ifu_inst)
                                                  ? 
                                                 ((8U 
                                                   & vlSelf->riscv32__DOT__ifu_inst)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSelf->riscv32__DOT__ifu_inst)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->riscv32__DOT__ifu_inst)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->riscv32__DOT__ifu_inst)
                                                      ? 1U
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((2U 
                                                     & vlSelf->riscv32__DOT__ifu_inst)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->riscv32__DOT__ifu_inst)
                                                      ? 
                                                     ((0x4000U 
                                                       & vlSelf->riscv32__DOT__ifu_inst)
                                                       ? 
                                                      ((0x2000U 
                                                        & vlSelf->riscv32__DOT__ifu_inst)
                                                        ? 
                                                       ((0x1000U 
                                                         & vlSelf->riscv32__DOT__ifu_inst)
                                                         ? 0xaU
                                                         : 9U)
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelf->riscv32__DOT__ifu_inst)
                                                         ? 
                                                        ((0U 
                                                          == 
                                                          (vlSelf->riscv32__DOT__ifu_inst 
                                                           >> 0x19U))
                                                          ? 7U
                                                          : 
                                                         ((0x20U 
                                                           == 
                                                           (vlSelf->riscv32__DOT__ifu_inst 
                                                            >> 0x19U))
                                                           ? 8U
                                                           : 0U))
                                                         : 6U))
                                                       : 
                                                      ((0x2000U 
                                                        & vlSelf->riscv32__DOT__ifu_inst)
                                                        ? 
                                                       ((0x1000U 
                                                         & vlSelf->riscv32__DOT__ifu_inst)
                                                         ? 5U
                                                         : 4U)
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelf->riscv32__DOT__ifu_inst)
                                                         ? 3U
                                                         : 
                                                        ((0U 
                                                          == 
                                                          (vlSelf->riscv32__DOT__ifu_inst 
                                                           >> 0x19U))
                                                          ? 1U
                                                          : 
                                                         ((0x20U 
                                                           == 
                                                           (vlSelf->riscv32__DOT__ifu_inst 
                                                            >> 0x19U))
                                                           ? 2U
                                                           : 0U)))))
                                                      : 0U)
                                                     : 0U)))
                                                  : 
                                                 ((8U 
                                                   & vlSelf->riscv32__DOT__ifu_inst)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSelf->riscv32__DOT__ifu_inst)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSelf->riscv32__DOT__ifu_inst)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->riscv32__DOT__ifu_inst)
                                                      ? 1U
                                                      : 0U)
                                                     : 0U))))
                                              : ((0x10U 
                                                  & vlSelf->riscv32__DOT__ifu_inst)
                                                  ? 
                                                 ((8U 
                                                   & vlSelf->riscv32__DOT__ifu_inst)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSelf->riscv32__DOT__ifu_inst)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->riscv32__DOT__ifu_inst)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->riscv32__DOT__ifu_inst)
                                                      ? 1U
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((2U 
                                                     & vlSelf->riscv32__DOT__ifu_inst)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->riscv32__DOT__ifu_inst)
                                                      ? 
                                                     ((0x4000U 
                                                       & vlSelf->riscv32__DOT__ifu_inst)
                                                       ? 
                                                      ((0x2000U 
                                                        & vlSelf->riscv32__DOT__ifu_inst)
                                                        ? 
                                                       ((0x1000U 
                                                         & vlSelf->riscv32__DOT__ifu_inst)
                                                         ? 0xaU
                                                         : 9U)
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelf->riscv32__DOT__ifu_inst)
                                                         ? 
                                                        ((0U 
                                                          == 
                                                          (vlSelf->riscv32__DOT__ifu_inst 
                                                           >> 0x19U))
                                                          ? 7U
                                                          : 
                                                         ((0x20U 
                                                           == 
                                                           (vlSelf->riscv32__DOT__ifu_inst 
                                                            >> 0x19U))
                                                           ? 8U
                                                           : 0U))
                                                         : 6U))
                                                       : 
                                                      ((0x2000U 
                                                        & vlSelf->riscv32__DOT__ifu_inst)
                                                        ? 
                                                       ((0x1000U 
                                                         & vlSelf->riscv32__DOT__ifu_inst)
                                                         ? 5U
                                                         : 2U)
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelf->riscv32__DOT__ifu_inst)
                                                         ? 3U
                                                         : 1U)))
                                                      : 0U)
                                                     : 0U)))
                                                  : 
                                                 ((8U 
                                                   & vlSelf->riscv32__DOT__ifu_inst)
                                                   ? 
                                                  ((4U 
                                                    & vlSelf->riscv32__DOT__ifu_inst)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->riscv32__DOT__ifu_inst)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->riscv32__DOT__ifu_inst)
                                                      ? 0xaU
                                                      : 0U)
                                                     : 0U)
                                                    : 0U)
                                                   : 
                                                  ((4U 
                                                    & vlSelf->riscv32__DOT__ifu_inst)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSelf->riscv32__DOT__ifu_inst)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->riscv32__DOT__ifu_inst)
                                                      ? 1U
                                                      : 0U)
                                                     : 0U))))));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                       == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
           == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                          [3U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                          [4U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
              [4U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
              [4U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                          [5U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
              [5U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
              [5U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                          [6U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
              [6U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
              [6U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                          [7U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
              [7U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
              [7U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                          [8U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
              [8U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
              [8U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                          [9U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
              [9U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
              [9U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
                          [0xaU]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__data_list
              [0xaU]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__key_list
              [0xaU]));
    vlSelf->riscv32__DOT__idu_src_sel = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__hit)
                                          ? (IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_opt_idu__DOT__riscv_mux_id_src_sel__DOT__i1__DOT__lut_out)
                                          : 1U);
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[0U] 
        = (((- (IData)((vlSelf->riscv32__DOT__ifu_inst 
                        >> 0x1fU))) << 0xcU) | (vlSelf->riscv32__DOT__ifu_inst 
                                                >> 0x14U));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[3U] 
        = (((- (IData)((vlSelf->riscv32__DOT__ifu_inst 
                        >> 0x1fU))) << 0xcU) | (vlSelf->riscv32__DOT__ifu_inst 
                                                >> 0x14U));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[5U] 
        = (((- (IData)((vlSelf->riscv32__DOT__ifu_inst 
                        >> 0x1fU))) << 0xcU) | (vlSelf->riscv32__DOT__ifu_inst 
                                                >> 0x14U));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[7U] 
        = (((- (IData)((vlSelf->riscv32__DOT__ifu_inst 
                        >> 0x1fU))) << 0xcU) | (vlSelf->riscv32__DOT__ifu_inst 
                                                >> 0x14U));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[9U] 
        = (0xfffff000U & vlSelf->riscv32__DOT__ifu_inst);
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[0xaU] 
        = (0xfffff000U & vlSelf->riscv32__DOT__ifu_inst);
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____Vcellinp__riscv_id_imm_ext_typeS__imm_in 
        = ((0xfe0U & (vlSelf->riscv32__DOT__ifu_inst 
                      >> 0x14U)) | (0x1fU & (vlSelf->riscv32__DOT__ifu_inst 
                                             >> 7U)));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____Vcellinp__riscv_id_imm_ext_typeB__imm_in 
        = ((0x1000U & (vlSelf->riscv32__DOT__ifu_inst 
                       >> 0x13U)) | ((0x800U & (vlSelf->riscv32__DOT__ifu_inst 
                                                << 4U)) 
                                     | ((0x7e0U & (vlSelf->riscv32__DOT__ifu_inst 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->riscv32__DOT__ifu_inst 
                                            >> 7U)))));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____Vcellinp__riscv_id_imm_ext_typeJ__imm_in 
        = ((0x100000U & (vlSelf->riscv32__DOT__ifu_inst 
                         >> 0xbU)) | ((0xff000U & vlSelf->riscv32__DOT__ifu_inst) 
                                      | ((0x800U & 
                                          (vlSelf->riscv32__DOT__ifu_inst 
                                           >> 9U)) 
                                         | (0x7feU 
                                            & (vlSelf->riscv32__DOT__ifu_inst 
                                               >> 0x14U)))));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[0U] 
        = (1U | ((0xf800U & (vlSelf->riscv32__DOT__ifu_inst 
                             >> 4U)) | (0x3eU & (vlSelf->riscv32__DOT__ifu_inst 
                                                 >> 6U))));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[2U] 
        = (1U | ((0xf800U & (vlSelf->riscv32__DOT__ifu_inst 
                             >> 4U)) | ((0x7c0U & (vlSelf->riscv32__DOT__ifu_inst 
                                                   >> 0xeU)) 
                                        | (0x3eU & 
                                           (vlSelf->riscv32__DOT__ifu_inst 
                                            >> 6U)))));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[3U] 
        = (1U | ((0xf800U & (vlSelf->riscv32__DOT__ifu_inst 
                             >> 4U)) | (0x3eU & (vlSelf->riscv32__DOT__ifu_inst 
                                                 >> 6U))));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[4U] 
        = ((0xf800U & (vlSelf->riscv32__DOT__ifu_inst 
                       >> 4U)) | (0x7c0U & (vlSelf->riscv32__DOT__ifu_inst 
                                            >> 0xeU)));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[5U] 
        = (1U | ((0xf800U & (vlSelf->riscv32__DOT__ifu_inst 
                             >> 4U)) | (0x3eU & (vlSelf->riscv32__DOT__ifu_inst 
                                                 >> 6U))));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[6U] 
        = ((0xf800U & (vlSelf->riscv32__DOT__ifu_inst 
                       >> 4U)) | (0x7c0U & (vlSelf->riscv32__DOT__ifu_inst 
                                            >> 0xeU)));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[7U] 
        = (1U | ((0xf800U & (vlSelf->riscv32__DOT__ifu_inst 
                             >> 4U)) | (0x3eU & (vlSelf->riscv32__DOT__ifu_inst 
                                                 >> 6U))));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[8U] 
        = (1U | (0x3eU & (vlSelf->riscv32__DOT__ifu_inst 
                          >> 6U)));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[9U] 
        = (1U | (0x3eU & (vlSelf->riscv32__DOT__ifu_inst 
                          >> 6U)));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list[0xaU] 
        = (1U | (0x3eU & (vlSelf->riscv32__DOT__ifu_inst 
                          >> 6U)));
    vlSelf->riscv32__DOT__csr_mret = ((IData)(vlSelf->riscv32__DOT____VdfgTmp_h05e9e7e0__0) 
                                      & (0x302U == 
                                         (vlSelf->riscv32__DOT__ifu_inst 
                                          >> 0x14U)));
    vlSelf->riscv32__DOT__csr_ecall = ((IData)(vlSelf->riscv32__DOT____VdfgTmp_h05e9e7e0__0) 
                                       & (0U == (vlSelf->riscv32__DOT__ifu_inst 
                                                 >> 0x14U)));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[4U] 
        = (0x230000U | (IData)(vlSelf->__VdfgTmp_h2d99613b__0));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[6U] 
        = (0x630000U | (IData)(vlSelf->__VdfgTmp_h2d99613b__0));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[0U] 
        = (0x7300000000ULL | (QData)((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI)));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[3U] 
        = (0x1300000000ULL | (QData)((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI)));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[5U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI)));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[7U] 
        = (0x6700000000ULL | (QData)((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeI)));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellinp__riscv_mux_id_reg__lut[0U] 
        = (IData)((0x478000730000ULL | (((QData)((IData)(
                                                         (0x1fU 
                                                          & (vlSelf->riscv32__DOT__ifu_inst 
                                                             >> 0xfU)))) 
                                         << 0x39U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & (vlSelf->riscv32__DOT__ifu_inst 
                                                                >> 0x14U)))) 
                                            << 0x34U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSelf->riscv32__DOT__ifu_inst 
                                                                   >> 7U)))) 
                                               << 0x2fU) 
                                              | (QData)((IData)(vlSelf->__VdfgTmp_heb135ca6__0)))))));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellinp__riscv_mux_id_reg__lut[1U] 
        = (0xc0000000U | (IData)(((0x478000730000ULL 
                                   | (((QData)((IData)(
                                                       (0x1fU 
                                                        & (vlSelf->riscv32__DOT__ifu_inst 
                                                           >> 0xfU)))) 
                                       << 0x39U) | 
                                      (((QData)((IData)(
                                                        (0x1fU 
                                                         & (vlSelf->riscv32__DOT__ifu_inst 
                                                            >> 0x14U)))) 
                                        << 0x34U) | 
                                       (((QData)((IData)(
                                                         (0x1fU 
                                                          & (vlSelf->riscv32__DOT__ifu_inst 
                                                             >> 7U)))) 
                                         << 0x2fU) 
                                        | (QData)((IData)(vlSelf->__VdfgTmp_heb135ca6__0)))))) 
                                  >> 0x20U)));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellinp__riscv_mux_id_reg__lut[2U] 
        = (0x260000cU | ((0x1f0000U & (vlSelf->riscv32__DOT__ifu_inst 
                                       << 1U)) | (0xffffffe0U 
                                                  & (0x20U 
                                                     | (0x7c0U 
                                                        & (vlSelf->riscv32__DOT__ifu_inst 
                                                           >> 1U))))));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellinp__riscv_mux_id_reg__lut[3U] 
        = (0x23000U | ((0xc0000000U & (vlSelf->riscv32__DOT__ifu_inst 
                                       << 0xfU)) | 
                       ((0xfff80000U & (0x80000U | 
                                        (0x1f00000U 
                                         & (vlSelf->riscv32__DOT__ifu_inst 
                                            << 0xdU)))) 
                        | ((0xf80U & (vlSelf->riscv32__DOT__ifu_inst 
                                      >> 8U)) | (0x7cU 
                                                 & (vlSelf->riscv32__DOT__ifu_inst 
                                                    >> 0x12U))))));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellinp__riscv_mux_id_reg__lut[4U] 
        = (0x8c000018U | ((0x3e00000U & (vlSelf->riscv32__DOT__ifu_inst 
                                         << 6U)) | 
                          ((0x1f0000U & (vlSelf->riscv32__DOT__ifu_inst 
                                         >> 4U)) | 
                           (7U & (vlSelf->riscv32__DOT__ifu_inst 
                                  >> 0x11U)))));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellinp__riscv_mux_id_reg__lut[5U] 
        = (0x1ce0001U | ((0x3e000000U & (vlSelf->riscv32__DOT__ifu_inst 
                                         << 0x12U)) 
                         | ((0x1f000U & (vlSelf->riscv32__DOT__ifu_inst 
                                         >> 3U)) | 
                            (0xfffffffeU & (2U | (0x7cU 
                                                  & (vlSelf->riscv32__DOT__ifu_inst 
                                                     >> 5U)))))));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellinp__riscv_mux_id_reg__lut[6U] 
        = (0x8000ef00U | (0x1f0000U & (vlSelf->riscv32__DOT__ifu_inst 
                                       << 9U)));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellinp__riscv_mux_id_reg__lut[7U] 
        = (0xdc0004bU | (0xf80U & vlSelf->riscv32__DOT__ifu_inst));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[0U] 
        = (0x730000U | (IData)(vlSelf->__VdfgTmp_heb135ca6__0));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[3U] 
        = (0x130000U | (IData)(vlSelf->__VdfgTmp_heb135ca6__0));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[5U] 
        = (0x30000U | (IData)(vlSelf->__VdfgTmp_heb135ca6__0));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__pair_list[7U] 
        = (0x670000U | (IData)(vlSelf->__VdfgTmp_heb135ca6__0));
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key 
        = (((IData)(vlSelf->riscv32__DOT__idu_lsu_opt) 
            << 3U) | (7U & (vlSelf->riscv32__DOT__ifu_inst 
                            >> 0xcU)));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag 
        = ((2U == (IData)(vlSelf->riscv32__DOT__idu_alu_opt)) 
           | ((4U == (IData)(vlSelf->riscv32__DOT__idu_alu_opt)) 
              | (5U == (IData)(vlSelf->riscv32__DOT__idu_alu_opt))));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeS 
        = (((- (IData)((vlSelf->riscv32__DOT__ifu_inst 
                        >> 0x1fU))) << 0xcU) | (IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____Vcellinp__riscv_id_imm_ext_typeS__imm_in));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[4U] 
        = (((- (IData)((vlSelf->riscv32__DOT__ifu_inst 
                        >> 0x1fU))) << 0xcU) | (IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____Vcellinp__riscv_id_imm_ext_typeS__imm_in));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeB 
        = (((- (IData)((vlSelf->riscv32__DOT__ifu_inst 
                        >> 0x1fU))) << 0xdU) | (IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____Vcellinp__riscv_id_imm_ext_typeB__imm_in));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[6U] 
        = (((- (IData)((vlSelf->riscv32__DOT__ifu_inst 
                        >> 0x1fU))) << 0xdU) | (IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____Vcellinp__riscv_id_imm_ext_typeB__imm_in));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeJ 
        = (((- (IData)((vlSelf->riscv32__DOT__ifu_inst 
                        >> 0x1fU))) << 0x15U) | vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____Vcellinp__riscv_id_imm_ext_typeJ__imm_in);
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list[8U] 
        = (((- (IData)((vlSelf->riscv32__DOT__ifu_inst 
                        >> 0x1fU))) << 0x15U) | vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT____Vcellinp__riscv_id_imm_ext_typeJ__imm_in);
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                       == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
           == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                          [3U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                          [4U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
              [4U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
              [4U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                          [5U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
              [5U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
              [5U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                          [6U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
              [6U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
              [6U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                          [7U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
              [7U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
              [7U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                          [8U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
              [8U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
              [8U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                          [9U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
              [9U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
              [9U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
                          [0xaU]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__data_list
              [0xaU]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__key_list
              [0xaU]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__hit)
            ? (IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_mux_id_reg__DOT__i1__DOT__lut_out)
            : 0U);
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
                       == vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
           == vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
                          == vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
              == vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
                          == vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
              == vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__mask = 
        ((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__hit)
          ? vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_wmask__DOT__i1__DOT__lut_out
          : 0U);
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[4U] 
        = (0x2300000000ULL | (QData)((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeS)));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[6U] 
        = (0x6300000000ULL | (QData)((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeB)));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__pair_list[8U] 
        = (0x6f00000000ULL | (QData)((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__imm_typeJ)));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                       == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit 
        = ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
           == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
                          [3U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
                          [4U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list
              [4U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
              [4U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
                          [5U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list
              [5U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
              [5U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
                          [6U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list
              [6U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
              [6U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
                          [7U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list
              [7U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
              [7U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
                          [8U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list
              [8U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
              [8U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
                          [9U]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list
              [9U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
              [9U]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
                          == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
                          [0xaU]))) & vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__data_list
              [0xaU]));
    vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->riscv32__DOT__ifu_inst) 
              == vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__key_list
              [0xaU]));
    vlSelf->riscv32__DOT__idu_imm = ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__hit)
                                      ? vlSelf->riscv32__DOT__riscv_idu_u0__DOT__riscv_id_imm_idu__DOT__riscv_mux_id_imm__DOT__i1__DOT__lut_out
                                      : 0U);
    vlSelf->riscv32__DOT__src2 = vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr
        [(0x1fU & ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                   >> 6U))];
    vlSelf->riscv32__DOT__src1 = vlSelf->riscv32__DOT__riscv_regfile_u0__DOT__gpr
        [(0x1fU & ((IData)(vlSelf->riscv32__DOT__riscv_idu_u0__DOT____Vcellout__riscv_mux_id_reg__out) 
                   >> 0xbU))];
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[0U][0U] 
        = (IData)((((QData)((IData)(vlSelf->riscv32__DOT__ifu_pc)) 
                    << 0x20U) | (QData)((IData)(vlSelf->riscv32__DOT__idu_imm))));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[0U][1U] 
        = (IData)(((((QData)((IData)(vlSelf->riscv32__DOT__ifu_pc)) 
                     << 0x20U) | (QData)((IData)(vlSelf->riscv32__DOT__idu_imm))) 
                   >> 0x20U));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[0U][2U] = 3U;
    vlSelf->riscv32__DOT__riscv_csr_u0__DOT__temp = 
        vlSelf->riscv32__DOT__riscv_csr_u0__DOT__csr_reg
        [(0xfffU & vlSelf->riscv32__DOT__idu_imm)];
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->riscv32__DOT__ifu_pc)) 
            << 0x20U) | (QData)((IData)(vlSelf->riscv32__DOT__idu_imm)));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[2U][0U] 
        = (IData)((((QData)((IData)(vlSelf->riscv32__DOT__src1)) 
                    << 0x20U) | (QData)((IData)(vlSelf->riscv32__DOT__idu_imm))));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[2U][1U] 
        = (IData)(((((QData)((IData)(vlSelf->riscv32__DOT__src1)) 
                     << 0x20U) | (QData)((IData)(vlSelf->riscv32__DOT__idu_imm))) 
                   >> 0x20U));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[2U][2U] = 1U;
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[3U][0U] 
        = (IData)((((QData)((IData)(vlSelf->riscv32__DOT__src1)) 
                    << 0x20U) | (QData)((IData)(vlSelf->riscv32__DOT__src2))));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[3U][1U] 
        = (IData)(((((QData)((IData)(vlSelf->riscv32__DOT__src1)) 
                     << 0x20U) | (QData)((IData)(vlSelf->riscv32__DOT__src2))) 
                   >> 0x20U));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__pair_list[3U][2U] = 0U;
    vlSelf->riscv32__DOT__wr_csr_data = ((0x4000U & vlSelf->riscv32__DOT__ifu_inst)
                                          ? (0x1fU 
                                             & (vlSelf->riscv32__DOT__ifu_inst 
                                                >> 0xfU))
                                          : vlSelf->riscv32__DOT__src1);
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->riscv32__DOT__src1)) 
            << 0x20U) | (QData)((IData)(vlSelf->riscv32__DOT__idu_imm)));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->riscv32__DOT__src1)) 
            << 0x20U) | (QData)((IData)(vlSelf->riscv32__DOT__src2)));
    vlSelf->riscv32__DOT__riscv_csr_u0__DOT__wr_data_r 
        = ((1U == (3U & (vlSelf->riscv32__DOT__ifu_inst 
                         >> 0xcU))) ? vlSelf->riscv32__DOT__wr_csr_data
            : ((2U == (3U & (vlSelf->riscv32__DOT__ifu_inst 
                             >> 0xcU))) ? (vlSelf->riscv32__DOT__riscv_csr_u0__DOT__temp 
                                           | vlSelf->riscv32__DOT__wr_csr_data)
                : ((~ vlSelf->riscv32__DOT__wr_csr_data) 
                   & vlSelf->riscv32__DOT__riscv_csr_u0__DOT__temp)));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->riscv32__DOT__idu_src_sel) 
                               == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list
                               [0U])))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__idu_src_sel) 
           == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->riscv32__DOT__idu_src_sel) 
                                  == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list
                                  [1U])))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__idu_src_sel) 
              == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->riscv32__DOT__idu_src_sel) 
                                  == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list
                                  [2U])))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__idu_src_sel) 
              == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->riscv32__DOT__idu_src_sel) 
                                  == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list
                                  [3U])))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__idu_src_sel) 
              == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__hit)
            ? vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_src_sel__DOT__i1__DOT__lut_out
            : 0ULL);
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[1U] 
        = (0xa00000000ULL | (QData)((IData)(((IData)(
                                                     (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                      >> 0x20U)) 
                                             & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[2U] 
        = (0x900000000ULL | (QData)((IData)(((IData)(
                                                     (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                      >> 0x20U)) 
                                             | (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[3U] 
        = (0x800000000ULL | (QData)((IData)(((((QData)((IData)(
                                                               (- (IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                                                >> 0x3fU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                                 >> 0x20U)))) 
                                             >> (0x3fU 
                                                 & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out))))));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[4U] 
        = (0x700000000ULL | (QData)((IData)(((0x1fU 
                                              >= (0x3fU 
                                                  & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
                                              ? ((IData)(
                                                         (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                          >> 0x20U)) 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
                                              : 0U))));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[5U] 
        = (0x600000000ULL | (QData)((IData)(((IData)(
                                                     (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                      >> 0x20U)) 
                                             ^ (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[8U] 
        = (0x300000000ULL | (QData)((IData)(((0x1fU 
                                              >= (0x3fU 
                                                  & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
                                              ? ((IData)(
                                                         (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                          >> 0x20U)) 
                                                 << 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
                                              : 0U))));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[1U] 
        = ((IData)((vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                    >> 0x20U)) & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[2U] 
        = ((IData)((vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                    >> 0x20U)) | (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[3U] 
        = (IData)(((((QData)((IData)((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                            >> 0x3fU))))))) 
                     << 0x20U) | (QData)((IData)((vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                  >> 0x20U)))) 
                   >> (0x3fU & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out))));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[4U] 
        = ((0x1fU >= (0x3fU & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
            ? ((IData)((vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                        >> 0x20U)) >> (0x3fU & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
            : 0U);
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[5U] 
        = ((IData)((vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                    >> 0x20U)) ^ (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[8U] 
        = ((0x1fU >= (0x3fU & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
            ? ((IData)((vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                        >> 0x20U)) << (0x3fU & (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out)))
            : 0U);
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t 
        = (0x1ffffffffULL & ((((QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                           >> 0x1fU))))) 
                               << 0x20U) | (QData)((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out))) 
                             ^ (- (QData)((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag)))));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
        = (0x1ffffffffULL & ((((QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                           >> 0x3fU))))) 
                               << 0x20U) | (QData)((IData)(
                                                           (vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                                            >> 0x20U)))) 
                             + (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t 
                                + (QData)((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag)))));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[0U] 
        = (0xb00000000ULL | (QData)((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out)));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[9U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out)));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[0xaU] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out)));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[0U] 
        = (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out);
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[9U] 
        = (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out);
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[0xaU] 
        = (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out);
    vlSelf->__VdfgTmp_h39dd3dac__0 = (1U & (IData)(
                                                   (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                                    >> 0x20U)));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__carry_flag 
        = (1U & ((((IData)((vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                            >> 0x3fU)) | ((IData)((vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t 
                                                   >> 0x20U)) 
                                          | (IData)(
                                                    (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                                     >> 0x20U)))) 
                  & (((IData)((vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                               >> 0x3fU)) | ((~ (IData)(
                                                        (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t 
                                                         >> 0x20U))) 
                                             | (~ (IData)(
                                                          (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                                           >> 0x20U))))) 
                     & ((~ (IData)((vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellout__riscv_mux_ex_src_sel__out 
                                    >> 0x3fU))) | (
                                                   ((~ (IData)(
                                                               (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                                                >> 0x20U))) 
                                                    | (IData)(
                                                              (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t 
                                                               >> 0x20U))) 
                                                   & ((~ (IData)(
                                                                 (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__alu_b_t 
                                                                  >> 0x20U))) 
                                                      | (IData)(
                                                                (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__add_out 
                                                                 >> 0x20U))))))) 
                 ^ (IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__sub_flag)));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[7U] 
        = (0x400000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h39dd3dac__0)));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[7U] 
        = vlSelf->__VdfgTmp_h39dd3dac__0;
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__pair_list[6U] 
        = (0x500000000ULL | (QData)((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__carry_flag)));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list[6U] 
        = vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__carry_flag;
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
                       == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
           == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
                          == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
              == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
                          == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
              == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
                          == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                          [3U]))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
              == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
                          == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                          [4U]))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
              [4U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
              == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
              [4U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
                          == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                          [5U]))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
              [5U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
              == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
              [5U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
                          == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                          [6U]))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
              [6U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
              == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
              [6U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
                          == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                          [7U]))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
              [7U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
              == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
              [7U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
                          == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                          [8U]))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
              [8U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
              == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
              [8U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
                          == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                          [9U]))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
              [9U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
              == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
              [9U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
                          == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
                          [0xaU]))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__data_list
              [0xaU]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__idu_alu_opt) 
              == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__key_list
              [0xaU]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__hit)
            ? vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_ex_alu__DOT__riscv_mux_ex_data__DOT__i1__DOT__lut_out
            : 0U);
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[0U] 
        = (0xf00000000ULL | (QData)((IData)((1U & (~ vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data)))));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[1U] 
        = (0xe00000000ULL | (QData)((IData)((1U & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data))));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[2U] 
        = (0xd00000000ULL | (QData)((IData)((1U & (~ vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data)))));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[3U] 
        = (0xc00000000ULL | (QData)((IData)((1U & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data))));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[4U] 
        = (0x900000000ULL | (QData)((IData)((0U != vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data))));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__pair_list[5U] 
        = (0x800000000ULL | (QData)((IData)((1U & (~ (IData)(
                                                             (0U 
                                                              != vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data)))))));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[0U] 
        = (1U & (~ vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[1U] 
        = (1U & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data);
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[2U] 
        = (1U & (~ vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[3U] 
        = (1U & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data);
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[4U] 
        = (0U != vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data);
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list[5U] 
        = (1U & (~ (IData)((0U != vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data))));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
                       == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
           == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
                          == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
              == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
                          == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
              == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
                          == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
                          [3U]))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
              == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
                          == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
                          [4U]))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list
              [4U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
              == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
              [4U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
                          == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
                          [5U]))) & vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__data_list
              [5U]));
    vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT____Vcellinp__riscv_mux_ex_branch__key) 
              == vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__key_list
              [5U]));
    vlSelf->riscv32__DOT__exu_result = ((IData)(vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__hit)
                                         ? vlSelf->riscv32__DOT__riscv_exu_u0__DOT__riscv_mux_ex_branch__DOT__i1__DOT__lut_out
                                         : vlSelf->riscv32__DOT__riscv_exu_u0__DOT__alu_out_data);
    Vriscv32___024root____Vdpiimwrap_riscv32__DOT__riscv_ifu_u0__DOT__riscv_pmem_read_TOP(vlSelf->riscv32__DOT__exu_result, vlSelf->__Vtask_riscv32__DOT__riscv_lsu_u0__DOT__riscv_pmem_read__4__rdata, 
                                                                                (0U 
                                                                                != (IData)(vlSelf->riscv32__DOT__idu_lsu_opt)));
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata 
        = vlSelf->__Vtask_riscv32__DOT__riscv_lsu_u0__DOT__riscv_pmem_read__4__rdata;
    Vriscv32___024root____Vdpiimwrap_riscv32__DOT__riscv_lsu_u0__DOT__riscv_pmem_write_TOP(
                                                                                vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellout__riscv_dff_pc__dout[2U], 
                                                                                vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellout__riscv_dff_pc__dout[1U], 
                                                                                vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellout__riscv_dff_pc__dout[0U]);
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[0U] 
        = (0xd00000000ULL | (QData)((IData)((0xffffU 
                                             & vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata))));
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[1U] 
        = (0xc00000000ULL | (QData)((IData)((0xffU 
                                             & vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata))));
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[2U] 
        = (0xa00000000ULL | (QData)((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata)));
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[3U] 
        = (0x900000000ULL | (QData)((IData)((((- (IData)(
                                                         (1U 
                                                          & (vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata 
                                                             >> 0xfU)))) 
                                              << 0x10U) 
                                             | (0xffffU 
                                                & vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata)))));
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__pair_list[4U] 
        = (0x800000000ULL | (QData)((IData)((((- (IData)(
                                                         (1U 
                                                          & (vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata 
                                                             >> 7U)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata)))));
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[0U] 
        = (0xffffU & vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata);
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[1U] 
        = (0xffU & vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata);
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[2U] 
        = vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata;
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[3U] 
        = (((- (IData)((1U & (vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata 
                              >> 0xfU)))) << 0x10U) 
           | (0xffffU & vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata));
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list[4U] 
        = (((- (IData)((1U & (vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata 
                              >> 7U)))) << 8U) | (0xffU 
                                                  & vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__rdata));
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
                       == vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
           == vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
                          == vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
              == vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
                          == vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
              == vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
                          == vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list
                          [3U]))) & vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
              == vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out 
        = (vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
                          == vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list
                          [4U]))) & vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__data_list
              [4U]));
    vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT____Vcellinp__riscv_mux_ls_lsu_opt__key) 
              == vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__key_list
              [4U]));
    vlSelf->riscv32__DOT__lsu_result = ((IData)(vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__hit)
                                         ? vlSelf->riscv32__DOT__riscv_lsu_u0__DOT__riscv_mux_ls_lsu_opt__DOT__i1__DOT__lut_out
                                         : 0U);
}

void Vriscv32___024root___eval_nba(Vriscv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv32___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vriscv32___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

void Vriscv32___024root___eval_triggers__ico(Vriscv32___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv32___024root___dump_triggers__ico(Vriscv32___024root* vlSelf);
#endif  // VL_DEBUG
void Vriscv32___024root___eval_triggers__act(Vriscv32___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv32___024root___dump_triggers__act(Vriscv32___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv32___024root___dump_triggers__nba(Vriscv32___024root* vlSelf);
#endif  // VL_DEBUG

void Vriscv32___024root___eval(Vriscv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv32___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vriscv32___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vriscv32___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/jimple/Documents/ysyx/ysyx-workbench/npc/vsrc/riscv32.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vriscv32___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vriscv32___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vriscv32___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/jimple/Documents/ysyx/ysyx-workbench/npc/vsrc/riscv32.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vriscv32___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vriscv32___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/jimple/Documents/ysyx/ysyx-workbench/npc/vsrc/riscv32.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vriscv32___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vriscv32___024root___eval_debug_assertions(Vriscv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv32___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
}
#endif  // VL_DEBUG
