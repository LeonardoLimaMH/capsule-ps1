#include "common.h"

#include "common.h"

extern u8 D_800900C0[], D_8008ED68[];
extern s32 func_800E3810(s32);
extern void PushMatrix(void), PopMatrix(void);
extern void func_8002CEC0(void *);
extern s32 RotTransPers(void *, s32 *, s32 *, s32 *);

s32 func_8009BA60(void *v, u8 *o) {
    struct { s16 sx, sy; s32 p, f; } t;
    s32 r;
    s32 m = func_800E3810(1);
    PushMatrix();
    func_8002CEC0(D_800900C0 + m * 0xBC);
    r = RotTransPers(v, (s32 *)&t.sx, &t.p, &t.f);
    *(s16 *)(o + 0x46) = (u16)t.sx - M2C_GFIELD(D_8008ED68, s32, 0x108) / 2;
    *(s16 *)(o + 0x4A) = (u16)t.sy - M2C_GFIELD(D_8008ED68, s32, 0x10C) / 2;
    PopMatrix();
    return r;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009B150__8009BA60", func_8009BB30);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009B150__8009BA60", func_8009BE98);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009B150__8009BA60", func_8009C4D4);
