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

void func_800DCD44(s32 a0) {
    u8 *p = PL(a0);
    s16 i, j;
    P16(0x472) = 1;
    PS16(0x3EC) = 0;
    PS16(0x3EE) = 0;
    PS16(0x3F0) = 0;
    PS16(0x474) = 2;
    P32(0x478) = 0;
    for (i = 0; i < 32; i++) {
        u8 *q = p + i * 4;
        *(s16 *)(q + 0x3F2) = -1;
        *(s16 *)(q + 0x3F4) = -1;
    }
    for (i = 2; i < 8; i++) {
        *(s16 *)(p + 0x47C + i * 2) = 0;
        for (j = 0; j < 15; j++) {
            ((Grid_800DCE54 *)p)->g[i][j] = 0;
        }
    }
}

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

extern s16 func_800DD110(s32, s32, s16 *, s16 *);
s16 func_800DCFB4(s32 a0, s32 a1, s32 a2) {
    extern s16 func_800DD2B8(s32, s16, s16);
    u8 *p = PL(a0);
    s16 pos[2];
    s16 r, j;
    s16 n;
    s32 c;
    s16 x = P16(0x336);
    s16 y = P16(0x338);
    pos[0] = x;
    pos[1] = y;
    n = a1;
    while ((c = *(u8 *)a2) != 0xFF) {
        r = 1;
        for (j = 0; j < n - 1; j++) {
            r = func_800DD110(a0, c, &pos[0], &pos[1]);
            if (r == 0) break;
            r = func_800DD2B8(a0, pos[0], pos[1]);
            if (r == 0) break;
        }
        if (r != 1) return 0;
        a2++;
    }
    return 1;
}
