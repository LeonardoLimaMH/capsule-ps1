#include "common.h"

void func_8009FBDC(void *arg0) {
    extern s32 D_8008EDF0[];
    extern s32 D_8008EE00[];
    extern u16 D_8008EE48[];
    extern M2C_UNK D_800B3B38[];
    extern s16 D_800B3B40[];
    extern s16 D_800B3B64[];
    extern s32 D_800B3C08[];
    M2C_UNK var_a0;
    M2C_UNK var_a0_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    u8 temp_a0;

    switch ((*D_8008EE48)) {
    case 0:
        func_800220B8(arg0);
        if (M2C_FIELD(arg0, u8 *, 0x5DA) == 0) {
            var_v0 = func_8001F8B0(M2C_FIELD(arg0, u8 *, 0x5E5) + 8, 4);
            var_a0 = 3;
        } else {
            var_v0 = func_8001F8B0(M2C_FIELD(arg0, u8 *, 0x5E5) + 8, 5);
            var_a0 = 5;
        }
block_13:
        M2C_FIELD(arg0, s32 *, 0x14) = var_v0;
        func_800125AC(var_a0);
        return;
    case 1:
        temp_v0 = (*D_800B3C08) + 1;
        (*D_800B3C08) = temp_v0;
        if (temp_v0 >= 0x2D) {
            func_80034AB0(0x13);
            if (M2C_FIELD(arg0, u8 *, 0x5D9) == 0xA) {
                M2C_FIELD(arg0, s8 *, 0x5DE) = 1;
                M2C_FIELD(arg0, u8 *, 0x5DF) = 2U;
            }
            if (M2C_FIELD(arg0, u8 *, 0x5DF) == 2) {
                (*D_800B3B40) = 1;
            }
            if ((M2C_FIELD(arg0, u8 *, 0x5D0) == 0) || ((*D_800B3B64) == 1)) {
                func_800220B8(arg0);
                var_v0 = func_8001F8B0(M2C_FIELD(arg0, u8 *, 0x5E5) + 8, 2);
                var_a0 = 4;
                goto block_13;
            }
            (*D_800B3C08) = 0x3C;
            func_800125AC(6);
            return;
        }
    default:
        return;
    case 2:
        if (M2C_FIELD(arg0, u8 *, 0x5DA) == 0) {
            var_s0 = (*D_8008EE00);
            var_v0_2 = var_s0 & 0xF000;
        } else {
            var_s0 = (*D_8008EDF0);
            var_v0_2 = var_s0 & 0xF000;
        }
        var_v0_3 = var_s0 & 0x830;
        if (var_v0_2 != 0) {
            func_80034AB0(0x84);
            M2C_FIELD((*D_800B3B38), u16 *, 8) = (u16) (M2C_FIELD((*D_800B3B38), u16 *, 8) ^ 1);
            var_v0_3 = var_s0 & 0x830;
        }
        if (var_v0_3 != 0) {
            func_80034AB0(0x13);
            func_800A2B64(arg0, (s16) M2C_FIELD((*D_800B3B38), u16 *, 8));
            func_800A2CC8(0, 2);
            M2C_FIELD((*D_800B3B38), s16 *, 0) = 0;
            M2C_FIELD((*D_800B3B38), s16 *, 0xC) = 0;
            M2C_FIELD((*D_800B3B38), u16 *, 8) = 0U;
block_37:
            var_a0_2 = 0x17;
            if (M2C_FIELD(arg0, u8 *, 0x5D0) == 0) {
                var_a0_2 = 0x16;
            }
            goto block_39;
        }
        if (var_s0 & 0xC0) {
            func_80034AB0(0x5D);
            M2C_FIELD((*D_800B3B38), u16 *, 8) = 0U;
            temp_a0 = M2C_FIELD(arg0, u8 *, 0x5D0);
            if (temp_a0 == 2) {
                M2C_FIELD((*D_800B3B38), s16 *, 4) = 0;
                var_a0_2 = 0x14;
block_39:
                func_80012544(var_a0_2);
            } else {
                if (temp_a0 == 1) {
                    func_80012544(0x11);
block_33:
                    func_800125AC(2);
                    return;
                }
                func_80012544(0x16);
block_29:
                func_800125AC(1);
                return;
            }
        }
        break;
    case 3:
        if (func_800220D4(arg0, 1, 1, 1) != 0) {
            goto block_29;
        }
        break;
    case 4:
        if (func_800220D4(arg0, 1, 1, 1) != 0) {
block_36:
            func_800A2CC8(0, 2);
            M2C_FIELD((*D_800B3B38), s16 *, 0xC) = 0;
            M2C_FIELD((*D_800B3B38), u16 *, 8) = 0U;
            M2C_FIELD((*D_800B3B38), s16 *, 0) = 0;
            goto block_37;
        }
        break;
    case 5:
        if (func_800220D4(arg0, 1, 1, 1) != 0) {
            goto block_33;
        }
        break;
    case 6:
        temp_v0_2 = (*D_800B3C08) - 1;
        (*D_800B3C08) = temp_v0_2;
        if (temp_v0_2 < 0) {
            goto block_36;
        }
        break;
    }
}
