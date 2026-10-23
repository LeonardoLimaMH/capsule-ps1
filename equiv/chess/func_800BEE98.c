#include "common.h"

void func_800BEE98(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    extern u16 D_8008EE50[];
    s32 temp_v1_4;
    u16 temp_v1_2;
    u16 temp_v1_3;
    u16 temp_v1_5;
    u16 var_v0;
    u16 var_v0_2;
    u8 *temp_s3;
    u8 temp_s1;
    u8 temp_v1;
    void *temp_s2;

    temp_s2 = arg0 + 0x5D0;
    temp_s1 = M2C_FIELD(temp_s2, u8 *, 0x5FA);
    temp_s3 = temp_s2 + ((temp_s1 * 0x2E8) + 0x18) + (M2C_FIELD((temp_s2 + temp_s1), u8 *, 0x5FB) * 0x7C);
    if ((*D_8008EE50) != 0) {
        if (*temp_s3 == 0x29) {
            func_800A036C(arg0, M2C_FIELD(arg0, u16 *, 0xC));
        } else {
            func_800A0398(arg0, M2C_FIELD(arg0, u16 *, 0xC));
        }
    }
    switch (M2C_FIELD(D_8008ED68, u16 *, 0xE8)) {  /* irregular */
    case 0:
        temp_v1 = *temp_s3;
        if ((temp_v1 == 0x29) || (temp_v1 == 0x58)) {
            M2C_FIELD(arg0, u16 *, 0xC) = 0U;
block_14:
            func_80012628();
            return;
        }
block_33:
        func_800125D8(D_8008ED68);
        return;
    case 1:
        if ((u16) M2C_FIELD(arg0, u16 *, 0xC) < 6U) {
            temp_v1_2 = M2C_FIELD(arg0, u16 *, 0xC);
            if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
                var_v0 = temp_v1_2 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
            } else {
                var_v0 = temp_v1_2 + 1;
            }
block_32:
            M2C_FIELD(arg0, u16 *, 0xC) = var_v0;
            return;
        }
        if (M2C_FIELD((temp_s2 + temp_s1), u8 *, 0x10) != 0) {
            temp_v1_3 = M2C_FIELD(arg0, u16 *, 0xC);
            if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
                var_v0_2 = temp_v1_3 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
            } else {
                var_v0_2 = temp_v1_3 + 1;
            }
            M2C_FIELD(arg0, u16 *, 0xC) = var_v0_2;
            if ((u32) (var_v0_2 & 0xFFFF) >= 0x1BU) {
                M2C_FIELD(arg0, u16 *, 0xC) = 6U;
                func_800AECC4(temp_s2, temp_s1);
            }
        }
        temp_v1_4 = M2C_FIELD(((temp_s1 * 0x10) + D_8008ED68), s32 *, 0x88);
        if (!(temp_v1_4 & 0x40)) {
            if (temp_v1_4 & 0x20) {
                goto block_14;
            }
        } else {
            goto block_14;
        }
        break;
    case 2:
        if (M2C_FIELD(arg0, u16 *, 0xC) != 0) {
            temp_v1_5 = M2C_FIELD(arg0, u16 *, 0xC);
            if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
                var_v0 = temp_v1_5 - M2C_FIELD(D_8008ED68, u8 *, 0x103);
            } else {
                var_v0 = temp_v1_5 - 1;
            }
            goto block_32;
        }
        goto block_33;
    }
}
