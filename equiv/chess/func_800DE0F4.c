#include "common.h"

void func_800DE0F4(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    extern s32 D_80119714[];
    extern s8 D_8011974C[];
    s16 var_a1;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_lo_3;
    u8 var_s0;

    var_s0 = M2C_FIELD(arg0, u8 *, 0x15);
    var_a1 = M2C_FIELD(arg0, s16 *, 0x16) + 1;
    if (var_s0 != 1) {
        if ((s32) var_s0 < 2) {
            if (var_s0 != 0) {
                M2C_FIELD(arg0, s16 *, 0x16) = var_a1;
                goto block_14;
            }
            temp_lo = (s32) (var_a1 * 0x7F) / 50;
            temp_lo_2 = (s32) (var_a1 * 0x12C) / 50;
            M2C_FIELD(arg0, s8 *, 0x32) = (s8) temp_lo;
            M2C_FIELD(arg0, s8 *, 0x31) = (s8) temp_lo;
            M2C_FIELD(arg0, s8 *, 0x30) = (s8) temp_lo;
            M2C_FIELD(arg0, s16 *, 0x34) = (s16) temp_lo_2;
            M2C_FIELD(arg0, s16 *, 0x38) = (s16) temp_lo_2;
            if (var_a1 >= 0x32) {
                func_800FBB90(0x1E, var_a1);
                var_s0 = 1;
                var_a1 = 0;
                goto block_9;
            }
            goto block_13;
        }
        if (var_s0 != 2) {
            if (var_s0 != 3) {
                M2C_FIELD(arg0, s16 *, 0x16) = var_a1;
                goto block_14;
            }
            goto block_12;
        }
        goto block_11;
    }
block_9:
    if (var_a1 >= 0x32) {
        func_800FE958(0x190, 0, -0x12C);
        (*D_8011974C) = 1;
        var_s0 += 1;
        var_a1 = 0;
block_11:
        temp_lo_3 = (s32) ((0x3C - var_a1) * 0xFF) / 60;
        M2C_FIELD(arg0, s8 *, 0x32) = (s8) temp_lo_3;
        M2C_FIELD(arg0, s8 *, 0x31) = (s8) temp_lo_3;
        M2C_FIELD(arg0, s8 *, 0x30) = (s8) temp_lo_3;
        if (var_a1 >= 0x3C) {
block_12:
            func_80013920(arg0, var_a1);
            (*D_80119714) = 0;
            M2C_FIELD((*D_8008ED68), u16 *, 0xEC) = (u16) (M2C_FIELD((*D_8008ED68), u16 *, 0xEC) + 1);
            return;
        }
        goto block_13;
    }
block_13:
    M2C_FIELD(arg0, s16 *, 0x16) = var_a1;
block_14:
    M2C_FIELD(arg0, u8 *, 0x15) = var_s0;
}
