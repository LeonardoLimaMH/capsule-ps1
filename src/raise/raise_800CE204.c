#include "common.h"

void func_800CE204(s32 arg0, void *arg1) {
    typedef struct {
        u16 unk00;
        u8 _p02[0x88];
        u16 unk8A;
        u8 _p8C[0x11C];
    } S_91618;
    typedef struct {
        u8 _p00[0xC];
        s32 unk0C;
        u8 _p10[0x10];
    } S_ED8F0;
    typedef struct {
        u8 _p00[0x326];
        s16 unk326;
    } S_100F38;
    typedef struct {
        u8 _p00[0x18];
        s32 unk18;
        s32 unk1C;
        u8 _p20[0x10];
        s32 unk30;
    } S_Obj;
    extern s16 D_80069BBE[];
    extern u16 D_8006AF80[];
    extern S_91618 D_80091618[];
    extern S_ED8F0 D_800ED8F0[];
    extern u8 D_80100F38[];
    s32 k;
    s32 c;
    s32 n;
    s32 t;
    s32 arg2;
    s32 r;
    S_Obj *o = arg1;

    k = func_800B1260(arg0) & 0xFFFF;
    if (arg0 == 1) {
        c = D_80091618[*D_8006AF80].unk00;
    } else {
        c = D_80091618[D_80091618[*D_8006AF80].unk8A].unk00;
    }
    n = ((((S_100F38 *)((k * 0x79C) + D_80100F38))->unk326 + (*D_80069BBE) / 512) % 8) * 3;
    t = func_800A8CB4(c);
    arg2 = D_800ED8F0[c].unk0C + n;
    r = func_80019F30(t | 0x60000, arg2);
    if (r != 0) {
        o->unk18 = r;
        o->unk1C = 0;
        o->unk30 = (o->unk30 & ~0x1C0) | 0x40;
        o->unk30 = (o->unk30 & ~0x30) | 0x10;
        o->unk30 &= ~8;
    }
}

void func_800CE380(s32 arg0, void *arg1) {
    typedef struct {
        u16 unk00;
        u8 _p02[0x1A6];
    } S_91618;
    typedef struct {
        u8 _p00[0x18];
        s32 unk18;
        u8 _p1C[0x4];
    } S_ED8F0;
    typedef struct {
        u8 _p00[0x326];
        s16 unk326;
        u8 _p328[0x474];
    } S_100F38;
    typedef struct {
        u8 _p00[0x14];
        u8 unk14[0x1C];
        s32 unk30;
        u8 _p34[0x48];
        s32 unk7C;
    } S_Obj;
    extern s16 D_80069BBE[];
    extern S_91618 D_80091618[];
    extern S_ED8F0 D_800ED8F0[];
    extern S_100F38 D_80100F38[];
    s32 k;
    s32 c;
    s32 n;
    s32 t;
    s32 arg2;
    s32 r;
    S_Obj *o = arg1;

    k = func_800B1260(arg0) & 0xFFFF;
    c = D_80091618[k].unk00;
    n = ((D_80100F38[k].unk326 + (*D_80069BBE) / 512) % 8) + 9;
    t = func_800A8CB4(c);
    arg2 = D_800ED8F0[c].unk18 + n;
    r = func_80019F30(t | 0x70000, arg2);
    if (r != 0) {
        func_80015CD0(o->unk14, r, 0);
        o->unk7C = n;
        o->unk30 = (o->unk30 & ~0x1C0) | 0x40;
        o->unk30 = (o->unk30 & ~0x30) | 0x10;
        o->unk30 &= ~8;
    }
}

void func_800CE4B8(s32 arg0, void *arg1, s32 arg2, s32 arg3) {
    typedef struct {
        u16 unk00;
        u8 _p02[0x1A6];
    } S_91618;
    typedef struct {
        u8 _p00[0x18];
        s32 unk18;
        u8 _p1C[0x4];
    } S_ED8F0;
    typedef struct {
        u8 _p00[0x14];
        u8 unk14[0x1C];
        s32 unk30;
        u8 _p34[0x48];
        s32 unk7C;
    } S_Obj;
    extern S_91618 D_80091618[];
    extern S_ED8F0 D_800ED8F0[];
    s32 k;
    s32 c;
    s32 t;
    s32 v;
    s32 r;
    S_Obj *o = arg1;

    k = func_800B1260(arg0) & 0xFFFF;
    c = D_80091618[k].unk00;
    t = func_800A8CB4(c);
    v = D_800ED8F0[c].unk18 + arg2;
    r = func_80019F30(t | 0x70000, v);
    if (r != 0) {
        func_80015CD0(o->unk14, r, arg3);
        o->unk7C = arg2;
        o->unk30 = (o->unk30 & ~0x1C0) | 0x40;
        o->unk30 = (o->unk30 & ~0x30) | 0x10;
        o->unk30 &= ~8;
    }
}

#include "common.h"

extern u8 D_80100F38[];

void func_800CE59C(u8 *obj, s32 ctx) {
    u8 *rec = D_80100F38 + (func_800B1260(ctx) & 0xFFFF) * 0x79C;
    u16 old = *(u16 *)(obj + 0x4E);
    s16 v = func_800E3B14(ctx, rec + 0x1CC, &obj);

    *(s16 *)(obj + 0x4E) = v;
    if (v < 0x15) {
        *(u16 *)(obj + 0x4E) = old;
    }
}

#include "common.h"

extern u8 D_80100F38[];

void func_800CE638(u8 *obj, s32 ctx) {
    u8 *rec = D_80100F38 + (func_800B1260(ctx) & 0xFFFF) * 0x79C;
    s16 v = func_800E3A04(ctx, rec + 0x1CC, &obj);

    *(s16 *)(obj + 0x4E) = v;
}

