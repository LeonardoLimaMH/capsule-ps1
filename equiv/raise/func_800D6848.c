#include "common.h"

s32 func_800D6848(s32 arg0) {
    extern u8 D_800F1D1C[];
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u32 temp_a0;

    temp_a0 = arg0 & 0x3F;
    if (temp_a0 < 0x11U) {
        var_v0_2 = temp_a0 * 8;
        goto block_4;
    }
    if ((s32) temp_a0 < 0x21) {
        var_v0_2 = (0x20 - temp_a0) * 8;
block_4:
        var_v0 = M2C_FIELD((var_v0_2 + D_800F1D1C), s32 *, 4) << 0x10;
    } else {
        var_v1 = temp_a0 - 0x20;
        if ((s32) temp_a0 < 0x31) {

        } else {
            var_v1 = 0x40 - temp_a0;
        }
        var_v0 = M2C_FIELD(((var_v1 * 8) + D_800F1D1C), s32 *, 4) * -0x10000;
    }
    return var_v0 >> 0x10;
}
