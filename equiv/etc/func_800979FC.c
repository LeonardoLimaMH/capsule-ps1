#include "common.h"

void func_800979FC(void) {
    extern M2C_UNK D_80085428[];
    s32 var_a0;
    s32 var_s0;
    s32 var_s1;
    u8 temp_a0;

    temp_a0 = M2C_FIELD(((M2C_FIELD(D_80085428, u8 *, 0xD78) * 0x7C) + (M2C_FIELD(D_80085428, u8 *, 0xD77) * 0x2E8) + (u8 *)D_80085428), u8 *, 0x612);
    if ((s32) temp_a0 < 0xA) {
        var_a0 = (temp_a0 * 0xE000) + 0x80140000;
    } else {
        var_a0 = ((temp_a0 - 0xA) * 0xE000) + 0x80124000;
    }
    var_s0 = 0;
    func_8001A49C(var_a0, D_80085428);
    var_s1 = 0x03C00000;
    do {
        func_80012A20(func_80019F30(0x20174, var_s0), 3, var_s1 >> 0x10, 0x180);
        var_s1 += 0x200000;
        var_s0 += 1;
    } while (var_s0 < 2);
}
