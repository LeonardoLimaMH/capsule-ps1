#include "common.h"
#include "yuugi.h"

typedef struct {
    s32 unk0, unk4, unk8;
    u8 padC[4];
    u8 unk10, unk11, unk12, pad13, unk14, unk15;
    u8 pad16[5];
    u8 unk1B;
} Unk80069E4C;

typedef struct { u8 b[0x18]; } Blk18;
typedef struct { u8 pad[0x18]; s32 *n; u8 pad2[0x30]; u32 p : 3; u32 b : 1; } O248;
typedef struct { s32 w[4]; } Blk10;
typedef struct { u8 b[8]; } Blk8;
typedef struct { s32 a, b, c; s32 pad; s16 d, e, f; } Z69E6C;
typedef struct { s32 a, b, c; } Z6AF70;
typedef struct { u8 pad[0x44]; s32 unk44, unk48, unk4C; u8 pad50[0x88]; Blk10 a; Blk8 b; u8 padF0[0x88]; s32 unk178; } S69AD4;
typedef struct { u8 pad[0x20]; Z69E6C z; Blk10 a; Blk8 b; } S69E4C;

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_800241E8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_8002453C);

void func_800246E4(void) {
    extern Z69E6C D_80069E6C[];
    extern Z6AF70 D_8006AF70[];
    extern s16 D_80078C24, D_80078C26, D_80078C28, D_80078C2A, D_80078C2C;
    extern s16 D_80078C30[];
    extern s16 D_800EFA4A[], D_800EFA4C[], D_800EFA4E[];
    Z69E6C *p = D_80069E6C;
    Z6AF70 *r = D_8006AF70;
    p->a = 0;
    p->b = 0;
    p->c = 0;
    p->d = 0;
    p->e = 0;
    p->f = 0;
    r->a = 0;
    r->b = 0;
    r->c = 0;
    D_80078C24 = 0;
    D_80078C26 = 0;
    D_80078C28 = 0;
    D_80078C2A = 0;
    D_80078C2C = 0;
    D_80078C30[0] = 0;
    D_800EFA4A[0] = 0;
    D_800EFA4C[0] = 0;
    D_800EFA4E[0] = 0x3C;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_8002475C);

#include "ghidra.h"
void func_800248C8(undefined4 param_1)

{
  func_8002475C(param_1,0);
  return;
}

void func_800248E8(void *arg0) {
    extern u8 D_80085428[];
    switch (*D_80085428) {
    case 0:
        if (((M2C_FIELD(arg0, u32 *, 0x50) >> 3) & 1) == 1 && M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x18), s32 *, 4) == 0) {
            func_80024A7C(arg0);
        }
        break;
    case 1:
        if (((M2C_FIELD(arg0, u32 *, 0x50) >> 3) & 1) == 1) {
            func_80024A7C(arg0);
        }
        break;
    }
    func_8002475C(arg0, 1);
}

void func_80024990(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    extern S69AD4 D_80069AD4;
    extern S69E4C D_80069E4C;
    extern s32 D_8006AF30[];
    extern s16 D_80078C28, D_80078C2A, D_80078C2C;
    register S69AD4 *s asm("v0");
    register S69E4C *d asm("a0");
    register s32 *table asm("v1");
    func_800254A0();
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) |= 8;
    {
        register s32 *p asm("v1") = (s32 *)&D_80069AD4;
        p[0x5E] = arg1 == 2 ? 4 : 5;
    }
    d = &D_80069E4C;
    table = D_8006AF30;
    D_80078C28 = arg1;
    D_80078C2A = arg2;
    D_80078C2C = arg3;
    *(s32 *)((u8 *)d + 0x50) = table[arg3];
    s = &D_80069AD4;
    d->a = s->a;
    d->b = s->b;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_80024A7C);

void func_80025000(void *arg0) {
    extern s32 D_80069C4C[];
    extern s16 D_80078C28;
    extern s16 D_80078C2A;
    extern s16 D_80078C2C;
    register s32 *p asm("v0");
    s32 flags;
    func_800254A0();
    flags = M2C_FIELD(arg0, s32 *, 0x50);
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    D_80078C28 = 0;
    D_80078C2C = 0;
    D_80078C2A = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = flags & ~8;
    p = D_80069C4C;
    *p = 0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_80025050);

void func_80025448(void) {
    extern S69AD4 D_80069AD4;
    extern S69E4C D_80069E4C;
    register S69AD4 *d asm("v1") = &D_80069AD4;
    register S69E4C *s asm("v0") = &D_80069E4C;
    d->a = s->a;
    d->b = s->b;
}

u8 *func_800254A0(void) {
    extern S69AD4 D_80069AD4;
    extern S69E4C D_80069E4C;
    register S69E4C *d asm("v1") = &D_80069E4C;
    register S69AD4 *s asm("v0") = &D_80069AD4;
    Z69E6C *z;
    s16 *h;
    d->a = s->a;
    d->b = s->b;
    z = &d->z;
    z->a = 0;
    z->b = 0;
    z->c = 0;
    h = &z->d;
    h[0] = 0;
    h[1] = 0;
    h[2] = 0;
    return (u8 *)z;
}

void func_80025514(u8 *o) {
    extern S69AD4 D_80069AD4;
    extern S69E4C D_80069E4C;
    extern u8 D_80085428[];
    extern Z6AF70 D_8006AF70[];
    register S69AD4 *p asm("a2") = &D_80069AD4;
    register S69E4C *q asm("v0");
    register Z6AF70 *r asm("v1");
    s32 x, z;
    if (*(s32 *)((u8 *)p + 0x178) == 5) {
        if (D_80085428[0] != 1) {
            q = &D_80069E4C;
        } else if (*(s32 *)(o + 0x54) != 0) {
            q = &D_80069E4C;
        } else {
            r = D_8006AF70;
            if (r->a == 0 && r->c == 0) {
                q = &D_80069E4C;
                r->a = 0;
                r->b = 0;
                r->c = 0;
            } else {
                r = D_8006AF70;
                x = r->a;
                z = r->c;
                r->a = 0;
                r->b = 0;
                r->c = 0;
                {
                    register S69AD4 *d asm("v1") = &D_80069AD4;
                    *(s32 *)((u8 *)d + 0x44) += x;
                    *(s32 *)((u8 *)d + 0x4C) += z;
                }
                return;
            }
        }
        *(s32 *)((u8 *)p + 0x44) += q->z.a;
        *(s32 *)((u8 *)p + 0x4C) += q->z.c;
    }
}

void func_800255FC(s32 arg0) {
    extern u8 D_80069E4C[];
    extern u8 D_80085428[];
    extern u8 D_80100F38[];
    u8 *q;

    if (arg0 != 0) {
        switch (*D_80085428) {
        case 0:
            {
                register u8 *p asm("a1") = D_80069E4C;
                q = D_80100F38 + (func_800B1260() & 0xFFFF) * 0x79C;
                *(s32 *)p = (*(s16 *)(q + 0x33E) - p[0x11]) * 100;
                *(s32 *)(p + 4) = (*(s16 *)(q + 0x340) - p[0x10]) * 100;
                *(s32 *)(p + 8) = (*(s16 *)(q + 0x33C) - p[0x12]) * 50;
            }
            break;
        case 1:
            {
                register u8 *p asm("a0") = D_80069E4C;
                *(s32 *)p = (p[0x14] - p[0x11]) * 100;
                *(s32 *)(p + 4) = (p[0x15] - p[0x10]) * 100;
                *(s32 *)(p + 8) = (p[0x1B] - p[0x12]) * 50;
            }
            break;
        }
    }
}
