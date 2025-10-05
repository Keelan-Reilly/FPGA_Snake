// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_snake_map.h for the primary calling header

#ifndef VERILATED_VTB_SNAKE_MAP___024ROOT_H_
#define VERILATED_VTB_SNAKE_MAP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_snake_map__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_snake_map___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_snake_map__DOT__clk;
    CData/*0:0*/ tb_snake_map__DOT__reset;
    CData/*0:0*/ tb_snake_map__DOT__tick;
    CData/*0:0*/ tb_snake_map__DOT__eat;
    CData/*5:0*/ tb_snake_map__DOT__head_xy;
    CData/*5:0*/ tb_snake_map__DOT__tail_xy;
    CData/*2:0*/ tb_snake_map__DOT__q_x;
    CData/*2:0*/ tb_snake_map__DOT__q_y;
    CData/*0:0*/ tb_snake_map__DOT__body_on;
    CData/*2:0*/ tb_snake_map__DOT__next_x;
    CData/*2:0*/ tb_snake_map__DOT__next_y;
    CData/*0:0*/ tb_snake_map__DOT__will_pop;
    CData/*0:0*/ tb_snake_map__DOT__self_hit_now;
    CData/*0:0*/ tb_snake_map__DOT____Vlvbound_h44b69fa1__0;
    CData/*0:0*/ tb_snake_map__DOT__dut__DOT__tail_valid;
    CData/*0:0*/ tb_snake_map__DOT__dut__DOT____Vlvbound_h2ad7622e__0;
    CData/*0:0*/ tb_snake_map__DOT__dut__DOT____Vlvbound_he6da044b__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_snake_map__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_snake_map__DOT__reset__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_snake_map__DOT__ref_clear__Vstatic__y;
    IData/*31:0*/ tb_snake_map__DOT__check_occ__Vstatic__x;
    IData/*31:0*/ tb_snake_map__DOT__check_occ__Vstatic__y;
    IData/*31:0*/ tb_snake_map__DOT__check_occ__Vstatic__err;
    IData/*31:0*/ tb_snake_map__DOT__unnamedblk1__DOT__hit;
    IData/*31:0*/ tb_snake_map__DOT__unnamedblk1__DOT__hx;
    IData/*31:0*/ tb_snake_map__DOT__unnamedblk1__DOT__hy;
    IData/*31:0*/ tb_snake_map__DOT__unnamedblk1__DOT__nx;
    IData/*31:0*/ tb_snake_map__DOT__unnamedblk1__DOT__ny;
    IData/*31:0*/ tb_snake_map__DOT__unnamedblk1__DOT__tx;
    IData/*31:0*/ tb_snake_map__DOT__unnamedblk1__DOT__ty;
    IData/*31:0*/ tb_snake_map__DOT__dut__DOT__r;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 6> tb_snake_map__DOT__occ_ref;
    VlUnpacked<CData/*7:0*/, 6> tb_snake_map__DOT__dut__DOT__occ;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h01882e98__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_snake_map__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_snake_map___024root(Vtb_snake_map__Syms* symsp, const char* v__name);
    ~Vtb_snake_map___024root();
    VL_UNCOPYABLE(Vtb_snake_map___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
