#include "common.h"

s32 func_800DA930(s32 arg0) {
    extern M2C_UNK D_80085428[];
    extern M2C_UNK D_80118C18[];
    extern M2C_UNK D_80119660[];
    extern M2C_UNK D_8011970A[];
    s32 temp_v0;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    u32 temp_a1_2;
    u32 temp_v1;
    u8 *temp_a2;
    u8 temp_a0;
    u8 temp_a1;
    u8 temp_a1_3;
    u8 temp_a2_2;

    var_s0 = 0;
    if (func_800202A4(0x64) < 0x14) {
        temp_v0 = func_800D7328(arg0 & 0xFF, D_80119660);
        temp_v1 = temp_v0 & 0xFF;
        var_v0 = 0;
        if (temp_v1 != 0) {
            var_a2 = 0;
            if (temp_v1 != 0) {
                var_v0_2 = 0 & 0xFF;
                do {
                    temp_a1 = *(var_v0_2 + D_80119660);
                    if (M2C_FIELD(((((temp_a1 & 0x7F) - 1) * 0x7C) + ((temp_a1 >> 7) * 0x2E8) + D_80085428), u8 *, 0x610) == 0) {
                        var_s0 += 1;
                    }
                    var_a2 += 1;
                    var_v0_2 = var_a2 & 0xFF;
                } while ((u32) (var_a2 & 0xFF) < temp_v1);
            }
            if ((u32) (var_s0 & 0xFF) < 3U) {
                goto block_8;
            }
            func_800D90C0(arg0 & 0xFF);
            temp_a1_2 = temp_v0 & 0xFF;
            var_a2_2 = 0;
            if (temp_a1_2 != 0) {
                do {
                    temp_a0 = *((var_a2_2 & 0xFF) + D_80119660);
                    var_a2_2 += 1;
                    M2C_FIELD(((((temp_a0 & 0x7F) - 1) * 7) + ((temp_a0 >> 7) * 0x2A) + D_80118C18), s8 *, 0x5C3) = 0;
                } while ((u32) (var_a2_2 & 0xFF) < temp_a1_2);
            }
            temp_a2 = (var_a2_2 & 0xFF) + D_80119660;
            temp_a1_3 = *temp_a2;
            M2C_FIELD(D_8011970A, u8 *, 0) = (u8) M2C_FIELD(((((temp_a1_3 & 0x7F) - 1) * 0x7C) + ((temp_a1_3 >> 7) * 0x2E8) + D_80085428), u8 *, 0x5FD);
            temp_a2_2 = *temp_a2;
            var_v0 = 1;
            M2C_FIELD(D_8011970A, u8 *, 1) = (u8) M2C_FIELD(((((temp_a2_2 & 0x7F) - 1) * 0x7C) + ((temp_a2_2 >> 7) * 0x2E8) + D_80085428), u8 *, 0x5FE);
            /* Duplicate return node #13. Try simplifying control flow for better match */
            return var_v0;
        }
        return var_v0;
    }
block_8:
    return 0;
}
