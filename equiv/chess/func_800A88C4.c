#include "common.h"

static s32 sdiv(s32 a, s32 b) {
    s32 q;
    __asm__ volatile("div $0,%1,%2\n\tmflo %0" : "=r"(q) : "r"(a), "r"(b));
    return q;
}

s16 func_800A88C4(s16 a) {
    return sdiv(0x4020, a);
}
