#include "ghidra.h"
#include "matching.h"
#include "common.h"

void func_800A3C24(void *arg0)
{
  s8 *new_var4;
  u8 new_var5;
  s8 *new_var3;
  int new_var;
  int new_var2;
  extern u8 D_80086012[];
  s32 var_v0;
  new_var3 = ((s8 *) arg0) + 0x50;
  new_var5 = (u8) (*D_80086012);
  if (new_var5 >= 5U)
  {
    if (new_var)
    {
      new_var2 = ~1;
      new_var = (*((s32 *) new_var3)) & new_var2;
      var_v0 = new_var;
    }
    else
    {
      new_var2 = ~1;
      new_var = (*((s32 *) new_var3)) & new_var2;
      var_v0 = new_var;
    }
  }
  else
  {
    new_var4 = ((s8 *) arg0) + 0x50;
    var_v0 = *((s32 *) new_var4);
    var_v0 = var_v0 | 1;
  }
  *((s32 *) (((s8 *) arg0) + 0x50)) = var_v0;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8__8009EDA4__800A0850__800A0E60__800A13B4__800A1630__800A1780__800A1D3C__800A3758__800A37E8__800A3AE8__800A3C24", func_800A3C5C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8__8009EDA4__800A0850__800A0E60__800A13B4__800A1630__800A1780__800A1D3C__800A3758__800A37E8__800A3AE8__800A3C24", func_800A3E20);
