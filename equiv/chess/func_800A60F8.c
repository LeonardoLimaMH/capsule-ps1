#include "common.h"

void func_800A60F8(void *arg0) {
    extern M2C_UNK D_80085428[];
    extern M2C_UNK D_8008ED68[];
    extern u16 D_8008EE4C[];
    s16 temp_hi;
    s16 temp_v0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v0_2;
    s32 var_v0_2;
    u16 temp_v1;
    u32 temp_v1_2;
    u32 temp_v1_3;
    u32 var_v0;
    void *temp_s3;

    temp_s1 = M2C_FIELD(arg0, s32 *, 0x7C);
    temp_s2 = M2C_FIELD(arg0, s32 *, 0x80);
    if (func_800CAECC(D_80085428, temp_s1, temp_s2) != 0) {
        temp_v1 = M2C_FIELD(arg0, u16 *, 0x7A);
        switch (temp_v1) {
        case 0:
            if (M2C_FIELD(D_80085428, u8 *, 1) != 0) {
                M2C_FIELD(arg0, u16 *, 0x7A) = 3U;
                goto block_36;
            }
            if (M2C_FIELD((D_80085428 + ((temp_s2 * 0x7C) + (temp_s1 * 0x2E8))), u8 *, 0x5FF) != 0) {
                if ((((*D_8008EE4C) == 5) || ((*D_8008EE4C) == 2) || ((*D_8008EE4C) == 3)) && (temp_s1 == M2C_FIELD(D_80085428, u8 *, 0xBCA)) && ((u8) M2C_FIELD(D_80085428, u8 *, 0xBEA) < 5U)) {
                    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
                    func_800A7310(D_80085428, arg0, temp_s1, temp_s2);
                    func_800C9648(D_80085428, arg0, temp_s1, temp_s2, 1, 5);
                    temp_v0 = (M2C_FIELD(arg0, s16 *, 0x50) * 2) / 5;
                    M2C_FIELD(arg0, s16 *, 0x52) = temp_v0;
                    M2C_FIELD(arg0, s16 *, 0x50) = temp_v0;
                    M2C_FIELD(arg0, s32 *, 0x8C) = func_800C942C(D_80085428, M2C_FIELD((D_80085428 + ((temp_s2 * 0x7C) + (temp_s1 * 0x2E8))), u8 *, 0x60D));
                } else {
                    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
                }
                if ((*D_8008EE4C) == 0xE) {
                    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
                    M2C_FIELD(arg0, u16 *, 0x7A) = (u16) (M2C_FIELD(arg0, u16 *, 0x7A) + 1);
                case 1:
                    M2C_FIELD(arg0, s32 *, 0x8C) = func_800C942C(D_80085428, M2C_FIELD((D_80085428 + ((temp_s2 * 0x7C) + (temp_s1 * 0x2E8))), u8 *, 0x60D));
                    M2C_FIELD(arg0, u32 *, 0x3C) = 4U;
                    M2C_FIELD(arg0, u16 *, 0x7A) = (u16) (M2C_FIELD(arg0, u16 *, 0x7A) + 1);
                case 2:
                    func_800A7310(D_80085428, arg0, temp_s1, temp_s2);
                    func_800C9648(D_80085428, arg0, temp_s1, temp_s2, 1, 5);
                    temp_v1_2 = M2C_FIELD(arg0, u32 *, 0x3C);
                    if (temp_v1_2 >= 0x1CU) {
                        M2C_FIELD(arg0, u16 *, 0x7A) = (u16) (M2C_FIELD(arg0, u16 *, 0x7A) + 1);
                    } else {
                        temp_hi = (M2C_FIELD(arg0, s16 *, 0x50) * temp_v1_2) / 28;
                        M2C_FIELD(arg0, s16 *, 0x52) = temp_hi;
                        M2C_FIELD(arg0, s16 *, 0x50) = temp_hi;
                    }
                    temp_v1_3 = M2C_FIELD(arg0, u32 *, 0x3C);
                    if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
                        var_v0 = temp_v1_3 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
                    } else {
                        var_v0 = temp_v1_3 + 1;
                    }
                    M2C_FIELD(arg0, u32 *, 0x3C) = var_v0;
                default:
block_33:
                    if ((u8) M2C_FIELD(D_80085428, u8 *, 0xBEA) < 5U) {
                        var_v0_2 = M2C_FIELD(arg0, s32 *, 0x38) & ~1;
                    } else {
                        goto block_35;
                    }
                    goto block_37;
                }
            } else {
                goto block_35;
            }
            break;
        case 3:
            temp_s3 = D_80085428 + 0x5D0;
            temp_v0_2 = func_800A8E34(temp_s3, temp_s1, temp_s2);
            if (temp_v0_2 == 2) {
                M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
                M2C_FIELD(arg0, u16 *, 0x7A) = (u16) (M2C_FIELD(arg0, u16 *, 0x7A) + 1);
                return;
            }
            if (temp_v0_2 != 0) {
                M2C_FIELD(arg0, u16 *, 0x7A) = 5U;
                return;
            }
            if (func_800A8D08(temp_s3, temp_s1, temp_s2) == 0) {
                func_800A7310(D_80085428, arg0, temp_s1, temp_s2);
                func_800C9648(D_80085428, arg0, temp_s1, temp_s2, 1, 5);
                func_800A7DCC(D_80085428, arg0, temp_s1, temp_s2);
                func_800A74D8(D_80085428, arg0, temp_s1, temp_s2);
                func_800A77E8(D_80085428, arg0, temp_s1, temp_s2);
                func_800A7A60(D_80085428, arg0, temp_s1, temp_s2);
                goto block_33;
            }
            goto block_35;
            goto block_37;
        case 4:
            if (func_800C5BCC(arg0) != 0) {
                M2C_FIELD(arg0, u16 *, 0x7A) = 5U;
                goto block_36;
            }
            break;
        case 5:
            if (func_800A8E34(D_80085428 + 0x5D0, temp_s1, temp_s2) == 0) {
                M2C_FIELD(arg0, u16 *, 0x7A) = 3U;
            }
            goto block_35;
        }
    } else {
block_35:
block_36:
        var_v0_2 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
block_37:
        M2C_FIELD(arg0, s32 *, 0x38) = var_v0_2;
    }
}
