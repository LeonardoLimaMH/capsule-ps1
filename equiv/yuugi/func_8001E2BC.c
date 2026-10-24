#include "common.h"

void func_8001E2BC(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    extern M2C_UNK D_8008ED68[];
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s16 *, 0x14) = (s16) (arg2 + ((s32) M2C_FIELD(D_8008ED68, s32 *, 0x108) / 2));
    M2C_FIELD(arg0, s8 *, 8) = (s8) arg4;
    M2C_FIELD(arg0, s8 *, 0xD) = (s8) arg5;
    M2C_FIELD(arg0, s16 *, 0x16) = (s16) (arg3 + ((s32) M2C_FIELD(D_8008ED68, s32 *, 0x10C) / 2));
}
