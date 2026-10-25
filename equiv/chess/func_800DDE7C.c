#include "common.h"

extern u8 D_8008ED68[];
extern s32 func_80013920(void);

s32 func_800DDE7C(u8 *o) {
    u32 v = *(u32 *)(o + 0x3C);
    if (D_8008ED68[0x103] < 2) v += 1;
    else v += D_8008ED68[0x103];
    *(u32 *)(o + 0x3C) = v;
    if (*(u32 *)(o + 0x84) < v) return func_80013920();
    return *(u32 *)(o + 0x84) < v;
}
