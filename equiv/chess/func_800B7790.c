#include "common.h"

void func_800B7790(s32 unused_arg0, s32 unused_arg1, s32 arg2, s32 arg3, u8 *arg4) {
    s32 temp_v1;
    s32 var_a0;
    s32 var_a0_2;
    u8 *var_a2;
    u8 *var_v1;
    u8 temp_a1;
    u8 temp_v0;
    u8 var_v0;

    var_a0 = 0;
    var_v1 = arg4;
    do {
        temp_v0 = M2C_FIELD((arg2 + var_a0), u8 *, 0x15);
        var_a0 += 1;
        *var_v1 = temp_v0;
        var_v1 = arg4 + var_a0;
    } while (var_a0 < 2);
    var_a0_2 = 0;
    var_a2 = arg4;
    do {
        temp_a1 = *var_a2;
        temp_v1 = temp_a1 - M2C_FIELD((arg3 + var_a0_2), u8 *, 0x15);
        if (temp_v1 >= 2) {
            var_v0 = temp_a1 - 1;
            goto block_6;
        }
        var_v0 = temp_a1 + 1;
        if (temp_v1 < -1) {
block_6:
            *var_a2 = var_v0;
        }
        var_a0_2 += 1;
        var_a2 = arg4 + var_a0_2;
    } while (var_a0_2 < 2);
}
