#include "common.h"

extern u8 D_8008ED68[];
extern void SetPolyF4(), SetSemiTrans();

static s32 fade(u8 c, s32 a) {
    if (a == 0x1000) {
        return c;
    }
    if (a < 0x1000) {
        return (c * a) / 4096;
    }
    return ((0xFF - c) * (a - 0x1000)) / 4096 + c;
}

#define HX (*(s32 *)(D_8008ED68 + 0x108) / 2)
#define HY (*(s32 *)(D_8008ED68 + 0x10C) / 2)

void func_80015540(s32 x, s32 y, s32 w, s32 h, u8 r, u8 g, u8 b, s32 ot) {
    u8 *base, *p, *nx, *slot;
    s32 i, x0, y0, dw, dh;

    for (i = 0; i < 4; i++) {
        base = *(u8 **)D_8008ED68;
        p = *(u8 **)(base + 0x1090);
        nx = 0;
        if (p != 0 && !(base + 0x4594 < p + 0x18)) {
            nx = p + 0x18;
        }
        *(u8 **)(base + 0x1090) = nx;
        SetPolyF4(p);
        SetSemiTrans(p, 0);
        p[4] = fade(r, *(s32 *)(D_8008ED68 + 0xA6C));
        p[5] = fade(g, *(s32 *)(D_8008ED68 + 0xA70));
        p[6] = fade(b, *(s32 *)(D_8008ED68 + 0xA74));
        if (i < 2) {
            x0 = x + (HX - 3);
            if (i == 0) {
                y0 = y + (HY - 3);
            } else {
                y0 = (y + h) + HY;
            }
            dw = w + 6;
            dh = 3;
        } else {
            if (i == 2) {
                x0 = x + (HX - 3);
            } else {
                x0 = (x + w) + HX;
            }
            dw = 3;
            dh = h;
            y0 = y + HY;
        }
        *(s16 *)(p + 0xA) = y0;
        *(s16 *)(p + 0xE) = y0;
        *(s16 *)(p + 0x8) = x0;
        *(s16 *)(p + 0x10) = x0;
        *(s16 *)(p + 0xC) = x0 + dw;
        *(s16 *)(p + 0x12) = y0 + dh;
        *(s16 *)(p + 0x14) = x0 + dw;
        *(s16 *)(p + 0x16) = y0 + dh;
        *(u32 *)p = (*(u32 *)p & 0xFF000000) | (*(u32 *)(*(u8 **)D_8008ED68 + ot * 4 + 0x70) & 0xFFFFFF);
        slot = *(u8 **)D_8008ED68 + ot * 4;
        *(u32 *)(slot + 0x70) = (*(u32 *)(slot + 0x70) & 0xFF000000) | ((u32)p & 0xFFFFFF);
    }
}
