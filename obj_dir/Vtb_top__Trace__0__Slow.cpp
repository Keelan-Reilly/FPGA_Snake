// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_top__Syms.h"


VL_ATTR_COLD void Vtb_top___024root__trace_init_sub__TOP__0(Vtb_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_init_sub__TOP__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+40,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"btnC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"btnU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"btnD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"btnL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"btnR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"hsync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"vsync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"vgaRed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+47,0,"vgaGreen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+48,0,"vgaBlue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+9,0,"game_tick",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"head_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+11,0,"head_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+12,0,"apple_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+13,0,"apple_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+14,0,"snake_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+8,0,"video_on",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"game_over",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"tick_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+55,0,"MAX_TICKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+56,0,"TICKS_PER_SEC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+40,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"btnC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"btnU",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"btnD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"btnL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"btnR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"hsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"vsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"vgaRed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+47,0,"vgaGreen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+48,0,"vgaBlue",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+50,0,"div4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+51,0,"pix_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"CELL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"GRID_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"GRID_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,0,"reset_pix",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"hcount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2,0,"vcount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+8,0,"video_on",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"game_tick",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"su",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+33,0,"sd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+34,0,"sl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+35,0,"sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+36,0,"u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"dir_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+3,0,"cell_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+4,0,"cell_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+15,0,"game_over",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"gated_tick",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"head_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+11,0,"head_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+52,0,"head_on",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"head_xy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+14,0,"snake_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+19,0,"ate_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"self_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"apple_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+13,0,"apple_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+53,0,"apple_on",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"body_on",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"over_color",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+54,0,"rgb_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("ag", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+61,0,"XW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"YW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"GRID_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"GRID_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"LFSR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+51,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"game_tick",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"ate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"apple_x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+13,0,"apple_y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+20,0,"lfsr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+21,0,"feedback",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"lfsr_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+23,0,"raw_x_cur",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+24,0,"raw_y_cur",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+25,0,"raw_x_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+26,0,"raw_y_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("sb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+61,0,"XW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"YW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"MAX_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+51,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"push",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"pop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+28,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+14,0,"length",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+29,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("sh", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+61,0,"X_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"Y_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"GRID_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"GRID_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+51,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"tick",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"dir",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+10,0,"head_x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+11,0,"head_y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+65,0,"INIT_X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"INIT_Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("td", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+67,0,"CLK_FREQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"TICKS_PER_SEC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+51,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"game_tick",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("vga", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+51,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"hcount",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2,0,"vcount",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+6,0,"hsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"vsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"video_on",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"H_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"V_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"H_VISIBLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"V_VISIBLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"H_SYNC_START",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"H_SYNC_END",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"V_SYNC_START",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"V_SYNC_END",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_top___024root__trace_init_top(Vtb_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_init_top\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_top___024root__trace_register(Vtb_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_register\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_top___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_top___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_top___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_top___024root__trace_const_0_sub_0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_const_0\n"); );
    // Init
    Vtb_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_top___024root*>(voidSelf);
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_top___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_top___024root__trace_const_0_sub_0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_const_0_sub_0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+55,(0xc8U),32);
    bufp->fullIData(oldp+56,(0x3e8U),32);
    bufp->fullIData(oldp+57,(4U),32);
    bufp->fullIData(oldp+58,(0x28U),32);
    bufp->fullIData(oldp+59,(0x1eU),32);
    bufp->fullBit(oldp+60,(0U));
    bufp->fullIData(oldp+61,(6U),32);
    bufp->fullIData(oldp+62,(5U),32);
    bufp->fullIData(oldp+63,(0x10U),32);
    bufp->fullIData(oldp+64,(0x80U),32);
    bufp->fullIData(oldp+65,(0x14U),32);
    bufp->fullIData(oldp+66,(0xfU),32);
    bufp->fullIData(oldp+67,(0x17d7840U),32);
    bufp->fullIData(oldp+68,(0x61a8U),32);
    bufp->fullIData(oldp+69,(0x320U),32);
    bufp->fullIData(oldp+70,(0x20dU),32);
    bufp->fullIData(oldp+71,(0x280U),32);
    bufp->fullIData(oldp+72,(0x1e0U),32);
    bufp->fullIData(oldp+73,(0x290U),32);
    bufp->fullIData(oldp+74,(0x2f0U),32);
    bufp->fullIData(oldp+75,(0x1eaU),32);
    bufp->fullIData(oldp+76,(0x1ecU),32);
}

VL_ATTR_COLD void Vtb_top___024root__trace_full_0_sub_0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_full_0\n"); );
    // Init
    Vtb_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_top___024root*>(voidSelf);
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_top___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_top___024root__trace_full_0_sub_0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_full_0_sub_0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,(vlSelfRef.tb_top__DOT__dut__DOT__hcount),10);
    bufp->fullSData(oldp+2,(vlSelfRef.tb_top__DOT__dut__DOT__vcount),10);
    bufp->fullCData(oldp+3,((0x3fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                      >> 4U))),6);
    bufp->fullCData(oldp+4,((0x1fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                      >> 4U))),5);
    bufp->fullCData(oldp+5,(((0x10U & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                       ^ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount)))
                              ? 4U : 1U)),3);
    bufp->fullBit(oldp+6,(vlSelfRef.tb_top__DOT__hsync));
    bufp->fullBit(oldp+7,(vlSelfRef.tb_top__DOT__vsync));
    bufp->fullBit(oldp+8,(vlSelfRef.tb_top__DOT__dut__DOT__video_on));
    bufp->fullBit(oldp+9,(vlSelfRef.tb_top__DOT__dut__DOT__game_tick));
    bufp->fullCData(oldp+10,(vlSelfRef.tb_top__DOT__dut__DOT__head_x),6);
    bufp->fullCData(oldp+11,(vlSelfRef.tb_top__DOT__dut__DOT__head_y),5);
    bufp->fullCData(oldp+12,(vlSelfRef.tb_top__DOT__dut__DOT__apple_x),6);
    bufp->fullCData(oldp+13,(vlSelfRef.tb_top__DOT__dut__DOT__apple_y),5);
    bufp->fullCData(oldp+14,(vlSelfRef.tb_top__DOT__dut__DOT__snake_len),8);
    bufp->fullBit(oldp+15,(vlSelfRef.tb_top__DOT__dut__DOT__game_over));
    bufp->fullCData(oldp+16,(vlSelfRef.tb_top__DOT__dut__DOT__dir_reg),2);
    bufp->fullBit(oldp+17,(vlSelfRef.tb_top__DOT__dut__DOT__gated_tick));
    bufp->fullSData(oldp+18,((((IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_x) 
                               << 5U) | (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_y))),11);
    bufp->fullBit(oldp+19,(vlSelfRef.tb_top__DOT__dut__DOT__ate_pos));
    bufp->fullSData(oldp+20,(vlSelfRef.tb_top__DOT__dut__DOT__ag__DOT__lfsr),16);
    bufp->fullBit(oldp+21,((1U & VL_REDXOR_16((0xb400U 
                                               & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__ag__DOT__lfsr))))));
    bufp->fullSData(oldp+22,(vlSelfRef.tb_top__DOT__dut__DOT__ag__DOT__lfsr_next),16);
    bufp->fullCData(oldp+23,((0x3fU & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__ag__DOT__lfsr))),6);
    bufp->fullCData(oldp+24,((0x1fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__ag__DOT__lfsr) 
                                       >> 6U))),5);
    bufp->fullCData(oldp+25,((0x3fU & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__ag__DOT__lfsr_next))),6);
    bufp->fullCData(oldp+26,((0x1fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__ag__DOT__lfsr) 
                                       >> 5U))),5);
    bufp->fullBit(oldp+27,(vlSelfRef.tb_top__DOT__dut__DOT____Vcellinp__sb__pop));
    bufp->fullSData(oldp+28,(vlSelfRef.tb_top__DOT__dut__DOT__sb__DOT__data_out),11);
    bufp->fullIData(oldp+29,(vlSelfRef.tb_top__DOT__dut__DOT__sb__DOT__i),32);
    bufp->fullIData(oldp+30,(vlSelfRef.tb_top__DOT__dut__DOT__td__DOT__counter),32);
    bufp->fullBit(oldp+31,(vlSelfRef.tb_top__DOT__dut__DOT__reset_pix));
    bufp->fullCData(oldp+32,(vlSelfRef.tb_top__DOT__dut__DOT__su),2);
    bufp->fullCData(oldp+33,(vlSelfRef.tb_top__DOT__dut__DOT__sd),2);
    bufp->fullCData(oldp+34,(vlSelfRef.tb_top__DOT__dut__DOT__sl),2);
    bufp->fullCData(oldp+35,(vlSelfRef.tb_top__DOT__dut__DOT__sr),2);
    bufp->fullBit(oldp+36,((1U & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__su) 
                                  >> 1U))));
    bufp->fullBit(oldp+37,((1U & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__sd) 
                                  >> 1U))));
    bufp->fullBit(oldp+38,((1U & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__sl) 
                                  >> 1U))));
    bufp->fullBit(oldp+39,((1U & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__sr) 
                                  >> 1U))));
    bufp->fullBit(oldp+40,(vlSelfRef.tb_top__DOT__clk));
    bufp->fullBit(oldp+41,(vlSelfRef.tb_top__DOT__btnC));
    bufp->fullBit(oldp+42,(vlSelfRef.tb_top__DOT__btnU));
    bufp->fullBit(oldp+43,(vlSelfRef.tb_top__DOT__btnD));
    bufp->fullBit(oldp+44,(vlSelfRef.tb_top__DOT__btnL));
    bufp->fullBit(oldp+45,(vlSelfRef.tb_top__DOT__btnR));
    bufp->fullCData(oldp+46,((0xfU & (- (IData)((1U 
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
    bufp->fullCData(oldp+47,((0xfU & (- (IData)((1U 
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
    bufp->fullCData(oldp+48,((0xfU & (- (IData)((1U 
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
    bufp->fullIData(oldp+49,(vlSelfRef.tb_top__DOT__tick_count),32);
    bufp->fullCData(oldp+50,(vlSelfRef.tb_top__DOT__dut__DOT__div4),2);
    bufp->fullBit(oldp+51,(vlSelfRef.tb_top__DOT__dut__DOT__pix_clk));
    bufp->fullBit(oldp+52,((((0x3fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                       >> 4U)) == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_x)) 
                            & ((0x1fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                         >> 4U)) == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__head_y)))));
    bufp->fullBit(oldp+53,((((0x3fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__hcount) 
                                       >> 4U)) == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__apple_x)) 
                            & ((0x1fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__vcount) 
                                         >> 4U)) == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__apple_y)))));
    bufp->fullCData(oldp+54,(((IData)(vlSelfRef.tb_top__DOT__dut__DOT__game_over)
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
