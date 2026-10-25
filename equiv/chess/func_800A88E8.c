#include "common.h"

extern u8 D_80063940[];

static s32 sdiv(s32 a, s32 b) {
    s32 q;
    __asm__ volatile("div $0,%1,%2\n\tmflo %0" : "=r"(q) : "r"(a), "r"(b));
    return q;
}

s16 func_800A88E8(u8 c, s16 d) {
    u8 *m = D_80063940 + c * 60;
    u32 a = *(u32 *)(m + 0x10), b = *(u32 *)(m + 0x14);
    return sdiv(((a >> 24) & 0x3F) * ((((b & 3) << 2) | (a >> 30)) * 8 + 0x100), d);
}
