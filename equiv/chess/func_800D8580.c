#include "common.h"

s32 func_800D8580(s32 arg0, s32 arg1) {
    extern u8 D_80085428[];
    s32 temp_a1;
    s32 temp_v0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u32 temp_a0;
    u8 temp_s0;

    temp_s0 = M2C_FIELD(((((arg1 & 0x7F) - 1) * 0x7C) + (((u32) (arg1 & 0xFF) >> 7) * 0x2E8) + D_80085428), u8 *, 0x5F9);
    temp_a1 = temp_s0 & 0xFF;
    var_v0 = 0;
    if (temp_a1 != 0) {
        temp_v0 = func_800D7B80(arg0 & 0xFF, temp_a1, D_80085428, arg0);
        temp_a0 = temp_v0 & 0xFF;
        if (temp_a0 != 0) {
            var_v0_2 = temp_v0 & 0xFF;
            if (temp_a0 >= 0xAU) {
                var_v1 = 9;
                goto block_5;
            }
        } else {
            var_v1 = 1;
block_5:
            var_v0_2 = var_v1 & 0xFF;
        }
        var_v0 = var_v0_2 - temp_s0;
    }
    return var_v0;
}
