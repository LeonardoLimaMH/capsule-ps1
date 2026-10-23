#include "common.h"

s32 func_800FEF40(void) {
    extern M2C_UNK D_80069AD4[];
    extern M2C_UNK D_8008ED68[];
    extern M2C_UNK D_80119710[];
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_t0;
    s32 var_a1;
    s32 var_a3;
    s32 var_t1;
    s32 var_t2;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;

    var_t2 = 0x10;
    if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
        var_t2 = M2C_FIELD(D_8008ED68, u8 *, 0x103) * 0x10;
    }
    var_t1 = 0x10;
    if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
        var_t1 = M2C_FIELD(D_8008ED68, u8 *, 0x103) * 0x10;
    }
    var_a3 = 0x10;
    if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
        var_a3 = M2C_FIELD(D_8008ED68, u8 *, 0x103) * 0x10;
    }
    var_a1 = 0;
    temp_a2 = M2C_FIELD(D_80119710, s32 *, 0xC) - M2C_FIELD(D_80069AD4, s32 *, 0x44);
    var_v1 = temp_a2;
    if (temp_a2 < 0) {
        var_v1 = -var_v1;
    }
    temp_t0 = M2C_FIELD(D_80119710, s32 *, 0x14) - M2C_FIELD(D_80069AD4, s32 *, 0x4C);
    temp_a0 = M2C_FIELD(D_80119710, s32 *, 0x10) - M2C_FIELD(D_80069AD4, s32 *, 0x48);
    if (var_v1 < var_t2) {
        var_t2 = var_v1;
    }
    if (temp_a2 < 0) {
        var_t2 = -var_t2;
    }
    var_v1_2 = temp_a0;
    if (temp_a0 < 0) {
        var_v1_2 = -var_v1_2;
    }
    if (var_v1_2 < var_t1) {
        var_t1 = var_v1_2;
    }
    if (temp_a0 < 0) {
        var_t1 = -var_t1;
    }
    var_v1_3 = temp_t0;
    if (temp_t0 < 0) {
        var_v1_3 = -var_v1_3;
    }
    if (var_v1_3 < var_a3) {
        var_a3 = var_v1_3;
    }
    if (temp_t0 < 0) {
        var_a3 = -var_a3;
    }
    if (temp_a2 != 0) {
        var_a1 = 1;
        M2C_FIELD(D_80069AD4, s32 *, 0x44) = (s32) (M2C_FIELD(D_80069AD4, s32 *, 0x44) + var_t2);
    }
    if (temp_a0 != 0) {
        var_a1 += 1;
        M2C_FIELD(D_80069AD4, s32 *, 0x48) = (s32) (M2C_FIELD(D_80069AD4, s32 *, 0x48) + var_t1);
    }
    if (temp_t0 != 0) {
        var_a1 += 1;
        M2C_FIELD(D_80069AD4, s32 *, 0x4C) = (s32) (M2C_FIELD(D_80069AD4, s32 *, 0x4C) + var_a3);
    }
    return var_a1 == 0;
}
