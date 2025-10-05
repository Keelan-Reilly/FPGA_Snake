// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_snake_map__Syms.h"


void Vtb_snake_map___024root__trace_chg_0_sub_0(Vtb_snake_map___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_snake_map___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_snake_map___024root__trace_chg_0\n"); );
    // Init
    Vtb_snake_map___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_snake_map___024root*>(voidSelf);
    Vtb_snake_map__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_snake_map___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_snake_map___024root__trace_chg_0_sub_0(Vtb_snake_map___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_snake_map___024root__trace_chg_0_sub_0\n"); );
    Vtb_snake_map__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_snake_map__DOT__reset));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_snake_map__DOT__tick));
        bufp->chgBit(oldp+2,(vlSelfRef.tb_snake_map__DOT__eat));
        bufp->chgCData(oldp+3,(vlSelfRef.tb_snake_map__DOT__head_xy),6);
        bufp->chgCData(oldp+4,(vlSelfRef.tb_snake_map__DOT__tail_xy),6);
        bufp->chgCData(oldp+5,(vlSelfRef.tb_snake_map__DOT__q_x),3);
        bufp->chgCData(oldp+6,(vlSelfRef.tb_snake_map__DOT__q_y),3);
        bufp->chgCData(oldp+7,(vlSelfRef.tb_snake_map__DOT__next_x),3);
        bufp->chgCData(oldp+8,(vlSelfRef.tb_snake_map__DOT__next_y),3);
        bufp->chgBit(oldp+9,(vlSelfRef.tb_snake_map__DOT__will_pop));
        bufp->chgCData(oldp+10,(vlSelfRef.tb_snake_map__DOT__occ_ref[0]),8);
        bufp->chgCData(oldp+11,(vlSelfRef.tb_snake_map__DOT__occ_ref[1]),8);
        bufp->chgCData(oldp+12,(vlSelfRef.tb_snake_map__DOT__occ_ref[2]),8);
        bufp->chgCData(oldp+13,(vlSelfRef.tb_snake_map__DOT__occ_ref[3]),8);
        bufp->chgCData(oldp+14,(vlSelfRef.tb_snake_map__DOT__occ_ref[4]),8);
        bufp->chgCData(oldp+15,(vlSelfRef.tb_snake_map__DOT__occ_ref[5]),8);
        bufp->chgIData(oldp+16,(vlSelfRef.tb_snake_map__DOT__ref_clear__Vstatic__y),32);
        bufp->chgIData(oldp+17,(vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__x),32);
        bufp->chgIData(oldp+18,(vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__y),32);
        bufp->chgIData(oldp+19,(vlSelfRef.tb_snake_map__DOT__check_occ__Vstatic__err),32);
        bufp->chgCData(oldp+20,((7U & ((IData)(vlSelfRef.tb_snake_map__DOT__head_xy) 
                                       >> 3U))),3);
        bufp->chgCData(oldp+21,((7U & (IData)(vlSelfRef.tb_snake_map__DOT__head_xy))),3);
        bufp->chgCData(oldp+22,((7U & ((IData)(vlSelfRef.tb_snake_map__DOT__tail_xy) 
                                       >> 3U))),3);
        bufp->chgCData(oldp+23,((7U & (IData)(vlSelfRef.tb_snake_map__DOT__tail_xy))),3);
        bufp->chgBit(oldp+24,((((IData)(vlSelfRef.tb_snake_map__DOT__next_x) 
                                == (7U & ((IData)(vlSelfRef.tb_snake_map__DOT__tail_xy) 
                                          >> 3U))) 
                               & ((IData)(vlSelfRef.tb_snake_map__DOT__next_y) 
                                  == (7U & (IData)(vlSelfRef.tb_snake_map__DOT__tail_xy))))));
        bufp->chgIData(oldp+25,(vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__hit),32);
        bufp->chgIData(oldp+26,(vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__hx),32);
        bufp->chgIData(oldp+27,(vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__hy),32);
        bufp->chgIData(oldp+28,(vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__nx),32);
        bufp->chgIData(oldp+29,(vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__ny),32);
        bufp->chgIData(oldp+30,(vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__tx),32);
        bufp->chgIData(oldp+31,(vlSelfRef.tb_snake_map__DOT__unnamedblk1__DOT__ty),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgCData(oldp+32,(vlSelfRef.tb_snake_map__DOT__dut__DOT__occ[0]),8);
        bufp->chgCData(oldp+33,(vlSelfRef.tb_snake_map__DOT__dut__DOT__occ[1]),8);
        bufp->chgCData(oldp+34,(vlSelfRef.tb_snake_map__DOT__dut__DOT__occ[2]),8);
        bufp->chgCData(oldp+35,(vlSelfRef.tb_snake_map__DOT__dut__DOT__occ[3]),8);
        bufp->chgCData(oldp+36,(vlSelfRef.tb_snake_map__DOT__dut__DOT__occ[4]),8);
        bufp->chgCData(oldp+37,(vlSelfRef.tb_snake_map__DOT__dut__DOT__occ[5]),8);
        bufp->chgIData(oldp+38,(vlSelfRef.tb_snake_map__DOT__dut__DOT__r),32);
    }
    bufp->chgBit(oldp+39,(vlSelfRef.tb_snake_map__DOT__clk));
    bufp->chgBit(oldp+40,((1U & (((5U >= (IData)(vlSelfRef.tb_snake_map__DOT__q_y))
                                   ? vlSelfRef.tb_snake_map__DOT__dut__DOT__occ
                                  [vlSelfRef.tb_snake_map__DOT__q_y]
                                   : 0U) >> (IData)(vlSelfRef.tb_snake_map__DOT__q_x)))));
    bufp->chgBit(oldp+41,(((IData)(vlSelfRef.tb_snake_map__DOT__tick) 
                           & ((~ ((IData)(vlSelfRef.tb_snake_map__DOT__will_pop) 
                                  & (((IData)(vlSelfRef.tb_snake_map__DOT__next_x) 
                                      == (7U & ((IData)(vlSelfRef.tb_snake_map__DOT__tail_xy) 
                                                >> 3U))) 
                                     & ((IData)(vlSelfRef.tb_snake_map__DOT__next_y) 
                                        == (7U & (IData)(vlSelfRef.tb_snake_map__DOT__tail_xy)))))) 
                              & (((5U >= (IData)(vlSelfRef.tb_snake_map__DOT__next_y))
                                   ? vlSelfRef.tb_snake_map__DOT__dut__DOT__occ
                                  [vlSelfRef.tb_snake_map__DOT__next_y]
                                   : 0U) >> (IData)(vlSelfRef.tb_snake_map__DOT__next_x))))));
    bufp->chgCData(oldp+42,(((5U >= (IData)(vlSelfRef.tb_snake_map__DOT__q_y))
                              ? vlSelfRef.tb_snake_map__DOT__dut__DOT__occ
                             [vlSelfRef.tb_snake_map__DOT__q_y]
                              : 0U)),8);
    bufp->chgCData(oldp+43,(((5U >= (IData)(vlSelfRef.tb_snake_map__DOT__next_y))
                              ? vlSelfRef.tb_snake_map__DOT__dut__DOT__occ
                             [vlSelfRef.tb_snake_map__DOT__next_y]
                              : 0U)),8);
    bufp->chgBit(oldp+44,((1U & (((5U >= (IData)(vlSelfRef.tb_snake_map__DOT__next_y))
                                   ? vlSelfRef.tb_snake_map__DOT__dut__DOT__occ
                                  [vlSelfRef.tb_snake_map__DOT__next_y]
                                   : 0U) >> (IData)(vlSelfRef.tb_snake_map__DOT__next_x)))));
}

void Vtb_snake_map___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_snake_map___024root__trace_cleanup\n"); );
    // Init
    Vtb_snake_map___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_snake_map___024root*>(voidSelf);
    Vtb_snake_map__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
