#include "common.h"

extern u8 *func_80015B3C();
extern void func_80015EF8(), func_800227D4(), func_800161C4();
extern s32 func_80019F30();

#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))

void func_80022C34(s32 f, s32 a1, s32 a2) {
    u8 *obj;
    u32 t;

    obj = func_80015B3C(func_800227D4, func_800161C4, 4);
    func_80015EF8(obj);
    W(0x18) = f != 0 ? func_80019F30(0x60013, 0xD7) : func_80019F30(0x6000E, 0x2B7);
    H(0x46) = -0x58;
    H(0x4A) = -0x1E8;
    H(0x6E) = 6;
    H(0x4E) = 4;
    W(0x34) = (W(0x34) & ~0x7F) | 1;

    obj = func_80015B3C(func_800227D4, func_800161C4, 4);
    func_80015EF8(obj);
    W(0x18) = f != 0 ? func_80019F30(0x60013, 0xD8) : func_80019F30(0x6000E, 0x2B8);
    H(0x46) = -0x1D8;
    H(0x6A) = 6;
    H(0x4A) = -0x30;
    t = W(0x34);
    H(0x4E) = 4;
    W(0x7C) = a2;
    W(0x34) = (t & ~0x7F) | 2;

    obj = func_80015B3C(func_800227D4, func_800161C4, 4);
    func_80015EF8(obj);
    t = W(0x34);
    H(0x46) = 0x1C0;
    H(0x6A) = -6;
    H(0x4A) = 8;
    H(0x4E) = 4;
    W(0x7C) = a2;
    W(0x34) = t & ~0x7F;

    obj = func_80015B3C(func_800227D4, func_800161C4, 4);
    func_80015EF8(obj);
    W(0x18) = f != 0 ? func_80019F30(0x60013, 0xD9) : func_80019F30(0x6000E, 0x2B9);
    H(0x46) = 0x1A0;
    H(0x6A) = -6;
    H(0x4A) = -0x30;
    H(0x4E) = 4;
    W(0x34) = (W(0x34) & ~0x7F) | 3;
}
