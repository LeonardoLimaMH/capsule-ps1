#include "common.h"

void func_800A8E78(void *arg0) {
    u32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, u32 *, 0x34);
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
    M2C_FIELD(arg0, u32 *, 0x34) = (u32) ((temp_v0 & ~0x100) | ((~(temp_v0 >> 8) & 1) << 8));
}
