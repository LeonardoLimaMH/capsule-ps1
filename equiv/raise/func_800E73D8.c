#include "common.h"

s16 func_800E73D8(s32 arg0, s32 arg1, M2C_UNK arg2, u32 arg3) {
    extern u8 D_80063940[];
    extern u8 D_8006AFCC[];
    extern u32 D_8008ED84[];
    extern u8 D_80091618[];
    extern u8 D_800F20F0[];
    u8 *var_a0_2;
    u8 *var_a0_3;
    u8 *var_a0_4;
    u8 *var_a0_6;
    M2C_UNK var_a2;
    s16 *temp_v0;
    s16 temp_a0;
    s16 var_s2;
    s32 temp_s0;
    s32 var_a0;
    s32 var_a0_5;
    s32 var_a1;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_5;
    u16 temp_s3;
    u16 temp_v1;
    u16 var_v0_2;
    u32 var_a3;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *var_v1_4;

    var_a1 = arg1;
    var_a2 = arg2;
    var_a3 = arg3;
    temp_v0 = ((arg0 & 0xFFFF) * 0x1A8) + D_80091618;
    temp_a0 = *temp_v0;
    temp_s3 = (u16) *temp_v0;
    var_s2 = -1;
    switch (temp_a0) {
    case 0x2:
    case 0x1D:
    case 0x2A:
    case 0x3D:
    case 0x46:
        var_a0 = arg0 & 0xFFFF;
        var_v0 = -1 << 0x10;
        if (M2C_FIELD(((var_a0 * 0x1A8) + D_80091618), s16 *, 0xD0) >= 3) {
block_46:
            var_s2 = func_800E7934(var_a0, var_a1, var_a2, var_a3);
        default:
block_49:
            var_v0 = var_s2 << 0x10;
        }
        break;
    case 0xA:
    case 0x19:
    case 0x26:
    case 0x33:
        temp_a0_2 = ((arg0 & 0xFFFF) * 0x1A8) + D_80091618;
        var_v0 = -1 << 0x10;
        if (M2C_FIELD(temp_a0_2, s16 *, 0xD0) >= 2) {
            temp_s0 = (s16) (M2C_FIELD(temp_a0_2, u16 *, 0xEE) / 3) + 0x18;
            var_v0 = -1 << 0x10;
            if (func_800202A4(0x64, M2C_FIELD(temp_a0_2, u16 *, 0xEE) / 3) < temp_s0) {
                var_s2 = 2;
                goto block_49;
            }
        }
        break;
    case 0x0:
        var_a0 = arg0 & 0xFFFF;
        var_v0 = -1 << 0x10;
        if (M2C_FIELD(((var_a0 * 0x1A8) + D_80091618), s16 *, 0xD0) >= 2) {
            goto block_46;
        }
        break;
    case 0x4:
        var_a1 = 0;
        var_v1 = 0;
        var_a2 = 7;
        var_a0_2 = D_8006AFCC;
        do {
            if (M2C_FIELD(var_a0_2, s32 *, 8) == 7) {
                var_a1 = 1;
            }
            var_v1 += 1;
            var_a0_2 += 4;
        } while (var_v1 < 5);
block_14:
        var_v0 = -1 << 0x10;
        if (var_a1 == 1) {
            var_a0 = arg0 & 0xFFFF;
            goto block_46;
        }
        break;
    case 0xD:
        var_v0 = -1 << 0x10;
        if (M2C_FIELD((((arg0 & 0xFFFF) * 0x1A8) + D_80091618), s16 *, 0xD0) >= 3) {
            var_a1 = 0;
            var_v1_2 = 0;
            var_a2 = 0xD;
            var_a0_3 = D_8006AFCC;
            do {
                if (M2C_FIELD(var_a0_3, s32 *, 8) == 0xD) {
                    var_a1 = 1;
                }
                var_v1_2 += 1;
                var_a0_3 += 4;
            } while (var_v1_2 < 5);
            goto block_14;
        }
        break;
    case 0x10:
        temp_a0_3 = ((arg0 & 0xFFFF) * 0x1A8) + D_80091618;
        var_v0 = -1 << 0x10;
        if (M2C_FIELD(temp_a0_3, u16 *, 0x10) == 6) {
            if ((M2C_FIELD(temp_a0_3, u16 *, 0x14) != 9) && (M2C_FIELD(temp_a0_3, u16 *, 0x16) != 9)) {
                var_v0 = -1 << 0x10;
                if (M2C_FIELD(temp_a0_3, u16 *, 0x18) == 9) {
                    var_a0 = arg0 & 0xFFFF;
                    goto block_46;
                }
            } else {
            case 0xF:
            case 0x2D:
            case 0x38:
            case 0x44:
            case 0x45:
            case 0x55:
            case 0x5C:
block_45:
                var_a0 = arg0 & 0xFFFF;
                goto block_46;
            }
        }
        break;
    case 0x1E:
        var_a1 = 0;
        var_v1_3 = 0;
        var_a2 = 5;
        var_a0_4 = D_8006AFCC;
        do {
            if (M2C_FIELD(var_a0_4, s32 *, 8) == 5) {
                var_a1 = 1;
            }
            var_v1_3 += 1;
            var_a0_4 += 4;
        } while (var_v1_3 < 5);
        goto block_14;
    case 0x29:
        var_v1_4 = ((arg0 & 0xFFFF) * 0x1A8) + D_80091618;
        var_v0_2 = M2C_FIELD(var_v1_4, u16 *, 0x14);
        var_a0_5 = 0xD;
block_42:
        if ((var_v0_2 == var_a0_5) || (M2C_FIELD(var_v1_4, u16 *, 0x16) == var_a0_5) || (var_v0 = -1 << 0x10, (M2C_FIELD(var_v1_4, u16 *, 0x18) == var_a0_5))) {
            goto block_45;
        }
        break;
    case 0x3A:
        var_a3 = (*D_8008ED84) / 6750;
        var_v0 = -1 << 0x10;
        if ((u32) ((*D_8008ED84) / 216000) >= 0xFU) {
            var_a0 = arg0 & 0xFFFF;
            goto block_46;
        }
        break;
    case 0x4D:
        var_v1_4 = ((arg0 & 0xFFFF) * 0x1A8) + D_80091618;
        var_v0_2 = M2C_FIELD(var_v1_4, u16 *, 0x14);
        var_a0_5 = 0xE;
        goto block_42;
    case 0x52:
        var_a1 = 0;
        var_v1_5 = 0;
        var_a0_6 = D_8006AFCC;
        do {
            if (M2C_FIELD(var_a0_6, s32 *, 8) == 0) {
                var_a1 = 1;
            }
            var_v1_5 += 1;
            var_a0_6 += 4;
        } while (var_v1_5 < 5);
        goto block_14;
    case 0x58:
        var_v1_4 = ((arg0 & 0xFFFF) * 0x1A8) + D_80091618;
        var_v0_2 = M2C_FIELD(var_v1_4, u16 *, 0x14);
        var_a0_5 = 0xF;
        goto block_42;
    case 0x5B:
        var_v0 = -1 << 0x10;
        if ((func_800E7934(arg0 & 0xFFFF) << 0x10) != 0) {
            var_s2 = 1;
            goto block_49;
        }
        break;
    }
    if (var_v0 > 0) {
        temp_a0_4 = ((arg0 & 0xFFFF) * 0x1A8) + D_80091618;
        M2C_FIELD(temp_a0_4, u16 *, 4) = (u16) *(((s32) (temp_s3 << 0x10) >> 0xF) + D_800F20F0);
        temp_v1 = M2C_FIELD(temp_a0_4, u16 *, 4);
        M2C_FIELD(temp_a0_4, s16 *, 0x92) = (s16) (((u32) M2C_FIELD(((temp_v1 * 0x3C) + D_80063940), u32 *, 8) >> 8) & 0xF);
        M2C_FIELD(temp_a0_4, s16 *, 0xA0) = (s16) (((u32) M2C_FIELD(((temp_v1 * 0x3C) + D_80063940), u32 *, 8) >> 0xC) & 3);
    } else {
        var_s2 = func_800E6E68(arg0 & 0xFFFF, D_80091618);
    }
    return var_s2;
}
