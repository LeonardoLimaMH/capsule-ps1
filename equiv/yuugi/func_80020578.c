#include "common.h"

void func_80020578(s16 arg0, s16 arg1, s16 arg2, s16 *arg3, s16 *arg4) {
    s16 temp_v0;
    s16 var_v0;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 var_v0_2;
    s32 var_v1;

    var_v0 = arg2;
    if (arg2 < 0) {
        var_v0 = arg2 + 0xFFF;
    }
    temp_v0 = arg2 - ((var_v0 >> 0xC) << 0xC);
    temp_s0 = rcos(temp_v0, arg2);
    var_v0_2 = (arg0 * temp_s0) - (arg1 * rsin(temp_v0));
    if (var_v0_2 < 0) {
        var_v0_2 += 0xFFF;
    }
    *arg3 = (s16) (var_v0_2 >> 0xC);
    temp_s0_2 = rsin(temp_v0);
    var_v1 = (arg0 * temp_s0_2) + (arg1 * rcos(temp_v0));
    if (var_v1 < 0) {
        var_v1 += 0xFFF;
    }
    *arg4 = (s16) (var_v1 >> 0xC);
}
