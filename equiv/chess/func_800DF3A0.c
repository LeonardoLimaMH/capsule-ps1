#include "common.h"

s32 func_800DF3A0(void *arg2) {
    extern u8 D_8008ED68[];
    extern s8 D_8008EE6A[];
    extern u8 D_80119710[];
    extern s32 D_80119714[];
    extern u8 D_8011974C[];
    extern int func_800DFD98();
    extern int func_800F9154();
    s32 sp10;
    s32 sp14;
    s32 var_v0;
    u32 temp_v0;
    void *temp_s1;

    if (M2C_FIELD(D_8008ED68, u16 *, 0xEC) != 2) {
        if ((s32) M2C_FIELD(D_8008ED68, u16 *, 0xEC) < 3) {
            switch (M2C_FIELD(D_8008ED68, u16 *, 0xEC)) { /* switch 1; irregular */
            case 0:                                 /* switch 1 */
                M2C_FIELD(D_8008ED68, u16 *, 0xEC) = 1U;
                (*D_80119714) = 0;
                goto block_27;
            case 1:                                 /* switch 1 */
                M2C_FIELD(D_8008ED68, s8 *, 0x102) = 2;
                M2C_FIELD(arg2, s8 *, 0x17) = 0x88;
                M2C_FIELD(arg2, s8 *, 0x23) = (s8) M2C_FIELD(D_8008ED68, u16 *, 0xEC);
                (*D_80119714) = 0;
                M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
                goto block_27;
            default:                                /* switch 1 */
                return 0;
            }
        } else {
            if (M2C_FIELD(D_8008ED68, u16 *, 0xEC) != 4) {
                if ((s32) M2C_FIELD(D_8008ED68, u16 *, 0xEC) >= 4) {
                    if (M2C_FIELD(D_8008ED68, u16 *, 0xEC) != 0x63) {
                        return 0;
                    }
                    goto block_26;
                }
                if (M2C_FIELD(D_80119710, s32 *, 4) >= 0x3C) {
                    M2C_FIELD(D_80119710, s8 *, 0x3C) = 2;
                    M2C_FIELD(D_80119710, s32 *, 4) = 0;
                    M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
                    goto block_25;
                }
                /* Duplicate return node #28. Try simplifying control flow for better match */
                return 0;
            }
block_25:
            if ((*D_8011974C) == 0) {
block_26:
                (*D_8008EE6A) = 0;
                return 1;
            }
            goto block_27;
        }
    } else {
        temp_s1 = func_80015B3C(&func_800DFD98, &func_800F9154, 1);
        temp_v0 = func_800DD230(arg2);
        switch (temp_v0) {
        case 0:
            sp10 = -0x13;
            var_v0 = -0x2D;
block_21:
            sp14 = var_v0;
            break;
        case 1:
            sp10 = -0xE;
            var_v0 = -0x2C;
            goto block_21;
        case 2:
            sp10 = -0xC;
            var_v0 = -0x2C;
            goto block_21;
        case 3:
            sp10 = 8;
            var_v0 = -0x30;
            goto block_21;
        case 4:
            sp10 = 0x10;
            var_v0 = -0x2E;
            goto block_21;
        case 5:
            sp10 = 0x12;
            var_v0 = -0x2C;
            goto block_21;
        case 6:
            sp10 = 3;
            var_v0 = -0x2A;
            goto block_21;
        case 7:
            sp10 = -0xA;
            var_v0 = -0x28;
            goto block_21;
        }
        sp10 += M2C_FIELD(M2C_FIELD(arg2, void **, 0x70), s16 *, 0x46) + ((s32) (M2C_FIELD(D_8008ED68, u32 *, 0x108) + ((u32) M2C_FIELD(D_8008ED68, u32 *, 0x108) >> 0x1F)) >> 1);
        sp14 += M2C_FIELD(M2C_FIELD(arg2, void **, 0x70), s16 *, 0x4A) + ((s32) (M2C_FIELD(D_8008ED68, u32 *, 0x10C) + ((u32) M2C_FIELD(D_8008ED68, u32 *, 0x10C) >> 0x1F)) >> 1);
        M2C_FIELD(temp_s1, s16 *, 0x2A) = -0x1E;
        M2C_FIELD(temp_s1, u16 *, 0x28) = (u16) sp10;
        M2C_FIELD(temp_s1, u16 *, 0x2C) = (u16) sp10;
        M2C_FIELD(temp_s1, u16 *, 0x2E) = (u16) sp14;
        M2C_FIELD(temp_s1, s16 *, 0x32) = 0xA;
        M2C_FIELD(temp_s1, s16 *, 0x34) = 0x14;
        M2C_FIELD(temp_s1, s16 *, 0x36) = 0x3C;
        M2C_FIELD(temp_s1, s8 *, 0x38) = 0x7F;
        M2C_FIELD(temp_s1, s8 *, 0x39) = 0x7F;
        M2C_FIELD(temp_s1, s8 *, 0x3A) = 0xFF;
        M2C_FIELD(temp_s1, s8 *, 0x3C) = 0x10;
        M2C_FIELD(temp_s1, s8 *, 0x3D) = 0x18;
        M2C_FIELD(temp_s1, s8 *, 0x3E) = 8;
        M2C_FIELD(temp_s1, s16 *, 0x30) = (s16) (M2C_FIELD(M2C_FIELD(arg2, void **, 0x70), u16 *, 0x4E) - 0x14);
        func_80034AB0(0x8009, &sp14);
        M2C_FIELD(D_8008ED68, s16 *, 0x9EC) = 0;
        (*D_80119714) = 0;
        M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
block_27:
        return 0;
    }
}
