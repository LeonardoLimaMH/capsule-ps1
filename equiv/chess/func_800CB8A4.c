#include "common.h"

s16 func_800CB8A4(s16 arg0, s16 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s16 var_v0;
    s32 var_v0_2;

    if (arg4 == 0) {
        var_v0 = arg0 + ((s32) ((arg1 - arg0) * arg2) / arg3);
    } else {
        var_v0_2 = (arg1 - arg0) * rsin((s32) (arg2 << 0xC) / (s32) (arg3 * 4));
        if (var_v0_2 < 0) {
            var_v0_2 += 0xFFF;
        }
        var_v0 = arg0 + (var_v0_2 >> 0xC);
    }
    return var_v0;
}
