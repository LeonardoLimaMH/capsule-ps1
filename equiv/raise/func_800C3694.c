#include "common.h"

s32 func_800C3694(void *arg0, s32 arg1) {
    extern u8 D_80063940[];
    extern s32 D_8008ED80[];
    extern u8 D_80091618[];
    extern u8 D_800EE9B8[];
    extern s16 D_800F0748[];
    extern s16 D_800F0750[];
    extern s16 D_800F0758[];
    extern s16 D_800F07D0[];
    extern u8 D_80100F38[];
    s16 temp_s1;
    s16 temp_s1_2;
    s16 temp_s6;
    s16 temp_s7;
    s16 temp_v0_7;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 var_a1_4;
    s16 var_a2_3;
    s16 var_a2_4;
    s16 var_a2_5;
    s32 temp_lo;
    s32 temp_s2;
    s32 temp_v0;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_v0;
    u16 *temp_a1;
    u16 temp_a0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u16 temp_v0_4;
    u16 temp_v0_5;
    u16 temp_v0_6;
    u16 var_a1;
    void *temp_s0;
    void *var_a0;

    temp_v0 = func_800B1260(arg1);
    temp_s2 = temp_v0 & 0xFFFF;
    temp_s0 = (temp_s2 * 0x79C) + D_80100F38;
    temp_s6 = M2C_FIELD(temp_s0, s16 *, 0x332);
    temp_s7 = M2C_FIELD(temp_s0, s16 *, 0x334);
    temp_s1 = M2C_FIELD(temp_s0, s16 *, 0x344);
    switch (temp_s1) {                              /* switch 3; irregular */
    case 0:                                         /* switch 3 */
        M2C_FIELD(temp_s0, s16 *, 0x344) = 1;
        func_800CE638(arg0, arg1);
        break;
    case 1:                                         /* switch 3 */
        M2C_FIELD(temp_s0, s16 *, 0x344) = 2;
        M2C_FIELD(temp_s0, s16 *, 0x342) = 0;
        func_800CE638(arg0, arg1);
        break;
    case 2:                                         /* switch 3 */
        temp_v1 = M2C_FIELD(temp_s0, s16 *, 0x342);
        switch (temp_v1) {                          /* switch 4; irregular */
        default:                                    /* switch 4 */
            if (temp_v1 != temp_s1) {
                if (temp_v1 != 3) {

                } else {
                    func_800CE638(arg0, arg1);
                    if (M2C_FIELD(temp_s0, s16 *, 0x328) <= 0) {
                        func_80025EF8(arg1);
                        var_a0 = temp_s0 + 0x1CC;
                        if (M2C_FIELD(temp_s0, s16 *, 0x37E) == temp_s1) {
                            var_a0 = temp_s0 + 0x1CC;
                            if (func_800D3F88(arg1, 0, 0) == 0xFF) {
                                func_80034AB0(0x4B);
                                var_a0 = temp_s0 + 0x1CC;
                            }
                        }
                        M2C_FIELD(temp_s0, s16 *, 0x344) = 3;
                        M2C_FIELD(temp_s0, s16 *, 0x342) = 0;
                        *(((1 - arg1) * 4) + D_800EE9B8) = 0;
                        func_800D0730(var_a0, (s16) ((u16) M2C_FIELD(temp_s0, s16 *, 0x336) - 1), (s16) ((u16) M2C_FIELD(temp_s0, s16 *, 0x338) - 1), 0);
                    } else {
                        M2C_FIELD(temp_s0, s16 *, 0x328) = (s16) ((u16) M2C_FIELD(temp_s0, s16 *, 0x328) - 1);
                    }
                }
            } else {
                func_800CEAC0(arg0, arg1, temp_s6, temp_s7, (s32) M2C_FIELD(temp_s0, s16 *, 0x336), (s32) M2C_FIELD(temp_s0, s16 *, 0x338));
                temp_s1_2 = M2C_FIELD(temp_s0, s16 *, 0x37E);
                if ((temp_s1_2 == 1) && (func_800D2B34(arg1) == temp_s1_2)) {
                    temp_a1 = (temp_s2 * 0x1A8) + D_80091618;
                    temp_a0 = *temp_a1;
                    if (M2C_FIELD(arg0, u16 *, 0x20) == ((M2C_FIELD(((temp_a0 * 0x3C) + D_80063940), s32 *, 0x24) & 0x1F) - 2)) {
                        if (M2C_FIELD(arg0, s16 *, 0x24) == 0) {
                            var_a1 = *temp_a1;
                            goto block_85;
                        }
                        goto block_82;
                    }
block_82:
                    if ((M2C_FIELD(arg0, u16 *, 0x20) == ((((u32) M2C_FIELD(((temp_a0 * 0x3C) + D_80063940), u32 *, 0x24) >> 5) & 0x1F) - 2)) && (M2C_FIELD(arg0, s16 *, 0x24) == 0)) {
                        var_a1 = *(((temp_v0 & 0xFFFF) * 0x1A8) + D_80091618);
block_85:
                        func_800CC1FC(arg1, var_a1, 0);
                    }
                }
                if (M2C_FIELD(temp_s0, s16 *, 0x328) <= 0) {
                    func_800CF290(arg1);
                    M2C_FIELD(temp_s0, s16 *, 0x328) = 1;
                    M2C_FIELD(temp_s0, s16 *, 0x342) = 3;
                } else {
                    M2C_FIELD(temp_s0, s16 *, 0x328) = (s16) ((u16) M2C_FIELD(temp_s0, s16 *, 0x328) - 1);
                    func_800CF13C(arg1);
                }
            }
            break;
        case 0:                                     /* switch 4 */
            func_800CEC68(arg1, temp_s6, temp_s7);
            M2C_FIELD(temp_s0, u16 *, 0x324) = (u16) M2C_FIELD(temp_s0, u16 *, 0x326);
            M2C_FIELD(temp_s0, u16 *, 0x32A) = (u16) M2C_FIELD(temp_s0, u16 *, 0x32C);
            if (func_800D1548() != 1) {
                if (M2C_FIELD(temp_s0, s16 *, 0x37E) != 0) {
                    temp_v0_2 = func_800D3CB0(arg1);
                    M2C_FIELD(temp_s0, u16 *, 0x326) = temp_v0_2;
                    switch ((s16) temp_v0_2) {      /* switch 1 */
                    case 0:                         /* switch 1 */
                        var_a1_2 = 1;
                        var_a2 = 0;
                        break;
                    case 1:                         /* switch 1 */
                        var_a1_2 = 1;
                        var_a2 = -1;
                        break;
                    case 2:                         /* switch 1 */
                        var_a1_2 = 0;
                        var_a2 = -1;
                        break;
                    case 3:                         /* switch 1 */
                        var_a1_2 = -1;
                        var_a2 = -1;
                        break;
                    case 4:                         /* switch 1 */
                        var_a1_2 = -1;
                        var_a2 = 0;
                        break;
                    case 5:                         /* switch 1 */
                        var_a1_2 = -1;
block_27:
                        var_a2 = 1;
                        break;
                    case 6:                         /* switch 1 */
                        var_a1_2 = 0;
                        goto block_27;
                    default:                        /* switch 1 */
                        var_a1_2 = 1;
                        goto block_27;
                    }
                    M2C_FIELD(temp_s0, s16 *, 0x336) = (s16) ((u16) M2C_FIELD(temp_s0, s16 *, 0x332) + var_a1_2);
                    temp_v1_2 = (u16) M2C_FIELD(temp_s0, s16 *, 0x334) + var_a2;
                    M2C_FIELD(temp_s0, s16 *, 0x338) = temp_v1_2;
                    M2C_FIELD(temp_s0, u16 *, 0x32C) = (u16) (temp_v1_2 + ((M2C_FIELD(temp_s0, s16 *, 0x336) * 8) - 9));
                    if (func_800D3F88(arg1, var_a1_2, var_a2) == 0xFF) {
                        M2C_FIELD(temp_s0, s16 *, 0x37E) = 1;
                    } else {
                        M2C_FIELD(temp_s0, s16 *, 0x37E) = 2;
                    }
                    goto block_59;
                }
                if ((func_800D3BD8(arg1) != 0) && (*((temp_s2 * 0x1A8) + D_80091618) == 4)) {
                    if ((M2C_FIELD(temp_s0, s16 *, 0x228) != 1) && ((func_800202A4(0x64) + (*D_8008ED80)) & 1)) {
                        temp_v0_3 = func_800D3CB0(arg1);
                        M2C_FIELD(temp_s0, u16 *, 0x326) = temp_v0_3;
                        switch ((s16) temp_v0_3) {  /* switch 5; irregular */
                        case 0:                     /* switch 5 */
                            var_a1_3 = 1;
                            var_a2_2 = 0;
block_47:
                            M2C_FIELD(temp_s0, s16 *, 0x336) = (s16) ((u16) M2C_FIELD(temp_s0, s16 *, 0x332) + var_a1_3);
                            temp_v1_3 = (u16) M2C_FIELD(temp_s0, s16 *, 0x334) + var_a2_2;
                            M2C_FIELD(temp_s0, s16 *, 0x338) = temp_v1_3;
                            M2C_FIELD(temp_s0, u16 *, 0x32C) = (u16) (temp_v1_3 + ((M2C_FIELD(temp_s0, s16 *, 0x336) * 8) - 9));
                            if (func_800D3F88(arg1, var_a1_3, var_a2_2) == 0xFF) {
                                M2C_FIELD(temp_s0, s16 *, 0x37E) = 2;
                                M2C_FIELD(temp_s0, s32 *, 0x798) = (s32) ((M2C_FIELD(temp_s0, s32 *, 0x798) & ~3) | 1);
                            } else {
                                M2C_FIELD(temp_s0, s16 *, 0x37E) = 0;
                            }
                            goto block_59;
                        case 1:                     /* switch 5 */
                            var_a1_3 = 1;
                            var_a2_2 = -1;
                            goto block_47;
                        case 2:                     /* switch 5 */
                            var_a1_3 = 0;
                            var_a2_2 = -1;
                            goto block_47;
                        case 3:                     /* switch 5 */
                            var_a1_3 = -1;
                            var_a2_2 = -1;
                            goto block_47;
                        case 4:                     /* switch 5 */
                            var_a1_3 = -1;
                            var_a2_2 = 0;
                            goto block_47;
                        case 5:                     /* switch 5 */
                            var_a1_3 = -1;
block_46:
                            var_a2_2 = 1;
                            goto block_47;
                        case 6:                     /* switch 5 */
                            var_a1_3 = 0;
                            goto block_46;
                        default:                    /* switch 5 */
                            var_a1_3 = 1;
                            goto block_46;
                        }
                    } else {
                        temp_v0_4 = func_800CF304(arg1);
                        M2C_FIELD(temp_s0, u16 *, 0x326) = temp_v0_4;
                        if ((s16) temp_v0_4 == -1) {
                        case -1:                    /* switch 5 */
                            M2C_FIELD(temp_s0, s16 *, 0x342) = 3;
                            M2C_FIELD(temp_s0, u16 *, 0x326) = (u16) M2C_FIELD(temp_s0, u16 *, 0x324);
                            func_800CE638(arg0, arg1);
                            M2C_FIELD(temp_s0, s16 *, 0x37E) = 0;
                        } else {
                            var_a1_4 = (s16) M2C_FIELD(temp_s0, u16 *, 0x326);
                            M2C_FIELD(temp_s0, s16 *, 0x37E) = 0;
                            goto block_58;
                        }
                    }
                } else {
                    temp_v0_5 = func_800CF304(arg1);
                    M2C_FIELD(temp_s0, u16 *, 0x326) = temp_v0_5;
                    var_a1_4 = (s16) temp_v0_5;
                    if (var_a1_4 != -1) {
                        goto block_58;
                    }
                    goto block_56;
                }
            } else {
                temp_v0_6 = func_800CF304(arg1);
                M2C_FIELD(temp_s0, u16 *, 0x326) = temp_v0_6;
                var_a1_4 = (s16) temp_v0_6;
                if (var_a1_4 == -1) {
block_56:
                    M2C_FIELD(temp_s0, s16 *, 0x342) = 3;
                    M2C_FIELD(temp_s0, u16 *, 0x326) = (u16) M2C_FIELD(temp_s0, u16 *, 0x324);
                    func_800CE638(arg0, arg1);
                } else {
block_58:
                    M2C_FIELD(temp_s0, u16 *, 0x32C) = func_800CF4BC(arg1, var_a1_4, 1);
block_59:
                    M2C_FIELD(temp_s0, s16 *, 0x328) = func_800D06D4((s16) M2C_FIELD(temp_s0, u16 *, 0x324), (s16) M2C_FIELD(temp_s0, u16 *, 0x326));
                    M2C_FIELD(temp_s0, s16 *, 0x342) = 1;
                    func_800CE638(arg0, arg1);
                    func_800CDFDC(arg1);
                }
            }
            break;
        case 1:                                     /* switch 4 */
            if (((*D_8008ED80) & 3) == 3) {
                if (M2C_FIELD(temp_s0, s16 *, 0x328) == 0) {
                    temp_v0_7 = M2C_FIELD(temp_s0, s16 *, 0x37E);
                    if (temp_v0_7 == temp_s1) {
                        var_v0 = func_800CE128((s16) M2C_FIELD(temp_s0, u16 *, 0x326));
                        var_a2_3 = (*D_800F0758);
                        goto block_71;
                    }
                    if (temp_v0_7 == 1) {
                        if (func_800D2B34(arg1) == 1) {
                            var_a2_4 = (s16) M2C_FIELD(temp_s0, u16 *, 0x326);
                            if (var_a2_4 < 0) {
                                var_a2_4 += 3;
                            }
                            var_a2_5 = (*D_800F0750) + (var_a2_4 >> 2);
                        } else {
                            var_a2_5 = (*D_800F07D0);
                        }
                    } else {
                        var_v0 = func_800CE128((s16) M2C_FIELD(temp_s0, u16 *, 0x326));
                        var_a2_3 = (*D_800F0748);
block_71:
                        var_a2_5 = var_a2_3 + var_v0;
                    }
                    func_800CE4B8(arg1, arg0, var_a2_5, 0);
                    temp_lo = 0x32 / (s32) (M2C_FIELD(temp_s0, s16 *, 0x374) + 1);
                    M2C_FIELD(temp_s0, s16 *, 0x328) = (s16) temp_lo;
                    M2C_FIELD(temp_s0, s16 *, 0x220) = (s16) temp_lo;
                    func_800CED80(arg1, (s16) M2C_FIELD(temp_s0, u16 *, 0x32A), (s16) M2C_FIELD(temp_s0, u16 *, 0x32C));
                    M2C_FIELD(temp_s0, s16 *, 0x342) = 2;
                } else {
                    func_800CE164(arg1);
                    func_800CE204(arg1, arg0);
                }
            }
            func_800CE87C(arg0, arg1, temp_s6, temp_s7);
            break;
        }
        break;
    default:                                        /* switch 3 */
        func_800CE638(arg0, arg1);
        if (M2C_FIELD(temp_s0, s16 *, 0x37E) != 0) {
            if (func_800D3F88(arg1, 0, 0) != 0xFF) {
                M2C_FIELD(temp_s0, s16 *, 0x37E) = 0;
                M2C_FIELD(temp_s0, s32 *, 0x798) = (s32) ((M2C_FIELD(temp_s0, s32 *, 0x798) & ~3) | 2);
            }
            if (M2C_FIELD(temp_s0, s16 *, 0x37E) == 0) {
                goto block_99;
            }
        } else {
block_99:
            M2C_FIELD(temp_s0, s32 *, 0x2BC) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x2BC) + 1);
        }
        M2C_FIELD(temp_s0, s16 *, 0x344) = 0;
        break;
    }
    return M2C_FIELD(temp_s0, s32 *, 0x2BC);
}
