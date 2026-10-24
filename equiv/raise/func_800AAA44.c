#include "common.h"

s32 func_800AAA44(void) {
    extern M2C_UNK D_80063940[];
    extern u16 D_8006AF80[];
    extern s32 D_8006AF84[];
    extern s16 D_8006AFA4[];
    extern M2C_UNK D_8006B1AA[];
    extern s32 D_80078C34[];
    extern u16 D_8008EE44[];
    extern u8 D_8008F702[];
    extern s8 D_8008F703[];
    extern M2C_UNK D_80091618[];
    extern s16 D_800EEA88[];
    extern s32 D_800EEA8C[];
    extern s32 D_800EEB64[];
    extern s32 D_800EEB6C[];
    extern M2C_UNK D_800EEB9C[];
    extern s32 D_800EEBA4[];
    extern u32 D_800EEBA8[];
    extern u32 D_800EEBC0[];
    extern s16 D_800EFA50[];
    extern s32 D_800F1924[];
    extern s32 D_800F2DA0[];
    extern s32 D_800F2DA4[];
    extern u32 D_800F2DB0[];
    extern s32 D_800F2DB4[];
    extern s16 D_80100E60[];
    extern M2C_UNK D_80100F38[];
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_s0_11;
    s32 temp_s0_12;
    s32 temp_v0;
    s32 temp_v0_11;
    s32 temp_v0_12;
    s32 temp_v0_13;
    s32 temp_v0_14;
    s32 temp_v0_15;
    s32 temp_v0_2;
    s32 temp_v0_5;
    s32 temp_v0_8;
    s32 temp_v0_9;
    s32 temp_v1_10;
    s32 temp_v1_13;
    s32 temp_v1_15;
    s32 temp_v1_16;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 temp_v1_8;
    s32 temp_v1_9;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s1;
    s32 var_s1_10;
    s32 var_s1_11;
    s32 var_s1_12;
    s32 var_s1_13;
    s32 var_s1_14;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s1_4;
    s32 var_s1_5;
    s32 var_s1_6;
    s32 var_s1_7;
    s32 var_s1_8;
    s32 var_s1_9;
    s32 var_v0_2;
    s32 var_v0_3;
    u16 temp_v1_14;
    u32 temp_a0_3;
    u32 temp_v0_7;
    u32 var_v0;
    void *temp_a2;
    void *temp_s0;
    void *temp_s0_10;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s0_5;
    void *temp_s0_6;
    void *temp_s0_7;
    void *temp_s0_8;
    void *temp_s0_9;
    void *temp_v0_10;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_6;
    void *temp_v1;
    void *temp_v1_11;
    void *temp_v1_12;
    void *temp_v1_4;
    void *temp_v1_7;

    if ((*D_8008F702) != 1) {
        func_800A9AC0();
    }
    switch ((*D_800EEBA8)) {                           /* switch 1 */
    case 0:                                         /* switch 1 */
        (*D_800EEBA8) = 2;
        (*D_800F2DB4) = 2;
    default:                                        /* switch 1 */
block_230:
        return 0;
    case 1:                                         /* switch 1 */
        if ((u16) (*D_8008EE44) >= 0x30U) {
        case 2:                                     /* switch 1 */
            temp_v0 = func_800AD0FC();
            (*D_800F2DA0) = temp_v0;
            if (temp_v0 == -1) {
                var_v0 = 3;
block_229:
                (*D_800EEBA8) = var_v0;
                goto block_230;
            }
            if (temp_v0 != -2) {
                if ((u32) (temp_v0 + 0xA) < 5U) {
                    goto block_10;
                }
                temp_v0_2 = func_800AEF38(-1);
                (*D_800F2DA4) = temp_v0_2;
                if (temp_v0_2 > 0) {
                    if (temp_v0_2 < 0x10) {
                        (*D_800EEA8C) = 0;
                        if (temp_v0_2 < 5) {
                            (*D_800EEBA8) = 0x28;
                        }
                        (*D_800F2DA4) -= 1;
                        goto block_230;
                    }
                    goto block_16;
                }
block_16:
                if ((*D_800F2DA4) == 0x10) {
                    var_s1 = 1;
                    (*D_800F2DA4) = 0xF;
                    (*D_800EEA8C) = 0;
                    do {
                        temp_a0 = func_800B1260(var_s1) & 0xFFFF;
                        if (temp_a0 != 0xFFFF) {
                            temp_v0_3 = (temp_a0 * 0x79C) + D_80100F38;
                            temp_v1 = (temp_a0 * 0x1A8) + D_80091618;
                            M2C_FIELD(temp_v1, s32 *, 0xA4) = (s32) M2C_FIELD(temp_v0_3, s16 *, 0x336);
                            M2C_FIELD(temp_v1, s32 *, 0xA8) = (s32) M2C_FIELD(temp_v0_3, s16 *, 0x338);
                        }
                        var_s1 -= 1;
                    } while (var_s1 >= 0);
                    func_800B7FA8(0);
                    func_800B7ED8(1);
                    func_800B7F40(0);
                    (*D_800EEBA4) = 0;
                    return -4;
                }
                /* Duplicate return node #231. Try simplifying control flow for better match */
                return 0;
            }
block_10:
            (*D_800EEBA8) = 0;
            return temp_v0;
        }
        /* Duplicate return node #231. Try simplifying control flow for better match */
        return 0;
    case 3:                                         /* switch 1 */
        var_s1_2 = 1;
        (*D_800F1924) = func_800AEBA8(M2C_FIELD(D_800EEB9C, u32 *, 0x24), M2C_FIELD(D_800EEB9C, s32 *, 0xD0));
        do {
            temp_v1_2 = func_800B1260(var_s1_2) & 0xFFFF;
            if (temp_v1_2 != 0xFFFF) {
                temp_s0 = (temp_v1_2 * 0x79C) + D_80100F38;
                if ((u32) M2C_FIELD(D_800EEB9C, u32 *, 0x24) >= 2U) {
                    if (M2C_FIELD(D_800EEB9C, u32 *, 0x24) == 3) {
                        goto block_26;
                    }
                } else {
block_26:
                    M2C_FIELD(temp_s0, s32 *, 0x798) = (s32) ((M2C_FIELD(temp_s0, s32 *, 0x798) & 0x83FFFFFF) | (((*D_800F1924) & 0x1F) << 0x1A));
                }
            }
            var_s1_2 -= 1;
        } while (var_s1_2 >= 0);
        switch ((*D_800EEBC0)) {                       /* switch 2 */
        case 0:                                     /* switch 2 */
            var_v0 = 4;
            break;
        case 1:                                     /* switch 2 */
            var_v0 = 7;
            break;
        case 2:                                     /* switch 2 */
            var_v0 = 0xA;
            break;
        case 3:                                     /* switch 2 */
            var_v0 = 0xC;
            break;
        case 4:                                     /* switch 2 */
            (*D_8008F703) = 1;
            var_v0 = 0xF;
            break;
        case 5:                                     /* switch 2 */
            var_v0 = 0x22;
            break;
        default:                                    /* switch 2 */
            (*D_8008F703) = 1;
            var_v0 = 0x24;
            break;
        }
        goto block_229;
    case 4:                                         /* switch 1 */
        var_s1_3 = 1;
        do {
            var_a0 = func_800B1260(var_s1_3) & 0xFFFF;
            if (var_a0 != 0xFFFF) {
                temp_s0_2 = (var_a0 * 0x79C) + D_80100F38;
                if (M2C_FIELD(temp_s0_2, s16 *, 0x228) == 1) {
                    temp_v0_4 = (var_a0 * 0x1A8) + D_80091618;
                    M2C_FIELD(temp_v0_4, s16 *, 0x110) = 1;
                    M2C_FIELD(temp_v0_4, s32 *, 0x154) = (s32) (*D_8006AF84);
                    M2C_FIELD(temp_s0_2, s16 *, 0x378) = (s16) (func_800E680C(var_a0, ((u32) M2C_FIELD(temp_s0_2, u32 *, 0x798) >> 0x1A) & 0x1F) != 2);
                    M2C_FIELD((temp_s0_2 + (((u32) M2C_FIELD(temp_s0_2, u32 *, 0x798) >> 0x1A) & 0x1F)), s8 *, 0x3A8) = 1;
                    func_800C0E1C(var_s1_3, 1, ((u32) M2C_FIELD(temp_s0_2, u32 *, 0x798) >> 0x1A) & 0x1F);
                    var_a0 = 0xFFF03FFF;
                    M2C_FIELD(temp_s0_2, u32 *, 0x798) = (u32) ((M2C_FIELD(temp_s0_2, u32 *, 0x798) & 0xFFF03FFF) | 0x18000);
                }
            }
            var_s1_3 -= 1;
        } while (var_s1_3 >= 0);
        if (func_800E0DF8(var_a0) != 0) {
            func_800AC34C(4);
            var_v0 = 6;
        } else {
block_228:
            var_v0 = 2;
        }
        goto block_229;
    case 6:                                         /* switch 1 */
        func_800ACE80();
        temp_v0_5 = func_800AD0FC();
        (*D_800F2DA0) = temp_v0_5;
        if (temp_v0_5 != -1) {
            if (temp_v0_5 == 0) {
                if (func_800E0DF8() != 1) {
                    (*D_800EEBA8) = 2;
                    var_s1_4 = 1;
loop_48:
                    temp_v1_3 = func_800B1260(var_s1_4) & 0xFFFF;
                    if (temp_v1_3 != 0xFFFF) {
                        temp_s0_3 = (temp_v1_3 * 0x79C) + D_80100F38;
                        temp_v1_4 = temp_s0_3 + (((u32) M2C_FIELD(temp_s0_3, u32 *, 0x798) >> 0x1A) & 0x1F);
                        if (M2C_FIELD(temp_v1_4, u8 *, 0x3A8) != 0) {
                            M2C_FIELD(temp_v1_4, u8 *, 0x3A8) = 0U;
                            func_800C59F4(var_s1_4, 0, ((u32) M2C_FIELD(temp_s0_3, u32 *, 0x798) >> 0x1A) & 0x1F);
                            if ((u32) ((((u32) M2C_FIELD(temp_s0_3, u32 *, 0x798) >> 0x1A) & 0x1F) - 4) < 2U) {
                                func_800C59F4(var_s1_4, 0, 8);
                            }
                            M2C_FIELD(temp_s0_3, s32 *, 0x21C) = 0;
                            M2C_FIELD(temp_s0_3, u32 *, 0x798) = (u32) ((M2C_FIELD(temp_s0_3, u32 *, 0x798) & 0xFFF03FFF) | 0x8000);
                        }
                    }
                    var_s1_4 -= 1;
                    if (var_s1_4 >= 0) {
                        goto loop_48;
                    }
block_76:
                    func_800AC34C(5);
                    return 0;
                }
                goto block_230;
            }
            (*D_800EEBA8) = 2;
            var_s1_5 = 1;
            do {
                temp_v1_5 = func_800B1260(var_s1_5) & 0xFFFF;
                if (temp_v1_5 != 0xFFFF) {
                    temp_s0_4 = (temp_v1_5 * 0x79C) + D_80100F38;
                    M2C_FIELD(temp_s0_4, s32 *, 0x798) = (s32) ((M2C_FIELD(temp_s0_4, s32 *, 0x798) & 0xFFF03FFF) | 0x8000);
                }
                var_s1_5 -= 1;
            } while (var_s1_5 >= 0);
block_106:
            return (*D_800F2DA0);
        }
        (*D_800EEBA8) = 3;
        (*D_800F2DB0) = 6;
        goto block_230;
    case 7:                                         /* switch 1 */
        var_s1_6 = 1;
        do {
            temp_a0_2 = func_800B1260(var_s1_6) & 0xFFFF;
            if (temp_a0_2 != 0xFFFF) {
                temp_s0_5 = (temp_a0_2 * 0x79C) + D_80100F38;
                if (M2C_FIELD(temp_s0_5, s16 *, 0x228) == 1) {
                    temp_v0_6 = (temp_a0_2 * 0x1A8) + D_80091618;
                    M2C_FIELD(temp_v0_6, s16 *, 0x110) = 1;
                    M2C_FIELD(temp_v0_6, s32 *, 0x154) = (s32) (*D_8006AF84);
                    M2C_FIELD(temp_s0_5, s16 *, 0x378) = (s16) ((func_800E6BD8(temp_a0_2, ((u32) M2C_FIELD(temp_s0_5, u32 *, 0x798) >> 0x1A) & 0x1F) << 0x10) == 0);
                    M2C_FIELD((temp_s0_5 + (((u32) M2C_FIELD(temp_s0_5, u32 *, 0x798) >> 0x1A) & 0x1F)), s8 *, 0x3A9) = 1;
                    temp_v0_7 = (M2C_FIELD(temp_s0_5, u32 *, 0x798) & 0xFFF03FFF) | 0x24000;
                    M2C_FIELD(temp_s0_5, u32 *, 0x798) = temp_v0_7;
                    func_800C0E1C(var_s1_6, 2, (temp_v0_7 >> 0x1A) & 0x1F);
                    M2C_FIELD(temp_s0_5, u32 *, 0x798) = (u32) ((M2C_FIELD(temp_s0_5, u32 *, 0x798) & 0xFFF03FFF) | 0x24000);
                }
            }
            var_s1_6 -= 1;
        } while (var_s1_6 >= 0);
        if (func_800E0DF8() != 0) {
            func_800AC34C(4);
            var_v0 = 9;
        } else {
            goto block_228;
        }
        goto block_229;
    case 9:                                         /* switch 1 */
        func_800ACE80();
        temp_v0_8 = func_800AD0FC();
        (*D_800F2DA0) = temp_v0_8;
        if (temp_v0_8 != -1) {
            if (temp_v0_8 == 0) {
                if (func_800E0DF8() != 1) {
                    (*D_800EEBA8) = 2;
                    var_s1_7 = 1;
                    do {
                        temp_v1_6 = func_800B1260(var_s1_7) & 0xFFFF;
                        if (temp_v1_6 != 0xFFFF) {
                            temp_s0_6 = (temp_v1_6 * 0x79C) + D_80100F38;
                            if (M2C_FIELD((temp_s0_6 + (((u32) M2C_FIELD(temp_s0_6, u32 *, 0x798) >> 0x1A) & 0x1F)), u8 *, 0x3A9) != 0) {
                                temp_v1_7 = M2C_FIELD(temp_s0_6, void **, 0x21C);
                                M2C_FIELD(temp_v1_7, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v1_7, s32 *, 0x38) | 1);
                                M2C_FIELD(temp_s0_6, void **, 0x21C) = NULL;
                                M2C_FIELD((temp_s0_6 + (((u32) M2C_FIELD(temp_s0_6, u32 *, 0x798) >> 0x1A) & 0x1F)), s8 *, 0x3A9) = 0;
                                M2C_FIELD(temp_s0_6, u32 *, 0x798) = (u32) ((M2C_FIELD(temp_s0_6, u32 *, 0x798) & 0xFFF03FFF) | 0x8000);
                            }
                        }
                        var_s1_7 -= 1;
                    } while (var_s1_7 >= 0);
                    goto block_76;
                }
                goto block_230;
            }
            (*D_800EEBA8) = 2;
            var_s1_8 = 1;
            do {
                temp_v1_8 = func_800B1260(var_s1_8) & 0xFFFF;
                if (temp_v1_8 != 0xFFFF) {
                    temp_s0_7 = (temp_v1_8 * 0x79C) + D_80100F38;
                    M2C_FIELD(temp_s0_7, s32 *, 0x798) = (s32) ((M2C_FIELD(temp_s0_7, s32 *, 0x798) & 0xFFF03FFF) | 0x8000);
                }
                var_s1_8 -= 1;
            } while (var_s1_8 >= 0);
            goto block_106;
        }
        (*D_800EEBA8) = 3;
        (*D_800F2DB0) = 9;
        goto block_230;
    case 12:                                        /* switch 1 */
        var_s1_9 = 1;
        do {
            temp_v0_9 = func_800B1260(var_s1_9);
            var_a0_2 = temp_v0_9 & 0xFFFF;
            if (var_a0_2 != 0xFFFF) {
                var_a0_2 = (s32) ((var_a0_2 * 0x79C) + D_80100F38);
                var_v0_2 = 1;
                if (M2C_FIELD(var_a0_2, u8 *, 0x3C3) != 1) {
                    var_v0_2 = M2C_FIELD(var_a0_2, u8 *, 0x3C4) == 1;
                }
                temp_v1_9 = temp_v0_9 & 0xFFFF;
                if (var_v0_2 != 0) {
                    temp_s0_8 = (temp_v1_9 * 0x79C) + D_80100F38;
                    temp_v0_10 = (temp_v1_9 * 0x1A8) + D_80091618;
                    M2C_FIELD(temp_v0_10, s16 *, 0x110) = 1;
                    M2C_FIELD(temp_v0_10, s32 *, 0x154) = (s32) (*D_8006AF84);
                    func_800C0E1C(var_s1_9, 4, ((u32) M2C_FIELD(temp_s0_8, u32 *, 0x798) >> 0x1A) & 0x1F);
                    var_a0_2 = 0xFFF03FFF;
                    M2C_FIELD(temp_s0_8, s16 *, 0x228) = 1;
                    M2C_FIELD(temp_s0_8, u32 *, 0x798) = (u32) ((M2C_FIELD(temp_s0_8, u32 *, 0x798) & 0xFFF03FFF) | 0x38000);
                }
            }
            var_s1_9 -= 1;
        } while (var_s1_9 >= 0);
        if (func_800E0DF8(var_a0_2) != 0) {
            func_800AC34C(6);
            var_v0 = 0xE;
        } else {
            goto block_228;
        }
        goto block_229;
    case 14:                                        /* switch 1 */
        func_800ACE80();
        temp_v0_11 = func_800AD0FC();
        (*D_800F2DA0) = temp_v0_11;
        if (temp_v0_11 != -1) {
            if (temp_v0_11 == 0) {
                if (func_800E0DF8() != 1) {
                    (*D_800EEBA8) = 2;
                    var_s1_10 = 1;
                    do {
                        temp_v1_10 = func_800B1260(var_s1_10) & 0xFFFF;
                        if (temp_v1_10 != 0xFFFF) {
                            temp_s0_9 = (temp_v1_10 * 0x79C) + D_80100F38;
                            temp_v1_11 = temp_s0_9 + (((u32) M2C_FIELD(temp_s0_9, u32 *, 0x798) >> 0x1A) & 0x1F);
                            if (M2C_FIELD(temp_v1_11, u8 *, 0x3AF) != 0) {
                                M2C_FIELD(temp_v1_11, u8 *, 0x3AF) = 0U;
                                temp_v1_12 = M2C_FIELD(temp_s0_9, void **, 0x18C);
                                M2C_FIELD(temp_v1_12, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v1_12, s32 *, 0x38) | 1);
                                M2C_FIELD(temp_s0_9, u32 *, 0x798) = (u32) ((M2C_FIELD(temp_s0_9, u32 *, 0x798) & 0xFFF03FFF) | 0x8000);
                            }
                        }
                        var_s1_10 -= 1;
                    } while (var_s1_10 >= 0);
                    func_800AC34C(7);
                    return 0;
                }
                goto block_230;
            }
            (*D_800EEBA8) = 2;
            var_s1_11 = 1;
            do {
                temp_v1_13 = func_800B1260(var_s1_11) & 0xFFFF;
                if (temp_v1_13 != 0xFFFF) {
                    temp_s0_10 = (temp_v1_13 * 0x79C) + D_80100F38;
                    M2C_FIELD(temp_s0_10, s32 *, 0x798) = (s32) ((M2C_FIELD(temp_s0_10, s32 *, 0x798) & 0xFFF03FFF) | 0x8000);
                }
                var_s1_11 -= 1;
            } while (var_s1_11 >= 0);
            goto block_106;
        }
        (*D_800EEBA8) = 3;
        (*D_800F2DB0) = 0xE;
        goto block_230;
    case 10:                                        /* switch 1 */
        var_s1_12 = 1;
        do {
            temp_s0_11 = func_800B1260(var_s1_12) & 0xFFFF;
            if (temp_s0_11 != 0xFFFF) {
                if (func_800E1820(temp_s0_11) == 0) {
                    if (func_800E17F8(temp_s0_11) != 0) {
                        if (func_800E16AC(temp_s0_11) != 1) {
                            if (func_800E14C4(temp_s0_11) != 1) {
                                if (func_800E1624(temp_s0_11) != 1) {
                                    if (func_800E1594(temp_s0_11) != 1) {
                                        if (func_800E1140(temp_s0_11) != 0) {
                                            if (func_800E1388(temp_s0_11) != 0) {
                                                temp_a2 = (temp_s0_11 * 0x1A8) + D_80091618;
                                                if ((((u32) M2C_FIELD(((M2C_FIELD(temp_a2, u16 *, 0) * 0x3C) + D_80063940), u32 *, 8) >> 0xE) & 7) != 4) {
                                                    M2C_FIELD(temp_a2, s32 *, 0x154) = (s32) (*D_8006AF84);
                                                    M2C_FIELD(((temp_s0_11 * 0x79C) + D_80100F38 + (*D_800F1924)), s8 *, 0x3AB) = 1;
                                                    func_800C0E1C(var_s1_12, 3, (s16) (*D_800F1924));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            var_s1_12 -= 1;
        } while (var_s1_12 >= 0);
        var_v0 = 0xB;
        goto block_229;
    case 11:                                        /* switch 1 */
        func_800ACE80();
        temp_v1_14 = *(((*D_800F1924) * 2) + D_8006B1AA);
        var_s1_13 = 1;
        if ((*D_80078C34) != temp_v1_14) {
            func_800282A0(temp_v1_14);
            var_s1_13 = 1;
        }
        do {
            temp_v1_15 = func_800B1260(var_s1_13) & 0xFFFF;
            if (temp_v1_15 != 0xFFFF) {
                M2C_FIELD(((temp_v1_15 * 0x79C) + D_80100F38 + (*D_800F1924)), s8 *, 0x3AB) = 0;
            }
            var_s1_13 -= 1;
        } while (var_s1_13 >= 0);
block_197:
        (*D_800EEBA8) = 2;
block_198:
        if ((*D_800F2DB0) != 6) {
            if ((*D_800F2DB0) != 9) {
                if ((*D_800F2DB0) == 0xE) {
                    goto block_201;
                }
            } else {
                goto block_201;
            }
        } else {
block_201:
            temp_a0_3 = (*D_800F2DB0);
            (*D_800F2DB0) = 2;
            (*D_800EEBA8) = temp_a0_3;
        }
        /* Duplicate return node #231. Try simplifying control flow for better match */
        return 0;
    case 34:                                        /* switch 1 */
        var_v0 = 0x23;
        goto block_229;
    case 15:                                        /* switch 1 */
        func_800B9BF4((*D_800F1924));
        (*D_800EEBA8) = 0x10;
        func_80034AB0(0x48);
        return 0;
    case 16:                                        /* switch 1 */
        func_800B9C08();
        func_800C0C40();
        func_800B70A0(0);
        if ((*D_800F1924) != 0x17) {
            if ((*D_800F1924) < 0x18) {
                if ((*D_800F1924) != 0x16) {
                    return 0;
                }
                (*D_8008F703) = 0;
                var_v0 = 0x11;
                goto block_229;
            }
            switch ((*D_800F1924)) {                   /* switch 3; irregular */
            case 24:                                /* switch 3 */
                func_80012604(0);
                (*D_800EFA50) = 0;
                var_v0 = 0x19;
                goto block_229;
            case 25:                                /* switch 3 */
                func_80012604(0);
                (*D_800EFA50) = 0;
                var_v0 = 0x1D;
                goto block_229;
            default:                                /* switch 3 */
                return 0;
            }
        } else {
            var_v0 = 0x15;
            goto block_229;
        }
        break;
    case 17:                                        /* switch 1 */
        func_800B8DDC();
        var_v0 = 0x12;
        goto block_229;
    case 18:                                        /* switch 1 */
        if (func_800B8E04() != 0) {
            (*D_800EEBA8) = 0x13;
            return -5;
        }
        goto block_230;
    case 19:                                        /* switch 1 */
        if (func_800B8E24() != 0) {
            var_v0 = 0x14;
            goto block_229;
        }
        goto block_230;
    case 20:                                        /* switch 1 */
        if (func_800B8E2C() != 0) {
            var_v0 = 0x21;
            goto block_229;
        }
        goto block_230;
    case 21:                                        /* switch 1 */
        if (func_800B8FAC() != 0) {
            var_v0 = 0x16;
            goto block_229;
        }
        goto block_230;
    case 22:                                        /* switch 1 */
        if (func_800B91C8() != 0) {
            var_v0 = 0x17;
            goto block_229;
        }
        goto block_230;
    case 23:                                        /* switch 1 */
        if (func_800B9284() != 0) {
            var_v0 = 0x18;
            goto block_229;
        }
        goto block_230;
    case 24:                                        /* switch 1 */
        if (func_800B9334() != 0) {
            var_v0 = 0x21;
            goto block_229;
        }
        goto block_230;
    case 25:                                        /* switch 1 */
        func_800B94B4();
        (*D_800EEBA8) = 0x1A;
        if (func_800D1548() != 0) {
            func_800B89F4(1);
            return 0;
        }
        /* Duplicate return node #231. Try simplifying control flow for better match */
        return 0;
    case 26:                                        /* switch 1 */
        if (func_800D1548() != 0) {
            var_v0_3 = 3;
            goto block_165;
        }
        if ((*D_80100E60) == 0) {
            temp_v0_12 = func_8009B4DC();
            (*D_800F2DA0) = temp_v0_12;
            if (temp_v0_12 == -1) {
                var_v0 = 0x1C;
                goto block_229;
            }
            if (temp_v0_12 != 0) {
                var_v0_3 = temp_v0_12 - 1;
block_165:
                M2C_FIELD(D_800EEB9C, s32 *, 0x73C) = var_v0_3;
                func_800B94D4();
                func_80034AB0(0x48);
                M2C_FIELD(D_800EEB9C, s32 *, 0xC) = 0x1B;
                return -3;
            }
            goto block_230;
        }
        /* Duplicate return node #231. Try simplifying control flow for better match */
        return 0;
    case 27:                                        /* switch 1 */
        if (func_800B95AC() != 0) {
            func_80034AB0(0x1B);
            var_v0 = 0x1C;
            goto block_229;
        }
        /* Duplicate return node #231. Try simplifying control flow for better match */
        return 0;
    case 28:                                        /* switch 1 */
        if (func_800B9610() != 0) {
            M2C_FIELD(D_800EEB9C, s32 *, 8) = 0;
            M2C_FIELD(D_800EEB9C, s32 *, 0xC) = 0x21;
        }
        goto block_230;
    case 29:                                        /* switch 1 */
        if (func_800D1548() != 0) {
            func_800B980C();
            func_80034AB0(0x70);
            var_v0 = 0x1E;
            goto block_229;
        }
        if ((*D_80100E60) == 0) {
            temp_v0_13 = func_8009B800();
            (*D_800F2DA0) = temp_v0_13;
            if (temp_v0_13 == -1) {
                var_v0 = 0x21;
                goto block_229;
            }
            if (temp_v0_13 != 0) {
                func_800B980C(temp_v0_13);
                func_80034AB0(0x70);
                var_v0 = 0x1E;
                goto block_229;
            }
        }
        /* Duplicate return node #231. Try simplifying control flow for better match */
        return 0;
    case 30:                                        /* switch 1 */
        if (func_800B98AC() != 0) {
            var_v0 = 0x1F;
            goto block_229;
        }
        goto block_230;
    case 31:                                        /* switch 1 */
        if (func_800B9914() != 0) {
            var_v0 = 0x20;
            goto block_229;
        }
        goto block_230;
    case 32:                                        /* switch 1 */
        if (func_800B9B2C() != 0) {
            M2C_FIELD(D_800EEB9C, s32 *, 0xC) = 0x21;
            M2C_FIELD(D_800EEB9C, s32 *, 0x73C) = (s32) (*D_8006AF80);
        }
        goto block_230;
    case 33:                                        /* switch 1 */
        if (func_800B9C10() != 0) {
            (*D_8008F703) = 0;
            (*D_800EEBA8) = 2;
            func_800B70A0(1);
            goto block_198;
        }
        /* Duplicate return node #231. Try simplifying control flow for better match */
        return 0;
    case 36:                                        /* switch 1 */
        temp_v0_14 = func_800AEF38((*D_800F1924));
        (*D_800F2DA0) = temp_v0_14;
        if (temp_v0_14 == -1) {
            var_s1_14 = 1;
            do {
                temp_v1_16 = func_800B1260(var_s1_14) & 0xFFFF;
                if (temp_v1_16 != 0xFFFF) {
                    if (M2C_FIELD(((temp_v1_16 * 0x1A8) + D_80091618), u16 *, 0x10) != 0xFFFF) {
                        func_800D8CCC(var_s1_14);
                        func_800C60E0(var_s1_14, 0);
                        func_800C62A4(var_s1_14, 0);
                        func_800C5EFC(var_s1_14, 0);
                    }
                }
                var_s1_14 -= 1;
            } while (var_s1_14 >= 0);
            (*D_8008F703) = 0;
            (*D_800EEBA8) = 0;
            func_8009BA40();
            return -1;
        }
        var_v0 = 0x25;
        goto block_229;
    case 37:                                        /* switch 1 */
        (*D_800EEA88) = 1;
        func_800D10A8();
        (*D_800EEBA8) = 0x26;
        func_8002E708();
        return 0;
    case 38:                                        /* switch 1 */
        temp_v0_15 = func_8002E714();
        (*D_800F2DA0) = temp_v0_15;
        if (temp_v0_15 == 4) {
            (*D_800EEA88) = 0;
            func_800D1134();
            func_800B6014();
            var_v0 = 0x27;
            goto block_229;
        }
        goto block_230;
    case 39:                                        /* switch 1 */
        (*D_8008F703) = 0;
        goto block_197;
    case 40:                                        /* switch 1 */
        func_800ACE80();
        func_800B2094((*D_800F2DA4));
        var_v0 = 0x29;
        goto block_229;
    case 41:                                        /* switch 1 */
        func_800ACE80();
        if ((*D_800F2DA4) != 1) {
            if ((*D_800F2DA4) != 3) {
                var_v0 = 0x2B;
                goto block_229;
            }
            if (func_800D1548() != 0) {
                (*D_800EEBA8) = 0x2B;
                (*D_800EEB6C) = 0;
            } else if ((*D_800EEB6C) == 1) {
                var_v0 = 0x2A;
                goto block_229;
            }
        } else if (func_800D1548() != 0) {
            (*D_800EEBA8) = 0x2B;
            (*D_800EEB64) = 0;
        } else if ((*D_800EEB64) == 1) {
            if ((*D_8006AFA4) > 0) {
                var_v0 = 0x2A;
                goto block_229;
            }
            (*D_800EEBA8) = 0x2B;
            (*D_800EEB64) = 0;
        }
        /* Duplicate return node #231. Try simplifying control flow for better match */
        return 0;
    case 42:                                        /* switch 1 */
        func_800ACE80();
        if ((*D_80100E60) == 0) {
            switch ((*D_800F2DA4)) {                   /* switch 4; irregular */
            case 1:                                 /* switch 4 */
                if (func_800B2EA4(1) != 0) {
                    (*D_800EEB64) = 0;
                    var_v0 = 0x2B;
                    goto block_229;
                }
                goto block_230;
            case 3:                                 /* switch 4 */
                temp_s0_12 = (*D_800EEB6C);
                if (temp_s0_12 == 1) {
                    if (func_800B1EBC(1) == temp_s0_12) {
                        var_v0 = 0x2B;
                        (*D_800EEB6C) = 0;
                        goto block_229;
                    }
                }
                /* Duplicate return node #231. Try simplifying control flow for better match */
                return 0;
            default:                                /* switch 4 */
                return 0;
            }
        } else {
            /* Duplicate return node #231. Try simplifying control flow for better match */
            return 0;
        }
        break;
    case 43:                                        /* switch 1 */
        func_800ACE80();
        func_800B209C((*D_800F2DA4));
        var_v0 = 0x2C;
        goto block_229;
    case 44:                                        /* switch 1 */
        func_800ACE80();
        /* fallthrough */
    case 35:                                        /* switch 1 */
        goto block_228;
    }
}
