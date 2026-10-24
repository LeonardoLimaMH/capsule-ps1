#include "common.h"

void func_800B48F0(s32 arg0) {
    extern M2C_UNK D_8008ED68[];
    s32 sp10;
    M2C_UNK var_a0_3;
    s32 temp_s3;
    s32 temp_v0;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_v1_2;
    u8 *temp_a0_2;
    u8 *temp_a3;
    u8 *var_v1;
    u8 temp_s1;
    u8 temp_s4;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v1;
    void *temp_a0;
    void *temp_a2;
    void *temp_fp;
    void *temp_s0;
    void *temp_s1_2;
    void *temp_s2;
    void *temp_s5;
    void *temp_v0_4;
    void *temp_v1_3;

    temp_s0 = arg0 + 0x5D0;
    temp_fp = arg0 + 0xCB0;
    temp_s1 = M2C_FIELD(temp_s0, u8 *, 0x5FA);
    temp_s5 = temp_s0 + temp_s1;
    temp_s3 = temp_s1 * 2;
    temp_v0 = temp_s1 * 0x2E8;
    temp_a0 = temp_s0 + (temp_v0 + 0x18);
    sp10 = temp_v0;
    temp_s4 = M2C_FIELD(temp_s5, u8 *, 0x5FB);
    temp_s2 = temp_a0 + (temp_s4 * 0x7C);
    switch (M2C_FIELD(D_8008ED68, u16 *, 0xE8)) {  /* irregular */
    case 0:
        temp_v1 = M2C_FIELD(temp_s0, u8 *, 0x61A);
        if ((temp_v1 == 0) || (temp_v1 == 5)) {
            if (M2C_FIELD(temp_s5, u8 *, 0x10) != 0) {
                func_800AE728(temp_s0, temp_s1);
            }
            func_800C8EF0(arg0, temp_s1, temp_s0 + (temp_s3 + 0x601));
            if (M2C_FIELD(temp_s0, u8 *, 0x61A) != 5) {
                temp_v1_2 = M2C_FIELD(((temp_s1 * 0x10) + D_8008ED68), s32 *, 0x88);
                temp_s1_2 = temp_s0 + temp_s3;
                if (temp_v1_2 & 0x20) {
                    temp_v0_2 = M2C_FIELD(((M2C_FIELD(temp_s1_2, u8 *, 0x601) * 0xD) + temp_s0 + M2C_FIELD(temp_s1_2, u8 *, 0x602)), u8 *, 0x630);
                    M2C_FIELD(temp_fp, u8 *, 0x27) = temp_v0_2;
                    if (temp_v0_2 != 0) {
                        func_80034AB0(0x48);
                        var_a1 = 0;
                        temp_a2 = temp_s1_2 + 0x601;
                        do {
                            temp_a3 = temp_a2 + var_a1;
                            temp_v1_3 = temp_fp + var_a1;
                            M2C_FIELD(temp_v1_3, u8 *, 0) = (u8) M2C_FIELD((temp_s0 + ((M2C_FIELD(temp_s5, u8 *, 0x5FB) * 0x7C) + sp10) + var_a1), u8 *, 0x2D);
                            M2C_FIELD(temp_v1_3, u8 *, 2) = (u8) *temp_a3;
                            if (M2C_FIELD(temp_s5, u8 *, 0x10) == 0) {
                                M2C_FIELD((temp_s0 + (temp_s1 * 6) + var_a1), u8 *, 0x5EE) = (u8) *temp_a3;
                            }
                            var_a1 += 1;
                        } while (var_a1 < 2);
                        var_a0 = 0;
                        M2C_FIELD(temp_s0, s8 *, 0x619) = 0;
                        M2C_FIELD(temp_s0, s8 *, 0x7A7) = 1;
                        if (M2C_FIELD(temp_s0, u8 *, 0x60E) != 0) {
                            var_a0 = M2C_FIELD(temp_s0, u8 *, 0x61E) == 7;
                        }
                        if (var_a0 != 0) {
                            M2C_FIELD(temp_s0, s8 *, 0x614) = 0;
                        }
                        func_80012628(var_a0, var_a1, temp_a2, temp_a3);
                        return;
                    }
                    func_80034AB0(0x4C);
                    return;
                }
                if (temp_v1_2 & 0x40) {
                    func_80034AB0(0x5D);
                    var_a0_2 = 0;
                    M2C_FIELD(temp_s0, s8 *, 0x619) = 0;
                    M2C_FIELD(temp_s0, s8 *, 0x7A7) = 1;
                    if (M2C_FIELD(temp_s0, u8 *, 0x60E) != 0) {
                        var_a0_2 = M2C_FIELD(temp_s0, u8 *, 0x61E) == 7;
                    }
                    var_a1_2 = 0;
                    if (var_a0_2 != 0) {
                        M2C_FIELD(temp_s0, u8 *, 0x60E) = 0U;
                    }
                    temp_a0_2 = temp_s3 + temp_s0 + 0x601;
                    var_v1 = temp_a0_2;
                    do {
                        temp_v0_3 = M2C_FIELD((temp_s2 + var_a1_2), u8 *, 0x15);
                        var_a1_2 += 1;
                        *var_v1 = temp_v0_3;
                        var_v1 = temp_a0_2 + var_a1_2;
                    } while (var_a1_2 < 2);
                    M2C_FIELD(temp_s2, s8 *, 0x17) = 0x81;
                    M2C_FIELD(temp_s2, s8 *, 0x23) = 0;
                    func_800125AC(3, var_a1_2);
                    return;
                }
            }
        } else {
            return;
        }
        break;
    case 1:
        temp_v0_4 = temp_s0 + temp_s3;
        if (func_800C9414(temp_a0) == 0) {
            if (M2C_FIELD(temp_s2, u8 *, 0) == 0x17) {
                var_a0_3 = 7;
                if (M2C_FIELD(temp_s2, u8 *, 0x29) != 0) {
                    M2C_FIELD(temp_s0, s8 *, 0x615) = 0;
                } else {
                    goto block_33;
                }
            } else {
block_33:
                var_a0_3 = 4;
                if (!(func_800AED5C(arg0, temp_s0, M2C_FIELD(temp_v0_4, u8 *, 0x601), M2C_FIELD(temp_v0_4, u8 *, 0x602)) & 0xFF)) {
                    var_v1_2 = 0;
                    M2C_FIELD(temp_s0, s8 *, 0x615) = 0;
                    if (M2C_FIELD(temp_s0, u8 *, 0x60E) != 0) {
                        var_v1_2 = M2C_FIELD(temp_s0, u8 *, 0x61E) == 7;
                    }
                    var_a0_3 = 3;
                    if (var_v1_2 == 0) {
                        var_a0_3 = 7;
                        if ((M2C_FIELD(temp_s2, u8 *, 0) == 0x52) && (temp_s4 != 5)) {
                            var_a0_3 = 6;
                            if (func_800D8D48(((temp_s1 << 7) | (M2C_FIELD((temp_s0 + temp_s1), u8 *, 0x5FB) + 1)) & 0xFF, 0) & 0xFF) {
                                M2C_FIELD(temp_s0, s8 *, 0x614) = 1;
                                M2C_FIELD(temp_s2, u8 *, 0x29) = 1U;
                            } else {
                                var_a0_3 = 7;
                            }
                        }
                    }
                }
            }
            func_80012604(var_a0_3);
        }
        break;
    }
}
