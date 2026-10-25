#include "common.h"

s32 func_800ACDE0(void) {
    extern u8 D_80100F38[];
    s32 temp_v1;
    s32 var_s0;
    s32 var_s1;
    void *temp_v0;

    var_s0 = 0;
    var_s1 = 1;
    do {
        temp_v1 = func_800B1260(var_s1) & 0xFFFF;
        if (temp_v1 != 0xFFFF) {
            temp_v0 = (temp_v1 * 0x79C) + D_80100F38;
            var_s0 = var_s0 | M2C_FIELD(temp_v0, s16 *, 0x228) | (((u32) M2C_FIELD(temp_v0, u32 *, 0x798) >> 5) & 1);
        }
        var_s1 -= 1;
    } while (var_s1 >= 0);
    return var_s0;
}
