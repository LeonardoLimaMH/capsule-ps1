#include "common.h"

#include "common.h"

extern u8 D_800F1EB4[];

void func_800DEAE8(void)
{
  s32 i;
  u8 *new_var;
  ((struct 
  {
    u8 _p[0];
    s16 v;
  } *) D_800F1EB4)->v = 0;
  new_var = D_800F1EB4;
  ((struct 
  {
    u8 _p[2];
    s16 v;
  } *) new_var)->v = 0;
  ((struct 
  {
    u8 _p[4];
    s16 v;
  } *) new_var)->v = 0;
  for (i = 0; 6 > i; i++)
  {
    *((s16 *) ((new_var + (i * 4)) + 6)) = -1;
    *((s16 *) ((new_var + (i * 4)) + 8)) = -1;
  }

}
