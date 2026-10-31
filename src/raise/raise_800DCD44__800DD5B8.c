#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DCD44__800DD5B8", func_800DD5B8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DCD44__800DD5B8", func_800DD64C);

#include "common.h"

extern u8 D_80100F38[];

void func_800DD870(u8 *obj, s32 ctx) {
    u8 *rec = D_80100F38 + (func_800B1260(ctx) & 0xFFFF) * 0x79C;
    s16 v = func_800DD8E8(ctx, rec + 0x1CC, &obj);

    *(s16 *)(obj + 0x4E) = v;
}

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
    *(s16 *)(*po + 0x46) = (u16)t.sx - M2C_GFIELD(D_8008ED68, s32, 0x108) / 2;
    *(s16 *)(*po + 0x4A) = (u16)t.sy - M2C_GFIELD(D_8008ED68, s32, 0x10C) / 2 + 2;
    PopMatrix();
    func_800DE420(v[2], v[0], &t.x, &t.y);
    return (s16)func_800DD9F0(a0, t.x, t.y);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DCD44__800DD5B8", func_800DD9F0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DCD44__800DD5B8", func_800DDB60);

void func_800DDBE4(void) {

}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DCD44__800DD5B8", func_800DDBEC);

void func_800DDCF4(void) {

}
