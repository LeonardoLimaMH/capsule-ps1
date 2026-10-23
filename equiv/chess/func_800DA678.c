#include "common.h"

s32 func_800DA678(s32 arg0) {
    extern M2C_UNK D_80085428[];
    extern M2C_UNK D_80118C18[];
    extern M2C_UNK D_80119660[];
    extern M2C_UNK D_8011970A[];
    s32 temp_a0;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_v0;
    u32 temp_a1_3;
    u8 *temp_a2;
    u8 *temp_s0;
    u8 temp_a0_2;
    u8 temp_a0_3;
    u8 temp_a1;
    u8 temp_a1_2;
    u8 temp_a1_4;
    u8 temp_a2_2;

    temp_a0 = arg0 & 0xFF;
    temp_v0 = func_800D7328(temp_a0, D_80119660);
    temp_v0_2 = temp_v0 & 0xFF;
    if (temp_v0_2 != 0) {
        var_s0 = 0;
        if (temp_v0_2 != 0) {
            var_v0 = 0 & 0xFF;
loop_3:
            temp_a2 = var_v0 + D_80119660;
            temp_a1 = *temp_a2;
            if ((M2C_FIELD(((((temp_a1 & 0x7F) - 1) * 0x7C) + ((temp_a1 >> 7) * 0x2E8) + D_80085428), u8 *, 0x610) != 0) || !(func_800D0F60(*temp_a2, ((temp_a0 & 0x80) | 6) & 0xFF, temp_a2) & 0xFF)) {
                var_s0 += 1;
                var_v0 = var_s0 & 0xFF;
                if ((u32) (var_s0 & 0xFF) < (u32) (temp_v0 & 0xFF)) {
                    goto loop_3;
                }
            }
        }
        temp_s1 = var_s0 & 0xFF;
        if (temp_s1 == (temp_v0 & 0xFF)) {
            if (func_800202A4(0x64) < 0x1E) {
                var_s0 = func_800202A4(temp_s1);
                goto block_9;
            }
            /* Duplicate return node #12. Try simplifying control flow for better match */
            return 0;
        }
block_9:
        temp_s0 = (var_s0 & 0xFF) + D_80119660;
        temp_a1_2 = *temp_s0;
        temp_a1_3 = temp_a1_2 >> 7;
        if (M2C_FIELD(((((temp_a1_2 & 0x7F) - 1) * 0x7C) + (temp_a1_3 * 0x2E8) + D_80085428), u8 *, 0x610) == 0) {
            func_800D90C0(arg0 & 0xFF, temp_a1_3);
            temp_a0_2 = *temp_s0;
            M2C_FIELD(((((temp_a0_2 & 0x7F) - 1) * 7) + ((temp_a0_2 >> 7) * 0x2A) + D_80118C18), s8 *, 0x5C1) = 0;
            temp_a0_3 = *temp_s0;
            M2C_FIELD(((((temp_a0_3 & 0x7F) - 1) * 7) + ((temp_a0_3 >> 7) * 0x2A) + D_80118C18), s8 *, 0x5C3) = 0;
            temp_a1_4 = *temp_s0;
            M2C_FIELD(D_8011970A, u8 *, 0) = (u8) M2C_FIELD(((((temp_a1_4 & 0x7F) - 1) * 0x7C) + ((temp_a1_4 >> 7) * 0x2E8) + D_80085428), u8 *, 0x5FD);
            temp_a2_2 = *temp_s0;
            M2C_FIELD(D_8011970A, u8 *, 1) = (u8) M2C_FIELD(((((temp_a2_2 & 0x7F) - 1) * 0x7C) + ((temp_a2_2 >> 7) * 0x2E8) + D_80085428), u8 *, 0x5FE);
            return 1;
        }
        /* Duplicate return node #12. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
