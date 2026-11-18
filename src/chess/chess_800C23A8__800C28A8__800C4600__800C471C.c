#include "common.h"

extern void func_800C4600();
u8 *func_800C471C(void *arg0, u8 *arg1, s32 arg2, s32 arg3) {
    extern void func_800AADE0();
    extern u8 *func_80015B3C();
    extern void func_80015EF8();
    extern void func_8001AA70();
    u8 *o;

    o = func_80015B3C(func_800C4600, func_800AADE0, 5);
    func_80015EF8(o);
    *(s32 *)(o + 0x7C) = arg2;
    *(s32 *)(o + 0x80) = arg3;
    func_8001AA70(o + 0x14, arg1 + 0x14, 0x20);
    *(u8 **)(o + 0x40) = arg1;
    *(u32 *)(o + 0x34) = (*(u32 *)(o + 0x34) & ~0x7F) | 1;
    return o;
}
