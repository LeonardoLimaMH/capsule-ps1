#include "common.h"

extern u8 *func_80015B3C();
extern s32 func_80019F30();
extern void func_8003350C();
extern void func_800161C4();

u8 *func_80032E78(s16 x, s16 y, s16 z, s32 a3, s32 e5, void *cb) {
    u8 *o;

    if (cb == 0) {
        cb = (void *)func_8003350C;
    }
    o = func_80015B3C(cb, func_800161C4, 1);
    func_80015EF8(o);
    func_8001611C(0x1000);
    *(s16 *)(o + 0x46) = x;
    *(s16 *)(o + 0x4A) = y;
    *(s16 *)(o + 0x4E) = z;
    o[0x5A] = 0x80;
    o[0x59] = 0x80;
    o[0x58] = 0x80;
    *(s32 *)(o + 0x18) = 0;
    func_80015CD0(o + 0x14, func_80019F30(a3 | 0x70000, e5), 0);
    *(s32 *)(o + 0x7C) = e5;
    return o;
}
