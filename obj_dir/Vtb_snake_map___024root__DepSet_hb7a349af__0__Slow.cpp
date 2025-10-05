// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_snake_map.h for the primary calling header

#include "Vtb_snake_map__pch.h"
#include "Vtb_snake_map___024root.h"

VL_ATTR_COLD void Vtb_snake_map___024root___eval_static__TOP(Vtb_snake_map___024root* vlSelf);
VL_ATTR_COLD void Vtb_snake_map___024root____Vm_traceActivitySetAll(Vtb_snake_map___024root* vlSelf);

VL_ATTR_COLD void Vtb_snake_map___024root___eval_static(Vtb_snake_map___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_snake_map___024root___eval_static\n"); );
    Vtb_snake_map__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_snake_map___024root___eval_static__TOP(vlSelf);
    Vtb_snake_map___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_snake_map__DOT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_snake_map__DOT__reset__0 = 1U;
}

VL_ATTR_COLD void Vtb_snake_map___024root___eval_static__TOP(Vtb_snake_map___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_snake_map___024root___eval_static__TOP\n"); );
    Vtb_snake_map__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_snake_map__DOT__clk = 0U;
    vlSelfRef.tb_snake_map__DOT__reset = 1U;
}

VL_ATTR_COLD void Vtb_snake_map___024root___eval_final(Vtb_snake_map___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_snake_map___024root___eval_final\n"); );
    Vtb_snake_map__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_snake_map___024root___dump_triggers__stl(Vtb_snake_map___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_snake_map___024root___eval_phase__stl(Vtb_snake_map___024root* vlSelf);

VL_ATTR_COLD void Vtb_snake_map___024root___eval_settle(Vtb_snake_map___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_snake_map___024root___eval_settle\n"); );
    Vtb_snake_map__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_snake_map___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_snake_map.v", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_snake_map___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_snake_map___024root___dump_triggers__stl(Vtb_snake_map___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_snake_map___024root___dump_triggers__stl\n"); );
    Vtb_snake_map__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vtb_snake_map___024root___act_comb__TOP__0(Vtb_snake_map___024root* vlSelf);

VL_ATTR_COLD void Vtb_snake_map___024root___eval_stl(Vtb_snake_map___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_snake_map___024root___eval_stl\n"); );
    Vtb_snake_map__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_snake_map___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_snake_map___024root___eval_triggers__stl(Vtb_snake_map___024root* vlSelf);

VL_ATTR_COLD bool Vtb_snake_map___024root___eval_phase__stl(Vtb_snake_map___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_snake_map___024root___eval_phase__stl\n"); );
    Vtb_snake_map__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_snake_map___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_snake_map___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_snake_map___024root___dump_triggers__act(Vtb_snake_map___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_snake_map___024root___dump_triggers__act\n"); );
    Vtb_snake_map__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_snake_map.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_snake_map.reset)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_snake_map___024root___dump_triggers__nba(Vtb_snake_map___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_snake_map___024root___dump_triggers__nba\n"); );
    Vtb_snake_map__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_snake_map.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_snake_map.reset)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_snake_map___024root____Vm_traceActivitySetAll(Vtb_snake_map___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_snake_map___024root____Vm_traceActivitySetAll\n"); );
    Vtb_snake_map__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vtb_snake_map___024root___ctor_var_reset(Vtb_snake_map___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_snake_map___024root___ctor_var_reset\n"); );
    Vtb_snake_map__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->tb_snake_map__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2870339112298830561ull);
    vlSelf->tb_snake_map__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12670054599741277321ull);
    vlSelf->tb_snake_map__DOT__tick = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3246363331143196780ull);
    vlSelf->tb_snake_map__DOT__eat = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4107198832765402021ull);
    vlSelf->tb_snake_map__DOT__head_xy = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16604258346945662100ull);
    vlSelf->tb_snake_map__DOT__tail_xy = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12706324694804867569ull);
    vlSelf->tb_snake_map__DOT__q_x = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17566242739288884031ull);
    vlSelf->tb_snake_map__DOT__q_y = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16345942976723490715ull);
    vlSelf->tb_snake_map__DOT__body_on = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11765463630081474938ull);
    vlSelf->tb_snake_map__DOT__next_x = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1319977264020943945ull);
    vlSelf->tb_snake_map__DOT__next_y = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14768780340591004299ull);
    vlSelf->tb_snake_map__DOT__will_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16764144393349632174ull);
    vlSelf->tb_snake_map__DOT__self_hit_now = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8283281360964898939ull);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->tb_snake_map__DOT__occ_ref[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15919932599646635014ull);
    }
    vlSelf->tb_snake_map__DOT__ref_clear__Vstatic__y = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10035585495251501825ull);
    vlSelf->tb_snake_map__DOT__check_occ__Vstatic__x = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12945586294527288441ull);
    vlSelf->tb_snake_map__DOT__check_occ__Vstatic__y = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4701836829530849009ull);
    vlSelf->tb_snake_map__DOT__check_occ__Vstatic__err = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3762855108227336936ull);
    vlSelf->tb_snake_map__DOT__unnamedblk1__DOT__hit = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12990175992452361131ull);
    vlSelf->tb_snake_map__DOT__unnamedblk1__DOT__hx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13685046772428230431ull);
    vlSelf->tb_snake_map__DOT__unnamedblk1__DOT__hy = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14372200283108036554ull);
    vlSelf->tb_snake_map__DOT__unnamedblk1__DOT__nx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 387726082120920228ull);
    vlSelf->tb_snake_map__DOT__unnamedblk1__DOT__ny = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12718762818757038583ull);
    vlSelf->tb_snake_map__DOT__unnamedblk1__DOT__tx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9980860923571160002ull);
    vlSelf->tb_snake_map__DOT__unnamedblk1__DOT__ty = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15391073059880596801ull);
    vlSelf->tb_snake_map__DOT____Vlvbound_h44b69fa1__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5812681233330731677ull);
    vlSelf->tb_snake_map__DOT__dut__DOT__tail_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 475392933928700986ull);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->tb_snake_map__DOT__dut__DOT__occ[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1243388685862497164ull);
    }
    vlSelf->tb_snake_map__DOT__dut__DOT__r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17727835368006861445ull);
    vlSelf->tb_snake_map__DOT__dut__DOT____Vlvbound_h2ad7622e__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16939624727727901447ull);
    vlSelf->tb_snake_map__DOT__dut__DOT____Vlvbound_he6da044b__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4116814033313066195ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_snake_map__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14552049621118763562ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_snake_map__DOT__reset__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15166905461264136815ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
