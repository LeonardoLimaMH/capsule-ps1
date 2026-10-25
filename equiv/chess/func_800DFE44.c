#include "common.h"

s32 func_800DFE44(void *arg2) {
    extern u8 D_80018600[];
    extern u8 D_8008ED68[];
    extern s8 D_8008EE6A[];
    extern u8 D_80119710[];
    extern s32 D_80119714[];
    extern int func_800E1180();
    extern int func_800E1210();
    extern int func_800F52C4();
    extern int func_800F5AF4();
    extern int func_800F7DE4();
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;

    if ((s32) M2C_FIELD(D_8008ED68, u16 *, 0xEC) < 5) {
        if ((s32) M2C_FIELD(D_8008ED68, u16 *, 0xEC) < 2) {
            switch (M2C_FIELD(D_8008ED68, u16 *, 0xEC)) { /* irregular */
            case 0:
                M2C_FIELD(D_8008ED68, u16 *, 0xEC) = 1U;
                (*D_80119714) = 0;
                goto block_23;
            case 1:
                M2C_FIELD(D_8008ED68, s8 *, 0x102) = 2;
                M2C_FIELD(arg2, s8 *, 0x17) = 0x88;
                M2C_FIELD(arg2, s8 *, 0x23) = (s8) M2C_FIELD(D_8008ED68, u16 *, 0xEC);
                M2C_FIELD(D_8008ED68, u16 *, 0x9EC) = 4U;
                goto block_20;
            default:
                return 0;
            }
        } else {
            if (M2C_FIELD(M2C_FIELD(arg2, void **, 0x70), u32 *, 0x20) == M2C_FIELD(D_8008ED68, u16 *, 0x9EC)) {
                func_80028200(M2C_FIELD(arg2, u8 *, 0), 2);
                M2C_FIELD(D_8008ED68, u16 *, 0x9EC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0x9EC) + 1);
            }
            if ((M2C_FIELD(D_8008ED68, u16 *, 0xEC) == 4) && ((*D_80119714) == 2)) {
                func_80034AB0(0x800C);
            }
            if (M2C_FIELD(D_80119710, s32 *, 4) >= 0x18) {
                temp_v0 = func_80015B3C(&func_800E1180, &func_800F7DE4, 1);
                func_800FE188(arg2, temp_v0 + 0x28);
                M2C_FIELD(temp_v0, s8 *, 0x38) = 0x10;
                M2C_FIELD(temp_v0, s8 *, 0x30) = 0x7F;
                M2C_FIELD(temp_v0, s8 *, 0x31) = 0x7F;
                M2C_FIELD(temp_v0, s8 *, 0x32) = 0x7F;
                M2C_FIELD(temp_v0, s8 *, 0x34) = 0;
                M2C_FIELD(temp_v0, s8 *, 0x35) = 0;
                M2C_FIELD(temp_v0, s8 *, 0x36) = 0;
                M2C_FIELD(temp_v0, s16 *, 0x3A) = 0x30;
                M2C_FIELD(temp_v0, s16 *, 0x3C) = 0;
                M2C_FIELD(temp_v0, u16 *, 0x2A) = (u16) (M2C_FIELD(temp_v0, u16 *, 0x2A) - 0x20);
                M2C_FIELD(temp_v0, s16 *, 0x42) = GetTPage(0, 1, 0x280, 0x100);
                M2C_FIELD(temp_v0, s16 *, 0x44) = GetClut(0x20, 0x1F0);
                M2C_FIELD(temp_v0, s8 *, 0x46) = 0x40;
                M2C_FIELD(temp_v0, s8 *, 0x47) = 0;
                M2C_FIELD(temp_v0, s8 *, 0x40) = 1;
                temp_v0_2 = func_80015B3C(D_80018600, &func_800F52C4, 1);
                M2C_FIELD(temp_v0_2, s8 *, 0x28) = 0xBF;
                M2C_FIELD(temp_v0_2, s8 *, 0x29) = 0x9F;
                M2C_FIELD(temp_v0_2, s16 *, 0x32) = 3;
                M2C_FIELD(temp_v0_2, s8 *, 0x2A) = 0x7F;
                M2C_FIELD(temp_v0_2, s8 *, 0x2C) = 0;
                M2C_FIELD(temp_v0_2, s8 *, 0x2D) = 0;
                M2C_FIELD(temp_v0_2, s8 *, 0x2E) = 0;
                M2C_FIELD(temp_v0_2, s8 *, 0x30) = 1;
                M2C_FIELD(D_80119710, s32 *, 4) = 0;
                M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
            }
            /* Duplicate return node #24. Try simplifying control flow for better match */
            return 0;
        }
    } else {
        if (M2C_FIELD(D_8008ED68, u16 *, 0xEC) != 6) {
            if ((s32) M2C_FIELD(D_8008ED68, u16 *, 0xEC) >= 6) {
                if (M2C_FIELD(D_8008ED68, u16 *, 0xEC) != 0x63) {
                    return 0;
                }
                goto block_22;
            }
            if ((u32) M2C_FIELD(M2C_FIELD(arg2, void **, 0x70), u32 *, 0x20) >= 0x10U) {
                temp_v0_3 = func_80015B3C(&func_800E1210, &func_800F5AF4, 1);
                func_800FE188(arg2, temp_v0_3 + 0x28);
                M2C_FIELD(temp_v0_3, s8 *, 0x30) = 0x7F;
                M2C_FIELD(temp_v0_3, s8 *, 0x31) = 0x7F;
                M2C_FIELD(temp_v0_3, s8 *, 0x32) = 0x7F;
                M2C_FIELD(temp_v0_3, s8 *, 0x36) = 8;
                M2C_FIELD(temp_v0_3, s16 *, 0x3A) = 0x400;
                M2C_FIELD(temp_v0_3, s16 *, 0x34) = 0xA;
                M2C_FIELD(temp_v0_3, s8 *, 0x37) = 0xA;
                M2C_FIELD(temp_v0_3, s16 *, 0x38) = 0;
                M2C_FIELD(temp_v0_3, s8 *, 0x43) = 1;
                M2C_FIELD(temp_v0_3, u16 *, 0x2A) = (u16) (M2C_FIELD(temp_v0_3, u16 *, 0x2A) - 0xA);
                M2C_FIELD(temp_v0_3, s16 *, 0x3E) = GetTPage(0, 3, 0x280, 0x100);
                M2C_FIELD(temp_v0_3, s16 *, 0x40) = GetClut(0, 0x1F0);
                M2C_FIELD(temp_v0_3, s8 *, 0x42) = 2;
                temp_v0_4 = func_80015B3C(D_80018600, &func_800F52C4, 1);
                M2C_FIELD(temp_v0_4, s8 *, 0x28) = 0x20;
                M2C_FIELD(temp_v0_4, s8 *, 0x2C) = 0xFF;
                M2C_FIELD(temp_v0_4, s8 *, 0x2D) = 0xBF;
                M2C_FIELD(temp_v0_4, s8 *, 0x2E) = 0xBF;
                M2C_FIELD(temp_v0_4, s8 *, 0x29) = 0;
                M2C_FIELD(temp_v0_4, s8 *, 0x2A) = 0;
                M2C_FIELD(temp_v0_4, s8 *, 0x30) = 1;
                M2C_FIELD(temp_v0_4, s16 *, 0x32) = 0x1E;
                func_800DD3D8(0x18, 0x28);
block_20:
                (*D_80119714) = 0;
                M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
            }
            /* Duplicate return node #24. Try simplifying control flow for better match */
            return 0;
        }
        if (M2C_FIELD(M2C_FIELD(arg2, void **, 0x70), s32 *, 0x1C) == 0) {
block_22:
            (*D_8008EE6A) = 0;
            return 1;
        }
block_23:
        return 0;
    }
}
