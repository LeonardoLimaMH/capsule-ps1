#include "common.h"

void func_800A9C0C(void *arg0) {
    extern u8 D_8008ED68[];
    extern u16 D_800B3D0C[];
    s32 sp10;
    s16 temp_s0_2;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 var_v0;
    u32 temp_a1;
    u32 temp_fp;
    u32 temp_lo;
    u32 temp_lo_2;
    u32 temp_lo_3;
    u32 temp_lo_4;
    u32 temp_s0;
    u32 temp_s2;
    u32 temp_v0_2;
    u32 temp_v0_3;
    u32 temp_v0_4;
    s32 var_a0;
    s32 var_s1;
    s32 var_s5;
    s32 var_s6;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    u16 temp_v0;
    void *temp_s3;

    temp_s3 = M2C_FIELD(arg0, void **, 0x28);
    temp_fp = M2C_FIELD(arg0, u8 *, 0x34) + 1;
    temp_v1 = M2C_FIELD(arg0, s16 *, 0x1A);
    if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
        var_v0 = temp_v1 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
    } else {
        var_v0 = temp_v1 + 1;
    }
    M2C_FIELD(arg0, s16 *, 0x1A) = var_v0;
    if (M2C_FIELD(arg0, s16 *, 0x3C) < var_v0) {
        temp_v0 = (*D_800B3D0C) - 1;
        (*D_800B3D0C) = temp_v0;
        if (temp_v0 & 0x8000) {
            (*D_800B3D0C) = 0;
        }
        func_80013928(temp_s3);
        func_80013920(arg0);
        return;
    }
    temp_v1_2 = M2C_FIELD(arg0, s16 *, 0x3C);
    temp_lo = (s32) (var_v0 << 0xC) / temp_v1_2;
    temp_lo_2 = var_v0 * M2C_FIELD(arg0, s16 *, 0x3A);
    M2C_FIELD(arg0, u16 *, 0x36) = (u16) (M2C_FIELD(arg0, u16 *, 0x36) + 0xA);
    temp_lo_3 = temp_lo_2 / temp_v1_2;
    sp10 = temp_lo_3;
    var_v0_2 = rsin((s32) (temp_lo + ((u32) temp_lo >> 0x1F)) >> 1, temp_lo_2, temp_lo_3) * 0xFF;
    if (var_v0_2 < 0) {
        var_v0_2 += 0xFFF;
    }
    temp_v0_2 = var_v0_2 >> 0xC;
    M2C_FIELD(temp_s3, s8 *, 0x5A) = (s8) temp_v0_2;
    M2C_FIELD(temp_s3, s8 *, 0x59) = (s8) temp_v0_2;
    M2C_FIELD(temp_s3, s8 *, 0x58) = (s8) temp_v0_2;
    M2C_FIELD(temp_s3, u16 *, 0x4E) = (u16) M2C_FIELD(arg0, u16 *, 0x30);
    var_s6 = 1;
    temp_v0_3 = var_v0 + ((u32) (var_v0 << 0x10) >> 0x1F);
    temp_a1 = temp_v0_3 >> 1;
    M2C_FIELD(temp_s3, s32 *, 0x18) = func_80019F30(0x6000B, (M2C_FIELD(arg0, u8 *, 0x32) * 6) + ((temp_a1 - (((s32) (temp_a1 + ((u32) temp_v0_3 >> 0x1F)) >> 1) * 2)) + 0x2F));
    if (temp_fp > 1) {
        var_s5 = sp10;
        do {
            var_a0 = (s32) (var_s6 << 0xC) / temp_fp;
            temp_s2 = M2C_FIELD(arg0, u8 *, 0x33) * var_s6;
            temp_lo_4 = var_s5 / temp_fp;
            if (var_a0 < 0) {
                var_a0 += 3;
            }
            var_s1 = 0;
            temp_v0_4 = (s32) (rcos(var_a0 >> 2) + 0x1000) / 2;
            M2C_FIELD(temp_s3, s16 *, 0x52) = (s16) temp_v0_4;
            M2C_FIELD(temp_s3, s16 *, 0x50) = (s16) temp_v0_4;
            if (temp_s2 > 0) {
                var_v0_3 = 0 << 0xC;
                do {
                    temp_s0 = (var_v0_3 / temp_s2) + (s16) M2C_FIELD(arg0, u16 *, 0x36);
                    var_v0_4 = temp_lo_4 * rcos(temp_s0);
                    if (var_v0_4 < 0) {
                        var_v0_4 += 0xFFF;
                    }
                    temp_s0_2 = M2C_FIELD(arg0, s16 *, 0x2C) + (var_v0_4 >> 0xC);
                    var_v0_5 = temp_lo_4 * rsin(temp_s0 + M2C_FIELD(arg0, s16 *, 0x38));
                    if (var_v0_5 < 0) {
                        var_v0_5 += 0xFFF;
                    }
                    M2C_FIELD(temp_s3, s16 *, 0x46) = temp_s0_2;
                    M2C_FIELD(temp_s3, s16 *, 0x4A) = (s16) (M2C_FIELD(arg0, s16 *, 0x2E) + (var_v0_5 >> 0xC));
                    func_800161C4(temp_s3);
                    var_s1 += 1;
                    var_v0_3 = var_s1 << 0xC;
                } while (var_s1 < temp_s2);
            }
            var_s6 += 1;
            var_s5 += sp10;
        } while (var_s6 < temp_fp);
    }
}
