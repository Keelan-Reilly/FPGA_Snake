// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"
#include "Vtb_top__Syms.h"
#include "Vtb_top___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__0(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x5f746f70U;
    __Vtemp_1[2U] = 0x6d2f7462U;
    __Vtemp_1[3U] = 0x7369U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "tb/tb_top.v", 
                                         37);
    vlSelfRef.tb_top__DOT__btnC = 0U;
}

VL_INLINE_OPT VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__6(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial__TOP__Vtiming__6\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb/tb_top.v", 
                                             21);
        vlSelfRef.tb_top__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__act(Vtb_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_top___024root___eval_triggers__act(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_triggers__act\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_top__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__pix_clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__dut__DOT__pix_clk__0))));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__reset_pix) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__dut__DOT__reset_pix__0))));
    vlSelfRef.__VactTriggered.setBit(3U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.setBit(4U, ((~ (IData)(vlSelfRef.tb_top__DOT__btnC)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__btnC__0)));
    vlSelfRef.__VactTriggered.setBit(5U, ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__game_tick) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__dut__DOT__game_tick__0))));
    vlSelfRef.__VactTriggered.setBit(6U, ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__game_over) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__dut__DOT__game_over__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__clk__0 
        = vlSelfRef.tb_top__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__dut__DOT__pix_clk__0 
        = vlSelfRef.tb_top__DOT__dut__DOT__pix_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__dut__DOT__reset_pix__0 
        = vlSelfRef.tb_top__DOT__dut__DOT__reset_pix;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__btnC__0 
        = vlSelfRef.tb_top__DOT__btnC;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__dut__DOT__game_tick__0 
        = vlSelfRef.tb_top__DOT__dut__DOT__game_tick;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__dut__DOT__game_over__0 
        = vlSelfRef.tb_top__DOT__dut__DOT__game_over;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}
