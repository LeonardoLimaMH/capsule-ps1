#include "ghidra.h"
#include "matching.h"
#include "common.h"



void func_800A14EC(void) {
    struct Text800A14EC { s8 bytes[9]; };
    extern struct Text800A14EC D_800979F8;
    extern u8 D_80085428[];
    extern u8 D_8006388C[];
    extern u8 D_80063890[];
    struct Text800A14EC text;
    s32 var_a2;
    s32 var_a2_2;

    text = D_800979F8;
    func_80020844(-0x48, -0x28, 0x90, 0x30, 0, 0, 0, 0, 4);
    func_8001F1A8(-0x40, -0x20, 0, 1, 0, &text, 0, 9, 3);
    var_a2 = 0;
    if (M2C_GFIELD(D_80085428, u8, 0xCAF) == 0) {
        var_a2 = 3;
    }
    func_8001F1A8(-0x28, -0xC, var_a2, 1, 0, D_8006388C, 0, 2, 3);
    var_a2_2 = 0;
    if (M2C_GFIELD(D_80085428, u8, 0xCAF) != 0) {
        var_a2_2 = 3;
    }
    func_8001F1A8(0, -0xC, var_a2_2, 1, 0, D_80063890, 0, 3, 3);
}






