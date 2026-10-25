#include "common.h"

s32 func_800E78A4(void *arg1, void *arg2) {
    extern u8 D_80018600[];
    extern u8 D_8008ED68[];
    extern s8 D_8008EE6A[];
    extern u8 D_80119710[];
    extern s32 D_80119714[];
    extern int func_800E7E5C();
    extern int func_800F52C4();
    extern int func_800F7DE4();
    extern int func_800F9154();
    s16 temp_a1;
    s8 temp_s1;
    u16 temp_t0;
    u16 temp_t0_2;
    u16 temp_t0_3;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;

    if (M2C_FIELD(D_8008ED68, u16 *, 0xEC) != 2) {
        if ((s32) M2C_FIELD(D_8008ED68, u16 *, 0xEC) < 3) {
            switch (M2C_FIELD(D_8008ED68, u16 *, 0xEC)) { /* irregular */
            case 0:
                M2C_FIELD(D_8008ED68, s8 *, 0x102) = 2;
                M2C_FIELD(D_8008ED68, s16 *, 0x9EC) = 0;
                func_80034AB0(0x8011, M2C_FIELD(D_8008ED68, u16 *, 0xEC));
                (*D_80119714) = 0;
                goto block_28;
            case 1:
                temp_s1 = M2C_FIELD(D_80119710, s32 *, 0) % 12;
                if (temp_s1 == M2C_FIELD(D_8008ED68, u16 *, 0xEC)) {
                    temp_v0 = func_80015B3C(&func_800E7E5C, &func_800F7DE4, 1);
                    func_800FE188(arg2, temp_v0 + 0x28);
                    temp_t0 = M2C_FIELD(temp_v0, u16 *, 0x2A);
                    M2C_FIELD(temp_v0, s8 *, 0x30) = 0xFF;
                    M2C_FIELD(temp_v0, s8 *, 0x31) = 0xFF;
                    M2C_FIELD(temp_v0, s8 *, 0x32) = 0xFF;
                    M2C_FIELD(temp_v0, s8 *, 0x34) = 0xFF;
                    M2C_FIELD(temp_v0, s8 *, 0x35) = 0xFF;
                    M2C_FIELD(temp_v0, s8 *, 0x36) = 0xFF;
                    M2C_FIELD(temp_v0, s8 *, 0x38) = 8;
                    M2C_FIELD(temp_v0, s16 *, 0x3A) = 0x1E;
                    M2C_FIELD(temp_v0, s16 *, 0x3C) = 0x32;
                    M2C_FIELD(temp_v0, s8 *, 0x40) = temp_s1;
                    M2C_FIELD(temp_v0, u16 *, 0x24) = temp_t0;
                    M2C_FIELD(temp_v0, u16 *, 0x2A) = (u16) (temp_t0 - 0x12C);
                    M2C_FIELD(temp_v0, s16 *, 0x42) = GetTPage(0, 1, 0x280, 0x100);
                    M2C_FIELD(temp_v0, s16 *, 0x44) = GetClut(0xB0, 0x1F0);
                    M2C_FIELD(temp_v0, s8 *, 0x46) = 0;
                    M2C_FIELD(temp_v0, s8 *, 0x47) = 0;
                }
                if (M2C_FIELD(D_80119710, s32 *, 4) >= 0x10) {
                    goto block_27;
                }
                /* Duplicate return node #32. Try simplifying control flow for better match */
                return 0;
            default:
                return 0;
            }
        } else {
            if (M2C_FIELD(D_8008ED68, u16 *, 0xEC) != 4) {
                if ((s32) M2C_FIELD(D_8008ED68, u16 *, 0xEC) >= 4) {
                    if (M2C_FIELD(D_8008ED68, u16 *, 0xEC) != 0x63) {
                        return 0;
                    }
                    goto block_30;
                }
                if ((M2C_FIELD(D_80119710, s32 *, 0) % 12) == 1) {
                    temp_v0_2 = func_80015B3C(&func_800E7E5C, &func_800F7DE4, 1);
                    func_800FE188(arg2, temp_v0_2 + 0x28);
                    temp_t0_2 = M2C_FIELD(temp_v0_2, u16 *, 0x2A);
                    M2C_FIELD(temp_v0_2, s8 *, 0x30) = 0xFF;
                    M2C_FIELD(temp_v0_2, s8 *, 0x31) = 0xFF;
                    M2C_FIELD(temp_v0_2, s8 *, 0x32) = 0xFF;
                    M2C_FIELD(temp_v0_2, s8 *, 0x34) = 0xFF;
                    M2C_FIELD(temp_v0_2, s8 *, 0x35) = 0xFF;
                    M2C_FIELD(temp_v0_2, s8 *, 0x36) = 0xFF;
                    M2C_FIELD(temp_v0_2, s8 *, 0x38) = 8;
                    M2C_FIELD(temp_v0_2, s16 *, 0x3A) = 0x1E;
                    M2C_FIELD(temp_v0_2, s16 *, 0x3C) = 0x32;
                    M2C_FIELD(temp_v0_2, s8 *, 0x40) = 1;
                    M2C_FIELD(temp_v0_2, u16 *, 0x24) = temp_t0_2;
                    M2C_FIELD(temp_v0_2, u16 *, 0x2A) = (u16) (temp_t0_2 - 0x12C);
                    M2C_FIELD(temp_v0_2, s16 *, 0x42) = GetTPage(0, 1, 0x280, 0x100);
                    M2C_FIELD(temp_v0_2, s16 *, 0x44) = GetClut(0xB0, 0x1F0);
                    M2C_FIELD(temp_v0_2, s8 *, 0x46) = 0;
                    M2C_FIELD(temp_v0_2, s8 *, 0x47) = 0;
                }
                if (M2C_FIELD(D_80119710, s32 *, 4) == 0x14) {
                    M2C_FIELD(arg2, s8 *, 0x17) = 0x88;
                    M2C_FIELD(arg2, s8 *, 0x23) = 1;
                }
                if (M2C_FIELD(D_80119710, s32 *, 4) == 0x1E) {
                    func_80034AB0(0x801F);
                }
                if (M2C_FIELD(D_80119710, s32 *, 4) == ((M2C_FIELD(D_80119710, s32 *, 4) / 10) * 0xA)) {
                    temp_v0_3 = func_80015B3C(D_80018600, &func_800F9154, 1);
                    M2C_FIELD(temp_v0_3, s16 *, 0x2A) = 0;
                    temp_a1 = M2C_FIELD(M2C_FIELD(arg2, void **, 0x70), u16 *, 0x46) + ((s32) M2C_FIELD(D_8008ED68, s32 *, 0x108) / 2);
                    M2C_FIELD(temp_v0_3, s16 *, 0x2C) = temp_a1;
                    M2C_FIELD(temp_v0_3, s16 *, 0x28) = temp_a1;
                    M2C_FIELD(temp_v0_3, s16 *, 0x2E) = (s16) ((M2C_FIELD(M2C_FIELD(arg2, void **, 0x70), u16 *, 0x4A) + ((s32) (M2C_FIELD(D_8008ED68, u32 *, 0x10C) + ((u32) M2C_FIELD(D_8008ED68, u32 *, 0x10C) >> 0x1F)) >> 1)) - 0x28);
                    M2C_FIELD(temp_v0_3, s16 *, 0x32) = 0xA;
                    M2C_FIELD(temp_v0_3, s16 *, 0x34) = 0x14;
                    M2C_FIELD(temp_v0_3, s8 *, 0x38) = 0x7F;
                    M2C_FIELD(temp_v0_3, s8 *, 0x39) = 0x7F;
                    M2C_FIELD(temp_v0_3, s8 *, 0x3C) = 0x10;
                    M2C_FIELD(temp_v0_3, s8 *, 0x3D) = 0x18;
                    M2C_FIELD(temp_v0_3, s16 *, 0x36) = 0x3C;
                    M2C_FIELD(temp_v0_3, s8 *, 0x3A) = 0xFF;
                    M2C_FIELD(temp_v0_3, s8 *, 0x3E) = 8;
                    M2C_FIELD(temp_v0_3, u16 *, 0x30) = (u16) M2C_FIELD(M2C_FIELD(arg2, void **, 0x70), u16 *, 0x4E);
                    if (M2C_FIELD(D_80119710, s32 *, 4) >= 0x28) {
                        M2C_FIELD(D_8008ED68, s16 *, 0x9EC) = 1;
                        temp_v0_4 = func_80015B3C(D_80018600, &func_800F52C4, 1);
                        M2C_FIELD(temp_v0_4, s8 *, 0x28) = 0xC9;
                        M2C_FIELD(temp_v0_4, s8 *, 0x29) = 0xDD;
                        M2C_FIELD(temp_v0_4, s8 *, 0x2A) = 0xFF;
                        M2C_FIELD(temp_v0_4, s8 *, 0x2C) = 0;
                        M2C_FIELD(temp_v0_4, s8 *, 0x2D) = 0;
                        M2C_FIELD(temp_v0_4, s8 *, 0x2E) = 0;
                        M2C_FIELD(temp_v0_4, s8 *, 0x30) = 1;
                        M2C_FIELD(temp_v0_4, s16 *, 0x32) = 0x3C;
block_27:
                        M2C_FIELD(D_80119710, s32 *, 4) = 0;
                        goto block_28;
                    }
                }
                /* Duplicate return node #32. Try simplifying control flow for better match */
                return 0;
            }
            if ((*D_80119714) >= 0x3C) {
block_30:
                (*D_8008EE6A) = 0;
                M2C_FIELD(arg1, s8 *, 0x60D) = 2;
                return 1;
            }
            /* Duplicate return node #32. Try simplifying control flow for better match */
            return 0;
        }
    } else {
        if ((M2C_FIELD(D_80119710, s32 *, 0) % 12) == 1) {
            temp_v0_5 = func_80015B3C(&func_800E7E5C, &func_800F7DE4, 1);
            func_800FE188(arg2, temp_v0_5 + 0x28);
            temp_t0_3 = M2C_FIELD(temp_v0_5, u16 *, 0x2A);
            M2C_FIELD(temp_v0_5, s8 *, 0x30) = 0xFF;
            M2C_FIELD(temp_v0_5, s8 *, 0x31) = 0xFF;
            M2C_FIELD(temp_v0_5, s8 *, 0x32) = 0xFF;
            M2C_FIELD(temp_v0_5, s8 *, 0x34) = 0xFF;
            M2C_FIELD(temp_v0_5, s8 *, 0x35) = 0xFF;
            M2C_FIELD(temp_v0_5, s8 *, 0x36) = 0xFF;
            M2C_FIELD(temp_v0_5, s8 *, 0x38) = 8;
            M2C_FIELD(temp_v0_5, s16 *, 0x3A) = 0x1E;
            M2C_FIELD(temp_v0_5, s16 *, 0x3C) = 0x32;
            M2C_FIELD(temp_v0_5, s8 *, 0x40) = 1;
            M2C_FIELD(temp_v0_5, u16 *, 0x24) = temp_t0_3;
            M2C_FIELD(temp_v0_5, u16 *, 0x2A) = (u16) (temp_t0_3 - 0x12C);
            M2C_FIELD(temp_v0_5, s16 *, 0x42) = GetTPage(0, 1, 0x280, 0x100);
            M2C_FIELD(temp_v0_5, s16 *, 0x44) = GetClut(0xB0, 0x1F0);
            M2C_FIELD(temp_v0_5, s8 *, 0x46) = 0;
            M2C_FIELD(temp_v0_5, s8 *, 0x47) = 0;
        }
        if (M2C_FIELD(D_80119710, s32 *, 0) >= 0x1E) {
            temp_v0_6 = func_80015B3C(D_80018600, &func_800F52C4, 1);
            M2C_FIELD(temp_v0_6, s8 *, 0x2C) = 0x64;
            M2C_FIELD(temp_v0_6, s8 *, 0x2D) = 0x28;
            M2C_FIELD(temp_v0_6, s8 *, 0x2E) = 0x4B;
            M2C_FIELD(temp_v0_6, s8 *, 0x28) = 0;
            M2C_FIELD(temp_v0_6, s8 *, 0x29) = 0;
            M2C_FIELD(temp_v0_6, s8 *, 0x2A) = 0;
            M2C_FIELD(temp_v0_6, s8 *, 0x30) = 1;
            M2C_FIELD(temp_v0_6, s16 *, 0x32) = 0x2C;
            func_80034AB0(2);
            M2C_FIELD(D_80119710, s32 *, 4) = 0;
block_28:
            M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
        }
        return 0;
    }
}
