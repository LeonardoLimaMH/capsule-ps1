#include "common.h"

s32 func_800CA6B8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v0;
    void *temp_a0;
    void *temp_a1;
    void *temp_t0;

    temp_t0 = arg0 + 0x5D0;
    var_v0 = 0;
    if (arg1 == M2C_FIELD(temp_t0, u8 *, 0x5FA)) {
        temp_a0 = temp_t0 + ((arg3 * 0x7C) + (arg2 * 0x2E8));
        temp_a1 = temp_t0 + (arg1 * 2);
        var_v0 = 0;
        if (M2C_FIELD(temp_a0, u8 *, 0x2D) == M2C_FIELD(temp_a1, u8 *, 0x601)) {
            var_v0 = 1;
            if (M2C_FIELD(temp_a0, u8 *, 0x2E) != M2C_FIELD(temp_a1, u8 *, 0x602)) {
                var_v0 = 0;
            }
        }
    }
    return var_v0;
}
