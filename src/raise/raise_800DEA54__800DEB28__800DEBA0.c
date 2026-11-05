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
s32 func_800DEC04(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    u8 b;
    if ((u16)(a3 - 1) < 8 && (u16)(a4 - 1) < 8) {
        b = D_800EF364[(u16)a1 * 64 + (s16)a3 * 8 + (s16)a4 - 9];
        if (b != 0xFF) {
            if (D_800EFF58[(u16)a2 * 64 + (s16)a3 * 8 + (s16)a4 + 0x8B] == 1) b = 0xFF;
        }
        return b != 0xFF;
    }
    return 0;
}

void func_800DECA8(u32 param_1, u32 param_2) {
    u32 *p;
    int i;

    i = 0;
    p = (u32 *)(D_80092008 + (param_2 & 0xffff) * 0x44);
    *p = *p & 0xff800000 | *(u16 *)(D_80091618 + (param_2 & 0xffff) * 0x1a8 + 0x90) & 1 |
         (param_1 & 1) << 1 | (param_2 & 7) << 2;
    do {
        *(u16 *)(p + 1) = 0;
        i = i + 1;
        p = (u32 *)((int)p + 2);
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
                u16 h = *(u16 *)((int)(i * 2) + (int)e + 4);
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
    u32 uVar1;
    u32 *p;
    u8 pad[8];

    p = (u32 *)(D_80092008 + (param_2 & 0xffff) * 0x44);
    *(u16 *)((int)p + (*p >> 10 & 0x7e) + 4) =
        (param_4 - 1U & 0x3f) << 3 | param_3 & 7 | (param_5 - 1U & 0x3f) << 9;
    uVar1 = *p & 0xfffe07ff | ((*p >> 0xb & 0x3f) + 1 & 0x3f) << 0xb;
    *p = (uVar1 & 0xff81ffff) | ((uVar1 >> 0x11 & 0x3f) + 1 & 0x3f) << 0x11;
}


extern u8 D_80092008[];

void func_800DF7EC(s32 unused, s32 idx) {
    u8 *rec = D_80092008 + (idx & 0xFFFF) * 0x44;
    u8 *slot = rec + (((*(u32 *)rec >> 11) & 0x3F) - 1) * 2;

    *(u16 *)(slot + 4) |= 0x8000;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800DEB28__800DEBA0", func_800DF838);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800DEB28__800DEBA0", func_800DF914);
