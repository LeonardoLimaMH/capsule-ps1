#include "common.h"

s32 func_800A8A7C(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_a0;
    s32 var_a3;
    s32 var_t0;
    s32 var_t1;
    void *temp_v1;

    var_t0 = 0;
    var_t1 = 0;
loop_1:
    var_a0 = 0;
    var_a3 = var_t1;
loop_2:
    temp_v1 = arg0 + var_a3;
    if (((var_t0 != arg1) || (var_a0 != arg2)) && (M2C_FIELD(temp_v1, u8 *, 0x5E8) == M2C_FIELD((arg0 + ((arg2 * 0x7C) + (arg1 * 0x2E8))), u8 *, 0x5E8))) {
        return M2C_FIELD(temp_v1, u8 *, 0x612) + 1;
    }
    var_a0 += 1;
    var_a3 += 0x7C;
    if (var_a0 >= 5) {
        var_t0 += 1;
        var_t1 += 0x2E8;
        if (var_t0 >= 2) {
            return 0;
        }
        goto loop_1;
    }
    goto loop_2;
}
