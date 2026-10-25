#include "common.h"

void func_8009D0AC(s32 arg0) {
    extern int func_800161C4();
    extern int func_8009CEE8();
    s32 temp_v0_3;
    s32 var_a1;
    s32 var_s1;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s3;
    void *temp_v0;
    void *temp_v0_2;

    var_s2 = 0;
    do {
        temp_v0 = func_80015B3C(&func_8009CEE8, &func_800161C4, 5);
        func_80015EF8(temp_v0);
        M2C_FIELD(temp_v0, s32 *, 0x7C) = var_s2;
        M2C_FIELD(temp_v0, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x38) | 1);
        M2C_FIELD(temp_v0, s32 *, 0x34) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x34) & ~0x7F);
        if (var_s2 == 0) {
            M2C_FIELD(temp_v0, s16 *, 0x46) = -0x80;
        } else {
            M2C_FIELD(temp_v0, s16 *, 0x46) = 8;
        }
        M2C_FIELD(temp_v0, s16 *, 0x4A) = -0x60;
        M2C_FIELD(temp_v0, s16 *, 0x4E) = 5;
        var_a1 = 0x1A;
        if (M2C_FIELD((arg0 + var_s2), u8 *, 0x10) == 0) {
            var_a1 = var_s2 + 0x18;
        }
        M2C_FIELD(temp_v0, s32 *, 0x18) = func_80019F30(0x60012, var_a1);
        var_s2 += 1;
    } while (var_s2 < 2);
    var_s2_2 = 0;
    var_s3 = 0;
    do {
        var_s1 = 0;
loop_9:
        if (func_800A8E34(arg0, var_s2_2, var_s1) == 0) {
            temp_v0_2 = func_80015B3C(&func_8009CEE8, &func_800161C4, 5);
            func_80015EF8(temp_v0_2);
            M2C_FIELD(temp_v0_2, s32 *, 0x7C) = var_s2_2;
            M2C_FIELD(temp_v0_2, s32 *, 0x80) = var_s1;
            M2C_FIELD(temp_v0_2, s32 *, 0x84) = var_s3;
            temp_v0_3 = M2C_FIELD(temp_v0_2, s32 *, 0x38) | 1;
            M2C_FIELD(temp_v0_2, s32 *, 0x38) = temp_v0_3;
            M2C_FIELD(temp_v0_2, s32 *, 0x34) = (s32) ((M2C_FIELD(temp_v0_2, s32 *, 0x34) & ~0x7F) | 1);
            M2C_FIELD(temp_v0_2, s32 *, 0x38) = (s32) ((temp_v0_3 | 0x40) & ~0x30);
            if (var_s2_2 == 0) {
                M2C_FIELD(temp_v0_2, s16 *, 0x46) = -0x80;
            } else {
                M2C_FIELD(temp_v0_2, s16 *, 0x46) = 8;
            }
            M2C_FIELD(temp_v0_2, s16 *, 0x4A) = (s16) ((var_s3 << 5) - 0x60);
            M2C_FIELD(temp_v0_2, s16 *, 0x4E) = 5;
            if (var_s1 != 5) {
                M2C_FIELD(temp_v0_2, s32 *, 0x18) = func_80019F30(0x60012, 0x24);
                M2C_FIELD(temp_v0_2, s32 *, 0x88) = 0;
            } else {
                M2C_FIELD(temp_v0_2, s32 *, 0x18) = func_80019F30(0x60012, 0x25);
                M2C_FIELD(temp_v0_2, s32 *, 0x88) = 1;
            }
            var_s3 += 1;
        }
        var_s1 += 1;
        if (var_s1 < 6) {
            goto loop_9;
        }
        var_s2_2 += 1;
        var_s3 = 0;
    } while (var_s2_2 < 2);
}
