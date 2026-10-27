#include "common.h"

s32 func_800CAF40(s32 arg0, s32 arg1) {
    extern s32 D_8008ED80[];
    extern u8 D_800EE9B8[];
    extern u8 D_80100F38[];
    s16 temp_s1;
    s16 temp_s2;
    s16 temp_s4;
    s16 temp_s5;
    s32 temp_lo;
    void *temp_s0;

    temp_s0 = ((func_800B1260(arg1) & 0xFFFF) * 0x79C) + D_80100F38;
    temp_s4 = M2C_FIELD(temp_s0, s16 *, 0x332);
    temp_s5 = M2C_FIELD(temp_s0, s16 *, 0x334);
    temp_s2 = M2C_FIELD(temp_s0, s16 *, 0x344);
    switch (temp_s2) {                              /* irregular */
    case 0:
        M2C_FIELD(temp_s0, s16 *, 0x344) = 1;
        break;
    case 1:
        M2C_FIELD(temp_s0, s16 *, 0x344) = 2;
        break;
    case 2:
        temp_s1 = M2C_FIELD(temp_s0, s16 *, 0x342);
        switch (temp_s1) {                          /* switch 1; irregular */
        default:                                    /* switch 1 */
            if (temp_s1 != temp_s2) {
                if (temp_s1 != 3) {

                } else {
                    func_800CE59C(arg0, arg1);
                    if (M2C_FIELD(temp_s0, s16 *, 0x328) <= 0) {
                        func_80025EF8(arg1);
                        *(((1 - arg1) * 4) + D_800EE9B8) = 0;
                        M2C_FIELD(temp_s0, s16 *, 0x342) = 0;
                        M2C_FIELD(temp_s0, s16 *, 0x344) = temp_s1;
                    } else {
                        M2C_FIELD(temp_s0, s16 *, 0x328) = (s16) ((u16) M2C_FIELD(temp_s0, s16 *, 0x328) - 1);
                    }
                }
            } else {
                func_800CEA24(arg0, arg1, temp_s4, temp_s5, (s32) M2C_FIELD(temp_s0, s16 *, 0x336), (s32) M2C_FIELD(temp_s0, s16 *, 0x338));
                if (M2C_FIELD(temp_s0, s16 *, 0x328) <= 0) {
block_26:
                    func_800CF290(arg1);
                    M2C_FIELD(temp_s0, s16 *, 0x328) = 1;
                    M2C_FIELD(temp_s0, s16 *, 0x342) = 3;
                } else {
                    M2C_FIELD(temp_s0, s16 *, 0x328) = (s16) ((u16) M2C_FIELD(temp_s0, s16 *, 0x328) - 1);
                    func_800CF13C(arg1);
                }
            }
            break;
        case 0:                                     /* switch 1 */
            func_800CEC68(arg1, temp_s4, temp_s5);
            M2C_FIELD(temp_s0, u16 *, 0x324) = (u16) M2C_FIELD(temp_s0, u16 *, 0x326);
            M2C_FIELD(temp_s0, u16 *, 0x32A) = (u16) M2C_FIELD(temp_s0, u16 *, 0x32C);
            if (func_800D0D14(arg1) == 1) {
                if (((u8) M2C_FIELD((((func_800B12D8(arg1) & 0xFFFF) * 0x79C) + D_80100F38), u8 *, 0x798) >> 6) == 0) {
                    func_800CE59C(arg0, arg1);
                    M2C_FIELD(temp_s0, u16 *, 0x32C) = (u16) M2C_FIELD(temp_s0, u16 *, 0x32A);
                    M2C_FIELD(temp_s0, u16 *, 0x326) = (u16) M2C_FIELD(temp_s0, u16 *, 0x324);
                    *(((1 - arg1) * 4) + D_800EE9B8) = 0;
                } else {
                    goto block_26;
                }
            } else {
                func_800D0D4C(arg1);
                M2C_FIELD(temp_s0, s16 *, 0x328) = func_800D06D4((s16) M2C_FIELD(temp_s0, u16 *, 0x324), (s16) M2C_FIELD(temp_s0, u16 *, 0x326));
                M2C_FIELD(temp_s0, s16 *, 0x342) = 1;
                func_800CE59C(arg0, arg1);
            }
            break;
        case 1:                                     /* switch 1 */
            if (((*D_8008ED80) & 3) == 3) {
                if (M2C_FIELD(temp_s0, s16 *, 0x328) == 0) {
                    func_800CE380(arg1, arg0);
                    temp_lo = 0x32 / (s32) (M2C_FIELD(temp_s0, s16 *, 0x374) + 1);
                    M2C_FIELD(temp_s0, s16 *, 0x328) = (s16) temp_lo;
                    M2C_FIELD(temp_s0, s16 *, 0x220) = (s16) temp_lo;
                    func_800CED80(arg1, (s16) M2C_FIELD(temp_s0, u16 *, 0x32A), (s16) M2C_FIELD(temp_s0, u16 *, 0x32C));
                    M2C_FIELD(temp_s0, s16 *, 0x342) = temp_s2;
                } else {
                    func_800CE164(arg1);
                    func_800CE204(arg1, arg0);
                }
            }
            func_800CE7E0(arg0, arg1, temp_s4, temp_s5);
            break;
        }
        break;
    default:
        M2C_FIELD(temp_s0, s16 *, 0x344) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x2BC) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x2BC) + 1);
        break;
    }
    return M2C_FIELD(temp_s0, s32 *, 0x2BC);
}
