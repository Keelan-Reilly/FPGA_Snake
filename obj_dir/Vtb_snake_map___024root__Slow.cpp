// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_snake_map.h for the primary calling header

#include "Vtb_snake_map__pch.h"
#include "Vtb_snake_map__Syms.h"
#include "Vtb_snake_map___024root.h"

void Vtb_snake_map___024root___ctor_var_reset(Vtb_snake_map___024root* vlSelf);

Vtb_snake_map___024root::Vtb_snake_map___024root(Vtb_snake_map__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_snake_map___024root___ctor_var_reset(this);
}

void Vtb_snake_map___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_snake_map___024root::~Vtb_snake_map___024root() {
}
