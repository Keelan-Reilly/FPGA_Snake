// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"
#include "Vtb_top___024root.h"

VL_ATTR_COLD void Vtb_top___024root___eval_initial__TOP(Vtb_top___024root* vlSelf);
VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__0(Vtb_top___024root* vlSelf);
VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__1(Vtb_top___024root* vlSelf);
VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__2(Vtb_top___024root* vlSelf);
VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__3(Vtb_top___024root* vlSelf);
VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__4(Vtb_top___024root* vlSelf);
VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__5(Vtb_top___024root* vlSelf);
VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__6(Vtb_top___024root* vlSelf);

void Vtb_top___024root___eval_initial(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_top___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_top___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_top___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_top___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vtb_top___024root___eval_initial__TOP__Vtiming__3(vlSelf);
    Vtb_top___024root___eval_initial__TOP__Vtiming__4(vlSelf);
    Vtb_top___024root___eval_initial__TOP__Vtiming__5(vlSelf);
    Vtb_top___024root___eval_initial__TOP__Vtiming__6(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__1(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VtrigSched_hb0d3b65d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_top.btnC)", 
                                                         "tb/tb_top.v", 
                                                         48);
    co_await vlSelfRef.__VtrigSched_h94f5b7f7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.dut.game_tick)", 
                                                         "tb/tb_top.v", 
                                                         49);
    while ((((IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_x) 
             != (IData)(vlSelfRef.tb_top__DOT__dut__DOT__apple_x)) 
            | ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_y) 
               != (IData)(vlSelfRef.tb_top__DOT__dut__DOT__apple_y)))) {
        if (((IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_y) 
             < (IData)(vlSelfRef.tb_top__DOT__dut__DOT__apple_y))) {
            vlSelfRef.tb_top__DOT__btnU = 0U;
            vlSelfRef.tb_top__DOT__btnD = 1U;
            vlSelfRef.tb_top__DOT__btnL = 0U;
            vlSelfRef.tb_top__DOT__btnR = 0U;
            co_await vlSelfRef.__VtrigSched_h94f5b7f7__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_top.dut.game_tick)", 
                                                                 "tb/tb_top.v", 
                                                                 44);
            vlSelfRef.tb_top__DOT__btnD = 0U;
        } else if (((IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_y) 
                    > (IData)(vlSelfRef.tb_top__DOT__dut__DOT__apple_y))) {
            vlSelfRef.tb_top__DOT__btnU = 1U;
            vlSelfRef.tb_top__DOT__btnD = 0U;
            vlSelfRef.tb_top__DOT__btnL = 0U;
            vlSelfRef.tb_top__DOT__btnR = 0U;
            co_await vlSelfRef.__VtrigSched_h94f5b7f7__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_top.dut.game_tick)", 
                                                                 "tb/tb_top.v", 
                                                                 43);
            vlSelfRef.tb_top__DOT__btnU = 0U;
        } else if (((IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_x) 
                    < (IData)(vlSelfRef.tb_top__DOT__dut__DOT__apple_x))) {
            vlSelfRef.tb_top__DOT__btnU = 0U;
            vlSelfRef.tb_top__DOT__btnD = 0U;
            vlSelfRef.tb_top__DOT__btnL = 0U;
            vlSelfRef.tb_top__DOT__btnR = 1U;
            co_await vlSelfRef.__VtrigSched_h94f5b7f7__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_top.dut.game_tick)", 
                                                                 "tb/tb_top.v", 
                                                                 41);
            vlSelfRef.tb_top__DOT__btnR = 0U;
        } else if (((IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_x) 
                    > (IData)(vlSelfRef.tb_top__DOT__dut__DOT__apple_x))) {
            vlSelfRef.tb_top__DOT__btnU = 0U;
            vlSelfRef.tb_top__DOT__btnD = 0U;
            vlSelfRef.tb_top__DOT__btnL = 1U;
            vlSelfRef.tb_top__DOT__btnR = 0U;
            co_await vlSelfRef.__VtrigSched_h94f5b7f7__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_top.dut.game_tick)", 
                                                                 "tb/tb_top.v", 
                                                                 42);
            vlSelfRef.tb_top__DOT__btnL = 0U;
        }
    }
    co_await vlSelfRef.__VtrigSched_h94f5b7f7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.dut.game_tick)", 
                                                         "tb/tb_top.v", 
                                                         60);
}

