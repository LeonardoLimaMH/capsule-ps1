#include "common.h"

extern u8 D_80105320[];

s32 func_800E17F8(s32 idx) {
    return *(s16 *)(D_80105320 + (idx & 0xFFFF) * 0x110 + 6) == 0;
}
