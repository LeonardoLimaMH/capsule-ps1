#include "common.h"

extern u8 *func_80015B3C();
extern void func_80015EF8(), func_8001AA70(), func_80018600();

u8 *func_80020CE4(u8 *src, s32 a1) {
    u8 *d = func_80015B3C(a1, func_80018600);
    u32 v;

    func_80015EF8(d);
    func_8001AA70(d + 0x14, src + 0x14, 0x20);
    *(s32 *)(d + 0x1C) = 0;
    v = *(s32 *)(src + 0xC);
    *(u8 **)(d + 0x40) = src;
    *(s32 *)(d + 0xC) = v;
    *(u16 *)(d + 0x46) = *(u16 *)(src + 0x46);
    *(u16 *)(d + 0x4A) = *(u16 *)(src + 0x4A);
    *(u16 *)(d + 0x4E) = *(u16 *)(src + 0x4E);
    *(u16 *)(d + 0x50) = *(u16 *)(src + 0x50);
    *(u16 *)(d + 0x52) = *(u16 *)(src + 0x52);
    *(s32 *)(d + 0x7C) = *(s32 *)(src + 0x7C);
    *(s32 *)(d + 0x80) = *(s32 *)(src + 0x80);
    v = (*(u32 *)(d + 0x34) & ~0x7F) | (*(u32 *)(src + 0x34) & 0x7F);
    *(u32 *)(d + 0x34) = v;
    v = (v & ~0x80) | (src[0x34] & 0x80);
    *(u32 *)(d + 0x34) = v;
    v = (v & ~0x100) | (*(u32 *)(src + 0x34) & 0x100);
    *(u32 *)(d + 0x34) = v;
    v = (v & ~0x200) | (*(u32 *)(src + 0x34) & 0x200);
    *(u32 *)(d + 0x34) = v;
    v = (v & ~0xC00) | (*(u32 *)(src + 0x34) & 0xC00);
    *(u32 *)(d + 0x34) = v;
    v = (v & ~0xF000) | (*(u32 *)(src + 0x34) & 0xF000);
    *(u32 *)(d + 0x34) = v;
    d[0x58] = src[0x58];
    d[0x59] = src[0x59];
    d[0x5A] = src[0x5A];
    return d;
}
