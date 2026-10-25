#include "common.h"

extern u8 D_800937D0[];

void func_8003A594(s32 i, s8 value) {
    D_800937D0[(i & 0xFF) * 0x54] = value;
}
