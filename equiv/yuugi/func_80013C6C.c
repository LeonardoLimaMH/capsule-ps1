#include "common.h"

extern u8 *func_80015B3C();
extern void func_80015EF8(), func_80015B00(), func_800161C4();
extern s32 func_80020304(), func_80019F30();

u8 *func_80013C6C(s32 a0) {
    u8 *o, *q;
    s32 r;
    u32 v, f, t;
    u16 h46, h4A;

    o = func_80015B3C(func_80015B00, func_800161C4, 4);
    func_80015EF8(o);
    *(u32 *)(o + 0x38) &= ~1;
    r = func_80020304(2);
    v = (*(u32 *)(o + 0x34) & ~0x7F) | (r & 0x7F);
    *(u32 *)(o + 0x34) = v;
    if (a0 == 0) {
        r = func_80019F30(0x6000E, (v & 0x7F) + 0x256);
    } else {
        r = func_80019F30(0x6000E, (v & 0x7F) + 0x237);
    }
    *(s32 *)(o + 0x18) = r;
    *(s16 *)(o + 0x46) = 0xE0;
    r = func_80020304(0x3C);
    *(s16 *)(o + 0x4A) = -0x3C - r;
    *(s16 *)(o + 0x4E) = a0 != 0 ? 0x401 : 0xA;
    f = *(u32 *)(o + 0x38);
    *(s32 *)(o + 0x68) = -0x3000;
    *(u32 *)(o + 0x38) = f | 8;
    if (a0 == 0) {
        *(u32 *)(o + 0x38) = (f | 0x48) & ~0x30;
        q = func_80015B3C(func_80015B00, func_800161C4, 4);
        func_80015EF8(q);
        *(u32 *)(q + 0x38) &= ~1;
        *(s32 *)(q + 0x18) = func_80019F30(0x6000E, (*(u32 *)(o + 0x34) & 0x7F) + 0x237);
        h46 = *(u16 *)(o + 0x46);
        t = *(u32 *)(q + 0x38);
        *(u16 *)(q + 0x46) = h46;
        h4A = *(u16 *)(o + 0x4A);
        *(u16 *)(q + 0x4E) = 0x401;
        *(s32 *)(q + 0x68) = -0x3000;
        *(u32 *)(q + 0x38) = t | 8;
        *(u16 *)(q + 0x4A) = h4A;
    }
    return o;
}
