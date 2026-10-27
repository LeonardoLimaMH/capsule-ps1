#include "common.h"

/* stub-ret: mixed */
/* max-insns: 20000 */
/* arg1: small */
extern u8 D_80092008[], D_80091618[];
extern s32 func_800A510C(s32, s32, s32), func_800202A4(s32);
extern void func_800DECA8(s32, s32), func_800DF838(s32, s32, s32, s32), func_800DEF3C(s32, s32), func_800DFB80(s32, s32);

s32 func_800DF058(s32 a0, s32 a1) {
    u16 k = a1;
    u32 *e = (u32 *)(D_80092008 + k * 0x44);
    u16 h = *(u16 *)((u8 *)e + 4 + (((e[0] >> 11) & 0x3F) - 1) * 2);
    s16 x, y;
    *(u16 *)(D_80091618 + k * 0x1A8 + 0x90) = 0;
    e[0] &= ~1;
    if (func_800A510C(k, ((h >> 3) & 0x3F) + 1, ((h >> 9) & 0x3F) + 1) == 1) return 1;
    do {
        x = func_800202A4(4) + 4;
        y = func_800202A4(8) + 1;
    } while (func_800A510C((u16)a1, x, y) != 1);
    func_800DECA8(a0, (u16)a1);
    func_800DECA8(a0, (u16)a1);
    func_800DF838(a0, (u16)a1, x, y);
    func_800DEF3C(a0, (u16)a1);
    func_800DFB80(a0, (u16)a1);
    return 1;
}
