#include "common.h"

extern u8 D_80100F38[], D_80091618[];
extern s32 D_800EEB6C;
extern s32 func_800B1260(s32);
extern void func_800D4B7C(s32, s32), func_800D1CC4(s32, s32, s32, s32);
extern s32 func_800D0CFC(s32);

s32 func_800D9A20(s32 a0, s32 a1) {
    u16 k = func_800B1260(a1);
    u8 *p;
    *(u16 *)(D_80091618 + k * 0x1A8 + 0x66) = 0;
    *(u16 *)(D_80091618 + k * 0x1A8 + 0x68) = 0;
    p = D_80100F38 + k * 0x79C;
    func_800D4B7C(a1, k);
    if (func_800D0CFC(a1) == 0) {
        func_800D1CC4(k, 0x1D, 0, 0);
        D_800EEB6C = 1;
    }
    return *(s32 *)(p + 0x2BC) += 1;
}
