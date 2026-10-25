#include "common.h"

s32 func_800D9BB4(s32 arg0) {
    extern u8 D_80085428[];
    extern u8 D_80085994[];
    extern u8 D_80119660[];
    extern u8 D_8011970A[];
    M2C_UNK var_a2;
    s32 temp_a2;
    s32 temp_a3_2;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a3;
    s32 var_s1;
    s32 var_v0;
    u32 temp_a0;
    u8 *temp_s0;
    u8 *temp_s0_4;
    u8 *temp_s2;
    u8 *temp_s4;
    u8 temp_a1;
    u8 temp_a2_2;
    u8 temp_a3;
    u8 temp_v1;

    temp_a0 = arg0 & 0xFF;
    temp_a2 = arg0 & 0x7F;
    temp_s4 = ((temp_a0 >> 7) * 0x2E8) + D_80085994 + (temp_a2 * 0x7C);
    temp_v0 = func_800D7328(temp_a0, D_80119660, temp_a2);
    temp_v0_2 = temp_v0 & 0xFF;
    if (temp_v0_2 != 0) {
        var_s1 = 0;
        if (temp_v0_2 != 0) {
            var_v0 = 0 & 0xFF;
loop_3:
            temp_s0 = var_v0 + D_80119660;
            if (((func_800D2CE4(6, *temp_s0) & 0xFF) != 1) && ((func_800D2CE4(0x86, *temp_s0) & 0xFF) != 1)) {
                var_s1 += 1;
                var_v0 = var_s1 & 0xFF;
                if ((u32) (var_s1 & 0xFF) < (u32) (temp_v0 & 0xFF)) {
                    goto loop_3;
                }
            }
        }
        temp_s0_2 = var_s1 & 0xFF;
        if (temp_s0_2 == (temp_v0 & 0xFF)) {
            if (func_800202A4(0x64) >= 0x1E) {
                goto block_8;
            }
            var_s1 = func_800202A4(temp_s0_2);
            goto block_10;
        }
block_10:
        temp_s0_3 = arg0 & 0xFF;
        func_800D90C0(temp_s0_3);
        temp_s2 = (var_s1 & 0xFF) + D_80119660;
        func_800D943C(temp_s0_3, *temp_s2);
        temp_v1 = *temp_s4;
        switch (temp_v1) {                          /* irregular */
        case 0x3F:
            var_a3 = func_800D862C(temp_s0_3, *temp_s2) & 0xFF;
            break;
        case 0x1E:
            var_a2 = 2;
block_18:
            temp_a3 = *((var_s1 & 0xFF) + D_80119660);
            temp_a3_2 = temp_a3 & 0x7F;
            var_a3 = func_800D8FC4(temp_s4, ((temp_a3 >> 7) * 0x2E8) + D_80085994 + (temp_a3_2 * 0x7C), var_a2, temp_a3_2) & 0xFF;
            break;
        case 0x1F:
            var_a2 = 3;
            goto block_18;
        default:
            var_a2 = 1;
            goto block_18;
        }
        temp_s0_4 = (var_s1 & 0xFF) + D_80119660;
        func_800CFFF8(*temp_s0_4, (var_a3 / 13) & 0xFF, (var_a3 % 13) & 0xFF, var_a3);
        temp_a1 = *temp_s0_4;
        M2C_FIELD(D_8011970A, u8 *, 0) = (u8) M2C_FIELD(((((temp_a1 & 0x7F) - 1) * 0x7C) + ((temp_a1 >> 7) * 0x2E8) + D_80085428), u8 *, 0x5FD);
        temp_a2_2 = *temp_s0_4;
        M2C_FIELD(D_8011970A, u8 *, 1) = (u8) M2C_FIELD(((((temp_a2_2 & 0x7F) - 1) * 0x7C) + ((temp_a2_2 >> 7) * 0x2E8) + D_80085428), u8 *, 0x5FE);
        return 1;
    }
block_8:
    return 0;
}
