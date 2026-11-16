#include "common.h"

void func_800BA1D8(s32 a0) {
    extern u8 D_80100F38[], D_80091618[];
    extern s32 func_800B1260(s32), func_800B12D8(s32), func_800E14C4(s32);
    extern void func_800A88E4(s32, s32);
    typedef struct {
        u8 _p0[0x12];
        u16 f12;
        u8 _p14[0x90 - 0x14];
        u16 f90;
        u8 _p92[0x1A8 - 0x92];
    } RSlot;
    RSlot *r;
    register s32 k asm("s2") = func_800B1260(a0);
    u8 *p = D_80100F38 + (u16)k * 0x79C;
    u16 *px = (u16 *)(p + 0x332), *py = (u16 *)(p + 0x334);
    u16 i;
    if (func_800E14C4((u16)k) == 1) return;
    r = (RSlot *)D_80091618;
    if (r[(u16)k].f90 != 0) k = func_800B12D8(a0);
    for (i = 0; i < r[(u16)k].f12; i++) {
        register s32 offset asm("v1") = (u16)k * 0x1A8;
        register u8 *base asm("a2") = (u8 *)(offset + (u32)r);
        u16 n = *(u16 *)(base + i * 2 + 0x14);
        u8 *e = (u8 *)((i * 12 + offset) + (u32)r);
        u16 x = *(u16 *)(e + 0x1C) - *px;
        u16 y = *(u16 *)(e + 0x20) - *py;
        if ((u16)(x + 1) < 3 && (u16)(y + 1) < 3)
            func_800A88E4((u16)k, n);
    }
}
