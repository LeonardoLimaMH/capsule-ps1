#include "common.h"

s32 func_800C8CAC(s32 arg0, s32 arg1) {
    extern u8 D_800EE9B8[];
    extern u8 D_80100F38[];
    s16 temp_a0;
    s16 temp_s1;
    s16 temp_s3;
    s16 temp_s5;
    s16 temp_s6;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_lo;
    s32 temp_v1_3;
    s32 var_v0;
    s32 var_v0_2;
    u8 temp_v0;
    void *temp_s0;

    temp_s0 = ((func_800B1260(arg1) & 0xFFFF) * 0x79C) + D_80100F38;
    temp_s5 = M2C_FIELD(temp_s0, s16 *, 0x332);
    temp_s6 = M2C_FIELD(temp_s0, s16 *, 0x334);
    temp_s1 = M2C_FIELD(temp_s0, s16 *, 0x344);
    switch (temp_s1) {                              /* irregular */
    case 0:
        func_800DDD70(arg1);
        if (func_800DDE88(arg1) == 1) {
            M2C_FIELD(temp_s0, s16 *, 0x376) = 1;
            M2C_FIELD(temp_s0, s16 *, 0x374) = 0;
            M2C_FIELD(temp_s0, s16 *, 0x344) = 1;
            M2C_FIELD(temp_s0, s16 *, 0x3E8) = 1;
        } else {
            func_800DCD44(arg1);
            if ((func_800DCE54(arg1) << 0x10) == 0) {
                M2C_FIELD(temp_s0, s16 *, 0x374) = 9;
                M2C_FIELD(temp_s0, s16 *, 0x376) = 1;
                M2C_FIELD(temp_s0, s16 *, 0x344) = 1;
                M2C_FIELD(temp_s0, s16 *, 0x3E8) = 2;
            } else {
block_15:
                M2C_FIELD(temp_s0, s16 *, 0x344) = 3;
            }
        }
        break;
    case 1:
        if (M2C_FIELD(temp_s0, s16 *, 0x3E8) == temp_s1) {
            var_v0 = func_800DE938(arg1) << 0x10;
        } else {
            var_v0 = func_800DD45C(arg1) << 0x10;
        }
        if (var_v0 == 0) {
            goto block_15;
        }
        M2C_FIELD(temp_s0, s16 *, 0x344) = 2;
        M2C_FIELD(temp_s0, s16 *, 0x342) = 0;
        break;
    case 2:
        temp_s3 = M2C_FIELD(temp_s0, s16 *, 0x3E8);
        if (temp_s3 != 1) {
            temp_v1 = M2C_FIELD(temp_s0, s16 *, 0x342);
            switch (temp_v1) {                      /* switch 1; irregular */
            default:                                /* switch 1 */
                if (temp_v1 != temp_s1) {
                    if (temp_v1 != 3) {

                    } else {
                        func_800CE638(arg0, arg1);
                        func_80025EF8(arg1);
                        *(((1 - arg1) * 4) + D_800EE9B8) = 0;
                        if ((func_800DD528(arg1) << 0x10) == 0) {
                            M2C_FIELD(temp_s0, s16 *, 0x344) = 1;
                        } else {
                            M2C_FIELD(temp_s0, s16 *, 0x344) = temp_s1;
                            M2C_FIELD(temp_s0, s16 *, 0x342) = 0;
                        }
                    }
                } else {
                    func_800CEAC0(arg0, arg1, temp_s5, temp_s6, (s32) M2C_FIELD(temp_s0, s16 *, 0x336), (s32) M2C_FIELD(temp_s0, s16 *, 0x338));
                    if (M2C_FIELD(temp_s0, s16 *, 0x328) != 0) {
                        M2C_FIELD(temp_s0, s16 *, 0x328) = (s16) ((u16) M2C_FIELD(temp_s0, s16 *, 0x328) - 1);
                        func_800CF13C(arg1);
                    } else {
                        func_800CF290(arg1);
                        goto block_54;
                    }
                }
                break;
            case 0:                                 /* switch 1 */
                func_800CEC68(arg1, temp_s5, temp_s6);
                M2C_FIELD(temp_s0, u16 *, 0x324) = (u16) M2C_FIELD(temp_s0, u16 *, 0x326);
                M2C_FIELD(temp_s0, u16 *, 0x32A) = (u16) M2C_FIELD(temp_s0, u16 *, 0x32C);
                temp_v0 = *M2C_FIELD(temp_s0, u8 **, 0x478);
                M2C_FIELD(temp_s0, u16 *, 0x326) = (u16) temp_v0;
                func_800DD110(arg1, temp_v0, temp_s0 + 0x336, temp_s0 + 0x338);
                func_800DCC94(arg1);
                *(((1 - arg1) * 4) + D_800EE9B8) = 0;
                M2C_FIELD(temp_s0, s16 *, 0x328) = func_800D06D4((s16) M2C_FIELD(temp_s0, u16 *, 0x324), (s16) M2C_FIELD(temp_s0, u16 *, 0x326));
                M2C_FIELD(temp_s0, s16 *, 0x342) = 1;
                func_800CE638(arg0, arg1);
                break;
            case 1:                                 /* switch 1 */
                if (M2C_FIELD(temp_s0, s16 *, 0x328) == 0) {
                    func_800CE380(arg1, arg0);
                    temp_lo = 0x32 / (s32) (M2C_FIELD(temp_s0, s16 *, 0x374) + 1);
                    M2C_FIELD(temp_s0, s16 *, 0x328) = (s16) temp_lo;
                    M2C_FIELD(temp_s0, u16 *, 0x220) = (u16) temp_lo;
                    func_800CED80(arg1, (s16) M2C_FIELD(temp_s0, u16 *, 0x32A), (s16) M2C_FIELD(temp_s0, u16 *, 0x32C));
                    M2C_FIELD(temp_s0, s16 *, 0x342) = temp_s1;
                } else {
                    func_800CE164(arg1);
                    func_800CE204(arg1, arg0);
                }
                func_800CE87C(arg0, arg1, temp_s5, temp_s6);
                break;
            }
        } else {
            temp_v1_2 = M2C_FIELD(temp_s0, s16 *, 0x342);
            if (temp_v1_2 != temp_s3) {
                if (temp_v1_2 < 2) {
                    if (temp_v1_2 != 0) {

                    } else {
                        M2C_FIELD(temp_s0, u16 *, 0x324) = (u16) M2C_FIELD(temp_s0, u16 *, 0x326);
                        M2C_FIELD(temp_s0, u16 *, 0x32A) = (u16) M2C_FIELD(temp_s0, u16 *, 0x32C);
                        M2C_FIELD(temp_s0, u16 *, 0x326) = func_800DDCFC(arg1);
                        M2C_FIELD(temp_s0, s16 *, 0x336) = (s16) (u16) M2C_FIELD(temp_s0, s16 *, 0x332);
                        M2C_FIELD(temp_s0, s16 *, 0x338) = (s16) (u16) M2C_FIELD(temp_s0, s16 *, 0x334);
                        *(((temp_s3 - arg1) * 4) + D_800EE9B8) = 0;
                        M2C_FIELD(temp_s0, s16 *, 0x328) = func_800D06D4((s16) M2C_FIELD(temp_s0, u16 *, 0x324), (s16) M2C_FIELD(temp_s0, u16 *, 0x326));
                        func_800DDB60(arg1, M2C_FIELD(temp_s0, s16 *, 0x332), M2C_FIELD(temp_s0, s16 *, 0x334));
                        M2C_FIELD(temp_s0, s16 *, 0x342) = temp_s3;
                        func_800DD870(arg0, arg1);
                    }
                } else if (temp_v1_2 != temp_s1) {
                    if (temp_v1_2 != 3) {

                    } else {
                        func_800DD870(arg0, arg1);
                        *(((temp_s3 - arg1) * 4) + D_800EE9B8) = 0;
                        M2C_FIELD(temp_s0, s16 *, 0x344) = temp_s3;
                    }
                } else {
                    func_800DD870(arg0, arg1);
                    if (M2C_FIELD(temp_s0, s16 *, 0x328) != 0) {
                        M2C_FIELD(temp_s0, s16 *, 0x328) = (s16) ((u16) M2C_FIELD(temp_s0, s16 *, 0x328) - 1);
                        M2C_FIELD(temp_s0, u16 *, 0x220) = (u16) (M2C_FIELD(temp_s0, u16 *, 0x220) + 1);
                        func_800DDBEC(arg1);
                        func_80098FB4(arg0);
                        if (!(M2C_FIELD(temp_s0, u16 *, 0x220) & 7)) {
                            temp_a0 = (s16) M2C_FIELD(temp_s0, u16 *, 0x326);
                            temp_v1_3 = temp_a0 + 1;
                            var_v0_2 = temp_v1_3;
                            if (temp_v1_3 < 0) {
                                var_v0_2 = temp_a0 + 8;
                            }
                            M2C_FIELD(temp_s0, u16 *, 0x326) = (u16) (temp_v1_3 - ((var_v0_2 >> 3) * 8));
                            func_800CE380(arg1, arg0);
                        }
                    } else {
                        func_800DDCF4(arg1);
block_54:
                        M2C_FIELD(temp_s0, s16 *, 0x342) = 3;
                    }
                }
            } else {
                if (M2C_FIELD(temp_s0, s16 *, 0x328) == 0) {
                    func_800CE380(arg1, arg0);
                    M2C_FIELD(temp_s0, u16 *, 0x220) = 0U;
                    M2C_FIELD(temp_s0, s16 *, 0x328) = 0x40;
                    func_800DDBE4(arg1);
                    M2C_FIELD(temp_s0, s16 *, 0x342) = temp_s1;
                } else {
                    func_800CE164(arg1);
                    func_800CE204(arg1, arg0);
                }
                func_800DD870(arg0, arg1);
            }
        }
        break;
    default:
        M2C_FIELD(temp_s0, s16 *, 0x3E8) = 0;
        M2C_FIELD(temp_s0, s16 *, 0x344) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x2BC) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x2BC) + 1);
        break;
    }
    return M2C_FIELD(temp_s0, s32 *, 0x2BC);
}
