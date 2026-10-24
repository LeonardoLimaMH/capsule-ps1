#include "common.h"

s32 func_800C55C4(M2C_UNK arg1) {
    extern M2C_UNK D_80100F38[];
    void *temp_s0;

    temp_s0 = ((func_800B1260(arg1) & 0xFFFF) * 0x79C) + D_80100F38;
    if ((M2C_FIELD(temp_s0, s16 *, 0x228) != 1) || (M2C_FIELD(temp_s0, s16 *, 0x2C0) == 4) || (func_800CD654(arg1), (M2C_FIELD(temp_s0, s16 *, 0x228) == 0))) {
        M2C_FIELD(temp_s0, s32 *, 0x2C4) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x2C4) + 1);
    }
    return M2C_FIELD(temp_s0, s32 *, 0x2C4);
}
