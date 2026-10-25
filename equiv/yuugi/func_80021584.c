#include "common.h"

extern u8 *func_80015B3C();
extern s32 func_80019F30();
extern void func_80022700();
extern void func_800161C4();

s32 func_80021584(void) {
    u8 *o = func_80015B3C(func_80022700, func_800161C4, 2);
    s32 f38, f30;

    func_80015EF8(o);
    *(s32 *)(o + 0x18) = func_80019F30(0x6000E, 0x7E);
    *(s16 *)(o + 0x46) = 0x98;
    *(s16 *)(o + 0x4E) = 4;
    f30 = *(s32 *)(o + 0x30);
    f38 = *(s32 *)(o + 0x38) | 1;
    *(s32 *)(o + 0x38) = f38;
    *(s32 *)(o + 0x30) = (f30 & ~0x30) | 0x20;
    f38 = (f38 | 0x40) & ~0x30;
    *(s32 *)(o + 0x38) = f38;
    return f38;
}
