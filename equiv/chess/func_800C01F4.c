#include "common.h"

void func_800C01F4(void *arg0) {
    extern u8 D_8008ED68[];
    extern u16 D_8008EE50[];
    s32 var_a1;
    u16 temp_v1_2;
    u16 temp_v1_3;
    u16 var_v0_2;
    u16 var_v0_3;
    u32 var_v0;
    u8 temp_s2;
    u8 temp_s3;
    u8 temp_v1;
    void *temp_s0;
    void *temp_s1;
    void *var_a0;

    temp_s1 = arg0 + 0x5D0;
    temp_s2 = M2C_FIELD(temp_s1, u8 *, 0x5FA);
    temp_s3 = M2C_FIELD((temp_s1 + temp_s2), u8 *, 0x5FB);
    temp_s0 = temp_s1 + ((temp_s2 * 0x2E8) + 0x18) + (temp_s3 * 0x7C);
    switch ((*D_8008EE50)) {
    case 0:
        temp_v1 = M2C_FIELD(temp_s0, u8 *, 0);
        if ((temp_v1 != 0xA) && (temp_v1 != 0x27)) {
block_24:
            func_800125D8();
        default:
            return;
        }
block_9:
        func_80012628();
        return;
    case 1:
        func_800CAA44(arg0, temp_s0);
        func_800CB9F4(temp_s1, temp_s2, temp_s3);
        if (M2C_FIELD(temp_s0, u8 *, 0) == 0xA) {
            var_v0 = M2C_FIELD(temp_s0, u8 *, 0xE) - 1;
        } else {
            var_v0 = (u8) M2C_FIELD(temp_s0, u8 *, 0xE) >> 1;
        }
        M2C_FIELD(temp_s1, s16 *, 0x710) = (s16) var_v0;
        func_800C44BC(arg0, M2C_FIELD(temp_s0, s32 *, 0x70), temp_s2, temp_s3, 0);
        M2C_FIELD(temp_s0, s8 *, 0x6B) = (s8) (M2C_FIELD(temp_s0, u8 *, 0xE) - (u8) M2C_FIELD(temp_s1, s16 *, 0x710));
        func_800CABDC(arg0, temp_s0, 0x10000);
        M2C_FIELD(arg0, u16 *, 0xC) = 0U;
        goto block_9;
    case 2:
        temp_v1_2 = M2C_FIELD(arg0, u16 *, 0xC);
        if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
            var_v0_2 = temp_v1_2 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
        } else {
            var_v0_2 = temp_v1_2 + 1;
        }
        M2C_FIELD(arg0, u16 *, 0xC) = var_v0_2;
        if (M2C_FIELD(temp_s1, u8 *, 0x720) != 0) {
            M2C_FIELD(temp_s1, s8 *, 0x70D) = 1;
            goto block_9;
        }
        break;
    case 3:
        temp_v1_3 = M2C_FIELD(arg0, u16 *, 0xC);
        if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
            var_v0_3 = temp_v1_3 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
        } else {
            var_v0_3 = temp_v1_3 + 1;
        }
        M2C_FIELD(arg0, u16 *, 0xC) = var_v0_3;
        if ((u32) (var_v0_3 & 0xFFFF) < 0x3DU) {
            return;
        }
        goto block_9;
    case 4:
        func_800B3878(temp_s1);
        var_a1 = 0;
        var_a0 = temp_s1;
        do {
            var_a1 += 1;
            M2C_FIELD(var_a0, s32 *, 0x798) = (s32) M2C_FIELD(var_a0, s32 *, 0x78C);
            M2C_FIELD(var_a0, s32 *, 0x78C) = (s32) M2C_FIELD(var_a0, s32 *, 0x77C);
            var_a0 += 4;
        } while (var_a1 < 3);
        func_80012628(var_a0, var_a1);
        /* fallthrough */
    case 5:
        if (func_800B2F48(arg0, 1) != 0) {
            goto block_24;
        }
        break;
    }
}
