#include "common.h"

#include "common.h"

void func_800B8184(s32 arg0)
{
  int new_var2;
  int new_var;
  new_var = 0x28;
  new_var2 = arg0 < 3;
  if (new_var2 && (arg0 > 0))
  {
    extern M2C_UNK D_800EEB9C[];
    *((s16 *) (((s8 *) (*((void **) (((s8 *) ((((struct 
    {
      u8 _p[0x24];
      s32 v;
    } *) D_800EEB9C)->v * 4) + ((u8 *) D_800EEB9C))) + new_var)))) + 0x66)) = (s16) (arg0 == 1);
  }
}
