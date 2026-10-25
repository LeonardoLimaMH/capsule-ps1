#include "common.h"

void func_800A9810(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    extern u8 D_8008ED68[];
    s32 sp10;
    s32 sp14;
    s16 temp_s3;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 var_s1;
    s32 temp_s7;
    s32 var_a0;
    s32 var_a1;
    s32 var_s2;
    s32 var_s4;
    s32 var_s6;
    u32 temp_s0;
    u32 temp_v1;
    u32 var_a2;
    void *temp_a0;

    sp14 = 5 - M2C_FIELD((arg0 + arg1), u8 *, 0xBDA);
    if (arg4 == 0) {
        var_s6 = 0xC;
        var_s4 = 0xF;
        var_a1 = 5;
        sp10 = 7;
        var_s1 = arg2 + 0xC + ((s32) M2C_FIELD(D_8008ED68, s32 *, 0x108) / 2);
        var_a0 = arg3 + 0x2F;
    } else {
        var_s6 = 8;
        if (arg4 == 1) {
            var_s6 = 0x10;
            var_s4 = 0x13;
            var_a1 = 3;
            sp10 = 8;
            var_s1 = arg2 + 0x2D + ((s32) M2C_FIELD(D_8008ED68, s32 *, 0x108) / 2);
            var_a0 = arg3 + 0x72;
        } else {
            var_s4 = 0xA;
            var_a1 = 3;
            sp10 = 6;
            var_s1 = arg2 + 0x35 + ((s32) M2C_FIELD(D_8008ED68, s32 *, 0x108) / 2);
            var_a0 = arg3 + 0x10;
        }
    }
    temp_s3 = var_a0 + (M2C_FIELD(D_8008ED68, s32 *, 0x10C) / 2);
    var_s2 = 0;
    if (sp14 > 0) {
        temp_s7 = var_a1 * 4;
        do {
            var_a2 = 0;
            temp_s0 = M2C_FIELD(M2C_FIELD(D_8008ED68, void **, 0), u32 *, 0x1090);
            if (temp_s0 != 0) {
                temp_v1 = temp_s0 + 0x18;
                if ((u32) (M2C_FIELD(D_8008ED68, void **, 0) + 0x4594) >= temp_v1) {
                    var_a2 = temp_v1;
                }
            }
            M2C_FIELD(M2C_FIELD(D_8008ED68, void **, 0), u32 *, 0x1090) = var_a2;
            SetPolyF4((void *) temp_s0, M2C_FIELD(D_8008ED68, void **, 0), (void *) var_a2);
            SetSemiTrans((void *) temp_s0, 0);
            temp_v0 = var_s1 + var_s6;
            M2C_FIELD(temp_s0, s16 *, 0x10) = var_s1;
            M2C_FIELD(temp_s0, s16 *, 8) = var_s1;
            M2C_FIELD(temp_s0, s16 *, 0x14) = temp_v0;
            M2C_FIELD(temp_s0, s16 *, 0xC) = temp_v0;
            M2C_FIELD(temp_s0, s16 *, 0xE) = temp_s3;
            M2C_FIELD(temp_s0, s16 *, 0xA) = temp_s3;
            temp_v0_2 = temp_s3 + sp10;
            M2C_FIELD(temp_s0, s16 *, 0x16) = temp_v0_2;
            M2C_FIELD(temp_s0, s16 *, 0x12) = temp_v0_2;
            M2C_FIELD(temp_s0, s8 *, 4) = 0xAF;
            M2C_FIELD(temp_s0, s8 *, 5) = 0xAF;
            M2C_FIELD(temp_s0, s8 *, 6) = 0x20;
            M2C_FIELD(temp_s0, s32 *, 0) = (s32) ((M2C_FIELD(temp_s0, s32 *, 0) & 0xFF000000) | (M2C_FIELD((temp_s7 + M2C_FIELD(D_8008ED68, void **, 0)), s32 *, 0x70) & 0xFFFFFF));
            temp_a0 = temp_s7 + M2C_FIELD(D_8008ED68, void **, 0);
            M2C_FIELD(temp_a0, s32 *, 0x70) = (s32) ((M2C_FIELD(temp_a0, s32 *, 0x70) & 0xFF000000) | (temp_s0 & 0xFFFFFF));
            var_s1 += var_s4;
            if ((arg4 == 2) && (var_s2 == 0)) {
                var_s4 += 1;
                var_s6 += 1;
            }
            var_s2 += 1;
        } while (var_s2 < sp14);
    }
}
