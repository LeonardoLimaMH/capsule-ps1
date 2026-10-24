#include "common.h"

void func_800B3EC4(s32 arg0) {
    extern M2C_UNK D_8008ED68[];
    s32 temp_v1;
    u8 temp_s1;
    u8 temp_s3;
    u8 var_v0;
    u8 var_v0_2;
    u8 var_v0_3;
    void *temp_s0;

    temp_s0 = arg0 + 0x5D0;
    temp_s1 = M2C_FIELD(temp_s0, u8 *, 0x5FA);
    if (M2C_FIELD(temp_s0, u8 *, 0x61A) == 0) {
        if (M2C_FIELD((temp_s0 + temp_s1), u8 *, 0x10) != 0) {
            func_800AE504(temp_s0, temp_s1);
        }
        temp_s3 = M2C_FIELD(temp_s0, u8 *, 0x625);
        if (M2C_FIELD(((temp_s1 * 0x10) + D_8008ED68), s32 *, 0x88) & 0x20) {
            if ((s8) temp_s3 != 4) {
                func_80034AB0(0x48);
                func_800125D8();
            } else {
                goto block_7;
            }
        } else {
block_7:
            temp_v1 = M2C_FIELD(((temp_s1 * 0x10) + D_8008ED68), s32 *, 0x88);
            if (temp_v1 & 0x40) {
                if ((M2C_FIELD(temp_s0, u8 *, 0x60F) == 0) || (M2C_FIELD(temp_s0, u8 *, 0x60C) != 0)) {
                    func_80034AB0(0x5D);
                    var_v0 = -2U;
                    if (M2C_FIELD(temp_s0, u8 *, 0x60C) == 0) {
                        var_v0 = -1U;
                    }
                    M2C_FIELD(temp_s0, u8 *, 0x625) = var_v0;
                    func_800125D8();
                } else {
                    func_80034AB0(0x4C);
                }
            } else if (temp_v1 & 0x1000) {
                if ((s8) M2C_FIELD(temp_s0, u8 *, 0x625) != 4) {
                    do {
                        var_v0_2 = M2C_FIELD(temp_s0, u8 *, 0x625) - 1;
                        if ((s8) M2C_FIELD(temp_s0, u8 *, 0x625) == 0) {
                            var_v0_2 = 3;
                        }
                        M2C_FIELD(temp_s0, u8 *, 0x625) = var_v0_2;
                    } while (M2C_FIELD((arg0 + (s8) var_v0_2), u8 *, 0xBF0) == 0);
                } else {
                    goto block_21;
                }
            } else {
block_21:
                if (M2C_FIELD(((temp_s1 * 0x10) + D_8008ED68), s32 *, 0x88) & 0x4000) {
                    if ((s8) M2C_FIELD(temp_s0, u8 *, 0x625) != 4) {
                        do {
                            var_v0_3 = M2C_FIELD(temp_s0, u8 *, 0x625) + 1;
                            if ((s8) M2C_FIELD(temp_s0, u8 *, 0x625) >= 3) {
                                var_v0_3 = 0;
                            }
                            M2C_FIELD(temp_s0, u8 *, 0x625) = var_v0_3;
                        } while (M2C_FIELD((arg0 + (s8) var_v0_3), u8 *, 0xBF0) == 0);
                    }
                }
            }
        }
        if ((s8) M2C_FIELD(temp_s0, u8 *, 0x625) == 2) {
            M2C_FIELD(temp_s0, s8 *, 0x614) = 1;
        } else {
            M2C_FIELD(temp_s0, s8 *, 0x614) = 0;
        }
        if ((s8) temp_s3 != (s8) M2C_FIELD(temp_s0, u8 *, 0x625)) {
            func_80034AB0(0x84);
        }
    }
}
