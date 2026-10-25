#include "common.h"

static s32 sdiv(s32 a, s32 b) {
    s32 q;
    __asm__ volatile("div $0,%1,%2\n\tmflo %0" : "=r"(q) : "r"(a), "r"(b));
    return q;
}

void func_800C9534(s32 a0, u8 *o, s32 v) {
    s32 s = sdiv(v << 12, *(s16 *)(o + 0x4E));
    *(u16 *)(o + 0x52) = s;
    *(u16 *)(o + 0x50) = s;
    s &= -0x10;
    *(u16 *)(o + 0x52) = s;
    *(u16 *)(o + 0x50) = s;
}
