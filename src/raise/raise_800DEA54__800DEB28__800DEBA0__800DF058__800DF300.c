#include "common.h"

/* Entrada de 0x44 bytes de D_80092008: campos em bits + 32 slots u16. */
typedef struct {
    u32 f0 : 1;
    u32 f1 : 1;
    u32 f2 : 3;
    u32 f3 : 6;
    u32 idx : 6;
    u32 cnt : 6;
    u32 pad : 9;
    u16 slots[32];
} RaiseEnt;

extern u8 D_80092008[];
extern u8 D_80091618[];
extern u8 D_800EF364[], D_800EFF58[];

extern u8 D_800EF364[], D_800EFF58[];
extern u8 D_80091618[];
extern u8 D_80092008[];

u16 func_800DF1D8(s32 a0, u16 a1, s16 a2);
s32 func_800DF300(s32 a0, s32 a1, s16 a2, s16 *px, s16 *py) {
    register s16 dx asm("s1") = 0;
    register s16 dy asm("s0") = 0;
    s16 x = *px;
    s16 y = *py;
    s16 r = 1;

    switch (a2) {
    case 0:
        if (x != 8) {
            dx = 1;
            dy = 0;
            goto done;
        }
        goto fail;
    case 1:
        if (x != 8) {
            if (y == 1) {
                r = func_800DF1D8(a0, a1, 1);
                goto done;
            }
            dx = 1;
            dy = -1;
            goto done;
        }
        goto fail;
    case 2:
        if (y == 1) {
            r = func_800DF1D8(a0, a1, 1);
            goto done;
        }
        dx = 0;
        dy = -1;
        goto done;
    case 3:
        if (x == 1) {
            r = 2;
            goto done;
        } else if (y == 1) {
            r = func_800DF1D8(a0, a1, 1);
            goto done;
        } else {
            dx = -1;
            dy = -1;
            goto done;
        }
    case 4:
        if (x != 1) {
            dx = -1;
            dy = 0;
            goto done;
        }
        goto fail;
    case 5:
        if (x != 1) {
            if (y == 8) {
                goto call8;
            }
            dx = -1;
            goto up;
        }
        goto fail;
    case 6:
        if (y != 8) {
            dx = 0;
            goto up;
        }
        goto call8;
    case 7:
    default:
        if (x == 8) {
fail:
            r = 2;
            goto done;
        }
        if (y != 8) {
            goto diagonal;
        }
    call8:
        r = func_800DF1D8(a0, a1, 8);
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

extern u8 D_80092008[];

