#include "common.h"

/* stub-ret: mixed */
extern u8 D_80091618[], D_800ED8F0[];
extern s32 func_800B1260(s32), func_800A8CB4(s32), func_80019F30(s32, s32);
extern void func_80015CD0(void *, s32, s32);

s32 func_800CE4B8(s32 a0, u8 *o, s32 a2, s32 a3) {
    u16 k = func_800B1260(a0);
    u16 c = *(u16 *)(D_80091618 + k * 0x1A8);
    s32 r = func_80019F30(func_800A8CB4(c) | 0x70000, *(s32 *)(D_800ED8F0 + c * 32 + 0x18) + a2);
    s32 w;
    if (r == 0) return 0;
    func_80015CD0(o + 0x14, r, a3);
    *(s32 *)(o + 0x7C) = a2;
    w = ((((*(s32 *)(o + 0x30) & ~0x1C0) | 0x40) & ~0x30) | 0x10) & ~8;
    *(s32 *)(o + 0x30) = w;
    return w;
}
