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

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DCD44", func_800DD2B8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DCD44", func_800DD3B0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DCD44", func_800DD45C);
