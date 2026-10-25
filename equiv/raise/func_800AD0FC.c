#include "common.h"

s32 func_800AD0FC(void) {
    extern u16 D_8006AF80[];
    extern s16 D_80078C26[];
    extern s16 D_80078C28[];
    extern u8 D_8008ED68[];
    extern s32 D_8008EDF0[];
    extern u8 D_80091618[];
    extern u8 D_800EE9F8[];
    extern s16 D_800EEA78[];
    extern s16 D_800EEA7A[];
    extern s16 D_800EEA7C[];
    extern s16 D_800EEA7E[];
    extern s16 D_800EEA9C[];
    extern s32 D_800EEAA0[];
    extern u8 D_800EEB9C[];
    extern s32 D_800EEBA4[];
    extern s32 D_800EEBA8[];
    extern s32 D_800EEC6C[];
    extern s32 D_800EF2D8[];
    extern u8 D_800EF364[];
    extern u8 D_800EF524[];
    extern s16 D_800F0710[];
    extern s32 D_800F1924[];
    extern u8 D_800F1A58[];
    extern u8 D_80100F38[];
    extern u8 D_80103ED4[];
    extern u8 D_80103EE8[];
    u8 *var_a0;
    u8 *var_a0_2;
    u8 *var_a0_6;
    u8 *var_a1;
    u8 *var_a1_2;
    u8 *var_v1_2;
    u8 *var_v1_3;
    M2C_UNK var_a0_5;
    M2C_UNK var_a0_8;
    M2C_UNK var_a3;
    M2C_UNK var_a3_2;
    M2C_UNK var_a3_3;
    M2C_UNK var_t1;
    M2C_UNK var_t1_2;
    s16 *temp_s2;
    s16 *temp_s2_2;
    s16 *temp_s2_3;
    s16 temp_s2_5;
    s16 var_v0;
    s16 var_v0_3;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_s0;
    s32 temp_s0_4;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s1_4;
    s32 temp_s1_5;
    s32 temp_s1_6;
    s32 temp_v0_10;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v0_9;
    s32 temp_v1_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a0_7;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s2;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s3_3;
    s32 var_s3_4;
    s32 var_s3_5;
    s32 var_s5;
    s32 var_v1;
    u16 temp_s0_3;
    u16 temp_s0_5;
    u16 temp_s1;
    u16 temp_s3;
    u16 temp_s4;
    u32 temp_v1_10;
    u32 temp_v1_9;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    void *temp_a0_8;
    void *temp_s0_2;
    void *temp_s2_4;
    void *temp_s2_6;
    void *temp_s4_2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v1;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    void *temp_v1_7;
    void *temp_v1_8;
    void *var_v0_2;

    if (func_800B1198() != 0) {
        goto block_1;
    }
    if (func_800E0FB8((*D_8006AF80), M2C_FIELD((((*D_8006AF80) * 0x1A8) + D_80091618), u16 *, 0x8A)) != 0) {
        func_800ACE80();
block_1:
        if ((M2C_FIELD(D_800EEB9C, s32 *, 0x24) == 5) && (M2C_FIELD(D_800EEB9C, s32 *, 0x18) == 1)) {
            func_80034AB0(0x5D);
            M2C_FIELD(D_800EEB9C, s32 *, 0x18) = 0;
            temp_v1 = M2C_FIELD(((M2C_FIELD(D_800EEB9C, s32 *, 0x24) * 4) + D_800EEB9C), void **, 0x98);
            M2C_FIELD(temp_v1, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v1, s32 *, 0x38) | 1);
            func_800B5BA0(0);
            func_800B70A0(1);
        }
        func_800B7FA8(0);
        func_800B7ED8(1);
        func_800B7F40(0);
        goto block_90;
    }
    if ((func_800ACE80() == 0) && (func_800ACFFC() == 0)) {
        temp_s0 = M2C_FIELD(D_800EEB9C, s32 *, 8);
        if (temp_s0 != 1) {
            if (temp_s0 < 2) {
                if (temp_s0 != 0) {
                    return 0;
                }
                if (((*D_80078C28) == 0) && ((*D_800F0710) != 1)) {
                    if (func_800D1548() == 1) {
                        if ((*D_8006AF80) != 0xFFFF) {
                            if (func_800AEEDC((*D_8006AF80)) == 1) {
                                if (M2C_FIELD(D_800EEB9C, s32 *, 0x10) == 0) {
                                    func_800D1598(D_80103ED4);
                                } else {
                                    goto block_27;
                                }
                            } else {
                                func_800D1598(D_80103EE8);
                            }
                        }
                    } else {
                        temp_a0 = (*D_800EEAA0);
                        if (temp_a0 == 1) {
                            if (((*D_8006AF80) != 0xFFFF) && ((*D_800EEAA0) = 0, (M2C_FIELD((((*D_8006AF80) * 0x1A8) + D_80091618), u16 *, 0x10) == 0xFFFF))) {
                                if (M2C_FIELD(D_800EEB9C, s32 *, 0x10) == temp_a0) {
block_27:
                                    func_800AC34C(1);
                                }
                            }
                        }
                    }
                    if ((*D_8008EDF0) & 0xC) {
                        temp_s1 = (*D_8006AF80);
                        temp_s3 = M2C_FIELD(((temp_s1 * 0x1A8) + D_80091618), u16 *, 0x8A);
                        if (func_800E1674(temp_s1) != 1) {
                            if ((temp_s3 == 0xFFFF) || (func_800E1674(temp_s3) != 1)) {
                                var_s2 = 0;
                                var_s0_2 = 1;
                                do {
                                    temp_v1_2 = func_800B1260(var_s0_2) & 0xFFFF;
                                    if (temp_v1_2 != 0xFFFF) {
                                        temp_v0 = (temp_v1_2 * 0x79C) + D_80100F38;
                                        var_s2 = var_s2 | M2C_FIELD(temp_v0, s16 *, 0x228) | (((u32) M2C_FIELD(temp_v0, u32 *, 0x798) >> 5) & 1);
                                    }
                                    var_s0_2 -= 1;
                                } while (var_s0_2 >= 0);
                                if (var_s2 != 1) {
                                    if (func_800E1624(temp_s1) != 1) {
                                        if ((temp_s3 == 0xFFFF) || (func_800E1624(temp_s3) != 1)) {
                                            func_800B7FA8(0);
                                            func_800B7ED8(1);
                                            func_800B7F40(0);
                                            goto block_166;
                                        }
                                        /* Duplicate return node #281. Try simplifying control flow for better match */
                                        return 0;
                                    }
                                    goto block_280;
                                }
                                /* Duplicate return node #281. Try simplifying control flow for better match */
                                return 0;
                            }
                            /* Duplicate return node #281. Try simplifying control flow for better match */
                            return 0;
                        }
                        goto block_280;
                    }
                    if ((*D_8008EDF0) & 0x10) {
                        if ((M2C_FIELD(D_800EEB9C, s32 *, 0x18) == 1) && (M2C_FIELD(D_800EEB9C, s32 *, 0x24) == 5)) {
                            func_800B70A0(0);
                            return 0;
                        }
                        func_800AC34C(1);
                        return 0;
                    }
                    if ((*D_8008EDF0) & 0x40) {
                        if (M2C_FIELD(D_800EEB9C, s32 *, 0x10) == 1) {
                            if ((M2C_FIELD(D_800EEB9C, s32 *, 0x18) == M2C_FIELD(D_800EEB9C, s32 *, 0x10)) && (M2C_FIELD(D_800EEB9C, s32 *, 0x24) == 5)) {
                                func_80034AB0(0x5D);
                                M2C_FIELD(D_800EEB9C, s32 *, 0x18) = 0;
                                temp_v1_3 = M2C_FIELD(((M2C_FIELD(D_800EEB9C, s32 *, 0x24) * 4) + D_800EEB9C), void **, 0x98);
                                M2C_FIELD(temp_v1_3, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v1_3, s32 *, 0x38) | 1);
                                func_800B5BA0(0);
                                func_800B70A0(1);
                                return 0;
                            }
                            /* Duplicate return node #281. Try simplifying control flow for better match */
                            return 0;
                        }
                        func_80034AB0(0x5D);
                        func_800AC34C(0);
                        return 0;
                    }
                    if ((*D_8008EDF0) & 0x20) {
                        if (M2C_FIELD(D_800EEB9C, s32 *, 0x10) != 1) {
                            func_80034AB0(0x48);
                            M2C_FIELD(D_800EEB9C, s32 *, 8) = 1;
                            if (M2C_FIELD(D_800EEB9C, s32 *, 0x18) != 1) {
                                func_800B7FA8(1);
                                return 0;
                            }
                            goto block_280;
                        }
                        /* Duplicate return node #281. Try simplifying control flow for better match */
                        return 0;
                    }
                    if ((*D_8008EDF0) & 0x8000) {
                        func_800ACA14(0);
                    } else if (M2C_FIELD(D_8008ED68, s32 *, 0xB0) != 0) {
                        func_800ACB08(0);
                    }
                    if ((*D_8008EDF0) & 0x2000) {
                        func_800ACA14(1);
                    } else if (M2C_FIELD(D_8008ED68, s32 *, 0xA8) != 0) {
                        func_800ACB08(1);
                    }
                    if ((*D_8008EDF0) & 0x1000) {
                        func_800ACA14(2);
                    } else if (M2C_FIELD(D_8008ED68, s32 *, 0xA4) != 0) {
                        func_800ACB08(2);
                    }
                    if ((*D_8008EDF0) & 0x4000) {
                        func_800ACA14(3);
                        return 0;
                    }
                    if (M2C_FIELD(D_8008ED68, s32 *, 0xAC) != 0) {
                        func_800ACB08(3);
                        return 0;
                    }
                    /* Duplicate return node #281. Try simplifying control flow for better match */
                    return 0;
                }
                /* Duplicate return node #281. Try simplifying control flow for better match */
                return 0;
            }
            if (temp_s0 != 3) {
                return 0;
            }
block_166:
            (*D_800EEAA0) = 1;
            if ((M2C_FIELD(D_800EEB9C, s32 *, 0x24) == 5) && (M2C_FIELD(D_800EEB9C, s32 *, 0x18) == 1)) {
                func_80034AB0(0x5D);
                M2C_FIELD(D_800EEB9C, s32 *, 0x18) = 0;
                temp_v1_4 = M2C_FIELD(((M2C_FIELD(D_800EEB9C, s32 *, 0x24) * 4) + D_800EEB9C), void **, 0x98);
                M2C_FIELD(temp_v1_4, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v1_4, s32 *, 0x38) | 1);
                func_800B5BA0(0);
            }
            func_800B70A0(1);
            var_s3 = 1;
            do {
                temp_s1_2 = func_800B1260(var_s3) & 0xFFFF;
                temp_s4 = temp_s1_2 & 0xFFFF;
                if ((temp_s1_2 != 0xFFFF) && (func_800AEEDC(temp_s4) != 1) && (func_800E1720(temp_s4), temp_s0_2 = (temp_s1_2 * 0x79C) + D_80100F38, (func_800E16AC(temp_s4) != 1)) && (func_800E14C4(temp_s4) == 0)) {
                    if ((*D_800EEBA8) != 9) {
                        if ((*D_800EEBA8) < 0xA) {
                            if ((*D_800EEBA8) != 6) {
                                var_s3 -= 1;
                            } else {
                                temp_a1 = ((u32) M2C_FIELD(temp_s0_2, u32 *, 0x798) >> 0x1A) & 0x1F;
                                var_s5 = temp_s1_2 * 2;
                                if (M2C_FIELD((temp_s0_2 + temp_a1), u8 *, 0x3A8) != 0) {
                                    temp_s2 = var_s5 + D_800F1A58;
                                    if (*temp_s2 == 1) {
                                        func_800CB2B4(var_s3, temp_a1);
                                        func_800A7600(temp_s4);
                                        func_800E5C08(temp_s4, ((u32) M2C_FIELD(temp_s0_2, u32 *, 0x798) >> 0x1A) & 0x1F);
                                        *temp_s2 = 0;
                                    }
                                    M2C_FIELD((temp_s0_2 + (((u32) M2C_FIELD(temp_s0_2, u32 *, 0x798) >> 0x1A) & 0x1F)), s8 *, 0x3A8) = 0;
                                    func_800C59F4(var_s3, 0, ((u32) M2C_FIELD(temp_s0_2, u32 *, 0x798) >> 0x1A) & 0x1F);
                                    if ((u32) ((((u32) M2C_FIELD(temp_s0_2, u32 *, 0x798) >> 0x1A) & 0x1F) - 4) < 2U) {
                                        func_800C59F4(var_s3, 0, 8);
                                    }
                                    M2C_FIELD(temp_s0_2, void **, 0x21C) = NULL;
                                    func_800C57A8(var_s3);
                                    goto block_191;
                                }
                                goto block_197;
                            }
                        } else if ((*D_800EEBA8) != 0xB) {
                            if ((*D_800EEBA8) != 0xE) {
                                var_s3 -= 1;
                            } else {
                                temp_a1_2 = ((u32) M2C_FIELD(temp_s0_2, u32 *, 0x798) >> 0x1A) & 0x1F;
                                if (M2C_FIELD((temp_s0_2 + temp_a1_2), u8 *, 0x3AF) != 0) {
                                    temp_s2_2 = (temp_s1_2 * 2) + D_800F1A58;
                                    if (*temp_s2_2 == 1) {
                                        func_800E66A4(temp_s4, temp_a1_2);
                                        *temp_s2_2 = 0;
                                    }
                                    M2C_FIELD((temp_s0_2 + (((u32) M2C_FIELD(temp_s0_2, u32 *, 0x798) >> 0x1A) & 0x1F)), s8 *, 0x3AF) = 0;
                                    temp_v1_5 = M2C_FIELD(temp_s0_2, void **, 0x18C);
                                    M2C_FIELD(temp_v1_5, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v1_5, s32 *, 0x38) | 1);
                                    func_800E10BC(temp_s4);
                                    M2C_FIELD(temp_s0_2, s16 *, 0x37E) = 0;
                                    M2C_FIELD(((temp_s1_2 * 0x1A8) + D_80091618), s16 *, 0x110) = 0;
                                    M2C_FIELD(temp_s0_2, s16 *, 0x228) = 0;
                                    *(temp_s1_2 + D_800EE9F8) = 0;
                                }
                                goto block_197;
                            }
                        } else {
                            M2C_FIELD((temp_s0_2 + (*D_800F1924)), s8 *, 0x3AB) = 0;
                            M2C_FIELD(temp_s0_2, s16 *, 0x37E) = 0;
                            goto block_197;
                        }
                    } else {
                        temp_a1_3 = ((u32) M2C_FIELD(temp_s0_2, u32 *, 0x798) >> 0x1A) & 0x1F;
                        var_s5 = temp_s1_2 * 2;
                        if (M2C_FIELD((temp_s0_2 + temp_a1_3), u8 *, 0x3A9) != 0) {
                            temp_s2_3 = var_s5 + D_800F1A58;
                            if (*temp_s2_3 == 1) {
                                func_800CB370(var_s3, temp_a1_3);
                                func_800E6158(temp_s4, ((u32) M2C_FIELD(temp_s0_2, u32 *, 0x798) >> 0x1A) & 0x1F);
                                *temp_s2_3 = 0;
                            }
                            temp_v1_6 = M2C_FIELD(temp_s0_2, void **, 0x21C);
                            M2C_FIELD(temp_v1_6, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v1_6, s32 *, 0x38) | 1);
                            M2C_FIELD(temp_s0_2, void **, 0x21C) = NULL;
                            M2C_FIELD((temp_s0_2 + (((u32) M2C_FIELD(temp_s0_2, u32 *, 0x798) >> 0x1A) & 0x1F)), s8 *, 0x3A9) = 0;
block_191:
                            var_s3 -= 1;
                            func_800E10BC(temp_s4);
                            M2C_FIELD(temp_s0_2, s16 *, 0x37E) = 0;
                            M2C_FIELD((((((((var_s5 + temp_s1_2) * 4) + temp_s1_2) * 4) + temp_s1_2) * 8) + D_80091618), s16 *, 0x110) = 0;
                        } else {
                            goto block_197;
                        }
                    }
                } else {
block_197:
                    var_s3 -= 1;
                }
            } while (var_s3 >= 0);
            M2C_FIELD(D_800EEB9C, u8 **, 0x73C) = (u8 *) (*D_8006AF80);
            func_80034AB0(0x30);
            var_a1 = D_80091618;
            temp_a0_2 = ((*D_8006AF80) * 0x1A8) + D_80091618;
            if (M2C_FIELD(temp_a0_2, u16 *, 0x8A) == 0xFFFF) {
                if ((*D_8008EDF0) & 8) {
loop_202:
                    var_a1 = M2C_FIELD(D_800EEB9C, u8 **, 0x73C);
                    var_a0 = NULL;
                    if ((s32) var_a1 < 5) {
                        var_a0 = var_a1 + 1;
                    }
                    M2C_FIELD(D_800EEB9C, u8 **, 0x73C) = var_a0;
                    temp_a0_3 = ((s32) (((s32) (((s32) (((s32) var_a0 * 2) + var_a0) * 4) + var_a0) * 4) + var_a0) * 8) + D_80091618;
                    if ((M2C_FIELD(temp_a0_3, u16 *, 0x10) != 0xFFFF) && (M2C_FIELD(temp_a0_3, u16 *, 0x8A) != 0xFFFF) && (M2C_FIELD(temp_a0_3, u16 *, 0x8C) != 1)) {
                        goto loop_202;
                    }
                    var_v0 = 4;
                    goto block_216;
                }
                if ((*D_8008EDF0) & 4) {
                    var_a1 = (u8 *)0xFFFF;
loop_210:
                    var_a0_2 = (u8 *)5;
                    if ((s32) M2C_FIELD(D_800EEB9C, u8 **, 0x73C) > 0) {
                        var_a0_2 = M2C_FIELD(D_800EEB9C, u8 **, 0x73C) - 1;
                    }
                    M2C_FIELD(D_800EEB9C, u8 **, 0x73C) = var_a0_2;
                    temp_a0_4 = ((s32) (((s32) (((s32) (((s32) var_a0_2 * 2) + var_a0_2) * 4) + var_a0_2) * 4) + var_a0_2) * 8) + D_80091618;
                    if ((M2C_FIELD(temp_a0_4, u16 *, 0x10) != 0xFFFF) && (M2C_FIELD(temp_a0_4, u16 *, 0x8A) != 0xFFFF) && (M2C_FIELD(temp_a0_4, u16 *, 0x8C) != 1)) {
                        goto loop_210;
                    }
                    var_v0 = 3;
block_216:
                    (*D_80078C26) = var_v0;
                }
                if ((M2C_FIELD((((*D_8006AF80) * 0x1A8) + D_80091618), u16 *, 0x10) == 0xFFFF) || (func_800D8CCC(1, (s32) var_a1), func_800CD288(1, 0), func_800C60E0(1, 0), func_800C62A4(1, 0), func_800C5EFC(1, 0), func_800A1F44(1, 1, 0), temp_a0_5 = ((*D_8006AF80) * 0x1A8) + D_80091618, (M2C_FIELD(temp_a0_5, u16 *, 0x10) == 0xFFFF))) {
                    temp_v1_7 = ((*D_800EF2D8) * 0x1A8) + D_80091618;
                    if (M2C_FIELD(temp_v1_7, u16 *, 0x10) == 0xFFFF) {
                        var_a3 = 7;
                        if ((*D_80078C26) == 3) {
                            var_a3 = 5;
                        }
                        var_a0_3 = M2C_FIELD(D_800EF524, s32 *, 0x474);
                        goto block_234;
                    }
                    if (M2C_FIELD(temp_v1_7, u16 *, 0x8A) != 0xFFFF) {
                        var_a3_2 = 0xB;
                        if ((*D_80078C26) == 3) {
                            var_a3_2 = 9;
                        }
                        var_a0_4 = M2C_FIELD(D_800EF524, s32 *, 0x474);
                        var_s0 = -7;
                    } else {
                        var_a3_2 = 7;
                        if ((*D_80078C26) == 3) {
                            var_a3_2 = 5;
                        }
                        var_a0_4 = M2C_FIELD(D_800EF524, s32 *, 0x474);
                        goto block_242;
                    }
                    goto block_243;
                }
                temp_v1_8 = ((*D_800EF2D8) * 0x1A8) + D_80091618;
                if (M2C_FIELD(temp_v1_8, u16 *, 0x10) == 0xFFFF) {
                    var_a3 = 7;
                    if ((*D_80078C26) == 3) {
                        var_a3 = 5;
                    }
                    var_a0_3 = M2C_FIELD(temp_a0_5, s32 *, 0x18C);
block_234:
                    var_s0 = -6;
                    func_80024990(var_a0_3, 1, 0x32, var_a3);
                    var_t1 = 0;
                } else {
                    if (M2C_FIELD(temp_v1_8, u16 *, 0x8A) != 0xFFFF) {
                        var_a3_2 = 0xB;
                        if ((*D_80078C26) == 3) {
                            var_a3_2 = 9;
                        }
                        var_a0_4 = M2C_FIELD(temp_a0_5, s32 *, 0x18C);
                        var_s0 = -7;
                    } else {
                        var_a3_2 = 7;
                        if ((*D_80078C26) == 3) {
                            var_a3_2 = 5;
                        }
                        var_a0_4 = M2C_FIELD(temp_a0_5, s32 *, 0x18C);
block_242:
                        var_s0 = -2;
                    }
block_243:
                    func_80024990(var_a0_4, 1, 0x32, var_a3_2);
                    var_t1 = 1;
                }
                M2C_FIELD((((*D_8006AF80) * 0x79C) + D_80100F38), s16 *, 0x386) = 0;
                temp_v0_2 = ((*D_8006AF80) * 0x79C) + D_80100F38;
                M2C_FIELD(temp_v0_2, s32 *, 0x798) = (s32) (M2C_FIELD(temp_v0_2, s32 *, 0x798) & ~8);
                var_a0_5 = var_t1;
                var_v0_2 = ((*D_8006AF80) * 0x79C) + D_80100F38;
                var_a1_2 = (u8 *)-0x11;
                var_v1 = M2C_FIELD(var_v0_2, s32 *, 0x798) & ~0x10;
            } else {
                if ((*D_8008EDF0) & 8) {
loop_247:
                    var_v1_2 = NULL;
                    if ((s32) M2C_FIELD(D_800EEB9C, u8 **, 0x73C) < 5) {
                        var_v1_2 = M2C_FIELD(D_800EEB9C, u8 **, 0x73C) + 1;
                    }
                    temp_a0_6 = ((s32) (((s32) (((s32) (((s32) var_v1_2 * 2) + var_v1_2) * 4) + var_v1_2) * 4) + var_v1_2) * 8) + D_80091618;
                    M2C_FIELD(D_800EEB9C, u8 **, 0x73C) = var_v1_2;
                    if ((M2C_FIELD(temp_a0_6, u16 *, 0x10) != 0xFFFF) && ((var_v1_2 == M2C_FIELD(temp_a0_2, u16 *, 0x8A)) || ((M2C_FIELD(temp_a0_6, u16 *, 0x8A) != 0xFFFF) && (M2C_FIELD(temp_a0_6, u16 *, 0x8C) != 1)))) {
                        goto loop_247;
                    }
                    var_v0_3 = 4;
                    goto block_263;
                }
                if ((*D_8008EDF0) & 4) {
loop_256:
                    var_v1_3 = (u8 *)5;
                    if ((s32) M2C_FIELD(D_800EEB9C, u8 **, 0x73C) > 0) {
                        var_v1_3 = M2C_FIELD(D_800EEB9C, u8 **, 0x73C) - 1;
                    }
                    temp_a0_7 = ((s32) (((s32) (((s32) (((s32) var_v1_3 * 2) + var_v1_3) * 4) + var_v1_3) * 4) + var_v1_3) * 8) + D_80091618;
                    M2C_FIELD(D_800EEB9C, u8 **, 0x73C) = var_v1_3;
                    if ((M2C_FIELD(temp_a0_7, u16 *, 0x10) != 0xFFFF) && ((var_v1_3 == M2C_FIELD(temp_a0_2, u16 *, 0x8A)) || ((M2C_FIELD(temp_a0_7, u16 *, 0x8A) != 0xFFFF) && (M2C_FIELD(temp_a0_7, u16 *, 0x8C) != 1)))) {
                        goto loop_256;
                    }
                    var_v0_3 = 3;
block_263:
                    (*D_80078C26) = var_v0_3;
                }
                var_s3_2 = 1;
                do {
                    temp_s1_3 = func_800B1260(var_s3_2) & 0xFFFF;
                    if ((temp_s1_3 != 0xFFFF) && (M2C_FIELD(((temp_s1_3 * 0x1A8) + D_80091618), u16 *, 0x10) != 0xFFFF)) {
                        func_800D8CCC(var_s3_2);
                        func_800CD288(var_s3_2, 0);
                        func_800C60E0(var_s3_2, 0);
                        func_800C62A4(var_s3_2, 0);
                        func_800C5EFC(var_s3_2, 0);
                        func_800A1F44(var_s3_2, 1, 0);
                    }
                    var_s3_2 -= 1;
                } while (var_s3_2 >= 0);
                var_a3_3 = 0xB;
                if ((*D_80078C26) == 3) {
                    var_a3_3 = 9;
                }
                func_80024990(M2C_FIELD((((*D_8006AF80) * 0x1A8) + D_80091618), s32 *, 0x18C), 1, 0x32, var_a3_3);
                temp_a0_8 = ((*D_800EF2D8) * 0x1A8) + D_80091618;
                var_t1_2 = 0;
                if (M2C_FIELD(temp_a0_8, u16 *, 0x10) == 0xFFFF) {
                    var_s0 = -8;
                } else {
                    var_t1_2 = 1;
                    if (M2C_FIELD(temp_a0_8, u16 *, 0x8A) == 0xFFFF) {
                        var_s0 = -9;
                    } else {
                        var_s0 = -0xA;
                    }
                }
                M2C_FIELD((((*D_8006AF80) * 0x79C) + D_80100F38), s16 *, 0x386) = 0;
                temp_v0_3 = ((*D_8006AF80) * 0x79C) + D_80100F38;
                M2C_FIELD(temp_v0_3, s32 *, 0x798) = (s32) (M2C_FIELD(temp_v0_3, s32 *, 0x798) & ~8);
                temp_v0_4 = ((*D_8006AF80) * 0x79C) + D_80100F38;
                M2C_FIELD(temp_v0_4, s32 *, 0x798) = (s32) (M2C_FIELD(temp_v0_4, s32 *, 0x798) & ~0x10);
                var_a1_2 = D_80091618;
                M2C_FIELD(((M2C_FIELD((((*D_8006AF80) * 0x1A8) + D_80091618), u16 *, 0x8A) * 0x79C) + D_80100F38), s16 *, 0x386) = 0;
                temp_v0_5 = (M2C_FIELD((((*D_8006AF80) * 0x1A8) + D_80091618), u16 *, 0x8A) * 0x79C) + D_80100F38;
                M2C_FIELD(temp_v0_5, s32 *, 0x798) = (s32) (M2C_FIELD(temp_v0_5, s32 *, 0x798) & ~8);
                var_v0_2 = (M2C_FIELD((((*D_8006AF80) * 0x1A8) + D_80091618), u16 *, 0x8A) * 0x79C) + D_80100F38;
                var_a0_5 = var_t1_2;
                var_v1 = M2C_FIELD(var_v0_2, s32 *, 0x798) & ~0x10;
            }
            M2C_FIELD(var_v0_2, s32 *, 0x798) = var_v1;
            (*D_800EEBA4) = 0;
            func_800ABF7C(var_a0_5, var_a1_2, D_8006AF80);
            return var_s0;
        }
        if (((*D_80078C28) == 0) && ((*D_800F0710) != temp_s0)) {
            temp_v0_6 = func_800D1548();
            if ((temp_v0_6 == temp_s0) && ((*D_8006AF80) != 0xFFFF)) {
                if (func_800AEEDC((*D_8006AF80)) == temp_v0_6) {
                    if (M2C_FIELD(D_800EEB9C, s32 *, 0x10) == 0) {
                        var_a0_6 = D_80103ED4;
                        goto block_84;
                    }
                } else if (M2C_FIELD(D_800EEB9C, s32 *, 0x24) != 5) {
                    if (M2C_FIELD(D_800EEB9C, s32 *, 0x10) == 0) {
                        goto block_83;
                    }
                } else {
block_83:
                    var_a0_6 = D_80103EE8;
block_84:
                    func_800D1598(var_a0_6);
                }
            }
            if (M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x40) {
                func_80034AB0(0x5D);
                if (M2C_FIELD(D_800EEB9C, s32 *, 0x24) == 5) {
                    func_800B7FA8(0);
                    func_800B70A0(1);
                    func_800AC34C(8);
                } else if (M2C_FIELD(D_800EEB9C, s32 *, 0x18) != 0) {
                    func_800B7FA8(0);
                }
block_90:
                (*D_800EEBA4) = 0;
                goto block_280;
            }
            if (M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x20) {
                if ((*D_800F0710) != 1) {
                    if (M2C_FIELD(D_800EEB9C, s32 *, 0x24) != 5) {
                        func_800B7FA8(0);
                        if ((M2C_FIELD(D_800EEB9C, s32 *, 0x24) != 4) || (M2C_FIELD(D_800EEB9C, s32 *, 0xD0) != 0)) {
                            func_800B7ED8(1);
                            func_800B7F40(0);
                        }
                        M2C_FIELD(D_800EEB9C, s32 *, 8) = 0;
                        if (M2C_FIELD(D_800EEB9C, s32 *, 0x24) < 2) {
                            var_s3_3 = 1;
                            do {
                                temp_s1_4 = func_800B1260(var_s3_3) & 0xFFFF;
                                if ((temp_s1_4 != 0xFFFF) && (temp_s4_2 = (temp_s1_4 * 0x1A8) + D_80091618, (M2C_FIELD(temp_s4_2, s16 *, 0x19C) == 0))) {
                                    temp_s2_4 = (temp_s1_4 * 0x79C) + D_80100F38;
                                    temp_v1_9 = M2C_FIELD(temp_s2_4, u32 *, 0x798);
                                    if (((temp_v1_9 >> 3) & 1) != 1) {
                                        temp_s0_3 = temp_s1_4 & 0xFFFF;
                                        if (((temp_v1_9 >> 4) & 1) != 1) {
                                            if (func_800E16AC(temp_s0_3) != 1) {
                                                if ((func_800E1624(temp_s0_3) != 1) && (func_800E1820(temp_s0_3) == 0) && (func_800E17F8(temp_s0_3) != 0)) {
                                                    temp_s0_4 = M2C_FIELD(temp_s2_4, u16 *, 0x336) - 1;
                                                    temp_s2_5 = M2C_FIELD(temp_s2_4, u16 *, 0x338) - 1;
                                                    if (M2C_FIELD(temp_s4_2, u16 *, 0x90) != 0) {
                                                        var_a0_7 = M2C_FIELD((((func_800B12D8(var_s3_3) & 0xFFFF) * 0x1A8) + D_80091618), u16 *, 0x10) << 0x10;
                                                    } else {
                                                        var_a0_7 = M2C_FIELD(temp_s4_2, u16 *, 0x10) << 0x10;
                                                    }
                                                    if (*(((s32) (temp_s0_4 << 0x10) >> 0xD) + ((var_a0_7 >> 0xA) + D_800EF364) + temp_s2_5) == 0xFF) {
                                                        goto block_111;
                                                    }
                                                    M2C_FIELD(((temp_s1_4 * 0x79C) + D_80100F38), s16 *, 0x228) = 1;
                                                    goto block_114;
                                                }
                                                goto block_112;
                                            }
                                            goto block_114;
                                        }
                                    }
block_111:
block_112:
                                    func_800D1CC4(temp_s1_4, 0x25, 1, 0);
                                    var_s3_3 -= 1;
                                } else {
block_114:
                                    var_s3_3 -= 1;
                                }
                            } while (var_s3_3 >= 0);
                            var_s3_4 = 1;
loop_117:
                            temp_s1_5 = func_800B1260(var_s3_4) & 0xFFFF;
                            if ((temp_s1_5 == 0xFFFF) || (var_a0_8 = 0x48, (M2C_FIELD(((temp_s1_5 * 0x79C) + D_80100F38), s16 *, 0x228) != 1))) {
                                var_s3_4 -= 1;
                                var_a0_8 = 0x5D;
                                if (var_s3_4 < 0) {

                                } else {
                                    goto loop_117;
                                }
                            }
                            goto block_279;
                        }
                        if (M2C_FIELD(D_800EEB9C, s32 *, 0x24) == 3) {
                            var_s3_5 = 1;
                            if (func_800E0DF8(D_800EEB9C) != 1) {
                                do {
                                    temp_s1_6 = func_800B1260(var_s3_5) & 0xFFFF;
                                    temp_s0_5 = temp_s1_6 & 0xFFFF;
                                    if ((temp_s1_6 != 0xFFFF) && (func_800E16AC(temp_s0_5) != 1) && (func_800E1388(temp_s0_5) != 0) && (func_800E1594(temp_s0_5) != 1)) {
                                        temp_s2_6 = (temp_s1_6 * 0x79C) + D_80100F38;
                                        temp_v1_10 = M2C_FIELD(temp_s2_6, u32 *, 0x798);
                                        if (((temp_v1_10 >> 3) & 1) != 1) {
                                            if ((((temp_v1_10 >> 4) & 1) != 1) && (func_800E1820(temp_s0_5) == 0) && (func_800E17F8(temp_s0_5) != 0)) {
                                                if (func_800E1624(temp_s0_5) == 1) {
                                                    goto block_133;
                                                }
                                                M2C_FIELD((temp_s2_6 + (*D_800EEC6C)), s8 *, 0x3C3) = 1;
                                                goto block_136;
                                            }
                                            goto block_134;
                                        }
block_133:
block_134:
                                        func_800D1CC4(temp_s1_6, 0x25, 1, 0);
                                        var_s3_5 -= 1;
                                    } else {
block_136:
                                        var_s3_5 -= 1;
                                    }
                                    var_a0_8 = 0x48;
                                } while (var_s3_5 >= 0);
                                goto block_279;
                            }
                            goto block_280;
                        }
                        if (M2C_FIELD(D_800EEB9C, s32 *, 0x24) == 2) {
                            var_a0_8 = 0x48;
                            if (M2C_FIELD(D_800EEB9C, s32 *, 0xD0) == 0) {
                                (*D_800EEA9C) = 1;
                            }
                        } else {
                            var_a0_8 = 0x48;
                        }
block_279:
                        func_80034AB0(var_a0_8);
                        return -1;
                    }
                    /* Duplicate return node #281. Try simplifying control flow for better match */
                    return 0;
                }
                goto block_280;
            }
            if (!(M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x8000)) {
                if ((M2C_FIELD(D_8008ED68, s32 *, 0xB0) != 0) && (temp_v0_7 = M2C_FIELD((((*D_800EEA78) * 4) + D_8008ED68), s32 *, 0xA4), (temp_v0_7 != 7))) {
                    if ((temp_v0_7 & 7) == 7) {
                        goto block_146;
                    }
                }
            } else {
block_146:
                func_800ACC64(0);
            }
            if (!(M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x2000)) {
                if ((M2C_FIELD(D_8008ED68, s32 *, 0xA8) != 0) && (temp_v0_8 = M2C_FIELD((((*D_800EEA7A) * 4) + D_8008ED68), s32 *, 0xA4), (temp_v0_8 != 7))) {
                    if ((temp_v0_8 & 7) == 7) {
                        goto block_152;
                    }
                }
            } else {
block_152:
                func_800ACC64(1);
            }
            if (!(M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x1000)) {
                if ((M2C_FIELD(D_8008ED68, s32 *, 0xA4) != 0) && (temp_v0_9 = M2C_FIELD((((*D_800EEA7C) * 4) + D_8008ED68), s32 *, 0xA4), (temp_v0_9 != 7))) {
                    if ((temp_v0_9 & 7) == 7) {
                        goto block_158;
                    }
                }
            } else {
block_158:
                func_800ACC64(2);
            }
            if (!(M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x4000)) {
                if (M2C_FIELD(D_8008ED68, s32 *, 0xAC) != 0) {
                    temp_v0_10 = M2C_FIELD((((*D_800EEA7E) * 4) + D_8008ED68), s32 *, 0xA4);
                    if (temp_v0_10 != 7) {
                        if ((temp_v0_10 & 7) == 7) {
                            goto block_164;
                        }
                        /* Duplicate return node #281. Try simplifying control flow for better match */
                        return 0;
                    }
                }
block_280:
                /* Duplicate return node #281. Try simplifying control flow for better match */
                return 0;
            }
block_164:
            func_800ACC64(3);
            return 0;
        }
        /* Duplicate return node #281. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
