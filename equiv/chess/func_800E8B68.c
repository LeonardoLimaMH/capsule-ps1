#include "common.h"

void func_800E8B68(s32 arg0, void *arg1, void *arg3) {
    extern u8 D_80018600[];
    extern u8 D_8008ED68[];
    extern s16 D_8008EE54[];
    extern u8 D_8008F754[];
    extern s32 D_80118C18[];
    extern u8 D_80119710[];
    extern s32 D_80119714[];
    extern int func_800AADE0();
    s16 temp_s0_2;
    s16 var_v0;
    u16 temp_v0_2;
    u8 temp_a2;
    u8 temp_a3;
    u8 temp_a3_2;
    u8 temp_s1;
    u8 temp_s2;
    void *temp_s0;
    void *temp_s4;
    void *temp_v0;

    temp_s4 = M2C_FIELD(D_8008F754, void **, 0xC);
    switch (M2C_FIELD(D_8008F754, u16 *, -0x900)) {
    case 3:
        func_80015CD0(temp_s4 + 0x14, func_80019F30(0x7015B, 0x3C), 1);
        (*D_80119714) = 0;
        M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
        return;
    case 4:
        if (M2C_FIELD(D_80119710, s32 *, 4) >= 0x10) {
            temp_s1 = M2C_FIELD(arg1, u8 *, 0x5FA);
            temp_s2 = M2C_FIELD((arg1 + temp_s1), u8 *, 0x5FB);
            temp_v0 = func_80015B3C(D_80018600, &func_800AADE0, 1);
            M2C_FIELD(D_8008F754, void **, 0x10) = temp_v0;
            func_80015EF8(temp_v0);
            func_80015CD0(temp_v0 + 0x14, func_80019F30(0x7015B, 0x3D), 1);
            func_800A81D8(arg0, temp_v0, temp_s1, temp_s2);
            M2C_FIELD(temp_v0, u16 *, 0x46) = (u16) M2C_FIELD(temp_s4, u16 *, 0x46);
            M2C_FIELD(temp_v0, s16 *, 0x4A) = (s16) (M2C_FIELD(temp_s4, u16 *, 0x4A) - 0x5A);
            M2C_FIELD(temp_v0, s16 *, 0x4E) = (s16) (M2C_FIELD(temp_s4, u16 *, 0x4E) + 2);
            temp_v0_2 = M2C_FIELD(temp_s4, u16 *, 0x50);
            M2C_FIELD(temp_v0, u16 *, 0x52) = temp_v0_2;
            M2C_FIELD(temp_v0, u16 *, 0x50) = temp_v0_2;
            func_80034AB0(0x2C);
            temp_s0 = D_8008F754 - 0x9EC;
            M2C_FIELD(D_80119710, s32 *, 4) = 0;
            M2C_FIELD(temp_s0, u16 *, 0xEC) = (u16) (M2C_FIELD(temp_s0, u16 *, 0xEC) + 1);
            return;
        }
    default:
        return;
    case 5:
        M2C_FIELD(M2C_FIELD(D_8008F754, void **, 0x10), s16 *, 0x4A) = (s16) ((M2C_FIELD(temp_s4, u16 *, 0x4A) - 0x5A) + ((s32) (0x5A * M2C_FIELD(D_80119710, s32 *, 4)) / 20));
        if (M2C_FIELD(D_80119710, s32 *, 4) >= 0x14) {
            M2C_FIELD(D_80119710, s32 *, 4) = 0;
block_17:
            M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
            return;
        }
        break;
    case 6:
        func_80013928(M2C_FIELD(D_8008F754, void **, 0x10));
        M2C_FIELD(arg3, s32 *, 0x18) = (s32) (M2C_FIELD(arg3, s32 *, 0x18) | 4);
block_12:
        (*D_80119714) = 0;
        M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
        return;
    case 7:
        if (M2C_FIELD(D_80119710, s32 *, 4) >= 0x3C) {
            temp_s0_2 = func_800202A4(0x32) + 1;
            temp_a3 = M2C_FIELD(arg3, u8 *, 0x15);
            temp_a2 = M2C_FIELD(((M2C_FIELD(arg3, u8 *, 0x16) * 4) + ((temp_a3 * 0x34) + (*D_80118C18))), u8 *, 3);
            M2C_FIELD((arg1 + (M2C_FIELD(arg1, u8 *, 0x5FA) * 2)), u8 *, 0x601) = temp_a3;
            temp_a3_2 = M2C_FIELD(arg3, u8 *, 0x16);
            M2C_FIELD((arg1 + (M2C_FIELD(arg1, u8 *, 0x5FA) * 2)), u8 *, 0x602) = temp_a3_2;
            M2C_FIELD(arg1, s16 *, 0x710) = temp_s0_2;
            M2C_FIELD(arg3, s32 *, 0x1C) = (s32) (M2C_FIELD(arg3, s32 *, 0x1C) | 8);
            M2C_FIELD(arg1, s8 *, 0x610) = 2;
            func_800CB9F4(arg1, temp_a2 >> 7, (temp_a2 & 0x7F) - 1, temp_a3_2);
            func_800CAA44(arg0, arg3);
            func_800CA7B0(arg0, arg3, 0, 0, (s32) (s16) (temp_s0_2 * -1));
            func_800CABDC(arg0, arg3, 0x10000);
            M2C_FIELD(D_80119710, s32 *, 4) = 0;
            goto block_17;
        }
        break;
    case 8:
        if (M2C_FIELD(arg1, u8 *, 0x720) != 0) {
            M2C_FIELD(arg1, s8 *, 0x70D) = 1;
            goto block_12;
        }
        break;
    case 9:
        M2C_FIELD(temp_s4, u16 *, 0x4A) = (u16) (M2C_FIELD(temp_s4, u16 *, 0x4A) - 0x10);
        if (M2C_FIELD(D_80119710, s32 *, 4) >= 0xA) {
            if (M2C_FIELD(arg3, u8 *, 0xE) == 0) {
                var_v0 = 0x14;
block_20:
                (*D_8008EE54) = var_v0;
                M2C_FIELD(D_80119710, s32 *, 4) = 0;
            } else {
                M2C_FIELD(D_80119710, s32 *, 4) = 0;
                goto block_17;
            }
        }
        break;
    case 10:
        if (M2C_FIELD(D_80119710, s32 *, 4) >= 0x1E) {
            var_v0 = 0x63;
            goto block_20;
        }
        break;
    }
}
