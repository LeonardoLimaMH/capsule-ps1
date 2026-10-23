#include "common.h"

void func_800F865C(void *arg0) {
    extern void * D_8008ED68[];
    extern M2C_UNK D_800906A0[];
    extern M2C_UNK D_80119710[];
    s32 sp10;
    s32 sp14;
    s32 sp18;
    u16 sp1C;
    u16 sp1E;
    s16 temp_s2;
    s16 temp_s3;
    s16 temp_s5;
    s16 temp_s7;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_a0_8;
    s32 temp_fp;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 temp_s0_6;
    s32 temp_s0_7;
    s32 temp_s0_8;
    s32 temp_t0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v0_7;
    s32 var_v0_8;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;
    s32 var_v1_7;
    s32 var_v1_8;
    u16 temp_v0;
    u16 temp_v0_2;
    u32 temp_s1;
    u32 temp_v1;
    u32 var_a2;
    void *var_s4;

    sp14 = (s32) M2C_FIELD(arg0, s16 *, 0x28);
    sp18 = (s32) M2C_FIELD(arg0, s16 *, 0x2A);
    sp1C = GetTPage(0, 3, 0x280, 0x100);
    sp1E = GetClut(0x20, 0x1F0);
    if (M2C_FIELD(D_80119710, u8 *, 0x3D) == 0) {
        func_8002CEC0(D_800906A0);
        M2C_FIELD(D_80119710, u8 *, 0x3D) = 1U;
    }
    temp_v0 = M2C_FIELD(arg0, u16 *, 0x32) - 1;
    M2C_FIELD(arg0, u16 *, 0x32) = temp_v0;
    var_s4 = arg0;
    if (!(temp_v0 & 0xFFFF)) {
        func_80013920(arg0);
        return;
    }
    sp10 = 0;
    do {
        temp_v0_2 = M2C_FIELD(var_s4, u16 *, 0x38) - M2C_FIELD(arg0, u8 *, 0x30);
        M2C_FIELD(var_s4, u16 *, 0x38) = temp_v0_2;
        if ((temp_v0_2 << 0x10) <= 0) {
            M2C_FIELD(var_s4, s16 *, 0x34) = func_800202A4(0x1000);
            M2C_FIELD(var_s4, s16 *, 0x36) = func_800202A4(0x400);
            M2C_FIELD(var_s4, u16 *, 0x38) = (u16) (func_800202A4(0x20) + 0x30);
        }
        var_a2 = 0;
        temp_s1 = M2C_FIELD((*D_8008ED68), u32 *, 0x1090);
        if (temp_s1 != 0) {
            temp_v1 = temp_s1 + 0x34;
            if ((u32) ((*D_8008ED68) + 0x4594) >= temp_v1) {
                var_a2 = temp_v1;
            }
        }
        M2C_FIELD((*D_8008ED68), u32 *, 0x1090) = var_a2;
        SetPolyGT4((void *) temp_s1, (*D_8008ED68), (void *) var_a2);
        M2C_FIELD(temp_s1, u8 *, 4) = (u8) M2C_FIELD(arg0, u8 *, 0x2C);
        M2C_FIELD(temp_s1, u8 *, 5) = (u8) M2C_FIELD(arg0, u8 *, 0x2D);
        M2C_FIELD(temp_s1, u8 *, 6) = (u8) M2C_FIELD(arg0, u8 *, 0x2E);
        M2C_FIELD(temp_s1, u8 *, 0x10) = (u8) M2C_FIELD(arg0, u8 *, 0x2C);
        M2C_FIELD(temp_s1, u8 *, 0x11) = (u8) M2C_FIELD(arg0, u8 *, 0x2D);
        M2C_FIELD(temp_s1, s8 *, 0x1C) = 0;
        M2C_FIELD(temp_s1, s8 *, 0x1D) = 0;
        M2C_FIELD(temp_s1, s8 *, 0x1E) = 0;
        M2C_FIELD(temp_s1, s8 *, 0x28) = 0;
        M2C_FIELD(temp_s1, s8 *, 0x29) = 0;
        M2C_FIELD(temp_s1, s8 *, 0x2A) = 0;
        M2C_FIELD(temp_s1, u8 *, 0x12) = (u8) M2C_FIELD(arg0, u8 *, 0x2E);
        SetSemiTrans((void *) temp_s1, 1);
        M2C_FIELD(temp_s1, u16 *, 0x1A) = sp1C;
        M2C_FIELD(temp_s1, s8 *, 0xC) = 0;
        M2C_FIELD(temp_s1, s8 *, 0xD) = 0;
        M2C_FIELD(temp_s1, s8 *, 0x18) = 2;
        M2C_FIELD(temp_s1, s8 *, 0x19) = 0;
        M2C_FIELD(temp_s1, s8 *, 0x24) = 0;
        M2C_FIELD(temp_s1, s8 *, 0x25) = 2;
        M2C_FIELD(temp_s1, s8 *, 0x30) = 2;
        M2C_FIELD(temp_s1, s8 *, 0x31) = 2;
        M2C_FIELD(temp_s1, u16 *, 0xE) = sp1E;
        temp_s7 = M2C_FIELD(var_s4, s16 *, 0x34);
        temp_s3 = M2C_FIELD(var_s4, s16 *, 0x36);
        temp_s2 = (s16) M2C_FIELD(var_s4, u16 *, 0x38);
        temp_s0 = rcos(temp_s7);
        temp_fp = temp_s2 + 0x40;
        var_v1 = temp_s2 * temp_s0;
        temp_a0 = rcos(temp_s3);
        if (var_v1 < 0) {
            var_v1 += 0xFFF;
        }
        var_v0 = (var_v1 >> 0xC) * temp_a0;
        if (var_v0 < 0) {
            var_v0 += 0xFFF;
        }
        M2C_FIELD(temp_s1, s16 *, 8) = (s16) (sp14 + (var_v0 >> 0xC));
        temp_s0_2 = rsin(temp_s7);
        var_v1_2 = temp_s2 * temp_s0_2;
        temp_a0_2 = rcos(temp_s3);
        if (var_v1_2 < 0) {
            var_v1_2 += 0xFFF;
        }
        var_v0_2 = (var_v1_2 >> 0xC) * temp_a0_2;
        if (var_v0_2 < 0) {
            var_v0_2 += 0xFFF;
        }
        temp_s5 = temp_s7 + 0x20;
        M2C_FIELD(temp_s1, s16 *, 0xA) = (s16) (sp18 + (var_v0_2 >> 0xC));
        temp_s0_3 = rcos(temp_s5);
        var_v1_3 = temp_s2 * temp_s0_3;
        temp_a0_3 = rcos(temp_s3);
        if (var_v1_3 < 0) {
            var_v1_3 += 0xFFF;
        }
        var_v0_3 = (var_v1_3 >> 0xC) * temp_a0_3;
        if (var_v0_3 < 0) {
            var_v0_3 += 0xFFF;
        }
        M2C_FIELD(temp_s1, s16 *, 0x14) = (s16) (sp14 + (var_v0_3 >> 0xC));
        temp_s0_4 = rsin(temp_s5);
        var_v1_4 = temp_s2 * temp_s0_4;
        temp_a0_4 = rcos(temp_s3);
        if (var_v1_4 < 0) {
            var_v1_4 += 0xFFF;
        }
        var_v0_4 = (var_v1_4 >> 0xC) * temp_a0_4;
        if (var_v0_4 < 0) {
            var_v0_4 += 0xFFF;
        }
        M2C_FIELD(temp_s1, s16 *, 0x16) = (s16) (sp18 + (var_v0_4 >> 0xC));
        temp_s0_5 = rcos(temp_s7);
        var_v1_5 = temp_fp * temp_s0_5;
        temp_a0_5 = rcos(temp_s3);
        if (var_v1_5 < 0) {
            var_v1_5 += 0xFFF;
        }
        var_v0_5 = (var_v1_5 >> 0xC) * temp_a0_5;
        if (var_v0_5 < 0) {
            var_v0_5 += 0xFFF;
        }
        M2C_FIELD(temp_s1, s16 *, 0x20) = (s16) (sp14 + (var_v0_5 >> 0xC));
        temp_s0_6 = rsin(temp_s7);
        var_v1_6 = temp_fp * temp_s0_6;
        temp_a0_6 = rcos(temp_s3);
        if (var_v1_6 < 0) {
            var_v1_6 += 0xFFF;
        }
        var_v0_6 = (var_v1_6 >> 0xC) * temp_a0_6;
        if (var_v0_6 < 0) {
            var_v0_6 += 0xFFF;
        }
        M2C_FIELD(temp_s1, s16 *, 0x22) = (s16) (sp18 + (var_v0_6 >> 0xC));
        temp_s0_7 = rcos(temp_s5);
        var_v1_7 = temp_fp * temp_s0_7;
        temp_a0_7 = rcos(temp_s3);
        if (var_v1_7 < 0) {
            var_v1_7 += 0xFFF;
        }
        var_v0_7 = (var_v1_7 >> 0xC) * temp_a0_7;
        if (var_v0_7 < 0) {
            var_v0_7 += 0xFFF;
        }
        M2C_FIELD(temp_s1, s16 *, 0x2C) = (s16) (sp14 + (var_v0_7 >> 0xC));
        temp_s0_8 = rsin(temp_s7 + 0x20);
        var_v1_8 = temp_fp * temp_s0_8;
        temp_a0_8 = rcos(temp_s3);
        if (var_v1_8 < 0) {
            var_v1_8 += 0xFFF;
        }
        var_v0_8 = (var_v1_8 >> 0xC) * temp_a0_8;
        if (var_v0_8 < 0) {
            var_v0_8 += 0xFFF;
        }
        M2C_FIELD(temp_s1, s16 *, 0x2E) = (s16) (sp18 + (var_v0_8 >> 0xC));
        temp_t0 = sp10 + 1;
        sp10 = temp_t0;
        AddPrim((*D_8008ED68) + 0x200, (void *) temp_s1);
        var_s4 += 6;
    } while (temp_t0 < 0xC);
}
