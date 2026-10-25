#include "common.h"

void func_8009C3BC(void) {
    extern u8 D_80085428[];
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s1_2;

    var_s0 = 0;
    var_s1 = 0x03C00000;
    func_8001A49C(func_800A8954(M2C_FIELD(((M2C_FIELD(D_80085428, u8 *, 0xD78) * 0x7C) + (M2C_FIELD(D_80085428, u8 *, 0xD77) * 0x2E8) + D_80085428), u8 *, 0x612), D_80085428));
    do {
        func_80012A20(func_80019F30(0x20174, var_s0), 3, var_s1 >> 0x10, 0x180);
        var_s1 += 0x200000;
        var_s0 += 1;
    } while (var_s0 < 2);
    var_s0_2 = 0;
    var_s1_2 = 0x03C00000;
    do {
        func_80012A20(func_80019F30(0x20174, var_s0_2 + 2), 3, var_s1_2 >> 0x10, 0x80);
        var_s1_2 += 0x200000;
        var_s0_2 += 1;
    } while (var_s0_2 < 2);
}
