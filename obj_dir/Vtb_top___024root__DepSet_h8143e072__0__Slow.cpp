// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"
#include "Vtb_top___024root.h"

VL_ATTR_COLD void Vtb_top___024root___eval_static__TOP(Vtb_top___024root* vlSelf);
VL_ATTR_COLD void Vtb_top___024root____Vm_traceActivitySetAll(Vtb_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_top___024root___eval_static(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_static\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_top___024root___eval_static__TOP(vlSelf);
    Vtb_top___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__dut__DOT__pix_clk__0 
        = vlSelfRef.tb_top__DOT__dut__DOT__pix_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__dut__DOT__reset_pix__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__btnC__0 = 1U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__dut__DOT__game_tick__0 
        = vlSelfRef.tb_top__DOT__dut__DOT__game_tick;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__dut__DOT__game_over__0 = 0U;
}

VL_ATTR_COLD void Vtb_top___024root___eval_static__TOP(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_static__TOP\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__clk = 0U;
    vlSelfRef.tb_top__DOT__btnC = 1U;
    vlSelfRef.tb_top__DOT__btnU = 0U;
    vlSelfRef.tb_top__DOT__btnD = 0U;
    vlSelfRef.tb_top__DOT__btnL = 0U;
    vlSelfRef.tb_top__DOT__btnR = 0U;
    vlSelfRef.tb_top__DOT__tick_count = 0U;
    vlSelfRef.tb_top__DOT__dut__DOT__div4 = 0U;
    vlSelfRef.tb_top__DOT__dut__DOT__reset_pix = 0U;
    vlSelfRef.tb_top__DOT__dut__DOT__su = 0U;
    vlSelfRef.tb_top__DOT__dut__DOT__sd = 0U;
    vlSelfRef.tb_top__DOT__dut__DOT__sl = 0U;
    vlSelfRef.tb_top__DOT__dut__DOT__sr = 0U;
    vlSelfRef.tb_top__DOT__dut__DOT__dir_reg = 1U;
    vlSelfRef.tb_top__DOT__dut__DOT__game_over = 0U;
    vlSelfRef.tb_top__DOT__dut__DOT__td__DOT__counter = 0U;
}

VL_ATTR_COLD void Vtb_top___024root___eval_initial__TOP(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial__TOP\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__dut__DOT__hcount = 0U;
    vlSelfRef.tb_top__DOT__dut__DOT__vcount = 0U;
}

VL_ATTR_COLD void Vtb_top___024root___eval_final(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_final\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__stl(Vtb_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_top___024root___eval_phase__stl(Vtb_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_top___024root___eval_settle(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_settle\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_top.v", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__stl(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___dump_triggers__stl\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_top___024root___stl_sequent__TOP__0(Vtb_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_top___024root___eval_stl(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_stl\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_top___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_top___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_top___024root___stl_sequent__TOP__0(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___stl_sequent__TOP__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__dut__DOT__pix_clk = (1U 
                                                & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__div4) 
                                                   >> 1U));
    vlSelfRef.tb_top__DOT__dut__DOT__ag__DOT__lfsr_next 
        = ((0xfffeU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__ag__DOT__lfsr) 
                       << 1U)) | (1U & VL_REDXOR_16(
                                                    (0xb400U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__ag__DOT__lfsr)))));
    vlSelfRef.tb_top__DOT__dut__DOT__gated_tick = (
                                                   (~ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__game_over)) 
                                                   & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__game_tick));
    vlSelfRef.tb_top__DOT__dut__DOT__ate_pos = (((IData)(vlSelfRef.tb_top__DOT__dut__DOT__apple_x) 
                                                 == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_x)) 
                                                & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__apple_y) 
                                                   == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_y)));
    vlSelfRef.tb_top__DOT__dut__DOT____Vcellinp__sb__pop 
        = ((~ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__ate_pos)) 
           & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__gated_tick));
}

VL_ATTR_COLD void Vtb_top___024root___eval_triggers__stl(Vtb_top___024root* vlSelf);

