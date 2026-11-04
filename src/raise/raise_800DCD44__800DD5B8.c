#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DCD44__800DD5B8", func_800DD5B8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DCD44__800DD5B8", func_800DD64C);

extern u8 D_80100F38[];

void func_800DD870(u8 *obj, s32 ctx) {
    u8 *rec = D_80100F38 + (func_800B1260(ctx) & 0xFFFF) * 0x79C;
    s16 v = func_800DD8E8(ctx, rec + 0x1CC, &obj);

    *(s16 *)(obj + 0x4E) = v;
}

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

extern s32 func_800E36E4(void);
extern void PushMatrix(void), PopMatrix(void), func_8002CEC0(void *);
extern s32 RotTransPers(void *, s32 *, s32 *, s32 *);
extern void func_800DE420(s32, s32, s16 *, s16 *);
extern s32 func_800DD9F0(s32, s32, s32);

/* registro de 0x1A8 bytes em D_80091618 */
typedef struct {
    u8 pad0[0x10];
    u16 unk10;
    u8 pad12[0x8A - 0x12];
    u16 unk8A;
    u8 pad8C[0x1A8 - 0x8C];
} S_80091618;

/* registro de 0x1C bytes em D_80069EC4 (26 por linha) */
typedef struct {
    u8 pad0[0x10];
    u8 *unk10;
    u8 pad14[0x1C - 0x14];
} S_80069EC4;

extern S_80091618 D_80091618[];
extern u8 D_800EF364[][8][8];
extern S_80069EC4 D_80069EC4[][26];
extern u16 D_8006AF80[], D_80078C20[];

s32 func_800DD9F0(s32 a0, s32 a1, s32 a2) {
    s32 n = 4;
    s32 x = a1;
    s32 y = a2;
    u16 idx, m;
    u8 b;

    if (a0 == 1) {
        n = 1;
    }
    if (func_800E36E4() == 1) {
        idx = D_8006AF80[0];
        m = D_80078C20[0];
    } else {
        m = 1 - D_80078C20[0];
        idx = D_80091618[D_8006AF80[0]].unk8A;
    }
    b = D_800EF364[D_80091618[idx].unk10][(s16)x][(s16)y - 9];
    return (s16)(*(u16 *)(D_80069EC4[(s16)m][n].unk10 + b * 8 + 4) - 4);
}

extern s32 func_800E36E4(void);
extern void PushMatrix(void), PopMatrix(void), func_8002CEC0(void *);
extern s32 RotTransPers(void *, s32 *, s32 *, s32 *);
extern void func_800DE420(s32, s32, s16 *, s16 *);
extern s32 func_800DD9F0(s32, s32, s32);

/* registro de 0x1A8 bytes em D_80091618 */

/* registro de 0x1C bytes em D_80069EC4 (26 por linha) */

void func_800DDB60(s32 ctx, s32 x, s32 y) {
    u8 *rec = D_80100F38 + (func_800B1260(ctx) & 0xFFFF) * 0x79C;

    func_800D0730(rec + 0x1CC, (s16)(x - 1), (s16)(y - 1), 0);
}

void func_800DDBE4(void) {

}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DCD44__800DD5B8", func_800DDBEC);

void func_800DDCF4(void) {

}
