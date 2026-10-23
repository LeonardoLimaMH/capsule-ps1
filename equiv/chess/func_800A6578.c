#include "common.h"

void func_800A6578(void *arg0) {
    extern M2C_UNK D_80085428[];
    extern u16 D_8008EE4C[];
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s6;
    s32 temp_v0;
    s32 var_a1;
    s32 var_s5;
    s32 var_v0;
    u16 temp_v1;
    void *var_a0;
    void *var_s0;

    var_s5 = 0;
    temp_s2 = M2C_FIELD(arg0, s32 *, 0x7C);
    temp_s3 = M2C_FIELD(arg0, s32 *, 0x80);
    temp_v1 = M2C_FIELD(arg0, u16 *, 0x7A);
    temp_s6 = M2C_FIELD(arg0, s32 *, 0x84);
    if (temp_v1 != 1) {
        if ((s32) temp_v1 < 2) {
            if (temp_v1 != 0) {
                var_s0 = D_80085428 + 0x5D0;
                goto block_30;
            }
            if (M2C_FIELD(D_80085428, u8 *, 1) != 0) {
                M2C_FIELD(arg0, u16 *, 0x7A) = 1U;
                var_v0 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
            } else if (M2C_FIELD(((temp_s3 * 0x7C) + (temp_s2 * 0x2E8) + D_80085428), u8 *, 0x5FF) == 0) {
                var_v0 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
            } else {
                M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
                switch ((*D_8008EE4C)) {               /* irregular */
                case 14:
                    M2C_FIELD(arg0, u16 *, 0x7A) = (u16) (M2C_FIELD(arg0, u16 *, 0x7A) + 1);
                    goto block_29;
                default:
                    var_s0 = D_80085428 + 0x5D0;
                    if ((*D_8008EE4C) == 3) {
                    case 5:
                    case 2:
                        var_s0 = D_80085428 + 0x5D0;
                        if (temp_s2 == M2C_FIELD(D_80085428, u8 *, 0xBCA)) {
                            var_a0 = var_s0;
                            if (temp_s3 != 5) {
                                if (M2C_FIELD(D_80085428, u8 *, 0xBEA) == 0) {
                                    var_s5 = 1;
                                }
                            }
                        } else {
                            goto block_30;
                        }
                    } else {
                        goto block_30;
                    }
                    break;
                }
                goto block_32;
            }
            goto block_51;
        }
        if (temp_v1 != 2) {
            if (temp_v1 != 3) {
                var_s0 = D_80085428 + 0x5D0;
                goto block_30;
            }
            if (func_800A8E34(D_80085428 + 0x5D0, temp_s2, temp_s3) == 0) {
                M2C_FIELD(arg0, u16 *, 0x7A) = 1U;
            }
            var_v0 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
            goto block_51;
        }
        if (func_800C5BCC(arg0) != 0) {
            M2C_FIELD(arg0, u16 *, 0x7A) = 3U;
            var_v0 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
            goto block_51;
        }
    } else {
        temp_v0 = func_800A8E34(D_80085428 + 0x5D0, temp_s2, temp_s3);
        if (temp_v0 == 2) {
            func_800C4ECC(D_80085428, arg0, (temp_s2 * 0x2E8) + 0x5E8 + D_80085428 + (temp_s3 * 0x7C));
            M2C_FIELD(arg0, s32 *, 0x3C) = 0;
            func_80034AB0(0);
            M2C_FIELD(arg0, u16 *, 0x7A) = (u16) (M2C_FIELD(arg0, u16 *, 0x7A) + 1);
            return;
        }
        if (temp_v0 != 0) {
            M2C_FIELD(arg0, u16 *, 0x7A) = 3U;
            return;
        }
block_29:
        var_s0 = D_80085428 + 0x5D0;
block_30:
        var_a0 = var_s0;
block_32:
        if (func_800A8D44(var_a0, temp_s2, temp_s3) != 0) {
            var_v0 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
        } else {
            if ((u8) M2C_FIELD(D_80085428, u8 *, 0xBEA) < 5U) {
                if (var_s5 == 0) {
                    if (func_800A8DB4(var_s0, temp_s2, temp_s3) == 0) {
                        if (func_800A8D7C(var_s0, temp_s2, temp_s3) == 0) {
                            var_a1 = temp_s6 + 5;
                        } else {
                            var_a1 = temp_s6 + 8;
                        }
                    } else if (func_800A8D7C(var_s0, temp_s2, temp_s3) == 0) {
                        var_a1 = 0xB;
                    } else {
                        var_a1 = 2;
                    }
                } else {
                    var_a1 = 4;
                }
                M2C_FIELD(arg0, s32 *, 0x18) = func_80019F30(0x60012, var_a1);
                M2C_FIELD(arg0, s16 *, 0x66) = (s16) M2C_FIELD((D_80085428 + temp_s2), u8 *, 0x5E2);
            } else {
                M2C_FIELD(arg0, s32 *, 0x18) = func_80019F30(0x60012, 1);
                if (temp_s3 != 5) {
                    M2C_FIELD(arg0, s16 *, 0x66) = (s16) M2C_FIELD((D_80085428 + temp_s2), u8 *, 0x5E2);
                } else {
                    M2C_FIELD(arg0, s16 *, 0x66) = 8;
                }
            }
            func_800C9648(D_80085428, arg0, temp_s2, temp_s3, 0, 0);
            func_800A7A60(D_80085428, arg0, temp_s2, temp_s3);
            if (func_800CAECC(D_80085428, temp_s2, temp_s3) == 0) {
                var_v0 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
            } else {
                var_v0 = M2C_FIELD(arg0, s32 *, 0x38) & ~1;
            }
        }
block_51:
        M2C_FIELD(arg0, s32 *, 0x38) = var_v0;
    }
}
