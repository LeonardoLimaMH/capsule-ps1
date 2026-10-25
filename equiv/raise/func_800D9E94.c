#include "common.h"

u8 *func_800D9E94(s32 arg0, s32 arg1) {
    extern u8 D_80091618[];
    extern s16 D_800F0738[];
    extern u8 D_800F1DB0[];
    extern u8 D_80100F38[];
    s16 temp_v1;
    s32 temp_v0_2;
    s32 var_a0_2;
    s32 var_s0;
    u16 *temp_a0;
    u16 temp_a1;
    u8 *temp_v0;
    u8 *var_a0;
    void *temp_s1;
    void *temp_v1_2;
    void *var_v0;

    temp_s1 = ((func_800B1260(arg1) & 0xFFFF) * 0x79C) + D_80100F38;
    temp_v1 = M2C_FIELD(temp_s1, s16 *, 0x344);
    switch (temp_v1) {                              /* irregular */
    case 0:
        *(s16 *)(((1 - arg1) * 2) + D_800F1DB0) = 0x960;
        M2C_FIELD(temp_s1, s16 *, 0x344) = 1;
        M2C_FIELD(temp_s1, s32 *, 0x798) = (s32) (M2C_FIELD(temp_s1, s32 *, 0x798) & ~0xC00);
        break;
    case 1:
        func_800CE4B8(arg1, arg0, (*D_800F0738) + func_800CE128(M2C_FIELD(temp_s1, s16 *, 0x326)), 0);
        M2C_FIELD(temp_s1, s16 *, 0x344) = 2;
        M2C_FIELD(temp_s1, s32 *, 0x798) = (s32) ((M2C_FIELD(temp_s1, s32 *, 0x798) & ~0xC00) | 0x400);
        break;
    case 2:
        temp_a0 = ((1 - arg1) * 2) + D_800F1DB0;
        temp_v1_2 = ((func_800B12D8(arg1) & 0xFFFF) * 0x79C) + D_80100F38;
        temp_a1 = *temp_a0 - 1;
        *temp_a0 = temp_a1;
        if (((u32) M2C_FIELD(temp_v1_2, u32 *, 0x798) >> 0xA) & 3) {
            M2C_FIELD(temp_s1, s16 *, 0x344) = 3;
            M2C_FIELD(temp_s1, s32 *, 0x798) = (s32) ((M2C_FIELD(temp_s1, s32 *, 0x798) & ~0xC00) | 0x800);
        } else if ((temp_a1 << 0x10) == 0) {
            var_a0 = M2C_FIELD(temp_s1, u8 **, 0x2BC);
            if (*var_a0 != 1) {
                do {
                    temp_v0 = var_a0 + 1;
                    M2C_FIELD(temp_s1, u8 **, 0x2BC) = temp_v0;
                    var_a0 = temp_v0;
                } while (M2C_FIELD(var_a0, u8 *, 1) != 1);
            }
            var_s0 = 1;
            do {
                temp_v0_2 = func_800B1260(var_s0);
                var_a0_2 = 3;
                var_v0 = ((temp_v0_2 & 0xFFFF) * 0x1A8) + D_80091618 + 6;
loop_15:
                M2C_FIELD(var_v0, s16 *, 0x62) = 0;
                var_a0_2 -= 1;
                var_v0 -= 2;
                if (var_a0_2 >= 0) {
                    goto loop_15;
                }
                func_800D4B7C(var_s0, temp_v0_2 & 0xFFFF);
                var_s0 -= 1;
            } while (var_s0 >= 0);
            M2C_FIELD(temp_s1, s16 *, 0x344) = 0;
        }
        break;
    default:
        if ((((u32) M2C_FIELD((((func_800B12D8(arg1) & 0xFFFF) * 0x79C) + D_80100F38), u32 *, 0x798) >> 0xA) & 3) == 2) {
            M2C_FIELD(temp_s1, s16 *, 0x344) = 0;
            M2C_FIELD(temp_s1, u8 **, 0x2BC) = (u8 *) (M2C_FIELD(temp_s1, u8 **, 0x2BC) + 1);
        }
        break;
    }
    return M2C_FIELD(temp_s1, u8 **, 0x2BC);
}
