#include "common.h"

s32 func_800CB960(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_v0;

    if (arg4 == 0) {
        return arg0 + ((s32) ((arg1 - arg0) * arg2) / arg3);
    }
    var_v0 = (arg1 - arg0) * rsin((s32) (arg2 << 0xC) / (s32) (arg3 * 4));
    if (var_v0 < 0) {
        var_v0 += 0xFFF;
    }
    return arg0 + (var_v0 >> 0xC);
}
