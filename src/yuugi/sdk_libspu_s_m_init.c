#include "common.h"
#include "yuugi.h"

#include "common.h"
/* compiler: 2.7.2-psx */
s32 SpuInitMalloc(s32 arg0, void *arg1)
{
  int new_var;
  extern s32 D_800715C0[];
  extern s32 D_800715F8[];
  extern s32 D_800715FC[];
  extern void *D_80071600[];
  if (arg0 <= 0)
  {
    if (D_800715FC)
    {
      return 0;
    }
    else
    {
      return 0;
    }
  }
  new_var = *D_800715C0;
  *((s32 *) (((s8 *) arg1) + 0)) = 0x40001010;
  *D_80071600 = arg1;
  *D_800715FC = 0;
  *D_800715F8 = arg0;
  *((s32 *) (((s8 *) arg1) + 4)) = (s32) ((0x10000 << new_var) + -0x1010);
  return arg0;
}