VL_INLINE_OPT VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__2(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("TICK | head (x,y) | apple (x,y) | len | vid | over\n",0);
    while (1U) {
        co_await vlSelfRef.__VtrigSched_h94f5b7f7__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top.dut.game_tick)", 
                                                             "tb/tb_top.v", 
                                                             67);
        vlSelfRef.tb_top__DOT__tick_count = ((IData)(1U) 
                                             + vlSelfRef.tb_top__DOT__tick_count);
        VL_WRITEF_NX("%4d |   %2#,%2#   |    %2#,%2#    |  %2# |  %b  |  %b\n",0,
                     32,vlSelfRef.tb_top__DOT__tick_count,
                     6,(IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_x),
                     5,vlSelfRef.tb_top__DOT__dut__DOT__head_y,
                     6,(IData)(vlSelfRef.tb_top__DOT__dut__DOT__apple_x),
                     5,vlSelfRef.tb_top__DOT__dut__DOT__apple_y,
                     8,(IData)(vlSelfRef.tb_top__DOT__dut__DOT__snake_len),
                     1,vlSelfRef.tb_top__DOT__dut__DOT__video_on,
                     1,(IData)(vlSelfRef.tb_top__DOT__dut__DOT__game_over));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__3(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial__TOP__Vtiming__3\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_top__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_top__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    tb_top__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0xc8U;
    while (VL_LTS_III(32, 0U, tb_top__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h94f5b7f7__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top.dut.game_tick)", 
                                                             "tb/tb_top.v", 
                                                             77);
        tb_top__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_top__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    VL_WRITEF_NX("** Reached 200 ticks, stopping **\n",0);
    VL_FINISH_MT("tb/tb_top.v", 79, "");
}

VL_INLINE_OPT VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__4(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial__TOP__Vtiming__4\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_top__DOT__unnamedblk1_2__DOT____Vrepeat1;
    tb_top__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    // Body
    tb_top__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x1312d00U;
    while (VL_LTS_III(32, 0U, tb_top__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h50ca02e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_top.clk)", 
                                                             "tb/tb_top.v", 
                                                             84);
        tb_top__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (tb_top__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    VL_WRITEF_NX("** TIMEOUT **\n",0);
    VL_FINISH_MT("tb/tb_top.v", 86, "");
}

VL_INLINE_OPT VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__5(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial__TOP__Vtiming__5\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VtrigSched_haf1121db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_top.dut.game_over)", 
                                                         "tb/tb_top.v", 
                                                         91);
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/tb_top.v", 
                                         92);
    VL_WRITEF_NX("** GAME OVER at tick %0d, time %t **\n",0,
                 32,vlSelfRef.tb_top__DOT__tick_count,
                 64,VL_TIME_UNITED_Q(1000),-9);
    VL_FINISH_MT("tb/tb_top.v", 94, "");
}

void Vtb_top___024root___act_sequent__TOP__0(Vtb_top___024root* vlSelf);

void Vtb_top___024root___eval_act(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_act\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_top___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_top___024root___act_sequent__TOP__0(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___act_sequent__TOP__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__dut__DOT__reset_pix = (1U 
                                                  & ((~ 
                                                      (0xffffU 
                                                       == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__por))) 
                                                     | (IData)(vlSelfRef.tb_top__DOT__btnC)));
}

void Vtb_top___024root___nba_sequent__TOP__0(Vtb_top___024root* vlSelf);
void Vtb_top___024root___nba_sequent__TOP__1(Vtb_top___024root* vlSelf);
void Vtb_top___024root___nba_sequent__TOP__2(Vtb_top___024root* vlSelf);
void Vtb_top___024root___nba_sequent__TOP__3(Vtb_top___024root* vlSelf);

void Vtb_top___024root___eval_nba(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_nba\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_top___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_top___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_top___024root___nba_sequent__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((0xaULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_top___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_top___024root___nba_sequent__TOP__0(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*9:0*/ __Vdly__tb_top__DOT__dut__DOT__vcount;
    __Vdly__tb_top__DOT__dut__DOT__vcount = 0;
    SData/*9:0*/ __Vdly__tb_top__DOT__dut__DOT__hcount;
    __Vdly__tb_top__DOT__dut__DOT__hcount = 0;
    // Body
    vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__su = vlSelfRef.tb_top__DOT__dut__DOT__su;
    vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__sd = vlSelfRef.tb_top__DOT__dut__DOT__sd;
    vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__sl = vlSelfRef.tb_top__DOT__dut__DOT__sl;
    vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__sr = vlSelfRef.tb_top__DOT__dut__DOT__sr;
    __Vdly__tb_top__DOT__dut__DOT__vcount = vlSelfRef.tb_top__DOT__dut__DOT__vcount;
    __Vdly__tb_top__DOT__dut__DOT__hcount = vlSelfRef.tb_top__DOT__dut__DOT__hcount;
    vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__su = (
                                                   (2U 
                                                    & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__su) 
                                                       << 1U)) 
                                                   | (IData)(vlSelfRef.tb_top__DOT__btnU));
    vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__sd = (
                                                   (2U 
                                                    & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__sd) 
                                                       << 1U)) 
                                                   | (IData)(vlSelfRef.tb_top__DOT__btnD));
    vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__sl = (
                                                   (2U 
                                                    & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__sl) 
                                                       << 1U)) 
                                                   | (IData)(vlSelfRef.tb_top__DOT__btnL));
    vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__sr = (
                                                   (2U 
                                                    & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__sr) 
                                                       << 1U)) 
                                                   | (IData)(vlSelfRef.tb_top__DOT__btnR));
    if ((1U & (~ (0xffffU == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__por))))) {
        vlSelfRef.tb_top__DOT__dut__DOT__por = (0xffffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.tb_top__DOT__dut__DOT__por)));
    }
    if ((0x31fU == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount))) {
        __Vdly__tb_top__DOT__dut__DOT__vcount = ((0x20cU 
                                                  == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount))
                                                  ? 0U
                                                  : 
                                                 (0x3ffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount))));
        __Vdly__tb_top__DOT__dut__DOT__hcount = 0U;
    } else {
        __Vdly__tb_top__DOT__dut__DOT__hcount = (0x3ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount)));
    }
    vlSelfRef.tb_top__DOT__hsync = (1U & (~ ((0x290U 
                                              <= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount)) 
                                             & (0x2f0U 
                                                > (IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount)))));
    vlSelfRef.tb_top__DOT__vsync = (1U & (~ ((0x1eaU 
                                              <= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount)) 
                                             & (0x1ecU 
                                                > (IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount)))));
    vlSelfRef.tb_top__DOT__dut__DOT__video_on = ((0x280U 
                                                  > (IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount)) 
                                                 & (0x1e0U 
                                                    > (IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount)));
    vlSelfRef.tb_top__DOT__dut__DOT__vcount = __Vdly__tb_top__DOT__dut__DOT__vcount;
    vlSelfRef.tb_top__DOT__dut__DOT__hcount = __Vdly__tb_top__DOT__dut__DOT__hcount;
}

