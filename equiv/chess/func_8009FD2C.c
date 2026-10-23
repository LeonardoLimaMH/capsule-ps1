#include "common.h"

void func_8009FD2C(void *arg0, void *arg1) {
    extern s16 D_80101B3A[];
    (*D_80101B3A) = ((s32) (M2C_FIELD(arg1, u8 *, 0x28) + 1) >> 1) + 0xC2;
    M2C_FIELD(arg0, s32 *, 0x14) = func_8001F8B0(0x19, 9);
}
