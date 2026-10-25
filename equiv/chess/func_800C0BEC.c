#include "common.h"

void func_800C0BEC(void *arg0) {
    extern u8 D_80018600[];
    extern u8 D_80063940[];
    extern u8 D_8008ED68[];
    extern u16 D_8008EE50[];
    extern int func_800C1CA4();
    M2C_UNK var_a0;
    u16 temp_v1_2;
    u16 var_v0;
    u8 temp_s2;
    u8 temp_s3;
    u8 temp_v1;
    void *temp_s0;
    void *temp_s1;
    void *temp_s4;

    temp_s0 = arg0 + 0x5D0;
    temp_v1 = M2C_FIELD(temp_s0, u8 *, 0x5FA);
    temp_s3 = M2C_FIELD(temp_s0, u8 *, 0x712);
    temp_s2 = M2C_FIELD(temp_s0, u8 *, 0x713);
    temp_s4 = temp_s0 + ((temp_v1 * 0x2E8) + 0x18) + (M2C_FIELD((temp_s0 + temp_v1), u8 *, 0x5FB) * 0x7C);
    temp_s1 = temp_s0 + ((temp_s3 * 0x2E8) + 0x18) + (temp_s2 * 0x7C);
    switch ((*D_8008EE50)) {
    case 0:
        if (M2C_FIELD(temp_s0, u8 *, 0x60D) != 0) {
            if (M2C_FIELD(temp_s4, u8 *, 0) == 0x26) {
                func_80015EF8(func_80015B3C(&func_800C1CA4, D_80018600, 2));
            }
            if ((((u32) M2C_FIELD(((M2C_FIELD(temp_s4, u8 *, 0) * 0x3C) + D_80063940), u32 *, 0x20) >> 0xB) & 0xF) && (M2C_FIELD(temp_s0, s16 *, 0x710) != 0)) {
                M2C_FIELD(temp_s1, s32 *, 0x1C) = (s32) (M2C_FIELD(temp_s1, s32 *, 0x1C) | 8);
                M2C_FIELD(temp_s1, s32 *, 0x18) = (s32) (M2C_FIELD(temp_s1, s32 *, 0x18) | 1);
            }
block_10:
            func_80012628();
            return;
        }
    default:
        return;
    case 1:
        if (M2C_FIELD(temp_s0, u8 *, 0x60D) == 2) {
            M2C_FIELD(temp_s4, s8 *, 0x17) = 1;
            func_800CAA44(arg0, temp_s1);
            func_800CB9F4(temp_s0, temp_s3, temp_s2);
            M2C_FIELD(temp_s1, s8 *, 0x6B) = (s8) (M2C_FIELD(temp_s1, u8 *, 0xE) - (u8) M2C_FIELD(temp_s0, s16 *, 0x710));
            goto block_10;
        }
        break;
    case 2:
        M2C_FIELD(temp_s0, s8 *, 0x610) = 2;
        M2C_FIELD(arg0, u16 *, 0xC) = 0U;
        goto block_10;
    case 3:
        temp_v1_2 = M2C_FIELD(arg0, u16 *, 0xC);
        if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
            var_v0 = temp_v1_2 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
        } else {
            var_v0 = temp_v1_2 + 1;
        }
        M2C_FIELD(arg0, u16 *, 0xC) = var_v0;
        if ((u32) (var_v0 & 0xFFFF) >= 0x28U) {
            func_800CABDC(arg0, temp_s1, 0x10000);
            goto block_10;
        }
        break;
    case 4:
        if (M2C_FIELD(temp_s0, u8 *, 0x720) != 0) {
            M2C_FIELD(temp_s0, s8 *, 0x70D) = 1;
            var_a0 = 0xB;
            if (M2C_FIELD(temp_s1, u8 *, 0xE) == 0) {
                func_800A903C(arg0, temp_s0, temp_s3, temp_s2);
                var_a0 = 9;
            }
            func_80012604(var_a0);
        }
        break;
    }
}
