#include "common.h"

#include "common.h"

extern u8 D_80100F38[], D_80091618[];
extern s16 D_80103D38[];
extern s32 func_800B1260(s32);

void func_800D0C3C(s32 a0)
{
  int new_var;
  u16 k = func_800B1260(a0);
  u8 *p;
  D_80103D38[0] = a0;
  D_80103D38[2] = 1;
  D_80103D38[3] = 1;
  D_80103D38[0xC5] = 1;
  p = D_80100F38 + (k * 0x79C);
  D_80103D38[1] = 0;
  D_80103D38[0xC4] = 0;
  new_var = 0x90;
  D_80103D38[4] = *((u16 *) (p + 0x332));
  D_80103D38[5] = *((u16 *) (p + 0x334));
  return (u16) (D_80103D38[6] = *((u16 *) (new_var + (D_80091618 + (k * 0x1A8)))));
}

s32 func_800D0CFC(s32 arg0) {
    extern s16 D_80103D38[];
    return arg0 == (*D_80103D38);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CF2E4__800D0C3C", func_800D0D14);