VL_INLINE_OPT void Vtb_top___024root___nba_sequent__TOP__1(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__1\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__dut__DOT__div4 = (3U & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.tb_top__DOT__dut__DOT__div4)));
    vlSelfRef.tb_top__DOT__dut__DOT__pix_clk = (1U 
                                                & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__div4) 
                                                   >> 1U));
}

extern const VlUnpacked<CData/*0:0*/, 128> Vtb_top__ConstPool__TABLE_hd8c0c1b5_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtb_top__ConstPool__TABLE_h7305bb2a_0;

VL_INLINE_OPT void Vtb_top___024root___nba_sequent__TOP__2(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__2\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vfunc_tb_top__DOT__dut__DOT__ag__DOT__clamp_x__4__Vfuncout;
    __Vfunc_tb_top__DOT__dut__DOT__ag__DOT__clamp_x__4__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_tb_top__DOT__dut__DOT__ag__DOT__clamp_x__4__x;
    __Vfunc_tb_top__DOT__dut__DOT__ag__DOT__clamp_x__4__x = 0;
    CData/*4:0*/ __Vfunc_tb_top__DOT__dut__DOT__ag__DOT__clamp_y__5__Vfuncout;
    __Vfunc_tb_top__DOT__dut__DOT__ag__DOT__clamp_y__5__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top__DOT__dut__DOT__ag__DOT__clamp_y__5__y;
    __Vfunc_tb_top__DOT__dut__DOT__ag__DOT__clamp_y__5__y = 0;
    CData/*5:0*/ __Vfunc_tb_top__DOT__dut__DOT__ag__DOT__clamp_x__6__Vfuncout;
    __Vfunc_tb_top__DOT__dut__DOT__ag__DOT__clamp_x__6__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_tb_top__DOT__dut__DOT__ag__DOT__clamp_x__6__x;
    __Vfunc_tb_top__DOT__dut__DOT__ag__DOT__clamp_x__6__x = 0;
    CData/*4:0*/ __Vfunc_tb_top__DOT__dut__DOT__ag__DOT__clamp_y__7__Vfuncout;
    __Vfunc_tb_top__DOT__dut__DOT__ag__DOT__clamp_y__7__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_top__DOT__dut__DOT__ag__DOT__clamp_y__7__y;
    __Vfunc_tb_top__DOT__dut__DOT__ag__DOT__clamp_y__7__y = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*1:0*/ __Vdly__tb_top__DOT__dut__DOT__dir_reg;
    __Vdly__tb_top__DOT__dut__DOT__dir_reg = 0;
    IData/*31:0*/ __Vdly__tb_top__DOT__dut__DOT__td__DOT__counter;
    __Vdly__tb_top__DOT__dut__DOT__td__DOT__counter = 0;
    CData/*4:0*/ __Vdly__tb_top__DOT__dut__DOT__head_y;
    __Vdly__tb_top__DOT__dut__DOT__head_y = 0;
    CData/*5:0*/ __Vdly__tb_top__DOT__dut__DOT__head_x;
    __Vdly__tb_top__DOT__dut__DOT__head_x = 0;
    CData/*7:0*/ __Vdly__tb_top__DOT__dut__DOT__snake_len;
    __Vdly__tb_top__DOT__dut__DOT__snake_len = 0;
    SData/*10:0*/ __Vdly__tb_top__DOT__dut__DOT__tail_xy;
    __Vdly__tb_top__DOT__dut__DOT__tail_xy = 0;
    SData/*10:0*/ __VdlyVal__tb_top__DOT__dut__DOT__sb__DOT__mem__v0;
    __VdlyVal__tb_top__DOT__dut__DOT__sb__DOT__mem__v0 = 0;
    CData/*6:0*/ __VdlyDim0__tb_top__DOT__dut__DOT__sb__DOT__mem__v0;
    __VdlyDim0__tb_top__DOT__dut__DOT__sb__DOT__mem__v0 = 0;
    SData/*10:0*/ __VdlyVal__tb_top__DOT__dut__DOT__sb__DOT__mem__v1;
    __VdlyVal__tb_top__DOT__dut__DOT__sb__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__dut__DOT__sm__DOT__occ__v0;
    __VdlySet__tb_top__DOT__dut__DOT__sm__DOT__occ__v0 = 0;
    CData/*0:0*/ __VdlyVal__tb_top__DOT__dut__DOT__sm__DOT__occ__v30;
    __VdlyVal__tb_top__DOT__dut__DOT__sm__DOT__occ__v30 = 0;
    CData/*5:0*/ __VdlyLsb__tb_top__DOT__dut__DOT__sm__DOT__occ__v30;
    __VdlyLsb__tb_top__DOT__dut__DOT__sm__DOT__occ__v30 = 0;
    CData/*4:0*/ __VdlyDim0__tb_top__DOT__dut__DOT__sm__DOT__occ__v30;
    __VdlyDim0__tb_top__DOT__dut__DOT__sm__DOT__occ__v30 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__dut__DOT__sm__DOT__occ__v30;
    __VdlySet__tb_top__DOT__dut__DOT__sm__DOT__occ__v30 = 0;
    CData/*0:0*/ __VdlyVal__tb_top__DOT__dut__DOT__sm__DOT__occ__v31;
    __VdlyVal__tb_top__DOT__dut__DOT__sm__DOT__occ__v31 = 0;
    CData/*5:0*/ __VdlyLsb__tb_top__DOT__dut__DOT__sm__DOT__occ__v31;
    __VdlyLsb__tb_top__DOT__dut__DOT__sm__DOT__occ__v31 = 0;
    CData/*4:0*/ __VdlyDim0__tb_top__DOT__dut__DOT__sm__DOT__occ__v31;
    __VdlyDim0__tb_top__DOT__dut__DOT__sm__DOT__occ__v31 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__dut__DOT__sm__DOT__occ__v31;
    __VdlySet__tb_top__DOT__dut__DOT__sm__DOT__occ__v31 = 0;
    // Body
    __Vdly__tb_top__DOT__dut__DOT__td__DOT__counter 
        = vlSelfRef.tb_top__DOT__dut__DOT__td__DOT__counter;
    __Vdly__tb_top__DOT__dut__DOT__dir_reg = vlSelfRef.tb_top__DOT__dut__DOT__dir_reg;
    __Vdly__tb_top__DOT__dut__DOT__head_y = vlSelfRef.tb_top__DOT__dut__DOT__head_y;
    __Vdly__tb_top__DOT__dut__DOT__head_x = vlSelfRef.tb_top__DOT__dut__DOT__head_x;
    __Vdly__tb_top__DOT__dut__DOT__tail_xy = vlSelfRef.tb_top__DOT__dut__DOT__tail_xy;
    __Vdly__tb_top__DOT__dut__DOT__snake_len = vlSelfRef.tb_top__DOT__dut__DOT__snake_len;
    __VdlySet__tb_top__DOT__dut__DOT__sm__DOT__occ__v0 = 0U;
    __VdlySet__tb_top__DOT__dut__DOT__sm__DOT__occ__v30 = 0U;
    __VdlySet__tb_top__DOT__dut__DOT__sm__DOT__occ__v31 = 0U;
    __Vtableidx1 = (((0x40U & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__sr) 
                               << 5U)) | ((0x20U & 
                                           ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__sl) 
                                            << 4U)) 
                                          | (0x10U 
                                             & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__sd) 
                                                << 3U)))) 
                    | (((IData)(vlSelfRef.tb_top__DOT__dut__DOT__dir_reg) 
                        << 2U) | ((2U & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__su)) 
                                  | (IData)(vlSelfRef.tb_top__DOT__dut__DOT__reset_pix))));
    if (Vtb_top__ConstPool__TABLE_hd8c0c1b5_0[__Vtableidx1]) {
        __Vdly__tb_top__DOT__dut__DOT__dir_reg = Vtb_top__ConstPool__TABLE_h7305bb2a_0
            [__Vtableidx1];
    }
    if (vlSelfRef.tb_top__DOT__dut__DOT__reset_pix) {
        vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__r = 0x1eU;
        __Vdly__tb_top__DOT__dut__DOT__head_y = 0xfU;
        __Vdly__tb_top__DOT__dut__DOT__head_x = 0x14U;
    } else if (vlSelfRef.tb_top__DOT__dut__DOT__gated_tick) {
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__dir_reg))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__dir_reg)))) {
                __Vdly__tb_top__DOT__dut__DOT__head_y 
                    = ((0x1dU == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_y))
                        ? 0U : (0x1fU & ((IData)(1U) 
                                         + (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_y))));
            }
            if ((1U & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__dir_reg))) {
                __Vdly__tb_top__DOT__dut__DOT__head_x 
                    = ((0U == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_x))
                        ? 0x27U : (0x3fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_x) 
                                            - (IData)(1U))));
            }
        } else {
            if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__dir_reg)))) {
                __Vdly__tb_top__DOT__dut__DOT__head_y 
                    = ((0U == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_y))
                        ? 0x1dU : (0x1fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_y) 
                                            - (IData)(1U))));
            }
            if ((1U & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__dir_reg))) {
                __Vdly__tb_top__DOT__dut__DOT__head_x 
                    = ((0x27U == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_x))
                        ? 0U : (0x3fU & ((IData)(1U) 
                                         + (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_x))));
            }
        }
    }
    if (vlSelfRef.tb_top__DOT__dut__DOT__reset_pix) {
        __Vdly__tb_top__DOT__dut__DOT__snake_len = 0U;
        __Vdly__tb_top__DOT__dut__DOT__tail_xy = 0U;
    } else {
        __Vdly__tb_top__DOT__dut__DOT__tail_xy = vlSelfRef.tb_top__DOT__dut__DOT__tail_xy;
        if (vlSelfRef.tb_top__DOT__dut__DOT__gated_tick) {
            vlSelfRef.tb_top__DOT__dut__DOT__sb__DOT__i = 0x7fU;
            while (VL_LTS_III(32, 0U, vlSelfRef.tb_top__DOT__dut__DOT__sb__DOT__i)) {
                if ((vlSelfRef.tb_top__DOT__dut__DOT__sb__DOT__i 
                     <= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__snake_len))) {
                    __VdlyVal__tb_top__DOT__dut__DOT__sb__DOT__mem__v0 
                        = vlSelfRef.tb_top__DOT__dut__DOT__sb__DOT__mem
                        [(0x7fU & (vlSelfRef.tb_top__DOT__dut__DOT__sb__DOT__i 
                                   - (IData)(1U)))];
                    __VdlyDim0__tb_top__DOT__dut__DOT__sb__DOT__mem__v0 
                        = (0x7fU & vlSelfRef.tb_top__DOT__dut__DOT__sb__DOT__i);
                    vlSelfRef.__VdlyCommitQueuetb_top__DOT__dut__DOT__sb__DOT__mem.enqueue(__VdlyVal__tb_top__DOT__dut__DOT__sb__DOT__mem__v0, (IData)(__VdlyDim0__tb_top__DOT__dut__DOT__sb__DOT__mem__v0));
                }
                vlSelfRef.tb_top__DOT__dut__DOT__sb__DOT__i 
                    = (vlSelfRef.tb_top__DOT__dut__DOT__sb__DOT__i 
                       - (IData)(1U));
            }
            __VdlyVal__tb_top__DOT__dut__DOT__sb__DOT__mem__v1 
                = (((IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_x) 
                    << 5U) | (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_y));
            vlSelfRef.__VdlyCommitQueuetb_top__DOT__dut__DOT__sb__DOT__mem.enqueue(__VdlyVal__tb_top__DOT__dut__DOT__sb__DOT__mem__v1, 0U);
        }
        if (((IData)(vlSelfRef.tb_top__DOT__dut__DOT__pop_w) 
             & (0U != (IData)(vlSelfRef.tb_top__DOT__dut__DOT__snake_len)))) {
            __Vdly__tb_top__DOT__dut__DOT__tail_xy 
                = vlSelfRef.tb_top__DOT__dut__DOT__sb__DOT__tail_val;
        }
        __Vdly__tb_top__DOT__dut__DOT__snake_len = 
            (0xffU & ((2U == (((IData)(vlSelfRef.tb_top__DOT__dut__DOT__gated_tick) 
                               << 1U) | (IData)(vlSelfRef.tb_top__DOT__dut__DOT__pop_w)))
                       ? ((0x80U > (IData)(vlSelfRef.tb_top__DOT__dut__DOT__snake_len))
                           ? ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__dut__DOT__snake_len))
                           : (IData)(vlSelfRef.tb_top__DOT__dut__DOT__snake_len))
                       : ((1U == (((IData)(vlSelfRef.tb_top__DOT__dut__DOT__gated_tick) 
                                   << 1U) | (IData)(vlSelfRef.tb_top__DOT__dut__DOT__pop_w)))
                           ? ((0U != (IData)(vlSelfRef.tb_top__DOT__dut__DOT__snake_len))
                               ? ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__snake_len) 
                                  - (IData)(1U)) : 0U)
                           : (IData)(vlSelfRef.tb_top__DOT__dut__DOT__snake_len))));
    }
    vlSelfRef.tb_top__DOT__dut__DOT__dir_reg = __Vdly__tb_top__DOT__dut__DOT__dir_reg;
    if (vlSelfRef.tb_top__DOT__dut__DOT__reset_pix) {
        __VdlySet__tb_top__DOT__dut__DOT__sm__DOT__occ__v0 = 1U;
        vlSelfRef.tb_top__DOT__dut__DOT__game_over = 0U;
        __Vfunc_tb_top__DOT__dut__DOT__ag__DOT__clamp_y__5__y 
            = (0x1fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__ag__DOT__lfsr) 
                        >> 6U));
        __Vfunc_tb_top__DOT__dut__DOT__ag__DOT__clamp_y__5__Vfuncout 
            = (0x1fU & ((0x1eU > (IData)(__Vfunc_tb_top__DOT__dut__DOT__ag__DOT__clamp_y__5__y))
                         ? (IData)(__Vfunc_tb_top__DOT__dut__DOT__ag__DOT__clamp_y__5__y)
                         : ((IData)(__Vfunc_tb_top__DOT__dut__DOT__ag__DOT__clamp_y__5__y) 
                            - (IData)(0x1eU))));
        vlSelfRef.tb_top__DOT__dut__DOT__apple_y = __Vfunc_tb_top__DOT__dut__DOT__ag__DOT__clamp_y__5__Vfuncout;
        __Vfunc_tb_top__DOT__dut__DOT__ag__DOT__clamp_x__4__x 
            = (0x3fU & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__ag__DOT__lfsr));
        __Vfunc_tb_top__DOT__dut__DOT__ag__DOT__clamp_x__4__Vfuncout 
            = (0x3fU & ((0x28U > (IData)(__Vfunc_tb_top__DOT__dut__DOT__ag__DOT__clamp_x__4__x))
                         ? (IData)(__Vfunc_tb_top__DOT__dut__DOT__ag__DOT__clamp_x__4__x)
                         : ((IData)(__Vfunc_tb_top__DOT__dut__DOT__ag__DOT__clamp_x__4__x) 
                            - (IData)(0x28U))));
        vlSelfRef.tb_top__DOT__dut__DOT__apple_x = __Vfunc_tb_top__DOT__dut__DOT__ag__DOT__clamp_x__4__Vfuncout;
    } else {
        if (vlSelfRef.tb_top__DOT__dut__DOT__gated_tick) {
            vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT____Vlvbound_h880d8971__0 = 1U;
            if (((0x27U >= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_x)) 
                 && (0x1dU >= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_y)))) {
                __VdlyVal__tb_top__DOT__dut__DOT__sm__DOT__occ__v30 
                    = vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT____Vlvbound_h880d8971__0;
                __VdlyLsb__tb_top__DOT__dut__DOT__sm__DOT__occ__v30 
                    = vlSelfRef.tb_top__DOT__dut__DOT__head_x;
                __VdlyDim0__tb_top__DOT__dut__DOT__sm__DOT__occ__v30 
                    = vlSelfRef.tb_top__DOT__dut__DOT__head_y;
                __VdlySet__tb_top__DOT__dut__DOT__sm__DOT__occ__v30 = 1U;
            }
            if (((~ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__ate_pos)) 
                 & (0U != (IData)(vlSelfRef.tb_top__DOT__dut__DOT__snake_len)))) {
                vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT____Vlvbound_h1d527880__0 = 0U;
                if (((0x27U >= (0x3fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__tail_xy) 
                                         >> 5U))) && 
                     (0x1dU >= (0x1fU & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__tail_xy))))) {
                    __VdlyVal__tb_top__DOT__dut__DOT__sm__DOT__occ__v31 
                        = vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT____Vlvbound_h1d527880__0;
                    __VdlyLsb__tb_top__DOT__dut__DOT__sm__DOT__occ__v31 
                        = (0x3fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__tail_xy) 
                                    >> 5U));
                    __VdlyDim0__tb_top__DOT__dut__DOT__sm__DOT__occ__v31 
                        = (0x1fU & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__tail_xy));
                    __VdlySet__tb_top__DOT__dut__DOT__sm__DOT__occ__v31 = 1U;
                }
            }
        }
        if (((IData)(vlSelfRef.tb_top__DOT__dut__DOT__gated_tick) 
             & ((~ ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__pop_w) 
                    & ((0U != (IData)(vlSelfRef.tb_top__DOT__dut__DOT__snake_len)) 
                       & (((IData)(vlSelfRef.tb_top__DOT__dut__DOT__next_x) 
                           == (0x3fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__tail_xy) 
                                        >> 5U))) & 
                          ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__next_y) 
                           == (0x1fU & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__tail_xy))))))) 
                & ((0x27U >= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__next_x)) 
                   & (IData)((((0x1dU >= (IData)(vlSelfRef.tb_top__DOT__dut__DOT__next_y))
                                ? vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ
                               [vlSelfRef.tb_top__DOT__dut__DOT__next_y]
                                : 0ULL) >> (IData)(vlSelfRef.tb_top__DOT__dut__DOT__next_x))))))) {
            vlSelfRef.tb_top__DOT__dut__DOT__game_over = 1U;
        }
        if (vlSelfRef.tb_top__DOT__dut__DOT__game_tick) {
            if (vlSelfRef.tb_top__DOT__dut__DOT__ate_pos) {
                __Vfunc_tb_top__DOT__dut__DOT__ag__DOT__clamp_y__7__y 
                    = (0x1fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__ag__DOT__lfsr) 
                                >> 5U));
                __Vfunc_tb_top__DOT__dut__DOT__ag__DOT__clamp_y__7__Vfuncout 
                    = (0x1fU & ((0x1eU > (IData)(__Vfunc_tb_top__DOT__dut__DOT__ag__DOT__clamp_y__7__y))
                                 ? (IData)(__Vfunc_tb_top__DOT__dut__DOT__ag__DOT__clamp_y__7__y)
                                 : ((IData)(__Vfunc_tb_top__DOT__dut__DOT__ag__DOT__clamp_y__7__y) 
                                    - (IData)(0x1eU))));
                vlSelfRef.tb_top__DOT__dut__DOT__apple_y 
                    = __Vfunc_tb_top__DOT__dut__DOT__ag__DOT__clamp_y__7__Vfuncout;
                __Vfunc_tb_top__DOT__dut__DOT__ag__DOT__clamp_x__6__x 
                    = (0x3fU & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__ag__DOT__lfsr_next));
                __Vfunc_tb_top__DOT__dut__DOT__ag__DOT__clamp_x__6__Vfuncout 
                    = (0x3fU & ((0x28U > (IData)(__Vfunc_tb_top__DOT__dut__DOT__ag__DOT__clamp_x__6__x))
                                 ? (IData)(__Vfunc_tb_top__DOT__dut__DOT__ag__DOT__clamp_x__6__x)
                                 : ((IData)(__Vfunc_tb_top__DOT__dut__DOT__ag__DOT__clamp_x__6__x) 
                                    - (IData)(0x28U))));
                vlSelfRef.tb_top__DOT__dut__DOT__apple_x 
                    = __Vfunc_tb_top__DOT__dut__DOT__ag__DOT__clamp_x__6__Vfuncout;
            }
        }
    }
    vlSelfRef.__VdlyCommitQueuetb_top__DOT__dut__DOT__sb__DOT__mem.commit(vlSelfRef.tb_top__DOT__dut__DOT__sb__DOT__mem);
    if (vlSelfRef.tb_top__DOT__dut__DOT__reset_pix) {
        vlSelfRef.tb_top__DOT__dut__DOT__ag__DOT__lfsr = 0xffffU;
        __Vdly__tb_top__DOT__dut__DOT__td__DOT__counter = 0U;
        vlSelfRef.tb_top__DOT__dut__DOT__game_tick = 0U;
    } else {
        if (vlSelfRef.tb_top__DOT__dut__DOT__game_tick) {
            vlSelfRef.tb_top__DOT__dut__DOT__ag__DOT__lfsr 
                = vlSelfRef.tb_top__DOT__dut__DOT__ag__DOT__lfsr_next;
        }
        if ((0x61a7U == vlSelfRef.tb_top__DOT__dut__DOT__td__DOT__counter)) {
            __Vdly__tb_top__DOT__dut__DOT__td__DOT__counter = 0U;
            vlSelfRef.tb_top__DOT__dut__DOT__game_tick = 1U;
        } else {
            __Vdly__tb_top__DOT__dut__DOT__td__DOT__counter 
                = ((IData)(1U) + vlSelfRef.tb_top__DOT__dut__DOT__td__DOT__counter);
            vlSelfRef.tb_top__DOT__dut__DOT__game_tick = 0U;
        }
    }
    vlSelfRef.tb_top__DOT__dut__DOT__head_x = __Vdly__tb_top__DOT__dut__DOT__head_x;
    vlSelfRef.tb_top__DOT__dut__DOT__head_y = __Vdly__tb_top__DOT__dut__DOT__head_y;
    vlSelfRef.tb_top__DOT__dut__DOT__tail_xy = __Vdly__tb_top__DOT__dut__DOT__tail_xy;
    vlSelfRef.tb_top__DOT__dut__DOT__snake_len = __Vdly__tb_top__DOT__dut__DOT__snake_len;
    if (__VdlySet__tb_top__DOT__dut__DOT__sm__DOT__occ__v0) {
        vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[0U] = 0ULL;
        vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[1U] = 0ULL;
        vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[2U] = 0ULL;
        vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[3U] = 0ULL;
        vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[4U] = 0ULL;
        vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[5U] = 0ULL;
        vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[6U] = 0ULL;
        vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[7U] = 0ULL;
        vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[8U] = 0ULL;
        vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[9U] = 0ULL;
        vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[0xaU] = 0ULL;
        vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[0xbU] = 0ULL;
        vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[0xcU] = 0ULL;
        vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[0xdU] = 0ULL;
        vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[0xeU] = 0ULL;
        vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[0xfU] = 0ULL;
        vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[0x10U] = 0ULL;
        vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[0x11U] = 0ULL;
        vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[0x12U] = 0ULL;
        vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[0x13U] = 0ULL;
        vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[0x14U] = 0ULL;
        vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[0x15U] = 0ULL;
        vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[0x16U] = 0ULL;
        vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[0x17U] = 0ULL;
        vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[0x18U] = 0ULL;
        vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[0x19U] = 0ULL;
        vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[0x1aU] = 0ULL;
        vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[0x1bU] = 0ULL;
        vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[0x1cU] = 0ULL;
        vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[0x1dU] = 0ULL;
    }
    if (__VdlySet__tb_top__DOT__dut__DOT__sm__DOT__occ__v30) {
        vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[__VdlyDim0__tb_top__DOT__dut__DOT__sm__DOT__occ__v30] 
            = (((~ (1ULL << (IData)(__VdlyLsb__tb_top__DOT__dut__DOT__sm__DOT__occ__v30))) 
                & vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ
                [__VdlyDim0__tb_top__DOT__dut__DOT__sm__DOT__occ__v30]) 
               | (0xffffffffffULL & ((QData)((IData)(__VdlyVal__tb_top__DOT__dut__DOT__sm__DOT__occ__v30)) 
                                     << (IData)(__VdlyLsb__tb_top__DOT__dut__DOT__sm__DOT__occ__v30))));
    }
    if (__VdlySet__tb_top__DOT__dut__DOT__sm__DOT__occ__v31) {
        vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ[__VdlyDim0__tb_top__DOT__dut__DOT__sm__DOT__occ__v31] 
            = (((~ (1ULL << (IData)(__VdlyLsb__tb_top__DOT__dut__DOT__sm__DOT__occ__v31))) 
                & vlSelfRef.tb_top__DOT__dut__DOT__sm__DOT__occ
                [__VdlyDim0__tb_top__DOT__dut__DOT__sm__DOT__occ__v31]) 
               | (0xffffffffffULL & ((QData)((IData)(__VdlyVal__tb_top__DOT__dut__DOT__sm__DOT__occ__v31)) 
                                     << (IData)(__VdlyLsb__tb_top__DOT__dut__DOT__sm__DOT__occ__v31))));
    }
    vlSelfRef.tb_top__DOT__dut__DOT__next_x = vlSelfRef.tb_top__DOT__dut__DOT__head_x;
    vlSelfRef.tb_top__DOT__dut__DOT__next_y = vlSelfRef.tb_top__DOT__dut__DOT__head_y;
    if ((2U & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__dir_reg))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__dir_reg))) {
            vlSelfRef.tb_top__DOT__dut__DOT__next_x 
                = ((0U == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_x))
                    ? 0x27U : (0x3fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_x) 
                                        - (IData)(1U))));
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__dir_reg)))) {
            vlSelfRef.tb_top__DOT__dut__DOT__next_y 
                = ((0x1dU == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_y))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_y))));
        }
    } else {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__dir_reg))) {
            vlSelfRef.tb_top__DOT__dut__DOT__next_x 
                = ((0x27U == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_x))
                    ? 0U : (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_x))));
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__dir_reg)))) {
            vlSelfRef.tb_top__DOT__dut__DOT__next_y 
                = ((0U == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_y))
                    ? 0x1dU : (0x1fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_y) 
                                        - (IData)(1U))));
        }
    }
    vlSelfRef.tb_top__DOT__dut__DOT__sb__DOT__tail_val 
        = ((0U != (IData)(vlSelfRef.tb_top__DOT__dut__DOT__snake_len))
            ? vlSelfRef.tb_top__DOT__dut__DOT__sb__DOT__mem
           [(0x7fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__snake_len) 
                      - (IData)(1U)))] : 0U);
    vlSelfRef.tb_top__DOT__dut__DOT__ate_pos = (((IData)(vlSelfRef.tb_top__DOT__dut__DOT__apple_x) 
                                                 == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_x)) 
                                                & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__apple_y) 
                                                   == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_y)));
    vlSelfRef.tb_top__DOT__dut__DOT__ag__DOT__lfsr_next 
        = ((0xfffeU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__ag__DOT__lfsr) 
                       << 1U)) | (1U & VL_REDXOR_16(
                                                    (0xb400U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__ag__DOT__lfsr)))));
    vlSelfRef.tb_top__DOT__dut__DOT__td__DOT__counter 
        = __Vdly__tb_top__DOT__dut__DOT__td__DOT__counter;
    vlSelfRef.tb_top__DOT__dut__DOT__gated_tick = (
                                                   (~ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__game_over)) 
                                                   & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__game_tick));
    vlSelfRef.tb_top__DOT__dut__DOT__pop_w = ((~ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__ate_pos)) 
                                              & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__gated_tick));
}

