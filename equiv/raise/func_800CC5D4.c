/* compiler: 2.8.1-psx */
/* stub-ret: mixed */
/* arg2: small */
#include "common.h"

extern u8 D_80100F38[], D_80091618[], D_80091634[], D_800900C0[], D_8008ED68[];
extern s16 D_80069AB4[];
extern s32 D_800EEB70;
extern s32 func_800B1350(s32), RotTransPers(void *, s32 *, s32 *, s32 *);
extern void func_800D0730(s16 *, s32, s32, s32), PushMatrix(void), PopMatrix(void), func_8002CEC0(void *);

void func_800CC5D4(u8 *o, s32 a1, s32 a2) {
    struct { s16 v[4]; s16 sx, sy; s32 p, f; } t;
    u16 k = func_800B1350(a1);
    s32 m;
    u8 *q;
    u16 x, y;

    if (k == 0xFFFF) return;
    m = (D_800EEB70 != 1 && a1 == 1) ? 1 : 4;
    q = D_80091634 + k * 0x1A8 + a2 * 12;
    x = *(u16 *)q;
    y = *(u16 *)(q + 4);
    if (*(s16 *)q == -1 || *(s16 *)(q + 4) == -1) {
        u8 *p = D_80100F38 + k * 0x79C;
        x = *(u16 *)(p + 0x336);
        y = *(u16 *)(p + 0x338);
    }
    func_800D0730(t.v, (s16)(x - 1), (s16)(y - 1), D_80069AB4[*(u16 *)(D_80091618 + k * 0x1A8 + 0x14 + a2 * 2)] - 1);
    PushMatrix();
    func_8002CEC0(D_800900C0 + m * 0xBC);
    *(s16 *)(o + 0x4E) = RotTransPers(t.v, (s32 *)&t.sx, &t.p, &t.f) - 7;
    *(s16 *)(o + 0x46) = (u16)t.sx - *(s32 *)(D_8008ED68 + 0x108) / 2;
    *(s16 *)(o + 0x4A) = (u16)t.sy - *(s32 *)(D_8008ED68 + 0x10C) / 2;
    PopMatrix();

    if (*(s16 *)(o + 0x4E) > 0) {
        s32 r = 0x16C000 / *(s16 *)(o + 0x4E);
        *(s16 *)(o + 0x52) = r;
        *(s16 *)(o + 0x50) = r & ~0xF;
        *(s16 *)(o + 0x52) = r & ~0xF;
    }
}
