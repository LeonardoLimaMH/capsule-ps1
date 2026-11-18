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

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800DEB28__800DEBA0__800DF058__800DF51C", func_800DF67C);

void func_800DF734(s32 unused, u16 idx, u32 kind, s32 x, s32 y) {
    register u32 bits asm("a0") = 0xFFFE07FF;
    register u32 upper asm("a1") = 0xFF81FFFF;
    register u32 *e asm("t0");
    u8 *slot;
    u8 pad[8];
    e = (u32 *)(D_80092008 + idx * 0x44);
    slot = (u8 *)e + ((e[0] >> 10) & 0x7E);
    kind &= 7;
    *(u16 *)(slot + 4) =
        (((x - 1) & 0x3F) << 3) | kind | (((y - 1) & 0x3F) << 9);
    bits = (e[0] & bits) | (((((e[0] >> 11) & 0x3F) + 1) & 0x3F) << 11);
    upper = (bits & upper) | (((((bits >> 17) & 0x3F) + 1) & 0x3F) << 17);
    e[0] = upper;
}


extern u8 D_80092008[];

void func_800DF7EC(s32 unused, s32 idx) {
    u8 *rec = D_80092008 + (idx & 0xFFFF) * 0x44;
    u8 *slot = rec + (((*(u32 *)rec >> 11) & 0x3F) - 1) * 2;

    *(u16 *)(slot + 4) |= 0x8000;
}

void func_800DF838(s32 unused, u16 idx, s32 x, s32 y) {
    extern u8 D_80100F38[];
    register u32 bits asm("a0") = 0xFFFE07FF;
    register u32 upper asm("t2") = 0xFF81FFFF;
    register u8 *base asm("t1") = D_80100F38;
    register u32 *e asm("t0");
    u8 *p;
    register u8 *slot asm("v0");
    register u32 kind asm("v1");
    u8 pad[8];
    p = base + idx * 0x79C;
    e = (u32 *)(D_80092008 + idx * 0x44);
    slot = (u8 *)e + ((e[0] >> 10) & 0x7E);
    kind = *(u16 *)(p + 0x326);
    *(u16 *)(slot + 4) =
        (((x - 1) & 0x3F) << 3) | (kind & 7) | (((y - 1) & 0x3F) << 9);
    bits = (e[0] & bits) | (((((e[0] >> 11) & 0x3F) + 1) & 0x3F) << 11);
    upper = (bits & upper) | (((((bits >> 17) & 0x3F) + 1) & 0x3F) << 17);
    e[0] = upper;
}
