// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_top__Syms.h"


void Vtb_top___024root__trace_chg_0_sub_0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_chg_0\n"); );
    // Init
    Vtb_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_top___024root*>(voidSelf);
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_top___024root__trace_chg_0_sub_0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_chg_0_sub_0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgSData(oldp+0,(vlSelfRef.tb_top__DOT__dut__DOT__hcount),10);
        bufp->chgSData(oldp+1,(vlSelfRef.tb_top__DOT__dut__DOT__vcount),10);
        bufp->chgCData(oldp+2,((0x3fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                         >> 4U))),6);
        bufp->chgCData(oldp+3,((0x1fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                         >> 4U))),5);
        bufp->chgCData(oldp+4,(((0x10U & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                          ^ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount)))
                                 ? 4U : 1U)),3);
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity
                       [1U] | vlSelfRef.__Vm_traceActivity
                       [2U]) | vlSelfRef.__Vm_traceActivity
                      [3U])))) {
        bufp->chgCData(oldp+5,((0xfU & (- (IData)((1U 
                                                   & (((IData)(vlSelfRef.tb_top__DOT__dut__DOT__game_over)
                                                        ? 
                                                       ((0x10U 
                                                         & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                            ^ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount)))
                                                         ? 4U
                                                         : 1U)
                                                        : 
                                                       ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__video_on)
                                                         ? 
                                                        (((0x27U 
                                                           >= 
                                                           (0x3fU 
                                                            & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                               >> 4U))) 
                                                          & (IData)(
                                                                    (((0x1dU 
                                                                       >= 
                                                                       (0x1fU 
                                                                        & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                                                           >> 4U)))
                                                                       ? 
                                                                      vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ
                                                                      [
                                                                      (0x1fU 
                                                                       & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                                                          >> 4U))]
                                                                       : 0ULL) 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                                         >> 4U)))))
                                                          ? 4U
                                                          : 
                                                         ((((0x3fU 
                                                             & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                                >> 4U)) 
                                                            == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__apple_x)) 
                                                           & ((0x1fU 
                                                               & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                                                  >> 4U)) 
                                                              == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__apple_y)))
                                                           ? 6U
                                                           : 
                                                          ((((0x3fU 
                                                              & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                                 >> 4U)) 
                                                             == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_x)) 
                                                            & ((0x1fU 
                                                                & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                                                   >> 4U)) 
                                                               == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_y)))
                                                            ? 2U
                                                            : 1U)))
                                                         : 0U)) 
                                                      >> 2U)))))),4);
        bufp->chgCData(oldp+6,((0xfU & (- (IData)((1U 
                                                   & (((IData)(vlSelfRef.tb_top__DOT__dut__DOT__game_over)
                                                        ? 
                                                       ((0x10U 
                                                         & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                            ^ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount)))
                                                         ? 4U
                                                         : 1U)
                                                        : 
                                                       ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__video_on)
                                                         ? 
                                                        (((0x27U 
                                                           >= 
                                                           (0x3fU 
                                                            & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                               >> 4U))) 
                                                          & (IData)(
                                                                    (((0x1dU 
                                                                       >= 
                                                                       (0x1fU 
                                                                        & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                                                           >> 4U)))
                                                                       ? 
                                                                      vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ
                                                                      [
                                                                      (0x1fU 
                                                                       & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                                                          >> 4U))]
                                                                       : 0ULL) 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                                         >> 4U)))))
                                                          ? 4U
                                                          : 
                                                         ((((0x3fU 
                                                             & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                                >> 4U)) 
                                                            == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__apple_x)) 
                                                           & ((0x1fU 
                                                               & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                                                  >> 4U)) 
                                                              == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__apple_y)))
                                                           ? 6U
                                                           : 
                                                          ((((0x3fU 
                                                              & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                                 >> 4U)) 
                                                             == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_x)) 
                                                            & ((0x1fU 
                                                                & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                                                   >> 4U)) 
                                                               == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_y)))
                                                            ? 2U
                                                            : 1U)))
                                                         : 0U)) 
                                                      >> 1U)))))),4);
        bufp->chgCData(oldp+7,((0xfU & (- (IData)((1U 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__game_over)
                                                       ? 
                                                      ((0x10U 
                                                        & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                           ^ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount)))
                                                        ? 4U
                                                        : 1U)
                                                       : 
                                                      ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__video_on)
                                                        ? 
                                                       (((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                              >> 4U))) 
                                                         & (IData)(
                                                                   (((0x1dU 
                                                                      >= 
                                                                      (0x1fU 
                                                                       & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                                                          >> 4U)))
                                                                      ? 
                                                                     vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ
                                                                     [
                                                                     (0x1fU 
                                                                      & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                                                         >> 4U))]
                                                                      : 0ULL) 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                                        >> 4U)))))
                                                         ? 4U
                                                         : 
                                                        ((((0x3fU 
                                                            & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                               >> 4U)) 
                                                           == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__apple_x)) 
                                                          & ((0x1fU 
                                                              & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                                                 >> 4U)) 
                                                             == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__apple_y)))
                                                          ? 6U
                                                          : 
                                                         ((((0x3fU 
                                                             & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                                >> 4U)) 
                                                            == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_x)) 
                                                           & ((0x1fU 
                                                               & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                                                  >> 4U)) 
                                                              == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_y)))
                                                           ? 2U
                                                           : 1U)))
                                                        : 0U))))))),4);
        bufp->chgBit(oldp+8,((((0x3fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                         >> 4U)) == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_x)) 
                              & ((0x1fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                           >> 4U)) 
                                 == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_y)))));
        bufp->chgBit(oldp+9,((((0x3fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                         >> 4U)) == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__apple_x)) 
                              & ((0x1fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                           >> 4U)) 
                                 == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__apple_y)))));
        bufp->chgBit(oldp+10,(((0x27U >= (0x3fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                   >> 4U))) 
                               & (IData)((((0x1dU >= 
                                            (0x1fU 
                                             & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                                >> 4U)))
                                            ? vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ
                                           [(0x1fU 
                                             & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                                >> 4U))]
                                            : 0ULL) 
                                          >> (0x3fU 
                                              & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                 >> 4U)))))));
        bufp->chgCData(oldp+11,(((IData)(vlSelfRef.tb_top__DOT__dut__DOT__game_over)
                                  ? ((0x10U & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                               ^ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount)))
                                      ? 4U : 1U) : 
                                 ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__video_on)
                                   ? (((0x27U >= (0x3fU 
                                                  & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                     >> 4U))) 
                                       & (IData)(((
                                                   (0x1dU 
                                                    >= 
                                                    (0x1fU 
                                                     & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                                        >> 4U)))
                                                    ? 
                                                   vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ
                                                   [
                                                   (0x1fU 
                                                    & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                                       >> 4U))]
                                                    : 0ULL) 
                                                  >> 
                                                  (0x3fU 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                      >> 4U)))))
                                       ? 4U : ((((0x3fU 
                                                  & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                     >> 4U)) 
                                                 == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__apple_x)) 
                                                & ((0x1fU 
                                                    & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                                       >> 4U)) 
                                                   == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__apple_y)))
                                                ? 6U
                                                : (
                                                   (((0x3fU 
                                                      & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                                         >> 4U)) 
                                                     == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_x)) 
                                                    & ((0x1fU 
                                                        & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                                           >> 4U)) 
                                                       == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_y)))
                                                    ? 2U
                                                    : 1U)))
                                   : 0U))),3);
        bufp->chgQData(oldp+12,(((0x1dU >= (0x1fU & 
                                            ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                             >> 4U)))
                                  ? vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ
                                 [(0x1fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                            >> 4U))]
                                  : 0ULL)),40);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+14,(vlSelfRef.tb_top__DOT__hsync));
        bufp->chgBit(oldp+15,(vlSelfRef.tb_top__DOT__vsync));
        bufp->chgBit(oldp+16,(vlSelfRef.tb_top__DOT__dut__DOT__video_on));
        bufp->chgSData(oldp+17,(vlSelfRef.tb_top__DOT__dut__DOT__por),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+18,(vlSelfRef.tb_top__DOT__dut__DOT__game_tick));
        bufp->chgCData(oldp+19,(vlSelfRef.tb_top__DOT__dut__DOT__head_x),6);
        bufp->chgCData(oldp+20,(vlSelfRef.tb_top__DOT__dut__DOT__head_y),5);
        bufp->chgCData(oldp+21,(vlSelfRef.tb_top__DOT__dut__DOT__apple_x),6);
        bufp->chgCData(oldp+22,(vlSelfRef.tb_top__DOT__dut__DOT__apple_y),5);
        bufp->chgCData(oldp+23,(vlSelfRef.tb_top__DOT__dut__DOT__snake_len),8);
        bufp->chgBit(oldp+24,(vlSelfRef.tb_top__DOT__dut__DOT__game_over));
        bufp->chgCData(oldp+25,(vlSelfRef.tb_top__DOT__dut__DOT__dir_reg),2);
        bufp->chgBit(oldp+26,(vlSelfRef.tb_top__DOT__dut__DOT__gated_tick));
        bufp->chgSData(oldp+27,((((IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_x) 
                                  << 5U) | (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_y))),11);
        bufp->chgSData(oldp+28,(vlSelfRef.tb_top__DOT__dut__DOT__tail_xy),11);
        bufp->chgBit(oldp+29,((0U != (IData)(vlSelfRef.tb_top__DOT__dut__DOT__snake_len))));
        bufp->chgBit(oldp+30,(vlSelfRef.tb_top__DOT__dut__DOT__ate_pos));
        bufp->chgBit(oldp+31,(vlSelfRef.tb_top__DOT__dut__DOT__pop_w));
        bufp->chgCData(oldp+32,(vlSelfRef.tb_top__DOT__dut__DOT__next_x),6);
        bufp->chgCData(oldp+33,(vlSelfRef.tb_top__DOT__dut__DOT__next_y),5);
        bufp->chgBit(oldp+34,(((IData)(vlSelfRef.tb_top__DOT__dut__DOT__gated_tick) 
                               & ((~ ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__pop_w) 
                                      & ((0U != (IData)(vlSelfRef.tb_top__DOT__dut__DOT__snake_len)) 
                                         & (((IData)(vlSelfRef.tb_top__DOT__dut__DOT__next_x) 
                                             == (0x3fU 
                                                 & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__tail_xy) 
                                                    >> 5U))) 
                                            & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__next_y) 
                                               == (0x1fU 
                                                   & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__tail_xy))))))) 
                                  & ((0x27U >= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__next_x)) 
                                     & (IData)((((0x1dU 
                                                  >= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__next_y))
                                                  ? 
                                                 vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ
                                                 [vlSelfRef.tb_top__DOT__dut__DOT__next_y]
                                                  : 0ULL) 
                                                >> (IData)(vlSelfRef.tb_top__DOT__dut__DOT__next_x))))))));
        bufp->chgSData(oldp+35,(vlSelfRef.tb_top__DOT__dut__DOT__ag__DOT__lfsr),16);
        bufp->chgBit(oldp+36,((1U & VL_REDXOR_16((0xb400U 
                                                  & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__ag__DOT__lfsr))))));
        bufp->chgSData(oldp+37,(vlSelfRef.tb_top__DOT__dut__DOT__ag__DOT__lfsr_next),16);
        bufp->chgCData(oldp+38,((0x3fU & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__ag__DOT__lfsr))),6);
        bufp->chgCData(oldp+39,((0x1fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__ag__DOT__lfsr) 
                                          >> 6U))),5);
        bufp->chgCData(oldp+40,((0x3fU & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__ag__DOT__lfsr_next))),6);
        bufp->chgCData(oldp+41,((0x1fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__ag__DOT__lfsr) 
                                          >> 5U))),5);
        bufp->chgSData(oldp+42,(((0U != (IData)(vlSelfRef.tb_top__DOT__dut__DOT__snake_len))
                                  ? vlSelfRef.tb_top__DOT__dut__DOT__sb__DOT__mem
                                 [(0x7fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__snake_len) 
                                            - (IData)(1U)))]
                                  : 0U)),11);
        bufp->chgIData(oldp+43,(vlSelfRef.tb_top__DOT__dut__DOT__sb__DOT__i),32);
        bufp->chgQData(oldp+44,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[0]),40);
        bufp->chgQData(oldp+46,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[1]),40);
        bufp->chgQData(oldp+48,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[2]),40);
        bufp->chgQData(oldp+50,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[3]),40);
        bufp->chgQData(oldp+52,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[4]),40);
        bufp->chgQData(oldp+54,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[5]),40);
        bufp->chgQData(oldp+56,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[6]),40);
        bufp->chgQData(oldp+58,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[7]),40);
        bufp->chgQData(oldp+60,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[8]),40);
        bufp->chgQData(oldp+62,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[9]),40);
        bufp->chgQData(oldp+64,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[10]),40);
        bufp->chgQData(oldp+66,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[11]),40);
        bufp->chgQData(oldp+68,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[12]),40);
        bufp->chgQData(oldp+70,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[13]),40);
        bufp->chgQData(oldp+72,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[14]),40);
        bufp->chgQData(oldp+74,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[15]),40);
        bufp->chgQData(oldp+76,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[16]),40);
        bufp->chgQData(oldp+78,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[17]),40);
        bufp->chgQData(oldp+80,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[18]),40);
        bufp->chgQData(oldp+82,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[19]),40);
        bufp->chgQData(oldp+84,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[20]),40);
        bufp->chgQData(oldp+86,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[21]),40);
        bufp->chgQData(oldp+88,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[22]),40);
        bufp->chgQData(oldp+90,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[23]),40);
        bufp->chgQData(oldp+92,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[24]),40);
        bufp->chgQData(oldp+94,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[25]),40);
        bufp->chgQData(oldp+96,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[26]),40);
        bufp->chgQData(oldp+98,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[27]),40);
        bufp->chgQData(oldp+100,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[28]),40);
        bufp->chgQData(oldp+102,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[29]),40);
        bufp->chgCData(oldp+104,((0x3fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__tail_xy) 
                                           >> 5U))),6);
        bufp->chgCData(oldp+105,((0x1fU & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__tail_xy))),5);
        bufp->chgIData(oldp+106,(vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__r),32);
        bufp->chgQData(oldp+107,(((0x1dU >= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__next_y))
                                   ? vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ
                                  [vlSelfRef.tb_top__DOT__dut__DOT__next_y]
                                   : 0ULL)),40);
        bufp->chgBit(oldp+109,((((IData)(vlSelfRef.tb_top__DOT__dut__DOT__next_x) 
                                 == (0x3fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__tail_xy) 
                                              >> 5U))) 
                                & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__next_y) 
                                   == (0x1fU & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__tail_xy))))));
        bufp->chgBit(oldp+110,(((0x27U >= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__next_x)) 
                                & (IData)((((0x1dU 
                                             >= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__next_y))
                                             ? vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ
                                            [vlSelfRef.tb_top__DOT__dut__DOT__next_y]
                                             : 0ULL) 
                                           >> (IData)(vlSelfRef.tb_top__DOT__dut__DOT__next_x))))));
        bufp->chgIData(oldp+111,(vlSelfRef.tb_top__DOT__dut__DOT__td__DOT__counter),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgCData(oldp+112,(vlSelfRef.tb_top__DOT__dut__DOT__su),2);
        bufp->chgCData(oldp+113,(vlSelfRef.tb_top__DOT__dut__DOT__sd),2);
        bufp->chgCData(oldp+114,(vlSelfRef.tb_top__DOT__dut__DOT__sl),2);
        bufp->chgCData(oldp+115,(vlSelfRef.tb_top__DOT__dut__DOT__sr),2);
        bufp->chgBit(oldp+116,((1U & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__su) 
                                      >> 1U))));
        bufp->chgBit(oldp+117,((1U & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__sd) 
                                      >> 1U))));
        bufp->chgBit(oldp+118,((1U & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__sl) 
                                      >> 1U))));
        bufp->chgBit(oldp+119,((1U & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__sr) 
                                      >> 1U))));
    }
    bufp->chgBit(oldp+120,(vlSelfRef.tb_top__DOT__clk));
    bufp->chgBit(oldp+121,(vlSelfRef.tb_top__DOT__btnC));
    bufp->chgBit(oldp+122,(vlSelfRef.tb_top__DOT__btnU));
    bufp->chgBit(oldp+123,(vlSelfRef.tb_top__DOT__btnD));
    bufp->chgBit(oldp+124,(vlSelfRef.tb_top__DOT__btnL));
    bufp->chgBit(oldp+125,(vlSelfRef.tb_top__DOT__btnR));
    bufp->chgIData(oldp+126,(vlSelfRef.tb_top__DOT__tick_count),32);
    bufp->chgCData(oldp+127,(vlSelfRef.tb_top__DOT__dut__DOT__div4),2);
    bufp->chgBit(oldp+128,(vlSelfRef.tb_top__DOT__dut__DOT__pix_clk));
    bufp->chgBit(oldp+129,(vlSelfRef.tb_top__DOT__dut__DOT__reset_pix));
}

void Vtb_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_cleanup\n"); );
    // Init
    Vtb_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_top___024root*>(voidSelf);
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
