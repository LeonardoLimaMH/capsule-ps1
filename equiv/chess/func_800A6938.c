#include "common.h"

void func_800A6938(void *arg0) {
    extern M2C_UNK D_80085428[];
    extern M2C_UNK D_8008ED68[];
    extern u16 D_8008EE4C[];
    M2C_UNK sp18;
    u16 sp1A;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v0;
    s32 var_a1;
    s32 var_v0;
    u16 temp_v0_3;
    u16 temp_v0_4;
    u16 temp_v1;
    u32 temp_v1_2;
    u32 var_v0_2;
    u8 temp_v0_2;
    void *temp_a2;
    void *temp_a3;

    temp_v1 = M2C_FIELD(arg0, u16 *, 0x7A);
    temp_s2 = M2C_FIELD(arg0, s32 *, 0x7C);
    temp_s1 = M2C_FIELD(arg0, s32 *, 0x80);
    switch (temp_v1) {
    case 0:
        if (M2C_FIELD(D_80085428, u8 *, 1) != 0) {
            if (temp_s1 != 5) {
                func_800185F8(arg0);
                return;
            }
            M2C_FIELD(arg0, u16 *, 0x7A) = 1U;
            goto block_42;
        }
        if (M2C_FIELD((D_80085428 + ((temp_s1 * 0x7C) + (temp_s2 * 0x2E8))), u8 *, 0x5FF) != 0) {
            switch ((*D_8008EE4C)) {                   /* switch 1; irregular */
            case 14:                                /* switch 1 */
                if (temp_s1 != 5) {
                    M2C_FIELD(arg0, u16 *, 0x7A) = 4U;
                    M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
                } else {
                    M2C_FIELD(arg0, u16 *, 0x7A) = 1U;
                }
            default:                                /* switch 1 */
block_17:
                var_v0 = M2C_FIELD(arg0, s32 *, 0x38) & ~0x40;
                break;
            case 5:                                 /* switch 1 */
            case 2:                                 /* switch 1 */
            case 3:                                 /* switch 1 */
                if ((temp_s2 == M2C_FIELD(D_80085428, u8 *, 0xBCA)) && (temp_s1 != 5)) {
                    var_v0 = M2C_FIELD(arg0, s32 *, 0x38) | 0x40;
                } else {
                    goto block_17;
                }
                break;
            }
            M2C_FIELD(arg0, s32 *, 0x38) = var_v0;
            func_800C9648(D_80085428, arg0, temp_s2, temp_s1, 0, (M2C_FIELD(arg0, s32 *, 0x34) & 0x7F) - 1);
        default:
block_39:
            if (((u8) M2C_FIELD(D_80085428, u8 *, 0xBEA) >= 5U) || (M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1), (func_800CAECC(D_80085428, temp_s2, temp_s1) == 0))) {
                goto block_41;
            }
        } else {
block_41:
block_42:
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
        }
        return;
    case 1:
        temp_v0 = func_800A8E34(D_80085428 + 0x5D0, temp_s2, temp_s1);
        if (temp_v0 == 2) {
            M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
            M2C_FIELD(arg0, u16 *, 0x7A) = (u16) (M2C_FIELD(arg0, u16 *, 0x7A) + 1);
            return;
        }
        if (temp_v0 != 0) {
            M2C_FIELD(arg0, u16 *, 0x7A) = 3U;
            return;
        }
        temp_v0_2 = M2C_FIELD((D_80085428 + temp_s2), u8 *, 0xBDA);
        var_a1 = temp_v0_2 + 0xE;
        if (temp_v0_2 == 0) {
            var_a1 = 0xD;
        }
        M2C_FIELD(arg0, s32 *, 0x18) = func_80019F30(0x60012, var_a1);
        temp_a3 = D_80085428 + ((temp_s1 * 0x7C) + (temp_s2 * 0x2E8));
        M2C_FIELD(temp_a3, u8 *, 0x60A) = (u8) M2C_FIELD(temp_a3, u8 *, 0x5FF);
        if (func_800A8D08(D_80085428 + 0x5D0, temp_s2, temp_s1, temp_a3) == 0) {
            func_800C9648(D_80085428, arg0, temp_s2, temp_s1, 0, (M2C_FIELD(arg0, s32 *, 0x34) & 0x7F) - 1);
            func_800A74D8(D_80085428, arg0, temp_s2, temp_s1);
            func_800A77E8(D_80085428, arg0, temp_s2, temp_s1);
            func_800A7A60(D_80085428, arg0, temp_s2, temp_s1);
            goto block_39;
        }
        goto block_41;
    case 2:
        if (func_800C5BCC(arg0) != 0) {
            M2C_FIELD(arg0, u16 *, 0x7A) = 3U;
            goto block_42;
        }
        break;
    case 3:
        if (func_800A8E34(D_80085428 + 0x5D0, temp_s2, temp_s1) == 0) {
            M2C_FIELD(arg0, u16 *, 0x7A) = 1U;
        }
        goto block_41;
    case 4:
        temp_v1_2 = M2C_FIELD(arg0, u32 *, 0x3C);
        if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
            var_v0_2 = temp_v1_2 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
        } else {
            var_v0_2 = temp_v1_2 + 1;
        }
        M2C_FIELD(arg0, u32 *, 0x3C) = var_v0_2;
        temp_a2 = D_80085428 + ((temp_s1 * 0x7C) + (temp_s2 * 0x2E8));
        func_800A46B8(D_80085428, M2C_FIELD(temp_a2, u8 *, 0x5FD), M2C_FIELD(temp_a2, u8 *, 0x5FE), &sp18);
        sp1A -= M2C_FIELD(arg0, u32 *, 0x3C) * 0x1E;
        M2C_FIELD(arg0, u16 *, 0x4E) = func_800CD950(&sp18, arg0);
        M2C_FIELD(arg0, u16 *, 0x46) = (u16) (M2C_FIELD(arg0, u16 *, 0x46) - ((s32) (M2C_FIELD(D_8008ED68, u32 *, 0x108) + ((u32) M2C_FIELD(D_8008ED68, u32 *, 0x108) >> 0x1F)) >> 1));
        M2C_FIELD(arg0, u16 *, 0x4A) = (u16) (M2C_FIELD(arg0, u16 *, 0x4A) - ((s32) M2C_FIELD(D_8008ED68, s32 *, 0x10C) / 2));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) < 0xAU) {
            temp_v0_3 = M2C_FIELD(arg0, u16 *, 0x4E) - 0xA;
            M2C_FIELD(arg0, u16 *, 0x4E) = temp_v0_3;
            temp_v0_4 = temp_v0_3 - (((u8) M2C_FIELD(arg0, s32 *, 0x34) & 0x7F) - 1);
            M2C_FIELD(arg0, u16 *, 0x4E) = temp_v0_4;
            if ((s16) temp_v0_4 < 6) {
                M2C_FIELD(arg0, u16 *, 0x4E) = 6U;
            }
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) >= 0xA0U) {
            M2C_FIELD(D_80085428, s8 *, 0xD77) = 1;
            func_800185F8(arg0);
        }
        goto block_39;
    }
}
