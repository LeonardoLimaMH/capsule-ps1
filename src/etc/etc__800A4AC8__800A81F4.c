#include "common.h"

void func_800A81F4(void *arg0)
{
  extern u16 D_8008EE44[];
  s32 new_var2;
  s32 *new_var;
  s32 var_v0;
  new_var = (s32 *) (((s8 *) arg0) + 0x84);
  if ((*D_8008EE44) == (*new_var))
  {
    new_var2 = ~1;
    var_v0 = (*((s32 *) (((s8 *) arg0) + 0x38))) & new_var2;
  }
  else
  {
    var_v0 = (*((s32 *) (((s8 *) arg0) + 0x38))) | 1;
  }
  new_var2 = var_v0;
  *((s32 *) (((s8 *) arg0) + 0x38)) = new_var2;
}
