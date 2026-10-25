#include "common.h"

extern u8 D_8008ED68[];
extern u8 *func_80015B3C();
extern void func_8001AFA0(), func_80018440();

u8 *func_8001ADF8(s32 a0, s32 a1, s32 a2, s32 a3) {
    u8 *o = func_80015B3C(func_8001AFA0, func_80018440, 0);
    u32 *f;

    *(s32 *)(o + 0x38) = a1;
    *(s32 *)(o + 0x3C) = a3;
    f = (u32 *)(o + 0x28);
    switch (a2) {
    case 0:
        *f &= ~0x30;
        break;
    case 1:
        *f = (*f & ~0x30) | 0x10;
        break;
    case 2:
        *f = (*f & ~0x30) | 0x20;
        break;
    case 3:
        *f |= 0x30;
        break;
    }
    *(s32 *)(o + 0x34) = a0;
    *f = (*f | 0x40) & ~1;
    switch (a0) {
    case 0:
    case 2:
        o[0x32] = 0;
        o[0x31] = 0;
        o[0x30] = 0;
        break;
    case 1:
    case 3:
        o[0x32] = 0xFF;
        o[0x31] = 0xFF;
        o[0x30] = 0xFF;
        break;
    }
    *(s16 *)(o + 0x14) = -(*(s32 *)(D_8008ED68 + 0x108) / 2);
    *(s16 *)(o + 0x18) = 0x140;
    *(s16 *)(o + 0x1A) = 0xF0;
    *(s16 *)(o + 0x16) = -(*(s32 *)(D_8008ED68 + 0x10C) / 2);
    *(s32 *)(D_8008ED68 + 0xA68) = 1;
    return o;
}
