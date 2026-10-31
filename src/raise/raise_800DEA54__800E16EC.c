#include "common.h"

#include "common.h"

s32 func_800E16EC(void)
{
  extern s16 D_80078C28[];
  int new_var;
  extern u16 D_80078C2C[];
  new_var = 1;
  if ((*D_80078C28) == new_var)
  {
    if (new_var)
    {
      return ((u32) ((*D_80078C2C) - 5)) < 8U;
    }
  }
  return 0;
}
