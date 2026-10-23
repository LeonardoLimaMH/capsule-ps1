#include "common.h"

s32 func_800FEC2C(void *arg0) {
    extern M2C_UNK D_80069AD4[];
    extern M2C_UNK D_8008ED68[];
    s32 temp_a0;
    s32 temp_a3;
    s32 temp_t0;
    s32 var_a1;
    s32 var_a2;
    s32 var_t1;
    s32 var_t2;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;

    var_t2 = 8;
    if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
        var_t2 = M2C_FIELD(D_8008ED68, u8 *, 0x103) * 8;
    }
    var_t1 = 8;
    if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
        var_t1 = M2C_FIELD(D_8008ED68, u8 *, 0x103) * 8;
    }
    var_a2 = 8;
    if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
        var_a2 = M2C_FIELD(D_8008ED68, u8 *, 0x103) * 8;
    }
    temp_a3 = -M2C_FIELD(arg0, s16 *, 0) - M2C_FIELD(D_80069AD4, s32 *, 0x44);
    temp_t0 = -M2C_FIELD(arg0, s16 *, 2) - M2C_FIELD(D_80069AD4, s32 *, 0x48);
    var_v1 = temp_a3;
    if (temp_a3 < 0) {
        var_v1 = -var_v1;
    }
    temp_a0 = -M2C_FIELD(arg0, s16 *, 4) - M2C_FIELD(D_80069AD4, s32 *, 0x4C);
    var_a1 = 0;
    if (var_v1 < var_t2) {
        var_t2 = var_v1;
    }
    if (temp_a3 < 0) {
        var_t2 = -var_t2;
    }
    var_v1_2 = temp_t0;
    if (temp_t0 < 0) {
        var_v1_2 = -var_v1_2;
    }
    if (var_v1_2 < var_t1) {
        var_t1 = var_v1_2;
    }
    if (temp_t0 < 0) {
        var_t1 = -var_t1;
    }
    var_v1_3 = temp_a0;
    if (temp_a0 < 0) {
        var_v1_3 = -var_v1_3;
    }
    if (var_v1_3 < var_a2) {
        var_a2 = var_v1_3;
    }
    if (temp_a0 < 0) {
        var_a2 = -var_a2;
    }
    if (temp_a3 != 0) {
        var_a1 = 1;
        M2C_FIELD(D_80069AD4, s32 *, 0x44) = (s32) (M2C_FIELD(D_80069AD4, s32 *, 0x44) + var_t2);
    }
    if (temp_t0 != 0) {
        var_a1 += 1;
        M2C_FIELD(D_80069AD4, s32 *, 0x48) = (s32) (M2C_FIELD(D_80069AD4, s32 *, 0x48) + var_t1);
    }
    if (temp_a0 != 0) {
        var_a1 += 1;
        M2C_FIELD(D_80069AD4, s32 *, 0x4C) = (s32) (M2C_FIELD(D_80069AD4, s32 *, 0x4C) + var_a2);
    }
    return var_a1 == 0;
}
