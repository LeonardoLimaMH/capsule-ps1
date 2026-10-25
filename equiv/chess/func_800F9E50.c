#include "common.h"

void func_800F9E50(void *arg0) {
    extern u8 D_8008ED68[];
    extern u8 D_80100BC4[];
    s32 sp10;
    s16 temp_a1;
    s16 temp_a3_2;
    s16 temp_v1_3;
    s32 temp_a0_6;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_lo;
    s32 temp_lo_10;
    s32 temp_lo_2;
    s32 temp_lo_3;
    s32 temp_lo_4;
    s32 temp_lo_5;
    s32 temp_lo_6;
    s32 temp_lo_7;
    s32 temp_lo_8;
    s32 temp_lo_9;
    s32 temp_t0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a1_4;
    s32 var_a3;
    s32 var_fp;
    s32 var_v0_10;
    s32 var_v0_11;
    s32 var_v0_12;
    s32 var_v0_13;
    s32 var_v0_14;
    s32 var_v0_15;
    s32 var_v0_16;
    s32 var_v0_17;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v0_8;
    s32 var_v0_9;
    s8 temp_v0;
    s8 var_a1_5;
    s8 var_a2;
    s8 var_a3_2;
    s8 var_v1;
    u16 temp_s6;
    u16 temp_s7;
    u16 var_s1;
    u16 var_s2;
    u32 temp_a0;
    u32 temp_s0;
    u32 var_a1;
    u8 temp_a0_2;
    u8 temp_a0_3;
    u8 temp_a0_4;
    u8 var_v0;
    u8 var_v0_4;
    u8 var_v0_7;
    void *temp_a0_5;
    void *temp_s1;
    void *temp_s4;
    void *temp_v1_2;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;

    var_fp = 0;
    sp10 = 0;
    temp_s1 = M2C_FIELD(arg0, void **, 0x28);
    temp_s4 = M2C_FIELD(M2C_FIELD(temp_s1, void **, 0x18), void **, 8);
    temp_s0 = M2C_FIELD(M2C_FIELD(D_8008ED68, void **, 0), u32 *, 0x1090);
    temp_s6 = M2C_FIELD(temp_s4, u16 *, 0x14);
    temp_s7 = M2C_FIELD(temp_s4, u16 *, 0x16);
    var_a1 = 0;
    if (temp_s0 != 0) {
        temp_a0 = temp_s0 + 0x34;
        if ((u32) (M2C_FIELD(D_8008ED68, void **, 0) + 0x4594) >= temp_a0) {
            var_a1 = temp_a0;
        }
    }
    M2C_FIELD(M2C_FIELD(D_8008ED68, void **, 0), u32 *, 0x1090) = var_a1;
    SetPolyGT4((void *) temp_s0, (void *) var_a1);
    SetShadeTex((void *) temp_s0, 0);
    SetSemiTrans((void *) temp_s0, M2C_FIELD(arg0, u8 *, 0x2C));
    temp_a0_2 = M2C_FIELD(arg0, u8 *, 0x58);
    if (M2C_FIELD(D_8008ED68, s32 *, 0xA6C) == 0x1000) {
        var_v0 = temp_a0_2;
    } else if (M2C_FIELD(D_8008ED68, s32 *, 0xA6C) < 0x1000) {
        var_v0_2 = temp_a0_2 * M2C_FIELD(D_8008ED68, s32 *, 0xA6C);
        if (var_v0_2 < 0) {
            var_v0_2 += 0xFFF;
        }
        var_v0 = (u8) (var_v0_2 >> 0xC);
    } else {
        var_v0_3 = (0xFF - temp_a0_2) * (M2C_FIELD(D_8008ED68, s32 *, 0xA6C) - 0x1000);
        if (var_v0_3 < 0) {
            var_v0_3 += 0xFFF;
        }
        var_v0 = (var_v0_3 >> 0xC) + temp_a0_2;
    }
    M2C_FIELD(temp_s0, u8 *, 0x28) = var_v0;
    M2C_FIELD(temp_s0, u8 *, 0x1C) = var_v0;
    M2C_FIELD(temp_s0, u8 *, 0x10) = var_v0;
    M2C_FIELD(temp_s0, u8 *, 4) = var_v0;
    temp_a0_3 = M2C_FIELD(arg0, u8 *, 0x59);
    if (M2C_FIELD(D_8008ED68, s32 *, 0xA70) == 0x1000) {
        var_v0_4 = temp_a0_3;
    } else if (M2C_FIELD(D_8008ED68, s32 *, 0xA70) < 0x1000) {
        var_v0_5 = temp_a0_3 * M2C_FIELD(D_8008ED68, s32 *, 0xA70);
        if (var_v0_5 < 0) {
            var_v0_5 += 0xFFF;
        }
        var_v0_4 = (u8) (var_v0_5 >> 0xC);
    } else {
        var_v0_6 = (0xFF - temp_a0_3) * (M2C_FIELD(D_8008ED68, s32 *, 0xA70) - 0x1000);
        if (var_v0_6 < 0) {
            var_v0_6 += 0xFFF;
        }
        var_v0_4 = (var_v0_6 >> 0xC) + temp_a0_3;
    }
    M2C_FIELD(temp_s0, u8 *, 0x29) = var_v0_4;
    M2C_FIELD(temp_s0, u8 *, 0x1D) = var_v0_4;
    M2C_FIELD(temp_s0, u8 *, 0x11) = var_v0_4;
    M2C_FIELD(temp_s0, u8 *, 5) = var_v0_4;
    temp_a0_4 = M2C_FIELD(arg0, u8 *, 0x5A);
    if (M2C_FIELD(D_8008ED68, s32 *, 0xA74) == 0x1000) {
        var_v0_7 = temp_a0_4;
    } else if (M2C_FIELD(D_8008ED68, s32 *, 0xA74) < 0x1000) {
        var_v0_8 = temp_a0_4 * M2C_FIELD(D_8008ED68, s32 *, 0xA74);
        if (var_v0_8 < 0) {
            var_v0_8 += 0xFFF;
        }
        var_v0_7 = (u8) (var_v0_8 >> 0xC);
    } else {
        var_v0_9 = (0xFF - temp_a0_4) * (M2C_FIELD(D_8008ED68, s32 *, 0xA74) - 0x1000);
        if (var_v0_9 < 0) {
            var_v0_9 += 0xFFF;
        }
        var_v0_7 = (var_v0_9 >> 0xC) + temp_a0_4;
    }
    M2C_FIELD(temp_s0, u8 *, 0x2A) = var_v0_7;
    M2C_FIELD(temp_s0, u8 *, 0x1E) = var_v0_7;
    M2C_FIELD(temp_s0, u8 *, 0x12) = var_v0_7;
    M2C_FIELD(temp_s0, u8 *, 6) = var_v0_7;
    temp_v1 = M2C_FIELD(temp_s1, s32 *, 0x34) & 0x7F;
    if (temp_v1 == 0) {
        temp_a2 = M2C_FIELD(temp_s4, u16 *, 0xC) + M2C_FIELD(temp_s1, s16 *, 0x64);
        temp_v1_2 = M2C_FIELD(temp_s4, void **, 8);
        var_a3 = temp_a2;
        if (temp_a2 < 0) {
            var_a3 = temp_a2 + 0xF;
        }
        temp_a3 = var_a3 >> 4;
        var_a0 = (s16) (M2C_FIELD(temp_v1_2, u16 *, 4) + M2C_FIELD(temp_s1, u16 *, 0x2C)) + ((temp_a2 - (temp_a3 * 0x10)) * 0x10);
        var_a1_2 = (s16) (M2C_FIELD(temp_v1_2, u16 *, 6) + M2C_FIELD(temp_s1, u16 *, 0x2E)) + M2C_FIELD(temp_s1, s16 *, 0x66) + temp_a3;
    } else {
        var_a0 = 0x3F0;
        if (temp_v1 == 1) {
            var_a0 = 0x100;
            var_a1_2 = 0x1FE;
        } else {
            var_a1_2 = 0x17F;
        }
    }
    M2C_FIELD(temp_s0, s16 *, 0xE) = GetClut(var_a0, var_a1_2);
    temp_lo = temp_s6 * M2C_FIELD(temp_s1, s16 *, 0x50);
    temp_lo_2 = M2C_FIELD(arg0, s16 *, 0x34) * temp_lo;
    temp_lo_3 = temp_s7 * M2C_FIELD(temp_s1, s16 *, 0x52);
    temp_a1 = M2C_FIELD(arg0, s16 *, 0x30);
    temp_a3_2 = M2C_FIELD(arg0, s16 *, 0x32);
    var_v0_10 = temp_lo_2 >> 0x18;
    if (temp_lo_2 < 0) {
        var_v0_10 = (s32) (temp_lo_2 + 0xFFFFFF) >> 0x18;
    }
    M2C_FIELD(temp_s0, s16 *, 8) = (s16) (var_v0_10 + temp_a1);
    temp_lo_4 = M2C_FIELD(arg0, s16 *, 0x38) * temp_lo;
    var_v0_11 = temp_lo_4 >> 0x18;
    if (temp_lo_4 < 0) {
        var_v0_11 = (s32) (temp_lo_4 + 0xFFFFFF) >> 0x18;
    }
    M2C_FIELD(temp_s0, s16 *, 0x14) = (s16) (var_v0_11 + temp_a1);
    temp_lo_5 = M2C_FIELD(arg0, s16 *, 0x3C) * temp_lo;
    var_v0_12 = temp_lo_5 >> 0x18;
    if (temp_lo_5 < 0) {
        var_v0_12 = (s32) (temp_lo_5 + 0xFFFFFF) >> 0x18;
    }
    M2C_FIELD(temp_s0, s16 *, 0x20) = (s16) (var_v0_12 + temp_a1);
    temp_lo_6 = M2C_FIELD(arg0, s16 *, 0x40) * temp_lo;
    var_v0_13 = temp_lo_6 >> 0x18;
    if (temp_lo_6 < 0) {
        var_v0_13 = (s32) (temp_lo_6 + 0xFFFFFF) >> 0x18;
    }
    M2C_FIELD(temp_s0, s16 *, 0x2C) = (s16) (var_v0_13 + temp_a1);
    temp_lo_7 = M2C_FIELD(arg0, s16 *, 0x36) * temp_lo_3;
    var_v0_14 = temp_lo_7 >> 0x18;
    if (temp_lo_7 < 0) {
        var_v0_14 = (s32) (temp_lo_7 + 0xFFFFFF) >> 0x18;
    }
    M2C_FIELD(temp_s0, s16 *, 0xA) = (s16) (var_v0_14 + temp_a3_2);
    temp_lo_8 = M2C_FIELD(arg0, s16 *, 0x3A) * temp_lo_3;
    var_v0_15 = temp_lo_8 >> 0x18;
    if (temp_lo_8 < 0) {
        var_v0_15 = (s32) (temp_lo_8 + 0xFFFFFF) >> 0x18;
    }
    M2C_FIELD(temp_s0, s16 *, 0x16) = (s16) (var_v0_15 + temp_a3_2);
    temp_lo_9 = M2C_FIELD(arg0, s16 *, 0x3E) * temp_lo_3;
    var_v0_16 = temp_lo_9 >> 0x18;
    if (temp_lo_9 < 0) {
        var_v0_16 = (s32) (temp_lo_9 + 0xFFFFFF) >> 0x18;
    }
    M2C_FIELD(temp_s0, s16 *, 0x22) = (s16) (var_v0_16 + temp_a3_2);
    temp_lo_10 = M2C_FIELD(arg0, s16 *, 0x42) * temp_lo_3;
    var_v0_17 = temp_lo_10 >> 0x18;
    if (temp_lo_10 < 0) {
        var_v0_17 = (s32) (temp_lo_10 + 0xFFFFFF) >> 0x18;
    }
    M2C_FIELD(temp_s0, s16 *, 0x2E) = (s16) (var_v0_17 + temp_a3_2);
    if (M2C_FIELD(temp_s0, s16 *, 0x14) < M2C_FIELD(temp_s0, s16 *, 8)) {
        var_fp = -1;
    }
    if (M2C_FIELD(temp_s0, s16 *, 0x22) < M2C_FIELD(temp_s0, s16 *, 0xA)) {
        sp10 = -1;
    }
    temp_a0_5 = M2C_FIELD(temp_s4, void **, 4);
    temp_v1_3 = M2C_FIELD(temp_a0_5, s16 *, 4);
    if (temp_v1_3 == 0x140) {
        temp_v1_4 = (M2C_FIELD(temp_s1, s32 *, 0x80) * 4) + (M2C_FIELD(temp_s1, s32 *, 0x7C) * 0x18) + D_80100BC4;
        var_s1 = M2C_FIELD(temp_v1_4, u16 *, 0);
        var_s2 = M2C_FIELD(temp_v1_4, u16 *, 2);
    } else if (temp_v1_3 == 0x160) {
        temp_v1_5 = (M2C_FIELD(temp_s1, s32 *, 0x80) * 4) + (M2C_FIELD(temp_s1, s32 *, 0x7C) * 0x18) + D_80100BC4;
        var_s2 = M2C_FIELD(temp_v1_5, u16 *, 2);
        var_s1 = M2C_FIELD(temp_v1_5, u16 *, 0) + 0x20;
    } else {
        var_s1 = (u16) M2C_FIELD(temp_a0_5, s16 *, 4) + M2C_FIELD(temp_s1, u16 *, 0x28);
        var_s2 = M2C_FIELD(temp_a0_5, u16 *, 6) + M2C_FIELD(temp_s1, u16 *, 0x2A);
    }
    M2C_FIELD(temp_s0, s16 *, 0x1A) = GetTPage(0, M2C_FIELD(arg0, u8 *, 0x2D), (s16) var_s1, (s16) var_s2);
    temp_a0_6 = temp_s6 & 0xFFFF;
    var_a1_3 = M2C_FIELD(arg0, s16 *, 0x44) * temp_a0_6;
    if (var_a1_3 < 0) {
        var_a1_3 += 0xFFF;
    }
    var_a0_2 = M2C_FIELD(arg0, s16 *, 0x48) * temp_a0_6;
    var_v1 = M2C_FIELD(temp_s4, u16 *, 0xE) + ((var_s1 & 0x20) * 4) + (var_a1_3 >> 0xC);
    if (var_a0_2 < 0) {
        var_a0_2 += 0xFFF;
    }
    temp_a2_2 = temp_s7 & 0xFFFF;
    temp_t0 = var_v1 + (var_a0_2 >> 0xC);
    var_a1_4 = M2C_FIELD(arg0, s16 *, 0x46) * temp_a2_2;
    var_a3_2 = temp_t0 - 1;
    if (var_a1_4 < 0) {
        var_a1_4 += 0xFFF;
    }
    var_a0_3 = M2C_FIELD(arg0, s16 *, 0x4A) * temp_a2_2;
    var_a1_5 = M2C_FIELD(temp_s4, u16 *, 0x10) + (var_s2 & 0x80) + (var_a1_4 >> 0xC);
    if (var_a0_3 < 0) {
        var_a0_3 += 0xFFF;
    }
    var_a2 = var_a1_5 + (var_a0_3 >> 0xC);
    if (var_fp != 0) {
        if (var_v1 > 0) {
            var_v1 -= 1;
        } else {
            var_a3_2 = temp_t0 - 2;
        }
    }
    if (sp10 != 0) {
        if (var_a1_5 > 0) {
            var_a1_5 -= 1;
        } else {
            var_a2 -= 1;
        }
    }
    temp_v0 = var_v1;
    if (M2C_FIELD(temp_s4, u16 *, 0x12) & 2) {
        var_v1 = var_a3_2;
        var_a3_2 = temp_v0;
    }
    M2C_FIELD(temp_s0, s8 *, 0xD) = var_a1_5;
    M2C_FIELD(temp_s0, s8 *, 0x19) = var_a1_5;
    M2C_FIELD(temp_s0, s8 *, 0xC) = var_v1;
    M2C_FIELD(temp_s0, s8 *, 0x18) = var_a3_2;
    M2C_FIELD(temp_s0, s8 *, 0x24) = var_v1;
    M2C_FIELD(temp_s0, s8 *, 0x30) = var_a3_2;
    M2C_FIELD(temp_s0, s8 *, 0x25) = var_a2;
    M2C_FIELD(temp_s0, s8 *, 0x31) = var_a2;
    M2C_FIELD(temp_s0, s32 *, 0) = (s32) ((M2C_FIELD(temp_s0, s32 *, 0) & 0xFF000000) | (M2C_FIELD(((M2C_FIELD(arg0, s16 *, 0x2E) * 4) + M2C_FIELD(D_8008ED68, void **, 0)), s32 *, 0x70) & 0xFFFFFF));
    temp_v1_6 = (M2C_FIELD(arg0, s16 *, 0x2E) * 4) + M2C_FIELD(D_8008ED68, void **, 0);
    M2C_FIELD(temp_v1_6, s32 *, 0x70) = (s32) ((M2C_FIELD(temp_v1_6, s32 *, 0x70) & 0xFF000000) | (temp_s0 & 0xFFFFFF));
}
