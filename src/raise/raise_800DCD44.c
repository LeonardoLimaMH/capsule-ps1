#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DCD44", func_800DCD44);

#include "common.h"

/* stub-ret: mixed */
extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s32 D_800F1E34[];
extern s16 func_800DCFB4(s32, s32, s32), func_800DD5B8(s32, s32);
extern void func_800DD3B0(s32, s32, s32);

typedef struct { u8 _p[0x48E]; s16 g[8][16]; } Grid_800DCE54;

s32 func_800DCE54(s32 a0) {
    u8 *p = PL(a0);
    s16 i, j;
    for (i = 2; i < 8; i++) {
        for (j = 0; j < 15; j++) {
            s16 v = func_800DCFB4(a0, i, D_800F1E34[j]);
            ((Grid_800DCE54 *)p)->g[i][j] = v;
            if (v == 1) func_800DD3B0(a0, i, j);
        }
        *(s16 *)(p + 0x47C + i * 2) = func_800DD5B8(a0, i);
    }
    return PS16(0x3F0) != 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DCD44", func_800DCFB4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DCD44", func_800DD110);

extern u8 D_80091618[];
extern s32 func_800B12D8();
extern s32 func_800DD64C(s32, s32, s32, s32, s32);
s32 func_800DD2B8(s32 a0, s16 a1, s16 a2) {
    struct S { u8 _p0[0x10]; u16 unk_10; u8 _p1[0x7E]; u16 unk_90; u8 _p2[0x116]; };
    s32 k = func_800B1260(a0);
    s32 x = a0 ^ 1;
    u8 f = x != 0;
    struct S *s = (struct S *)D_80091618;
    if (s[(u16)k].unk_90 != 0) {
        k = func_800B12D8(a0, k, f);
        f = x == 0;
    }
    return (s16)func_800DD64C(a0, s[(u16)k].unk_10, f, a1, a2);
}

void func_800DD3B0(s32 a0, s32 a1, s32 a2) {
    u8 *p = PL(a0);
    s16 n = PS16(0x3F0);
    s16 i;
    if (n != 0x20) {
        u8 *q;
        PS16(0x3F0) = n + 1;
        i = PS16(0x3EE);
        q = p + i * 4;
        *(s16 *)(q + 0x3F2) = a1;
        *(s16 *)(q + 0x3F4) = a2;
        PS16(0x3EE) = (i + 1) % 32;
    }
}

s32 func_800DD45C(s32 a0) {
    u8 *p = PL(a0);
    s16 n;
    u16 a, b;
    u8 *q;
    if (PS16(0x3F0) == 0) return 0;
    n = PS16(0x3EC);
    q = p + n * 4;
    a = *(u16 *)(q + 0x3F2);
    b = *(u16 *)(q + 0x3F4);
    P16(0x472) = 1;
    PS16(0x474) = a;
    P32(0x478) = D_800F1E34[(s16)b];
    PS16(0x3EC) = (n + 1) % 32;
    PS16(0x3F0) = P16(0x3F0) - 1;
    return 1;
}
