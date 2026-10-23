#include "common.h"

void func_800B9298(s32 arg0) {
    extern M2C_UNK D_8008ED68[];
    s32 sp10;
    u8 sp14;
    M2C_UNK var_a0;
    s16 temp_v0_4;
    s32 temp_a1;
    s32 temp_s5;
    s32 temp_v0;
    s32 temp_v1_2;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0;
    s32 var_v0_2;
    u8 temp_s0;
    u8 temp_s3;
    u8 temp_s6;
    u8 temp_s7;
    u8 temp_v1;
    u8 var_s0;
    void *temp_a0;
    void *temp_a2;
    void *temp_s2;
    void *temp_s4;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_s4 = arg0 + 0x5D0;
    temp_v1 = M2C_FIELD(temp_s4, u8 *, 0x61A);
    temp_s6 = M2C_FIELD(temp_s4, u8 *, 0x5FA);
    if ((temp_v1 == 0) || (temp_v1 == 5)) {
        if (M2C_FIELD((temp_s4 + temp_s6), u8 *, 0x10) != 0) {
            func_800AE8AC(temp_s4, temp_s6);
        }
        temp_v0 = func_800C8DE0(arg0, temp_s4, temp_s6);
        var_s2 = 0;
        var_v0 = temp_v0 & 0xFF;
        do {
            if ((var_v0 >> var_s2) & 1) {
                var_s0 = 0;
                var_s1 = 2;
                temp_s5 = (var_s2 + (M2C_FIELD((temp_s4 + temp_s6), u8 *, 0x605) & 0xFE)) & 7;
                do {
                    var_v0_2 = var_s1;
                    if (var_s1 < 0) {
                        var_v0_2 = (var_s0 * 2) + 9;
                    }
                    if ((temp_s5 == (var_s1 - ((var_v0_2 >> 3) * 8))) && (M2C_FIELD(temp_s4, u8 *, 0x7A8) != var_s0) && (func_800B90FC(temp_s4, var_s0) != 0)) {
                        M2C_FIELD(temp_s4, u8 *, 0x7A8) = var_s0;
                        func_80034AB0(0x84);
                    }
                    var_s0 += 1;
                    var_s1 += 2;
                } while ((s32) var_s0 < 4);
            }
            var_s2 += 2;
            var_v0 = temp_v0 & 0xFF;
        } while (var_s2 < 8);
        if (M2C_FIELD(temp_s4, u8 *, 0x61A) != 5) {
            temp_v1_2 = M2C_FIELD(((temp_s6 * 0x10) + (*D_8008ED68)), s32 *, 0x88);
            if (temp_v1_2 & 0x20) {
                temp_v0_2 = temp_s4 + (temp_s6 * 2);
                temp_s0 = M2C_FIELD(temp_v0_2, u8 *, 0x601);
                temp_s3 = M2C_FIELD(temp_v0_2, u8 *, 0x602);
                temp_s7 = M2C_FIELD(((temp_s0 * 0xD) + temp_s4 + temp_s3), u8 *, 0x630);
                if (temp_s7 == 2) {
                    func_80034AB0(0x48);
                    M2C_FIELD(temp_s4, s8 *, 0x7A7) = 1;
                    M2C_FIELD(temp_s4, s8 *, 0x619) = 0;
                    func_800CA730(arg0, temp_s6, &sp10, &sp14);
                    temp_s2 = temp_s4 + temp_s6;
                    M2C_FIELD(temp_s4, u8 *, 0x70C) = sp14;
                    if (M2C_FIELD(temp_s2, u8 *, 0x10) == 0) {
                        temp_v0_3 = temp_s4 + (temp_s6 * 6);
                        M2C_FIELD(temp_v0_3, u8 *, 0x5F0) = temp_s0;
                        M2C_FIELD(temp_v0_3, u8 *, 0x5F1) = temp_s3;
                    }
                    M2C_FIELD((temp_s4 + ((M2C_FIELD(temp_s2, u8 *, 0x5FB) * 0x7C) + (temp_s6 * 0x2E8))), s8 *, 0x2F) = 1;
                    M2C_FIELD(temp_s4, s8 *, 0x615) = 0;
                    if (((((u32) M2C_FIELD(func_800A8EE8(temp_s4, sp10, (s32) sp14), u32 *, 0x10) >> 2) & 0x1F) != 0xB) || ((s32) sp14 == 5) || (M2C_FIELD((temp_s4 + (((s32) sp14 * 0x7C) + (sp10 * 0x2E8))), u8 *, 0x40) != 0) || (temp_v0_4 = func_800D8894((((u8) sp10 << 7) | (sp14 + 1)) & 0xFF, ((temp_s6 << 7) | (M2C_FIELD(temp_s2, u8 *, 0x5FB) + 1)) & 0xFF) & 0xFF, M2C_FIELD(temp_s4, s16 *, 0x710) = temp_v0_4, (temp_v0_4 == 0))) {
                        func_800125D8();
                        return;
                    }
                    M2C_FIELD(temp_s4, u8 *, 0x614) = temp_s7;
                    var_a0 = 7;
                    goto block_29;
                }
                func_80034AB0(0x4C);
                return;
            }
            if (temp_v1_2 & 0x40) {
                func_80034AB0(0x5D);
                temp_a2 = temp_s4 + temp_s6;
                M2C_FIELD(temp_s4, s8 *, 0x7A7) = 1;
                M2C_FIELD(temp_s4, s8 *, 0x619) = 0;
                temp_a1 = temp_s6 * 0x2E8;
                temp_a0 = temp_s4 + (temp_s6 * 2);
                M2C_FIELD(temp_a0, u8 *, 0x601) = (u8) M2C_FIELD((temp_s4 + ((M2C_FIELD(temp_a2, u8 *, 0x5FB) * 0x7C) + temp_a1)), u8 *, 0x2D);
                M2C_FIELD(temp_a0, u8 *, 0x602) = (u8) M2C_FIELD((temp_s4 + ((M2C_FIELD(temp_a2, u8 *, 0x5FB) * 0x7C) + temp_a1)), u8 *, 0x2E);
                M2C_FIELD((temp_s4 + ((M2C_FIELD(temp_a2, u8 *, 0x5FB) * 0x7C) + temp_a1)), s8 *, 0x2F) = 0x81;
                var_a0 = 3;
                M2C_FIELD((temp_s4 + ((M2C_FIELD(temp_a2, u8 *, 0x5FB) * 0x7C) + temp_a1)), s8 *, 0x3B) = 0;
                M2C_FIELD(temp_s4, s8 *, 0x610) = 2;
block_29:
                func_800125AC(var_a0);
            }
        }
    }
}
