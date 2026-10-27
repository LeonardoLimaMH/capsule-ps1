#include "common.h"

void func_80033100(s32 arg0, s32 arg1, s32 arg2) {
    extern u8 D_800981F0[];
    extern u8 D_800ACF80[];
    extern u8 D_800AD55C[];
    s16 temp_v0_2;
    s16 var_v0;
    s16 var_v0_2;
    s32 temp_v1;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    void *temp_v0;

    var_s2 = 0;
    var_s5 = 0;
    do {
        var_s1 = 5;
        var_s4 = 0xA0;
        var_s3 = 0x26C;
loop_2:
        if (M2C_FIELD((arg0 + (var_s3 + var_s5)), u8 *, 0x613) != 1) {
            temp_v0 = func_80015B3C(D_800ACF80, D_800981F0, arg1);
            M2C_FIELD(temp_v0, s32 *, 0x30) = (s32) ((M2C_FIELD(temp_v0, s32 *, 0x30) & ~0x30) | 0x10);
            func_80015EF8(temp_v0);
            M2C_FIELD(temp_v0, s16 *, 0x4E) = 3;
            M2C_FIELD(temp_v0, s16 *, 0x4A) = (s16) (((var_s1 >> 1) * 0x38) - 0x18);
            M2C_FIELD(temp_v0, s32 *, 0x7C) = var_s2;
            M2C_FIELD(temp_v0, s32 *, 0x80) = var_s1;
            M2C_FIELD(temp_v0, s32 *, 0x30) = (s32) ((M2C_FIELD(temp_v0, s32 *, 0x30) & ~0x1C0) | 0x40);
            M2C_FIELD(temp_v0, s32 *, 0x34) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x34) & ~0x7F);
            if (var_s2 != 0) {
                var_v0 = 0xC8;
                if (!(var_s1 & 1)) {
                    var_v0 = 0x100;
                }
            } else {
                var_v0 = -0x100;
                if (!(var_s1 & 1)) {
                    var_v0 = -0xC8;
                }
            }
            M2C_FIELD(temp_v0, s16 *, 0x46) = var_v0;
            if (var_s2 != 0) {
                var_v0_2 = -2;
            } else {
                var_v0_2 = 2;
            }
            M2C_FIELD(temp_v0, s16 *, 0x6A) = var_v0_2;
            M2C_FIELD(temp_v0, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x38) | 8);
            temp_v1 = func_80097AF0(arg0, var_s2, var_s1);
            if (var_s2 == (arg2 & 0xFF)) {
                func_80015CD0(temp_v0 + 0x14, func_80019F30(temp_v1 | 0x70000, 0x1C), 0);
                temp_v0_2 = 0x280 - M2C_FIELD(D_800AD55C, u16 *, 0);
                M2C_FIELD(temp_v0, s16 *, 0x28) = temp_v0_2;
                M2C_FIELD(temp_v0, s16 *, 0x28) = (s16) (temp_v0_2 - 0xC0 + var_s4);
                M2C_FIELD(temp_v0, s16 *, 0x2A) = (s16) ((var_s2 << 7) - M2C_FIELD(D_800AD55C, u16 *, 2));
            } else {
                func_80015CD0(temp_v0 + 0x14, func_80019F30(temp_v1 | 0x70000, 0), 0);
            }
        }
        var_s4 -= 0x20;
        var_s1 -= 1;
        var_s3 -= 0x7C;
        if (var_s1 >= 0) {
            goto loop_2;
        }
        var_s2 += 1;
        var_s5 += 0x2E8;
    } while (var_s2 < 2);
}
