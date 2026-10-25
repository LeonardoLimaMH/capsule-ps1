#include "common.h"

void func_800A24A4(void *arg0) {
    extern u8 D_8008ED68[];
    s32 temp_s1;
    s32 temp_v1_2;
    u16 temp_v1_3;
    u16 var_v0;
    u8 temp_a1;
    u8 temp_v1;
    void *temp_s0;
    void *temp_s3;

    temp_s0 = arg0 + 0x5D0;
    temp_v1 = M2C_FIELD(temp_s0, u8 *, 0x61A);
    temp_a1 = M2C_FIELD(temp_s0, u8 *, 0x5FA);
    if ((temp_v1 == 0) || (temp_v1 == 5)) {
        if (M2C_FIELD(D_8008ED68, u16 *, 0xE8) != 0) {
            temp_s1 = temp_a1 & 0xFF;
            if (M2C_FIELD(D_8008ED68, u16 *, 0xE8) != 1) {
                return;
            }
            temp_s3 = temp_s0 + temp_s1;
            if (M2C_FIELD(temp_s3, u8 *, 0x10) != 0) {
                func_800AECC4(temp_s0, temp_s1);
            }
            temp_v1_2 = M2C_FIELD(((temp_s1 * 0x10) + D_8008ED68), s32 *, 0x88);
            if (temp_v1_2 & 0x20) {
                if (M2C_FIELD(temp_s0, u8 *, 0x6DF) == 0) {
                    func_80034AB0(0x48);
                    M2C_FIELD(temp_s3, s8 *, 0x6D9) = 6;
                    M2C_FIELD(temp_s0, s8 *, 0x619) = 0;
                    M2C_FIELD(temp_s0, s8 *, 0x615) = 0;
                    M2C_FIELD(temp_s0, u8 *, 0x5FA) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x5FA) ^ 1);
                    func_80012604(7);
                    return;
                }
                goto block_17;
            }
            if (temp_v1_2 & 0x40) {
block_17:
                func_80034AB0(0x5D);
                M2C_FIELD(temp_s0, u8 *, 0x6DF) = 0U;
                func_800A1CA0(arg0, temp_s0, M2C_FIELD(temp_s0, u8 *, 0x5FA));
                func_80012604(4);
                return;
            }
            if ((temp_v1_2 & 0x8000) || (temp_v1_2 & 0x2000)) {
                func_80034AB0(0x84);
                M2C_FIELD(temp_s0, u8 *, 0x6DF) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x6DF) ^ 1);
            }
        } else if (M2C_FIELD((temp_a1 + temp_s0), u8 *, 0x10) != 0) {
            temp_v1_3 = M2C_FIELD(arg0, u16 *, 0xC);
            if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
                var_v0 = temp_v1_3 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
            } else {
                var_v0 = temp_v1_3 + 1;
            }
            M2C_FIELD(arg0, u16 *, 0xC) = var_v0;
            if ((u32) (var_v0 & 0xFFFF) >= 0x15U) {
                goto block_10;
            }
        } else {
block_10:
            func_80012628(temp_a1);
        }
    }
}
