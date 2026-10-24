#include "common.h"

extern u8 D_80100F38[];

void func_800AA930(s32 idx) {
    u8 *rec = D_80100F38 + (idx & 0xFFFF) * 0x79C;
    u8 *obj = *(u8 **)(rec + 0x21C);
    u32 w;

    *(s32 *)(obj + 0x38) |= 1;
    w = *(u32 *)(rec + 0x798);
    *(u8 **)(rec + 0x21C) = 0;
    rec[((w >> 26) & 0x1F) + 0x3A9] = 0;
}
