#include "common.h"

typedef struct { u32 mask; u16 h[32]; } RevP;
typedef struct { u32 mask; s32 mode; u16 dl, dr; s32 delay, feedback; } Attr;

extern u16 *D_80071598;
extern u32 D_80071A08[];
extern u8 D_80071A38[];
extern u32 D_80071534;
extern s32 D_8007153C;
extern u16 D_80071540, D_80071542;
extern s32 D_80071544, D_80071548;
extern s32 _SpuIsInAllocateArea_(u32);
extern void _spu_setReverbAttr(RevP *);
extern void SpuClearReverbWorkArea(s32);
extern void _spu_FsetRXX(s32, u32, s32);

static void cp(RevP *d) {
    u8 *s = D_80071A38 + D_8007153C * 68, *o = (u8 *)d;
    s32 n;
    for (n = 0x43; n != -1; n--) *o++ = *s++;
}

s32 SpuSetReverbModeParam(Attr *p) {
    RevP r;
    s32 clr = 0;
    u32 m = p->mask;
    s32 all = m == 0;
    s32 setmode = 0, setdel = 0, setfb = 0, wasOn = 0;
    r.mask = 0;
    if (all || (m & 1)) {
        u32 mode = p->mode;
        if (mode & 0x100) { mode &= ~0x100; clr = 1; }
        if (mode >= 10) return -1;
        if (_SpuIsInAllocateArea_(D_80071A08[mode])) return -1;
        setmode = 1;
        D_8007153C = mode;
        D_80071534 = D_80071A08[D_8007153C];
        cp(&r);
        switch (D_8007153C) {
        case 7: D_80071548 = 0x7F; D_80071544 = 0x7F; break;
        case 8: D_80071548 = 0; D_80071544 = 0x7F; break;
        default: D_80071548 = 0; D_80071544 = 0; break;
        }
    }
    if ((all || (m & 8)) && D_8007153C < 9 && D_8007153C >= 7) {
        s32 v, q1, q2;
        setdel = 1;
        if (!setmode) { cp(&r); r.mask = 0x0C011C00; }
        v = p->delay;
        D_80071544 = v;
        q1 = (v << 13) / 127;
        q2 = (v << 12) / 127;
        r.h[(0x18 - 4) / 2] = q1 - r.h[0];
        r.h[(0x1A - 4) / 2] = q2 - r.h[1];
        r.h[(0x24 - 4) / 2] = r.h[(0x26 - 4) / 2] + q2;
        r.h[(0x1C - 4) / 2] = r.h[(0x1E - 4) / 2] + q2;
        r.h[(0x3A - 4) / 2] = r.h[(0x3E - 4) / 2] + q2;
        r.h[(0x38 - 4) / 2] = r.h[(0x3C - 4) / 2] + q2;
    }
    if ((all || (m & 0x10)) && D_8007153C < 9 && D_8007153C >= 7) {
        s32 v;
        setfb = 1;
        if (!setmode) {
            if (!setdel) { cp(&r); r.mask = 0x80; }
            else r.mask |= 0x80;
        }
        v = p->feedback;
        D_80071548 = v;
        r.h[(0x12 - 4) / 2] = (v * 0x8100) / 127;
    }
    if (setmode) {
        wasOn = (D_80071598[0xD5] >> 7) & 1;
        if (wasOn) D_80071598[0xD5] &= 0xFF7F;
        goto zero;
    } else {
        if (all || (m & 2)) { D_80071598[0xC2] = p->dl; D_80071540 = p->dl; }
        if (all || (m & 4)) { D_80071598[0xC3] = p->dr; D_80071542 = p->dr; }
        goto after;
    }
zero:
    D_80071598[0xC2] = 0;
    D_80071598[0xC3] = 0;
    D_80071540 = 0;
    D_80071542 = 0;
after:
    if (setmode || setdel || setfb) _spu_setReverbAttr(&r);
    if (clr) SpuClearReverbWorkArea(D_8007153C);
    if (setmode) {
        _spu_FsetRXX(0xD1, D_80071534, 0);
        if (wasOn) D_80071598[0xD5] |= 0x80;
    }
    return 0;
}
