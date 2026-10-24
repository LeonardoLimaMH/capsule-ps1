#include "common.h"

extern u8 D_80092008[];

s32 func_800DEDE4(s32 idx) {
    return ((*(u32 *)(D_80092008 + (idx & 0xFFFF) * 0x44) >> 17) & 0x3F) == 0;
}
