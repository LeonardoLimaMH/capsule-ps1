#include "common.h"

s32 func_800DE9FC(void) {
    extern M2C_UNK D_80100F38[];
    void *temp_v1;

    temp_v1 = ((func_800B1260() & 0xFFFF) * 0x79C) + D_80100F38;
    M2C_FIELD(temp_v1, s32 *, 0x738) = (s32) (M2C_FIELD(temp_v1, s32 *, 0x738) + 1);
    return 0;
}
