#include "common.h"

extern u8 D_8008ED68[];
extern s32 func_80019F30(s32, s32);
extern void func_80012A20(s32, s32, s32, s32);
extern u8 *func_80015B3C(void *, void *, s32);
extern void func_80015EF8(u8 *);
extern s32 func_80020304(s32), func_800374E8(s32);
extern void func_8009BE98(void), func_800161C4(void);

s32 func_8009C4D4(void) {
    u8 *o;
    s32 r;
    func_80012A20(func_80019F30(0x2000E, 0x29), 1, 0, 0);
    o = func_80015B3C(func_8009BE98, func_800161C4, 2);
    func_80015EF8(o);
    *(s32 *)(o + 0x38) &= ~1;
    *(s32 *)(o + 0x34) = (*(s32 *)(o + 0x34) & ~0x7F) | (func_80020304(2) & 0x7F);
    *(s32 *)(o + 0x7C) = func_80020304(2) ? 1 : -1;
    *(s32 *)(o + 0x18) = func_80019F30(0x6000E, (*(s32 *)(o + 0x34) & 0x7F) * 2 + 0x23C);
    r = func_800374E8(0x8006);
    *(u8 **)(D_8008ED68 + 0x9B4) = o;
    return r;
}
