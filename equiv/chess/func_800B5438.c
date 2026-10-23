#include "common.h"

void func_800B5438(s32 arg0) {
    extern M2C_UNK D_8008ED68[];
    extern M2C_UNK D_801010B0[];
    M2C_UNK var_a0;
    M2C_UNK var_a0_2;
    s32 temp_a2;
    s32 temp_s3;
    s32 var_a1;
    s32 var_a1_3;
    s32 var_a1_4;
    s32 var_s5;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *var_v1;
    u8 *var_v1_2;
    u8 temp_s2;
    u8 temp_s4;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v1;
    u8 var_a1_2;
    u8 var_v0;
    void *temp_a0_3;
    void *temp_s0;
    void *temp_s1;
    void *var_v1_3;

    temp_s0 = arg0 + 0x5D0;
    temp_s2 = M2C_FIELD(temp_s0, u8 *, 0x5FA);
    temp_a2 = temp_s2 * 2;
    temp_s4 = M2C_FIELD((temp_s0 + temp_s2), u8 *, 0x5FB);
    temp_s1 = temp_s0 + ((temp_s2 * 0x2E8) + 0x18) + (temp_s4 * 0x7C);
    temp_s3 = *((M2C_FIELD(temp_s0, u8 *, 9) * 0x34) + D_801010B0);
    var_s5 = 0;
    if (M2C_FIELD(temp_s0, u8 *, 0x60E) != 0) {
        var_s5 = M2C_FIELD(temp_s0, u8 *, 0x61E) == 7;
    }
    if (var_s5 == 0) {
        if (M2C_FIELD(temp_s1, u8 *, 0x22) != 1) {
            if (M2C_FIELD(temp_s0, u8 *, 0x709) == M2C_FIELD(temp_s0, u8 *, 0x708)) {
                var_a1 = 0;
                temp_a0 = temp_a2 + temp_s0 + 0x601;
                var_v1 = temp_a0;
                do {
                    temp_v0 = M2C_FIELD((temp_s0 + var_a1), u8 *, 0x6E4);
                    var_a1 += 1;
                    *var_v1 = temp_v0;
                    var_v1 = temp_a0 + var_a1;
                } while (var_a1 < 2);
                var_a1_2 = M2C_FIELD(temp_s0, u8 *, 0x708) - 3;
                goto block_13;
            }
            goto block_14;
        }
    } else if (M2C_FIELD(temp_s1, s32 *, 0x18) & 0xC0) {
        if (M2C_FIELD(temp_s0, u8 *, 0x709) == M2C_FIELD(temp_s0, u8 *, 0x708)) {
            var_a1_3 = 0;
            temp_a0_2 = temp_a2 + temp_s0 + 0x601;
            var_v1_2 = temp_a0_2;
            do {
                temp_v0_2 = M2C_FIELD((temp_s0 + var_a1_3), u8 *, 0x6E2);
                var_a1_3 += 1;
                *var_v1_2 = temp_v0_2;
                var_v1_2 = temp_a0_2 + var_a1_3;
            } while (var_a1_3 < 2);
            var_a1_2 = M2C_FIELD(temp_s0, u8 *, 0x70A);
block_13:
            func_800B077C(arg0, var_a1_2, temp_a2);
        }
block_14:
        temp_v1 = M2C_FIELD(temp_s0, u8 *, 0x709);
        if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
            var_v0 = temp_v1 - M2C_FIELD(D_8008ED68, u8 *, 0x103);
        } else {
            var_v0 = temp_v1 - 1;
        }
        M2C_FIELD(temp_s0, u8 *, 0x709) = var_v0;
        if ((u32) (var_v0 & 0xFF) < 2U) {
            func_80034AB0(func_800203DC(M2C_FIELD(temp_s1, u8 *, 0)) & 0xFFFF);
            var_a1_4 = 0;
            M2C_FIELD(temp_s1, s8 *, 0x25) = func_800A835C(arg0, temp_s2);
            M2C_FIELD(temp_s1, s8 *, 0x17) = 1;
            M2C_FIELD(temp_s1, s32 *, 0x18) = 0;
            M2C_FIELD(((M2C_FIELD(temp_s1, u8 *, 0x16) * 4) + ((M2C_FIELD(temp_s1, u8 *, 0x15) * 0x34) + temp_s3)), s8 *, 3) = 0;
            var_v1_3 = temp_s1;
            do {
                temp_v0_3 = M2C_FIELD((temp_s0 + var_a1_4), u8 *, 0x6E4);
                var_a1_4 += 1;
                M2C_FIELD(var_v1_3, u8 *, 0x15) = temp_v0_3;
                var_v1_3 = temp_s1 + var_a1_4;
            } while (var_a1_4 < 2);
            M2C_FIELD(((M2C_FIELD(temp_s1, u8 *, 0x16) * 4) + ((M2C_FIELD(temp_s1, u8 *, 0x15) * 0x34) + temp_s3)), s8 *, 3) = (s8) ((temp_s4 + 1) & 0x7F);
            if (temp_s2 != 0) {
                temp_a0_3 = (M2C_FIELD(temp_s1, u8 *, 0x16) * 4) + ((M2C_FIELD(temp_s1, u8 *, 0x15) * 0x34) + temp_s3);
                M2C_FIELD(temp_a0_3, u8 *, 3) = (u8) (M2C_FIELD(temp_a0_3, u8 *, 3) | 0x80);
            }
            if ((((u32) M2C_FIELD(temp_s1, u32 *, 0x14) >> 8) & 0xFFFF) == M2C_FIELD(temp_s0, u16 *, 0x6E2)) {
                M2C_FIELD(temp_s0, s8 *, 0x610) = 2;
                if (var_s5 != 0) {
                    var_a0 = 8;
                    goto block_30;
                }
                var_a0_2 = 0xB;
                if (M2C_FIELD((temp_s0 + (temp_s2 * 6)), u8 *, 0x5ED) != 4) {
                    var_a0_2 = 0xE;
                }
                func_80012604(var_a0_2, var_a1_4);
                M2C_FIELD(temp_s0, s8 *, 0x60C) = 1;
                return;
            }
            var_a0 = 9;
            if (var_s5 != 0) {
                var_a0 = 5;
            }
block_30:
            func_80012604(var_a0, var_a1_4);
        }
    }
}
