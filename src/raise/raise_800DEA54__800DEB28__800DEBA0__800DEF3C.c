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

s32 func_800DEF3C(s32 arg0, s32 arg1) {
    register u8 *base asm("v1");
    register s32 idx asm("s2");
    register s32 y asm("s3");
    register s32 n asm("s1");
    register s32 x asm("s0");
    register s32 v0 asm("v0");
    u32 *e;
    u32 w;
    s32 i;
    s32 z;

    base = D_80092008;
    idx = arg1 & 0xFFFF;
    e = (u32 *)(base + idx * 0x44);
    w = e[1];
    v0 = (w >> 9) & 0x3F;
    y = v0 + 1;
    v0 = w >> 3;
    n = v0 & 0x3F;
    x = n + 1;

    if (n == 0) {
        register s32 a3 asm("a3");
        v0 = (w & ~7) | 4;
        e[1] = v0;
        func_800DF7EC(arg0, idx);
        a3 = n;
        func_800DF734(arg0, idx, 4, a3, y);
    } else {
        e[1] = w & ~7;
        i = 0;
        z = 0;
        do {
            func_800DF7EC(arg0, idx);
            x++;
            if ((u8)x >= 10) {
                break;
            }
            func_800DF734(arg0, idx, z >> 16, x & 0xFF, y);
            i++;
        } while (i < 0x20);
    }
    return 1;
}

extern u16 D_8006AF80[];

extern u8 D_800EF364[];
extern u8 D_800EFF58[];

