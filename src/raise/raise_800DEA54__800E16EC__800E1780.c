#include "common.h"

typedef struct {
    s16 a;
    s16 b;
    s16 c;
    s16 d;
    u8 pad[0x108];
} S_80105320;

extern S_80105320 D_80105320[];

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800E16EC__800E1780", func_800E1780);

s32 func_800E17F8(s32 idx) {
    return D_80105320[idx & 0xFFFF].d == 0;
}

s32 func_800E1820(s32 idx) {
    return D_80105320[idx & 0xFFFF].a != 0;
}

void func_800E1848(s32 idx)
{
  s16 *new_var;
  u8 *new_var2;
  new_var2 = (u8 *) D_80105320;
  new_var = (s16 *) (new_var2 + (0x110 * (idx & 0xFFFF)));
  if (D_80105320)
  {
    *new_var = 0;
  }
  else
  {
    if (1)
    {
    }
    *new_var = 0;
  }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800E16EC__800E1780", func_800E186C);

void func_800E194C(s32 unused, s32 idx, s16 x, s16 y, s32 value) {
    u8 *rec = (u8 *)D_80105320 + (idx & 0xFFFF) * 0x110;
    u8 *slot = rec + *(s16 *)(rec + 4) * 8;
    s32 next;

    *(s16 *)(slot + 0x10) = x;
    *(s16 *)(slot + 0x12) = y;
    *(s32 *)(slot + 0x14) = value;
    next = *(s16 *)(rec + 4) + 1;
    *(u16 *)(rec + 6) += 1;
    *(s16 *)(rec + 4) = next % 31;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DEA54__800E16EC__800E1780", func_800E19D0);
