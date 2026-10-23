#include "common.h"

s32 slpm_SpuInitMalloc(s32 arg0, void *arg1)
{
  int new_var;
  extern s32 D_801333FC[];
  extern s32 D_80133434[];
  extern s32 D_80133438[];
  extern void *D_8013343C[];
  if (arg0 <= 0)
  {
    if (D_80133438)
    {
      return 0;
    }
    else
    {
      return 0;
    }
  }
  new_var = *D_801333FC;
  *((s32 *) (((s8 *) arg1) + 0)) = 0x40001010;
  *D_8013343C = arg1;
  *D_80133438 = 0;
  *D_80133434 = arg0;
  *((s32 *) (((s8 *) arg1) + 4)) = (s32) ((0x10000 << new_var) + -0x1010);
  return arg0;
}
