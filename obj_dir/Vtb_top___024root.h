// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP___024ROOT_H_
#define VERILATED_VTB_TOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_top__DOT__clk;
    CData/*0:0*/ tb_top__DOT__btnC;
    CData/*0:0*/ tb_top__DOT__dut__DOT__pix_clk;
    CData/*0:0*/ tb_top__DOT__dut__DOT__reset_pix;
    CData/*0:0*/ tb_top__DOT__dut__DOT__game_tick;
    CData/*0:0*/ tb_top__DOT__dut__DOT__game_over;
    CData/*0:0*/ tb_top__DOT__btnU;
    CData/*0:0*/ tb_top__DOT__btnD;
    CData/*0:0*/ tb_top__DOT__btnL;
    CData/*0:0*/ tb_top__DOT__btnR;
    CData/*0:0*/ tb_top__DOT__hsync;
    CData/*0:0*/ tb_top__DOT__vsync;
    CData/*1:0*/ tb_top__DOT__dut__DOT__div4;
    CData/*0:0*/ tb_top__DOT__dut__DOT__video_on;
    CData/*1:0*/ tb_top__DOT__dut__DOT__su;
    CData/*1:0*/ tb_top__DOT__dut__DOT__sd;
    CData/*1:0*/ tb_top__DOT__dut__DOT__sl;
    CData/*1:0*/ tb_top__DOT__dut__DOT__sr;
    CData/*1:0*/ tb_top__DOT__dut__DOT__dir_reg;
    CData/*0:0*/ tb_top__DOT__dut__DOT__gated_tick;
    CData/*5:0*/ tb_top__DOT__dut__DOT__head_x;
    CData/*4:0*/ tb_top__DOT__dut__DOT__head_y;
    CData/*7:0*/ tb_top__DOT__dut__DOT__snake_len;
    CData/*0:0*/ tb_top__DOT__dut__DOT__ate_pos;
    CData/*0:0*/ tb_top__DOT__dut__DOT____Vcellinp__sb__pop;
    CData/*5:0*/ tb_top__DOT__dut__DOT__apple_x;
    CData/*4:0*/ tb_top__DOT__dut__DOT__apple_y;
    CData/*1:0*/ __Vdly__tb_top__DOT__dut__DOT__su;
    CData/*1:0*/ __Vdly__tb_top__DOT__dut__DOT__sd;
    CData/*1:0*/ __Vdly__tb_top__DOT__dut__DOT__sl;
    CData/*1:0*/ __Vdly__tb_top__DOT__dut__DOT__sr;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__dut__DOT__pix_clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__dut__DOT__reset_pix__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__btnC__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__dut__DOT__game_tick__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__dut__DOT__game_over__0;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ tb_top__DOT__dut__DOT__hcount;
    SData/*9:0*/ tb_top__DOT__dut__DOT__vcount;
    SData/*10:0*/ tb_top__DOT__dut__DOT__sb__DOT__data_out;
    SData/*15:0*/ tb_top__DOT__dut__DOT__ag__DOT__lfsr;
    SData/*15:0*/ tb_top__DOT__dut__DOT__ag__DOT__lfsr_next;
    IData/*31:0*/ tb_top__DOT__tick_count;
    IData/*31:0*/ tb_top__DOT__dut__DOT__td__DOT__counter;
    IData/*31:0*/ tb_top__DOT__dut__DOT__sb__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<SData/*10:0*/, 128> tb_top__DOT__dut__DOT__sb__DOT__mem;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlNBACommitQueue<VlUnpacked<SData/*10:0*/, 128>, false, SData/*10:0*/, 1> __VdlyCommitQueuetb_top__DOT__dut__DOT__sb__DOT__mem;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hb0d3b65d__0;
    VlTriggerScheduler __VtrigSched_h94f5b7f7__0;
    VlTriggerScheduler __VtrigSched_h50ca02e9__0;
    VlTriggerScheduler __VtrigSched_haf1121db__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<7> __VactTriggered;
    VlTriggerVec<7> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_top___024root(Vtb_top__Syms* symsp, const char* v__name);
    ~Vtb_top___024root();
    VL_UNCOPYABLE(Vtb_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
