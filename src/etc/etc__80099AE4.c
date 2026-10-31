#include "common.h"

#include "common.h"

void func_80099AE4(void *arg0)
{
  extern u8 D_800859F3[];
  int new_var;
  s32 var_v0;
  if ((*D_800859F3) != 4)
  {
    var_v0 = (*((s32 *) (((s8 *) arg0) + 0x38))) | 1;
  }
  else
  {
    new_var = ~1;
    if (arg0)
    {
      var_v0 = (*((s32 *) (((s8 *) arg0) + 0x38))) & new_var;
    }
    else
    {
      var_v0 = (*((s32 *) (((s8 *) arg0) + 0x38))) & (~1);
    }
  }
  *((s32 *) (((s8 *) arg0) + 0x38)) = var_v0;
}
