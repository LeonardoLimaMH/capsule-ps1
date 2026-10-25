#include "common.h"

extern u8 D_8008ED68[], D_80050910[];
extern void SetSprt(), SetShadeTex(), SetSemiTrans(), func_80018610();
extern u16 GetClut(), GetTPage();

static u8 *alloc_sprt(void) {
    u8 *base = *(u8 **)D_8008ED68;
    u8 *p = *(u8 **)(base + 0x1090);
    u8 *nx = 0;

    if (p != 0 && !(base + 0x4594 < p + 0x14)) {
        nx = p + 0x14;
    }
    *(u8 **)(base + 0x1090) = nx;
    return p;
}

static void link(u8 *p) {
    u8 *base;

    *(u32 *)p = (*(u32 *)p & 0xFF000000) | (*(u32 *)(*(u8 **)D_8008ED68 + 0x107C) & 0xFFFFFF);
    base = *(u8 **)D_8008ED68;
    *(u32 *)(base + 0x107C) = (*(u32 *)(base + 0x107C) & 0xFF000000) | ((u32)p & 0xFFFFFF);
}

void func_80014728(void) {
    u8 *D = D_8008ED68;
    u32 t;
    s32 scroll, c, A, s3, sc2, gy, gx, i, j, fp, s7, s2, oy, k3c, k40, k44, x;
    u16 clut;
    u8 *p;

    t = *(u32 *)(D + 0x20) / 5;
    scroll = t - (t / 120) * 120;
    s3 = D[0x2A] < D[0x26] ? D[0x26] - D[0x2A] : 0;
    c = s3 & 0xFF;
    A = *(s32 *)(D + 0xA6C);
    if (A == 0x1000) {
        s3 = c;
    } else if (A < 0x1000) {
        s3 = (c * A) / 4096;
    } else {
        s3 = ((0xFF - c) * (A - 0x1000)) / 4096 + c;
    }
    sc2 = scroll * 2;
    for (gy = 0; gy < 2; gy++) {
        t = *(u32 *)(D + 0x20) / 10 + gy;
        clut = GetClut(0x100, D_80050910[t % 12] + 0x1F2);
        fp = 0x178;
        s7 = 0;
        oy = gy << 7;
        k3c = 0x80;
        k40 = 0x78;
        k44 = 0xF8;
        for (gx = 0; gx < 2; gx++) {
            for (i = 0, s2 = 0x300; i < 4; i++, s2 += 0x20) {
                p = alloc_sprt();
                SetSprt(p);
                SetShadeTex(p, 0);
                SetSemiTrans(p, 0);
                p[6] = s3;
                p[5] = s3;
                p[4] = s3;
                p[0xC] = (i & 1) ? 0x80 : 0;
                p[0xD] = 0x80;
                *(s16 *)(p + 0x10) = 0x80;
                *(s16 *)(p + 0x12) = 0x80;
                *(u16 *)(p + 0xE) = clut;
                if (i & 1) {
                    *(s16 *)(p + 8) = k44 - scroll - oy;
                } else {
                    *(s16 *)(p + 8) = k40 - scroll - oy;
                }
                if (i >= 2) {
                    *(s16 *)(p + 0xA) = k3c - sc2;
                } else {
                    *(s16 *)(p + 0xA) = -sc2 + s7;
                }
                x = *(s16 *)(p + 8);
                if (x < 0x140 && x + *(s16 *)(p + 0x10) > 0) {
                    link(p);
                    func_80018610(GetTPage(0, 0, s2, 0x180) & 0xFFFF, 0x403);
                }
            }
            for (j = 0; j < 2; j++) {
                p = alloc_sprt();
                SetSprt(p);
                SetShadeTex(p, 0);
                SetSemiTrans(p, 0);
                p[0xC] = j << 6;
                p[6] = s3;
                p[5] = s3;
                p[4] = s3;
                p[0xD] = 0x80;
                *(s16 *)(p + 0x10) = 0x40;
                *(s16 *)(p + 0x12) = 0x80;
                *(u16 *)(p + 0xE) = clut;
                *(s16 *)(p + 8) = fp - scroll - oy;
                *(s16 *)(p + 0xA) = (j << 7) - sc2 + s7;
                x = *(s16 *)(p + 8);
                if (x < 0x140 && x + *(s16 *)(p + 0x10) > 0) {
                    link(p);
                    func_80018610(GetTPage(0, 0, 0x380, 0x180) & 0xFFFF, 0x403);
                }
            }
            fp += 0x78;
            s7 += 0xF0;
            k3c += 0xF0;
            k40 += 0x78;
            k44 += 0x78;
        }
    }
}
