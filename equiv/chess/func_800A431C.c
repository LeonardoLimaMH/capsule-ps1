#include "common.h"

void func_800A431C(void *arg0) {
    extern M2C_UNK D_80085428[];
    extern M2C_UNK D_8008ED68[];
    extern M2C_UNK D_80100C18[];
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v0_7;
    s32 var_v1;
    void *temp_s0;
    void *temp_s0_2;

    temp_a2 = M2C_FIELD(arg0, s32 *, 0x5C);
    temp_a1 = M2C_FIELD(arg0, s32 *, 0x70);
    if (M2C_FIELD(D_80085428, u8 *, 0xD77) != 0) {
        func_800185F8(temp_a1, temp_a2, D_80085428);
        return;
    }
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x54);
    if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
        var_v1 = temp_v1 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
    } else {
        var_v1 = temp_v1 + 1;
    }
    M2C_FIELD(arg0, s32 *, 0x54) = var_v1;
    if (M2C_FIELD(D_80085428, u8 *, 0xD78) == temp_a1) {
        temp_s0 = (temp_a2 * 4) + D_80100C18;
        temp_v0 = rsin(((var_v1 << 0xC) / 120) & 0x7FF, temp_a1, temp_a2, D_80085428);
        var_v0 = temp_v0 * M2C_FIELD(temp_s0, u8 *, 0);
        if (var_v0 < 0) {
            var_v0 += 0xFFF;
        }
        M2C_FIELD(arg0, s8 *, 0x38) = (s8) (var_v0 >> 0xC);
        var_v0_2 = temp_v0 * M2C_FIELD(temp_s0, u8 *, 1);
        if (var_v0_2 < 0) {
            var_v0_2 += 0xFFF;
        }
        M2C_FIELD(arg0, s8 *, 0x39) = (s8) (var_v0_2 >> 0xC);
        var_v0_3 = temp_v0 * M2C_FIELD(temp_s0, u8 *, 2);
        if (var_v0_3 < 0) {
            var_v0_3 += 0xFFF;
        }
        var_v0_4 = var_v0_3 >> 0xC;
    } else {
        temp_s0_2 = (temp_a2 * 4) + D_80100C18;
        temp_v0_2 = rsin(((var_v1 << 0xC) / 120) & 0x7FF, temp_a1, temp_a2, D_80085428);
        var_v0_5 = temp_v0_2 * M2C_FIELD(temp_s0_2, u8 *, 0);
        if (var_v0_5 < 0) {
            var_v0_5 += 0x3FFF;
        }
        M2C_FIELD(arg0, s8 *, 0x38) = (s8) (var_v0_5 >> 0xE);
        var_v0_6 = temp_v0_2 * M2C_FIELD(temp_s0_2, u8 *, 1);
        if (var_v0_6 < 0) {
            var_v0_6 += 0x3FFF;
        }
        M2C_FIELD(arg0, s8 *, 0x39) = (s8) (var_v0_6 >> 0xE);
        var_v0_7 = temp_v0_2 * M2C_FIELD(temp_s0_2, u8 *, 2);
        if (var_v0_7 < 0) {
            var_v0_7 += 0x3FFF;
        }
        var_v0_4 = var_v0_7 >> 0xE;
    }
    M2C_FIELD(arg0, s8 *, 0x3A) = (s8) var_v0_4;
}
