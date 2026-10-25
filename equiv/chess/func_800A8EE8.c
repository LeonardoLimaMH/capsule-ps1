#include "common.h"

void *func_800A8EE8(s32 arg0, s32 arg1, s32 arg2) {
    extern u8 D_8006B2A4[];
    return (M2C_FIELD((arg0 + ((arg2 * 0x7C) + (arg1 * 0x2E8))), u8 *, 0x18) * 0x58) + D_8006B2A4;
}
