#include "common.h"

void func_800A09A4(void *arg0, u8 *arg1) {
    extern u16 D_80085430[];
    extern u8 D_8008ED68[];
    extern u16 D_8008EE48[];
    extern s32 D_8008F788[];
    extern s32 D_8008F78C[];
    extern u8 D_800B29DC[];
    extern u8 D_800B29E0[];
    extern u8 D_800B2AC8[];
    extern u8 D_800B2ADC[];
    extern u8 D_800B2AEC[];
    extern u8 D_800B2B10[];
    extern u8 D_800B2B34[];
    extern u8 D_800B2B58[];
    extern u8 D_800B2B7C[];
    extern u8 D_800B3B38[];
    extern u8 D_800B3B88[];
    extern u8 D_800B3B89[];
    extern u8 D_800B3C16[];
    u8 *var_a1;
    u8 *var_s0;
    u8 *var_s1;
    M2C_UNK var_a2;
    M2C_UNK var_a2_2;
    M2C_UNK var_a2_3;
    M2C_UNK var_a2_4;
    s32 temp_v1_2;
    s32 var_s2;
    u8 *temp_v1;
    void *temp_s4;
    void *var_a0;

    var_a0 = arg0;
    var_a1 = arg1;
    temp_s4 = var_a0;
    if (M2C_FIELD(temp_s4, u8 *, 0x5CB) != 4) {
        func_8002E714();
        return;
    }
    switch ((*D_8008EE48)) {
    case 0:
        (*D_800B3C16) = 0;
        if ((*D_8008F78C) != 1) {
            var_a0 = (void *)8;
            if ((*D_8008F78C) != 2) {
                var_a0 = (void *)4;
                M2C_FIELD(D_800B3B88, u8 *, 1) = 0U;
                M2C_FIELD(D_800B3B88, u8 *, 0) = 0U;
            }
block_76:
            func_800125AC(var_a0);
        default:
            return;
        }
block_58:
        func_80012578();
        return;
    case 1:
        if ((*D_800B3C16) == 0) {
            func_8001F1A8(-0x40, -0x10, 0, 1, 0, D_800B2AC8, 1, 9, 2);
            func_8001F1A8(-0x3A, -4, 0, 1, 0, D_800B2ADC, 1, 8, 2);
            var_a2 = 0;
            if (M2C_FIELD(D_800B3B38, s16 *, 8) == 0) {
                var_a2 = 3;
            }
            func_8001F1A8(-0x34, 0x10, var_a2, 1, 0, D_800B29DC, 1, 2, 2);
            var_a2_2 = 0;
            if (M2C_FIELD(D_800B3B38, s16 *, 8) == 1) {
                var_a2_2 = 3;
            }
            func_8001F1A8(8, 0x10, var_a2_2, 1, 0, D_800B29E0, 1, 3, 2);
            if (M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0xA000) {
                func_80034AB0(0x84);
                M2C_FIELD(D_800B3B38, s16 *, 8) = (s16) ((u16) M2C_FIELD(D_800B3B38, s16 *, 8) ^ 1);
            }
            if (M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x20) {
                func_80034AB0(0x48);
                if (M2C_FIELD(D_800B3B38, s16 *, 8) == 0) {
                    (*D_800B3C16) = 1;
                    return;
                }
                goto block_19;
            }
            if (M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x40) {
                func_80034AB0(0x5D);
block_19:
                if (M2C_FIELD(D_8008ED68, s32 *, 0xA1C) == 2) {
                    M2C_FIELD(temp_s4, s8 *, 0x5D4) = 7;
                }
            case 3:
                func_80012544(8);
                return;
            }
        } else {
            M2C_FIELD(D_8008ED68, s32 *, 0xA20) = 5;
            (*D_800B3C16) = 0;
            if (M2C_FIELD(D_8008ED68, s32 *, 0xA1C) == 2) {
                M2C_FIELD(temp_s4, s8 *, 0x5D4) = 0;
            }
block_74:
            func_8002E708(var_a0, var_a1);
            M2C_FIELD(temp_s4, s8 *, 0x5CB) = 0;
            goto block_58;
        }
        break;
    case 2:
        if (M2C_FIELD(D_8008ED68, s32 *, 0xA1C) == 2) {
            M2C_FIELD(temp_s4, s8 *, 0x5D4) = 7;
        }
        M2C_FIELD(D_8008ED68, s32 *, 0xA20) = 0;
        if (M2C_FIELD(D_8008ED68, s32 *, 0x958) != 1) {
            func_80033974((*D_80085430));
            var_a0 = (void *)1;
            goto block_76;
        }
        goto block_58;
    case 4:
        if ((*D_800B3C16) == 0) {
            func_80020844(-0x80, -0x48, 0x100, 0xA0, 0, 0, 0, 0, 5);
            func_8001F1A8(-0x84, -0x3C, 0, 1, 0, D_800B2AEC, 1, 0x11, 4);
            func_8001F1A8(-0x76, -0x2E, 0, 1, 0, D_800B2B10, 1, 0x12, 4);
            func_8001F1A8(-0x84, -0x1A, 0, 1, 0, D_800B2B34, 1, 0x12, 4);
            func_8001F1A8(-0x76, -0xC, 0, 1, 0, D_800B2B58, 1, 0x11, 4);
            func_8001F1A8(-0x76, 2, 0, 1, 0, D_800B2B7C, 1, 0xC, 4);
            func_8001F1A8(-0x78, 0x20, 1, 1, 0, D_800B2AC8, 1, 9, 2);
            func_8001F1A8(6, 0x20, 1, 1, 0, D_800B2ADC, 1, 8, 2);
            var_s2 = 0;
            var_s0 = D_800B3B38;
            var_s1 = D_8008ED68;
            do {
                if (M2C_FIELD(var_s0, s16 *, 8) == 0) {
                    if (M2C_FIELD(var_s1, s32 *, 0x88) & 0xF000) {
                        func_80034AB0(0x84);
                        temp_v1 = var_s2 + D_800B3B88;
                        *temp_v1 ^= 1;
                    } else {
                        goto block_33;
                    }
                } else {
block_33:
                    temp_v1_2 = M2C_FIELD(var_s1, s32 *, 0x88);
                    if (temp_v1_2 & 0x20) {
                        if (M2C_FIELD(var_s0, s16 *, 8) != 1) {
                            func_80034AB0(0x48);
                        }
                        M2C_FIELD(var_s0, s16 *, 8) = 1;
                    } else if (temp_v1_2 & 0x40) {
                        if (M2C_FIELD(var_s0, s16 *, 8) != 0) {
                            func_80034AB0(0x5D);
                            M2C_FIELD(var_s0, s16 *, 8) = 0;
                        }
                    }
                }
                var_s0 += 2;
                var_s2 += 1;
                var_s1 += 0x10;
            } while (var_s2 < 2);
            if (M2C_FIELD(D_800B3B38, s16 *, 8) != 0) {
                if (M2C_FIELD(D_800B3B38, s16 *, 0xA) != 0) {
                    (*D_800B3C16) = 1;
                    return;
                }
            }
        } else {
            M2C_FIELD(D_800B3B38, s16 *, 0xA) = 0;
            M2C_FIELD(D_800B3B38, s16 *, 8) = 0;
            (*D_800B3C16) = 0;
            if (M2C_FIELD(D_800B3B88, u8 *, 0) == 0) {
block_73:
                (*D_8008F788) = 6;
                goto block_74;
            }
            var_a0 = (void *)7;
            if (M2C_FIELD(D_800B3B88, u8 *, 1) == 0) {
                (*D_8008F788) = 7;
                func_8002E708((void *)7);
                var_a0 = (void *)6;
                M2C_FIELD(temp_s4, s8 *, 0x5CB) = 0;
            }
            goto block_76;
        }
        break;
    case 5:
        var_a1 = D_8008ED68;
        var_a0 = (void *)4;
        if (M2C_FIELD(D_8008ED68, s32 *, 0xA20) == 0) {
            if (M2C_FIELD(D_8008ED68, s32 *, 0x958) != 1) {
                goto block_50;
            }
            if ((*D_800B3B89) == 0) {
                M2C_FIELD(D_8008ED68, s32 *, 0xA20) = 7;
                goto block_74;
            }
            M2C_FIELD(D_8008ED68, s32 *, 0xA20) = 0;
            var_a0 = (void *)7;
            goto block_76;
        }
block_50:
        M2C_FIELD(D_8008ED68, s32 *, 0xA20) = 0;
        M2C_FIELD(D_800B3B88, u8 *, 1) = 0U;
        M2C_FIELD(D_800B3B88, u8 *, 0) = 0U;
        goto block_76;
    case 6:
        var_a0 = (void *)4;
        if (M2C_FIELD(D_8008ED68, s32 *, 0xA20) == 0) {
            if (M2C_FIELD(D_8008ED68, s32 *, 0x958) != 1) {
                goto block_56;
            }
            M2C_FIELD(D_8008ED68, s32 *, 0xA20) = 0;
            goto block_58;
        }
block_56:
        M2C_FIELD(D_8008ED68, s32 *, 0xA20) = 0;
        M2C_FIELD(D_800B3B88, u8 *, 1) = 0U;
        M2C_FIELD(D_800B3B88, u8 *, 0) = 0U;
        goto block_76;
    case 7:
        M2C_FIELD(D_800B3B38, s16 *, 0) = 0;
        M2C_FIELD(D_800B3B38, s16 *, 0xC) = 0;
        M2C_FIELD(D_800B3B38, s16 *, 8) = 0;
        (*D_8008F78C) = 0;
        func_80012544(7);
        return;
    case 8:
        if ((*D_800B3C16) == 0) {
            func_8001F1A8(-0x40, -0x10, 0, 1, 0, D_800B2AC8, 1, 9, 2);
            func_8001F1A8(-0x3A, -4, 0, 1, 0, D_800B2ADC, 1, 8, 2);
            var_a2_3 = 0;
            if (M2C_FIELD(D_800B3B38, s16 *, 8) == 0) {
                var_a2_3 = 3;
            }
            func_8001F1A8(-0x34, 0x10, var_a2_3, 1, 0, D_800B29DC, 1, 2, 2);
            var_a2_4 = 0;
            if (M2C_FIELD(D_800B3B38, s16 *, 8) == 1) {
                var_a2_4 = 3;
            }
            func_8001F1A8(8, 0x10, var_a2_4, 1, 0, D_800B29E0, 1, 3, 2);
            if (M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0xA000) {
                func_80034AB0(0x84);
                M2C_FIELD(D_800B3B38, s16 *, 8) = (s16) ((u16) M2C_FIELD(D_800B3B38, s16 *, 8) ^ 1);
            }
            if (M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x20) {
                func_80034AB0(0x48);
                if (M2C_FIELD(D_800B3B38, s16 *, 8) == 0) {
                    (*D_800B3C16) = 1;
                    return;
                }
                goto block_58;
            }
            if (M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x40) {
                func_80034AB0(0x5D);
                goto block_58;
            }
        } else {
            (*D_800B3C16) = 0;
            goto block_73;
        }
        break;
    case 9:
        var_a0 = (void *)7;
        M2C_FIELD(D_8008ED68, s32 *, 0xA20) = 0;
        M2C_FIELD(D_8008ED68, s32 *, 0xA1C) = 0;
        goto block_76;
    }
}
