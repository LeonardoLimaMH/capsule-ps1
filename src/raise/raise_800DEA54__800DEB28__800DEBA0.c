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

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800DEB28__800DEBA0", func_800DECA8);

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
