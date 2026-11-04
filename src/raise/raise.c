#include "common.h"

struct S_Obj {
    u8 pad00[0x2];
    u16 unk02;
    u8 pad04[0x10];
    u8 unk14[0x1C];
    u32 unk30;
    u32 f34_0 : 7;
    u32 f34_7 : 1;
    u32 f34_8 : 1;
    u32 f34_9 : 1;
    u32 f34_10 : 2;
    u32 f34_12 : 4;
    u32 f34_16 : 16;
    u8 pad38[0x8];
    struct S_Obj *unk40;
    u8 pad44[0x20];
    u16 unk64;
    u16 unk66;
};

extern void *func_80015B3C();
extern void func_80015EF8(void *), func_8001AA70(void *, void *, s32);
extern void func_80099370(void), func_800161C4(void);
u8 *func_80098EAC(u8 *s) {
    u16 pri = *(u16 *)(s + 2) + 1;
    u8 *o = func_80015B3C(func_80099370, func_800161C4, pri);
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
