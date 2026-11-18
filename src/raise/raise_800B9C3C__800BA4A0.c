#include "common.h"

void func_800BA4A0(void *arg0) {
    typedef struct { u8 _p0[0x4E]; s16 f4e; s16 f50; s16 f52; u8 _p54[0x8C - 0x54]; s32 f8c; } RObj;
    typedef struct { u8 _p0[0x10]; u32 f10; u32 f14; u8 _p18[0x3C - 0x18]; } RTab;
    extern u16 D_8008EE44[];
    extern s32 D_800ED890[];
    extern RTab D_80063940[];
    RObj *o = arg0;
    RTab *tbl;
    RTab *d;
    u32 t;

    if (D_8008EE44[0] == 0x26 && D_800ED890[0] < 2) {
        return;
    }
    tbl = D_80063940;
    d = &tbl[o->f8c];
    t = d->f10 >> 30;
    if ((((d->f14 & 3) << 2) | t) != 0) {
        return;
    }
    if (o->f4e <= 0) {
        return;
    }
    o->f52 = 0xCCC;
    o->f50 = 0xCC0;
    o->f52 &= 0xFFF0;
}
