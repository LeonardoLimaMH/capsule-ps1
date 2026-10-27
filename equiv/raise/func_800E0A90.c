/* stub-ret: mixed */
#include "common.h"

extern u8 D_80091618[], D_800900C0[], D_8008ED68[];
extern s32 func_800B1260(s32);
extern void PushMatrix(void), PopMatrix(void), func_8002CEC0(void *);
extern s32 RotTransPers(void *, s32 *, s32 *, s32 *);

s32 func_800E0A90(s32 a0, void *v, u8 **po) {
    struct { s16 sx, sy; s32 p, f; } t;
    volatile s32 pad[2]; /* frame de 0x38 como o original */
    u16 k = func_800B1260(a0);
    s32 m;
    s32 r;
    u16 x = *(u16 *)(D_80091618 + k * 0x1A8 + 0x90);
    if (a0 == 1) m = x == 1 ? 4 : 1;
    else m = x == 1 ? 1 : 4;
    PushMatrix();
    func_8002CEC0(D_800900C0 + m * 0xBC);
    r = RotTransPers(v, (s32 *)&t.sx, &t.p, &t.f);
    *(s16 *)(*po + 0x46) = (u16)t.sx - *(s32 *)(D_8008ED68 + 0x108) / 2;
    *(s16 *)(*po + 0x4A) = (u16)t.sy - *(s32 *)(D_8008ED68 + 0x10C) / 2 + 2;
    PopMatrix();
    return (s16)(r - 4);
}
