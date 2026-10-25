#include "common.h"

extern u8 D_800900C0[], D_8008ED68[];
extern s32 func_800E36E4(void);
extern void PushMatrix(void), PopMatrix(void), func_8002CEC0(void *);
extern s32 RotTransPers(void *, s32 *, s32 *, s32 *);
extern void func_800DE420(s32, s32, s16 *, s16 *);
extern s32 func_800DD9F0(s32, s32, s32);

s32 func_800DD8E8(s32 a0, s16 *v, u8 **po) {
    struct { s16 sx, sy; s32 p, f; s16 x, y; } t;
    s32 m = func_800E36E4();
    PushMatrix();
    func_8002CEC0(D_800900C0 + m * 0xBC);
    RotTransPers(v, (s32 *)&t.sx, &t.p, &t.f);
    *(s16 *)(*po + 0x46) = (u16)t.sx - *(s32 *)(D_8008ED68 + 0x108) / 2;
    *(s16 *)(*po + 0x4A) = (u16)t.sy - *(s32 *)(D_8008ED68 + 0x10C) / 2 + 2;
    PopMatrix();
    func_800DE420(v[2], v[0], &t.x, &t.y);
    return (s16)func_800DD9F0(a0, t.x, t.y);
}
