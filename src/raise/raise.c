#include "common.h"

extern void *func_80015B3C();
extern void func_80015EF8(u8 *), func_8001AA70(void *, void *, s32);
extern void func_80099370(void), func_800161C4(void);
u8 *func_80098EAC(u8 *s) {
    u8 *o = func_80015B3C(func_80099370, func_800161C4, *(u16 *)(s + 2) + 1);
    func_80015EF8(o);
    func_8001AA70(o + 0x14, s + 0x14, 0x20);
    *(u8 **)(o + 0x40) = s;
    *(u32 *)(o + 0x34) = (*(u32 *)(o + 0x34) & ~0x80) | (s[0x34] & 0x80);
    *(u32 *)(o + 0x34) = (*(u32 *)(o + 0x34) & ~0x100) | (*(u32 *)(s + 0x34) & 0x100);
    *(u32 *)(o + 0x34) = (*(u32 *)(o + 0x34) & ~0x200) | (*(u32 *)(s + 0x34) & 0x200);
    *(u32 *)(o + 0x34) = (*(u32 *)(o + 0x34) & ~0xC00) | (*(u32 *)(s + 0x34) & 0xC00);
    *(u32 *)(o + 0x34) = (*(u32 *)(o + 0x34) & 0xFFFF0FFF) | (*(u32 *)(s + 0x34) & 0xF000);
    *(u16 *)(o + 0x64) = *(u16 *)(s + 0x64);
    *(u32 *)(o + 0x30) |= 0x30;
    *(u16 *)(o + 0x66) = *(u16 *)(s + 0x66);
    return o;
}
