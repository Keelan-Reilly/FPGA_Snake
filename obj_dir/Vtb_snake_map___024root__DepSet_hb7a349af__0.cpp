// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_snake_map.h for the primary calling header

#include "Vtb_snake_map__pch.h"
#include "Vtb_snake_map___024root.h"

VL_ATTR_COLD void Vtb_snake_map___024root___eval_initial__TOP(Vtb_snake_map___024root* vlSelf);
VlCoroutine Vtb_snake_map___024root___eval_initial__TOP__Vtiming__0(Vtb_snake_map___024root* vlSelf);
VlCoroutine Vtb_snake_map___024root___eval_initial__TOP__Vtiming__1(Vtb_snake_map___024root* vlSelf);

void Vtb_snake_map___024root___eval_initial(Vtb_snake_map___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_snake_map___024root___eval_initial\n"); );
    Vtb_snake_map__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_snake_map___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_snake_map___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_snake_map___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

extern const VlWide<48>/*1535:0*/ Vtb_snake_map__ConstPool__CONST_hacaa3d34_0;
extern const VlWide<48>/*1535:0*/ Vtb_snake_map__ConstPool__CONST_hb53ee24a_0;
extern const VlWide<48>/*1535:0*/ Vtb_snake_map__ConstPool__CONST_hdb7d532e_0;
extern const VlWide<48>/*1535:0*/ Vtb_snake_map__ConstPool__CONST_h2942bfe1_0;
extern const VlWide<48>/*1535:0*/ Vtb_snake_map__ConstPool__CONST_h1a21ba4c_0;

VL_INLINE_OPT VlCoroutine Vtb_snake_map___024root___eval_initial__TOP__Vtiming__0(Vtb_snake_map___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_snake_map___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_snake_map__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tb_snake_map__DOT____Vlvbound_hc9e32833__0;
    tb_snake_map__DOT____Vlvbound_hc9e32833__0 = 0;
    VlWide<48>/*1535:0*/ __Vtask_tb_snake_map__DOT__check_occ__1__msg;
    VL_ZERO_W(1536, __Vtask_tb_snake_map__DOT__check_occ__1__msg);
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__do_step__2__hx;
    __Vtask_tb_snake_map__DOT__do_step__2__hx = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__do_step__2__hy;
    __Vtask_tb_snake_map__DOT__do_step__2__hy = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__do_step__2__nx;
    __Vtask_tb_snake_map__DOT__do_step__2__nx = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__do_step__2__ny;
    __Vtask_tb_snake_map__DOT__do_step__2__ny = 0;
    CData/*0:0*/ __Vtask_tb_snake_map__DOT__do_step__2__eat_i;
    __Vtask_tb_snake_map__DOT__do_step__2__eat_i = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__do_step__2__tx;
    __Vtask_tb_snake_map__DOT__do_step__2__tx = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__do_step__2__ty;
    __Vtask_tb_snake_map__DOT__do_step__2__ty = 0;
    CData/*0:0*/ __Vtask_tb_snake_map__DOT__do_step__2__hit_flag;
    __Vtask_tb_snake_map__DOT__do_step__2__hit_flag = 0;
    CData/*0:0*/ __Vtask_tb_snake_map__DOT__ref_apply_tick__3__eat_i;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__3__eat_i = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__ref_apply_tick__3__hx;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__3__hx = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__ref_apply_tick__3__hy;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__3__hy = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__ref_apply_tick__3__tx;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__3__tx = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__ref_apply_tick__3__ty;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__3__ty = 0;
    VlWide<48>/*1535:0*/ __Vtask_tb_snake_map__DOT__check_occ__4__msg;
    VL_ZERO_W(1536, __Vtask_tb_snake_map__DOT__check_occ__4__msg);
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__do_step__5__hx;
    __Vtask_tb_snake_map__DOT__do_step__5__hx = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__do_step__5__hy;
    __Vtask_tb_snake_map__DOT__do_step__5__hy = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__do_step__5__nx;
    __Vtask_tb_snake_map__DOT__do_step__5__nx = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__do_step__5__ny;
    __Vtask_tb_snake_map__DOT__do_step__5__ny = 0;
    CData/*0:0*/ __Vtask_tb_snake_map__DOT__do_step__5__eat_i;
    __Vtask_tb_snake_map__DOT__do_step__5__eat_i = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__do_step__5__tx;
    __Vtask_tb_snake_map__DOT__do_step__5__tx = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__do_step__5__ty;
    __Vtask_tb_snake_map__DOT__do_step__5__ty = 0;
    CData/*0:0*/ __Vtask_tb_snake_map__DOT__do_step__5__hit_flag;
    __Vtask_tb_snake_map__DOT__do_step__5__hit_flag = 0;
    CData/*0:0*/ __Vtask_tb_snake_map__DOT__ref_apply_tick__6__eat_i;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__6__eat_i = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__ref_apply_tick__6__hx;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__6__hx = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__ref_apply_tick__6__hy;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__6__hy = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__ref_apply_tick__6__tx;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__6__tx = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__ref_apply_tick__6__ty;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__6__ty = 0;
    VlWide<48>/*1535:0*/ __Vtask_tb_snake_map__DOT__check_occ__7__msg;
    VL_ZERO_W(1536, __Vtask_tb_snake_map__DOT__check_occ__7__msg);
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__do_step__8__hx;
    __Vtask_tb_snake_map__DOT__do_step__8__hx = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__do_step__8__hy;
    __Vtask_tb_snake_map__DOT__do_step__8__hy = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__do_step__8__nx;
    __Vtask_tb_snake_map__DOT__do_step__8__nx = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__do_step__8__ny;
    __Vtask_tb_snake_map__DOT__do_step__8__ny = 0;
    CData/*0:0*/ __Vtask_tb_snake_map__DOT__do_step__8__eat_i;
    __Vtask_tb_snake_map__DOT__do_step__8__eat_i = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__do_step__8__tx;
    __Vtask_tb_snake_map__DOT__do_step__8__tx = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__do_step__8__ty;
    __Vtask_tb_snake_map__DOT__do_step__8__ty = 0;
    CData/*0:0*/ __Vtask_tb_snake_map__DOT__do_step__8__hit_flag;
    __Vtask_tb_snake_map__DOT__do_step__8__hit_flag = 0;
    CData/*0:0*/ __Vtask_tb_snake_map__DOT__ref_apply_tick__9__eat_i;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__9__eat_i = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__ref_apply_tick__9__hx;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__9__hx = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__ref_apply_tick__9__hy;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__9__hy = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__ref_apply_tick__9__tx;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__9__tx = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__ref_apply_tick__9__ty;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__9__ty = 0;
    VlWide<48>/*1535:0*/ __Vtask_tb_snake_map__DOT__check_occ__10__msg;
    VL_ZERO_W(1536, __Vtask_tb_snake_map__DOT__check_occ__10__msg);
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__do_step__11__hx;
    __Vtask_tb_snake_map__DOT__do_step__11__hx = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__do_step__11__hy;
    __Vtask_tb_snake_map__DOT__do_step__11__hy = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__do_step__11__nx;
    __Vtask_tb_snake_map__DOT__do_step__11__nx = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__do_step__11__ny;
    __Vtask_tb_snake_map__DOT__do_step__11__ny = 0;
    CData/*0:0*/ __Vtask_tb_snake_map__DOT__do_step__11__eat_i;
    __Vtask_tb_snake_map__DOT__do_step__11__eat_i = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__do_step__11__tx;
    __Vtask_tb_snake_map__DOT__do_step__11__tx = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__do_step__11__ty;
    __Vtask_tb_snake_map__DOT__do_step__11__ty = 0;
    CData/*0:0*/ __Vtask_tb_snake_map__DOT__do_step__11__hit_flag;
    __Vtask_tb_snake_map__DOT__do_step__11__hit_flag = 0;
    CData/*0:0*/ __Vtask_tb_snake_map__DOT__ref_apply_tick__12__eat_i;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__12__eat_i = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__ref_apply_tick__12__hx;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__12__hx = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__ref_apply_tick__12__hy;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__12__hy = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__ref_apply_tick__12__tx;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__12__tx = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__ref_apply_tick__12__ty;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__12__ty = 0;
    VlWide<48>/*1535:0*/ __Vtask_tb_snake_map__DOT__check_occ__13__msg;
    VL_ZERO_W(1536, __Vtask_tb_snake_map__DOT__check_occ__13__msg);
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__do_step__14__hx;
    __Vtask_tb_snake_map__DOT__do_step__14__hx = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__do_step__14__hy;
    __Vtask_tb_snake_map__DOT__do_step__14__hy = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__do_step__14__nx;
    __Vtask_tb_snake_map__DOT__do_step__14__nx = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__do_step__14__ny;
    __Vtask_tb_snake_map__DOT__do_step__14__ny = 0;
    CData/*0:0*/ __Vtask_tb_snake_map__DOT__do_step__14__eat_i;
    __Vtask_tb_snake_map__DOT__do_step__14__eat_i = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__do_step__14__tx;
    __Vtask_tb_snake_map__DOT__do_step__14__tx = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__do_step__14__ty;
    __Vtask_tb_snake_map__DOT__do_step__14__ty = 0;
    CData/*0:0*/ __Vtask_tb_snake_map__DOT__do_step__14__hit_flag;
    __Vtask_tb_snake_map__DOT__do_step__14__hit_flag = 0;
    CData/*0:0*/ __Vtask_tb_snake_map__DOT__ref_apply_tick__15__eat_i;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__15__eat_i = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__ref_apply_tick__15__hx;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__15__hx = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__ref_apply_tick__15__hy;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__15__hy = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__ref_apply_tick__15__tx;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__15__tx = 0;
    IData/*31:0*/ __Vtask_tb_snake_map__DOT__ref_apply_tick__15__ty;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__15__ty = 0;
    // Body
    vlSelfRef.tb_snake_map__DOT__tick = 0U;
    vlSelfRef.tb_snake_map__DOT__eat = 0U;
    vlSelfRef.tb_snake_map__DOT__will_pop = 0U;
    vlSelfRef.tb_snake_map__DOT__head_xy = 0U;
    vlSelfRef.tb_snake_map__DOT__tail_xy = 0U;
    vlSelfRef.tb_snake_map__DOT__next_x = 0U;
    vlSelfRef.tb_snake_map__DOT__next_y = 0U;
    vlSelfRef.tb_snake_map__DOT__q_x = 0U;
    vlSelfRef.tb_snake_map__DOT__q_y = 0U;
    vlSelfRef.tb_snake_map__DOT__occ_ref[0U] = 0U;
    vlSelfRef.tb_snake_map__DOT__occ_ref[1U] = 0U;
    vlSelfRef.tb_snake_map__DOT__occ_ref[2U] = 0U;
    vlSelfRef.tb_snake_map__DOT__occ_ref[3U] = 0U;
    vlSelfRef.tb_snake_map__DOT__occ_ref[4U] = 0U;
    vlSelfRef.tb_snake_map__DOT__occ_ref[5U] = 0U;
    vlSelfRef.tb_snake_map__DOT__ref_clear__Vstatic__y = 6U;
    co_await vlSelfRef.__VtrigSched_h01882e98__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_snake_map.clk)", 
                                                         "tb/tb_snake_map.v", 
                                                         150);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h01882e98__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_snake_map.clk)", 
                                                         "tb/tb_snake_map.v", 
                                                         150);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_snake_map__DOT__reset = 1U;
    co_await vlSelfRef.__VtrigSched_h01882e98__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_snake_map.clk)", 
                                                         "tb/tb_snake_map.v", 
                                                         152);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h01882e98__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_snake_map.clk)", 
                                                         "tb/tb_snake_map.v", 
                                                         152);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_snake_map__DOT__reset = 0U;
    co_await vlSelfRef.__VtrigSched_h01882e98__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_snake_map.clk)", 
                                                         "tb/tb_snake_map.v", 
                                                         154);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x2fU)) {
        __Vtask_tb_snake_map__DOT__check_occ__1__msg[__Vilp1] 
            = Vtb_snake_map__ConstPool__CONST_hacaa3d34_0[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 0U;
    vlSelfRef.tb_snake_map__DOT__q_x = 0U;
    vlSelfRef.tb_snake_map__DOT__q_y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                          [0U]))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (0,0): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                        [0U]));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [0U] >> 1U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (1,0): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [0U] >> 1U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [0U] >> 2U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (2,0): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [0U] >> 2U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [0U] >> 3U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (3,0): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [0U] >> 3U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [0U] >> 4U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (4,0): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [0U] >> 4U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [0U] >> 5U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (5,0): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [0U] >> 5U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [0U] >> 6U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (6,0): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [0U] >> 6U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [0U] >> 7U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (7,0): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [0U] >> 7U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 8U;
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__y = 1U;
    vlSelfRef.tb_snake_map__DOT__q_x = 0U;
    vlSelfRef.tb_snake_map__DOT__q_y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                          [1U]))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (0,1): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                        [1U]));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [1U] >> 1U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (1,1): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [1U] >> 1U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [1U] >> 2U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (2,1): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [1U] >> 2U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [1U] >> 3U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (3,1): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [1U] >> 3U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [1U] >> 4U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (4,1): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [1U] >> 4U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [1U] >> 5U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (5,1): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [1U] >> 5U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [1U] >> 6U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (6,1): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [1U] >> 6U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [1U] >> 7U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (7,1): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [1U] >> 7U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 8U;
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__y = 2U;
    vlSelfRef.tb_snake_map__DOT__q_x = 0U;
    vlSelfRef.tb_snake_map__DOT__q_y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                          [2U]))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (0,2): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                        [2U]));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [2U] >> 1U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (1,2): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [2U] >> 1U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [2U] >> 2U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (2,2): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [2U] >> 2U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [2U] >> 3U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (3,2): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [2U] >> 3U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [2U] >> 4U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (4,2): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [2U] >> 4U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [2U] >> 5U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (5,2): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [2U] >> 5U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [2U] >> 6U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (6,2): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [2U] >> 6U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [2U] >> 7U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (7,2): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [2U] >> 7U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 8U;
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__y = 3U;
    vlSelfRef.tb_snake_map__DOT__q_x = 0U;
    vlSelfRef.tb_snake_map__DOT__q_y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                          [3U]))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (0,3): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                        [3U]));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [3U] >> 1U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (1,3): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [3U] >> 1U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [3U] >> 2U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (2,3): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [3U] >> 2U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [3U] >> 3U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (3,3): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [3U] >> 3U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [3U] >> 4U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (4,3): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [3U] >> 4U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [3U] >> 5U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (5,3): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [3U] >> 5U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [3U] >> 6U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (6,3): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [3U] >> 6U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [3U] >> 7U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (7,3): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [3U] >> 7U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 8U;
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__y = 4U;
    vlSelfRef.tb_snake_map__DOT__q_x = 0U;
    vlSelfRef.tb_snake_map__DOT__q_y = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                          [4U]))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (0,4): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                        [4U]));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_y = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [4U] >> 1U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (1,4): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [4U] >> 1U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_y = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [4U] >> 2U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (2,4): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [4U] >> 2U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_y = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [4U] >> 3U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (3,4): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [4U] >> 3U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_y = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [4U] >> 4U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (4,4): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [4U] >> 4U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_y = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [4U] >> 5U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (5,4): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [4U] >> 5U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_y = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [4U] >> 6U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (6,4): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [4U] >> 6U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_y = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [4U] >> 7U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (7,4): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [4U] >> 7U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 8U;
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__y = 5U;
    vlSelfRef.tb_snake_map__DOT__q_x = 0U;
    vlSelfRef.tb_snake_map__DOT__q_y = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                          [5U]))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (0,5): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                        [5U]));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_y = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [5U] >> 1U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (1,5): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [5U] >> 1U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_y = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [5U] >> 2U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (2,5): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [5U] >> 2U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_y = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [5U] >> 3U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (3,5): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [5U] >> 3U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_y = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [5U] >> 4U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (4,5): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [5U] >> 4U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_y = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [5U] >> 5U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (5,5): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [5U] >> 5U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_y = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [5U] >> 6U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (6,5): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [5U] >> 6U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_y = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [5U] >> 7U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (7,5): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [5U] >> 7U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 8U;
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__y = 6U;
    if (VL_UNLIKELY(((0U != vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err)))) {
        VL_WRITEF_NX("FAILED %0s\n",0,1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data());
        VL_STOP_MT("tb/tb_snake_map.v", 124, "");
    } else {
        VL_WRITEF_NX("PASS %0s: occupancy matches.\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__1__msg.data());
    }
    vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__hx = 2U;
    vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__hy = 2U;
    vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__nx = 3U;
    vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__ny = 2U;
    vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__tx = 2U;
    vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__ty = 2U;
    __Vtask_tb_snake_map__DOT__do_step__2__ty = vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__ty;
    __Vtask_tb_snake_map__DOT__do_step__2__tx = vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__tx;
    __Vtask_tb_snake_map__DOT__do_step__2__eat_i = 1U;
    __Vtask_tb_snake_map__DOT__do_step__2__ny = vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__ny;
    __Vtask_tb_snake_map__DOT__do_step__2__nx = vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__nx;
    __Vtask_tb_snake_map__DOT__do_step__2__hy = vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__hy;
    __Vtask_tb_snake_map__DOT__do_step__2__hx = vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__hx;
    vlSelfRef.tb_snake_map__DOT__head_xy = ((0x38U 
                                             & (__Vtask_tb_snake_map__DOT__do_step__2__hx 
                                                << 3U)) 
                                            | (7U & __Vtask_tb_snake_map__DOT__do_step__2__hy));
    vlSelfRef.tb_snake_map__DOT__next_x = (7U & __Vtask_tb_snake_map__DOT__do_step__2__nx);
    vlSelfRef.tb_snake_map__DOT__next_y = (7U & __Vtask_tb_snake_map__DOT__do_step__2__ny);
    vlSelfRef.tb_snake_map__DOT__eat = __Vtask_tb_snake_map__DOT__do_step__2__eat_i;
    vlSelfRef.tb_snake_map__DOT__will_pop = (1U & (~ (IData)(__Vtask_tb_snake_map__DOT__do_step__2__eat_i)));
    vlSelfRef.tb_snake_map__DOT__tail_xy = ((0x38U 
                                             & (__Vtask_tb_snake_map__DOT__do_step__2__tx 
                                                << 3U)) 
                                            | (7U & __Vtask_tb_snake_map__DOT__do_step__2__ty));
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         88);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_snake_map__DOT__tick = 1U;
    co_await vlSelfRef.__VtrigSched_h01882e98__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_snake_map.clk)", 
                                                         "tb/tb_snake_map.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_snake_map__DOT__do_step__2__hit_flag 
        = vlSelfRef.tb_snake_map__DOT__self_hit_now;
    vlSelfRef.tb_snake_map__DOT__tick = 0U;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__3__ty 
        = __Vtask_tb_snake_map__DOT__do_step__2__ty;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__3__tx 
        = __Vtask_tb_snake_map__DOT__do_step__2__tx;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__3__hy 
        = __Vtask_tb_snake_map__DOT__do_step__2__hy;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__3__hx 
        = __Vtask_tb_snake_map__DOT__do_step__2__hx;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__3__eat_i 
        = __Vtask_tb_snake_map__DOT__do_step__2__eat_i;
    tb_snake_map__DOT____Vlvbound_hc9e32833__0 = 1U;
    if (VL_LIKELY(((5U >= (7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__3__hy))))) {
        vlSelfRef.tb_snake_map__DOT__occ_ref[(7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__3__hy)] 
            = (((~ ((IData)(1U) << (7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__3__hx))) 
                & vlSelfRef.tb_snake_map__DOT__occ_ref
                [(7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__3__hy)]) 
               | (0xffU & ((IData)(tb_snake_map__DOT____Vlvbound_hc9e32833__0) 
                           << (7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__3__hx))));
    }
    if ((1U & (~ (IData)(__Vtask_tb_snake_map__DOT__ref_apply_tick__3__eat_i)))) {
        vlSelfRef.tb_snake_map__DOT____Vlvbound_h44b69fa1__0 = 0U;
        if (VL_LIKELY(((5U >= (7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__3__ty))))) {
            vlSelfRef.tb_snake_map__DOT__occ_ref[(7U 
                                                  & __Vtask_tb_snake_map__DOT__ref_apply_tick__3__ty)] 
                = (((~ ((IData)(1U) << (7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__3__tx))) 
                    & vlSelfRef.tb_snake_map__DOT__occ_ref
                    [(7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__3__ty)]) 
                   | (0xffU & ((IData)(vlSelfRef.tb_snake_map__DOT____Vlvbound_h44b69fa1__0) 
                               << (7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__3__tx))));
        }
    }
    co_await vlSelfRef.__VtrigSched_h01882e98__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_snake_map.clk)", 
                                                         "tb/tb_snake_map.v", 
                                                         99);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__hit 
        = __Vtask_tb_snake_map__DOT__do_step__2__hit_flag;
    if (VL_UNLIKELY(((0U != vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__hit)))) {
        VL_WRITEF_NX("Unexpected hit on grow step 1\n",0);
        VL_STOP_MT("tb/tb_snake_map.v", 164, "");
    }
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x2fU)) {
        __Vtask_tb_snake_map__DOT__check_occ__4__msg[__Vilp2] 
            = Vtb_snake_map__ConstPool__CONST_hb53ee24a_0[__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 0U;
    vlSelfRef.tb_snake_map__DOT__q_x = 0U;
    vlSelfRef.tb_snake_map__DOT__q_y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                          [0U]))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (0,0): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                        [0U]));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [0U] >> 1U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (1,0): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [0U] >> 1U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [0U] >> 2U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (2,0): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [0U] >> 2U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [0U] >> 3U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (3,0): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [0U] >> 3U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [0U] >> 4U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (4,0): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [0U] >> 4U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [0U] >> 5U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (5,0): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [0U] >> 5U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [0U] >> 6U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (6,0): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [0U] >> 6U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [0U] >> 7U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (7,0): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [0U] >> 7U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 8U;
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__y = 1U;
    vlSelfRef.tb_snake_map__DOT__q_x = 0U;
    vlSelfRef.tb_snake_map__DOT__q_y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                          [1U]))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (0,1): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                        [1U]));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [1U] >> 1U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (1,1): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [1U] >> 1U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [1U] >> 2U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (2,1): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [1U] >> 2U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [1U] >> 3U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (3,1): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [1U] >> 3U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [1U] >> 4U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (4,1): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [1U] >> 4U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [1U] >> 5U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (5,1): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [1U] >> 5U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [1U] >> 6U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (6,1): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [1U] >> 6U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [1U] >> 7U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (7,1): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [1U] >> 7U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 8U;
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__y = 2U;
    vlSelfRef.tb_snake_map__DOT__q_x = 0U;
    vlSelfRef.tb_snake_map__DOT__q_y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                          [2U]))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (0,2): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                        [2U]));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [2U] >> 1U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (1,2): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [2U] >> 1U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [2U] >> 2U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (2,2): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [2U] >> 2U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [2U] >> 3U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (3,2): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [2U] >> 3U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [2U] >> 4U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (4,2): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [2U] >> 4U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [2U] >> 5U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (5,2): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [2U] >> 5U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [2U] >> 6U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (6,2): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [2U] >> 6U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [2U] >> 7U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (7,2): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [2U] >> 7U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 8U;
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__y = 3U;
    vlSelfRef.tb_snake_map__DOT__q_x = 0U;
    vlSelfRef.tb_snake_map__DOT__q_y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                          [3U]))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (0,3): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                        [3U]));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [3U] >> 1U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (1,3): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [3U] >> 1U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [3U] >> 2U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (2,3): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [3U] >> 2U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [3U] >> 3U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (3,3): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [3U] >> 3U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [3U] >> 4U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (4,3): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [3U] >> 4U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [3U] >> 5U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (5,3): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [3U] >> 5U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [3U] >> 6U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (6,3): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [3U] >> 6U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [3U] >> 7U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (7,3): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [3U] >> 7U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 8U;
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__y = 4U;
    vlSelfRef.tb_snake_map__DOT__q_x = 0U;
    vlSelfRef.tb_snake_map__DOT__q_y = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                          [4U]))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (0,4): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                        [4U]));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_y = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [4U] >> 1U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (1,4): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [4U] >> 1U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_y = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [4U] >> 2U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (2,4): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [4U] >> 2U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_y = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [4U] >> 3U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (3,4): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [4U] >> 3U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_y = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [4U] >> 4U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (4,4): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [4U] >> 4U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_y = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [4U] >> 5U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (5,4): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [4U] >> 5U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_y = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [4U] >> 6U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (6,4): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [4U] >> 6U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_y = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [4U] >> 7U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (7,4): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [4U] >> 7U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 8U;
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__y = 5U;
    vlSelfRef.tb_snake_map__DOT__q_x = 0U;
    vlSelfRef.tb_snake_map__DOT__q_y = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                          [5U]))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (0,5): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                        [5U]));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_y = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [5U] >> 1U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (1,5): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [5U] >> 1U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_y = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [5U] >> 2U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (2,5): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [5U] >> 2U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_y = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [5U] >> 3U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (3,5): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [5U] >> 3U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_y = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [5U] >> 4U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (4,5): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [5U] >> 4U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_y = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [5U] >> 5U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (5,5): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [5U] >> 5U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_y = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [5U] >> 6U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (6,5): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [5U] >> 6U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_y = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [5U] >> 7U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (7,5): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [5U] >> 7U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 8U;
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__y = 6U;
    if (VL_UNLIKELY(((0U != vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err)))) {
        VL_WRITEF_NX("FAILED %0s\n",0,1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data());
        VL_STOP_MT("tb/tb_snake_map.v", 124, "");
    } else {
        VL_WRITEF_NX("PASS %0s: occupancy matches.\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__4__msg.data());
    }
    vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__hx 
        = vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__nx;
    vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__hy 
        = vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__ny;
    vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__nx = 4U;
    vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__ny = 2U;
    vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__tx = 3U;
    vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__ty = 2U;
    __Vtask_tb_snake_map__DOT__do_step__5__ty = vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__ty;
    __Vtask_tb_snake_map__DOT__do_step__5__tx = vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__tx;
    __Vtask_tb_snake_map__DOT__do_step__5__eat_i = 1U;
    __Vtask_tb_snake_map__DOT__do_step__5__ny = vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__ny;
    __Vtask_tb_snake_map__DOT__do_step__5__nx = vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__nx;
    __Vtask_tb_snake_map__DOT__do_step__5__hy = vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__hy;
    __Vtask_tb_snake_map__DOT__do_step__5__hx = vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__hx;
    vlSelfRef.tb_snake_map__DOT__head_xy = ((0x38U 
                                             & (__Vtask_tb_snake_map__DOT__do_step__5__hx 
                                                << 3U)) 
                                            | (7U & __Vtask_tb_snake_map__DOT__do_step__5__hy));
    vlSelfRef.tb_snake_map__DOT__next_x = (7U & __Vtask_tb_snake_map__DOT__do_step__5__nx);
    vlSelfRef.tb_snake_map__DOT__next_y = (7U & __Vtask_tb_snake_map__DOT__do_step__5__ny);
    vlSelfRef.tb_snake_map__DOT__eat = __Vtask_tb_snake_map__DOT__do_step__5__eat_i;
    vlSelfRef.tb_snake_map__DOT__will_pop = (1U & (~ (IData)(__Vtask_tb_snake_map__DOT__do_step__5__eat_i)));
    vlSelfRef.tb_snake_map__DOT__tail_xy = ((0x38U 
                                             & (__Vtask_tb_snake_map__DOT__do_step__5__tx 
                                                << 3U)) 
                                            | (7U & __Vtask_tb_snake_map__DOT__do_step__5__ty));
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         88);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_snake_map__DOT__tick = 1U;
    co_await vlSelfRef.__VtrigSched_h01882e98__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_snake_map.clk)", 
                                                         "tb/tb_snake_map.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_snake_map__DOT__do_step__5__hit_flag 
        = vlSelfRef.tb_snake_map__DOT__self_hit_now;
    vlSelfRef.tb_snake_map__DOT__tick = 0U;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__6__ty 
        = __Vtask_tb_snake_map__DOT__do_step__5__ty;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__6__tx 
        = __Vtask_tb_snake_map__DOT__do_step__5__tx;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__6__hy 
        = __Vtask_tb_snake_map__DOT__do_step__5__hy;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__6__hx 
        = __Vtask_tb_snake_map__DOT__do_step__5__hx;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__6__eat_i 
        = __Vtask_tb_snake_map__DOT__do_step__5__eat_i;
    tb_snake_map__DOT____Vlvbound_hc9e32833__0 = 1U;
    if (VL_LIKELY(((5U >= (7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__6__hy))))) {
        vlSelfRef.tb_snake_map__DOT__occ_ref[(7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__6__hy)] 
            = (((~ ((IData)(1U) << (7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__6__hx))) 
                & vlSelfRef.tb_snake_map__DOT__occ_ref
                [(7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__6__hy)]) 
               | (0xffU & ((IData)(tb_snake_map__DOT____Vlvbound_hc9e32833__0) 
                           << (7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__6__hx))));
    }
    if ((1U & (~ (IData)(__Vtask_tb_snake_map__DOT__ref_apply_tick__6__eat_i)))) {
        vlSelfRef.tb_snake_map__DOT____Vlvbound_h44b69fa1__0 = 0U;
        if (VL_LIKELY(((5U >= (7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__6__ty))))) {
            vlSelfRef.tb_snake_map__DOT__occ_ref[(7U 
                                                  & __Vtask_tb_snake_map__DOT__ref_apply_tick__6__ty)] 
                = (((~ ((IData)(1U) << (7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__6__tx))) 
                    & vlSelfRef.tb_snake_map__DOT__occ_ref
                    [(7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__6__ty)]) 
                   | (0xffU & ((IData)(vlSelfRef.tb_snake_map__DOT____Vlvbound_h44b69fa1__0) 
                               << (7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__6__tx))));
        }
    }
    co_await vlSelfRef.__VtrigSched_h01882e98__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_snake_map.clk)", 
                                                         "tb/tb_snake_map.v", 
                                                         99);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__hit 
        = __Vtask_tb_snake_map__DOT__do_step__5__hit_flag;
    if (VL_UNLIKELY(((0U != vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__hit)))) {
        VL_WRITEF_NX("Unexpected hit on grow step 2\n",0);
        VL_STOP_MT("tb/tb_snake_map.v", 171, "");
    }
    IData/*31:0*/ __Vilp3;
    __Vilp3 = 0U;
    while ((__Vilp3 <= 0x2fU)) {
        __Vtask_tb_snake_map__DOT__check_occ__7__msg[__Vilp3] 
            = Vtb_snake_map__ConstPool__CONST_hdb7d532e_0[__Vilp3];
        __Vilp3 = ((IData)(1U) + __Vilp3);
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 0U;
    vlSelfRef.tb_snake_map__DOT__q_x = 0U;
    vlSelfRef.tb_snake_map__DOT__q_y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                          [0U]))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (0,0): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                        [0U]));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [0U] >> 1U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (1,0): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [0U] >> 1U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [0U] >> 2U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (2,0): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [0U] >> 2U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [0U] >> 3U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (3,0): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [0U] >> 3U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [0U] >> 4U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (4,0): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [0U] >> 4U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [0U] >> 5U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (5,0): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [0U] >> 5U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [0U] >> 6U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (6,0): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [0U] >> 6U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [0U] >> 7U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (7,0): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [0U] >> 7U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 8U;
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__y = 1U;
    vlSelfRef.tb_snake_map__DOT__q_x = 0U;
    vlSelfRef.tb_snake_map__DOT__q_y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                          [1U]))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (0,1): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                        [1U]));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [1U] >> 1U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (1,1): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [1U] >> 1U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [1U] >> 2U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (2,1): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [1U] >> 2U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [1U] >> 3U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (3,1): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [1U] >> 3U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [1U] >> 4U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (4,1): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [1U] >> 4U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [1U] >> 5U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (5,1): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [1U] >> 5U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [1U] >> 6U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (6,1): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [1U] >> 6U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [1U] >> 7U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (7,1): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [1U] >> 7U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 8U;
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__y = 2U;
    vlSelfRef.tb_snake_map__DOT__q_x = 0U;
    vlSelfRef.tb_snake_map__DOT__q_y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                          [2U]))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (0,2): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                        [2U]));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [2U] >> 1U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (1,2): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [2U] >> 1U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [2U] >> 2U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (2,2): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [2U] >> 2U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [2U] >> 3U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (3,2): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [2U] >> 3U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [2U] >> 4U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (4,2): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [2U] >> 4U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [2U] >> 5U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (5,2): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [2U] >> 5U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [2U] >> 6U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (6,2): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [2U] >> 6U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [2U] >> 7U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (7,2): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [2U] >> 7U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 8U;
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__y = 3U;
    vlSelfRef.tb_snake_map__DOT__q_x = 0U;
    vlSelfRef.tb_snake_map__DOT__q_y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                          [3U]))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (0,3): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                        [3U]));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [3U] >> 1U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (1,3): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [3U] >> 1U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [3U] >> 2U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (2,3): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [3U] >> 2U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [3U] >> 3U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (3,3): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [3U] >> 3U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [3U] >> 4U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (4,3): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [3U] >> 4U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [3U] >> 5U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (5,3): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [3U] >> 5U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [3U] >> 6U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (6,3): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [3U] >> 6U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [3U] >> 7U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (7,3): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [3U] >> 7U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 8U;
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__y = 4U;
    vlSelfRef.tb_snake_map__DOT__q_x = 0U;
    vlSelfRef.tb_snake_map__DOT__q_y = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                          [4U]))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (0,4): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                        [4U]));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_y = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [4U] >> 1U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (1,4): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [4U] >> 1U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_y = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [4U] >> 2U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (2,4): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [4U] >> 2U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_y = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [4U] >> 3U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (3,4): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [4U] >> 3U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_y = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [4U] >> 4U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (4,4): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [4U] >> 4U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_y = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [4U] >> 5U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (5,4): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [4U] >> 5U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_y = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [4U] >> 6U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (6,4): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [4U] >> 6U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_y = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [4U] >> 7U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (7,4): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [4U] >> 7U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 8U;
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__y = 5U;
    vlSelfRef.tb_snake_map__DOT__q_x = 0U;
    vlSelfRef.tb_snake_map__DOT__q_y = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                          [5U]))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (0,5): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                        [5U]));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_y = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [5U] >> 1U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (1,5): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [5U] >> 1U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_y = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [5U] >> 2U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (2,5): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [5U] >> 2U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_y = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [5U] >> 3U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (3,5): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [5U] >> 3U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_y = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [5U] >> 4U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (4,5): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [5U] >> 4U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_y = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [5U] >> 5U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (5,5): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [5U] >> 5U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_y = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [5U] >> 6U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (6,5): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [5U] >> 6U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_y = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [5U] >> 7U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (7,5): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [5U] >> 7U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 8U;
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__y = 6U;
    if (VL_UNLIKELY(((0U != vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err)))) {
        VL_WRITEF_NX("FAILED %0s\n",0,1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data());
        VL_STOP_MT("tb/tb_snake_map.v", 124, "");
    } else {
        VL_WRITEF_NX("PASS %0s: occupancy matches.\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__7__msg.data());
    }
    vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__hx 
        = vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__nx;
    vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__hy 
        = vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__ny;
    vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__nx = 5U;
    vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__ny = 2U;
    vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__tx = 2U;
    vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__ty = 2U;
    __Vtask_tb_snake_map__DOT__do_step__8__ty = vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__ty;
    __Vtask_tb_snake_map__DOT__do_step__8__tx = vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__tx;
    __Vtask_tb_snake_map__DOT__do_step__8__eat_i = 0U;
    __Vtask_tb_snake_map__DOT__do_step__8__ny = vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__ny;
    __Vtask_tb_snake_map__DOT__do_step__8__nx = vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__nx;
    __Vtask_tb_snake_map__DOT__do_step__8__hy = vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__hy;
    __Vtask_tb_snake_map__DOT__do_step__8__hx = vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__hx;
    vlSelfRef.tb_snake_map__DOT__head_xy = ((0x38U 
                                             & (__Vtask_tb_snake_map__DOT__do_step__8__hx 
                                                << 3U)) 
                                            | (7U & __Vtask_tb_snake_map__DOT__do_step__8__hy));
    vlSelfRef.tb_snake_map__DOT__next_x = (7U & __Vtask_tb_snake_map__DOT__do_step__8__nx);
    vlSelfRef.tb_snake_map__DOT__next_y = (7U & __Vtask_tb_snake_map__DOT__do_step__8__ny);
    vlSelfRef.tb_snake_map__DOT__eat = __Vtask_tb_snake_map__DOT__do_step__8__eat_i;
    vlSelfRef.tb_snake_map__DOT__will_pop = (1U & (~ (IData)(__Vtask_tb_snake_map__DOT__do_step__8__eat_i)));
    vlSelfRef.tb_snake_map__DOT__tail_xy = ((0x38U 
                                             & (__Vtask_tb_snake_map__DOT__do_step__8__tx 
                                                << 3U)) 
                                            | (7U & __Vtask_tb_snake_map__DOT__do_step__8__ty));
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         88);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_snake_map__DOT__tick = 1U;
    co_await vlSelfRef.__VtrigSched_h01882e98__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_snake_map.clk)", 
                                                         "tb/tb_snake_map.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_snake_map__DOT__do_step__8__hit_flag 
        = vlSelfRef.tb_snake_map__DOT__self_hit_now;
    vlSelfRef.tb_snake_map__DOT__tick = 0U;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__9__ty 
        = __Vtask_tb_snake_map__DOT__do_step__8__ty;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__9__tx 
        = __Vtask_tb_snake_map__DOT__do_step__8__tx;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__9__hy 
        = __Vtask_tb_snake_map__DOT__do_step__8__hy;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__9__hx 
        = __Vtask_tb_snake_map__DOT__do_step__8__hx;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__9__eat_i 
        = __Vtask_tb_snake_map__DOT__do_step__8__eat_i;
    tb_snake_map__DOT____Vlvbound_hc9e32833__0 = 1U;
    if (VL_LIKELY(((5U >= (7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__9__hy))))) {
        vlSelfRef.tb_snake_map__DOT__occ_ref[(7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__9__hy)] 
            = (((~ ((IData)(1U) << (7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__9__hx))) 
                & vlSelfRef.tb_snake_map__DOT__occ_ref
                [(7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__9__hy)]) 
               | (0xffU & ((IData)(tb_snake_map__DOT____Vlvbound_hc9e32833__0) 
                           << (7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__9__hx))));
    }
    if ((1U & (~ (IData)(__Vtask_tb_snake_map__DOT__ref_apply_tick__9__eat_i)))) {
        vlSelfRef.tb_snake_map__DOT____Vlvbound_h44b69fa1__0 = 0U;
        if (VL_LIKELY(((5U >= (7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__9__ty))))) {
            vlSelfRef.tb_snake_map__DOT__occ_ref[(7U 
                                                  & __Vtask_tb_snake_map__DOT__ref_apply_tick__9__ty)] 
                = (((~ ((IData)(1U) << (7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__9__tx))) 
                    & vlSelfRef.tb_snake_map__DOT__occ_ref
                    [(7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__9__ty)]) 
                   | (0xffU & ((IData)(vlSelfRef.tb_snake_map__DOT____Vlvbound_h44b69fa1__0) 
                               << (7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__9__tx))));
        }
    }
    co_await vlSelfRef.__VtrigSched_h01882e98__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_snake_map.clk)", 
                                                         "tb/tb_snake_map.v", 
                                                         99);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__hit 
        = __Vtask_tb_snake_map__DOT__do_step__8__hit_flag;
    if (VL_UNLIKELY(((0U != vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__hit)))) {
        VL_WRITEF_NX("Unexpected hit on pop step 3\n",0);
        VL_STOP_MT("tb/tb_snake_map.v", 178, "");
    }
    IData/*31:0*/ __Vilp4;
    __Vilp4 = 0U;
    while ((__Vilp4 <= 0x2fU)) {
        __Vtask_tb_snake_map__DOT__check_occ__10__msg[__Vilp4] 
            = Vtb_snake_map__ConstPool__CONST_h2942bfe1_0[__Vilp4];
        __Vilp4 = ((IData)(1U) + __Vilp4);
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 0U;
    vlSelfRef.tb_snake_map__DOT__q_x = 0U;
    vlSelfRef.tb_snake_map__DOT__q_y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                          [0U]))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (0,0): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                        [0U]));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [0U] >> 1U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (1,0): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [0U] >> 1U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [0U] >> 2U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (2,0): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [0U] >> 2U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [0U] >> 3U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (3,0): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [0U] >> 3U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [0U] >> 4U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (4,0): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [0U] >> 4U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [0U] >> 5U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (5,0): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [0U] >> 5U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [0U] >> 6U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (6,0): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [0U] >> 6U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [0U] >> 7U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (7,0): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [0U] >> 7U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 8U;
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__y = 1U;
    vlSelfRef.tb_snake_map__DOT__q_x = 0U;
    vlSelfRef.tb_snake_map__DOT__q_y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                          [1U]))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (0,1): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                        [1U]));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [1U] >> 1U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (1,1): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [1U] >> 1U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [1U] >> 2U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (2,1): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [1U] >> 2U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [1U] >> 3U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (3,1): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [1U] >> 3U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [1U] >> 4U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (4,1): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [1U] >> 4U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [1U] >> 5U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (5,1): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [1U] >> 5U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [1U] >> 6U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (6,1): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [1U] >> 6U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [1U] >> 7U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (7,1): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [1U] >> 7U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 8U;
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__y = 2U;
    vlSelfRef.tb_snake_map__DOT__q_x = 0U;
    vlSelfRef.tb_snake_map__DOT__q_y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                          [2U]))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (0,2): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                        [2U]));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [2U] >> 1U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (1,2): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [2U] >> 1U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [2U] >> 2U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (2,2): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [2U] >> 2U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [2U] >> 3U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (3,2): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [2U] >> 3U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [2U] >> 4U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (4,2): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [2U] >> 4U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [2U] >> 5U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (5,2): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [2U] >> 5U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [2U] >> 6U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (6,2): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [2U] >> 6U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [2U] >> 7U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (7,2): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [2U] >> 7U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 8U;
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__y = 3U;
    vlSelfRef.tb_snake_map__DOT__q_x = 0U;
    vlSelfRef.tb_snake_map__DOT__q_y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                          [3U]))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (0,3): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                        [3U]));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [3U] >> 1U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (1,3): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [3U] >> 1U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [3U] >> 2U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (2,3): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [3U] >> 2U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [3U] >> 3U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (3,3): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [3U] >> 3U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [3U] >> 4U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (4,3): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [3U] >> 4U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [3U] >> 5U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (5,3): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [3U] >> 5U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [3U] >> 6U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (6,3): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [3U] >> 6U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [3U] >> 7U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (7,3): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [3U] >> 7U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 8U;
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__y = 4U;
    vlSelfRef.tb_snake_map__DOT__q_x = 0U;
    vlSelfRef.tb_snake_map__DOT__q_y = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                          [4U]))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (0,4): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                        [4U]));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_y = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [4U] >> 1U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (1,4): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [4U] >> 1U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_y = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [4U] >> 2U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (2,4): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [4U] >> 2U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_y = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [4U] >> 3U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (3,4): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [4U] >> 3U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_y = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [4U] >> 4U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (4,4): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [4U] >> 4U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_y = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [4U] >> 5U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (5,4): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [4U] >> 5U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_y = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [4U] >> 6U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (6,4): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [4U] >> 6U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_y = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [4U] >> 7U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (7,4): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [4U] >> 7U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 8U;
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__y = 5U;
    vlSelfRef.tb_snake_map__DOT__q_x = 0U;
    vlSelfRef.tb_snake_map__DOT__q_y = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                          [5U]))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (0,5): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                        [5U]));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_y = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [5U] >> 1U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (1,5): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [5U] >> 1U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_y = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [5U] >> 2U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (2,5): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [5U] >> 2U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_y = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [5U] >> 3U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (3,5): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [5U] >> 3U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_y = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [5U] >> 4U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (4,5): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [5U] >> 4U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_y = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [5U] >> 5U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (5,5): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [5U] >> 5U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_y = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [5U] >> 6U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (6,5): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [5U] >> 6U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_y = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [5U] >> 7U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (7,5): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [5U] >> 7U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 8U;
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__y = 6U;
    if (VL_UNLIKELY(((0U != vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err)))) {
        VL_WRITEF_NX("FAILED %0s\n",0,1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data());
        VL_STOP_MT("tb/tb_snake_map.v", 124, "");
    } else {
        VL_WRITEF_NX("PASS %0s: occupancy matches.\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__10__msg.data());
    }
    vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__hx 
        = vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__nx;
    vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__hy 
        = vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__ny;
    vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__nx = 3U;
    vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__ny = 2U;
    vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__tx = 3U;
    vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__ty = 2U;
    __Vtask_tb_snake_map__DOT__do_step__11__ty = vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__ty;
    __Vtask_tb_snake_map__DOT__do_step__11__tx = vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__tx;
    __Vtask_tb_snake_map__DOT__do_step__11__eat_i = 0U;
    __Vtask_tb_snake_map__DOT__do_step__11__ny = vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__ny;
    __Vtask_tb_snake_map__DOT__do_step__11__nx = vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__nx;
    __Vtask_tb_snake_map__DOT__do_step__11__hy = vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__hy;
    __Vtask_tb_snake_map__DOT__do_step__11__hx = vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__hx;
    vlSelfRef.tb_snake_map__DOT__head_xy = ((0x38U 
                                             & (__Vtask_tb_snake_map__DOT__do_step__11__hx 
                                                << 3U)) 
                                            | (7U & __Vtask_tb_snake_map__DOT__do_step__11__hy));
    vlSelfRef.tb_snake_map__DOT__next_x = (7U & __Vtask_tb_snake_map__DOT__do_step__11__nx);
    vlSelfRef.tb_snake_map__DOT__next_y = (7U & __Vtask_tb_snake_map__DOT__do_step__11__ny);
    vlSelfRef.tb_snake_map__DOT__eat = __Vtask_tb_snake_map__DOT__do_step__11__eat_i;
    vlSelfRef.tb_snake_map__DOT__will_pop = (1U & (~ (IData)(__Vtask_tb_snake_map__DOT__do_step__11__eat_i)));
    vlSelfRef.tb_snake_map__DOT__tail_xy = ((0x38U 
                                             & (__Vtask_tb_snake_map__DOT__do_step__11__tx 
                                                << 3U)) 
                                            | (7U & __Vtask_tb_snake_map__DOT__do_step__11__ty));
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         88);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_snake_map__DOT__tick = 1U;
    co_await vlSelfRef.__VtrigSched_h01882e98__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_snake_map.clk)", 
                                                         "tb/tb_snake_map.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_snake_map__DOT__do_step__11__hit_flag 
        = vlSelfRef.tb_snake_map__DOT__self_hit_now;
    vlSelfRef.tb_snake_map__DOT__tick = 0U;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__12__ty 
        = __Vtask_tb_snake_map__DOT__do_step__11__ty;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__12__tx 
        = __Vtask_tb_snake_map__DOT__do_step__11__tx;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__12__hy 
        = __Vtask_tb_snake_map__DOT__do_step__11__hy;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__12__hx 
        = __Vtask_tb_snake_map__DOT__do_step__11__hx;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__12__eat_i 
        = __Vtask_tb_snake_map__DOT__do_step__11__eat_i;
    tb_snake_map__DOT____Vlvbound_hc9e32833__0 = 1U;
    if (VL_LIKELY(((5U >= (7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__12__hy))))) {
        vlSelfRef.tb_snake_map__DOT__occ_ref[(7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__12__hy)] 
            = (((~ ((IData)(1U) << (7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__12__hx))) 
                & vlSelfRef.tb_snake_map__DOT__occ_ref
                [(7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__12__hy)]) 
               | (0xffU & ((IData)(tb_snake_map__DOT____Vlvbound_hc9e32833__0) 
                           << (7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__12__hx))));
    }
    if ((1U & (~ (IData)(__Vtask_tb_snake_map__DOT__ref_apply_tick__12__eat_i)))) {
        vlSelfRef.tb_snake_map__DOT____Vlvbound_h44b69fa1__0 = 0U;
        if (VL_LIKELY(((5U >= (7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__12__ty))))) {
            vlSelfRef.tb_snake_map__DOT__occ_ref[(7U 
                                                  & __Vtask_tb_snake_map__DOT__ref_apply_tick__12__ty)] 
                = (((~ ((IData)(1U) << (7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__12__tx))) 
                    & vlSelfRef.tb_snake_map__DOT__occ_ref
                    [(7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__12__ty)]) 
                   | (0xffU & ((IData)(vlSelfRef.tb_snake_map__DOT____Vlvbound_h44b69fa1__0) 
                               << (7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__12__tx))));
        }
    }
    co_await vlSelfRef.__VtrigSched_h01882e98__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_snake_map.clk)", 
                                                         "tb/tb_snake_map.v", 
                                                         99);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__hit 
        = __Vtask_tb_snake_map__DOT__do_step__11__hit_flag;
    if (VL_UNLIKELY(((0U != vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__hit)))) {
        VL_WRITEF_NX("Tail-exception incorrectly hit\n",0);
        VL_STOP_MT("tb/tb_snake_map.v", 186, "");
    }
    IData/*31:0*/ __Vilp5;
    __Vilp5 = 0U;
    while ((__Vilp5 <= 0x2fU)) {
        __Vtask_tb_snake_map__DOT__check_occ__13__msg[__Vilp5] 
            = Vtb_snake_map__ConstPool__CONST_h1a21ba4c_0[__Vilp5];
        __Vilp5 = ((IData)(1U) + __Vilp5);
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 0U;
    vlSelfRef.tb_snake_map__DOT__q_x = 0U;
    vlSelfRef.tb_snake_map__DOT__q_y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                          [0U]))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (0,0): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                        [0U]));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [0U] >> 1U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (1,0): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [0U] >> 1U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [0U] >> 2U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (2,0): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [0U] >> 2U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [0U] >> 3U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (3,0): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [0U] >> 3U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [0U] >> 4U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (4,0): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [0U] >> 4U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [0U] >> 5U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (5,0): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [0U] >> 5U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [0U] >> 6U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (6,0): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [0U] >> 6U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_y = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [0U] >> 7U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (7,0): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [0U] >> 7U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 8U;
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__y = 1U;
    vlSelfRef.tb_snake_map__DOT__q_x = 0U;
    vlSelfRef.tb_snake_map__DOT__q_y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                          [1U]))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (0,1): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                        [1U]));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [1U] >> 1U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (1,1): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [1U] >> 1U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [1U] >> 2U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (2,1): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [1U] >> 2U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [1U] >> 3U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (3,1): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [1U] >> 3U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [1U] >> 4U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (4,1): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [1U] >> 4U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [1U] >> 5U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (5,1): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [1U] >> 5U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [1U] >> 6U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (6,1): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [1U] >> 6U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_y = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [1U] >> 7U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (7,1): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [1U] >> 7U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 8U;
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__y = 2U;
    vlSelfRef.tb_snake_map__DOT__q_x = 0U;
    vlSelfRef.tb_snake_map__DOT__q_y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                          [2U]))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (0,2): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                        [2U]));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [2U] >> 1U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (1,2): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [2U] >> 1U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [2U] >> 2U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (2,2): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [2U] >> 2U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [2U] >> 3U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (3,2): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [2U] >> 3U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [2U] >> 4U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (4,2): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [2U] >> 4U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [2U] >> 5U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (5,2): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [2U] >> 5U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [2U] >> 6U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (6,2): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [2U] >> 6U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_y = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [2U] >> 7U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (7,2): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [2U] >> 7U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 8U;
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__y = 3U;
    vlSelfRef.tb_snake_map__DOT__q_x = 0U;
    vlSelfRef.tb_snake_map__DOT__q_y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                          [3U]))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (0,3): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                        [3U]));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [3U] >> 1U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (1,3): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [3U] >> 1U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [3U] >> 2U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (2,3): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [3U] >> 2U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [3U] >> 3U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (3,3): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [3U] >> 3U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [3U] >> 4U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (4,3): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [3U] >> 4U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [3U] >> 5U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (5,3): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [3U] >> 5U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [3U] >> 6U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (6,3): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [3U] >> 6U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_y = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [3U] >> 7U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (7,3): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [3U] >> 7U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 8U;
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__y = 4U;
    vlSelfRef.tb_snake_map__DOT__q_x = 0U;
    vlSelfRef.tb_snake_map__DOT__q_y = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                          [4U]))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (0,4): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                        [4U]));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_y = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [4U] >> 1U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (1,4): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [4U] >> 1U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_y = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [4U] >> 2U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (2,4): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [4U] >> 2U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_y = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [4U] >> 3U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (3,4): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [4U] >> 3U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_y = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [4U] >> 4U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (4,4): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [4U] >> 4U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_y = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [4U] >> 5U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (5,4): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [4U] >> 5U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_y = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [4U] >> 6U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (6,4): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [4U] >> 6U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_y = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [4U] >> 7U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (7,4): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [4U] >> 7U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 8U;
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__y = 5U;
    vlSelfRef.tb_snake_map__DOT__q_x = 0U;
    vlSelfRef.tb_snake_map__DOT__q_y = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                          [5U]))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (0,5): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & vlSelfRef.tb_snake_map__DOT__occ_ref
                        [5U]));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_x = 1U;
    vlSelfRef.tb_snake_map__DOT__q_y = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [5U] >> 1U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (1,5): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [5U] >> 1U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_x = 2U;
    vlSelfRef.tb_snake_map__DOT__q_y = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [5U] >> 2U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (2,5): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [5U] >> 2U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_x = 3U;
    vlSelfRef.tb_snake_map__DOT__q_y = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [5U] >> 3U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (3,5): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [5U] >> 3U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_x = 4U;
    vlSelfRef.tb_snake_map__DOT__q_y = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [5U] >> 4U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (4,5): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [5U] >> 4U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_x = 5U;
    vlSelfRef.tb_snake_map__DOT__q_y = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [5U] >> 5U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (5,5): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [5U] >> 5U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_x = 6U;
    vlSelfRef.tb_snake_map__DOT__q_y = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [5U] >> 6U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (6,5): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [5U] >> 6U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_x = 7U;
    vlSelfRef.tb_snake_map__DOT__q_y = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_snake_map__DOT__body_on) 
                      != (1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                                [5U] >> 7U)))))) {
        VL_WRITEF_NX("ERROR %0s: body_on mismatch at (7,5): got %0b exp %0b\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data(),
                     1,(IData)(vlSelfRef.tb_snake_map__DOT__body_on),
                     1,(1U & (vlSelfRef.tb_snake_map__DOT__occ_ref
                              [5U] >> 7U)));
        vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err = 1U;
    }
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x = 8U;
    vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__y = 6U;
    if (VL_UNLIKELY(((0U != vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err)))) {
        VL_WRITEF_NX("FAILED %0s\n",0,1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data());
        VL_STOP_MT("tb/tb_snake_map.v", 124, "");
    } else {
        VL_WRITEF_NX("PASS %0s: occupancy matches.\n",0,
                     1536,__Vtask_tb_snake_map__DOT__check_occ__13__msg.data());
    }
    vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__hx 
        = vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__nx;
    vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__hy 
        = vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__ny;
    vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__nx = 4U;
    vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__ny = 2U;
    vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__tx = 3U;
    vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__ty = 2U;
    __Vtask_tb_snake_map__DOT__do_step__14__ty = vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__ty;
    __Vtask_tb_snake_map__DOT__do_step__14__tx = vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__tx;
    __Vtask_tb_snake_map__DOT__do_step__14__eat_i = 0U;
    __Vtask_tb_snake_map__DOT__do_step__14__ny = vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__ny;
    __Vtask_tb_snake_map__DOT__do_step__14__nx = vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__nx;
    __Vtask_tb_snake_map__DOT__do_step__14__hy = vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__hy;
    __Vtask_tb_snake_map__DOT__do_step__14__hx = vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__hx;
    vlSelfRef.tb_snake_map__DOT__head_xy = ((0x38U 
                                             & (__Vtask_tb_snake_map__DOT__do_step__14__hx 
                                                << 3U)) 
                                            | (7U & __Vtask_tb_snake_map__DOT__do_step__14__hy));
    vlSelfRef.tb_snake_map__DOT__next_x = (7U & __Vtask_tb_snake_map__DOT__do_step__14__nx);
    vlSelfRef.tb_snake_map__DOT__next_y = (7U & __Vtask_tb_snake_map__DOT__do_step__14__ny);
    vlSelfRef.tb_snake_map__DOT__eat = __Vtask_tb_snake_map__DOT__do_step__14__eat_i;
    vlSelfRef.tb_snake_map__DOT__will_pop = (1U & (~ (IData)(__Vtask_tb_snake_map__DOT__do_step__14__eat_i)));
    vlSelfRef.tb_snake_map__DOT__tail_xy = ((0x38U 
                                             & (__Vtask_tb_snake_map__DOT__do_step__14__tx 
                                                << 3U)) 
                                            | (7U & __Vtask_tb_snake_map__DOT__do_step__14__ty));
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         88);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_snake_map__DOT__tick = 1U;
    co_await vlSelfRef.__VtrigSched_h01882e98__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_snake_map.clk)", 
                                                         "tb/tb_snake_map.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_snake_map__DOT__do_step__14__hit_flag 
        = vlSelfRef.tb_snake_map__DOT__self_hit_now;
    vlSelfRef.tb_snake_map__DOT__tick = 0U;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__15__ty 
        = __Vtask_tb_snake_map__DOT__do_step__14__ty;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__15__tx 
        = __Vtask_tb_snake_map__DOT__do_step__14__tx;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__15__hy 
        = __Vtask_tb_snake_map__DOT__do_step__14__hy;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__15__hx 
        = __Vtask_tb_snake_map__DOT__do_step__14__hx;
    __Vtask_tb_snake_map__DOT__ref_apply_tick__15__eat_i 
        = __Vtask_tb_snake_map__DOT__do_step__14__eat_i;
    tb_snake_map__DOT____Vlvbound_hc9e32833__0 = 1U;
    if (VL_LIKELY(((5U >= (7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__15__hy))))) {
        vlSelfRef.tb_snake_map__DOT__occ_ref[(7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__15__hy)] 
            = (((~ ((IData)(1U) << (7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__15__hx))) 
                & vlSelfRef.tb_snake_map__DOT__occ_ref
                [(7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__15__hy)]) 
               | (0xffU & ((IData)(tb_snake_map__DOT____Vlvbound_hc9e32833__0) 
                           << (7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__15__hx))));
    }
    if ((1U & (~ (IData)(__Vtask_tb_snake_map__DOT__ref_apply_tick__15__eat_i)))) {
        vlSelfRef.tb_snake_map__DOT____Vlvbound_h44b69fa1__0 = 0U;
        if (VL_LIKELY(((5U >= (7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__15__ty))))) {
            vlSelfRef.tb_snake_map__DOT__occ_ref[(7U 
                                                  & __Vtask_tb_snake_map__DOT__ref_apply_tick__15__ty)] 
                = (((~ ((IData)(1U) << (7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__15__tx))) 
                    & vlSelfRef.tb_snake_map__DOT__occ_ref
                    [(7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__15__ty)]) 
                   | (0xffU & ((IData)(vlSelfRef.tb_snake_map__DOT____Vlvbound_h44b69fa1__0) 
                               << (7U & __Vtask_tb_snake_map__DOT__ref_apply_tick__15__tx))));
        }
    }
    co_await vlSelfRef.__VtrigSched_h01882e98__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_snake_map.clk)", 
                                                         "tb/tb_snake_map.v", 
                                                         99);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_snake_map.v", 
                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__hit 
        = __Vtask_tb_snake_map__DOT__do_step__14__hit_flag;
    if (VL_UNLIKELY(((1U & (~ (0U != vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__hit)))))) {
        VL_WRITEF_NX("Expected self-hit did not trigger\n",0);
        VL_STOP_MT("tb/tb_snake_map.v", 193, "");
    }
    VL_WRITEF_NX("PASS: real self-hit step 5\nAll tests passed \342\234\205\n",0);
    VL_FINISH_MT("tb/tb_snake_map.v", 197, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

void Vtb_snake_map___024root___act_comb__TOP__0(Vtb_snake_map___024root* vlSelf);

void Vtb_snake_map___024root___eval_act(Vtb_snake_map___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_snake_map___024root___eval_act\n"); );
    Vtb_snake_map__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((5ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_snake_map___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_snake_map___024root___act_comb__TOP__0(Vtb_snake_map___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_snake_map___024root___act_comb__TOP__0\n"); );
    Vtb_snake_map__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_snake_map__DOT__body_on = (1U & ((
                                                   (5U 
                                                    >= (IData)(vlSelfRef.tb_snake_map__DOT__q_y))
                                                    ? 
                                                   vlSelfRef.tb_snake_map__DOT__dut__DOT__occ
                                                   [vlSelfRef.tb_snake_map__DOT__q_y]
                                                    : 0U) 
                                                  >> (IData)(vlSelfRef.tb_snake_map__DOT__q_x)));
    vlSelfRef.tb_snake_map__DOT__self_hit_now = ((IData)(vlSelfRef.tb_snake_map__DOT__tick) 
                                                 & ((~ 
                                                     ((IData)(vlSelfRef.tb_snake_map__DOT__will_pop) 
                                                      & ((IData)(vlSelfRef.tb_snake_map__DOT__dut__DOT__tail_valid) 
                                                         & (((IData)(vlSelfRef.tb_snake_map__DOT__next_x) 
                                                             == 
                                                             (7U 
                                                              & ((IData)(vlSelfRef.tb_snake_map__DOT__tail_xy) 
                                                                 >> 3U))) 
                                                            & ((IData)(vlSelfRef.tb_snake_map__DOT__next_y) 
                                                               == 
                                                               (7U 
                                                                & (IData)(vlSelfRef.tb_snake_map__DOT__tail_xy))))))) 
                                                    & (((5U 
                                                         >= (IData)(vlSelfRef.tb_snake_map__DOT__next_y))
                                                         ? 
                                                        vlSelfRef.tb_snake_map__DOT__dut__DOT__occ
                                                        [vlSelfRef.tb_snake_map__DOT__next_y]
                                                         : 0U) 
                                                       >> (IData)(vlSelfRef.tb_snake_map__DOT__next_x))));
}

void Vtb_snake_map___024root___nba_sequent__TOP__0(Vtb_snake_map___024root* vlSelf);
void Vtb_snake_map___024root___nba_sequent__TOP__1(Vtb_snake_map___024root* vlSelf);

void Vtb_snake_map___024root___eval_nba(Vtb_snake_map___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_snake_map___024root___eval_nba\n"); );
    Vtb_snake_map__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_snake_map___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_snake_map___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_snake_map___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_snake_map___024root___nba_sequent__TOP__0(Vtb_snake_map___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_snake_map___024root___nba_sequent__TOP__0\n"); );
    Vtb_snake_map__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.tb_snake_map__DOT__tick))) {
        VL_WRITEF_NX("[%0t] eat=%0b pop=%0b head=(%0#,%0#) tail=(%0#,%0#) next=(%0#,%0#)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_snake_map__DOT__eat),
                     1,vlSelfRef.tb_snake_map__DOT__will_pop,
                     3,(7U & ((IData)(vlSelfRef.tb_snake_map__DOT__head_xy) 
                              >> 3U)),3,(7U & (IData)(vlSelfRef.tb_snake_map__DOT__head_xy)),
                     3,(7U & ((IData)(vlSelfRef.tb_snake_map__DOT__tail_xy) 
                              >> 3U)),3,(7U & (IData)(vlSelfRef.tb_snake_map__DOT__tail_xy)),
                     3,(IData)(vlSelfRef.tb_snake_map__DOT__next_x),
                     3,vlSelfRef.tb_snake_map__DOT__next_y);
    }
}

VL_INLINE_OPT void Vtb_snake_map___024root___nba_sequent__TOP__1(Vtb_snake_map___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_snake_map___024root___nba_sequent__TOP__1\n"); );
    Vtb_snake_map__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdlySet__tb_snake_map__DOT__dut__DOT__occ__v0;
    __VdlySet__tb_snake_map__DOT__dut__DOT__occ__v0 = 0;
    CData/*0:0*/ __VdlyVal__tb_snake_map__DOT__dut__DOT__occ__v6;
    __VdlyVal__tb_snake_map__DOT__dut__DOT__occ__v6 = 0;
    CData/*2:0*/ __VdlyLsb__tb_snake_map__DOT__dut__DOT__occ__v6;
    __VdlyLsb__tb_snake_map__DOT__dut__DOT__occ__v6 = 0;
    CData/*2:0*/ __VdlyDim0__tb_snake_map__DOT__dut__DOT__occ__v6;
    __VdlyDim0__tb_snake_map__DOT__dut__DOT__occ__v6 = 0;
    CData/*0:0*/ __VdlySet__tb_snake_map__DOT__dut__DOT__occ__v6;
    __VdlySet__tb_snake_map__DOT__dut__DOT__occ__v6 = 0;
    CData/*0:0*/ __VdlyVal__tb_snake_map__DOT__dut__DOT__occ__v7;
    __VdlyVal__tb_snake_map__DOT__dut__DOT__occ__v7 = 0;
    CData/*2:0*/ __VdlyLsb__tb_snake_map__DOT__dut__DOT__occ__v7;
    __VdlyLsb__tb_snake_map__DOT__dut__DOT__occ__v7 = 0;
    CData/*2:0*/ __VdlyDim0__tb_snake_map__DOT__dut__DOT__occ__v7;
    __VdlyDim0__tb_snake_map__DOT__dut__DOT__occ__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_snake_map__DOT__dut__DOT__occ__v7;
    __VdlySet__tb_snake_map__DOT__dut__DOT__occ__v7 = 0;
    CData/*0:0*/ __VdlyVal__tb_snake_map__DOT__dut__DOT__occ__v8;
    __VdlyVal__tb_snake_map__DOT__dut__DOT__occ__v8 = 0;
    CData/*2:0*/ __VdlyLsb__tb_snake_map__DOT__dut__DOT__occ__v8;
    __VdlyLsb__tb_snake_map__DOT__dut__DOT__occ__v8 = 0;
    CData/*2:0*/ __VdlyDim0__tb_snake_map__DOT__dut__DOT__occ__v8;
    __VdlyDim0__tb_snake_map__DOT__dut__DOT__occ__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_snake_map__DOT__dut__DOT__occ__v8;
    __VdlySet__tb_snake_map__DOT__dut__DOT__occ__v8 = 0;
    // Body
    __VdlySet__tb_snake_map__DOT__dut__DOT__occ__v0 = 0U;
    __VdlySet__tb_snake_map__DOT__dut__DOT__occ__v6 = 0U;
    __VdlySet__tb_snake_map__DOT__dut__DOT__occ__v7 = 0U;
    __VdlySet__tb_snake_map__DOT__dut__DOT__occ__v8 = 0U;
    if (vlSelfRef.tb_snake_map__DOT__reset) {
        vlSelfRef.tb_snake_map__DOT__dut__DOT__r = 6U;
        __VdlySet__tb_snake_map__DOT__dut__DOT__occ__v0 = 1U;
    } else if (vlSelfRef.tb_snake_map__DOT__tick) {
        if (((IData)(vlSelfRef.tb_snake_map__DOT__dut__DOT__tail_valid) 
             | (IData)(vlSelfRef.tb_snake_map__DOT__eat))) {
            vlSelfRef.tb_snake_map__DOT__dut__DOT____Vlvbound_h2ad7622e__0 = 1U;
            if ((5U >= (7U & (IData)(vlSelfRef.tb_snake_map__DOT__head_xy)))) {
                __VdlyVal__tb_snake_map__DOT__dut__DOT__occ__v6 
                    = vlSelfRef.tb_snake_map__DOT__dut__DOT____Vlvbound_h2ad7622e__0;
                __VdlyLsb__tb_snake_map__DOT__dut__DOT__occ__v6 
                    = (7U & ((IData)(vlSelfRef.tb_snake_map__DOT__head_xy) 
                             >> 3U));
                __VdlyDim0__tb_snake_map__DOT__dut__DOT__occ__v6 
                    = (7U & (IData)(vlSelfRef.tb_snake_map__DOT__head_xy));
                __VdlySet__tb_snake_map__DOT__dut__DOT__occ__v6 = 1U;
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_snake_map__DOT__eat)))) {
            if (vlSelfRef.tb_snake_map__DOT__dut__DOT__tail_valid) {
                vlSelfRef.tb_snake_map__DOT__dut__DOT____Vlvbound_he6da044b__0 = 0U;
                if ((5U >= (7U & (IData)(vlSelfRef.tb_snake_map__DOT__tail_xy)))) {
                    __VdlyVal__tb_snake_map__DOT__dut__DOT__occ__v7 
                        = vlSelfRef.tb_snake_map__DOT__dut__DOT____Vlvbound_he6da044b__0;
                    __VdlyLsb__tb_snake_map__DOT__dut__DOT__occ__v7 
                        = (7U & ((IData)(vlSelfRef.tb_snake_map__DOT__tail_xy) 
                                 >> 3U));
                    __VdlyDim0__tb_snake_map__DOT__dut__DOT__occ__v7 
                        = (7U & (IData)(vlSelfRef.tb_snake_map__DOT__tail_xy));
                    __VdlySet__tb_snake_map__DOT__dut__DOT__occ__v7 = 1U;
                }
            } else {
                vlSelfRef.tb_snake_map__DOT__dut__DOT____Vlvbound_h2ad7622e__1 = 0U;
                if ((5U >= (7U & (IData)(vlSelfRef.tb_snake_map__DOT__head_xy)))) {
                    __VdlyVal__tb_snake_map__DOT__dut__DOT__occ__v8 
                        = vlSelfRef.tb_snake_map__DOT__dut__DOT____Vlvbound_h2ad7622e__1;
                    __VdlyLsb__tb_snake_map__DOT__dut__DOT__occ__v8 
                        = (7U & ((IData)(vlSelfRef.tb_snake_map__DOT__head_xy) 
                                 >> 3U));
                    __VdlyDim0__tb_snake_map__DOT__dut__DOT__occ__v8 
                        = (7U & (IData)(vlSelfRef.tb_snake_map__DOT__head_xy));
                    __VdlySet__tb_snake_map__DOT__dut__DOT__occ__v8 = 1U;
                }
            }
        }
    }
    if (__VdlySet__tb_snake_map__DOT__dut__DOT__occ__v0) {
        vlSelfRef.tb_snake_map__DOT__dut__DOT__occ[0U] = 0U;
        vlSelfRef.tb_snake_map__DOT__dut__DOT__occ[1U] = 0U;
        vlSelfRef.tb_snake_map__DOT__dut__DOT__occ[2U] = 0U;
        vlSelfRef.tb_snake_map__DOT__dut__DOT__occ[3U] = 0U;
        vlSelfRef.tb_snake_map__DOT__dut__DOT__occ[4U] = 0U;
        vlSelfRef.tb_snake_map__DOT__dut__DOT__occ[5U] = 0U;
    }
    if (__VdlySet__tb_snake_map__DOT__dut__DOT__occ__v6) {
        vlSelfRef.tb_snake_map__DOT__dut__DOT__occ[__VdlyDim0__tb_snake_map__DOT__dut__DOT__occ__v6] 
            = (((~ ((IData)(1U) << (IData)(__VdlyLsb__tb_snake_map__DOT__dut__DOT__occ__v6))) 
                & vlSelfRef.tb_snake_map__DOT__dut__DOT__occ
                [__VdlyDim0__tb_snake_map__DOT__dut__DOT__occ__v6]) 
               | (0xffU & ((IData)(__VdlyVal__tb_snake_map__DOT__dut__DOT__occ__v6) 
                           << (IData)(__VdlyLsb__tb_snake_map__DOT__dut__DOT__occ__v6))));
    }
    if (__VdlySet__tb_snake_map__DOT__dut__DOT__occ__v7) {
        vlSelfRef.tb_snake_map__DOT__dut__DOT__occ[__VdlyDim0__tb_snake_map__DOT__dut__DOT__occ__v7] 
            = (((~ ((IData)(1U) << (IData)(__VdlyLsb__tb_snake_map__DOT__dut__DOT__occ__v7))) 
                & vlSelfRef.tb_snake_map__DOT__dut__DOT__occ
                [__VdlyDim0__tb_snake_map__DOT__dut__DOT__occ__v7]) 
               | (0xffU & ((IData)(__VdlyVal__tb_snake_map__DOT__dut__DOT__occ__v7) 
                           << (IData)(__VdlyLsb__tb_snake_map__DOT__dut__DOT__occ__v7))));
    }
    if (__VdlySet__tb_snake_map__DOT__dut__DOT__occ__v8) {
        vlSelfRef.tb_snake_map__DOT__dut__DOT__occ[__VdlyDim0__tb_snake_map__DOT__dut__DOT__occ__v8] 
            = (((~ ((IData)(1U) << (IData)(__VdlyLsb__tb_snake_map__DOT__dut__DOT__occ__v8))) 
                & vlSelfRef.tb_snake_map__DOT__dut__DOT__occ
                [__VdlyDim0__tb_snake_map__DOT__dut__DOT__occ__v8]) 
               | (0xffU & ((IData)(__VdlyVal__tb_snake_map__DOT__dut__DOT__occ__v8) 
                           << (IData)(__VdlyLsb__tb_snake_map__DOT__dut__DOT__occ__v8))));
    }
}

