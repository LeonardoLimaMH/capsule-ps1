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

extern s16 func_800DD110(s32, s32, s16 *, s16 *);

s16 func_800DD110(s32 a0, s32 a1, s16 *px, s16 *py) {
    register s16 dx asm("t3") = 0;
    register s16 dy asm("t2") = 0;
    s16 x = *px, y = *py;
    s16 r = 1;
    switch (a1) {
    case 0:
        if (x != 8) {
            dx = 1;
            dy = 0;
            goto done;
        }
        goto fail;
    case 1:
        if (x == 8) {
            r = 0;
            goto done;
        } else if (y == 1) {
            r = 0;
            goto done;
        } else {
            dx = 1;
            dy = -1;
            goto done;
        }
    case 2:
        if (y != 1) {
            dx = 0;
            dy = -1;
            goto done;
        }
        goto fail;
    case 3:
        if (x != 1 && y != 1) {
            dx = -1;
            dy = -1;
            goto done;
        }
        goto fail;
    case 4:
        if (x != 1) {
            dx = -1;
            dy = 0;
            goto done;
        }
        goto fail;
    case 5:
        if (x != 1 && y != 8) {
            dx = -1;
            goto up;
        }
        goto fail;
    case 6:
        if (y != 8) {
            dx = 0;
            goto up;
        }
        goto fail;
    case 7:
    default:
        if (x != 8 && y != 8) {
            goto diagonal;
        }
fail:
        r = 0;
        goto done;
    }
diagonal:
    dx = 1;
up:
    dy = 1;
done:
    if (r == 1) {
        *px = *px + dx;
        *py = *py + dy;
    }
    return r;
}

extern u8 D_80091618[];
extern s32 func_800B12D8();
extern s32 func_800DD64C(s32, s32, s32, s32, s32);

