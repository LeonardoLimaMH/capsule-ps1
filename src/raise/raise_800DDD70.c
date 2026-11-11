#include "common.h"

void func_800DDD70(s32 a0) {
    extern u8 D_80100F38[];
    extern s32 func_800B1260(s32);
    u8 *p = D_80100F38 + (func_800B1260(a0) & 0xFFFF) * 0x79C;
    s16 i, j;
    *(s16 *)(p + 0x5B0) = 0;
    *(s16 *)(p + 0x5B2) = 0;
    *(s16 *)(p + 0x5B4) = 0;
    *(s16 *)(p + 0x736) = 2;
    *(s32 *)(p + 0x738) = 0;
    for (i = 0; i < 32; i++) {
        u8 *q = p + i * 4;
        *(s16 *)(q + 0x5B6) = -1;
        *(s16 *)(q + 0x5B8) = -1;
        *(s16 *)(q + 0x636) = 0;
        *(s16 *)(q + 0x638) = 0;
        *(s16 *)(q + 0x6B6) = 0;
        *(s16 *)(q + 0x6B8) = 0;
    }
    for (i = 2; i < 4; i++) {
        s16 *r;
        *(s16 *)(p + 0x73C + i * 2) = 0;
        for (j = 0, r = (s16 *)(i * 16 + p + 0x746); j < 7; j++) {
            r[j] = 0;
        }
    }
}

#include "common.h"

/* stub-ret: mixed */
extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s32 D_800F1E94[];
extern s16 func_800DDFE8(s32, s32, s32), func_800DEA54(s32, s32);
extern void func_800DE770(s32, s32, s32);

typedef struct { u8 _p[0x746]; s16 g[16][8]; } Grid_800DDE88;

s32 func_800DDE88(s32 a0) {
    u8 *p = PL(a0);
    s16 i, j;
    for (i = 2; i < 4; i++) {
        for (j = 0; j < 7; j++) {
            s16 v = func_800DDFE8(a0, i, D_800F1E94[j]);
            ((Grid_800DDE88 *)p)->g[i][j] = v;
            if (v == 1) func_800DE770(a0, i, j);
        }
        *(s16 *)(p + 0x73C + i * 2) = func_800DEA54(a0, i);
    }
    return PS16(0x5B4) != 0;
}

extern s16 func_800DE10C(s32, s16, s16, s16 *, s16 *);
extern s16 func_800DE480(s32, s16, s16, s16, s16);
s16 func_800DDFE8(s32 a0, s32 a1, s32 a2) {
    s16 r = 1;
    u8 *p = PL(a0);
    s16 pos[2];
    s16 c;
    while ((c = *(u8 *)a2) != 0xFF) {
        s16 x = P16(0x336);
        s16 y = P16(0x338);
        pos[0] = x;
        pos[1] = y;
        r = func_800DE10C(a0, (s16)a1, c, &pos[0], &pos[1]);
        if (r == 0) break;
        r = func_800DE480(a0, (s16)a1, c, pos[0], pos[1]);
        if (r == 0) break;
        a2++;
    }
    return r;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DDD70", func_800DE10C);

void func_800DE304(s16 arg0, s16 arg1, s16 *arg2, s16 *arg3) {
    *arg2 = -(((arg0 - 4) * 0x64) + 0x32);
    *arg3 = ((arg1 - 4) * 0x64) + 0x32;
}

extern s16 func_800D68D4(s32);
extern s16 func_800D6848(s32);
void func_800DE35C(s16 a0, s16 a1, s16 a2, s16 a3, s16 a4, s16 *a5, s16 *a6) {
    s32 t = a3 + a4;
    *a6 = a2 + ((a0 * func_800D68D4(t)) / 4096);
    *a5 = a1 + ((a0 * func_800D6848(t)) / 4096);
}

void func_800DE420(s16 arg0, s16 arg1, s16 *arg2, s16 *arg3) {
    *arg2 = ((-arg0 - 0x32) / 100) + 5;
    *arg3 = ((arg1 - 0x32) / 100) + 5;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DDD70", func_800DE480);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DDD70", func_800DE770);

s32 func_800DE938(s32 a0) {
    u8 *p = PL(a0);
    s16 n;
    u16 a, b;
    u8 *q;
    if (PS16(0x5B4) == 0) return 0;
    n = PS16(0x5B0);
    q = p + n * 4;
    a = *(u16 *)(q + 0x5B6);
    b = *(u16 *)(q + 0x5B8);
    PS16(0x736) = a;
    P32(0x738) = D_800F1E94[(s16)b];
    PS16(0x5B0) = (n + 1) % 32;
    PS16(0x5B4) = P16(0x5B4) - 1;
    return 1;
}
