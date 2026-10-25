#include "common.h"

extern u8 D_80100F38[], D_80091618[];
extern s32 func_800B1260(s32);
extern void func_800D4B7C(s32, s32);

s32 func_800C8210(s32 a0, s32 a1) {
    u16 k = func_800B1260(a1);
    u8 *p, *e;
    if (k == 0xFFFF) return 0;
    p = D_80100F38 + k * 0x79C;
    func_800D4B7C(a1, k);
    *(s32 *)(p + 0x798) = *(s32 *)(p + 0x798) & ~0xC0 & ~0x300 & ~0xC00 & ~0x3000;
    e = D_80091618 + k * 0x1A8;
    if (*(u16 *)(e + 0x62) == 1) {
        *(u16 *)(e + 0x62) = 0;
        *(u16 *)(e + 0x64) = 0;
    } else if (*(u16 *)(e + 0x66) == 1) {
        *(u16 *)(e + 0x66) = 0;
        *(u16 *)(e + 0x68) = 0;
    }
    return *(s32 *)(p + 0x2BC) += 1;
}
