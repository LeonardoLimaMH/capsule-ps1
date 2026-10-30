#include "common.h"

s32 func_800B3824(s32 arg0, s32 arg1) {
    extern M2C_UNK D_8006AF80[];
    extern s32 D_8006AF84[];
    extern M2C_UNK D_8006AFCC[];
    extern s16 D_8006AFFC[];
    extern s32 D_8006B014[];
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_80105990[];
    u32 temp_a0;
    u32 temp_a0_2;
    u32 temp_s0;
    u32 temp_s0_2;
    u32 temp_s0_3;
    u32 temp_s0_4;
    u32 temp_v0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_s2;
    u32 var_s0;
    u32 var_v0;
    void *temp_s3;

    temp_s0 = M2C_FIELD(D_8006AF80, s32 *, 4);
    switch (M2C_FIELD(D_8006AFCC, u16 *, 0x30)) {  /* irregular */
    case 0:
        var_a1 = func_800B4704(2);
        if (temp_s0 >= 0x4B0) {
            temp_s0_2 = temp_s0 % 1200;
            if (temp_s0_2 != 0) {
                if ((temp_s0_2 == (((temp_s0 % 1200) / 600) * 0x258)) && ((M2C_FIELD(D_8006AFCC, s32 *, 0x48) == 0) || ((M2C_FIELD(D_8006AF80, s32 *, 4) - M2C_FIELD(D_8006AFCC, s32 *, 0x48)) >= var_a1))) {
                    var_s0 = 0x18;
                    if (M2C_FIELD((((arg0 & 0xFFFF) * 0x1A8) + (u8 *)D_80091618), u16 *, 0x10) != 4) {
                        var_a0 = func_800202A4(0x18, var_a1);
                        var_a1 = arg1 & 0xFFFF;
                        if (var_a1 != 0xFFFF) {
                            var_v0 = 0x18U >> 1;
                            if (M2C_FIELD(((var_a1 * 0x1A8) + (u8 *)D_80091618), u16 *, 0x10) == 4) {
                                goto block_11;
                            }
                        } else {
                            goto block_12;
                        }
                    } else {
block_11:
                        var_s0 = 0x3C0;
                        var_a0 = func_800202A4(0x3C0, var_a1);
block_12:
                        var_v0 = var_s0 >> 1;
                    }
                    if (var_a0 == var_v0) {
                        (*D_8006AFFC) = 2;
                        temp_a0 = arg0 & 0xFFFF;
                        if (func_800202A4(0xA) == 5) {
                            func_800DC744(temp_a0, 0x21);
                            return 1;
                        }
                        func_800DC6EC(temp_a0, 0xF);
                        return 1;
                    }
                    /* Duplicate return node #43. Try simplifying control flow for better match */
                    return 0;
                }
                /* Duplicate return node #43. Try simplifying control flow for better match */
                return 0;
            }
            /* Duplicate return node #43. Try simplifying control flow for better match */
            return 0;
        }
    default:
        return 0;
    case 1:
        if ((M2C_FIELD(D_8006AFCC, u16 *, 0x34) == 0) && ((M2C_FIELD(D_80105990, s16 *, 2) != M2C_FIELD(D_8006AFCC, u16 *, 0x30)) || (M2C_FIELD(D_80105990, s16 *, 4) != M2C_FIELD(D_80105990, s16 *, 2)))) {
            if (((*D_8006AF84) - (*D_8006B014)) < 0x1C20) {
                if (temp_s0 >= 0x4B0) {
                    temp_s0_3 = temp_s0 % 1200;
                    if (temp_s0_3 != 0) {
                        if ((temp_s0_3 == (((temp_s0 % 1200) / 600) * 0x258)) && (func_800202A4(0xC, MULT_HI(temp_s0_3, 0x1B4E81B5)) == 6)) {
                            goto block_25;
                        }
                    }
                }
            } else {
block_25:
                temp_a0_2 = arg0 & 0xFFFF;
                if (M2C_FIELD(D_80105990, s16 *, 0) == 1) {
                    func_800DC8F4(temp_a0_2, 0x22);
                    var_s2 = 1;
                } else {
                    func_800DC878(temp_a0_2, 0x10);
                    var_s2 = 1;
                }
                do {
                    var_a0_2 = arg1 & 0xFFFF;
                    if (var_s2 == 1) {
                        var_a0_2 = arg0 & 0xFFFF;
                    }
                    if (var_a0_2 != 0xFFFF) {
                        temp_s3 = (var_a0_2 * 0x1A8) + (u8 *)D_80091618;
                        temp_s0_4 = var_a0_2 & 0xFFFF;
                        if ((M2C_FIELD(temp_s3, u16 *, 0) == 0xA) && (func_800E14C4(temp_s0_4) == 0) && (func_800E16AC(temp_s0_4) != 1) && (func_800E1140(temp_s0_4) != 0)) {
                            temp_v0 = func_800E1388(temp_s0_4);
                            if ((temp_v0 == 1) && (func_800E1594(temp_s0_4) != temp_v0) && (func_800E1624(temp_s0_4) != temp_v0) && (func_800E0FB8(temp_s0_4, 0xFFFF) != temp_v0)) {
                                func_800C8320(M2C_FIELD(temp_s3, s32 *, 0x178), var_s2, 5);
                            }
                        }
                    }
                    var_s2 -= 1;
                } while (var_s2 >= 0);
            }
        }
        /* Duplicate return node #43. Try simplifying control flow for better match */
        return 0;
    }
}
