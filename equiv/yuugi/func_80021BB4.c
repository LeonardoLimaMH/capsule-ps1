#include "common.h"

extern u8 D_800638B4[], D_80063894[];
extern u8 *func_80015B3C();
extern void func_80015EF8(), func_800214B0(), func_800161C4(), func_8003422C(), func_800374E8();
extern s32 func_80019F30();

void func_80021BB4(u8 *p, s32 a1, s32 idx, s32 mode) {
    u16 *s2 = *(u16 **)(p + 0x14);
    s32 cnt = 0;
    s32 k, r, m;
    u8 s3;
    u8 *o;
    u32 t;

    *(s16 *)(p + 0x1E) = 0x20;
    if (mode != 2) {
        func_8003422C(0x8000);
    }
    s3 = p[idx + 0x5E4];
    k = a1 < 2 ? a1 : 1;
    o = func_80015B3C(func_800214B0, func_800161C4, 4);
    func_80015EF8(o);
    *(s16 *)(o + 0x46) = -0xA0;
    *(s16 *)(o + 0x4E) = 3;
    *(u32 *)(o + 0x30) = (*(u32 *)(o + 0x30) & ~0x1C0) | 0x40;
    if (mode == 4) {
        r = func_80019F30(0x6000A, 0xAB);
    } else {
        r = func_80019F30(k != 0 ? 0x60013 : 0x6000E, *(u16 *)(D_800638B4 + k * 16 + s3 * 2) + 3);
    }
    *(s32 *)(o + 0x18) = r;
    if (mode == 0) {
        m = s3 == 6 ? 7 : s3 == 7 ? 6 : s3;
        *(s16 *)(o + 0x28) = idx * 64 + 0xC0 - m * 32;
    }
    t = *(u32 *)(o + 0x38);
    *(s32 *)(o + 0x80) = 1;
    *(s32 *)(o + 0x7C) = s3;
    *(s32 *)(o + 0x84) = mode;
    *(u32 *)(o + 0x38) = t | 1;

    k = a1;
    s3 = p[idx + 0x5E4];
    if (k >= 2) {
        k = 1;
    }
    o = func_80015B3C(func_800214B0, func_800161C4, 4);
    func_80015EF8(o);
    *(s16 *)(o + 0x46) = -0xA0;
    *(s16 *)(o + 0x4E) = 3;
    *(u32 *)(o + 0x30) = (*(u32 *)(o + 0x30) & ~0x1C0) | 0x40;
    if (mode == 4) {
        r = func_80019F30(0x6000A, 0xA7);
    } else {
        r = func_80019F30(k != 0 ? 0x60013 : 0x6000E, *(u16 *)(D_80063894 + k * 16 + s3 * 2));
    }
    *(s32 *)(o + 0x18) = r;
    if (mode == 0) {
        m = s3 == 6 ? 7 : s3 == 7 ? 6 : s3;
        *(s16 *)(o + 0x28) = idx * 64 + 0xC0 - m * 32;
    }
    t = *(u32 *)(o + 0x38);
    *(s32 *)(o + 0x7C) = s3;
    *(s32 *)(o + 0x80) = 0;
    *(s32 *)(o + 0x84) = mode;
    *(u32 *)(o + 0x38) = t | 1;
    if (s2 != 0 && *s2 != 0xFFEE) {
        do {
            if (*s2 == 0xFFE0) {
                func_800374E8(s2[1]);
                return;
            }
            if (cnt >= 0x51) {
                break;
            }
            cnt++;
            s2++;
        } while (*s2 != 0xFFEE);
    }
}
