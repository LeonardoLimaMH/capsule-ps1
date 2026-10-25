#include "common.h"

void func_800C1010(void *arg0, s32 arg1) {
    extern u8 D_80063940[];
    extern u8 D_80091618[];
    extern u8 D_800F170C[];
    extern u8 D_800F190C[];
    extern u8 D_80100F38[];
    extern s16 D_80103EC2[];
    M2C_UNK (*temp_s1)(void *, s32);
    s16 *temp_s2;
    s16 temp_a0;
    s32 temp_a1;
    s32 temp_s4;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a3;
    u32 temp_a0_2;
    u8 temp_v1_2;
    void *temp_s0;
    void *temp_v0_2;

    temp_v0 = func_800B1260(arg1);
    temp_v1 = temp_v0 & 0xFFFF;
    if (temp_v1 != 0xFFFF) {
        temp_s4 = arg1 != 1;
        temp_s0 = (temp_v1 * 0x79C) + D_80100F38;
        if (M2C_FIELD(temp_s0, s16 *, 0x388) != 2) {
            temp_s2 = (temp_s4 * 2) + D_800F190C;
            temp_v1_2 = *M2C_FIELD(temp_s0, u8 **, 0x2BC);
            *temp_s2 = (s16) temp_v1_2;
            temp_s1 = *(s32 *)((temp_v1_2 * 4) + D_800F170C);
            if (M2C_FIELD(temp_s0, s16 *, 0x344) == 0) {
                func_800CEC68(arg1, M2C_FIELD(temp_s0, s16 *, 0x336), M2C_FIELD(temp_s0, s16 *, 0x338));
            }
            temp_s1(arg0, arg1);
            temp_a0 = *temp_s2;
            if ((temp_a0 == 0x52) || (temp_a0 == 0xD) || (temp_a0 == 0x53) || (temp_a0 == 0x69) || (temp_a0 == 0x79) || (temp_a0 == 0x7A) || (temp_a0 == 0x71) || (temp_a0 == 0x74) || (temp_a0 == 0x77) || (temp_a0 == 0x70)) {
                if ((u32) (*(s32 *)((temp_s4 * 2) + D_800F190C) - 0x52) < 2U) {
                    if (M2C_FIELD(temp_s0, s16 *, 0x37E) != 0) {
                        goto block_16;
                    }
                }
            } else {
block_16:
                M2C_FIELD(arg0, s16 *, 0x4E) = func_800E3A04(arg1, temp_s0 + 0x1CC, &arg0);
            }
            if (((*D_80103EC2) == 1) && (M2C_FIELD(temp_s0, s32 *, 0x180) != 0)) {
                temp_v0_2 = (*(s32 *)(((temp_v0 & 0xFFFF) * 0x1A8) + D_80091618) * 0x3C) + D_80063940;
                temp_a0_2 = M2C_FIELD(temp_v0_2, u32 *, 0x10);
                temp_a1 = (temp_a0_2 >> 0x18) & 0x3F;
                var_a3 = temp_a1;
                if ((((M2C_FIELD(temp_v0_2, s32 *, 0x14) & 3) * 4) | (temp_a0_2 >> 0x1E)) == 0) {
                    var_a3 = (temp_a1 * 4) / 5;
                }
                func_800C5850(arg0, M2C_FIELD(temp_s0, s32 *, 0x180), 0, (s16) (var_a3 * -1), -1);
            }
        }
    }
}
