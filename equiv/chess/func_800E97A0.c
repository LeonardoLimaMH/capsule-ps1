#include "common.h"

s32 func_800E97A0(void *arg0, void *arg1, void *arg2, void *arg3) {
    extern u8 D_80018600[];
    extern u8 D_8008ED68[];
    extern u8 D_8008F754[];
    extern s32 D_80118C18[];
    extern u8 D_80119710[];
    extern s32 D_80119714[];
    extern int func_800AADE0();
    s32 temp_s0_3;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_t0;
    s32 temp_v0_4;
    u16 temp_v0_3;
    u16 temp_v1;
    u32 temp_s2;
    u8 temp_s2_2;
    u8 temp_s3;
    u8 temp_v0;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s2_3;
    void *temp_s6;
    void *temp_v0_2;

    temp_s6 = M2C_FIELD(arg3, void **, 0x70);
    temp_v0 = M2C_FIELD(((M2C_FIELD(arg3, u8 *, 0x16) * 4) + ((M2C_FIELD(arg3, u8 *, 0x15) * 0x34) + (*D_80118C18))), u8 *, 3);
    temp_s2 = temp_v0 >> 7;
    temp_t0 = (temp_v0 & 0x7F) - 1;
    switch (M2C_FIELD(D_8008F754, u16 *, -0x900)) {
    case 0x0:
        if (func_800FED90(arg3, D_8008F754, D_80118C18) != 0) {
            M2C_FIELD(D_8008F754, s16 *, 0) = func_800202A4(8);
            M2C_FIELD(arg2, s8 *, 0x25) = func_800C94DC(arg0, 0);
            M2C_FIELD(arg2, s8 *, 0x17) = 0x88;
            M2C_FIELD(arg2, s8 *, 0x23) = 1;
            temp_s2_2 = M2C_FIELD(arg1, u8 *, 0x5FA);
            temp_s1 = func_80019F30(0x7015B, 0x3A);
            temp_s3 = M2C_FIELD((arg1 + temp_s2_2), u8 *, 0x5FB);
            temp_v0_2 = func_80015B3C(D_80018600, &func_800AADE0, 1);
            M2C_FIELD(D_8008F754, void **, 0xC) = temp_v0_2;
            func_80015EF8(temp_v0_2);
            func_80015CD0(temp_v0_2 + 0x14, temp_s1, 0);
            func_800A81D8(arg0, temp_v0_2, temp_s2_2, temp_s3);
            temp_s0 = D_8008F754 - 0x9EC;
            M2C_FIELD(temp_v0_2, u16 *, 0x46) = (u16) M2C_FIELD(temp_s6, u16 *, 0x46);
            M2C_FIELD(temp_v0_2, s16 *, 0x4A) = (s16) -((s32) M2C_FIELD(temp_s0, s32 *, 0x10C) / 2);
            M2C_FIELD(temp_v0_2, s16 *, 0x4E) = (s16) (M2C_FIELD(temp_s6, u16 *, 0x4E) - 2);
            temp_v0_3 = M2C_FIELD(temp_s6, u16 *, 0x50);
            M2C_FIELD(temp_v0_2, u16 *, 0x52) = temp_v0_3;
            M2C_FIELD(temp_v0_2, u16 *, 0x50) = temp_v0_3;
            (*D_80119714) = 0;
            M2C_FIELD(temp_s0, u16 *, 0xEC) = (u16) (M2C_FIELD(temp_s0, u16 *, 0xEC) + 1);
        default:
block_42:
        }
        return 0;
    case 0x1:
        M2C_FIELD(M2C_FIELD(D_8008F754, void **, 0xC), s16 *, 0x4A) = (s16) ((s32) ((-((s32) M2C_FIELD(D_8008ED68, s32 *, 0x10C) / 2) * (0x3C - M2C_FIELD(D_80119710, s32 *, 4))) + (M2C_FIELD(temp_s6, s16 *, 0x4A) * M2C_FIELD(D_80119710, s32 *, 4))) / 60);
        if (M2C_FIELD(D_80119710, s32 *, 4) >= 0x3C) {
            M2C_FIELD(D_80119710, s32 *, 4) = 0;
            M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
        }
        /* Duplicate return node #43. Try simplifying control flow for better match */
        return 0;
    case 0x2:
        if (M2C_FIELD(D_80119710, s32 *, 4) >= 0x3C) {
block_35:
            M2C_FIELD(D_80119710, s32 *, 4) = 0;
            M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
        }
        /* Duplicate return node #43. Try simplifying control flow for better match */
        return 0;
    case 0x3:
    case 0x4:
    case 0x5:
    case 0x6:
    case 0x7:
    case 0x8:
    case 0x9:
    case 0xA:
    case 0xB:
    case 0xC:
        if (M2C_FIELD(D_8008F754, s16 *, 0) != 1) {
            if (M2C_FIELD(D_8008F754, s16 *, 0) < 2) {
                temp_s2_3 = D_8008F754 - 0x9EC;
                if (M2C_FIELD(D_8008F754, s16 *, 0) != 0) {
                    goto block_31;
                }
                temp_v1 = M2C_FIELD(temp_s2_3, u16 *, 0xEC);
                temp_s0_2 = M2C_FIELD(D_8008F754, void **, 0xC);
                if (temp_v1 != 4) {
                    if ((s32) temp_v1 < 5) {
                        if (temp_v1 != 3) {
                            return 0;
                        }
                        func_80015CD0(temp_s0_2 + 0x14, func_80019F30(0x7015B, 0x3B, D_80118C18), 1);
                        (*D_80119714) = 0;
                        goto block_25;
                    }
                    if (temp_v1 != 5) {
                        return 0;
                    }
                    M2C_FIELD(temp_s0_2, u16 *, 0x4A) = (u16) (M2C_FIELD(temp_s0_2, u16 *, 0x4A) - 0x10);
                    if (M2C_FIELD(D_80119710, s32 *, 4) >= 0xA) {
                        M2C_FIELD(temp_s2_3, u16 *, 0xEC) = 0x63U;
                        M2C_FIELD(D_80119710, s32 *, 4) = 0;
                    }
                    /* Duplicate return node #43. Try simplifying control flow for better match */
                    return 0;
                }
                if (M2C_FIELD(D_80119710, s32 *, 4) == 0x24) {
                    func_80034AB0(0x4C, D_8008F754, D_80118C18);
                }
                if (M2C_FIELD(temp_s0_2, s32 *, 0x1C) == 0) {
                    M2C_FIELD(D_80119710, s32 *, 4) = 0;
block_25:
                    M2C_FIELD(temp_s2_3, u16 *, 0xEC) = (u16) (M2C_FIELD(temp_s2_3, u16 *, 0xEC) + 1);
                }
                /* Duplicate return node #43. Try simplifying control flow for better match */
                return 0;
            }
            if (M2C_FIELD(D_8008F754, s16 *, 0) != 2) {
block_31:
                func_800E9294(arg0, arg1, arg2);
                return 0;
            }
            func_800E8F64(arg0, arg1, arg2);
            return 0;
        }
        func_800E8B68(arg0, arg1, arg2);
        return 0;
    case 0x14:
        func_800A903C(arg0, arg1, temp_s2, temp_t0 & 0xFF);
block_40:
        (*D_80119714) = 0;
        M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
        goto block_42;
    case 0x15:
        if (M2C_FIELD(D_80119710, s32 *, 4) >= 0x78) {
            M2C_FIELD(arg0, s16 *, 0xC) = 0;
            goto block_35;
        }
        /* Duplicate return node #43. Try simplifying control flow for better match */
        return 0;
    case 0x16:
        temp_s1_2 = temp_s2 & 0xFF;
        temp_s0_3 = temp_t0 & 0xFF;
        if (__udivdi3(arg1, arg3, temp_s1_2, temp_s0_3) == 0) {
            temp_v0_4 = func_800A9100(arg0, arg1, temp_s1_2, temp_s0_3);
            if (temp_v0_4 != 0) {
                M2C_FIELD(arg1, s8 *, 0x611) = (s8) (((temp_v0_4 - 1) * 8) | ((1 - temp_s2) * 2) | 1);
            }
        }
        goto block_40;
    case 0x17:
    case 0x63:
        M2C_FIELD(arg2, s8 *, 0x17) = 0x81;
        func_80013928(M2C_FIELD(D_8008F754, void **, 0xC), D_8008F754, D_80118C18);
        return 1;
    }
}
