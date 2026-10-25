#include "common.h"

/* stub-ret: mixed */
extern u8 D_80100F38[], D_80091618[], D_800ED8F0[];
extern s16 D_80069BBE;
extern s32 func_800B1260(s32), func_800A8CB4(s32), func_80019F30(s32, s32);
extern void func_80015CD0(void *, s32, s32);

s32 func_800CE380(s32 a0, u8 *o) {
    u16 k = func_800B1260(a0);
    u16 c = *(u16 *)(D_80091618 + k * 0x1A8);
    s32 n = (*(s16 *)(D_80100F38 + k * 0x79C + 0x326) + D_80069BBE / 512) % 8 + 9;
    s32 r = func_80019F30(func_800A8CB4(c) | 0x70000, *(s32 *)(D_800ED8F0 + c * 32 + 0x18) + n);
    s32 w;
    if (r == 0) return 0;
    func_80015CD0(o + 0x14, r, 0);
    *(s32 *)(o + 0x7C) = n;
    w = ((((*(s32 *)(o + 0x30) & ~0x1C0) | 0x40) & ~0x30) | 0x10) & ~8;
    *(s32 *)(o + 0x30) = w;
    return w;
}
