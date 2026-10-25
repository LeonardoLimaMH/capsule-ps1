/* stub-ret: mixed */
/* rand-mem: 0x8008F7DC 1 256 */
/* rand-mem: 0x8008F7DD 1 0x21 */
/* rand-mem: 0x8008F702 2 2 */
#include "common.h"

/* desenha um objeto 2D animado: SPRT simples, POLY_FT4 escalado ou POLY_FT4 rotacionado */
extern u8 D_8008ED68[];
extern u8 D_8008F702, D_8008F703;
extern s32 func_80015D14(u8 *);
extern void func_800187E8(s32);
extern void func_800186E4(u8 *, s32);
extern void func_80018610(s32, s32);
extern void SetSprt(u8 *), SetPolyFT4(u8 *);
extern void SetShadeTex(u8 *, s32), SetSemiTrans(u8 *, s32);
extern u16 GetTPage(s32, s32, s32, s32);
extern u16 GetClut(s32, s32);
extern s32 rcos(s32), rsin(s32);

#define WORK (*(u8 **)D_8008ED68)
#define FADE (*(s32 *)(D_8008ED68 + 0xA74))
#define SCRW (*(s32 *)(D_8008ED68 + 0x108))
#define SCRH (*(s32 *)(D_8008ED68 + 0x10C))
#define O8(o) (*(u8 *)(obj + (o)))
#define OS8(o) (*(s8 *)(obj + (o)))
#define O16(o) (*(u16 *)(obj + (o)))
#define OS16(o) (*(s16 *)(obj + (o)))
#define O32(o) (*(u32 *)(obj + (o)))
#define F16(p, o) (*(u16 *)((p) + (o)))
#define FS16(p, o) (*(s16 *)((p) + (o)))

static s32 fade(u8 c) {
    s32 f = FADE;
    if (f == 0x1000) return c;
    if (f < 0x1000) return (c * f) / 4096;
    return ((0xFF - c) * (f - 0x1000)) / 4096 + c;
}

static u8 *alloc_prim(s32 size) {
    u8 *w = WORK;
    u8 *p = *(u8 **)(w + 0x1090);
    u8 *next = 0;
    if (p && !(w + 0x4594 < p + size)) next = p + size;
    *(u8 **)(w + 0x1090) = next;
    return p;
}

static void add_prim(u8 *obj, u8 *p) {
    u32 *ot = (u32 *)(WORK + OS16(0x4E) * 4 + 0x70);
    *(u32 *)p = (*(u32 *)p & 0xFF000000) | (*ot & 0xFFFFFF);
    ot = (u32 *)(WORK + OS16(0x4E) * 4 + 0x70);
    *ot = (*ot & 0xFF000000) | ((u32)p & 0xFFFFFF);
}

/* CLUT do quadro: idx é o campo +0xC do quadro */
static u16 clut(u8 *obj, u16 idx, s32 cx, s32 cy) {
    s32 x, y, v, q;
    switch ((O32(0x30) >> 4) & 3) {
    case 0:
        v = idx + OS16(0x66);
        q = (v / 16) * 16;
        x = cx + OS16(0x64) + q;
        y = cy + (v - q);
        break;
    case 1:
        v = idx + OS16(0x64);
        q = v / 16;
        x = cx + (v - q * 16) * 16;
        y = cy + OS16(0x66) + q;
        break;
    case 2:
        x = cx + OS16(0x64);
        y = cy + idx + OS16(0x66);
        break;
    default:
        x = 0x120;
        y = 0x1EF;
        break;
    }
    return GetClut(x, y);
}

