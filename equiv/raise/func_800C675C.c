#include "common.h"

s32 func_800C675C(M2C_UNK arg1) {
    extern M2C_UNK D_80100F38[];
    u16 temp_v0;
    void *temp_v1;

    temp_v1 = ((func_800B1260(arg1) & 0xFFFF) * 0x79C) + D_80100F38;
    temp_v0 = M2C_FIELD(temp_v1, u16 *, 0x376) - 1;
    M2C_FIELD(temp_v1, u16 *, 0x376) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        M2C_FIELD(temp_v1, s32 *, 0x2BC) = (s32) M2C_FIELD((temp_v1 + (M2C_FIELD(temp_v1, s16 *, 0x2CC) * 4)), s32 *, 0x2F0);
    } else {
        M2C_FIELD(temp_v1, s32 *, 0x2BC) = (s32) M2C_FIELD(((M2C_FIELD(temp_v1, s16 *, 0x2CC) * 4) + temp_v1), s32 *, 0x2DC);
    }
    return M2C_FIELD(temp_v1, s32 *, 0x2BC);
}
