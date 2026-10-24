#include "common.h"

void func_800A6198(void) {
    extern M2C_UNK D_80063940[];
    extern M2C_UNK D_8006D670[];
    extern u8 D_8008542A[];
    extern M2C_UNK D_8008ED68[];
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_800B2D10[];
    extern M2C_UNK D_800B2D20[];
    extern M2C_UNK D_800B2D30[];
    extern M2C_UNK D_800B2D54[];
    extern M2C_UNK D_800B2D68[];
    extern M2C_UNK D_800B2D84[];
    extern M2C_UNK D_800B2D9C[];
    extern M2C_UNK D_800B2DA0[];
    extern M2C_UNK D_800B2DDC[];
    extern s32 D_800B3C1C[];
    extern s32 D_800B3C20[];
    extern s32 D_800B3C24[];
    extern u8 D_800B3C28[];
    extern u8 D_800B3C29[];
    extern u8 D_800B3C2A[];
    extern M2C_UNK D_800B3C38[];
    M2C_UNK var_a0_2;
    M2C_UNK var_a2;
    M2C_UNK var_a2_2;
    M2C_UNK var_a2_3;
    M2C_UNK var_a2_4;
    s16 var_a0;
    u32 temp_a1;
    u32 temp_s0;
    u32 temp_t0;
    u32 temp_v0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u16 temp_s1;
    u32 temp_a0;
    u32 temp_a0_2;
    u32 temp_a0_3;
    u32 temp_a0_4;
    void *temp_s5;
    void *temp_s6;

    temp_s5 = D_8008ED68 + 0xA4;
    temp_s6 = D_8008ED68 + 0xB4;
    temp_t0 = (*D_800B3C20) * 0x1A8;
    if (M2C_FIELD((temp_t0 + D_80091618), u16 *, 0x10) != 0xFFFF) {
        func_8001F1A8(-0x72, 0xA, 2, 1, 0, temp_t0 + (D_80091618 + 8), 0, 8, 5);
        func_8001F1A8(-0x72, 0x1C, 2, 0, 0, (*(((*D_800B3C20) * 0x1A8) + D_80091618) * 0x3C) + D_80063940, 0, 9, 5);
        func_8001F35C(0xE, 0x1D, 2, 0, 0, (s32) M2C_FIELD((((*D_800B3C20) * 0x1A8) + D_80091618), s16 *, 0xBC), 1, 5);
        func_8001F7A4(-0x72, 0x2C, 2, 0, ((u32) M2C_FIELD(((*(((*D_800B3C20) * 0x1A8) + D_80091618) * 0x3C) + D_80063940), u32 *, 8) >> 8) & 0xF, 5);
        temp_s0 = ((u32) M2C_FIELD(((*(((*D_800B3C20) * 0x1A8) + D_80091618) * 0x3C) + D_80063940), u32 *, 8) >> 0xC) & 3;
        func_80018EF4(-0x1F, 0x2A, temp_s0, 1, 5);
        if (temp_s0 == 1) {
            var_v0 = 4;
        } else {
            var_v0 = 3;
        }
        func_8001F1A8(-0x11, 0x2C, 2, 0, var_v0, (M2C_UNK *)5);
        func_8001F35C(-0x70, 0x3B, 2, 0, 0, (s32) M2C_FIELD(D_800B3C38, s16 *, 0xC), 2, 5);
        func_8001F1A8(-0x20, 0x3B, 2, 0, 0, *((M2C_FIELD(D_800B3C38, s16 *, 0xE) * 4) + D_800B2DDC), 0, 4, 5);
    }
    temp_s1 = M2C_FIELD(D_8008ED68, u16 *, 0xE0);
    switch (temp_s1) {                              /* irregular */
    case 0:
        if ((*D_800B3C29) != 0) {
            if ((*D_800B3C28) != 0) {
                (*D_800B3C28) = 0;
                func_800A790C(*(((*D_800B3C20) * 0x1A8) + D_80091618), D_800B3C28);
            }
            if ((M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0xA000) || (M2C_FIELD(D_8008ED68, s32 *, 0x98) & 0xA000)) {
                func_80034AB0(0x84);
                (*D_800B3C1C) ^= 1;
            }
            if ((M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x1000) || (M2C_FIELD(D_8008ED68, s32 *, 0x98) & 0x1000) || ((temp_a0 = M2C_FIELD(temp_s5, u32 *, 0), ((temp_a0 < 0xFU) == 0)) && (temp_a0 == ((M2C_FIELD(temp_s5, u32 *, 0) / 15) * 0xF))) || ((temp_a0_2 = M2C_FIELD(temp_s6, u32 *, 0), ((temp_a0_2 < 0xFU) == 0)) && (temp_a0_2 == ((M2C_FIELD(temp_s6, u32 *, 0) / 15) * 0xF)))) {
                func_80034AB0(0x84);
                temp_v0 = (*D_800B3C20) - 1;
                (*D_800B3C20) = temp_v0;
                if (temp_v0 < 0) {
                    (*D_800B3C20) = 5;
                }
                var_a0 = *(((*D_800B3C20) * 0x1A8) + D_80091618);
                goto block_34;
            }
            if ((M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x4000) || (M2C_FIELD(D_8008ED68, s32 *, 0x98) & 0x4000) || ((temp_a0_3 = M2C_FIELD(temp_s5, u32 *, 8), ((temp_a0_3 < 0xFU) == 0)) && (temp_a0_3 == ((M2C_FIELD(temp_s5, u32 *, 8) / 15) * 0xF))) || ((temp_a0_4 = M2C_FIELD(temp_s6, u32 *, 8), ((temp_a0_4 < 0xFU) == 0)) && (temp_a0_4 == ((M2C_FIELD(temp_s6, u32 *, 8) / 15) * 0xF)))) {
                func_80034AB0(0x84);
                temp_a1 = ((*D_800B3C20) + 1) % 6;
                var_a0 = *((temp_a1 * 0x1A8) + D_80091618);
                (*D_800B3C20) = temp_a1;
block_34:
                func_800A790C(var_a0);
            }
            if ((*D_800B3C2A) != 0) {
                if (M2C_FIELD((((*D_800B3C20) * 0x1A8) + D_80091618), u16 *, 0x10) != 0xFFFF) {
                    func_800A7984((s16) (*D_800B3C20), D_800B3C20);
                }
            }
            if ((M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x20) || (M2C_FIELD(D_8008ED68, s32 *, 0x98) & 0x20)) {
                if ((*D_800B3C1C) == 0) {
                    if (M2C_FIELD((((*D_800B3C20) * 0x1A8) + D_80091618), u16 *, 0x10) != 0xFFFF) {
                        func_80034AB0(0x48);
                        (*D_800B3C29) = 0;
                        (*D_800B3C24) = 1;
                        func_80012578();
                        return;
                    }
                    func_80034AB0(0x4C);
                    return;
                }
                func_80034AB0(0x48);
                (*D_800B3C1C) = 0;
                (*D_800B3C29) = 0;
                func_80012544(5);
                return;
            }
            if ((M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x40) || (M2C_FIELD(D_8008ED68, s32 *, 0x98) & 0x40)) {
                func_80034AB0(0x5D);
                (*D_800B3C1C) = 1;
                func_80012544(5);
                return;
            }
        } else {
            return;
        }
        break;
    case 1:
        if ((*D_800B3C29) != 0) {
            func_8001F1A8(-0x40, -0x18, 0, 1, 0, D_800B2D10, (s32) temp_s1, 8, 2);
            func_8001F1A8(-0x40, -8, 0, 1, 0, D_800B2D20, (s32) temp_s1, 7, 2);
            func_8001F1A8(-0x40, 8, 0, 1, 0, D_800B2D30, (s32) temp_s1, 8, 2);
            var_a2 = 0;
            if ((*D_800B3C24) == 0) {
                var_a2 = 3;
            }
            func_8001F1A8(-0x30, 0x18, var_a2, 1, 0, D_800B2D9C, (s32) temp_s1, 2, 2);
            var_a2_2 = 0;
            if ((*D_800B3C24) != 0) {
                var_a2_2 = 3;
            }
            func_8001F1A8(8, 0x18, var_a2_2, 1, 0, D_800B2DA0, (s32) temp_s1, 3, 2);
            if ((M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0xA000) || (M2C_FIELD(D_8008ED68, s32 *, 0x98) & 0xA000)) {
                func_80034AB0(0x84);
                (*D_800B3C24) ^= 1;
            }
            if ((M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x20) || (var_v1 = M2C_FIELD(D_8008ED68, s32 *, 0x98), ((var_v1 & 0x20) != 0))) {
                if ((*D_800B3C24) == 0) {
                    func_80034AB0(0x48);
                    var_a0_2 = 3;
                    if ((*D_8008542A) != 0x32) {
                        func_800A7EB0(3);
                        var_a0_2 = 2;
                    }
                } else {
                    goto block_79;
                }
                goto block_81;
            }
            var_v0_2 = M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x40;
block_77:
            if ((var_v0_2 != 0) || (var_v1 & 0x40)) {
block_79:
                func_80034AB0(0x5D);
block_80:
                (*D_800B3C29) = 0;
                var_a0_2 = 0;
block_81:
                func_800125AC(var_a0_2);
            }
        }
        break;
    case 2:
        func_8001F1A8(-0x38, -8, 0, 1, 0, D_800B2D54, 1, 9, 2);
        if ((M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x8F0) || (M2C_FIELD(D_8008ED68, s32 *, 0x98) & 0x8F0)) {
            func_80034AB0(0x48);
            (*D_800B3C29) = 0;
            func_800A790C(*(((*D_800B3C20) * 0x1A8) + D_80091618));
            var_a0_2 = 0;
            goto block_81;
        }
        break;
    case 3:
        func_8001F1A8(-0x58, -0x18, 1, 1, 0, D_800B2D68, 1, 0xE, 2);
        func_8001F1A8(-0x50, -8, 1, 1, 0, D_800B2D84, 1, 0xC, 2);
        var_a2_3 = 0;
        if ((*D_800B3C24) == 0) {
            var_a2_3 = 3;
        }
        func_8001F1A8(-0x30, 0x18, var_a2_3, 1, 0, D_800B2D9C, 1, 2, 2);
        var_a2_4 = 0;
        if ((*D_800B3C24) != 0) {
            var_a2_4 = 3;
        }
        func_8001F1A8(8, 0x18, var_a2_4, 1, 0, D_800B2DA0, 1, (s32) temp_s1, 2);
        if ((M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0xA000) || (M2C_FIELD(D_8008ED68, s32 *, 0x98) & 0xA000)) {
            func_80034AB0(0x84);
            (*D_800B3C24) ^= 1;
        }
        if ((M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x20) || (var_v1 = M2C_FIELD(D_8008ED68, s32 *, 0x98), var_v0_2 = M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x40, ((var_v1 & 0x20) != 0))) {
            func_80034AB0(0x48);
            if ((*D_800B3C24) == 0) {
                (*D_800B3C28) = 1;
                func_80012544(6);
                (*D_800B3C20) = 0;
                (*D_800B3C1C) = 0;
                (*D_800B3C24) = 0;
                (*D_800B3C29) = 1;
                return;
            }
            goto block_80;
        }
        goto block_77;
    }
}
