#include "common.h"

void func_800A6F10(void) {
    extern u8 D_80063940[];
    extern u8 D_8006B2A4[];
    extern u8 D_8006D670[];
    extern u8 D_80085428[];
    extern u8 D_8008542E[];
    extern u8 D_8008ED68[];
    extern u8 D_800B1A74[];
    extern u8 D_800B241C[];
    extern u8 D_800B2DBC[];
    extern u8 D_800B2DF4[];
    extern s32 D_800B3C1C[];
    extern u8 D_800B3C28[];
    M2C_UNK var_a0;
    M2C_UNK var_a0_4;
    s32 temp_a0_5;
    s32 temp_v0;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    u16 temp_s3;
    u32 temp_a0;
    u32 temp_a0_2;
    u32 temp_a0_3;
    u32 temp_a0_4;
    u32 temp_a0_6;
    u32 temp_a0_7;
    u32 temp_a0_8;
    u32 temp_a0_9;
    void *temp_s4;
    void *temp_s5;
    void *var_a0_2;
    void *var_a0_3;

    temp_s4 = D_8008ED68 + 0xA4;
    temp_s5 = D_8008ED68 + 0xB4;
    temp_s3 = M2C_FIELD(D_8008ED68, u16 *, 0xE0);
    switch (temp_s3) {                              /* irregular */
    default:
        var_a0 = 1;
        if (temp_s3 != 2) {
            return;
        }
block_58:
        func_800125AC(var_a0);
        return;
    case 0:
        if ((*D_800B3C28) != 0) {
            (*D_800B3C28) = 0;
            func_800A790C(0);
        }
        if (!((*D_8008542E) & 2)) {
            var_v1 = 0x54;
            var_a1 = 0;
            var_a0_2 = D_80063940 + 0x13B0;
            do {
                if ((((u32) M2C_FIELD(var_a0_2, u32 *, 0x14) >> 5) & 1) != 1) {
                    var_a1 = 1;
                }
                var_v1 += 1;
                var_a0_2 += 0x3C;
            } while (var_v1 < 0x5A);
            if (var_a1 == 0) {
                M2C_FIELD(D_80085428, u8 *, 6) = (u8) (M2C_FIELD(D_80085428, u8 *, 6) | 2);
            }
        }
        if (!((*D_8008542E) & 4)) {
            var_v1_2 = 0x26;
            var_a1_2 = 0;
            var_a0_3 = D_80063940 + 0x8E8;
            do {
                if ((((u32) M2C_FIELD(var_a0_3, u32 *, 0x14) >> 5) & 1) != 1) {
                    var_a1_2 = 1;
                }
                var_v1_2 += 1;
                var_a0_3 += 0x3C;
            } while (var_v1_2 < 0x33);
            if (var_a1_2 == 0) {
                M2C_FIELD(D_80085428, u8 *, 6) = (u8) (M2C_FIELD(D_80085428, u8 *, 6) | 4);
            }
        }
        if ((M2C_FIELD(D_80085428, s32 *, 4) & 0x4000FF) == 0x67) {
            M2C_FIELD(D_80085428, u8 *, 6) = (u8) (M2C_FIELD(D_80085428, u8 *, 6) | 0x40);
            func_80034AB0(0x8081, D_80085428);
            var_a0 = 2;
            goto block_58;
        }
        func_80012578(0x8081, D_80085428);
        return;
    case 1:
        func_8001F1A8(0x10, -0x30, 0, 1, 0, *(((*D_800B3C1C) * 4) + D_800B241C), (s32) temp_s3, 9, 2);
        func_8001F7A4(4, -0x1C, 0, 0, ((u32) M2C_FIELD((((*D_800B3C1C) * 0x3C) + D_80063940), u32 *, 8) >> 8) & 0xF, 2);
        if ((((u32) M2C_FIELD((((*D_800B3C1C) * 0x3C) + D_80063940), u32 *, 8) >> 0xC) & 3) == temp_s3) {
            var_v0 = 4;
        } else {
            var_v0 = 3;
        }
        func_8001F1A8(0x5E, -0x1C, 0, 0, var_v0, (M2C_UNK *)2);
        func_800A7680(*(((*D_800B3C1C) * 4) + D_800B1A74));
        func_8001F1A8(-0x90, 0x30, 3, 1, 0, D_800B2DBC, 1, 3, 2);
        func_8001F1A8(-0x68, 0x30, 3, 1, 0, ((*D_800B3C1C) * 0x58) + D_8006B2A4, 1, 8, 2);
        func_800A7754(((*D_800B3C1C) * 0x58) + (D_8006B2A4 + 0x18), *((*D_800B3C1C) + D_800B2DF4));
        if ((M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x6000) || (M2C_FIELD(D_8008ED68, s32 *, 0x98) & 0x6000) || ((temp_a0 = M2C_FIELD(temp_s4, u32 *, 8), ((temp_a0 < 0xFU) == 0)) && (temp_a0 == ((M2C_FIELD(temp_s4, u32 *, 8) / 15) * 0xF))) || ((temp_a0_2 = M2C_FIELD(temp_s5, u32 *, 8), ((temp_a0_2 < 0xFU) == 0)) && (temp_a0_2 == ((M2C_FIELD(temp_s5, u32 *, 8) / 15) * 0xF))) || ((temp_a0_3 = M2C_FIELD(temp_s4, u32 *, 4), ((temp_a0_3 < 0xFU) == 0)) && (temp_a0_3 == ((M2C_FIELD(temp_s4, u32 *, 4) / 15) * 0xF))) || ((temp_a0_4 = M2C_FIELD(temp_s5, u32 *, 4), ((temp_a0_4 < 0xFU) == 0)) && (temp_a0_4 == ((M2C_FIELD(temp_s5, u32 *, 4) / 15) * 0xF)))) {
            func_80034AB0(0x84);
            temp_a0_5 = ((*D_800B3C1C) + 1) % 103;
            (*D_800B3C1C) = temp_a0_5;
            if (!(((u32) M2C_FIELD(((temp_a0_5 * 0x3C) + D_80063940), u32 *, 0x14) >> 5) & 1)) {
                var_a0_4 = 0;
                goto block_53;
            }
            goto block_54;
        }
        if ((M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x9000) || (M2C_FIELD(D_8008ED68, s32 *, 0x98) & 0x9000) || ((temp_a0_6 = M2C_FIELD(temp_s4, u32 *, 0), ((temp_a0_6 < 0xFU) == 0)) && (temp_a0_6 == ((M2C_FIELD(temp_s4, u32 *, 0) / 15) * 0xF))) || ((temp_a0_7 = M2C_FIELD(temp_s5, u32 *, 0), ((temp_a0_7 < 0xFU) == 0)) && (temp_a0_7 == ((M2C_FIELD(temp_s5, u32 *, 0) / 15) * 0xF))) || ((temp_a0_8 = M2C_FIELD(temp_s4, u32 *, 0xC), ((temp_a0_8 < 0xFU) == 0)) && (temp_a0_8 == ((M2C_FIELD(temp_s4, u32 *, 0xC) / 15) * 0xF))) || ((temp_a0_9 = M2C_FIELD(temp_s5, u32 *, 0xC), ((temp_a0_9 < 0xFU) == 0)) && (temp_a0_9 == ((M2C_FIELD(temp_s5, u32 *, 0xC) / 15) * 0xF)))) {
            func_80034AB0(0x84);
            temp_v0 = (*D_800B3C1C) - 1;
            (*D_800B3C1C) = temp_v0;
            if (temp_v0 < 0) {
                (*D_800B3C1C) = 0x66;
            }
            var_a0_4 = 1;
            if (!(((u32) M2C_FIELD((((*D_800B3C1C) * 0x3C) + D_80063940), u32 *, 0x14) >> 5) & 1)) {
block_53:
                func_800A7840(var_a0_4);
            }
block_54:
            func_800A790C((s16) (*D_800B3C1C));
        }
        if ((M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x40) || (M2C_FIELD(D_8008ED68, s32 *, 0x98) & 0x40)) {
            func_80034AB0(0x5D);
            (*D_800B3C1C) = 3;
            func_80012544(5);
            return;
        }
        break;
    }
}
