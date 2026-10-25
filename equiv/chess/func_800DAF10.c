#include "common.h"

s32 func_800DAF10(s32 arg0) {
    extern u8 D_80118C18[];
    extern u8 D_80119660[];
    extern u8 D_8011970A[];
    M2C_UNK sp10;
    s16 temp_v0;
    u32 temp_a2_2;
    u32 temp_s2;
    u32 temp_s4;
    s32 var_a1;
    s32 var_a3;
    s32 var_s4;
    s32 var_s5;
    s32 var_v0;
    s32 var_v0_2;
    u32 temp_a2;
    u32 temp_s0;
    u8 *temp_s0_3;
    u8 temp_v0_2;
    void *temp_s0_2;

    var_s5 = 0;
    temp_s0 = arg0 & 0xFF;
    temp_v0 = func_800D8580(temp_s0, temp_s0);
    var_s4 = 0;
    temp_a2 = temp_s0 >> 7;
    temp_s0_2 = (((arg0 & 0x7F) - 1) * 7) + (temp_a2 * 0x2A) + D_80118C18;
    M2C_FIELD(temp_s0_2, u8 *, 0x3A7) = (u8) (M2C_FIELD(temp_s0_2, u8 *, 0x3A7) + temp_v0);
    M2C_FIELD(D_80118C18, s8 *, 0xA) = 0;
    var_a3 = func_800D497C(temp_s0, &sp10, temp_a2);
    M2C_FIELD(D_80118C18, s8 *, 0xA) = 2;
    M2C_FIELD(temp_s0_2, u8 *, 0x3A7) = (u8) (M2C_FIELD(temp_s0_2, u8 *, 0x3A7) - temp_v0);
    do {
        var_a1 = 0;
        var_v0_2 = var_s4 * 2;
loop_2:
        temp_a2_2 = ((var_v0_2 + var_s4) * 4) + var_s4;
        temp_v0_2 = *(temp_a2_2 + &sp10 + var_a1);
        if (temp_v0_2 != 0) {
            var_a3 -= 1;
            if ((temp_v0 < (s32) temp_v0_2) && (M2C_FIELD(((var_a1 * 4) + ((temp_a2_2 * 4) + M2C_FIELD(D_80118C18, s32 *, 0))), u8 *, 3) == 0)) {
                *(s16 *)(var_s5 + D_80119660) = temp_a2_2 + var_a1;
                var_s5 += 1;
            }
            if (var_a3 == 0) {
                var_s4 = 0xD;
            } else {
                goto block_8;
            }
        } else {
block_8:
            var_a1 += 1;
            var_v0_2 = var_s4 * 2;
            if (var_a1 < 0xD) {
                goto loop_2;
            }
        }
        var_s4 += 1;
    } while (var_s4 < 0xD);
    var_v0 = 0;
    if (var_s5 != 0) {
        temp_s4 = func_800202A4(var_s5, var_a1, temp_a2_2, var_a3);
        temp_s2 = arg0 & 0xFF;
        func_800D90C0(temp_s2);
        temp_s0_3 = temp_s4 + D_80119660;
        func_800CFFF8(temp_s2, (*temp_s0_3 / 13) & 0xFF, (*temp_s0_3 % 13) & 0xFF);
        M2C_FIELD(D_8011970A, s8 *, 0) = (s8) (*temp_s0_3 / 13);
        var_v0 = 1;
        M2C_FIELD(D_8011970A, s8 *, 1) = (s8) (*temp_s0_3 % 13);
    }
    return var_v0;
}
