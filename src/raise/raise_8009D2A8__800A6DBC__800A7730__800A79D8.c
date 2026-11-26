#include "common.h"

extern u8 D_800916E8[];
extern s16 D_800EC588[][17];
extern s16 D_800ECB84[][17];

s32 func_800A79D8(s32 a0) {
    typedef struct {
        u16 id;
        u8 pad2[0xB4];
        s16 unkB6;
        u8 padB8[0x6];
        s16 unkBE;
        u8 padC0[0x12];
        s16 unkD2[8];
        u8 padE2[0x1A8 - 0xE2];
    } Mon1A8;
    typedef struct {
        u8 pad0[0xF];
        u8 unkF;
        u8 pad10[0x3C - 0x10];
    } MonInfo3C;
    typedef union {
        s16 s[15];
        u16 u[15];
    } RowEC7A8;
    typedef struct {
        RowEC7A8 r0;
        RowEC7A8 r1;
    } TabEC7A8;
    extern Mon1A8 D_80091618[];
    extern MonInfo3C D_80063940[];
    extern TabEC7A8 D_800EC7A8;
    extern s32 func_800E6A1C(s32, s32);

    s32 sum = 0;
    Mon1A8 *base = D_80091618;
    s32 off = (u16)a0 * 0x1A8;
    u8 *p_d2 = (u8 *)base + 0xD2;
    s16 *pv = (s16 *)(off + p_d2);
    register u8 s2 asm("s2") = D_80063940[((Mon1A8 *)(off + (u8 *)base))->id].unkF;
    s16 i, r;
    s16 x;
    s32 d;
    u16 k;
    Mon1A8 *e;

    for (i = 2; i < 8; i++, pv++) {
        if ((u16)(i - 3) < 2) {
            sum += D_800EC7A8.r1.s[i] * (0xFF - *pv);
        } else {
            sum += D_800EC7A8.r1.u[i] * *(u16 *)pv;
        }
    }
    r = (s16)sum / 100;
    k = a0;
    x = s2 + func_800E6A1C(k, (s16)((r * 40) / 255));
    {
        Mon1A8 *base2 = D_80091618;
        e = &base2[k];
    }
    d = e->unkBE;
    e->unkB6 = x;
    if (d < 0xF5) {
        e->unkB6 = (x * (d + 0x172)) / 615;
    } else if (d >= 0x100) {
        e->unkB6 = (x * (0x366 - d)) / 615;
    } else {
        e->unkB6 = (x * 6) / 5;
    }
    {
        Mon1A8 *base3 = D_80091618;
        Mon1A8 *f = &base3[(u16)a0];
        if (f->unkB6 >= 0x100) {
            f->unkB6 = 0xFF;
        }
        return f->unkB6;
    }
}

