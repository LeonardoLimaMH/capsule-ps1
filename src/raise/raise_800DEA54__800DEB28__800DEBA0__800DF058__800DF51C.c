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

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800DEB28__800DEBA0__800DF058__800DF51C", func_800DF51C);
