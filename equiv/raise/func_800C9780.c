#include "common.h"

s32 func_800C9780(s32 arg0, s32 arg1) {
    extern s32 D_8008ED80[];
    extern u8 D_80091618[];
    extern u8 D_800EE9B8[];
    extern u8 D_80100F38[];
    s32 sp18;
    s16 temp_fp;
    s16 temp_s1;
    s16 temp_s4;
    s16 temp_s5;
    s16 temp_s6;
    s32 temp_lo;
    s32 temp_s3;
    u16 temp_v0;
    void *temp_s0;
    void *temp_v0_2;

    temp_s3 = func_800B1260(arg1) & 0xFFFF;
    temp_s0 = (temp_s3 * 0x79C) + D_80100F38;
    temp_s5 = (s16) M2C_FIELD(temp_s0, u16 *, 0x332);
    temp_s6 = M2C_FIELD(temp_s0, s16 *, 0x334);
    sp18 = (s32) M2C_FIELD(temp_s0, s16 *, 0x336);
    temp_s4 = M2C_FIELD(temp_s0, s16 *, 0x344);
    temp_fp = M2C_FIELD(temp_s0, s16 *, 0x338);
    switch (temp_s4) {                              /* irregular */
    case 0:
        M2C_FIELD(temp_s0, u16 *, 0x32E) = (u16) M2C_FIELD(temp_s0, u16 *, 0x332);
        M2C_FIELD(temp_s0, u16 *, 0x330) = (u16) M2C_FIELD(temp_s0, s16 *, 0x334);
        M2C_FIELD(temp_s0, s16 *, 0x344) = 1;
        M2C_FIELD(temp_s0, s32 *, 0x798) = (s32) ((M2C_FIELD(temp_s0, s32 *, 0x798) & 0x7FFFFFFF) | (M2C_FIELD(((temp_s3 * 0x1A8) + D_80091618), u16 *, 0x90) << 0x1F));
        func_800CE638(arg0, arg1, 0x7FFFFFFF);
        break;
    case 1:
        M2C_FIELD(temp_s0, s16 *, 0x344) = 2;
        M2C_FIELD(temp_s0, s16 *, 0x342) = 0;
        func_800CE638(arg0, arg1);
        break;
    case 2:
        temp_s1 = M2C_FIELD(temp_s0, s16 *, 0x342);
        switch (temp_s1) {                          /* switch 1; irregular */
        default:                                    /* switch 1 */
            if (temp_s1 != temp_s4) {
                if (temp_s1 != 3) {

                } else {
                    func_800CE638(arg0, arg1);
                    func_800CE748(arg0, arg1);
                    if (M2C_FIELD(temp_s0, s16 *, 0x328) <= 0) {
                        func_80025EF8(arg1);
                        M2C_FIELD(temp_s0, s16 *, 0x342) = 0;
                        M2C_FIELD(temp_s0, s16 *, 0x344) = temp_s1;
                        *(((1 - arg1) * 4) + D_800EE9B8) = 0;
                        func_800D0730(temp_s0 + 0x1CC, (s16) ((u16) M2C_FIELD(temp_s0, s16 *, 0x336) - 1), (s16) ((u16) M2C_FIELD(temp_s0, s16 *, 0x338) - 1), 0);
                        func_800D0730(temp_s0 + 0x1EC, (s16) ((u16) M2C_FIELD(temp_s0, s16 *, 0x336) - 1), (s16) ((u16) M2C_FIELD(temp_s0, s16 *, 0x338) - 1), 0);
                    } else {
                        M2C_FIELD(temp_s0, s16 *, 0x328) = (s16) ((u16) M2C_FIELD(temp_s0, s16 *, 0x328) - 1);
                    }
                }
            } else {
                func_800CEAC0(arg0, arg1, temp_s5, temp_s6, sp18, (s32) temp_fp);
                func_800CEBD0(arg0, arg1, temp_s5, temp_s6, sp18, (s32) temp_fp);
                if (M2C_FIELD(temp_s0, s16 *, 0x328) <= 0) {
                    func_800CF290(arg1);
                    func_800CF2E4(arg1);
                    M2C_FIELD(temp_s0, s16 *, 0x328) = 1;
                    M2C_FIELD(temp_s0, s16 *, 0x342) = 3;
                    func_80034AB0(0x8F);
                } else {
                    M2C_FIELD(temp_s0, s16 *, 0x328) = (s16) ((u16) M2C_FIELD(temp_s0, s16 *, 0x328) - 1);
                    func_800CF13C(arg1);
                    func_800CF1B4(arg1);
                }
            }
            break;
        case 0:                                     /* switch 1 */
            func_800CEC68(arg1, temp_s5, temp_s6);
            func_800CECEC(arg1, temp_s5, temp_s6);
            M2C_FIELD(temp_s0, u16 *, 0x324) = (u16) M2C_FIELD(temp_s0, u16 *, 0x326);
            M2C_FIELD(temp_s0, u16 *, 0x32A) = (u16) M2C_FIELD(temp_s0, u16 *, 0x32C);
            temp_v0 = func_800CF304(arg1);
            M2C_FIELD(temp_s0, u16 *, 0x326) = temp_v0;
            if ((s16) temp_v0 == -1) {
                M2C_FIELD(temp_s0, s16 *, 0x342) = 3;
                M2C_FIELD(temp_s0, u16 *, 0x326) = (u16) M2C_FIELD(temp_s0, u16 *, 0x324);
                func_800CE638(arg0, arg1);
                func_800CE748(arg0, arg1);
            } else {
                M2C_FIELD(temp_s0, u16 *, 0x32C) = func_800CF4BC(arg1, (s16) temp_v0, 1);
                M2C_FIELD(temp_s0, s16 *, 0x328) = func_800D06D4((s16) M2C_FIELD(temp_s0, u16 *, 0x324), (s16) M2C_FIELD(temp_s0, u16 *, 0x326));
                M2C_FIELD(temp_s0, s16 *, 0x342) = 1;
                func_800CE638(arg0, arg1);
                func_800CE748(arg0, arg1);
                func_800CDFDC(arg1);
                temp_v0_2 = (temp_s3 * 0x1A8) + D_80091618;
                M2C_FIELD(temp_v0_2, s32 *, 0x54) = (s32) M2C_FIELD(temp_s0, s16 *, 0x336);
                M2C_FIELD(temp_v0_2, s32 *, 0x58) = (s32) M2C_FIELD(temp_s0, s16 *, 0x338);
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
                    func_800CEF08(arg1, (s16) M2C_FIELD(temp_s0, u16 *, 0x32A), (s16) M2C_FIELD(temp_s0, u16 *, 0x32C));
                    M2C_FIELD(temp_s0, s16 *, 0x342) = temp_s4;
                } else {
                    func_800CE164(arg1);
                    func_800CE204(arg1, arg0);
                }
            }
            func_800CE87C(arg0, arg1, temp_s5, temp_s6);
            func_800CE98C(arg0, arg1, temp_s5, temp_s6);
            break;
        }
        break;
    default:
        func_800CE638(arg0, arg1);
        M2C_FIELD(temp_s0, s16 *, 0x344) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x2BC) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x2BC) + 1);
        break;
    }
    return M2C_FIELD(temp_s0, s32 *, 0x2BC);
}
