#include "common.h"

extern u8 D_80092008[];

u32 func_800DFB10(s32 unused, s32 idx) {
    u32 *p = (u32 *)(D_80092008 + (idx & 0xFFFF) * 0x44);
    u32 w = *p;
    u32 hi = ((((w >> 17) & 0x3F) - 1) & 0x3F) << 17;
    u32 v = (w & 0xFF81FFFF) | hi;

    *p = (v & 0xFFFE07FF) | (((((v >> 11) & 0x3F) - 1) & 0x3F) << 11);
    return hi;
}
