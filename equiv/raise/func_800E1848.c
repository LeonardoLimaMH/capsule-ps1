#include "common.h"

extern u8 D_80105320[];

void func_800E1848(s32 idx) {
    *(s16 *)(D_80105320 + (idx & 0xFFFF) * 0x110) = 0;
}
