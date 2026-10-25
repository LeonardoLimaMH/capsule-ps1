/* stub-ret: mixed */
/* rand-mem: 0x8008F7DC 1 256 */
/* rand-mem: 0x8008F7DD 1 0x21 */
#include "common.h"

/* desenha um objeto 2D (POLY_FT4 escalado ou rotacionado); variante do overlay etc */
extern u8 D_8008ED68[];
extern u8 D_800AD55C[];
extern s32 func_80015D14(u8 *);
extern void func_80016148(u8 *);
extern void SetPolyFT4(u8 *);
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

static u8 *alloc_prim(void) {
    u8 *w = WORK;
    u8 *p = *(u8 **)(w + 0x1090);
    u8 *next = 0;
    if (p && !(w + 0x4594 < p + 0x28)) next = p + 0x28;
    *(u8 **)(w + 0x1090) = next;
    return p;
}

static void add_prim(u8 *obj, u8 *p) {
    u32 *ot = (u32 *)(WORK + OS16(0x4E) * 4 + 0x70);
    *(u32 *)p = (*(u32 *)p & 0xFF000000) | (*ot & 0xFFFFFF);
    ot = (u32 *)(WORK + OS16(0x4E) * 4 + 0x70);
    *ot = (*ot & 0xFF000000) | ((u32)p & 0xFFFFFF);
}

static u16 clut(u8 *obj, u16 idx, s32 cx, u16 cy) {
    s32 x, y, v, q;
    s32 mode = O32(0x34) & 0x7F;
    if (mode == 0) {
        v = idx + OS16(0x64);
        q = v / 16;
        x = cx + (v - q * 16) * 16;
        y = (s16)cy + OS16(0x66) + q;
    } else if (mode == 1) {
        x = 0x100;
        y = 0x1FE;
    } else {
        x = 0x3F0;
        y = 0x17F;
    }
    return GetClut(x, y);
}

s32 func_800981F0(u8 *obj) {
    u8 *anim, *base, *fr, *p, *cl;
    s32 rot, C = 0, S = 0, x0, y0, r, g, b, cx;
    u16 cy;

    if ((O32(0x38) & 1) == 1) return 1;
    while (func_80015D14(obj + 0x14));
    if (*(u32 *)(obj + 0x18) == 0) return 0;
    if ((O32(0x38) >> 3) & 1) func_80016148(obj);

    rot = OS16(0x54) != 0;
    anim = *(u8 **)(obj + 0x18);
    base = *(u8 **)(anim + 8);
    fr = base + *(u32 *)anim * 0x24 - 0x24;
    r = fade(O8(0x58));
    g = fade(O8(0x59));
    b = fade(O8(0x5A));
    x0 = OS16(0x46) + SCRW / 2;
    y0 = OS16(0x4A) + SCRH / 2;
    cl = *(u8 **)(fr + 8);
    cy = F16(cl, 6) + O16(0x2E);
    cx = F16(cl, 4) + O16(0x2C);
    if (rot) {
        C = rcos(OS16(0x54));
        S = rsin(OS16(0x54));
    }
    x0 += OS8(0x56);
    y0 += OS8(0x57);
    if (fr < base) return 1;
    cx = (s16)cx;
    do {
        u8 *f = fr + 0x10;
        s32 xa, xb, ya, yb, t, tx, ty, u, w, flip;
        s32 sx = 0, sy = 0;
        u8 *tp;
        p = alloc_prim();
        SetPolyFT4(p);
        SetShadeTex(p, 0);
        SetSemiTrans(p, (O32(0x38) >> 6) & 1);
        p[4] = r;
        p[5] = g;
        p[6] = b;
        F16(p, 0xE) = clut(obj, F16(f, -4), cx, cy);
        xa = ((FS16(fr, 0) - OS8(0x56)) * OS16(0x50)) / 32;
        xb = (F16(f, 4) * OS16(0x50)) / 32 + xa;
        flip = F16(f, 2);
        if (flip & 2) { t = xa; xa = xb; xb = t; }
        ya = ((FS16(f, -0xE) - OS8(0x57)) * OS16(0x52)) / 32;
        yb = (F16(f, 6) * OS16(0x52)) / 32 + ya;
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
        tp = *(u8 **)(f - 0xC);
        if (FS16(tp, 4) == 0x140) {
            u8 *e = D_800AD55C + O32(0x80) * 4 + O32(0x7C) * 24;
            tx = F16(e, 0);
            ty = F16(e, 2);
        } else if (FS16(tp, 4) == 0x160) {
            u8 *e = D_800AD55C + O32(0x80) * 4 + O32(0x7C) * 24;
            tx = F16(e, 0) + 0x20;
            ty = F16(e, 2);
        } else {
            tx = F16(tp, 4) + O16(0x28);
            ty = F16(tp, 6) + O16(0x2A);
        }
        F16(p, 0x16) = GetTPage(0, (O32(0x38) >> 4) & 3, (s16)tx, (s16)ty);
        u = F16(f, -2) + ((tx & 0x20) << 2);
        w = F16(f, 4);
        if ((O16(0x54) & 0xFFF) != 0) {
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
        u = F16(f, 0) + (ty & 0x80);
        w = F16(f, 6);
        if ((O16(0x54) & 0xFFF) != 0) {
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
        add_prim(obj, p);
        fr -= 0x24;
    } while (!(fr < base));
    return 1;
}
