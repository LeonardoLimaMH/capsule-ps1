#include "common.h"

s32 func_800C9C5C(void *arg0, s32 arg1) {
    extern u8 D_80063940[];
    extern s32 D_8008ED80[];
    extern u8 D_80091618[];
    extern u8 D_800EE9B8[];
    extern s16 D_800F0748[];
    extern s16 D_800F0750[];
    extern u8 D_80100F38[];
    s16 temp_a0;
    s16 temp_a1;
    s16 temp_s3;
    s16 temp_s4;
    s16 temp_s5;
    s16 temp_s7;
    s16 temp_v0_5;
    s16 temp_v0_7;
    s16 temp_v0_8;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s16 temp_v1_5;
    s16 var_a2;
    s16 var_v0_2;
    s16 var_v0_4;
    s16 var_v1;
    u32 temp_a0_4;
    u32 temp_a3;
    u32 temp_lo;
    u32 temp_lo_2;
    u32 temp_v0;
    u32 temp_v0_2;
    u32 temp_v0_3;
    u32 temp_v0_4;
    s32 var_a1;
    s32 var_a2_2;
    s32 var_v0;
    u16 *temp_a1_2;
    u16 temp_a0_2;
    u16 temp_a0_3;
    u16 temp_a0_5;
    u16 var_a1_2;
    u16 var_v0_3;
    void *temp_s0;
    void *temp_v0_6;
    void *var_a0;

    temp_v0 = func_800B1260(arg1);
    temp_a3 = temp_v0 & 0xFFFF;
    temp_s0 = (temp_a3 * 0x79C) + D_80100F38;
    temp_s3 = M2C_FIELD(temp_s0, s16 *, 0x336);
    temp_s4 = (s16) M2C_FIELD(temp_s0, u16 *, 0x332);
    temp_s5 = M2C_FIELD(temp_s0, s16 *, 0x334);
    temp_v1 = M2C_FIELD(temp_s0, s16 *, 0x344);
    temp_s7 = M2C_FIELD(temp_s0, s16 *, 0x338);
    switch (temp_v1) {                              /* switch 3; irregular */
    case 0:                                         /* switch 3 */
        M2C_FIELD(temp_s0, u16 *, 0x32E) = (u16) M2C_FIELD(temp_s0, u16 *, 0x332);
        M2C_FIELD(temp_s0, u16 *, 0x330) = (u16) M2C_FIELD(temp_s0, s16 *, 0x334);
        M2C_FIELD(temp_s0, s16 *, 0x344) = 1;
        M2C_FIELD(temp_s0, s32 *, 0x798) = (s32) ((M2C_FIELD(temp_s0, s32 *, 0x798) & 0x7FFFFFFF) | (M2C_FIELD(((temp_a3 * 0x1A8) + D_80091618), u16 *, 0x90) << 0x1F));
        func_800CE638(arg0, arg1, 0x7FFFFFFF, temp_a3);
        temp_v0_2 = func_800D2E90(arg1);
        if ((temp_v0_2 < 3) && (temp_v0_2 > 0)) {
            temp_v0_3 = func_800202A4(8);
            var_v0 = temp_v0_3 >> 3;
            if (temp_v0_3 < 0) {
                var_v0 = (s32) (temp_v0_3 + 7) >> 3;
            }
            M2C_FIELD(temp_s0, s16 *, 0x326) = (s16) (temp_v0_3 - (var_v0 * 8));
            if (func_800D2B34(arg1) == 1) {
                if (func_800D324C(arg1, M2C_FIELD(temp_s0, s16 *, 0x326)) < 0) {
                    M2C_FIELD(temp_s0, s16 *, 0x37E) = 1;
                    *(((1 - arg1) * 4) + D_800EE9B8) = 0;
                } else {
                    goto block_107;
                }
            } else if (func_800D324C(arg1, M2C_FIELD(temp_s0, s16 *, 0x326)) < 0) {
                M2C_FIELD(temp_s0, s16 *, 0x37E) = 2;
                *(((1 - arg1) * 4) + D_800EE9B8) = 0;
            } else {
                goto block_107;
            }
        } else if ((func_800202A4(8) + (*D_8008ED80)) & 1) {
            temp_v0_4 = func_800202A4(8);
            var_a1 = temp_v0_4;
            if (temp_v0_4 < 0) {
                var_a1 = temp_v0_4 + 7;
            }
            temp_a1 = temp_v0_4 - ((var_a1 >> 3) * 8);
            M2C_FIELD(temp_s0, s16 *, 0x326) = temp_a1;
            if (func_800D324C(arg1, temp_a1) < 0) {
                M2C_FIELD(temp_s0, s16 *, 0x37E) = 2;
                *(((1 - arg1) * 4) + D_800EE9B8) = 0;
            } else {
block_107:
                M2C_FIELD(temp_s0, s16 *, 0x37E) = 0;
            }
        }
        break;
    case 1:                                         /* switch 3 */
        M2C_FIELD(temp_s0, s16 *, 0x344) = 2;
        M2C_FIELD(temp_s0, s16 *, 0x342) = 0;
        func_800CE638(arg0, arg1);
        break;
    case 2:                                         /* switch 3 */
        temp_v1_2 = M2C_FIELD(temp_s0, s16 *, 0x342);
        switch (temp_v1_2) {                        /* switch 1 */
        case 0:                                     /* switch 1 */
            func_800CEC68(arg1, temp_s4, temp_s5, temp_a3);
            func_800CECEC(arg1, temp_s4, temp_s5);
            temp_a0 = M2C_FIELD(temp_s0, s16 *, 0x37E);
            M2C_FIELD(temp_s0, u16 *, 0x324) = (u16) M2C_FIELD(temp_s0, s16 *, 0x326);
            M2C_FIELD(temp_s0, u16 *, 0x32A) = (u16) M2C_FIELD(temp_s0, u16 *, 0x32C);
            if ((temp_a0 == 0) || (temp_a0 == 3)) {
                temp_v0_5 = func_800CF304(arg1);
                M2C_FIELD(temp_s0, s16 *, 0x326) = temp_v0_5;
                if (temp_v0_5 == -1) {
                    M2C_FIELD(temp_s0, s16 *, 0x342) = 3;
                    M2C_FIELD(temp_s0, s16 *, 0x326) = (s16) M2C_FIELD(temp_s0, u16 *, 0x324);
                    func_800CE638(arg0, arg1);
                    func_800CE748(arg0, arg1);
                    if (M2C_FIELD(temp_s0, s16 *, 0x37E) == 3) {
                        M2C_FIELD(temp_s0, s16 *, 0x37E) = 0;
                    }
                } else {
                    M2C_FIELD(temp_s0, u16 *, 0x32C) = func_800CF4BC(arg1, temp_v0_5, 1);
                    func_800CE638(arg0, arg1);
                    func_800CE748(arg0, arg1);
                    goto block_43;
                }
            } else {
                temp_v1_3 = M2C_FIELD(temp_s0, s16 *, 0x326);
                switch (temp_v1_3) {                /* switch 2 */
                case 0:                             /* switch 2 */
                    var_v0_2 = M2C_FIELD(temp_s0, u16 *, 0x332) + M2C_FIELD(temp_s0, u16 *, 0x382);
block_36:
                    M2C_FIELD(temp_s0, s16 *, 0x336) = var_v0_2;
                    M2C_FIELD(temp_s0, s16 *, 0x338) = (s16) (u16) M2C_FIELD(temp_s0, s16 *, 0x334);
                    break;
                case 1:                             /* switch 2 */
                    temp_a0_2 = M2C_FIELD(temp_s0, u16 *, 0x382);
                    var_v0_3 = M2C_FIELD(temp_s0, u16 *, 0x332) + temp_a0_2;
                    var_v1 = (u16) M2C_FIELD(temp_s0, s16 *, 0x334) - temp_a0_2;
block_41:
                    M2C_FIELD(temp_s0, s16 *, 0x336) = (s16) var_v0_3;
                    M2C_FIELD(temp_s0, s16 *, 0x338) = var_v1;
                    break;
                case 2:                             /* switch 2 */
                    var_v0_3 = M2C_FIELD(temp_s0, u16 *, 0x332);
                    var_v1 = (u16) M2C_FIELD(temp_s0, s16 *, 0x334) - M2C_FIELD(temp_s0, u16 *, 0x382);
                    goto block_41;
                case 3:                             /* switch 2 */
                    temp_a0_3 = M2C_FIELD(temp_s0, u16 *, 0x382);
                    var_v0_3 = M2C_FIELD(temp_s0, u16 *, 0x332) - temp_a0_3;
                    var_v1 = (u16) M2C_FIELD(temp_s0, s16 *, 0x334) - temp_a0_3;
                    goto block_41;
                case 4:                             /* switch 2 */
                    var_v0_2 = M2C_FIELD(temp_s0, u16 *, 0x332) - M2C_FIELD(temp_s0, u16 *, 0x382);
                    goto block_36;
                case 5:                             /* switch 2 */
                    var_v0_3 = M2C_FIELD(temp_s0, u16 *, 0x332) - M2C_FIELD(temp_s0, u16 *, 0x382);
block_40:
                    var_v1 = (u16) M2C_FIELD(temp_s0, s16 *, 0x334) + M2C_FIELD(temp_s0, u16 *, 0x382);
                    goto block_41;
                case 6:                             /* switch 2 */
                    var_v0_3 = M2C_FIELD(temp_s0, u16 *, 0x332);
                    var_v1 = (u16) M2C_FIELD(temp_s0, s16 *, 0x334) + M2C_FIELD(temp_s0, u16 *, 0x382);
                    goto block_41;
                case 7:                             /* switch 2 */
                    var_v0_3 = M2C_FIELD(temp_s0, u16 *, 0x332) + M2C_FIELD(temp_s0, u16 *, 0x382);
                    goto block_40;
                }
                M2C_FIELD(temp_s0, u16 *, 0x32C) = (u16) ((u16) M2C_FIELD(temp_s0, s16 *, 0x338) + ((M2C_FIELD(temp_s0, s16 *, 0x336) * 8) - 9));
                *(((1 - arg1) * 4) + D_800EE9B8) = 0;
                func_800CE638(arg0, arg1);
                func_800CE6B0(arg0, arg1);
block_43:
                M2C_FIELD(temp_s0, s16 *, 0x328) = func_800D06D4((s16) M2C_FIELD(temp_s0, u16 *, 0x324), M2C_FIELD(temp_s0, s16 *, 0x326));
                M2C_FIELD(temp_s0, s16 *, 0x342) = 1;
                func_800CDFDC(arg1);
                temp_v0_6 = ((temp_v0 & 0xFFFF) * 0x1A8) + D_80091618;
                M2C_FIELD(temp_v0_6, s32 *, 0x54) = (s32) M2C_FIELD(temp_s0, s16 *, 0x336);
                M2C_FIELD(temp_v0_6, s32 *, 0x58) = (s32) M2C_FIELD(temp_s0, s16 *, 0x338);
            }
            break;
        case 1:                                     /* switch 1 */
            temp_a0_4 = (*D_8008ED80) & 3;
            if (temp_a0_4 == 3) {
                temp_v1_4 = M2C_FIELD(temp_s0, s16 *, 0x37E);
                if (temp_v1_4 < 3) {
                    if (temp_v1_4 <= 0) {
                        if (temp_v1_4 != 0) {

                        } else {
                            goto block_51;
                        }
                    } else {
                        if (M2C_FIELD(temp_s0, s16 *, 0x328) == 0) {
                            if (temp_v1_4 == 1) {
                                var_a2 = M2C_FIELD(temp_s0, s16 *, 0x326);
                                if (var_a2 < 0) {
                                    var_a2 += 3;
                                }
                                var_a2_2 = (*D_800F0750) + (var_a2 >> 2);
                            } else {
                                var_a2_2 = (*D_800F0748) + func_800CE128(M2C_FIELD(temp_s0, s16 *, 0x326));
                            }
                            func_800CE4B8(arg1, arg0, var_a2_2, 0);
                            M2C_FIELD(temp_s0, s16 *, 0x328) = 0x32;
                            M2C_FIELD(temp_s0, s16 *, 0x220) = 0x32;
                            func_800CED80(arg1, (s16) M2C_FIELD(temp_s0, u16 *, 0x32A), (s16) M2C_FIELD(temp_s0, u16 *, 0x32C));
                            func_800CEF08(arg1, (s16) M2C_FIELD(temp_s0, u16 *, 0x32A), (s16) M2C_FIELD(temp_s0, u16 *, 0x32C));
                            M2C_FIELD(temp_s0, s16 *, 0x342) = 2;
                        } else {
                            func_800CE164(arg1);
                            func_800CE204(arg1, arg0);
                        }
                        func_800CE87C(arg0, arg1, temp_s4, temp_s5);
                        func_800CE8F4(arg0, arg1, temp_s4, temp_s5);
                    }
                } else if (temp_v1_4 == temp_a0_4) {
block_51:
                    if (M2C_FIELD(temp_s0, s16 *, 0x37E) == 3) {
                        M2C_FIELD(temp_s0, s16 *, 0x37E) = 0;
                    }
                    if (M2C_FIELD(temp_s0, s16 *, 0x328) == 0) {
                        func_800CE380(arg1, arg0);
                        temp_lo = 0x32 / (s32) (M2C_FIELD(temp_s0, s16 *, 0x374) + 1);
                        M2C_FIELD(temp_s0, s16 *, 0x328) = (s16) temp_lo;
                        M2C_FIELD(temp_s0, s16 *, 0x220) = (s16) temp_lo;
                        func_800CED80(arg1, (s16) M2C_FIELD(temp_s0, u16 *, 0x32A), (s16) M2C_FIELD(temp_s0, u16 *, 0x32C));
                        func_800CEF08(arg1, (s16) M2C_FIELD(temp_s0, u16 *, 0x32A), (s16) M2C_FIELD(temp_s0, u16 *, 0x32C));
                        M2C_FIELD(temp_s0, s16 *, 0x342) = 2;
                    } else {
                        func_800CE164(arg1);
                        func_800CE204(arg1, arg0);
                    }
                    goto block_56;
                }
            } else {
block_56:
                func_800CE87C(arg0, arg1, temp_s4, temp_s5);
                func_800CE98C(arg0, arg1, temp_s4, temp_s5);
            }
            break;
        case 2:                                     /* switch 1 */
            temp_v1_5 = M2C_FIELD(temp_s0, s16 *, 0x37E);
            switch (temp_v1_5) {                    /* switch 4; irregular */
            case 0:                                 /* switch 4 */
                func_800CEAC0(arg0, arg1, temp_s4, temp_s5, (s32) temp_s3, (s32) temp_s7);
                func_800CEBD0(arg0, arg1, temp_s4, temp_s5, (s32) temp_s3, (s32) temp_s7);
                if (M2C_FIELD(temp_s0, s16 *, 0x328) <= 0) {
                    func_800CF290(arg1);
                    func_800CF2E4(arg1);
                    M2C_FIELD(temp_s0, s16 *, 0x328) = 1;
block_86:
                    M2C_FIELD(temp_s0, s16 *, 0x342) = 3;
                    func_80034AB0(0x8F);
                } else {
                    M2C_FIELD(temp_s0, s16 *, 0x328) = (s16) ((u16) M2C_FIELD(temp_s0, s16 *, 0x328) - 1);
                    func_800CF13C(arg1);
block_88:
                    func_800CF1B4(arg1);
                }
                break;
            case 1:                                 /* switch 4 */
                func_800CE87C(arg0, arg1, temp_s4, temp_s5);
                func_800CE8F4(arg0, arg1, temp_s4, temp_s5);
                temp_a1_2 = ((temp_v0 & 0xFFFF) * 0x1A8) + D_80091618;
                temp_a0_5 = *temp_a1_2;
                if (M2C_FIELD(arg0, u16 *, 0x20) == ((M2C_FIELD(((temp_a0_5 * 0x3C) + D_80063940), s32 *, 0x24) & 0x1F) - 2)) {
                    if (M2C_FIELD(arg0, s16 *, 0x24) == 0) {
                        var_a1_2 = *temp_a1_2;
                        goto block_82;
                    }
                    goto block_79;
                }
block_79:
                if (M2C_FIELD(arg0, u16 *, 0x20) == ((((u32) M2C_FIELD(((temp_a0_5 * 0x3C) + D_80063940), u32 *, 0x24) >> 5) & 0x1F) - 2)) {
                    if (M2C_FIELD(arg0, s16 *, 0x24) == 0) {
                        var_a1_2 = *(((temp_v0 & 0xFFFF) * 0x1A8) + D_80091618);
block_82:
                        func_800CC1FC(arg1, var_a1_2, 0);
                    }
                } else {
                case 2:                             /* switch 4 */
                }
                func_800CE87C(arg0, arg1, temp_s4, temp_s5);
                func_800CE8F4(arg0, arg1, temp_s4, temp_s5);
                if (M2C_FIELD(temp_s0, s16 *, 0x328) <= 0) {
                    func_800CF2E4(arg1);
                    M2C_FIELD(temp_s0, s16 *, 0x328) = 1;
                    goto block_86;
                }
                M2C_FIELD(temp_s0, s16 *, 0x328) = (s16) ((u16) M2C_FIELD(temp_s0, s16 *, 0x328) - 1);
                goto block_88;
            }
            break;
        case 3:                                     /* switch 1 */
            temp_v0_7 = M2C_FIELD(temp_s0, s16 *, 0x37E);
            if (temp_v0_7 != 0) {
                if ((temp_v0_7 >= 0) && (temp_v0_7 < 3)) {
                    func_800CE638(arg0, arg1);
                    func_800CE6B0(arg0, arg1);
                    var_v0_4 = (u16) M2C_FIELD(temp_s0, s16 *, 0x328) - 1;
                    if (M2C_FIELD(temp_s0, s16 *, 0x328) <= 0) {
                        temp_lo_2 = 0x32 / (s32) (M2C_FIELD(temp_s0, s16 *, 0x374) + 1);
                        M2C_FIELD(temp_s0, s16 *, 0x342) = 4;
                        M2C_FIELD(temp_s0, s16 *, 0x328) = (s16) temp_lo_2;
                        M2C_FIELD(temp_s0, s16 *, 0x220) = (s16) temp_lo_2;
                        func_800CED80(arg1, (s16) M2C_FIELD(temp_s0, u16 *, 0x32A), (s16) M2C_FIELD(temp_s0, u16 *, 0x32C));
                    } else {
                        goto block_97;
                    }
                }
            } else {
                func_800CE638(arg0, arg1);
                func_800CE748(arg0, arg1);
                var_v0_4 = (u16) M2C_FIELD(temp_s0, s16 *, 0x328) - 1;
                if (M2C_FIELD(temp_s0, s16 *, 0x328) <= 0) {
                    func_80025EF8(arg1);
                    M2C_FIELD(temp_s0, s16 *, 0x344) = 3;
                    M2C_FIELD(temp_s0, s16 *, 0x342) = 0;
                    *(((1 - arg1) * 4) + D_800EE9B8) = 0;
                    func_800D0730(temp_s0 + 0x1CC, (s16) ((u16) M2C_FIELD(temp_s0, s16 *, 0x336) - 1), (s16) ((u16) M2C_FIELD(temp_s0, s16 *, 0x338) - 1), 0);
                    var_a0 = temp_s0 + 0x1EC;
block_104:
                    func_800D0730(var_a0, (s16) ((u16) M2C_FIELD(temp_s0, s16 *, 0x336) - 1), (s16) ((u16) M2C_FIELD(temp_s0, s16 *, 0x338) - 1), 0);
                } else {
block_97:
                    M2C_FIELD(temp_s0, s16 *, 0x328) = var_v0_4;
                }
            }
            break;
        case 4:                                     /* switch 1 */
            temp_v0_8 = M2C_FIELD(temp_s0, s16 *, 0x37E);
            if (temp_v0_8 == 0) {
                func_800CE638(arg0, arg1);
                func_800CE748(arg0, arg1);
                M2C_FIELD(temp_s0, s16 *, 0x342) = 5;
            } else if ((temp_v0_8 >= 0) && (temp_v0_8 < 3)) {
                func_800CE638(arg0, arg1);
                func_800CE6B0(arg0, arg1);
                if (M2C_FIELD(temp_s0, s16 *, 0x328) <= 0) {
                    func_80025EF8(arg1);
                    func_800CF290(arg1);
                    var_a0 = temp_s0 + 0x1CC;
                    M2C_FIELD(temp_s0, s16 *, 0x328) = 1;
                    M2C_FIELD(temp_s0, s16 *, 0x344) = 3;
                    M2C_FIELD(temp_s0, s16 *, 0x342) = 0;
                    *(((1 - arg1) * 4) + D_800EE9B8) = 0;
                    goto block_104;
                }
                M2C_FIELD(temp_s0, s16 *, 0x328) = (s16) ((u16) M2C_FIELD(temp_s0, s16 *, 0x328) - 1);
                func_800CF13C(arg1);
            }
            break;
        }
        break;
    default:                                        /* switch 3 */
        func_800CE638(arg0, arg1);
        M2C_FIELD(temp_s0, s16 *, 0x344) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x2BC) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x2BC) + 1);
        if (M2C_FIELD(temp_s0, s16 *, 0x37E) != 0) {
            goto block_107;
        }
        break;
    }
    return M2C_FIELD(temp_s0, s32 *, 0x2BC);
}
