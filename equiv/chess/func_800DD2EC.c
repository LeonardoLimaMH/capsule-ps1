#include "common.h"

void func_800DD2EC(void *arg0) {
    extern M2C_UNK D_80069AD4[];
    extern M2C_UNK D_8008ED68[];
    s16 temp_s0;
    s16 temp_s0_2;
    s16 temp_v0;
    s16 temp_v1;
    s16 var_s1;
    s32 temp_a2;
    s32 temp_a3;

    temp_v1 = M2C_FIELD(arg0, s16 *, 0x1C);
    var_s1 = temp_v1 + 1;
    if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
        var_s1 = temp_v1 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
    }
    M2C_FIELD(arg0, s16 *, 0x1C) = var_s1;
    temp_s0 = M2C_FIELD(arg0, s16 *, 0x20);
    temp_s0_2 = func_800202A4(temp_s0);
    temp_v0 = func_800202A4(temp_s0);
    temp_a3 = M2C_FIELD(D_80069AD4, s32 *, 0xD8) - M2C_FIELD(arg0, s16 *, 0x2C);
    M2C_FIELD(D_80069AD4, s32 *, 0xD8) = temp_a3;
    temp_a2 = M2C_FIELD(D_80069AD4, s32 *, 0xDC) - M2C_FIELD(arg0, s16 *, 0x2E);
    M2C_FIELD(D_80069AD4, s32 *, 0xDC) = temp_a2;
    if (M2C_FIELD(arg0, s16 *, 0x1E) < var_s1) {
        func_80013920(arg0, D_80069AD4, temp_a2, temp_a3);
        return;
    }
    M2C_FIELD(D_80069AD4, s32 *, 0xD8) = (s32) (temp_a3 + temp_s0_2);
    M2C_FIELD(D_80069AD4, s32 *, 0xDC) = (s32) (temp_a2 + temp_v0);
    M2C_FIELD(arg0, s16 *, 0x2C) = temp_s0_2;
    M2C_FIELD(arg0, s16 *, 0x2E) = temp_v0;
}
