#include "common.h"

s32 func_800DC750(s32 arg0) {
    extern M2C_UNK D_80118C18[];
    extern M2C_UNK D_80119660[];
    extern M2C_UNK D_8011970A[];
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s0_2;
    u32 temp_s1;
    u8 *temp_s0_3;

    temp_s1 = arg0 & 0xFF;
    temp_s0 = (5 - M2C_FIELD(((temp_s1 >> 7) + (*D_80118C18)), u8 *, 0x3A0)) & 0xFF;
    if (temp_s0 != 0) {
        if (func_800202A4(0x64) < (temp_s0 * 0x14)) {
            temp_a0 = func_800D7328(temp_s1, (*D_80119660)) & 0xFF;
            if (temp_a0 != 0) {
                temp_s0_2 = func_800202A4(temp_a0);
                func_800D90C0(temp_s1);
                temp_s0_3 = (temp_s0_2 & 0xFF) + (*D_80119660);
                M2C_FIELD((*D_80118C18), u16 *, 0x5B4) = (u16) (M2C_FIELD((*D_80118C18), u16 *, 0x5B4) + 0x12C);
                M2C_FIELD((*D_8011970A), s8 *, 0) = (s8) (*temp_s0_3 / 13);
                M2C_FIELD((*D_8011970A), s8 *, 1) = (s8) (*temp_s0_3 % 13);
                return 1;
            }
            /* Duplicate return node #5. Try simplifying control flow for better match */
            return 0;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
