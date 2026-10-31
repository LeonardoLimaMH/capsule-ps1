#include "common.h"

#include "common.h"

extern u8 D_800ED8F0[];

s32 func_800A8CB4(s32 idx)
{
  u8 *new_var2;
  u8 *new_var;
  new_var2 = D_800ED8F0;
  new_var = new_var2 + (idx << 5);
  return *((s32 *) new_var);
}
