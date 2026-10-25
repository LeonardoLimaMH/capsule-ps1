#include "common.h"

void func_800A3E20(void *arg0) {
    extern u8 D_80085428[];
    extern u8 D_80085FF2[];
    extern u8 D_8008ED68[];
    extern u8 D_80100C18[];
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    void *temp_a0;
    void *temp_s0;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0x5C);
    temp_a0 = (temp_a1 * 2) + D_80085428;
    var_a3 = 0;
    if (M2C_FIELD(temp_a0, u8 *, 0xBD1) == M2C_FIELD(arg0, s32 *, 0x68)) {
        if (M2C_FIELD(temp_a0, u8 *, 0xBD2) == M2C_FIELD(arg0, s32 *, 0x6C)) {
            temp_v1 = M2C_FIELD(((temp_a1 * 0x10) + D_8008ED68), s32 *, 0x88);
            if (!(temp_v1 & 0x40)) {
                if (!(temp_v1 & 0x10)) {
                    if (!(temp_v1 & 1)) {
                        if (temp_v1 & 2) {
                            goto block_6;
                        }
                    } else {
                        goto block_6;
                    }
                } else {
                    goto block_6;
                }
            } else {
                goto block_6;
            }
        } else {
            goto block_6;
        }
    } else {
block_6:
        var_a3 = 1;
        M2C_FIELD(D_80085428, s8 *, 0xD77) = 0;
        M2C_FIELD(D_80085428, s8 *, 0xBE0) = 1;
    }
    if (var_a3 != 0) {
        func_800185F8(arg0, temp_a1, D_80085428, var_a3);
        return;
    }
    temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x54);
    if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
        var_a0 = temp_v1_2 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
    } else {
        var_a0 = temp_v1_2 + 1;
    }
    M2C_FIELD(arg0, s32 *, 0x54) = var_a0;
    temp_s0 = ((1 - (*D_80085FF2)) * 4) + D_80100C18;
    temp_v0 = rsin(((var_a0 << 0xC) / 120) & 0x7FF, temp_a1, D_80085428, var_a3);
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
    M2C_FIELD(arg0, s8 *, 0x3A) = (s8) (var_v0_3 >> 0xC);
}
