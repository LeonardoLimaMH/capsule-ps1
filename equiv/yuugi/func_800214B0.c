#include "common.h"

void func_800214B0(void *arg0) {
    extern M2C_UNK D_80085438[];
    s32 temp_a1;
    s32 temp_t0;
    s32 var_v0;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0x7C);
    temp_t0 = M2C_FIELD(arg0, s32 *, 0x84);
    if (M2C_FIELD(D_80085438, u8 *, 2) != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x80) == 0) {
            func_80021870(temp_a1, M2C_FIELD(D_80085438, s32 *, 0x10), M2C_FIELD(D_80085438, u8 *, -0x10), temp_t0);
            var_v0 = M2C_FIELD(arg0, s32 *, 0x38) & ~1;
        } else if (func_80021910(arg0, temp_a1, M2C_FIELD(D_80085438, s32 *, 0x10), M2C_FIELD(D_80085438, u8 *, -0x10), temp_t0) != 0) {
            var_v0 = M2C_FIELD(arg0, s32 *, 0x38) & ~1;
        } else {
            goto block_5;
        }
    } else {
block_5:
        var_v0 = M2C_FIELD(arg0, s32 *, 0x38) | 1;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = var_v0;
    M2C_FIELD(arg0, s16 *, 0x4A) = (s16) (M2C_FIELD(D_80085438, u16 *, 0xC) + 0x78);
    if (M2C_FIELD(D_80085438, u8 *, 0) == 5) {
        func_800185F8(arg0);
    }
}
