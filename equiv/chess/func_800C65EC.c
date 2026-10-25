#include "common.h"

void func_800C65EC(void *arg0) {
    extern u8 D_80085428[];
    extern u8 D_8008ED68[];
    extern u8 D_8010104C[];
    extern u8 D_80101060[];
    extern u8 D_80118800[];
    extern u8 D_80118808[];
    s16 temp_s0_2;
    s16 temp_s0_3;
    s16 temp_s0_4;
    s16 temp_s0_6;
    s16 temp_s1_2;
    s16 temp_s7;
    s16 temp_v0;
    u32 temp_a0;
    u32 temp_a1;
    u32 temp_s0;
    u32 temp_s0_5;
    u32 temp_s1;
    s32 var_a0;
    s32 var_a1;
    s32 var_v0_2;
    s32 var_v1;
    s32 var_v1_10;
    s32 var_v1_11;
    s32 var_v1_12;
    s32 var_v1_13;
    s32 var_v1_14;
    s32 var_v1_15;
    s32 var_v1_16;
    s32 var_v1_17;
    s32 var_v1_18;
    s32 var_v1_19;
    s32 var_v1_20;
    s32 var_v1_21;
    s32 var_v1_22;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;
    s32 var_v1_7;
    s32 var_v1_8;
    s32 var_v1_9;
    u16 temp_v1;
    u32 temp_a0_2;
    u32 temp_v1_3;
    u32 temp_v1_4;
    u32 temp_v1_5;
    u32 var_v0;
    u32 var_v0_3;
    u32 var_v0_4;
    void *temp_a2;
    void *temp_s2;
    void *temp_v1_2;

    temp_s2 = arg0 + 0x18;
    temp_v1 = M2C_FIELD(arg0, u16 *, 0x4E);
    temp_s1 = M2C_FIELD(arg0, s32 *, 0x5C);
    temp_a2 = M2C_FIELD(arg0, void **, 0x60);
    switch (temp_v1) {
    case 0:
        if (temp_s1 == 0) {
            func_800A46B8(D_80085428, M2C_FIELD(temp_a2, u8 *, 0x15), M2C_FIELD(temp_a2, u8 *, 0x16), D_80118808);
            M2C_FIELD(D_80118800, s16 *, 0) = 0x258;
            M2C_FIELD(D_80118800, s16 *, 2) = -0x78;
            M2C_FIELD(D_80118800, s16 *, 4) = 0;
            M2C_FIELD(D_80118808, u16 *, 2) = (u16) (M2C_FIELD(D_80118808, u16 *, 2) - 0xBE);
        }
        temp_v1_2 = (temp_s1 * 3) + D_80101060;
        M2C_FIELD(temp_s2, u8 *, 0x18) = (u8) (M2C_FIELD(temp_v1_2, u8 *, 0) + 0x1F);
        M2C_FIELD(temp_s2, u8 *, 0x19) = (u8) (M2C_FIELD(temp_v1_2, u8 *, 1) + 0x1F);
        M2C_FIELD(temp_s2, u8 *, 0x1A) = (u8) (M2C_FIELD(temp_v1_2, u8 *, 2) + 0x1F);
        M2C_FIELD(temp_s2, u8 *, 0x1B) = (u8) M2C_FIELD(temp_v1_2, u8 *, 0);
        M2C_FIELD(temp_s2, u8 *, 0x1C) = (u8) M2C_FIELD(temp_v1_2, u8 *, 1);
        M2C_FIELD(temp_s2, u8 *, 0x1D) = (u8) M2C_FIELD(temp_v1_2, u8 *, 2);
        M2C_FIELD(temp_s2, u8 *, 0x1E) = (u8) M2C_FIELD(temp_v1_2, u8 *, 0);
        M2C_FIELD(temp_s2, u8 *, 0x1F) = (u8) M2C_FIELD(temp_v1_2, u8 *, 1);
        M2C_FIELD(temp_s2, u8 *, 0x20) = (u8) M2C_FIELD(temp_v1_2, u8 *, 2);
        M2C_FIELD(arg0, s32 *, 0x6C) = (s32) (temp_s1 * 2);
block_39:
        M2C_FIELD(arg0, u16 *, 0x4E) = (u16) (M2C_FIELD(arg0, u16 *, 0x4E) + 1);
    default:
        break;
    case 1:
        temp_a0 = temp_s1 * 0xAA;
        var_a1 = temp_a0;
        M2C_FIELD(arg0, s32 *, 0x50) = (s32) (M2C_FIELD(arg0, s32 *, 0x50) & ~1);
        if (temp_a0 < 0) {
            var_a1 = temp_a0 + 0xFFF;
        }
        temp_v0 = temp_a0 - ((var_a1 >> 0xC) << 0xC);
        temp_s7 = temp_v0 + 0xAA;
        temp_s0 = 0x14 - M2C_FIELD(arg0, u32 *, 0x54);
        var_v1 = ((M2C_FIELD(D_80118800, s16 *, 0) * temp_s0) / 20) * rcos(temp_s7, var_a1, temp_a2);
        if (var_v1 < 0) {
            var_v1 += 0xFFF;
        }
        M2C_FIELD(temp_s2, s16 *, 0) = (s16) (M2C_FIELD(D_80118808, u16 *, 0) + (var_v1 >> 0xC));
        M2C_FIELD(temp_s2, s16 *, 2) = (s16) (M2C_FIELD(D_80118808, u16 *, 2) + ((M2C_FIELD(D_80118800, s16 *, 2) * temp_s0) / 20));
        var_v1_2 = ((M2C_FIELD(D_80118800, s16 *, 0) * temp_s0) / 20) * rsin(temp_s7, (s32) (M2C_FIELD(D_80118800, s16 *, 2) * temp_s0) >> 0x1F);
        if (var_v1_2 < 0) {
            var_v1_2 += 0xFFF;
        }
        M2C_FIELD(temp_s2, s16 *, 4) = (s16) (M2C_FIELD(D_80118808, u16 *, 4) + (var_v1_2 >> 0xC));
        var_v1_3 = M2C_FIELD(D_80118800, s16 *, 0) * rcos(temp_v0);
        if (var_v1_3 < 0) {
            var_v1_3 += 0xFFF;
        }
        M2C_FIELD(temp_s2, s16 *, 8) = (s16) (M2C_FIELD(D_80118808, u16 *, 0) + (var_v1_3 >> 0xC));
        M2C_FIELD(temp_s2, s16 *, 0xA) = (s16) ((u16) M2C_FIELD(D_80118800, s16 *, 2) + M2C_FIELD(D_80118808, u16 *, 2));
        var_v1_4 = M2C_FIELD(D_80118800, s16 *, 0) * rsin(temp_v0);
        temp_s0_2 = temp_v0 + 0x154;
        if (var_v1_4 < 0) {
            var_v1_4 += 0xFFF;
        }
        M2C_FIELD(temp_s2, s16 *, 0xC) = (s16) (M2C_FIELD(D_80118808, u16 *, 4) + (var_v1_4 >> 0xC));
        var_v1_5 = M2C_FIELD(D_80118800, s16 *, 0) * rcos(temp_s0_2);
        if (var_v1_5 < 0) {
            var_v1_5 += 0xFFF;
        }
        M2C_FIELD(temp_s2, s16 *, 0x10) = (s16) (M2C_FIELD(D_80118808, u16 *, 0) + (var_v1_5 >> 0xC));
        M2C_FIELD(temp_s2, s16 *, 0x12) = (s16) ((u16) M2C_FIELD(D_80118800, s16 *, 2) + M2C_FIELD(D_80118808, u16 *, 2));
        var_v1_6 = M2C_FIELD(D_80118800, s16 *, 0) * rsin(temp_s0_2);
        if (var_v1_6 < 0) {
            var_v1_6 += 0xFFF;
        }
        M2C_FIELD(temp_s2, s16 *, 0x14) = (s16) (M2C_FIELD(D_80118808, u16 *, 4) + (var_v1_6 >> 0xC));
        temp_v1_3 = M2C_FIELD(arg0, u32 *, 0x54);
        if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
            var_v0 = temp_v1_3 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
        } else {
            var_v0 = temp_v1_3 + 1;
        }
        M2C_FIELD(arg0, u32 *, 0x54) = var_v0;
        var_v0_2 = var_v0 < 0x15U;
block_37:
        if (var_v0_2 == 0) {
            M2C_FIELD(arg0, u32 *, 0x54) = 0U;
            goto block_39;
        }
        break;
    case 2:
        temp_s0_3 = ((temp_s1 * 0xAA) + M2C_FIELD(arg0, u32 *, 0x54)) & 0xFFF;
        var_v1_7 = M2C_FIELD(D_80118800, s16 *, 0) * rcos(temp_s0_3, (s32) temp_a2);
        if (var_v1_7 < 0) {
            var_v1_7 += 0xFFF;
        }
        M2C_FIELD(temp_s2, s16 *, 8) = (s16) (M2C_FIELD(D_80118808, u16 *, 0) + (var_v1_7 >> 0xC));
        M2C_FIELD(temp_s2, s16 *, 0xA) = (s16) ((u16) M2C_FIELD(D_80118800, s16 *, 2) + M2C_FIELD(D_80118808, u16 *, 2));
        var_v1_8 = M2C_FIELD(D_80118800, s16 *, 0) * rsin(temp_s0_3);
        if (var_v1_8 < 0) {
            var_v1_8 += 0xFFF;
        }
        temp_s0_4 = temp_s0_3 + 0x154;
        M2C_FIELD(temp_s2, s16 *, 0xC) = (s16) (M2C_FIELD(D_80118808, u16 *, 4) + (var_v1_8 >> 0xC));
        var_v1_9 = M2C_FIELD(D_80118800, s16 *, 0) * rcos(temp_s0_4);
        if (var_v1_9 < 0) {
            var_v1_9 += 0xFFF;
        }
        M2C_FIELD(temp_s2, s16 *, 0x10) = (s16) (M2C_FIELD(D_80118808, u16 *, 0) + (var_v1_9 >> 0xC));
        M2C_FIELD(temp_s2, s16 *, 0x12) = (s16) ((u16) M2C_FIELD(D_80118800, s16 *, 2) + M2C_FIELD(D_80118808, u16 *, 2));
        var_v1_10 = M2C_FIELD(D_80118800, s16 *, 0) * rsin(temp_s0_4);
        if (var_v1_10 < 0) {
            var_v1_10 += 0xFFF;
        }
        M2C_FIELD(temp_s2, s16 *, 0x14) = (s16) (M2C_FIELD(D_80118808, u16 *, 4) + (var_v1_10 >> 0xC));
        if (M2C_FIELD(arg0, u32 *, 0x54) == 0x10) {
            M2C_FIELD(arg0, s32 *, 0x64) = 1;
        }
        temp_v1_4 = M2C_FIELD(arg0, u32 *, 0x54);
        if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
            var_v0_3 = temp_v1_4 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
        } else {
            var_v0_3 = temp_v1_4 + 1;
        }
        M2C_FIELD(arg0, u32 *, 0x54) = var_v0_3;
        var_v0_2 = var_v0_3 < 0x3DU;
        goto block_37;
    case 3:
        temp_a0_2 = M2C_FIELD(arg0, u32 *, 0x54);
        M2C_FIELD(D_80118800, s16 *, 4) = 0;
        temp_s0_5 = 0x1E - temp_a0_2;
        temp_a1 = temp_s0_5 * 0x78;
        temp_s1_2 = ((temp_s1 * 0xAA) + temp_a0_2) & 0xFFF;
        M2C_FIELD(D_80118800, s16 *, 0) = (s16) (temp_s0_5 * 0x14);
        M2C_FIELD(D_80118800, s16 *, 2) = (s16) (-temp_a1 / 30);
        var_v1_11 = M2C_FIELD(D_80118800, s16 *, 0) * rcos(temp_s1_2, (s32) -temp_a1 >> 0x1F, temp_a2);
        if (var_v1_11 < 0) {
            var_v1_11 += 0xFFF;
        }
        M2C_FIELD(temp_s2, s16 *, 8) = (s16) (M2C_FIELD(D_80118808, u16 *, 0) + (var_v1_11 >> 0xC));
        M2C_FIELD(temp_s2, s16 *, 0xA) = (s16) ((u16) M2C_FIELD(D_80118800, s16 *, 2) + M2C_FIELD(D_80118808, u16 *, 2));
        var_v1_12 = M2C_FIELD(D_80118800, s16 *, 0) * rsin(temp_s1_2);
        temp_s0_6 = temp_s1_2 + 0x154;
        if (var_v1_12 < 0) {
            var_v1_12 += 0xFFF;
        }
        M2C_FIELD(temp_s2, s16 *, 0xC) = (s16) (M2C_FIELD(D_80118808, u16 *, 4) + (var_v1_12 >> 0xC));
        var_v1_13 = M2C_FIELD(D_80118800, s16 *, 0) * rcos(temp_s0_6);
        if (var_v1_13 < 0) {
            var_v1_13 += 0xFFF;
        }
        M2C_FIELD(temp_s2, s16 *, 0x10) = (s16) (M2C_FIELD(D_80118808, u16 *, 0) + (var_v1_13 >> 0xC));
        M2C_FIELD(temp_s2, s16 *, 0x12) = (s16) ((u16) M2C_FIELD(D_80118800, s16 *, 2) + M2C_FIELD(D_80118808, u16 *, 2));
        var_v1_14 = M2C_FIELD(D_80118800, s16 *, 0) * rsin(temp_s0_6);
        if (var_v1_14 < 0) {
            var_v1_14 += 0xFFF;
        }
        M2C_FIELD(temp_s2, s16 *, 0x14) = (s16) (M2C_FIELD(D_80118808, u16 *, 4) + (var_v1_14 >> 0xC));
        temp_v1_5 = M2C_FIELD(arg0, u32 *, 0x54);
        if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
            var_v0_4 = temp_v1_5 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
        } else {
            var_v0_4 = temp_v1_5 + 1;
        }
        M2C_FIELD(arg0, u32 *, 0x54) = var_v0_4;
        if (var_v0_4 >= 0x1FU) {
            M2C_FIELD(arg0, s32 *, 0x64) = 2;
            M2C_FIELD(arg0, u32 *, 0x54) = 0U;
            M2C_FIELD(arg0, u16 *, 0x4E) = (u16) (M2C_FIELD(arg0, u16 *, 0x4E) + 1);
        }
        break;
    case 4:
        func_800185F8(arg0, temp_a2);
        break;
    }
    var_a0 = M2C_FIELD(arg0, s32 *, 0x6C) % 48;
    M2C_FIELD(arg0, s32 *, 0x6C) = var_a0;
    if (var_a0 < 0) {
        var_a0 += 7;
    }
    M2C_FIELD(temp_s2, u8 *, 0x18) = (u8) (M2C_FIELD(temp_s2, u8 *, 0x18) + *(((var_a0 >> 3) * 3) + D_8010104C));
    var_v1_15 = M2C_FIELD(arg0, s32 *, 0x6C);
    if (var_v1_15 < 0) {
        var_v1_15 += 7;
    }
    M2C_FIELD(temp_s2, u8 *, 0x19) = (u8) (M2C_FIELD(temp_s2, u8 *, 0x19) + M2C_FIELD((((var_v1_15 >> 3) * 3) + D_8010104C), u8 *, 1));
    var_v1_16 = M2C_FIELD(arg0, s32 *, 0x6C);
    if (var_v1_16 < 0) {
        var_v1_16 += 7;
    }
    M2C_FIELD(temp_s2, u8 *, 0x1A) = (u8) (M2C_FIELD(temp_s2, u8 *, 0x1A) + M2C_FIELD((((var_v1_16 >> 3) * 3) + D_8010104C), u8 *, 2));
    var_v1_17 = M2C_FIELD(arg0, s32 *, 0x6C);
    if (var_v1_17 < 0) {
        var_v1_17 += 7;
    }
    M2C_FIELD(temp_s2, u8 *, 0x1B) = (u8) (M2C_FIELD(temp_s2, u8 *, 0x1B) + *(((var_v1_17 >> 3) * 3) + D_8010104C));
    var_v1_18 = M2C_FIELD(arg0, s32 *, 0x6C);
    if (var_v1_18 < 0) {
        var_v1_18 += 7;
    }
    M2C_FIELD(temp_s2, u8 *, 0x1C) = (u8) (M2C_FIELD(temp_s2, u8 *, 0x1C) + M2C_FIELD((((var_v1_18 >> 3) * 3) + D_8010104C), u8 *, 1));
    var_v1_19 = M2C_FIELD(arg0, s32 *, 0x6C);
    if (var_v1_19 < 0) {
        var_v1_19 += 7;
    }
    M2C_FIELD(temp_s2, u8 *, 0x1D) = (u8) (M2C_FIELD(temp_s2, u8 *, 0x1D) + M2C_FIELD((((var_v1_19 >> 3) * 3) + D_8010104C), u8 *, 2));
    var_v1_20 = M2C_FIELD(arg0, s32 *, 0x6C);
    if (var_v1_20 < 0) {
        var_v1_20 += 7;
    }
    M2C_FIELD(temp_s2, u8 *, 0x1E) = (u8) (M2C_FIELD(temp_s2, u8 *, 0x1E) + *(((var_v1_20 >> 3) * 3) + D_8010104C));
    var_v1_21 = M2C_FIELD(arg0, s32 *, 0x6C);
    if (var_v1_21 < 0) {
        var_v1_21 += 7;
    }
    M2C_FIELD(temp_s2, u8 *, 0x1F) = (u8) (M2C_FIELD(temp_s2, u8 *, 0x1F) + M2C_FIELD((((var_v1_21 >> 3) * 3) + D_8010104C), u8 *, 1));
    var_v1_22 = M2C_FIELD(arg0, s32 *, 0x6C);
    if (var_v1_22 < 0) {
        var_v1_22 += 7;
    }
    M2C_FIELD(temp_s2, u8 *, 0x20) = (u8) (M2C_FIELD(temp_s2, u8 *, 0x20) + M2C_FIELD((((var_v1_22 >> 3) * 3) + D_8010104C), u8 *, 2));
    M2C_FIELD(arg0, s32 *, 0x6C) = (s32) (M2C_FIELD(arg0, s32 *, 0x6C) + 1);
}
