#include "common.h"

#include "common.h"

void func_800B81C4(s32 arg0)
{
  extern M2C_UNK D_800EEB9C[];
  M2C_UNK *new_var;
  int new_var2;
  new_var2 = arg0 - 1;
  if ((((new_var2 + 1) <= (3 - 1)) && (arg0 > 0)) && (((struct 
  {
    u8 _p[0x24];
    s32 v;
  } *) (new_var = D_800EEB9C))->v != 5))
  {
    new_var2 = 9 * ((struct 
    {
      u8 _p[0x24];
      s32 v;
    } *) new_var)->v;
    *((s16 *) (((s8 *) (*((void **) (((s8 *) (((4 * new_var2) + ((u8 *) new_var)) - (-(((struct 
    {
      u8 _p[0xD0];
      s32 v;
    } *) new_var)->v * 4)))) + 0xD4)))) - -0x66)) = (s16) (arg0 == 1);
  }
}
