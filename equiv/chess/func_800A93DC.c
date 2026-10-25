#include "common.h"

void func_800A93DC(void *arg0, void *arg1, void *arg2, s32 arg3, s32 arg4, s32 arg5) {
    s16 temp_a1;
    s16 temp_a2;
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v1;
    s32 var_s0;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    u16 var_v0;

    M2C_FIELD(arg2, s16 *, 0) = (s16) ((u16) M2C_FIELD(arg1, s16 *, 0) - ((s32) ((M2C_FIELD(arg1, s16 *, 0) - M2C_FIELD(arg0, s16 *, 0)) * arg4) / arg3));
    M2C_FIELD(arg2, s16 *, 4) = (s16) ((u16) M2C_FIELD(arg1, s16 *, 4) - ((s32) ((M2C_FIELD(arg1, s16 *, 4) - M2C_FIELD(arg0, s16 *, 4)) * arg4) / arg3));
    temp_v1 = arg3 / 2;
    temp_a2 = M2C_FIELD(arg0, s16 *, 2);
    temp_a1 = M2C_FIELD(arg1, s16 *, 2);
    var_s0 = temp_a1 - arg5;
    if (temp_a1 >= temp_a2) {
        var_s0 = temp_a2 - arg5;
    }
    temp_a0 = arg3 / 2;
    if (temp_a0 < arg4) {
        temp_s0 = M2C_FIELD(arg0, s16 *, 2) - var_s0;
        var_v1 = temp_s0 * rsin((s32) ((arg3 - arg4) << 0xA) / temp_v1, temp_a1, temp_a2);
        if (var_v1 < 0) {
            var_v1 += 0xFFF;
        }
        var_v0 = (u16) M2C_FIELD(arg0, s16 *, 2);
        var_v1_2 = var_v1 >> 0xC;
    } else {
        temp_s0_2 = M2C_FIELD(arg1, s16 *, 2) - var_s0;
        var_v1_3 = temp_s0_2 * rsin(((s32) ((temp_a0 - arg4) << 0xA) / temp_v1) + 0x400, temp_a1, temp_a2);
        if (var_v1_3 < 0) {
            var_v1_3 += 0xFFF;
        }
        var_v0 = (u16) M2C_FIELD(arg1, s16 *, 2);
        var_v1_2 = var_v1_3 >> 0xC;
    }
    M2C_FIELD(arg2, s16 *, 2) = (s16) (var_v0 - var_v1_2);
}
