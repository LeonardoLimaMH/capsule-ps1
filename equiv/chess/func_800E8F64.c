#include "common.h"

void func_800E8F64(s32 arg0, u8 *arg1, u8 *arg2, void *arg3) {
    extern u8 D_8008ED68[];
    extern s16 D_8008EE54[];
    extern u8 D_8008F754[];
    extern s32 D_80118C18[];
    extern u8 D_80119710[];
    extern s32 D_80119714[];
    u8 *temp_s3;
    u8 *var_a1;
    u8 *var_a2;
    s16 temp_s0_2;
    u8 temp_a2_2;
    u8 temp_a3;
    u8 temp_a3_2;
    void *temp_a2;
    void *temp_s0;
    void *temp_s2;
    void *temp_v1;

    var_a1 = arg1;
    var_a2 = arg2;
    temp_s2 = M2C_FIELD(arg3, void **, 0x70);
    temp_s0 = M2C_FIELD(D_8008F754, void **, 0xC);
    temp_s3 = var_a1;
    switch (M2C_FIELD(D_8008F754, u16 *, -0x900)) {
    case 3:
        func_80015CD0(temp_s0 + 0x14, func_80019F30(0x7015B, 0x3E), 1);
        func_80034AB0(0x1C);
        temp_a2 = D_8008F754 - 0x9EC;
        M2C_FIELD(arg3, s32 *, 0x18) = (s32) (M2C_FIELD(arg3, s32 *, 0x18) | 0x40000000);
        (*D_80119714) = 0;
        M2C_FIELD(D_8008F754, u16 *, 2) = (u16) M2C_FIELD(temp_s2, u16 *, 0x50);
        M2C_FIELD(temp_a2, u16 *, 0xEC) = (u16) (M2C_FIELD(temp_a2, u16 *, 0xEC) + 1);
        return;
    case 4:
        if (M2C_FIELD(D_80119710, s32 *, 4) >= 0xA) {
            M2C_FIELD(D_80119710, s32 *, 4) = 0;
block_16:
            M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
            return;
        }
    default:
        return;
    case 5:
        var_a2 = D_8008F754;
        var_a1 = D_80119710;
        M2C_FIELD(temp_s2, s16 *, 0x52) = (s16) ((s32) ((s16) M2C_FIELD(D_8008F754, u16 *, 2) * (0xA - M2C_FIELD(D_80119710, s32 *, 4))) / 10);
        temp_v1 = D_8008F754 - 0x9EC;
        if ((M2C_FIELD(D_80119710, s32 *, 4) * 0xA) >= 0x50) {
            M2C_FIELD(D_80119710, s32 *, 4) = 0;
            M2C_FIELD(temp_v1, u16 *, 0xEC) = (u16) (M2C_FIELD(temp_v1, u16 *, 0xEC) + 1);
        case 6:
            if (M2C_FIELD(temp_s0, s32 *, 0x1C) == 0) {
                temp_s0_2 = func_800202A4(0x32, var_a1, var_a2) + 0x33;
                temp_a3 = M2C_FIELD(arg3, u8 *, 0x15);
                temp_a2_2 = M2C_FIELD(((M2C_FIELD(arg3, u8 *, 0x16) * 4) + ((temp_a3 * 0x34) + (*D_80118C18))), u8 *, 3);
                M2C_FIELD((temp_s3 + (M2C_FIELD(temp_s3, u8 *, 0x5FA) * 2)), u8 *, 0x601) = temp_a3;
                temp_a3_2 = M2C_FIELD(arg3, u8 *, 0x16);
                M2C_FIELD((temp_s3 + (M2C_FIELD(temp_s3, u8 *, 0x5FA) * 2)), u8 *, 0x602) = temp_a3_2;
                M2C_FIELD(temp_s3, s16 *, 0x710) = temp_s0_2;
                M2C_FIELD(arg3, s32 *, 0x1C) = (s32) (M2C_FIELD(arg3, s32 *, 0x1C) | 8);
                M2C_FIELD(temp_s3, s8 *, 0x610) = 2;
                func_800CB9F4(temp_s3, temp_a2_2 >> 7, (temp_a2_2 & 0x7F) - 1, temp_a3_2);
                func_800CAA44(arg0, arg3);
                func_800CA7B0(arg0, arg3, 0, 0, (s32) (s16) (temp_s0_2 * -1));
                func_800CABDC(arg0, arg3, 0x10000);
block_11:
                (*D_80119714) = 0;
                M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
                return;
            }
        }
        break;
    case 7:
        if (M2C_FIELD(temp_s3, u8 *, 0x720) != 0) {
            M2C_FIELD(temp_s3, s8 *, 0x70D) = 1;
            goto block_11;
        }
        break;
    case 8:
        M2C_FIELD(temp_s0, u16 *, 0x4A) = (u16) (M2C_FIELD(temp_s0, u16 *, 0x4A) - 0x10);
        if (M2C_FIELD(D_80119710, s32 *, 4) >= 0x10) {
            M2C_FIELD(arg3, s32 *, 0x18) = (s32) (M2C_FIELD(arg3, s32 *, 0x18) ^ 0x40000000);
            if (M2C_FIELD(arg3, u8 *, 0xE) == 0) {
                (*D_8008EE54) = 0x14;
                M2C_FIELD(D_80119710, s32 *, 4) = 0;
                return;
            }
            M2C_FIELD(D_80119710, s32 *, 4) = 0;
            goto block_16;
        }
        break;
    case 9:
        (*D_8008EE54) = 0x63;
        (*D_80119714) = 0;
        break;
    }
}
