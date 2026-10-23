#include "common.h"

s32 func_800DB804(s32 arg0) {
    extern M2C_UNK D_80085428[];
    extern M2C_UNK D_80119660[];
    extern M2C_UNK D_8011970A[];
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s2;
    s32 var_v0;
    u32 temp_s1;
    u8 *temp_s3;
    u8 temp_s4;
    void *temp_a1;

    temp_s0 = arg0 & 0xFF;
    temp_a0 = func_800D7328(temp_s0, D_80119660) & 0xFF;
    var_v0 = 0;
    if (temp_a0 != 0) {
        temp_s4 = *((func_800202A4(temp_a0) & 0xFF) + D_80119660);
        temp_a0_2 = func_800D783C(temp_s0, D_80119660) & 0xFF;
        var_v0 = 0;
        if (temp_a0_2 != 0) {
            temp_s3 = (func_800202A4(temp_a0_2) & 0xFF) + D_80119660;
            temp_s0_2 = *temp_s3 / 13;
            temp_s2 = *temp_s3 % 13;
            func_800D90C0(temp_s0);
            temp_s1 = temp_s4 & 0xFF;
            func_800CFFF8(temp_s1, temp_s0_2 & 0xFF, temp_s2 & 0xFF);
            var_v0 = 1;
            temp_a1 = (((temp_s4 & 0x7F) - 1) * 0x7C) + ((temp_s1 >> 7) * 0x2E8) + D_80085428;
            M2C_FIELD(D_8011970A, s8 *, 0) = (s8) (M2C_FIELD(temp_a1, u8 *, 0x5FE) + (M2C_FIELD(temp_a1, u8 *, 0x5FD) * 0xD));
            M2C_FIELD(D_8011970A, u8 *, 1) = (u8) *temp_s3;
        }
    }
    return var_v0;
}
