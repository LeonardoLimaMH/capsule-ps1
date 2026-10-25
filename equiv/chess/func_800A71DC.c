#include "common.h"

void func_800A71DC(void *arg0) {
    extern u8 D_80085428[];
    extern u32 D_8008ED84[];
    M2C_UNK var_a3;
    s32 temp_a0;
    s32 temp_s3;
    s32 var_a1;
    u8 temp_s2;
    void *temp_s4;

    temp_s4 = D_80085428 + 0x5D0;
    temp_s2 = M2C_FIELD(D_80085428, u8 *, 0xBF4);
    temp_s3 = temp_s2 - 5;
    if (func_800CAE6C(temp_s4) >= 3) {
        M2C_FIELD(arg0, s16 *, 0x4A) = -0x50;
        M2C_FIELD(arg0, s16 *, 0x46) = 0;
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x34) & 0x7F;
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
        if (temp_a0 < 5) {
            if (temp_a0 < 3) {
                if (temp_a0 == 2) {
                    var_a1 = 0x36;
                    if (M2C_FIELD((temp_s3 + D_80085428), u8 *, 0x5E0) == 0) {
                        var_a1 = temp_s2 + 0x2F;
                    }
                    M2C_FIELD(arg0, s32 *, 0x18) = func_80019F30(0x60012, var_a1);
                }
            } else {
                var_a3 = 2;
                if (temp_a0 == 3) {
                    var_a3 = 1;
                }
                if ((M2C_FIELD(D_80085428, u8 *, 0xBFA) != 0) || (func_8009DA94(temp_s4, temp_s3, M2C_FIELD(D_80085428, u8 *, 0xBF8), var_a3) == (s8) M2C_FIELD(D_80085428, u8 *, 0xBF8)) || !(((u32) (*D_8008ED84) >> 4) & 1)) {
                    goto block_12;
                }
            }
        }
    } else {
block_12:
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
    }
}
