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

void func_800DEBA0(s16 arg0, s16 arg1) {
    extern M2C_UNK D_800F1EB4[];
    void *temp_v0;

    temp_v0 = (D_800F1EB4 + (M2C_GFIELD(D_800F1EB4, s16, 2)));
    M2C_FIELD(temp_v0, s16 *, 6) = arg1;
    M2C_FIELD(temp_v0, s16 *, 8) = arg0;
    M2C_GFIELD(D_800F1EB4, u16, 4) = (u16) (M2C_GFIELD(D_800F1EB4, u16, 4) + 1);
    M2C_GFIELD(D_800F1EB4, s16, 2) = (s16) ((M2C_GFIELD(D_800F1EB4, s16, 2) + 1) % 5);
}

extern u8 D_800EF364[], D_800EFF58[];
extern u8 D_80091618[];
s32 func_800DEC04(s32 unused, s32 a1, s32 a2, s32 a3, s32 a4) {
    register s32 y asm("a0") = a4;
    register s32 b asm("a0");
    register s32 x asm("a3");
    register s32 yy asm("a1");
    register u32 row asm("v0");
    register u8 *p asm("v1");
    register s32 temp asm("v1");
    if ((u16)(a3 - 1) >= 8 || (u16)(y - 1) >= 8) return 0;
    row = (u16)a1;
    p = D_800EF364;
    row = (row << 6) + (u32)p;
    temp = (u32)a3 << 16;
    x = temp >> 13;
    row = x + row;
    temp = (u32)y << 16;
    yy = temp >> 16;
    b = *(u8 *)(row + yy - 9);
    if (b != 0xFF) {
        p = D_800EFF58;
        row = (u16)a2;
        row = (row << 6) + (u32)p;
        if (*(u8 *)(row + x + yy + 0x8B) == 1) b = 0xFF;
    }
    return b != 0xFF;
}

void func_800DECA8(u32 param_1, u16 param_2) {
    RaiseEnt *p;
    int i;

    i = 0;
    p = (RaiseEnt *)(D_80092008 + param_2 * 0x44);
    do {
        p->f0 = *(u16 *)(D_80091618 + param_2 * 0x1a8 + 0x90);
        p->f1 = param_1;
        p->f2 = param_2;
        p->f3 = 0;
        p->idx = 0;
        p->cnt = 0;
        p->slots[0] = 0;
        i = i + 1;
        p = (RaiseEnt *)((int)p + 2);
    } while (i < 0x20);
}

#include "ghidra.h"
undefined4 func_800DED74(undefined4 param_1,undefined2 param_2,short param_3,short param_4)

{
  func_800DECA8(param_1,param_2);
  func_800DF838(param_1,param_2,(int)param_3,(int)param_4);
  return 0;
}

#include "common.h"

extern u8 D_80092008[];

s32 func_800DEDE4(s32 idx)
{
  u32 *new_var;
  new_var = &(*((u32 *) (D_80092008 + ((idx & 0xFFFF) * 0x44))));
  return (((*new_var) >> 17) & 0x3F) == 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800DEB28__800DEBA0", func_800DEE18);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800DEB28__800DEBA0", func_800DEF3C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800DEB28__800DEBA0", func_800DF058);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800DEB28__800DEBA0", func_800DF1D8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800DEB28__800DEBA0", func_800DF300);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800DEB28__800DEBA0", func_800DF51C);

s32 func_800DF67C(s32 a0, u16 a1, s32 a2, s16 a3, s16 a4) {
    u8 *e = D_80092008 + a1 * 0x44;
    u8 n = (*(u32 *)e >> 17) & 0x3F;
    s16 i;
    register s32 result asm("t0") = 0;

    if (n) {
        if (n != 0) {
            for (i = 0; i < n; i++) {
                u16 h = *(u16 *)(((i * 2) + (u32)e) + 4);
                if (((h >> 3) & 0x3F) + 1 == a3 && ((h >> 9) & 0x3F) + 1 == a4) {
                    result = 1;
                    break;
                }
            }
        }
    }
    return result;
}

void func_800DF734(s32 param_1, u32 param_2, u16 param_3, s16 param_4, s16 param_5) {
    register u32 uVar1 asm("a0");
    register u32 mask2 asm("a1");
    u32 *p;
    u8 pad[8];

    p = (u32 *)(D_80092008 + (param_2 & 0xffff) * 0x44);
    *(u16 *)((int)p + (*p >> 10 & 0x7e) + 4) =
        param_3 & 7 | (param_4 - 1U & 0x3f) << 3 | (param_5 - 1U & 0x3f) << 9;
    uVar1 = *p & 0xfffe07ff | ((*p >> 0xb & 0x3f) + 1 & 0x3f) << 0xb;
    *p = (uVar1 & 0xff81ffff) | ((uVar1 >> 0x11 & 0x3f) + 1 & 0x3f) << 0x11;
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

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800DEB28__800DEBA0", func_800DF914);
