#include "common.h"

void func_800A3410(void *arg0) {
    extern M2C_UNK D_800859F8[];
    extern M2C_UNK D_8008ED68[];
    M2C_UNK var_a1_2;
    s16 var_a1;
    s16 var_a1_3;
    s16 var_v1;
    s16 var_v1_2;
    s32 temp_v1;

    if ((u32) (M2C_FIELD(D_8008ED68, u16 *, 0xDC) - 0x11) < 2U) {
        var_a1 = -0x88;
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
        if (M2C_FIELD(arg0, s32 *, 0x84) != 0) {
            var_a1 = 0x38;
        }
        var_v1 = 0x58;
        M2C_FIELD(arg0, s16 *, 0x46) = var_a1;
        if (M2C_FIELD(arg0, s32 *, 0x80) < 2) {
            var_v1 = 0x50;
        }
        M2C_FIELD(arg0, s16 *, 0x4A) = var_v1;
        if (M2C_FIELD(arg0, s32 *, 0x80) == 1) {
            if (M2C_FIELD(D_800859F8, u8 *, 0x11) != 0) {
                var_a1_2 = 0x3F;
            } else {
                goto block_17;
            }
            goto block_18;
        }
    } else {
        temp_v1 = M2C_FIELD(D_8008ED68, u16 *, 0xDC) & 0xFFFF;
        if (((temp_v1 == 0x13) && (M2C_FIELD(D_8008ED68, u16 *, 0xE0) == 0)) || ((temp_v1 == 0x1B) && (M2C_FIELD(D_8008ED68, u16 *, 0xE0) == 4))) {
            var_a1_3 = -0x70;
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
            if (M2C_FIELD(arg0, s32 *, 0x84) != 0) {
                var_a1_3 = 0x18;
            }
            var_v1_2 = 0x40;
            M2C_FIELD(arg0, s16 *, 0x46) = var_a1_3;
            if (M2C_FIELD(arg0, s32 *, 0x80) < 2) {
                var_v1_2 = 0x38;
            }
            M2C_FIELD(arg0, s16 *, 0x4A) = var_v1_2;
            if (M2C_FIELD(arg0, s32 *, 0x80) == 1) {
block_17:
                var_a1_2 = 0x15;
block_18:
                M2C_FIELD(arg0, s32 *, 0x18) = func_80019F30(0x60010, var_a1_2, D_800859F8);
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
        }
    }
}
