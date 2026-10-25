#include "common.h"

void func_800BF39C(void *arg0) {
    extern u8 D_8008ED68[];
    s32 temp_s3;
    s32 temp_v1_3;
    s32 temp_v1_6;
    s8 var_v0;
    u16 temp_v1;
    u16 temp_v1_2;
    u16 temp_v1_4;
    u16 var_v0_2;
    u16 var_v0_3;
    u8 temp_s1;
    u8 temp_s2;
    u8 temp_s4;
    u8 temp_v1_5;
    void *temp_s0;
    void *temp_s5;
    void *temp_v0;
    void *temp_v0_2;

    temp_s0 = arg0 + 0x5D0;
    temp_s2 = M2C_FIELD(temp_s0, u8 *, 0x712);
    switch (M2C_FIELD(D_8008ED68, u16 *, 0xE8)) {  /* irregular */
    default:
        var_v0 = 2;
        if (M2C_FIELD(D_8008ED68, u16 *, 0xE8) != 0) {
            return;
        }
        M2C_FIELD(arg0, u16 *, 0xC) = 0U;
block_26:
        M2C_FIELD(temp_s0, s8 *, 0x7A7) = var_v0;
block_27:
        func_80012628();
        return;
    case 1:
        func_800A0340(arg0, M2C_FIELD(arg0, u16 *, 0xC));
        if ((u16) M2C_FIELD(arg0, u16 *, 0xC) < 6U) {
            temp_v1 = M2C_FIELD(arg0, u16 *, 0xC);
            if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
                var_v0_2 = temp_v1 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
            } else {
                var_v0_2 = temp_v1 + 1;
            }
block_25:
            M2C_FIELD(arg0, u16 *, 0xC) = var_v0_2;
            return;
        }
        if (M2C_FIELD((temp_s0 + temp_s2), u8 *, 0x10) != 0) {
            temp_v1_2 = M2C_FIELD(arg0, u16 *, 0xC);
            if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
                var_v0_3 = temp_v1_2 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
            } else {
                var_v0_3 = temp_v1_2 + 1;
            }
            M2C_FIELD(arg0, u16 *, 0xC) = var_v0_3;
            if ((u32) (var_v0_3 & 0xFFFF) >= 0x1BU) {
                M2C_FIELD(arg0, u16 *, 0xC) = 6U;
                func_800AECC4(temp_s0, temp_s2);
            }
        }
        temp_v1_3 = M2C_FIELD(((temp_s2 * 0x10) + D_8008ED68), s32 *, 0x88);
        if (!(temp_v1_3 & 0x40)) {
            if (temp_v1_3 & 0x20) {
                goto block_27;
            }
            return;
        }
        goto block_27;
    case 2:
        func_800A0340(arg0, M2C_FIELD(arg0, u16 *, 0xC));
        var_v0 = 3;
        if (M2C_FIELD(arg0, u16 *, 0xC) != 0) {
            temp_v1_4 = M2C_FIELD(arg0, u16 *, 0xC);
            if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
                var_v0_2 = temp_v1_4 - M2C_FIELD(D_8008ED68, u8 *, 0x103);
            } else {
                var_v0_2 = temp_v1_4 - 1;
            }
            goto block_25;
        }
        goto block_26;
    case 3:
        temp_v1_5 = M2C_FIELD(temp_s0, u8 *, 0x61A);
        if ((temp_v1_5 == 0) || (temp_v1_5 == 5)) {
            temp_s5 = temp_s0 + temp_s2;
            if (M2C_FIELD(temp_s5, u8 *, 0x10) != 0) {
                func_800AE728(temp_s0, temp_s2);
            }
            temp_s3 = temp_s2 * 2;
            func_800C8EF0(arg0, temp_s2, temp_s0 + (temp_s3 + 0x601));
            if (M2C_FIELD(temp_s0, u8 *, 0x61A) != 5) {
                temp_v1_6 = M2C_FIELD(((temp_s2 * 0x10) + D_8008ED68), s32 *, 0x88);
                temp_v0 = temp_s0 + temp_s3;
                if (temp_v1_6 & 0x20) {
                    temp_s1 = M2C_FIELD(temp_v0, u8 *, 0x601);
                    temp_s4 = M2C_FIELD(temp_v0, u8 *, 0x602);
                    if (M2C_FIELD(((temp_s1 * 0xD) + temp_s0 + temp_s4), u8 *, 0x630) == 2) {
                        func_80034AB0(0x48);
                        M2C_FIELD(temp_s0, s8 *, 0x619) = 0;
                        M2C_FIELD(temp_s0, s8 *, 0x7A7) = 1;
                        if (M2C_FIELD(temp_s5, u8 *, 0x10) == 0) {
                            temp_v0_2 = temp_s0 + (temp_s2 * 6);
                            M2C_FIELD(temp_v0_2, u8 *, 0x5EE) = temp_s1;
                            M2C_FIELD(temp_v0_2, u8 *, 0x5EF) = temp_s4;
                        }
                        M2C_FIELD(temp_s0, s8 *, 0x615) = 0;
                        M2C_FIELD(temp_s0, s8 *, 0x614) = 0;
                        func_800125D8();
                        return;
                    }
                    func_80034AB0(0x4C);
                    return;
                }
                if (temp_v1_6 & 0x40) {
                    func_80034AB0(0x5D);
                    M2C_FIELD(temp_s0, s8 *, 0x619) = 0;
                    M2C_FIELD(temp_s0, s8 *, 0x7A7) = 1;
                    func_80012604(1);
                }
            }
        }
        break;
    }
}
