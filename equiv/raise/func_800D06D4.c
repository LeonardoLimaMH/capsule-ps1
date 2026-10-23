#include "common.h"

s32 func_800D06D4(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v0;
    s32 var_v1;

    if (arg1 == arg0) {
        return 0;
    }
    temp_v0 = arg1 - arg0;
    if (arg0 < arg1) {
        var_v0 = temp_v0;
        if (temp_v0 >= 5) {
            var_v1 = arg1 - (arg0 + 8);
            goto block_7;
        }
    } else {
        var_v1 = arg1 - arg0;
        if ((arg0 - arg1) >= 5) {
            var_v1 = (8 - arg0) + arg1;
        }
block_7:
        var_v0 = var_v1;
    }
    return var_v0;
}
