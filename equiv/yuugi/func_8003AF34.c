#include "common.h"

extern u8 D_800944B8[];
extern s32 D_80078C9C, D_80078C98;
extern u16 func_8003AE48();
extern u32 func_8003AC60();

#define ENT(k) (D_800944B8 + (k) * 0x2AC)

s32 func_8003AF34(s32 idx) {
    u8 *s = ENT(idx);
    u8 *e;
    u32 a, n;
    u16 v;

    D_80078C9C = idx;
    s[0x2A9] = 0;
    e = ENT(D_80078C9C);
    *(s32 *)(e + 0x298) = 0;
    *(s32 *)(e + 0x29C) = 0;
    *(s32 *)s = 8;
    *(u16 *)(s + 0x2A4) = func_8003AE48(s);
    *(s16 *)(s + 0x2A2) = 1;
    *(s16 *)(s + 0x2A0) = 0;
    *(s32 *)(s + 0x294) = 0x10000;
    a = 60000000 / (func_8003AC60(s) >> 8);
    a = (a * 100) / 115;
    if (a >= 0x100) {
        a = 0xFF;
    }
    switch (*(u16 *)(s + 0x2A4)) {
    case 0x1E:
        a >>= 2;
        break;
    case 0x18:
    case 0x3C:
        a >>= 1;
        break;
    }
    v = a & 0xFF;
    *(s16 *)(s + 0x16) = v;
    *(s16 *)(s + 0x14) = v;
    n = *(s32 *)s + 1;
    e = ENT(D_80078C9C);
    *(s32 *)s = n;
    if (*(u32 *)(e + 0x294) < n) {
        s[0x20] = 1;
    }
    e = ENT(idx);
    if (*(u16 *)(e + 0x2A4) >= 0x60) {
        D_80078C98 = *(u16 *)(e + 0x2A4);
    } else {
        D_80078C98 = 0;
    }
    D_80078C98 = *(u16 *)(ENT(idx) + 0x2A4);
    return 1;
}
