#include "common.h"

extern u8 D_800916E8[];
extern s16 D_800EC588[][17];

extern s16 D_800ECB84[][17];

s16 func_800A752C(u16 arg0)
{
    typedef struct {
        u8 pad0[0xBE];
        s16 unkBE;
        u8 padC0[0x1A2 - 0xC0];
        u16 unk1A2;
        u8 pad1A4[0x1A8 - 0x1A4];
    } S_80091618;
    extern u8 D_80091618[];
    register u16 a asm("a2") = arg0;
    register u8 *base asm("a0");
    register u32 k asm("v1");
    S_80091618 *e;

    base = D_80091618;
    e = (S_80091618 *)(base + a * 0x1A8);

    if (e->unk1A2 < 50) {
        e->unkBE += e->unk1A2 - 50;
    }
    if (e->unk1A2 > 100) {
        e->unkBE += e->unk1A2 - 100;
    }
    if (e->unkBE < 0) {
        e->unkBE = 0;
    } else if (e->unkBE > 500) {
        e->unkBE = 500;
    }

    base = D_80091618;
    k = a;
    return *(s16 *)(base + k * 0x1A8 + 0xBE);
}

