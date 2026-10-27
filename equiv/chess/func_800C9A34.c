#include "common.h"

s32 func_800C9A34(s32 unused_arg0, void *arg1, s32 arg2) {
    extern u8 D_8008ED68[];
    extern u8 D_80118818[];
    extern u8 D_8011881C[];
    s32 temp_a2;
    s32 temp_v1;
    s32 var_a2;
    s32 var_v1;
    s8 var_v0;
    u8 *temp_v0;
    u8 temp_a0;
    u8 temp_a3;
    u8 var_a3;
    u8 var_v0_2;

    var_a2 = arg2;
    temp_v1 = M2C_FIELD(arg1, s32 *, 0x18);
    if (temp_v1 & 0x200000) {
        *(D_80118818 + 2) = 0;
        M2C_FIELD(arg1, s32 *, 0x18) = (s32) ((temp_v1 ^ 0x200000) | 0x400000);
        *(D_80118818 + 3) = M2C_FIELD(arg1, u8 *, 0x20);
        var_a3 = 0xFF;
        if (M2C_FIELD(arg1, s8 *, 0x21) > 0) {
            var_a3 = 1;
        }
        (D_8011881C)[1] = var_a3;
        var_v0 = M2C_FIELD(arg1, s8 *, 0x21);
        if (var_v0 < 0) {
            var_v0 = -var_v0;
        }
        (*D_8011881C) = (u8) var_v0;
        M2C_FIELD(arg1, s8 *, 0x21) = 0;
        M2C_FIELD(arg1, u8 *, 0x20) = 0U;
    } else if (temp_v1 & 0x400000) {
        temp_v0 = D_80118818 + 2;
        temp_a0 = *temp_v0;
        if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
            var_v0_2 = temp_a0 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
        } else {
            var_v0_2 = temp_a0 + 1;
        }
        *temp_v0 = var_v0_2;
        temp_a3 = *(D_80118818 + 2);
        temp_a2 = var_a2 + 0x320 + ((temp_a3 / (u8) (*D_8011881C)) * (D_8011881C)[1]);
        var_v1 = temp_a2;
        if (temp_a2 < 0) {
            var_v1 = temp_a2 + 7;
        }
        var_a2 = temp_a2 - ((var_v1 >> 3) * 8);
        if ((s32) temp_a3 >= ((*D_8011881C) * (*(D_80118818 + 3) * 8))) {
            M2C_FIELD(arg1, s32 *, 0x18) = (s32) (M2C_FIELD(arg1, s32 *, 0x18) ^ 0x400000);
        }
    }
    return var_a2;
}
