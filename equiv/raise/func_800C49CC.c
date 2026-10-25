#include "common.h"

s32 func_800C49CC(void *arg0, s32 arg1) {
    extern u8 D_80063940[];
    extern s32 D_8008ED80[];
    extern u8 D_80091618[];
    extern u8 D_800EE9B8[];
    extern s16 D_800F0750[];
    extern s16 D_800F0758[];
    extern u8 D_80100F38[];
    s32 sp18;
    s32 sp1C;
    u8 *var_v1_2;
    s16 temp_s0;
    s16 temp_s1_3;
    s16 temp_s1_4;
    s16 temp_s3;
    s16 temp_v0_6;
    s16 temp_v0_7;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s16 var_a2_2;
    s16 var_a2_3;
    s16 var_a2_4;
    s32 temp_lo;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_8;
    s32 var_a2;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_v0;
    s32 var_v1;
    u16 *temp_a1;
    u16 *temp_s1_2;
    u16 var_a1;
    u16 var_s0;
    void *temp_s2;
    void *temp_v0_3;

    temp_v0 = func_800B1260(arg1);
    temp_s1 = temp_v0 & 0xFFFF;
    temp_s2 = (temp_s1 * 0x79C) + D_80100F38;
    sp18 = (s32) M2C_FIELD(temp_s2, s16 *, 0x332);
    sp1C = (s32) M2C_FIELD(temp_s2, s16 *, 0x334);
    temp_s3 = M2C_FIELD(temp_s2, s16 *, 0x344);
    switch (temp_s3) {                              /* switch 3; irregular */
    case 0:                                         /* switch 3 */
        M2C_FIELD(temp_s2, s16 *, 0x344) = 1;
        if (M2C_FIELD(temp_s2, s16 *, 0x37E) == 0) {
            temp_v0_2 = func_800D2BB8(arg1);
            if ((temp_v0_2 < 3) && (temp_v0_2 > 0)) {
                if (M2C_FIELD(temp_s2, s16 *, 0x228) != 1) {
                    temp_v0_3 = (temp_s1 * 0x1A8) + D_80091618;
                    M2C_FIELD(temp_v0_3, s32 *, 0xA4) = (s32) M2C_FIELD(temp_s2, s16 *, 0x332);
                    M2C_FIELD(temp_v0_3, s32 *, 0xA8) = (s32) M2C_FIELD(temp_s2, s16 *, 0x334);
                    temp_v0_4 = func_800202A4(8);
                    var_v0 = temp_v0_4 >> 3;
                    if (temp_v0_4 < 0) {
                        var_v0 = (s32) (temp_v0_4 + 7) >> 3;
                    }
                    M2C_FIELD(temp_s2, s16 *, 0x326) = (s16) (temp_v0_4 - (var_v0 * 8));
                    if ((func_800D2B34(arg1) == 1) && (func_800D2FB0(arg1, M2C_FIELD(temp_s2, s16 *, 0x326)) < 0)) {
                        var_v1 = 1 - arg1;
                        if (temp_v0_2 == 1) {
                            M2C_FIELD(temp_s2, s32 *, 0x798) = (s32) ((M2C_FIELD(temp_s2, s32 *, 0x798) & ~3) | 1);
                            var_v1 = 1 - arg1;
                        }
                        M2C_FIELD(temp_s2, s16 *, 0x37E) = 1;
                        *((var_v1 * 4) + D_800EE9B8) = 0;
                        M2C_FIELD(temp_s2, s16 *, 0x380) = 0;
                    }
                }
            }
        }
        func_800CE638(arg0, arg1);
        break;
    case 1:                                         /* switch 3 */
        M2C_FIELD(temp_s2, s16 *, 0x344) = 2;
        M2C_FIELD(temp_s2, s16 *, 0x342) = 0;
        func_800CE638(arg0, arg1);
        break;
    case 2:                                         /* switch 3 */
        temp_s0 = M2C_FIELD(temp_s2, s16 *, 0x342);
        switch (temp_s0) {                          /* switch 4; irregular */
        default:                                    /* switch 4 */
            if (temp_s0 != temp_s3) {
                if (temp_s0 != 3) {

                } else {
                    func_800CE638(arg0, arg1);
                    if (M2C_FIELD(temp_s2, s16 *, 0x328) <= 0) {
                        func_80025EF8(arg1);
                        M2C_FIELD(temp_s2, s16 *, 0x342) = 0;
                        M2C_FIELD(temp_s2, s16 *, 0x344) = temp_s0;
                        *(((1 - arg1) * 4) + D_800EE9B8) = 0;
                        func_800D0730(temp_s2 + 0x1CC, (s16) ((u16) M2C_FIELD(temp_s2, s16 *, 0x336) - 1), (s16) ((u16) M2C_FIELD(temp_s2, s16 *, 0x338) - 1), 0);
                    } else {
                        M2C_FIELD(temp_s2, s16 *, 0x328) = (s16) ((u16) M2C_FIELD(temp_s2, s16 *, 0x328) - 1);
                    }
                }
            } else {
                func_800CEAC0(arg0, arg1, sp18, sp1C, (s32) M2C_FIELD(temp_s2, s16 *, 0x336), (s32) M2C_FIELD(temp_s2, s16 *, 0x338));
                temp_v1 = M2C_FIELD(temp_s2, s16 *, 0x37E);
                if (temp_v1 == 1) {
                    temp_s1_2 = (temp_s1 * 0x1A8) + D_80091618;
                    var_s0 = *temp_s1_2;
                    if (((M2C_FIELD(temp_s2, s16 *, 0x380) != 0) || (func_800D2B34(arg1) != 1)) && ((M2C_FIELD(temp_s2, s16 *, 0x380) != (M2C_FIELD(temp_s2, s16 *, 0x382) - 1)) || (func_800D2B34(arg1) != 1))) {
                        if (M2C_FIELD(arg0, u16 *, 0x20) == ((M2C_FIELD(((var_s0 * 0x3C) + D_80063940), s32 *, 0x24) & 0x1F) - 2)) {
                            var_v1_2 = D_80063940;
                            if (M2C_FIELD(arg0, s16 *, 0x24) == 0) {
                                var_a1 = *temp_s1_2;
                                goto block_112;
                            }
                            goto block_109;
                        }
                        goto block_108;
                    }
                } else if (temp_v1 == 3) {
                    temp_a1 = (temp_s1 * 0x1A8) + D_80091618;
                    var_s0 = *temp_a1;
                    if (M2C_FIELD(arg0, u16 *, 0x20) == ((M2C_FIELD(((var_s0 * 0x3C) + D_80063940), s32 *, 0x24) & 0x1F) - 2)) {
                        var_v1_2 = D_80063940;
                        if (M2C_FIELD(arg0, s16 *, 0x24) == 0) {
                            var_a1 = *temp_a1;
                            goto block_112;
                        }
                        goto block_109;
                    }
block_108:
                    var_v1_2 = D_80063940;
block_109:
                    if ((M2C_FIELD(arg0, u16 *, 0x20) == ((((u32) M2C_FIELD(((var_s0 * 0x3C) + var_v1_2), u32 *, 0x24) >> 5) & 0x1F) - 2)) && (M2C_FIELD(arg0, s16 *, 0x24) == 0)) {
                        var_a1 = *(((temp_v0 & 0xFFFF) * 0x1A8) + D_80091618);
block_112:
                        func_800CC1FC(arg1, var_a1, 0);
                    }
                }
                if (M2C_FIELD(temp_s2, s16 *, 0x328) <= 0) {
                    temp_s1_3 = M2C_FIELD(temp_s2, s16 *, 0x37E);
                    if ((temp_s1_3 == 1) && (M2C_FIELD(temp_s2, s16 *, 0x380) == 0)) {
                        temp_v0_5 = func_800D2B34(arg1);
                        if ((temp_v0_5 == temp_s1_3) && (func_800D2BB8(arg1) == temp_v0_5)) {
                            func_80034AB0(0x4B);
                        }
                    }
                    func_800CF290(arg1);
                    M2C_FIELD(temp_s2, s16 *, 0x328) = 1;
                    M2C_FIELD(temp_s2, s16 *, 0x220) = 1;
                    M2C_FIELD(temp_s2, s16 *, 0x342) = 3;
                } else {
                    M2C_FIELD(temp_s2, s16 *, 0x328) = (s16) ((u16) M2C_FIELD(temp_s2, s16 *, 0x328) - 1);
                    func_800CF13C(arg1);
                }
            }
            break;
        case 0:                                     /* switch 4 */
            func_800CEC68(arg1, sp18, sp1C);
            M2C_FIELD(temp_s2, u16 *, 0x324) = (u16) M2C_FIELD(temp_s2, s16 *, 0x326);
            M2C_FIELD(temp_s2, u16 *, 0x32A) = (u16) M2C_FIELD(temp_s2, u16 *, 0x32C);
            if (M2C_FIELD(temp_s2, s16 *, 0x37E) == 1) {
                temp_v1_2 = M2C_FIELD(temp_s2, s16 *, 0x326);
                switch (temp_v1_2) {                /* switch 1 */
                case 0:                             /* switch 1 */
                    var_s1 = 1;
                    var_s0_2 = 0;
                    break;
                case 1:                             /* switch 1 */
                    var_s1 = 1;
                    var_s0_2 = -1;
                    break;
                case 2:                             /* switch 1 */
                    var_s1 = 0;
                    var_s0_2 = -1;
                    break;
                case 3:                             /* switch 1 */
                    var_s1 = -1;
                    var_s0_2 = -1;
                    break;
                case 4:                             /* switch 1 */
                    var_s1 = -1;
                    var_s0_2 = 0;
                    break;
                case 5:                             /* switch 1 */
                    var_s1 = -1;
block_38:
                    var_s0_2 = 1;
                    break;
                case 6:                             /* switch 1 */
                    var_s1 = 0;
                    goto block_38;
                default:                            /* switch 1 */
                    var_s1 = 1;
                    goto block_38;
                }
                M2C_FIELD(temp_s2, s16 *, 0x336) = (s16) ((u16) M2C_FIELD(temp_s2, s16 *, 0x332) + var_s1);
                M2C_FIELD(temp_s2, s16 *, 0x338) = (s16) ((u16) M2C_FIELD(temp_s2, s16 *, 0x334) + var_s0_2);
                func_800DCC94(arg1);
                *(((1 - arg1) * 4) + D_800EE9B8) = 0;
                goto block_43;
            }
            temp_v0_6 = func_800CF304(arg1);
            M2C_FIELD(temp_s2, s16 *, 0x326) = temp_v0_6;
            if (temp_v0_6 == -1) {
                M2C_FIELD(temp_s2, s16 *, 0x342) = 3;
                M2C_FIELD(temp_s2, s16 *, 0x326) = (s16) M2C_FIELD(temp_s2, u16 *, 0x324);
                func_800CE638(arg0, arg1);
            } else {
                M2C_FIELD(temp_s2, u16 *, 0x32C) = func_800CF4BC(arg1, temp_v0_6, 1);
block_43:
                M2C_FIELD(temp_s2, s16 *, 0x328) = func_800D06D4((s16) M2C_FIELD(temp_s2, u16 *, 0x324), M2C_FIELD(temp_s2, s16 *, 0x326));
                M2C_FIELD(temp_s2, s16 *, 0x342) = 1;
                func_800CE638(arg0, arg1);
                func_800CDFDC(arg1);
            }
            break;
        case 1:                                     /* switch 4 */
            temp_s1_4 = (*D_8008ED80) & 3;
            if (temp_s1_4 == 3) {
                if (M2C_FIELD(temp_s2, s16 *, 0x37E) == 1) {
                    if (M2C_FIELD(temp_s2, s16 *, 0x328) == 0) {
                        temp_v1_3 = M2C_FIELD(temp_s2, s16 *, 0x380);
                        if (temp_v1_3 == 0) {
                            if ((func_800D2B34(arg1) == 1) && (func_800D2BB8(arg1) == 1)) {
                                var_a2 = (*D_800F0758) + func_800CE128(M2C_FIELD(temp_s2, s16 *, 0x326));
                            } else {
                                goto block_73;
                            }
                        } else if (temp_v1_3 == (M2C_FIELD(temp_s2, s16 *, 0x382) - 1)) {
                            if (func_800D3948(arg1) == -1) {
                                if (func_800D2B34(arg1) == 1) {
                                    if (func_800D2BB8(arg1) == 1) {
                                        var_a2 = (*D_800F0758) + func_800CE128(M2C_FIELD(temp_s2, s16 *, 0x326));
                                    } else {
                                        goto block_73;
                                    }
                                } else if (func_800D2BB8(arg1) == 1) {
                                    var_a2 = (*D_800F0758) + func_800CE128(M2C_FIELD(temp_s2, s16 *, 0x326));
                                } else {
                                    goto block_73;
                                }
                            } else {
                                temp_v0_7 = func_800D3CB0(arg1);
                                M2C_FIELD(temp_s2, s16 *, 0x326) = temp_v0_7;
                                switch (temp_v0_7) { /* switch 2 */
                                case 0:             /* switch 2 */
                                    var_s1_2 = 1;
                                    var_s0_3 = 0;
                                    break;
                                case 1:             /* switch 2 */
                                    var_s1_2 = 1;
                                    var_s0_3 = -1;
                                    break;
                                case 2:             /* switch 2 */
                                    var_s1_2 = 0;
                                    var_s0_3 = -1;
                                    break;
                                case 3:             /* switch 2 */
                                    var_s1_2 = -1;
                                    var_s0_3 = -1;
                                    break;
                                case 4:             /* switch 2 */
                                    var_s1_2 = -1;
                                    var_s0_3 = 0;
                                    break;
                                case 5:             /* switch 2 */
                                    var_s1_2 = -1;
block_68:
                                    var_s0_3 = 1;
                                    break;
                                case 6:             /* switch 2 */
                                    var_s1_2 = 0;
                                    goto block_68;
                                default:            /* switch 2 */
                                    var_s1_2 = 1;
                                    goto block_68;
                                }
                                M2C_FIELD(temp_s2, s16 *, 0x336) = (s16) ((u16) M2C_FIELD(temp_s2, s16 *, 0x332) + var_s1_2);
                                M2C_FIELD(temp_s2, s16 *, 0x338) = (s16) ((u16) M2C_FIELD(temp_s2, s16 *, 0x334) + var_s0_3);
                                func_800DCC94(arg1);
                                if (func_800D3F88(arg1, var_s1_2, var_s0_3) == 0xFF) {
                                    M2C_FIELD(temp_s2, s16 *, 0x382) = (s16) ((u16) M2C_FIELD(temp_s2, s16 *, 0x382) + 1);
                                    if (func_800D2BB8(arg1) == 1) {
                                        var_a2 = (*D_800F0758) + func_800CE128(M2C_FIELD(temp_s2, s16 *, 0x326));
                                    } else {
                                        goto block_73;
                                    }
                                } else {
                                    var_a2 = (*D_800F0758) + func_800CE128(M2C_FIELD(temp_s2, s16 *, 0x326));
                                }
                            }
                        } else {
block_73:
                            var_a2_2 = M2C_FIELD(temp_s2, s16 *, 0x326);
                            if (var_a2_2 < 0) {
                                var_a2_2 += 3;
                            }
                            var_a2 = (*D_800F0750) + (var_a2_2 >> 2);
                        }
                        func_800CE4B8(arg1, arg0, var_a2, 0);
                        goto block_92;
                    }
                    goto block_93;
                }
                if (M2C_FIELD(temp_s2, s16 *, 0x328) == 0) {
                    if (func_800D2B34(arg1) == 1) {
                        temp_v0_8 = func_800D2BB8(arg1);
                        if (temp_v0_8 != 1) {
                            if (temp_v0_8 == temp_s3) {
                                var_a2_3 = M2C_FIELD(temp_s2, s16 *, 0x326);
                                if (var_a2_3 < 0) {
                                    var_a2_3 += 3;
                                }
                                func_800CE4B8(arg1, arg0, (*D_800F0750) + (var_a2_3 >> 2), 0);
                                M2C_FIELD(temp_s2, s16 *, 0x37E) = temp_s1_4;
                            } else {
                                if (func_800D28D0(arg1) == 0) {
                                    if (func_800D297C(arg1) == 0) {
                                        goto block_87;
                                    }
                                    goto block_91;
                                }
block_87:
                                var_a2_4 = M2C_FIELD(temp_s2, s16 *, 0x326);
                                if (var_a2_4 < 0) {
                                    var_a2_4 += 3;
                                }
                                func_800CE4B8(arg1, arg0, (*D_800F0750) + (var_a2_4 >> 2), 0);
                                M2C_FIELD(temp_s2, s16 *, 0x37E) = 3;
                            }
                        } else {
                            goto block_91;
                        }
                    } else {
block_91:
                        func_800CE380(arg1, arg0);
                    }
block_92:
                    temp_lo = 0x32 / (s32) (M2C_FIELD(temp_s2, s16 *, 0x374) + 1);
                    M2C_FIELD(temp_s2, s16 *, 0x328) = (s16) temp_lo;
                    M2C_FIELD(temp_s2, s16 *, 0x220) = (s16) temp_lo;
                    func_800CED80(arg1, (s16) M2C_FIELD(temp_s2, u16 *, 0x32A), (s16) M2C_FIELD(temp_s2, u16 *, 0x32C));
                    M2C_FIELD(temp_s2, s16 *, 0x342) = 2;
                } else {
block_93:
                    func_800CE164(arg1);
                    func_800CE204(arg1, arg0);
                }
            }
            func_800CE87C(arg0, arg1, sp18, sp1C);
            break;
        }
        break;
    default:                                        /* switch 3 */
        func_800CE638(arg0, arg1);
        temp_v1_4 = M2C_FIELD(temp_s2, s16 *, 0x37E);
        M2C_FIELD(temp_s2, s16 *, 0x344) = 0;
        if (temp_v1_4 == 1) {
            if (M2C_FIELD(temp_s2, s16 *, 0x380) == (M2C_FIELD(temp_s2, s16 *, 0x382) - 1)) {
                M2C_FIELD(temp_s2, s16 *, 0x37E) = 0;
                M2C_FIELD(temp_s2, s32 *, 0x798) = (s32) ((M2C_FIELD(temp_s2, s32 *, 0x798) & ~3) | 2);
            } else {
                M2C_FIELD(temp_s2, s16 *, 0x380) = (s16) ((u16) M2C_FIELD(temp_s2, s16 *, 0x380) + 1);
            }
        } else if (temp_v1_4 == 3) {
            M2C_FIELD(temp_s2, s16 *, 0x37E) = 0;
        }
        if (M2C_FIELD(temp_s2, s16 *, 0x37E) == 0) {
            M2C_FIELD(temp_s2, s32 *, 0x2BC) = (s32) (M2C_FIELD(temp_s2, s32 *, 0x2BC) + 1);
        }
        break;
    }
    return M2C_FIELD(temp_s2, s32 *, 0x2BC);
}
