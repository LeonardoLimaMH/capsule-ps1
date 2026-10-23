#include "common.h"

void func_800C5850(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg1, s16 *, 0x46) = (s16) (M2C_FIELD(arg0, u16 *, 0x46) + arg2);
    M2C_FIELD(arg1, s16 *, 0x4A) = (s16) (M2C_FIELD(arg0, u16 *, 0x4A) + arg3);
    M2C_FIELD(arg1, s16 *, 0x4E) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E) + arg4);
}
