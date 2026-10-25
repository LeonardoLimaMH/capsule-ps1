#include "common.h"

extern u8 *func_80015B3C(void *, void *, s32);
extern void func_80015EF8(u8 *), func_8001AA70(void *, void *, s32);
extern void func_80099370(void), func_800161C4(void);

#define W34(o) (*(u32 *)((o) + 0x34))

u8 *func_80098EAC(u8 *s) {
    u8 *o = func_80015B3C(func_80099370, func_800161C4, *(u16 *)(s + 2) + 1);
    func_80015EF8(o);
    func_8001AA70(o + 0x14, s + 0x14, 0x20);
    *(u8 **)(o + 0x40) = s;
    W34(o) = (W34(o) & ~0x80) | (s[0x34] & 0x80);
    W34(o) = (W34(o) & ~0x100) | (W34(s) & 0x100);
    W34(o) = (W34(o) & ~0x200) | (W34(s) & 0x200);
    W34(o) = (W34(o) & ~0xC00) | (W34(s) & 0xC00);
    W34(o) = (W34(o) & 0xFFFF0FFF) | (W34(s) & 0xF000);
    *(u16 *)(o + 0x64) = *(u16 *)(s + 0x64);
    *(u32 *)(o + 0x30) |= 0x30;
    *(u16 *)(o + 0x66) = *(u16 *)(s + 0x66);
    return o;
}
