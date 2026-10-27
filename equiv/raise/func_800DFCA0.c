#include "common.h"

s32 func_800DFCA0(s32 arg0, s32 arg1) {
    extern u8 D_80091618[];
    extern u8 D_80092008[];
    extern u8 D_800EE9B8[];
    extern s16 D_800F0738[];
    extern u8 D_80100F38[];
    s16 temp_a0;
    s16 temp_v1_2;
    s32 temp_lo;
    s32 temp_s3;
    s32 var_v1;
    s32 var_v1_2;
    u16 temp_a1;
    u16 temp_a2;
    u16 temp_s0;
    u16 temp_s1;
    void *temp_s2;
    void *temp_v1;

    temp_s3 = func_800B1260(arg1) & 0xFFFF;
    temp_s2 = (temp_s3 * 0x79C) + D_80100F38;
    temp_a0 = M2C_FIELD(temp_s2, s16 *, 0x344);
    switch (temp_a0) {                              /* irregular */
    case 0:
        func_800AC34C(4);
        temp_s0 = M2C_FIELD(temp_s2, u16 *, 0x336);
        temp_s1 = M2C_FIELD(temp_s2, u16 *, 0x338);
        func_800DECA8(arg1, temp_s3);
        func_800DF838(arg1, temp_s3, (s16) temp_s0, (s16) temp_s1);
        if (func_800DEF3C(arg1, temp_s3) == 1) {
            M2C_FIELD(temp_s2, s16 *, 0x374) = 1;
            M2C_FIELD(temp_s2, s16 *, 0x344) = 1;
            M2C_FIELD(temp_s2, s32 *, 0x798) = (s32) ((M2C_FIELD(temp_s2, s32 *, 0x798) & ~3) | 1);
        } else {
            func_800AC34C(5);
            temp_a1 = M2C_FIELD(temp_s2, u16 *, 0x338);
            temp_a2 = M2C_FIELD(temp_s2, u16 *, 0x326);
            M2C_FIELD(temp_s2, s16 *, 0x344) = 3;
            M2C_FIELD(temp_s2, u16 *, 0x332) = (u16) M2C_FIELD(temp_s2, u16 *, 0x336);
            M2C_FIELD(temp_s2, u16 *, 0x334) = temp_a1;
            M2C_FIELD(temp_s2, u16 *, 0x324) = temp_a2;
            func_800DCC94(arg1, temp_a1, temp_a2);
            M2C_FIELD(temp_s2, u16 *, 0x32A) = (u16) M2C_FIELD(temp_s2, u16 *, 0x32C);
        }
        break;
    case 1:
        if ((func_800DEE18(arg1, temp_s3, temp_s2 + 0x336, temp_s2 + 0x338, temp_s2 + 0x326) << 0x10) == 0) {
            M2C_FIELD(temp_s2, s16 *, 0x344) = 3;
            func_800DFB80(arg1, temp_s3);
            M2C_FIELD(temp_s2, s16 *, 0x388) = 2;
            M2C_FIELD(temp_s2, s16 *, 0x38A) = 0;
            temp_v1 = M2C_FIELD(((temp_s3 * 0x1A8) + D_80091618), void **, 0x178);
            M2C_FIELD(temp_v1, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v1, s32 *, 0x38) | 1);
            func_800D1CC4(temp_s3, 0xD, 1, 0);
            M2C_FIELD(temp_s2, s16 *, 0x364) = func_800B5034(arg1, temp_s3, 7);
        } else {
            if ((s16) M2C_FIELD(temp_s2, u16 *, 0x326) == 8) {
                M2C_FIELD(temp_s2, u16 *, 0x326) = (u16) M2C_FIELD(temp_s2, u16 *, 0x324);
            }
            M2C_FIELD(temp_s2, s16 *, 0x344) = 2;
            M2C_FIELD(temp_s2, s16 *, 0x342) = 0;
        }
        break;
    case 2:
        temp_v1_2 = M2C_FIELD(temp_s2, s16 *, 0x342);
        switch (temp_v1_2) {                        /* switch 1; irregular */
        default:                                    /* switch 1 */
            if (temp_v1_2 != temp_a0) {
                if (temp_v1_2 != 3) {

                } else {
                    func_800E06A4(arg0, arg1);
                    var_v1 = 1 - arg1;
                    if (((u32) *((temp_s3 * 0x44) + D_80092008) >> 0x11) & 0x3F) {
                        func_80025EF8(arg1);
                        func_800D0730(temp_s2 + 0x1CC, (s16) (M2C_FIELD(temp_s2, u16 *, 0x336) - 1), (s16) (M2C_FIELD(temp_s2, u16 *, 0x338) - 1), 0);
                        func_800D0730(temp_s2 + 0x1EC, (s16) (M2C_FIELD(temp_s2, u16 *, 0x336) - 1), (s16) (M2C_FIELD(temp_s2, u16 *, 0x338) - 1), 0);
                        var_v1 = 1 - arg1;
                    }
                    *((var_v1 * 4) + D_800EE9B8) = 0;
                    M2C_FIELD(temp_s2, s16 *, 0x344) = 1;
                }
            } else {
                func_800E0794(arg0, arg1, (s16) M2C_FIELD(temp_s2, u16 *, 0x332), (s16) M2C_FIELD(temp_s2, u16 *, 0x334), (s32) (s16) M2C_FIELD(temp_s2, u16 *, 0x336), (s32) (s16) M2C_FIELD(temp_s2, u16 *, 0x338));
                if (M2C_FIELD(temp_s2, s16 *, 0x328) != 0) {
                    M2C_FIELD(temp_s2, s16 *, 0x328) = (s16) ((u16) M2C_FIELD(temp_s2, s16 *, 0x328) - 1);
                    func_800E0A50(arg1);
                } else {
                    func_800E0A70(arg1);
                    M2C_FIELD(temp_s2, s16 *, 0x342) = 3;
                    func_80034AB0(0x7D);
                }
            }
            break;
        case 0:                                     /* switch 1 */
            func_800E080C(arg1, (s16) M2C_FIELD(temp_s2, u16 *, 0x332), (s16) M2C_FIELD(temp_s2, u16 *, 0x334));
            M2C_FIELD(temp_s2, u16 *, 0x32A) = (u16) M2C_FIELD(temp_s2, u16 *, 0x32C);
            M2C_FIELD(temp_s2, u16 *, 0x324) = (u16) M2C_FIELD(temp_s2, u16 *, 0x326);
            var_v1_2 = 1 - arg1;
            if (((u32) *((temp_s3 * 0x44) + D_80092008) >> 0x11) & 0x3F) {
                func_800DCC94(arg1);
                var_v1_2 = 1 - arg1;
            }
            *((var_v1_2 * 4) + D_800EE9B8) = 0;
            M2C_FIELD(temp_s2, s16 *, 0x342) = 1;
            M2C_FIELD(temp_s2, s16 *, 0x328) = func_800D06D4((s16) M2C_FIELD(temp_s2, u16 *, 0x324), (s16) M2C_FIELD(temp_s2, u16 *, 0x326));
            func_800E06A4(arg0, arg1);
            break;
        case 1:                                     /* switch 1 */
            if (M2C_FIELD(temp_s2, s16 *, 0x328) == 0) {
                func_800CE4B8(arg1, arg0, (*D_800F0738) + func_800CE128((s16) M2C_FIELD(temp_s2, u16 *, 0x326)), 0);
                temp_lo = 0x32 / (s32) (M2C_FIELD(temp_s2, s16 *, 0x374) + 1);
                M2C_FIELD(temp_s2, s16 *, 0x328) = (s16) temp_lo;
                M2C_FIELD(temp_s2, s16 *, 0x220) = (s16) temp_lo;
                if (((u32) *((temp_s3 * 0x44) + D_80092008) >> 0x11) & 0x3F) {
                    func_800E085C(arg1, (s16) M2C_FIELD(temp_s2, u16 *, 0x32A), (s16) M2C_FIELD(temp_s2, u16 *, 0x32C));
                } else {
                    func_800E088C(arg1);
                }
                M2C_FIELD(temp_s2, s16 *, 0x342) = 2;
            } else {
                func_800CE164(arg1);
                func_800CE204(arg1, arg0);
            }
            func_800E071C(arg0, arg1, (s16) M2C_FIELD(temp_s2, u16 *, 0x332), (s16) M2C_FIELD(temp_s2, u16 *, 0x334));
            break;
        }
        break;
    default:
        func_800E06A4(arg0, arg1);
        M2C_FIELD(temp_s2, s16 *, 0x344) = 0;
        M2C_FIELD(temp_s2, s32 *, 0x2BC) = (s32) (M2C_FIELD(temp_s2, s32 *, 0x2BC) + 1);
        break;
    }
    return M2C_FIELD(temp_s2, s32 *, 0x2BC);
}
