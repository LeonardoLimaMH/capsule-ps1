#include "common.h"

s32 func_800E6DCC(s32 arg0) {
    extern u8 D_80091618[];
    extern u8 D_800F2020[];
    s32 temp_a0;
    s32 temp_a1;
    s32 var_v0;
    void *temp_v0;

    temp_a1 = arg0 & 0xFFFF;
    temp_v0 = (temp_a1 * 0x1A8) + D_80091618;
    temp_a0 = M2C_FIELD(temp_v0, s32 *, 0xCC);
    M2C_FIELD(temp_v0, s32 *, 0xCC) = 0;
    M2C_FIELD(temp_v0, u16 *, 0xD0) = (u16) (M2C_FIELD(temp_v0, u16 *, 0xD0) + 1);
    M2C_FIELD(temp_v0, s32 *, 0xC8) = temp_a0;
    if (*((M2C_FIELD(temp_v0, u16 *, 0) * 2) + D_800F2020) != 0) {
        var_v0 = func_800E73D8(temp_a1, temp_a1) << 0x10;
    } else {
        var_v0 = func_800E6E68(temp_a1, temp_a1) << 0x10;
    }
    return var_v0 >> 0x10;
}
