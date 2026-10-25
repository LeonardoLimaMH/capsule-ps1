#include "common.h"

extern u8 *func_80015B3C();
extern s32 func_8001A434();
extern void func_8003350C();
extern void func_800161C4();
extern u8 D_80065390[];

u8 *func_80032F50(s16 x, s16 y, s16 z, s32 a3, void *cb) {
    u8 *o;

    if (cb == 0) {
        cb = (void *)func_8003350C;
    }
    o = func_80015B3C(cb, func_800161C4, 1);
    func_80015EF8(o);
    func_8001611C(0x1000);
    o[0x5A] = 0x80;
    o[0x59] = 0x80;
    o[0x58] = 0x80;
    *(s16 *)(o + 0x46) = x;
    *(s16 *)(o + 0x4A) = y;
    *(s16 *)(o + 0x4E) = z;
    *(s32 *)(o + 0x30) = (*(s32 *)(o + 0x30) & ~0x30) | 0x20;
    *(s32 *)(o + 0x18) = func_8001A434(a3, D_80065390);
    *(s32 *)(o + 0x7C) = a3;
    return o;
}
