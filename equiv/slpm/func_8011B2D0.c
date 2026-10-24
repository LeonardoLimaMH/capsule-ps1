#include "common.h"

s32 func_8011B2D0(s32 arg0, s32 arg1) {
    extern M2C_UNK D_801321E0[];
    extern u16 * D_8013326C[];
    s32 *temp_a0;
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_v0;
    s32 temp_v1_2;
    u16 temp_v1;
    u16 var_s3;
    void *temp_a2;

    temp_a0 = (arg0 * 4) + D_801321E0;
    temp_s4 = *temp_a0;
    if (arg1 != temp_s4) {
        temp_a2 = D_801321E0 - 4;
        if (M2C_FIELD(D_801321E0, u16 *, -4) != 0) {
            temp_v1 = *(*D_8013326C);
            *(*D_8013326C) = 0;
            temp_s3 = temp_v1 & 0xFFFF;
            if (arg1 != 0) {
                temp_v1_2 = 1 << arg0;
                *temp_a0 = arg1;
                var_s3 = temp_s3 | temp_v1_2;
                M2C_FIELD(temp_a2, u16 *, 0x30) = (u16) (M2C_FIELD(temp_a2, u16 *, 0x30) | temp_v1_2);
            } else {
                temp_v0 = ~(1 << arg0);
                *temp_a0 = 0;
                var_s3 = temp_s3 & temp_v0;
                M2C_FIELD(D_801321E0, u16 *, 0x2C) = (u16) (M2C_FIELD(D_801321E0, u16 *, 0x2C) & temp_v0);
            }
            if (arg0 == 0) {
                temp_s0 = arg1 == 0;
                func_80111B54(temp_s0, D_801321E0, temp_a2);
                func_8011AE84(3, temp_s0);
            }
            if (arg0 == 4) {
                func_8011AE84(0, arg1 == 0);
            }
            if (arg0 == 5) {
                func_8011AE84(1, arg1 == 0);
            }
            if (arg0 == 6) {
                func_8011AE84(2, arg1 == 0);
            }
            *(*D_8013326C) = var_s3;
        }
    }
    return temp_s4;
}
