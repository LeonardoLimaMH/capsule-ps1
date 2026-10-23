#include "common.h"

s32 func_80021A4C(s32 arg0, s32 arg1) {
    s32 var_a2;
    u16 temp_v1;
    void *temp_a0;

    var_a2 = 0;
    temp_a0 = arg0 + 0x10;
    temp_v1 = M2C_FIELD(temp_a0, u16 *, 0xE);
    M2C_FIELD(temp_a0, s8 *, 2) = 1;
    M2C_FIELD(temp_a0, s16 *, 0xC) = (s16) (temp_v1 * 3);
    if (arg1 == 0) {
        var_a2 = temp_v1 == 0;
    } else if ((u16) M2C_FIELD(temp_a0, u16 *, 0xE) >= 0x20U) {
        var_a2 = 1;
    }
    return var_a2;
}
