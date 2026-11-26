#include "common.h"

extern u8 D_800EEB9C[];
extern s32 D_800EE5D0[], D_800F2DBC[];
extern u8 *D_800F2DC0[];
extern s32 func_80019F30(s32, s32);
extern void func_80015CD0(void *, s32, s32);

extern s32 func_80019F30(s32, s32);
extern void func_80015CD0(void *, s32, s32);

extern s32 func_80019F30(s32, s32);
extern void func_80015CD0(void *, s32, s32);

#define UP_24B8(d) ((d) == 0 ? 2 : ((d) == 1 ? 1 : ((d) == -1 ? 3 : -1)))
#define DOWN_24B8(d) ((d) == 0 ? 6 : ((d) == 1 ? 7 : ((d) == -1 ? 5 : -1)))
#define MID_24B8(d) ((d) == 0 ? 8 : ((d) == 1 ? 0 : ((d) == -1 ? 4 : -1)))
s32 func_800B24B8(s32 a0, s32 a1) {
    typedef struct {
        u8 pad0[0x8A];
        u16 f8a;
        u8 pad8c[4];
        u16 f90;
        u8 pad92[0x1A8 - 0x92];
    } Rec24B8;
    typedef struct {
        u8 pad0[0x332];
        u16 f332;
        u16 f334;
        u16 f336;
        u16 f338;
        u8 pad33a[0x79C - 0x33A];
    } Work24B8;
    typedef struct {
        s16 hdr[6];
        struct {
            s16 f0;
            s16 f2;
            s16 f4;
        } rows[1];
    } Tab24B8;
    extern Rec24B8 D_80091618[];
    extern Work24B8 D_80100F38[];
    extern Tab24B8 D_80103D38[];
    extern s32 D_800EEB70[];
    extern s32 D_800EE9B8[];
    extern u16 D_8006AF80[];
    extern u16 D_800EF2D8[];

    u16 k;
    Work24B8 *p;
    Rec24B8 *tbl;
    Rec24B8 *r;
    u16 g;
    u16 x0, y0, x1, y1;
    s16 dx, dy;

    if (D_800EEB70[0] == 0) {
        if (a0 == 1) {
            k = D_8006AF80[0];
        } else {
            k = D_80091618[D_8006AF80[0]].f8a;
        }
    } else if (a0 == 1) {
        k = D_8006AF80[0];
    } else {
        k = D_800EF2D8[0];
    }

    p = &D_80100F38[k];
    tbl = D_80091618;
    r = &tbl[k];
    x0 = p->f332;
    y0 = p->f334;
    x1 = p->f336;
    g = r->f90;
    y1 = p->f338;

    if (g == 0 && D_80103D38->rows[a1].f0 == 0) {
        dx = x1 - x0;
        if (a0 == 1) {
            D_800EE9B8[0] = -1;
            switch ((s32)dx) {
            case -1: return 3;
            case 0: return 2;
            case 1: return 1;
            default: return -1;
            }
        }
        D_800EE9B8[1 - a0] = 1;
        switch ((s32)dx) {
        case -1: return 5;
        case 0: return 6;
        case 1: return 7;
        default: return -1;
        }
    }
    if (g != 0 && D_80103D38->rows[a1].f0 != 0) {
        dx = x1 - x0;
        if (a0 == 1) {
            D_800EE9B8[0] = a0;
            switch ((s32)dx) {
            case -1: return 5;
            case 0: return 6;
            case 1: return 7;
            default: return -1;
            }
        }
        D_800EE9B8[1 - a0] = -1;
        switch ((s32)dx) {
        case -1: return 3;
        case 0: return 2;
        case 1: return 1;
        default: return -1;
        }
    }

    D_800EE9B8[1 - a0] = 0;
    dx = x1 - x0;
    dy = y1 - y0;
    switch ((s32)dy) {
    case -1:
        switch ((s32)dx) {
        case -1: return 3;
        case 0: return 2;
        case 1: return 1;
        default: return -1;
        }
    case 0:
        switch ((s32)dx) {
        case -1: return 4;
        case 0: return 8;
        case 1: return 0;
        default: return -1;
        }
    case 1:
        switch ((s32)dx) {
        case -1: return 5;
        case 0: return 6;
        case 1: return 7;
        default: return -1;
        }
    default:
        return -1;
    }
}

extern s32 func_80019F30(s32, s32);
extern void func_80015CD0(void *, s32, s32);

