#include "common.h"

void func_8009B738(void *arg0)
{
  extern u16 D_8008EE44[];
  s32 var_v0;
  int new_var;
  new_var = ~1;
  if (((u32) ((*D_8008EE44) - 8)) < 3U)
  {
    var_v0 = (*((s32 *) (((s8 *) arg0) + 0x38))) & new_var;
  }
  else
  {
    var_v0 = (*((s32 *) (((s8 *) arg0) + 0x38))) | 1;
  }
  *((s32 *) (((s8 *) arg0) + 0x38)) = var_v0;
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009B738", func_8009B774);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009B738", func_8009B7EC);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009B738", func_8009B864);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009B738", func_8009BBD0);
