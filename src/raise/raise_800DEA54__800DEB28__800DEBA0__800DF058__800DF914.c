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

extern u16 D_8006AF80[];

extern u8 D_800EF364[];
extern u8 D_800EFF58[];

void func_800DF914(s32 unused, u16 idx) {
    s16 n = 0;
    RaiseEnt *e = (RaiseEnt *)(D_80092008 + idx * 0x44);
    s16 i;
    s16 dest = e->f3;
    u16 h;
    s32 x, y;
    u16 *slot;
    register s32 temp asm("v1");
    for (i = 0; i < e->cnt; i++) {
        h = e->slots[i];
        if ((h >> 15) == 1) {
            *(u16 *)((s16)dest * 2 + (u32)e + 4) = h;
            dest++;
            n++;
        }
    }
    e->cnt = n;
    e->idx = n;
    slot = (u16 *)((s16)n * 2 + (u32)e);
    slot[2] = slot[1];
    h = e->slots[n - 1];
    y = ((h >> 9) & 0x3F) + 1;
    x = ((h >> 3) & 0x3F) + 1;
    if (x == 1) {
        slot[2] |= 0x1F8;
    } else if (x == 8) {
        slot[2] = (slot[2] & 0xFE07) | 0x40;
    }
    temp = y;
    if (temp == 1) {
        e->slots[n] |= 0x7E00;
    } else if (temp == 8) {
        e->slots[n] = (e->slots[n] & 0x81FF) | 0x1000;
    }
    e->slots[n] |= 0x8000;
    e->cnt++;
    e->idx++;
}