void Vtb_snake_map___024root___timing_commit(Vtb_snake_map___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_snake_map___024root___timing_commit\n"); );
    Vtb_snake_map__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h01882e98__0.commit(
                                                   "@(posedge tb_snake_map.clk)");
    }
}

void Vtb_snake_map___024root___timing_resume(Vtb_snake_map___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_snake_map___024root___timing_resume\n"); );
    Vtb_snake_map__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h01882e98__0.resume(
                                                   "@(posedge tb_snake_map.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_snake_map___024root___eval_triggers__act(Vtb_snake_map___024root* vlSelf);

bool Vtb_snake_map___024root___eval_phase__act(Vtb_snake_map___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_snake_map___024root___eval_phase__act\n"); );
    Vtb_snake_map__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_snake_map___024root___eval_triggers__act(vlSelf);
    Vtb_snake_map___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_snake_map___024root___timing_resume(vlSelf);
        Vtb_snake_map___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_snake_map___024root___eval_phase__nba(Vtb_snake_map___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_snake_map___024root___eval_phase__nba\n"); );
    Vtb_snake_map__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_snake_map___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_snake_map___024root___dump_triggers__nba(Vtb_snake_map___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_snake_map___024root___dump_triggers__act(Vtb_snake_map___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_snake_map___024root___eval(Vtb_snake_map___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_snake_map___024root___eval\n"); );
    Vtb_snake_map__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_snake_map___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_snake_map.v", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_snake_map___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_snake_map.v", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_snake_map___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_snake_map___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_snake_map___024root___eval_debug_assertions(Vtb_snake_map___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_snake_map___024root___eval_debug_assertions\n"); );
    Vtb_snake_map__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
