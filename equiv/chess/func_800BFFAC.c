#include "common.h"

void func_800BFFAC(s32 arg0, s32 arg1) {
    extern M2C_UNK D_80069AD4[];
    extern M2C_UNK D_8008ED68[];
    M2C_UNK *var_v1;
    s32 temp_v0;
    s32 var_a1;
    s32 var_a1_2;
    u16 temp_s0;
    u8 temp_s3;
    u8 temp_s4;
    u8 temp_v1;
    void *temp_a0;
    void *temp_s1;
    void *temp_s2;
    void *var_a0;
    void *var_a0_2;

    temp_s1 = arg0 + 0x5D0;
    temp_s4 = M2C_FIELD(temp_s1, u8 *, 0x5FA);
    temp_s3 = M2C_FIELD((temp_s1 + temp_s4), u8 *, 0x5FB);
    temp_s2 = temp_s1 + ((temp_s4 * 0x2E8) + 0x18) + (temp_s3 * 0x7C);
    temp_s0 = M2C_FIELD(D_8008ED68, u16 *, 0xE8);
    switch (temp_s0) {                              /* irregular */
    default:
        var_a1 = 0;
        if (temp_s0 != 3) {
            return;
        }
        var_v1 = D_80069AD4;
        var_a0 = temp_s1;
        do {
            temp_v0 = M2C_FIELD(var_v1, s32 *, 0x44);
            var_v1 += 4;
            var_a1 += 1;
            M2C_FIELD(var_a0, s32 *, 0x798) = temp_v0;
            var_a0 += 4;
        } while (var_a1 < 3);
block_28:
        func_800125D8();
        return;
    case 0:
        M2C_FIELD(temp_s2, s8 *, 0x17) = 1;
        if (M2C_FIELD(temp_s2, u8 *, 0) == 0xC) {
            M2C_FIELD(temp_s2, s8 *, 0x29) = (s8) (((u32) M2C_FIELD(func_800A8E84(temp_s1), u32 *, 0x10) >> 0x19) & 0xE);
        }
        M2C_FIELD(temp_s2, s32 *, 0x18) = 0;
        M2C_FIELD(temp_s2, s8 *, 0x25) = func_800A835C(arg0, temp_s4);
        if (arg1 != 3) {
            M2C_FIELD(temp_s1, s8 *, 0x610) = 2;
        }
block_16:
        func_80012628();
        return;
    case 1:
        temp_a0 = func_800A8E84(temp_s1);
        if (arg1 != 0) {
            if (arg1 != 3) {
                if (arg1 != temp_s0) {
                    if (arg1 == 4) {
                        goto block_15;
                    }
                    temp_v1 = M2C_FIELD(temp_s2, u8 *, 0);
                    if (temp_v1 != 0xA) {
                        if (temp_v1 != 0x27) {
                            var_a1_2 = 0;
                            if ((((u32) M2C_FIELD(temp_a0, u32 *, 0x10) >> 7) & 0xF) != temp_s0) {
                                goto block_20;
                            }
                            var_a0_2 = temp_s1;
                            M2C_FIELD(var_a0_2, u8 *, 0x712) = temp_s4;
                            M2C_FIELD(var_a0_2, u8 *, 0x713) = temp_s3;
                            do {
                                var_a1_2 += 1;
                                M2C_FIELD(var_a0_2, s32 *, 0x798) = (s32) M2C_FIELD(var_a0_2, s32 *, 0x78C);
                                var_a0_2 += 4;
                            } while (var_a1_2 < 3);
                            func_800125D8(var_a0_2, var_a1_2);
                            goto block_28;
                        }
                        goto block_28;
                    }
                    goto block_28;
                }
block_15:
                func_800B3878(temp_s1);
                M2C_FIELD(D_8008ED68, s32 *, 0x9A0) = 0;
                goto block_16;
            }
            goto block_20;
        }
block_20:
        func_800B3878(temp_s1);
        goto block_16;
    case 2:
        if (func_800B2F48(arg0, 1) != 0) {
            goto block_16;
        }
        break;
    }
}
