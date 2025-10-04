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
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+5,(vlSelfRef.tb_top__DOT__hsync));
        bufp->chgBit(oldp+6,(vlSelfRef.tb_top__DOT__vsync));
        bufp->chgBit(oldp+7,(vlSelfRef.tb_top__DOT__dut__DOT__video_on));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+8,(vlSelfRef.tb_top__DOT__dut__DOT__game_tick));
        bufp->chgCData(oldp+9,(vlSelfRef.tb_top__DOT__dut__DOT__head_x),6);
        bufp->chgCData(oldp+10,(vlSelfRef.tb_top__DOT__dut__DOT__head_y),5);
        bufp->chgCData(oldp+11,(vlSelfRef.tb_top__DOT__dut__DOT__apple_x),6);
        bufp->chgCData(oldp+12,(vlSelfRef.tb_top__DOT__dut__DOT__apple_y),5);
        bufp->chgCData(oldp+13,(vlSelfRef.tb_top__DOT__dut__DOT__snake_len),8);
        bufp->chgBit(oldp+14,(vlSelfRef.tb_top__DOT__dut__DOT__game_over));
        bufp->chgCData(oldp+15,(vlSelfRef.tb_top__DOT__dut__DOT__dir_reg),2);
        bufp->chgBit(oldp+16,(vlSelfRef.tb_top__DOT__dut__DOT__gated_tick));
        bufp->chgSData(oldp+17,((((IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_x) 
                                  << 5U) | (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_y))),11);
        bufp->chgBit(oldp+18,(vlSelfRef.tb_top__DOT__dut__DOT__ate_pos));
        bufp->chgSData(oldp+19,(vlSelfRef.tb_top__DOT__dut__DOT__ag__DOT__lfsr),16);
        bufp->chgBit(oldp+20,((1U & VL_REDXOR_16((0xb400U 
                                                  & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__ag__DOT__lfsr))))));
        bufp->chgSData(oldp+21,(vlSelfRef.tb_top__DOT__dut__DOT__ag__DOT__lfsr_next),16);
        bufp->chgCData(oldp+22,((0x3fU & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__ag__DOT__lfsr))),6);
        bufp->chgCData(oldp+23,((0x1fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__ag__DOT__lfsr) 
                                          >> 6U))),5);
        bufp->chgCData(oldp+24,((0x3fU & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__ag__DOT__lfsr_next))),6);
        bufp->chgCData(oldp+25,((0x1fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__ag__DOT__lfsr) 
                                          >> 5U))),5);
        bufp->chgBit(oldp+26,(vlSelfRef.tb_top__DOT__dut__DOT____Vcellinp__sb__pop));
        bufp->chgSData(oldp+27,(vlSelfRef.tb_top__DOT__dut__DOT__sb__DOT__data_out),11);
        bufp->chgIData(oldp+28,(vlSelfRef.tb_top__DOT__dut__DOT__sb__DOT__i),32);
        bufp->chgIData(oldp+29,(vlSelfRef.tb_top__DOT__dut__DOT__td__DOT__counter),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+30,(vlSelfRef.tb_top__DOT__dut__DOT__reset_pix));
        bufp->chgCData(oldp+31,(vlSelfRef.tb_top__DOT__dut__DOT__su),2);
        bufp->chgCData(oldp+32,(vlSelfRef.tb_top__DOT__dut__DOT__sd),2);
        bufp->chgCData(oldp+33,(vlSelfRef.tb_top__DOT__dut__DOT__sl),2);
        bufp->chgCData(oldp+34,(vlSelfRef.tb_top__DOT__dut__DOT__sr),2);
        bufp->chgBit(oldp+35,((1U & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__su) 
                                     >> 1U))));
        bufp->chgBit(oldp+36,((1U & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__sd) 
                                     >> 1U))));
        bufp->chgBit(oldp+37,((1U & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__sl) 
                                     >> 1U))));
        bufp->chgBit(oldp+38,((1U & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__sr) 
                                     >> 1U))));
    }
    bufp->chgBit(oldp+39,(vlSelfRef.tb_top__DOT__clk));
    bufp->chgBit(oldp+40,(vlSelfRef.tb_top__DOT__btnC));
    bufp->chgBit(oldp+41,(vlSelfRef.tb_top__DOT__btnU));
    bufp->chgBit(oldp+42,(vlSelfRef.tb_top__DOT__btnD));
    bufp->chgBit(oldp+43,(vlSelfRef.tb_top__DOT__btnL));
    bufp->chgBit(oldp+44,(vlSelfRef.tb_top__DOT__btnR));
    bufp->chgCData(oldp+45,((0xfU & (- (IData)((1U 
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
                                                        : 1U))
                                                      : 0U)) 
                                                   >> 2U)))))),4);
    bufp->chgCData(oldp+46,((0xfU & (- (IData)((1U 
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
                                                        : 1U))
                                                      : 0U)) 
                                                   >> 1U)))))),4);
    bufp->chgCData(oldp+47,((0xfU & (- (IData)((1U 
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
                                                       : 1U))
                                                     : 0U))))))),4);
    bufp->chgIData(oldp+48,(vlSelfRef.tb_top__DOT__tick_count),32);
    bufp->chgCData(oldp+49,(vlSelfRef.tb_top__DOT__dut__DOT__div4),2);
    bufp->chgBit(oldp+50,(vlSelfRef.tb_top__DOT__dut__DOT__pix_clk));
    bufp->chgBit(oldp+51,((((0x3fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                      >> 4U)) == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_x)) 
                           & ((0x1fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                        >> 4U)) == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_y)))));
    bufp->chgBit(oldp+52,((((0x3fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                      >> 4U)) == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__apple_x)) 
                           & ((0x1fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                        >> 4U)) == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__apple_y)))));
    bufp->chgCData(oldp+53,(((IData)(vlSelfRef.tb_top__DOT__dut__DOT__game_over)
                              ? ((0x10U & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                           ^ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount)))
                                  ? 4U : 1U) : ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__video_on)
                                                 ? 
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
                                                   : 1U))
                                                 : 0U))),3);
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
