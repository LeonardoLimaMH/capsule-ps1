#include "common.h"

void func_800A37E8(void *arg0) {
    extern u8 D_80085428[];
    extern u8 D_8008ED68[];
    extern u8 D_80100C18[];
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_v0_3;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    s8 temp_a0;
    s8 temp_a3;
    s8 temp_v0_4;
    u8 temp_a1;
    u8 temp_a2;
    u8 temp_v1;
    void *temp_s0;
    void *temp_v0;
    void *temp_v0_2;

    temp_s3 = M2C_FIELD(arg0, s32 *, 0x5C);
    temp_s0 = arg0 + 0x18;
    if (func_800CAE6C(D_80085428 + 0x5D0) != 0) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x50) | 1;
        goto block_13;
    }
    if ((M2C_FIELD(D_80085428, u8 *, 0xBE5) == 1) && (M2C_FIELD(D_80085428, u8 *, 0xBCA) == temp_s3)) {
        M2C_FIELD(arg0, s32 *, 0x50) = (s32) (M2C_FIELD(arg0, s32 *, 0x50) & ~1);
        temp_v0 = (temp_s3 * 2) + D_80085428;
        func_800A4900(D_80085428, temp_s0, M2C_FIELD(temp_v0, u8 *, 0xBD1), M2C_FIELD(temp_v0, u8 *, 0xBD2));
        var_v1 = rcos((M2C_FIELD(arg0, s32 *, 0x54) << 0xC) / 120);
        if (var_v1 < 0) {
            var_v1 += 0x3F;
        }
        temp_s1 = var_v1 >> 6;
        var_a0 = rsin((M2C_FIELD(arg0, s32 *, 0x54) << 0xC) / 120);
        if (var_a0 < 0) {
            var_a0 += 0x3F;
        }
        temp_v0_2 = (temp_s3 * 4) + D_80100C18;
        temp_v1 = M2C_FIELD(temp_v0_2, u8 *, 0);
        temp_a1 = M2C_FIELD(temp_v0_2, u8 *, 1);
        temp_a2 = M2C_FIELD(temp_v0_2, u8 *, 2);
        M2C_FIELD(temp_s0, s8 *, 0x20) = (s8) (temp_v1 + temp_s1);
        M2C_FIELD(temp_s0, s8 *, 0x21) = (s8) (temp_a1 + temp_s1);
        M2C_FIELD(temp_s0, s8 *, 0x22) = (s8) (temp_a2 + temp_s1);
        temp_v0_3 = var_a0 >> 6;
        temp_a3 = temp_v1 + temp_v0_3;
        temp_a0 = temp_a1 + temp_v0_3;
        temp_v0_4 = temp_a2 + temp_v0_3;
        M2C_FIELD(temp_s0, s8 *, 0x25) = temp_v0_4;
        M2C_FIELD(temp_s0, s8 *, 0x28) = temp_v0_4;
        M2C_FIELD(temp_s0, s8 *, 0x24) = temp_a0;
        M2C_FIELD(temp_s0, s8 *, 0x27) = temp_a0;
        M2C_FIELD(temp_s0, s8 *, 0x23) = temp_a3;
        M2C_FIELD(temp_s0, s8 *, 0x26) = temp_a3;
        M2C_FIELD(temp_s0, s8 *, 0x29) = (s8) (temp_v1 - temp_s1);
        M2C_FIELD(temp_s0, s8 *, 0x2A) = (s8) (temp_a1 - temp_s1);
        M2C_FIELD(temp_s0, s8 *, 0x2B) = (s8) (temp_a2 - temp_s1);
        temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x54);
        if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
            var_v0_2 = temp_v1_2 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
        } else {
            var_v0_2 = temp_v1_2 + 1;
        }
        M2C_FIELD(arg0, s32 *, 0x54) = var_v0_2;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    var_v0 = M2C_FIELD(arg0, s32 *, 0x50) | 1;
block_13:
    M2C_FIELD(arg0, s32 *, 0x50) = var_v0;
}
