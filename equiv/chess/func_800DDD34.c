#include "common.h"

void func_800DDD34(void *arg0) {
    extern u8 D_80069AD4[];
    extern u8 D_8008ED68[];
    s32 temp_a2;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    u16 temp_a1;
    u16 temp_a3;
    u16 temp_v1;
    u16 var_v0;

    temp_a1 = M2C_FIELD(arg0, u16 *, 0x32);
    temp_v1 = M2C_FIELD(arg0, u16 *, 0x34);
    if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
        var_v0 = temp_v1 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
    } else {
        var_v0 = temp_v1 + 1;
    }
    M2C_FIELD(arg0, u16 *, 0x34) = var_v0;
    temp_a3 = M2C_FIELD(arg0, u16 *, 0x34);
    temp_a2 = temp_a1 - temp_a3;
    if (temp_a2 < 0) {
        func_80013920((s32) arg0);
        return;
    }
    var_v1 = (s32) (((M2C_FIELD(arg0, u8 *, 0x28) * temp_a2) + (M2C_FIELD(arg0, u8 *, 0x2C) * temp_a3)) << 0xC) / (s32) temp_a1;
    if (var_v1 < 0) {
        var_v1 += 0xFF;
    }
    M2C_FIELD(D_80069AD4, s16 *, 0x70) = (s16) (var_v1 >> 8);
    temp_lo = (s32) (((M2C_FIELD(arg0, u8 *, 0x29) * temp_a2) + (M2C_FIELD(arg0, u8 *, 0x2D) * temp_a3)) << 0xC) / (s32) temp_a1;
    var_v0_2 = temp_lo >> 8;
    if (temp_lo < 0) {
        var_v0_2 = (s32) (temp_lo + 0xFF) >> 8;
    }
    M2C_FIELD(D_80069AD4, s16 *, 0x76) = (s16) var_v0_2;
    temp_lo_2 = (s32) (((M2C_FIELD(arg0, u8 *, 0x2A) * temp_a2) + (M2C_FIELD(arg0, u8 *, 0x2E) * temp_a3)) << 0xC) / (s32) temp_a1;
    var_v0_3 = temp_lo_2 >> 8;
    if (temp_lo_2 < 0) {
        var_v0_3 = (s32) (temp_lo_2 + 0xFF) >> 8;
    }
    M2C_FIELD(D_80069AD4, s16 *, 0x7C) = (s16) var_v0_3;
}