VL_ATTR_COLD bool Vtb_top___024root___eval_phase__stl(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_phase__stl\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__act(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___dump_triggers__act\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_top.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_top.dut.pix_clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge tb_top.dut.reset_pix)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(negedge tb_top.btnC)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(posedge tb_top.dut.game_tick)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(posedge tb_top.dut.game_over)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__nba(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___dump_triggers__nba\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_top.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_top.dut.pix_clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge tb_top.dut.reset_pix)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(negedge tb_top.btnC)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(posedge tb_top.dut.game_tick)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(posedge tb_top.dut.game_over)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_top___024root____Vm_traceActivitySetAll(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root____Vm_traceActivitySetAll\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vtb_top___024root___ctor_var_reset(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___ctor_var_reset\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->tb_top__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16256328344204653681ull);
    vlSelf->tb_top__DOT__btnC = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17318691028664484011ull);
    vlSelf->tb_top__DOT__btnU = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13386874176302607443ull);
    vlSelf->tb_top__DOT__btnD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10629823056861454377ull);
    vlSelf->tb_top__DOT__btnL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17361250164495366129ull);
    vlSelf->tb_top__DOT__btnR = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9118412505004101079ull);
    vlSelf->tb_top__DOT__hsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7185627264135106294ull);
    vlSelf->tb_top__DOT__vsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16587798606459378214ull);
    vlSelf->tb_top__DOT__tick_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13279998623578579420ull);
    vlSelf->tb_top__DOT__dut__DOT__div4 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16476688193757833519ull);
    vlSelf->tb_top__DOT__dut__DOT__pix_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17560506817972682087ull);
    vlSelf->tb_top__DOT__dut__DOT__reset_pix = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5751769054834869606ull);
    vlSelf->tb_top__DOT__dut__DOT__hcount = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15564825052799888828ull);
    vlSelf->tb_top__DOT__dut__DOT__vcount = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10895625801580328359ull);
    vlSelf->tb_top__DOT__dut__DOT__video_on = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8773539635354940482ull);
    vlSelf->tb_top__DOT__dut__DOT__game_tick = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3122510516599234505ull);
    vlSelf->tb_top__DOT__dut__DOT__su = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13703502438614594749ull);
    vlSelf->tb_top__DOT__dut__DOT__sd = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4099402218587596817ull);
    vlSelf->tb_top__DOT__dut__DOT__sl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3455541693482129694ull);
    vlSelf->tb_top__DOT__dut__DOT__sr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8207153953055300240ull);
    vlSelf->tb_top__DOT__dut__DOT__dir_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5042506716036525774ull);
    vlSelf->tb_top__DOT__dut__DOT__game_over = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6437415579490270079ull);
    vlSelf->tb_top__DOT__dut__DOT__gated_tick = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8610366812738751241ull);
    vlSelf->tb_top__DOT__dut__DOT__head_x = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 531518794674359567ull);
    vlSelf->tb_top__DOT__dut__DOT__head_y = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5587760673428074335ull);
    vlSelf->tb_top__DOT__dut__DOT__snake_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2803815390847169805ull);
    vlSelf->tb_top__DOT__dut__DOT__ate_pos = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8131815421177018015ull);
    vlSelf->tb_top__DOT__dut__DOT____Vcellinp__sb__pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8029376870536320822ull);
    vlSelf->tb_top__DOT__dut__DOT__apple_x = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 960238799584222518ull);
    vlSelf->tb_top__DOT__dut__DOT__apple_y = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1396918779607236176ull);
    vlSelf->tb_top__DOT__dut__DOT__td__DOT__counter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6961266421719476463ull);
    vlSelf->tb_top__DOT__dut__DOT__sb__DOT__data_out = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12094888221839228149ull);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->tb_top__DOT__dut__DOT__sb__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 13153426980035391649ull);
    }
    vlSelf->tb_top__DOT__dut__DOT__sb__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 156851161825364508ull);
    vlSelf->tb_top__DOT__dut__DOT__ag__DOT__lfsr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9695021569377143252ull);
    vlSelf->tb_top__DOT__dut__DOT__ag__DOT__lfsr_next = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2787404439858709064ull);
    vlSelf->__Vdly__tb_top__DOT__dut__DOT__su = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15747460465725230305ull);
    vlSelf->__Vdly__tb_top__DOT__dut__DOT__sd = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3900291003759046866ull);
    vlSelf->__Vdly__tb_top__DOT__dut__DOT__sl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1885221172506752269ull);
    vlSelf->__Vdly__tb_top__DOT__dut__DOT__sr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 669997698175548516ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9069298637648042572ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__dut__DOT__pix_clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2511033521664799714ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__dut__DOT__reset_pix__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16421798836129686373ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__btnC__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 86974933203564289ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__dut__DOT__game_tick__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15845433713812239090ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__dut__DOT__game_over__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12724488277535432282ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
