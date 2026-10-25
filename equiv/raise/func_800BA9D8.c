#include "common.h"

void func_800BA9D8(s32 arg0, void *arg1) {
    extern u8 D_8008ED68[];
    extern u16 D_8008EE4C[];
    extern u8 D_8008F702[];
    extern u8 D_80091618[];
    extern s32 D_800EEB64[];
    extern s32 D_800EEB6C[];
    extern u32 D_800EEBA8[];
    extern s16 D_800F1ED4[];
    extern s16 D_80100DBA[];
    extern s16 D_80100DBC[];
    extern u8 D_80100F38[];
    s16 temp_v0;
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_s0;
    s32 var_v0;
    void *temp_s0_2;
    void *temp_s2;

    temp_s0 = (*D_800EEB6C);
    if (((temp_s0 != 1) || (func_800D0CFC() != temp_s0) || (((s32) (*D_8008EE4C) < 2) && ((s32) (*D_8008EE4C) >= 0))) && (temp_a0 = func_800B1260(arg0) & 0xFFFF, (temp_a0 != 0xFFFF)) && ((temp_s2 = (temp_a0 * 0x1A8) + D_80091618, var_v0 = temp_a0 * 0x10, (M2C_FIELD(temp_s2, s16 *, 0x1A0) != 0)) || (var_v0 = temp_a0 * 0x10, ((M2C_FIELD(arg1, s32 *, 0x38) & 1) != 1)))) {
        temp_s0_2 = ((((((var_v0 - temp_a0) * 4) + temp_a0) * 8) - temp_a0) * 4) + D_80100F38;
        if ((u32) (M2C_FIELD(D_8008ED68, u16 *, 0xDC) - 0x34) < 9U) {
            if (arg0 == (*D_800F1ED4)) {
                M2C_FIELD(arg1, s16 *, 0x4E) = func_800E3A04(arg0, temp_s0_2 + 0x1CC, &arg1);
                (*D_80100DBA) = M2C_FIELD(M2C_FIELD(temp_s2, void **, 0x178), u16 *, 0x46) + ((s32) M2C_FIELD(D_8008ED68, s32 *, 0x108) / 2);
                (*D_80100DBC) = M2C_FIELD(M2C_FIELD(temp_s2, void **, 0x178), u16 *, 0x4A) + ((s32) (M2C_FIELD(D_8008ED68, u32 *, 0x10C) + ((u32) M2C_FIELD(D_8008ED68, u32 *, 0x10C) >> 0x1F)) >> 1);
                return;
            }
            goto block_11;
        }
block_11:
        switch ((*D_800EEBA8)) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 6:
        case 7:
        case 9:
        case 10:
        case 11:
        case 12:
        case 14:
        case 21:
        case 34:
        case 35:
block_14:
            if ((*D_8008F702) != 1) {
                temp_v0 = M2C_FIELD(temp_s0_2, s16 *, 0x2C8);
                switch (temp_v0) {                  /* switch 1; irregular */
                case 1:                             /* switch 1 */
                    if (M2C_FIELD(temp_s0_2, s16 *, 0x2CA) == 0) {
                        func_800C1010(arg1, arg0);
                    }
                    func_800C1280(arg1, arg0);
                    return;
                case 0:                             /* switch 1 */
                    if (M2C_FIELD(temp_s0_2, s16 *, 0x2CA) == 0) {
                        func_800C1010(arg1, arg0);
                        return;
                    }
                    break;
                }
            }
            break;
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 33:
        case 36:
        case 37:
        case 38:
        case 39:
            M2C_FIELD(arg1, s16 *, 0x4E) = func_800E3A04(arg0, temp_s0_2 + 0x1CC, &arg1);
            temp_a2 = ((u32) M2C_FIELD(temp_s0_2, u32 *, 0x798) >> 0x1A) & 0x1F;
            if (((u32) (temp_a2 - 0xA) < 2U) && (M2C_FIELD((temp_s0_2 + temp_a2), u8 *, 0x3A9) == 1)) {
                M2C_FIELD(M2C_FIELD((temp_s0_2 + (M2C_FIELD(temp_s0_2, u8 *, 0x79B) & 0x7C)), void **, 0x258), s16 *, 0x4E) = func_800E3D18(arg0, temp_s0_2 + 0x1EC, temp_s0_2 + ((temp_a2 * 4) + 0x258));
                return;
            }
            break;
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
        case 31:
        case 32:
            M2C_FIELD(arg1, s16 *, 0x4E) = func_800E3A04(arg0, temp_s0_2 + 0x1CC, &arg1);
            temp_a2_2 = ((u32) M2C_FIELD(temp_s0_2, u32 *, 0x798) >> 0x1A) & 0x1F;
            if (((u32) (temp_a2_2 - 0xA) < 2U) && (M2C_FIELD((temp_s0_2 + temp_a2_2), u8 *, 0x3A9) == 1)) {
                M2C_FIELD(M2C_FIELD((temp_s0_2 + (M2C_FIELD(temp_s0_2, u8 *, 0x79B) & 0x7C)), void **, 0x258), s16 *, 0x4E) = func_800E3D18(arg0, temp_s0_2 + 0x1EC, temp_s0_2 + ((temp_a2_2 * 4) + 0x258));
                return;
            }
            break;
        case 40:
        case 41:
        case 42:
        case 43:
        case 44:
            if (((*D_800EEB6C) == 1) || ((*D_800EEB64) == 1)) {
            default:
                M2C_FIELD(arg1, s16 *, 0x4E) = func_800E3A04(arg0, temp_s0_2 + 0x1CC, &arg1);
            } else {
                goto block_14;
            }
            break;
        }
    }
}
