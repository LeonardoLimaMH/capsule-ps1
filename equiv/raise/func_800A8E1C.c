#include "common.h"

s32 func_800A8E1C(s32 arg0) {
    s32 temp_a0;
    s32 var_v0;

    temp_a0 = arg0 & 0xFFFF;
    if ((temp_a0 == 1) || (temp_a0 == 5) || (var_v0 = 2, (temp_a0 == 3))) {
        var_v0 = 3;
    }
    return var_v0;
}