VL_INLINE_OPT void Vtb_top___024root___nba_sequent__TOP__3(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__3\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__dut__DOT__sr = vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__sr;
    vlSelfRef.tb_top__DOT__dut__DOT__sl = vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__sl;
    vlSelfRef.tb_top__DOT__dut__DOT__sd = vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__sd;
    vlSelfRef.tb_top__DOT__dut__DOT__su = vlSelfRef.__Vdly__tb_top__DOT__dut__DOT__su;
}

void Vtb_top___024root___timing_commit(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___timing_commit\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (0x10ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hb0d3b65d__0.commit(
                                                   "@(negedge tb_top.btnC)");
    }
    if ((! (0x20ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h94f5b7f7__0.commit(
                                                   "@(posedge tb_top.dut.game_tick)");
    }
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h50ca02e9__0.commit(
                                                   "@(posedge tb_top.clk)");
    }
    if ((! (0x40ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_haf1121db__0.commit(
                                                   "@(posedge tb_top.dut.game_over)");
    }
}

void Vtb_top___024root___timing_resume(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___timing_resume\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hb0d3b65d__0.resume(
                                                   "@(negedge tb_top.btnC)");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h94f5b7f7__0.resume(
                                                   "@(posedge tb_top.dut.game_tick)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h50ca02e9__0.resume(
                                                   "@(posedge tb_top.clk)");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_haf1121db__0.resume(
                                                   "@(posedge tb_top.dut.game_over)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_top___024root___eval_triggers__act(Vtb_top___024root* vlSelf);

bool Vtb_top___024root___eval_phase__act(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_phase__act\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<7> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_top___024root___eval_triggers__act(vlSelf);
    Vtb_top___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_top___024root___timing_resume(vlSelf);
        Vtb_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_top___024root___eval_phase__nba(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_phase__nba\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_top___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__nba(Vtb_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__act(Vtb_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_top___024root___eval(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_top.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_top.v", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_top___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_top___024root___eval_debug_assertions(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_debug_assertions\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
