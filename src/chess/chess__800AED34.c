#include "common.h"
#include "ghidra.h"

void func_800AED34(void)
{
  int new_var4;
  extern M2C_UNK D_8008ED68[];
  s8 *new_var5;
  int new_var;
  u16 new_var3;
  u16 *new_var2;
  new_var5 = (s8 *) D_8008ED68;
  new_var2 = (u16 *) (new_var5 + 0xE8);
  new_var4 = *new_var2;
 do { new_var = new_var4 + 1; } while (0);
  *new_var2 = (new_var3 = (u16) new_var);
}
