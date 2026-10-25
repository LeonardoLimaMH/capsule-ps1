#include "common.h"

void func_800C0E6C(void *arg0) {
    extern u8 D_80069AD4[];
    extern u8 D_8008ED68[];
    extern u16 D_8008EE50[];
    M2C_UNK var_a0;
    s16 temp_v0;
    s32 temp_v0_2;
    s32 var_v0;
    u16 temp_v1;
    u16 var_v0_2;
    u8 temp_s2;
    u8 temp_s3;
    u8 temp_s4;
    u8 temp_s5;
    u8 temp_v1_2;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_s0;
    void *temp_s1;
    void *temp_v1_3;

    temp_s0 = arg0 + 0x5D0;
    temp_s5 = M2C_FIELD(temp_s0, u8 *, 0x5FA);
    temp_s4 = M2C_FIELD(temp_s0, u8 *, 0x712);
    temp_s3 = M2C_FIELD(temp_s0, u8 *, 0x713);
    temp_a1 = temp_s0 + temp_s5;
    temp_s1 = temp_s0 + ((temp_s4 * 0x2E8) + 0x18) + (temp_s3 * 0x7C);
    temp_s2 = M2C_FIELD(temp_a1, u8 *, 0x5FB);
    switch ((*D_8008EE50)) {
    case 0:
        func_800CAA44(arg0, temp_s1);
        func_800CB9F4(temp_s0, temp_s4, temp_s3);
        temp_v0 = func_800C202C(temp_s0, ((temp_s5 << 7) | (temp_s2 + 1)) & 0xFF, ((temp_s4 << 7) | (temp_s3 + 1)) & 0xFF) & 0xFF;
        M2C_FIELD(temp_s0, s16 *, 0x710) = temp_v0;
        if ((s32) M2C_FIELD(temp_s1, u8 *, 0xE) < temp_v0) {
            M2C_FIELD(temp_s0, s16 *, 0x710) = (s16) M2C_FIELD(temp_s1, u8 *, 0xE);
        }
        M2C_FIELD(temp_s0, s16 *, 0x710) = (s16) -(s16) (u16) M2C_FIELD(temp_s0, s16 *, 0x710);
        M2C_FIELD(temp_s1, s8 *, 0x6B) = (s8) (M2C_FIELD(temp_s1, u8 *, 0xE) + (u8) M2C_FIELD(temp_s0, s16 *, 0x710));
        M2C_FIELD(temp_s0, s8 *, 0x7A4) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x78C) = (s32) M2C_FIELD(D_80069AD4, s32 *, 0x44);
        M2C_FIELD(temp_s0, s32 *, 0x790) = (s32) M2C_FIELD(D_80069AD4, s32 *, 0x48);
        M2C_FIELD(temp_s0, s32 *, 0x794) = (s32) M2C_FIELD(D_80069AD4, s32 *, 0x4C);
        func_800B3488(temp_s0, temp_s1);
block_5:
        func_80012628();
        return;
    case 1:
        var_v0 = func_800B2F48(arg0, 0);
block_29:
        if (var_v0 != 0) {
            goto block_5;
        }
    default:
        return;
    case 2:
        var_v0 = func_800C5DE8(arg0, temp_s0, temp_s1);
        goto block_29;
    case 3:
        if (M2C_FIELD(temp_s1, u8 *, 0xE) == 0) {
            func_800A903C(arg0, temp_s0, temp_s4, temp_s3);
            M2C_FIELD(arg0, u16 *, 0xC) = 0U;
            goto block_5;
        }
        func_8001264C(5, temp_a1);
        return;
    case 4:
        temp_v1 = M2C_FIELD(arg0, u16 *, 0xC);
        if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
            var_v0_2 = temp_v1 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
        } else {
            var_v0_2 = temp_v1 + 1;
        }
        M2C_FIELD(arg0, u16 *, 0xC) = var_v0_2;
        if ((u32) (var_v0_2 & 0xFFFF) >= 0xA0U) {
            if (func_800C7DD8(temp_s0, temp_s1, temp_s4, temp_s3, 1) == 0) {
                temp_v0_2 = func_800A9100(arg0, temp_s0, temp_s4, temp_s3);
                if (temp_v0_2 != 0) {
                    M2C_FIELD(temp_s0, u8 *, 0x611) = (u8) (((temp_v0_2 - 1) * 8) | ((1 - temp_s4) * 2) | 1);
                }
            }
            goto block_5;
        }
        break;
    case 5:
        func_800B3878(temp_s0, temp_a1);
        func_80012628();
        /* fallthrough */
    case 6:
        if (func_800B2F48(arg0, 1) != 0) {
            if (!(M2C_FIELD(temp_s0, u8 *, 0x611) & 1)) {
                func_8001264C(7);
                return;
            }
            func_8001264C(8);
            return;
        }
        break;
    case 7:
        temp_v1_2 = M2C_FIELD(temp_s0, u8 *, 0x61E);
        if (temp_v1_2 == 1) {
            var_a0 = 8;
        } else {
            var_a0 = 7;
            if (temp_v1_2 != 2) {

            }
        }
block_33:
        func_80012604(var_a0, temp_a1);
        break;
    case 8:
        temp_v1_3 = temp_s0 + ((temp_s2 * 0x7C) + (temp_s5 * 0x2E8));
        temp_a1_2 = temp_s0 + (temp_s5 * 2);
        M2C_FIELD(temp_a1_2, u8 *, 0x601) = (u8) M2C_FIELD(temp_v1_3, u8 *, 0x2D);
        M2C_FIELD(temp_a1_2, u8 *, 0x602) = (u8) M2C_FIELD(temp_v1_3, u8 *, 0x2E);
        func_80012628(temp_s5 * 3, temp_a1_2);
        /* fallthrough */
    case 9:
        var_v0 = func_800B3338(arg0, 1);
        goto block_29;
    case 10:
        var_a0 = 9;
        if (M2C_FIELD(temp_s0, u8 *, 0x61E) == 1) {
            var_a0 = 0xA;
        }
        goto block_33;
    }
}
