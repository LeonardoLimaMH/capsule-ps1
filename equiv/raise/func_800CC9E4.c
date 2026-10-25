#include "common.h"

extern s16 D_80078C20;
extern u16 D_8008EE44;
extern s32 func_80013920(u8 *, s32, s32);
extern void func_800CC5D4(u8 *, s32, s32);

s32 func_800CC9E4(u8 *o) {
    u32 w = *(u32 *)(o + 0x34);
    s32 a = (w >> 9) & 1, b = (w >> 10) & 3;
    s16 v;
    s32 q;
    if (((w >> 8) & 1) != D_80078C20) return func_80013920(o, a, b);
    if (D_8008EE44 == 0x41) return func_80013920(o, a, b);
    func_800CC5D4(o, a, b);
    v = *(s16 *)(o + 0x4E);
    if (v <= 0) return 0x160000;
    q = 0x16C000 / v;
    *(s16 *)(o + 0x52) = q;
    *(s16 *)(o + 0x50) = q & ~0xF;
    *(s16 *)(o + 0x52) = q & ~0xF;
    return q & ~0xF;
}
