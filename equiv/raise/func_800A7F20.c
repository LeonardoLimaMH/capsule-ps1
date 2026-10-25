#include "common.h"

s16 func_800A7F20(s32 arg0) {
    extern u8 D_80063940[];
    extern u8 D_80091618[];
    extern u8 D_800EC7A8[];
    s16 *var_a3;
    s16 temp_a1;
    s16 temp_v0_2;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 var_a1;
    s16 var_a1_2;
    s16 var_a2;
    s16 var_v0;
    s16 var_v0_2;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_3;
    u16 var_v1;
    u8 temp_s2;
    void *temp_v1;
    void *temp_v1_2;

    var_a1 = 0;
    temp_v0 = (arg0 & 0xFFFF) * 0x1A8;
    var_a3 = temp_v0 + (D_80091618 + 0xD2);
    var_a2 = 2;
    temp_s2 = M2C_FIELD(((*(temp_v0 + D_80091618) * 0x3C) + D_80063940), u8 *, 0x11);
    do {
        temp_v0_3 = var_a2 << 0x10;
        if ((u32) ((var_a2 - 3) & 0xFFFF) < 2U) {
            var_v0 = M2C_FIELD(((temp_v0_3 >> 0xF) + D_800EC7A8), s16 *, 0x5A);
            var_v1 = 0xFF - *var_a3;
        } else {
            var_v1 = M2C_FIELD(((temp_v0_3 >> 0xF) + D_800EC7A8), u16 *, 0x5A);
            var_v0 = (s16) (u16) *var_a3;
        }
        var_a1 += var_v1 * var_v0;
        temp_v0_2 = var_a2 + 1;
        var_a2 = temp_v0_2;
        var_a3 += 2;
    } while (temp_v0_2 < 8);
    temp_v0_4 = (var_a1 / 100) / 51;
    var_a1_2 = temp_v0_4;
    temp_s0 = arg0 & 0xFFFF;
    if (temp_v0_4 >= 5) {
        var_a1_2 = 4;
    }
    temp_v0_5 = func_800E6A1C(temp_s0, var_a1_2, var_a2, var_a3);
    temp_v1_2 = (temp_s0 * 0x1A8) + D_80091618;
    temp_a1 = M2C_FIELD(temp_v1_2, s16 *, 0xBE);
    M2C_FIELD(temp_v1_2, s16 *, 0xBA) = temp_v0_5;
    if (temp_a1 < 0xC8) {
        M2C_FIELD(temp_v1_2, s16 *, 0xBA) = (s16) (temp_v0_5 - 1);
        if (temp_a1 < 0x64) {
            M2C_FIELD(temp_v1_2, s16 *, 0xBA) = (s16) (temp_v0_5 - 2);
        }
    } else {
        var_v0_2 = temp_v0_5 + 1;
        if ((temp_a1 < 0x12D) || (M2C_FIELD(temp_v1_2, s16 *, 0xBA) = (s16) (temp_v0_5 - 1), var_v0_2 = temp_v0_5 - 2, ((temp_a1 < 0x191) == 0))) {
            M2C_FIELD(temp_v1_2, s16 *, 0xBA) = var_v0_2;
        }
    }
    temp_v1 = ((arg0 & 0xFFFF) * 0x1A8) + D_80091618;
    if (M2C_FIELD(temp_v1, s16 *, 0xBA) < 0) {
        M2C_FIELD(temp_v1, s16 *, 0xBA) = 0;
    }
    temp_v0_6 = temp_s2 + (u16) M2C_FIELD(temp_v1, s16 *, 0xBA);
    M2C_FIELD(temp_v1, s16 *, 0xBA) = temp_v0_6;
    if (temp_v0_6 >= 0xA) {
        M2C_FIELD(temp_v1, s16 *, 0xBA) = 9;
    }
    return M2C_FIELD(temp_v1, s16 *, 0xBA);
}
