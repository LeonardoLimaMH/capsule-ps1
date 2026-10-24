#include "common.h"

s32 func_800C8210(M2C_UNK arg1) {
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_80100F38[];
    s32 temp_s0;
    s32 temp_v0;
    void *temp_s1;
    void *temp_v1;

    temp_s0 = func_800B1260(arg1) & 0xFFFF;
    if (temp_s0 == 0xFFFF) {
        return 0;
    }
    temp_s1 = (temp_s0 * 0x79C) + D_80100F38;
    func_800D4B7C(arg1, temp_s0);
    M2C_FIELD(temp_s1, s32 *, 0x798) = (s32) (M2C_FIELD(temp_s1, s32 *, 0x798) & ~0xC0 & ~0x300 & ~0xC00 & ~0x3000);
    temp_v1 = (temp_s0 * 0x1A8) + D_80091618;
    if (M2C_FIELD(temp_v1, u16 *, 0x62) == 1) {
        M2C_FIELD(temp_v1, u16 *, 0x62) = 0U;
        M2C_FIELD(temp_v1, s16 *, 0x64) = 0;
    } else if (M2C_FIELD(temp_v1, u16 *, 0x66) == 1) {
        M2C_FIELD(temp_v1, u16 *, 0x66) = 0U;
        M2C_FIELD(temp_v1, s16 *, 0x68) = 0;
    }
    temp_v0 = M2C_FIELD(temp_s1, s32 *, 0x2BC) + 1;
    M2C_FIELD(temp_s1, s32 *, 0x2BC) = temp_v0;
    return temp_v0;
}
