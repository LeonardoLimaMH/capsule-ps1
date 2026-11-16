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

typedef struct {
    u8 pad[0x8A];
    u16 f8A;
    u8 pad1[4];
    u16 f90;
    u8 pad2[0x116];
} Entry1A8;

/* Entrada de 0x44 bytes de D_80092008: campos em bits + 32 slots u16. */

#include "ghidra.h"

s32 func_800DEE18(u32 a0, s32 a1, s16 *a2, s16 *a3, s16 *pk) {
    u32 *e;
    s32 y;
    s32 x;
    register s32 a asm("v1");
    register s32 b asm("v0");
    u32 w;
    register s32 mask asm("a1");
    s32 k;

    a1 &= 0xFFFF;
    e = (u32 *)(D_80092008 + a1 * 0x44);
    a0 = *e;
    if (((a0 >> 17) & 0x3F) == 0) {
        return 0;
    }
    ((Entry1A8 *)D_80091618)[a1].f90 = a0 & 1;
    a0 = *(u16 *)((u8 *)e + ((*e >> 4) & 0x7E) + 4);
    mask = 0x3F;
    a = ((u16)a0 >> 3) & 0x3F;
    x = a;
    b = ((u16)a0 >> 9) & 0x3F;
    y = b;
    k = a0 & 7;
    if (a == mask) {
        x = -1;
    }
    if (b == mask) {
        y = -1;
    }
    *pk = k;
    *a2 = x + 1;
    *a3 = y + 1;
    w = *e;
    a0 = w & -0x7E1;
    w >>= 5;
    w &= 0x3F;
    w += 1;
    w &= 0x3F;
    w <<= 5;
    a0 |= w;
    a1 = a0 & 0xFF81FFFF;
    a0 >>= 17;
    a0 &= 0x3F;
    a0 -= 1;
    a0 &= 0x3F;
    a0 <<= 17;
    a1 |= a0;
    *e = a1;
    return 1;
}

extern u16 D_8006AF80[];

extern u8 D_800EF364[];
extern u8 D_800EFF58[];

