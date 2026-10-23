#include "common.h"

s32 func_800A8378(s32 arg0) {
    s32 temp_a1;
    s32 temp_a2;
    s32 var_v0;
    void *temp_a0;

    temp_a0 = arg0 + 0x5D0;
    temp_a2 = M2C_FIELD(temp_a0, u8 *, 0x6E4) - M2C_FIELD(temp_a0, u8 *, 0x6E6);
    temp_a1 = M2C_FIELD(temp_a0, u8 *, 0x6E5) - M2C_FIELD(temp_a0, u8 *, 0x6E7);
    if (temp_a2 > 0) {
        var_v0 = 5;
        if (temp_a1 <= 0) {
            var_v0 = 6;
            if (temp_a1 < 0) {
                return 7;
            }
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return var_v0;
    }
    if (temp_a2 < 0) {
        var_v0 = 3;
        if (temp_a1 <= 0) {
            var_v0 = 2;
            if (temp_a1 < 0) {
                return 1;
            }
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return var_v0;
    }
    var_v0 = (temp_a1 > 0) * 4;
    return var_v0;
}
