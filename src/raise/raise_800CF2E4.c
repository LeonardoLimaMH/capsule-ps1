#include "common.h"

void func_800CF2E4(void) {
    func_800B1260();
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CF2E4", func_800CF304);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CF2E4", func_800CF418);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CF2E4", func_800CF4BC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CF2E4", func_800CFF9C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CF2E4", func_800D06D4);

void func_800D0730(void *arg0, s16 arg1, s16 arg2, s16 arg3)
{
  int new_var2;
  s32 new_var;
  s32 temp_t0;
  s32 temp_v1;
  new_var = arg2;
  temp_t0 = arg3 + 4;
  new_var2 = (new_var - temp_t0) * 0x64;
  temp_v1 = (arg3 + 1) * 0x32;
  *((s16 *) (((s8 *) arg0) + 0)) = (s16) (new_var2 + temp_v1);
  *((s16 *) (((s8 *) arg0) + 2)) = 0;
  new_var = temp_t0;
  *((s16 *) (((s8 *) arg0) + 4)) = (s16) (((new_var - arg1) * 0x64) - temp_v1);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CF2E4", func_800D07AC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CF2E4", func_800D091C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CF2E4", func_800D0A8C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CF2E4", func_800D0C14);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CF2E4", func_800D0C3C);

s32 func_800D0CFC(s32 arg0) {
    extern s16 D_80103D38[];
    return arg0 == (*D_80103D38);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CF2E4", func_800D0D14);