void func_800CE6B0(s32 unused, s32 ctx) {
    u8 *rec = D_80100F38 + (func_800B1260(ctx) & 0xFFFF) * 0x79C;
    s16 v = func_800E3D18(ctx, rec + 0x1EC, rec + (*(s16 *)(rec + 0x2BA) * 4 + 0x258));

    rec += *(s16 *)(rec + 0x2BA) * 4;
    *(s16 *)(*(u8 **)(rec + 0x258) + 0x4E) = v;
}

void func_800CE748(s32 unused, s32 ctx) {
    u8 *rec = D_80100F38 + (func_800B1260(ctx) & 0xFFFF) * 0x79C;
    s16 v = func_800E3F38(ctx, rec + 0x1EC, rec + (*(s16 *)(rec + 0x2BA) * 4 + 0x258));

    rec += *(s16 *)(rec + 0x2BA) * 4;
    *(s16 *)(*(u8 **)(rec + 0x258) + 0x4E) = v;
}

#include "common.h"

extern u8 D_80100F38[];

void func_800CE7E0(u8 *obj, s32 ctx) {
    u8 *rec = D_80100F38 + (func_800B1260(ctx) & 0xFFFF) * 0x79C;
    u16 old = *(u16 *)(obj + 0x4E);
    s16 v = func_800E3B14(ctx, rec + 0x1CC, &obj);

    *(s16 *)(obj + 0x4E) = v;
    if (v < 0x15) {
        *(u16 *)(obj + 0x4E) = old;
    }
}

#include "common.h"

extern u8 D_80100F38[];

void func_800CE87C(u8 *obj, s32 ctx) {
    u8 *rec = D_80100F38 + (func_800B1260(ctx) & 0xFFFF) * 0x79C;
    s16 v = func_800E3A04(ctx, rec + 0x1CC, &obj);

    *(s16 *)(obj + 0x4E) = v;
}

void func_800CE8F4(s32 unused, s32 ctx) {
    u8 *rec = D_80100F38 + (func_800B1260(ctx) & 0xFFFF) * 0x79C;
    s16 v = func_800E3D18(ctx, rec + 0x1EC, rec + (*(s16 *)(rec + 0x2BA) * 4 + 0x258));

    rec += *(s16 *)(rec + 0x2BA) * 4;
    *(s16 *)(*(u8 **)(rec + 0x258) + 0x4E) = v;
}

void func_800CE98C(s32 unused, s32 ctx) {
    u8 *rec = D_80100F38 + (func_800B1260(ctx) & 0xFFFF) * 0x79C;
    s16 v = func_800E3F38(ctx, rec + 0x1EC, rec + (*(s16 *)(rec + 0x2BA) * 4 + 0x258));

    rec += *(s16 *)(rec + 0x2BA) * 4;
    *(s16 *)(*(u8 **)(rec + 0x258) + 0x4E) = v;
}

#include "common.h"

extern u8 D_80100F38[];

void func_800CEA24(u8 *obj, s32 ctx) {
    u8 *rec = D_80100F38 + (func_800B1260(ctx) & 0xFFFF) * 0x79C;
    u16 old = *(u16 *)(obj + 0x4E);
    s16 v = func_800E3B14(ctx, rec + 0x1CC, &obj);

    *(s16 *)(obj + 0x4E) = v;
    if (v < 0x15) {
        *(u16 *)(obj + 0x4E) = old;
    }
}

#include "common.h"

extern u8 D_80100F38[];

void func_800CEAC0(u8 *obj, s32 ctx) {
    u8 *rec = D_80100F38 + (func_800B1260(ctx) & 0xFFFF) * 0x79C;
    s16 v = func_800E3A04(ctx, rec + 0x1CC, &obj);

    *(s16 *)(obj + 0x4E) = v;
}

void func_800CEB38(s32 unused, s32 ctx) {
    u8 *rec = D_80100F38 + (func_800B1260(ctx) & 0xFFFF) * 0x79C;
    s16 v = func_800E3D18(ctx, rec + 0x1EC, rec + (*(s16 *)(rec + 0x2BA) * 4 + 0x258));

    rec += *(s16 *)(rec + 0x2BA) * 4;
    *(s16 *)(*(u8 **)(rec + 0x258) + 0x4E) = v;
}

void func_800CEBD0(s32 unused, s32 ctx) {
    u8 *rec = D_80100F38 + (func_800B1260(ctx) & 0xFFFF) * 0x79C;
    s16 v = func_800E3F38(ctx, rec + 0x1EC, rec + (*(s16 *)(rec + 0x2BA) * 4 + 0x258));

    rec += *(s16 *)(rec + 0x2BA) * 4;
    *(s16 *)(*(u8 **)(rec + 0x258) + 0x4E) = v;
}

void func_800CEC68(s32 ctx, s32 x, s32 y) {
    u8 *rec = D_80100F38 + (func_800B1260(ctx) & 0xFFFF) * 0x79C;

    func_800D0730(rec + 0x1CC, (s16)(x - 1), (s16)(y - 1), 0);
}

void func_800CECEC(s32 ctx, s32 x, s32 y) {
    u8 *rec = D_80100F38 + (func_800B1260(ctx) & 0xFFFF) * 0x79C;

    func_800D0730(rec + 0x1EC, (s16)(x - 1), (s16)(y - 1), 0);
}

void func_800CED70(void) {

}

void func_800CED78(void) {

}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CE204", func_800CED80);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CE204", func_800CEF08);
