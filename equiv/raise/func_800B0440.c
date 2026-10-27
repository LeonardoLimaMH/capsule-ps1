/* stub-ret: mixed */
#include "common.h"

extern u8 D_80091618[];
extern s32 (*D_800EEAA8[])(s32, s32);
extern s32 func_800D1548(s32, s32), func_800202A4(s32), func_800B1260(s32);
extern s32 func_800E1820(s32), func_800E17F8(s32), func_800E16AC(s32), func_800E1674(s32), func_800E14C4(s32);
extern s32 func_800E1140(s32), func_800E1388(s32), func_800E1594(s32), func_800E1624(s32);
extern void func_800B0740(s32, s32, s32, s32);

s32 func_800B0440(s32 a0, s32 a1) {
    u16 b = a1;
    s32 lo, hi, i, j;
    if (func_800D1548(a0, a1) == 1) return 0;
    if (func_800202A4(2)) {
        lo = 0;
        hi = 1;
    } else {
        lo = 2;
        hi = 3;
    }
    for (i = 1; i >= 0; i--) {
        u16 k = func_800B1260(i);
        u8 *e;
        s32 c;
        if (k == 0xFFFF) continue;
        e = D_80091618 + k * 0x1A8;
        if (*(u16 *)(e + 0x10) == 0xFFFF) c = 1;
        else c = *(u16 *)e == 0xFFFF;
        if (c == 1) continue;
        if (func_800E1820(k) != 0) return 0;
        if (func_800E17F8(k) == 0) return 0;
        if (func_800E16AC(k) == 1) return 0;
        if (func_800E1674(k) == 1) return 0;
        if (func_800E14C4(k) != 0) return 0;
        if (func_800E1140(k) == 0) return 0;
        if (func_800E1388(k) != 1) return 0;
        if (func_800E1594(k) == 1) return 0;
        if (func_800E1624(k) == 1) return 0;
    }
    for (j = lo; j <= hi; j++) {
        u16 r = D_800EEAA8[j]((u16)a0, b);
        if (r != 0) {
            func_800B0740((u16)a0, b, (u16)j, r);
            return (u16)(j + 1);
        }
    }
    return 0;
}
