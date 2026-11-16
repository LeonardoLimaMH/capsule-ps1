#include "common.h"

typedef struct {
    u8 _p0[0x8A];
    u16 f8a;
    u8 _p8c[0x1A8 - 0x8C];
} S_80091618_BA534;
typedef struct {
    u8 _p0[0x388];
    s16 f388;
    u8 _p38a[0x79C - 0x38A];
} S_80100F38_BA534;
typedef struct {
    u8 _p0[0x10];
    u32 f10;
    u32 f14;
    u8 _p18[0x3C - 0x18];
} S_80063940_BA534;
typedef struct {
    u8 _p0[0x34];
    u32 f34;
    u8 _p38[0x4E - 0x38];
    s16 f4e;
    s16 f50;
    s16 f52;
    u8 _p54[0x8C - 0x54];
    s32 f8c;
} S_Arg1_BA534;
void func_800BA534(s32 a0, S_Arg1_BA534 *o) {
    extern S_80100F38_BA534 D_80100F38[];
    extern S_80091618_BA534 D_80091618[];
    extern S_80063940_BA534 D_80063940[];
    extern s32 D_800EEB70[], D_800ED890[];
    extern s16 D_80078C24[], D_80078C28[], D_80078C20[];
    extern u16 D_8008EE44[], D_8006AF80[];
    extern s32 func_800B1260(s32);
    extern void func_80013920(S_Arg1_BA534 *);
    extern void func_800BA9D8(s32, S_Arg1_BA534 *);

    s32 k = func_800B1260(a0);
    s32 off;
    s16 s;
    S_80063940_BA534 *tbl;
    S_80063940_BA534 *d;

    if ((u16)k == 0xFFFF) {
        if (D_800EEB70[0] == 2 || D_800EEB70[0] == 0) {
            func_80013920(o);
        }
        return;
    }
    if (D_80078C24[0] == 1 && D_80078C28[0] == 0) {
        func_80013920(o);
        return;
    }
    if (a0 == 1 && D_80091618[D_8006AF80[0]].f8a == 0xFFFF &&
        ((o->f34 >> 8) & 1) != D_80078C20[0]) {
        func_80013920(o);
        return;
    }
    if (D_8008EE44[0] == 0x41) {
        func_80013920(o);
    }
    off = (u16)k * sizeof(S_80100F38_BA534);
    s = ((S_80100F38_BA534 *)((u8 *)D_80100F38 + off))->f388;
    switch (s) {
    case 0:
    case 1:
    case 3:
        func_800BA9D8(a0, o);
        if (D_8008EE44[0] == 0x26 && D_800ED890[0] < 2) {
            return;
        }
        tbl = D_80063940;
        d = &tbl[o->f8c];
        {
            u32 t = d->f10 >> 30;
            if ((((d->f14 & 3) << 2) | t) != 0) {
                return;
            }
        }
        if (o->f4e <= 0) {
            return;
        }
        o->f52 = 0xCCC;
        o->f50 = 0xCC0;
        o->f52 &= 0xFFF0;
        break;
    case 2:
    default:
        break;
    }
}

typedef struct {
    u8 _p0[0x8A];
    u16 f8a;
    u8 _p8c[0x1A8 - 0x8C];
} S_80091618_BA744;
typedef struct {
    u8 _p0[0x388];
    s16 f388;
    s16 f38a;
    u8 _p38c[0x798 - 0x38C];
    u32 f798;
} S_80100F38_BA744;
typedef struct {
    u8 _p0[0x10];
    u32 f10;
    u32 f14;
    u8 _p18[0x3C - 0x18];
} S_80063940_BA744;
typedef struct {
    u8 _p0[0x34];
    u32 f34;
    u32 f38;
    u8 _p3c[0x4E - 0x3C];
    s16 f4e;
    s16 f50;
    s16 f52;
    u8 _p54[0x8C - 0x54];
    s32 f8c;
} S_Arg1_BA744;
