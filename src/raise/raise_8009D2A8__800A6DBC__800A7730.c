#include "common.h"

extern u8 D_800916E8[];
extern s16 D_800EC588[][17];
extern s16 D_800ECB84[][17];

s32 func_800A7730(s32 a0) {
    typedef struct {
        u16 id;
        u8 pad2[0xB2];
        s16 unkB4;
        u8 padB6[0x8];
        s16 unkBE;
        u8 padC0[0x14];
        s16 unkD4[7];
        u8 padE2[0x1A8 - 0xE2];
    } Mon1A8;
    typedef struct {
        u8 pad0[0xE];
        u8 unkE;
        u8 padF[0x3C - 0xF];
    } MonInfo3C;
    extern Mon1A8 D_80091618[];
    extern MonInfo3C D_80063940[];
    extern s16 D_800EC7A8[];
    extern s32 func_800E6A1C(s32, s32);

    s32 sum = 0;
    Mon1A8 *base = D_80091618;
    s32 off = (u16)a0 * 0x1A8;
    u8 *p_d4 = (u8 *)base + 0xD4;
    s16 *pv = (s16 *)(off + p_d4);
    register u8 s2 asm("s2") = D_80063940[((Mon1A8 *)(off + (u8 *)base))->id].unkE;
    s16 i, r;
    s16 x;
    s32 d;
    u16 k;
    Mon1A8 *e;

    for (i = 3; i < 10; i++, pv++) {
        if ((u16)(i - 3) < 2) {
            sum += D_800EC7A8[i] * (0xFF - *pv);
        } else {
            sum += ((u16 *)D_800EC7A8)[i] * *(u16 *)pv;
        }
    }
    r = (s16)sum / 100;
    k = a0;
    x = s2 + func_800E6A1C(k, (s16)((r * 80) / 255));
    {
        Mon1A8 *base2 = D_80091618;
        e = &base2[k];
    }
    d = e->unkBE;
    e->unkB4 = x;
    if (d < 0xF5) {
        e->unkB4 = (x * (d + 0x172)) / 615;
    } else if (d >= 0x100) {
        e->unkB4 = (x * (0x366 - d)) / 615;
    } else {
        e->unkB4 = (x * 11) / 10;
    }
    {
        Mon1A8 *base3 = D_80091618;
        Mon1A8 *f = &base3[(u16)a0];
        if (f->unkB4 >= 0x100) {
            f->unkB4 = 0xFF;
        }
        return f->unkB4;
    }
}

extern s32 D_8008543C[], D_8008ED80[];
extern s16 D_800ED8EA, D_800ED8EC;
void func_80013920(void *);
void func_800A847C(void);

typedef struct {
    u8 pad0[0x8A];
    u16 unk8A;
    u8 pad8C[0x30];
    s16 unkBC;
    u8 padBE[0x14];
    s16 unkD2;
    u8 padD4[0x4];
    s16 unkD8;
    s16 unkDA;
    s16 unkDC;
    s16 unkDE;
    s16 unkE0;
    u8 padE2[0xC6];
} S_80091618_A8484;
extern S_80091618_A8484 D_80091618[];
extern u16 D_8006AF80[];
s32 func_800D1548(void);
s32 func_800E16AC(s32);
void func_800D1CC4(s32, s32, s32, s32);

