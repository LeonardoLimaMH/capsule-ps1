/* arg0: small */
#include "common.h"

extern u8 D_80091618[];
extern s16 D_800B3C38[];

static s32 sdiv(s32 a, s32 b) {
    s32 q;
    __asm__ volatile("div $0,%1,%2\n\tmflo %0" : "=r"(q) : "r"(a), "r"(b));
    return q;
}

#define E16(o) (*(u16 *)(e + (o)))
#define ES16(o) (*(s16 *)(e + (o)))

void func_800A7984(s16 idx) {
    u8 *e = D_80091618 + idx * 0x1A8;
    s16 *S = D_800B3C38;
    s32 k, v;
    for (k = 0; k < 4; k++) {
        switch (k) {
        case 0: S[0] = E16(0xDA); break;
        case 1: S[1] = E16(0xDC); break;
        case 2: S[2] = E16(0xDE); break;
        case 3: S[3] = E16(0xD2); break;
        }
        v = S[k];
        if (v < 0x41) S[k] = 0;
        else if (v < 0x6B) S[k] = 1;
        else if (v < 0x8E || (v < 0x96 && k < 2)) S[k] = 2;
        else {
            v = S[k];
            if (v < 0xBC || (v < 0xC8 && (u32)(k - 1) < 2)) S[k] = 3;
            else S[k] = 4;
        }
    }
    e = D_80091618 + idx * 0x1A8;
    S[4] = sdiv(ES16(0xE6) * 200, (E16(0x9E) * 3) >> 1);
    v = S[4];
    if (v < 0x17) S[4] = 5;
    else if (v < 0x2D) S[4] = 0;
    else if (v < 0x43) S[4] = 1;
    else if (v < 0x64) S[4] = 2;
    else if (v < 0x85) S[4] = 3;
    else if (v < 0x9C) S[4] = 4;
    else S[4] = 6;
    S[5] = E16(0xD4);
    if (S[5] < ES16(0xD6)) S[5] = E16(0xD6);
    v = S[5];
    if (v < 0x33) S[5] = 4;
    else if (v < 0x65) S[5] = 3;
    else if (v < 0x97) S[5] = 2;
    else if (v < 0xC8) S[5] = 1;
    else S[5] = 0;
    S[6] = *(s32 *)(e + 0xC4) / 28800 + 1;
    if (ES16(0x1A0) == 1) S[7] = 5;
    else if (ES16(0x19E) == 1) S[7] = 4;
    else if (ES16(0x19C) == 1) S[7] = 3;
    else if (ES16(0xC0) < 0x18) S[7] = 1;
    else S[7] = 0;
}
