#include "common.h"

void func_8009E448(void *arg0) {
    extern int func_800161C4();
    extern int func_8009CC8C();
    s32 var_a0;
    s32 var_a1;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_v1;
    void *temp_s3;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v1;
    void *var_v0;

    temp_s3 = arg0 + 0x5D0;
    var_s1 = 0;
    if (func_800C9414() == 0) {
        do {
            temp_v0 = func_80015B3C(&func_8009CC8C, &func_800161C4, 5);
            func_80015EF8(temp_v0);
            if (var_s1 == 1) {
                var_a0 = 0x60012;
                if (M2C_FIELD(temp_s3, u16 *, 0x10) != 0) {
                    var_a1 = 0x31;
                } else {
                    goto block_6;
                }
            } else {
block_6:
                var_a0 = 0x60012;
                var_a1 = var_s1 + 0x2E;
            }
            M2C_FIELD(temp_v0, s32 *, 0x18) = func_80019F30(var_a0, var_a1);
            M2C_FIELD(temp_v0, s16 *, 0x7A) = 1;
            M2C_FIELD(temp_v0, s16 *, 0x46) = -0x70;
            M2C_FIELD(temp_v0, s16 *, 0x4A) = -0x58;
            M2C_FIELD(temp_v0, s16 *, 0x4E) = 4;
            M2C_FIELD(temp_v0, s32 *, 0x34) = (s32) ((M2C_FIELD(temp_v0, s32 *, 0x34) & ~0x7F) | (var_s1 & 0x7F));
            if (M2C_FIELD(arg0, u8 *, 0xBCA) != 0) {
                M2C_FIELD(temp_v0, s16 *, 0x46) = 0x10;
            }
            var_s1 += 1;
        } while (var_s1 < 3);
        temp_v0_2 = func_80015B3C(&func_8009CC8C, &func_800161C4, 5);
        func_80015EF8(temp_v0_2);
        M2C_FIELD(temp_v0_2, s32 *, 0x18) = func_80019F30(0x60012, 0x2D);
        M2C_FIELD(temp_v0_2, s16 *, 0x7A) = 1;
        M2C_FIELD(temp_v0_2, s16 *, 0x46) = -0x70;
        M2C_FIELD(temp_v0_2, s16 *, 0x4A) = -0x58;
        M2C_FIELD(temp_v0_2, s16 *, 0x4E) = 4;
        M2C_FIELD(temp_v0_2, s32 *, 0x34) = (s32) ((M2C_FIELD(temp_v0_2, s32 *, 0x34) & ~0x7F) | 0xA);
        if (M2C_FIELD(arg0, u8 *, 0xBCA) != 0) {
            M2C_FIELD(temp_v0_2, s16 *, 0x46) = 0x10;
        }
        var_s1_2 = 0;
        do {
            temp_v0_3 = func_80015B3C(&func_8009CC8C, &func_800161C4, 5);
            func_80015EF8(temp_v0_3);
            M2C_FIELD(temp_v0_3, s32 *, 0x18) = func_80019F30(0x60012, var_s1_2 + 0x27);
            M2C_FIELD(temp_v0_3, u16 *, 0x46) = -0x90U;
            M2C_FIELD(temp_v0_3, s16 *, 0x4A) = -0x68;
            M2C_FIELD(temp_v0_3, s16 *, 0x4E) = 4;
            M2C_FIELD(temp_v0_3, s32 *, 0x34) = (s32) ((M2C_FIELD(temp_v0_3, s32 *, 0x34) & ~0x7F) | (var_s1_2 & 0x7F));
            if (M2C_FIELD(arg0, u8 *, 0xBCA) != 0) {
                M2C_FIELD(temp_v0_3, u16 *, 0x46) = (u16) (M2C_FIELD(temp_v0_3, u16 *, 0x46) + 0xD0);
            }
            temp_v1 = arg0 + 0x5D0;
            if (var_s1_2 == 1) {
                var_v1 = 1;
                if (M2C_FIELD((temp_v1 + M2C_FIELD(temp_v1, u8 *, 0x5FA)), u8 *, 0x16) == 0) {
                    var_v1 = 0;
                }
            } else {
                var_v1 = 1;
                if (var_s1_2 == 3) {
                    var_v1 = 0;
                    if (func_800C9C9C(arg0) != 0) {
                        var_v1 = 1;
                    }
                }
            }
            if (var_v1 == 0) {
                M2C_FIELD(temp_v0_3, s8 *, 0x5A) = 0x40;
                M2C_FIELD(temp_v0_3, s8 *, 0x59) = 0x40;
                M2C_FIELD(temp_v0_3, s8 *, 0x58) = 0x40;
            }
            var_s1_2 += 1;
        } while (var_s1_2 < 6);
        temp_v0_4 = func_80015B3C(&func_8009CC8C, &func_800161C4, 5);
        func_80015EF8(temp_v0_4);
        M2C_FIELD(temp_v0_4, s32 *, 0x18) = func_80019F30(0x60012, 0x26);
        M2C_FIELD(temp_v0_4, u16 *, 0x46) = -0x90U;
        M2C_FIELD(temp_v0_4, s16 *, 0x4A) = -0x68;
        M2C_FIELD(temp_v0_4, s16 *, 0x4E) = 4;
        M2C_FIELD(temp_v0_4, s32 *, 0x34) = (s32) ((M2C_FIELD(temp_v0_4, s32 *, 0x34) & ~0x7F) | 0xA);
        var_s1_3 = 1;
        if (M2C_FIELD(arg0, u8 *, 0xBCA) != 0) {
            M2C_FIELD(temp_v0_4, u16 *, 0x46) = (u16) (M2C_FIELD(temp_v0_4, u16 *, 0x46) + 0xD0);
        }
        var_v0 = temp_s3 + 4;
        M2C_FIELD(temp_s3, s8 *, 0x619) = 0;
        M2C_FIELD(temp_s3, s8 *, 0x610) = 0;
        M2C_FIELD(temp_s3, s8 *, 0x626) = 0;
        M2C_FIELD(temp_s3, s8 *, 0x62A) = 0;
        do {
            M2C_FIELD(var_v0, s32 *, 0x77C) = 0;
            var_s1_3 -= 1;
            var_v0 -= 4;
        } while (var_s1_3 >= 0);
        func_800125D8();
    }
}
