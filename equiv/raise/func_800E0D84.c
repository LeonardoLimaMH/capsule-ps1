#include "common.h"

s32 func_800E0D84(void) {
    s32 temp_a0;
    s32 var_s0;

    var_s0 = 1;
loop_1:
    temp_a0 = func_800B1260(var_s0) & 0xFFFF;
    if (temp_a0 != 0xFFFF) {
        var_s0 -= 1;
        if (func_800E1624(temp_a0) == 1) {
            return 1;
        }
        goto block_5;
    }
    var_s0 -= 1;
block_5:
    if (var_s0 < 0) {
        return 0;
    }
    goto loop_1;
}
