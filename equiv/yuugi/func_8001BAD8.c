#include "common.h"

s32 func_8001BAD8(u8 *arg0, s32 arg1, s8 *arg2) {
    s8 var_v1;
    u32 temp_a1;
    u32 var_a3;
    u8 *var_a0;

    var_a0 = arg0;
    var_v1 = 7;
    temp_a1 = arg1 - 4;
    var_a3 = 0;
    if (temp_a1 != 0) {
        do {
            var_a3 += 1;
            var_v1 += *var_a0;
            var_a0 += 1;
        } while (var_a3 < temp_a1);
    }
    *arg2 = var_v1;
    return *var_a0 == (var_v1 & 0xFF);
}
