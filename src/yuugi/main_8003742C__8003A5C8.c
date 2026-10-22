#include "common.h"
#include "yuugi.h"

extern u8 D_800937D0[][0x54];

void func_8003A5C8(u8 arg0, s32 arg1, u8 arg2) {
    D_800937D0[arg0][7] = arg2 & 0x7F;
}
