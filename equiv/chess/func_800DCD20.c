#include "common.h"

s32 func_800DCD20(s32 arg0) {
    extern M2C_UNK D_80119660[];
    extern M2C_UNK D_8011970A[];
    s32 temp_a0;
    s32 temp_s2;
    s32 var_v0;
    s8 temp_s0;
    s8 temp_s1;
    u8 *temp_v0;

    temp_s2 = arg0 & 0xFF;
    temp_a0 = func_800D7328(temp_s2, D_80119660) & 0xFF;
    var_v0 = 0;
    if (temp_a0 != 0) {
        temp_v0 = (func_800202A4(temp_a0) & 0xFF) + D_80119660;
        temp_s0 = *temp_v0 / 13;
        temp_s1 = *temp_v0 % 13;
        func_800D90C0(temp_s2);
        func_800CFFF8(temp_s2, temp_s0 & 0xFF, temp_s1 & 0xFF);
        var_v0 = 1;
        M2C_FIELD(D_8011970A, s8 *, 0) = temp_s0;
        M2C_FIELD(D_8011970A, s8 *, 1) = temp_s1;
    }
    return var_v0;
}
