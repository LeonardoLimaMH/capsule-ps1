#include "common.h"

void func_800EE8CC(void *arg0) {
    extern s8 D_8008610C[];
    s16 var_s0;
    s32 temp_lo;
    u8 var_s1;

    var_s1 = M2C_FIELD(arg0, u8 *, 0x15);
    var_s0 = M2C_FIELD(arg0, s16 *, 0x16) + 1;
    if (var_s1 != 1) {
        if ((s32) var_s1 < 2) {
            if (var_s1 != 0) {
                M2C_FIELD(arg0, u8 *, 0x15) = var_s1;
            } else {
                M2C_FIELD(arg0, s16 *, 0x3A) = (s16) ((s32) (var_s0 * 0x96) / 10);
                if (var_s0 >= 0xA) {
                    var_s0 = 0;
                    func_80034AB0(0x800F, 1);
                    M2C_FIELD(arg0, u8 *, 0x15) = 1U;
                } else {
                    goto block_14;
                }
            }
            goto block_15;
        }
        if (var_s1 != 2) {
            if (var_s1 != 3) {
                M2C_FIELD(arg0, u8 *, 0x15) = var_s1;
                goto block_15;
            }
            func_80013920(arg0, 1);
            return;
        }
        temp_lo = (s32) ((0x46 - var_s0) * 0x7F) / 70;
        M2C_FIELD(arg0, s8 *, 0x32) = (s8) temp_lo;
        M2C_FIELD(arg0, s8 *, 0x31) = (s8) temp_lo;
        M2C_FIELD(arg0, s8 *, 0x30) = (s8) temp_lo;
        if (var_s0 >= 0x46) {
            var_s1 = 3;
            var_s0 = 0;
        }
        goto block_14;
    }
    M2C_FIELD(arg0, s16 *, 0x3C) = (s16) ((s32) (var_s0 * 0x640) / 10);
    if (var_s0 >= 0xA) {
        var_s1 = 2;
        var_s0 = 0;
        (*D_8008610C) = 1;
    }
block_14:
    M2C_FIELD(arg0, u8 *, 0x15) = var_s1;
block_15:
    M2C_FIELD(arg0, s16 *, 0x16) = var_s0;
}
