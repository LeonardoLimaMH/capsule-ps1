#include "common.h"

void func_800DEBA0(s16 arg0, s16 arg1) {
    extern M2C_UNK D_800F1EB4[];
    void *temp_v0;

    temp_v0 = (D_800F1EB4 + (M2C_GFIELD(D_800F1EB4, s16, 2)));
    M2C_FIELD(temp_v0, s16 *, 6) = arg1;
    M2C_FIELD(temp_v0, s16 *, 8) = arg0;
    M2C_GFIELD(D_800F1EB4, u16, 4) = (u16) (M2C_GFIELD(D_800F1EB4, u16, 4) + 1);
    M2C_GFIELD(D_800F1EB4, s16, 2) = (s16) ((M2C_GFIELD(D_800F1EB4, s16, 2) + 1) % 5);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800DEB28__800DEBA0", func_800DEC04);

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

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800DEB28__800DEBA0", func_800DEE18);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800DEB28__800DEBA0", func_800DEF3C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800DEB28__800DEBA0", func_800DF058);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800DEB28__800DEBA0", func_800DF1D8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800DEB28__800DEBA0", func_800DF300);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800DEB28__800DEBA0", func_800DF51C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800DEB28__800DEBA0", func_800DF67C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800DEB28__800DEBA0", func_800DF734);


extern u8 D_80092008[];

void func_800DF7EC(s32 unused, s32 idx) {
    u8 *rec = D_80092008 + (idx & 0xFFFF) * 0x44;
    u8 *slot = rec + (((*(u32 *)rec >> 11) & 0x3F) - 1) * 2;

    *(u16 *)(slot + 4) |= 0x8000;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800DEB28__800DEBA0", func_800DF838);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800DEB28__800DEBA0", func_800DF914);
