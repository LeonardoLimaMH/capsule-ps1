#include "common.h"

s32 func_8001BAA0(u8 *arg0, s32 arg1, u8 *arg2) {
    u32 temp_a1;
    u32 var_v1;
    u8 *var_a0;
    u8 var_a3;

    var_a0 = arg0;
    var_a3 = 7;
    temp_a1 = arg1 - 4;
    var_v1 = 0;
    if (temp_a1 != 0) {
        do {
            var_v1 += 1;
            var_a3 += *var_a0;
            var_a0 += 1;
        } while (var_v1 < temp_a1);
    }
    *var_a0 = var_a3;
    *arg2 = var_a3;
    return var_a3 & 0xFF;
}
