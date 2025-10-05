// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_snake_map.h for the primary calling header

#include "Vtb_snake_map__pch.h"
#include "Vtb_snake_map__Syms.h"
#include "Vtb_snake_map___024root.h"

VL_ATTR_COLD void Vtb_snake_map___024root___eval_initial__TOP(Vtb_snake_map___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_snake_map___024root___eval_initial__TOP\n"); );
    Vtb_snake_map__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x5f6d6170U;
    __Vtemp_1[2U] = 0x6e616b65U;
    __Vtemp_1[3U] = 0x74625f73U;
    __Vtemp_1[4U] = 0x73696d2fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_snake_map___024root___dump_triggers__stl(Vtb_snake_map___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_snake_map___024root___eval_triggers__stl(Vtb_snake_map___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_snake_map___024root___eval_triggers__stl\n"); );
    Vtb_snake_map__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_snake_map___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