s32 func_800161C4(u8 *obj) {
    u8 *anim, *base, *fr, *p;
    u32 fl = O32(0x38);
    s32 trans, r, g, b, x0, y0, cx, cy;

    if ((fl & 1) == 1) return 0;
    if (OS16(0x4E) < 0 || OS16(0x4E) >= 0x408) return 0;
    if (D_8008F703 == 0 || !((fl >> 7) & 1)) {
        while (func_80015D14(obj + 0x14));
    }
    if (*(u32 *)(obj + 0x18) == 0) return -1;
    if (((O32(0x38) >> 3) & 1) && D_8008F702 == 0) {
        *(s32 *)(obj + 0x44) += *(s32 *)(obj + 0x68);
        *(s32 *)(obj + 0x48) += *(s32 *)(obj + 0x6C);
        *(s32 *)(obj + 0x4C) += *(s32 *)(obj + 0x70);
        O16(0x54) += O16(0x78);
        O16(0x50) += O16(0x74);
        O16(0x52) += O16(0x76);
    }

    anim = *(u8 **)(obj + 0x18);
    base = *(u8 **)(anim + 8);
    fr = base + *(u32 *)anim * 0x24 - 0x24;

    if (OS16(0x54) == 0 && O32(0x50) == 0x10001000 && !(O32(0x38) & 6) && !((O32(0x30) >> 6) & 7)) {
        /* SPRT 1:1 */
        u8 *cl;
        trans = 0;
        r = fade(O8(0x58));
        g = fade(O8(0x59));
        b = fade(O8(0x5A));
        x0 = OS16(0x46) + SCRW / 2;
        y0 = OS16(0x4A) + SCRH / 2;
        cl = *(u8 **)(fr + 8);
        cx = F16(cl, 4) + O16(0x2C);
        cy = F16(cl, 6) + O16(0x2E);
        if (!(fr < base)) trans = (**(u32 **)(fr + 4) & 0x200) >> 9;
        if (O8(0x5B)) func_800187E8(OS16(0x4E));
        if (!(fr < base)) {
            cx = (s16)cx;
            cy = (s16)cy;
            do {
                u8 *f2 = fr + 2;
                u8 *tp;
                s32 tx, ty, v;
                u16 page;
                p = alloc_prim(0x14);
                SetSprt(p);
                SetShadeTex(p, 0);
                SetSemiTrans(p, (O32(0x38) >> 6) & 1);
                p[4] = r;
                p[5] = g;
                p[6] = b;
                tp = *(u8 **)(f2 + 2);
                tx = F16(tp, 4) + O16(0x28);
                ty = F16(tp, 6) + O16(0x2A);
                page = GetTPage(trans, (O32(0x38) >> 4) & 3, (s16)tx, (s16)ty);
                if ((tx & 0x3F) < 0x20) {
                    p[0xC] = f2[0xC];
                } else {
                    v = F16(f2, 0xC) + 0x80;
                    if (v >= 0x100) v = 0xFF;
                    p[0xC] = v;
                }
                if ((ty & 0xFF) < 0x80) {
                    p[0xD] = f2[0xE];
                } else {
                    v = F16(f2, 0xE) + 0x80;
                    if (v >= 0x100) v = 0xFF;
                    p[0xD] = v;
                }
                F16(p, 0x10) = F16(f2, 0x12);
                F16(p, 0x12) = F16(f2, 0x14);
                F16(p, 0xE) = clut(obj, F16(f2, 0xA), cx, cy);
                F16(p, 8) = F16(fr, 0) + x0;
                F16(p, 0xA) = F16(f2, 0) + y0;
                add_prim(obj, p);
                func_80018610(page, OS16(0x4E));
                fr -= 0x24;
            } while (!(fr < base));
        }
        if (O8(0x5B)) func_800186E4(obj + 0x5C, OS16(0x4E));
        return 0;
    }

    {
        u8 *cl = *(u8 **)(fr + 8);
        s32 rot = OS16(0x54) != 0;
        s32 C = 0, S = 0;
        trans = 0;
        cx = F16(cl, 4) + O16(0x2C);
        cy = F16(cl, 6) + O16(0x2E);
        if (!(fr < base)) trans = (**(u32 **)(fr + 4) & 0x200) >> 9;
        x0 = OS16(0x46) + SCRW / 2;
        y0 = OS16(0x4A) + SCRH / 2;
        if (rot) {
            C = rcos(OS16(0x54));
            S = rsin(OS16(0x54));
        }
        x0 += OS8(0x56);
        y0 += OS8(0x57);
        if (O8(0x5B)) func_800187E8(OS16(0x4E));
        r = fade(O8(0x58));
        g = fade(O8(0x59));
        b = fade(O8(0x5A));
        if (!(fr < base)) {
            cx = (s16)cx;
            cy = (s16)cy;
            do {
                u8 *f = fr + 0x10;
                s32 xa, xb, ya, yb, t, tx, u, w, flip;
                s32 sx = 0, sy = 0;
                u32 f38;
                u16 pg;
                p = alloc_prim(0x28);
                SetPolyFT4(p);
                SetShadeTex(p, 0);
                SetSemiTrans(p, (O32(0x38) >> 6) & 1);
                p[4] = r;
                p[5] = g;
                p[6] = b;
                F16(p, 0xE) = clut(obj, F16(f, -4), cx, cy);
                xa = ((FS16(fr, 0) - OS8(0x56)) * OS16(0x50)) / 32;
                xb = (F16(f, 4) * OS16(0x50)) / 32 + xa;
                f38 = O32(0x38);
                if ((f38 >> 1) & 1) { xa = -xa; xb = -xb; }
                flip = F16(f, 2);
                if (flip & 2) { t = xa; xa = xb; xb = t; }
                ya = ((FS16(f, -0xE) - OS8(0x57)) * OS16(0x52)) / 32;
                yb = (F16(f, 6) * OS16(0x52)) / 32 + ya;
                if ((f38 >> 2) & 1) { ya = -ya; yb = -yb; }
                if (flip & 1) { t = ya; ya = yb; yb = t; }
                if (!rot) {
                    F16(p, 0x18) = F16(p, 8) = xa / 128 + x0;
                    F16(p, 0x20) = F16(p, 0x10) = xb / 128 + x0;
                    if (FS16(p, 0x20) < FS16(p, 8)) sx = -1;
                    F16(p, 0x12) = F16(p, 0xA) = ya / 128 + y0;
                    F16(p, 0x22) = F16(p, 0x1A) = yb / 128 + y0;
                    if (FS16(p, 0x22) < FS16(p, 0xA)) sy = -1;
                } else {
                    s32 m1 = xa * C, m2 = ya * S, m3 = xb * C, m4 = yb * S;
                    F16(p, 8) = (m1 - m2) / 524288 + x0;
                    F16(p, 0x10) = (m3 - m2) / 524288 + x0;
                    F16(p, 0x18) = (m1 - m4) / 524288 + x0;
                    F16(p, 0x20) = (m3 - m4) / 524288 + x0;
                    if (FS16(p, 0x20) < FS16(p, 8)) sx = -1;
                    m1 = ya * C; m2 = xb * S; m3 = yb * C; m4 = xa * S;
                    F16(p, 0x12) = (m2 + m1) / 524288 + y0;
                    F16(p, 0xA) = (m4 + m1) / 524288 + y0;
                    F16(p, 0x1A) = (m4 + m3) / 524288 + y0;
                    F16(p, 0x22) = (m2 + m3) / 524288 + y0;
                    if (FS16(p, 0x22) < FS16(p, 0xA)) sy = -1;
                }
                {
                    u8 *tp = *(u8 **)(f - 0xC);
                    s32 ty;
                    tx = F16(tp, 4) + O16(0x28);
                    if ((O8(0x34) >> 7) && FS16(tp, 4) < 0x300) ty = F16(tp, 6) + O16(0x2A);
                    else ty = F16(tp, 6);
                    pg = GetTPage(trans, (O32(0x38) >> 4) & 3, (s16)tx, (s16)ty);
                    F16(p, 0x16) = pg;
                    /* u */
                    u = F16(f, -2) + ((tx & 0x20) << 2);
                    w = F16(f, 4);
                    if (rot ? (O16(0x54) & 0xFFF) != 0 : 0) {
                        w--;
                    } else if (sx) {
                        if (u > 0) u--;
                        else w--;
                    }
                    w = u + w;
                    if (w >= 0x100) w = 0xFF;
                    if (OS16(0x50) >= 0x2000) {
                        if (sx) u++;
                        else w--;
                    }
                    p[0xC] = u;
                    p[0x1C] = u;
                    p[0x24] = w;
                    p[0x14] = w;
                    /* v */
                    u = F16(f, 0) + (ty & 0x80);
                    w = F16(f, 6);
                    if (rot ? (O16(0x54) & 0xFFF) != 0 : 0) {
                        w--;
                    } else if (sy) {
                        if (u > 0) u--;
                        else w--;
                    }
                    w = u + w;
                    if (w >= 0x100) w = 0xFF;
                    if (OS16(0x52) >= 0x2000) {
                        if (sy) u++;
                        else w--;
                    }
                    p[0x25] = w;
                    p[0x1D] = w;
                    p[0xD] = u;
                    p[0x15] = u;
                }
                add_prim(obj, p);
                fr -= 0x24;
            } while (!(fr < base));
        }
        if (O8(0x5B)) func_800186E4(obj + 0x5C, OS16(0x4E));
        return 0;
    }
}
