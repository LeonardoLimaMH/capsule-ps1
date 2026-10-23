#include "common.h"

void func_800DE35C(s16 arg0, s32 arg1, s32 arg2, s16 arg3, s16 arg4, s16 *arg5, s16 *arg6) {
    s32 temp_s1;
    s32 var_v0;
    s32 var_v0_2;

    temp_s1 = arg3 + arg4;
    var_v0 = arg0 * func_800D68D4(temp_s1, arg3);
    if (var_v0 < 0) {
        var_v0 += 0xFFF;
    }
    *arg6 = arg2 + (var_v0 >> 0xC);
    var_v0_2 = arg0 * func_800D6848(temp_s1);
    if (var_v0_2 < 0) {
        var_v0_2 += 0xFFF;
    }
    *arg5 = arg1 + (var_v0_2 >> 0xC);
}
