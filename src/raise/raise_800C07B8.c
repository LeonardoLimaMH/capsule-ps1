#include "common.h"

#include "ghidra.h"
void func_800C07B8(undefined4 param_1, undefined2 param_2)
{
  s16 *new_var;
  extern s16 D_800F0710[];
  s16 *new_var2;
  new_var2 = D_800F0710;
  ;
  func_800C0BC8(param_1, 2, param_2);
 do { } while (0);
  *new_var2 = 1;
  return;
}

#include "ghidra.h"
void func_800C07E4(undefined4 param_1, undefined2 param_2)
{
  int new_var3;
  int new_var;
  s16 (*new_var2)[];
  extern s16 D_800F0710[];
  new_var = 0;
  func_800C0BC8(param_1, new_var, (0, param_2));
  new_var2 = &D_800F0710;
  {
 do { } while (0);
    new_var3 = 1;
    *(*new_var2) = new_var3;
  }
  return;
}

#include "ghidra.h"
void func_800C0810(undefined4 param_1, undefined2 param_2)
{
  s16 *new_var;
  extern s16 D_800F0710[];
  func_800C0BC8(param_1, 1, param_2);
  new_var = D_800F0710;
 do { } while (0);
  *new_var = 1;
  return;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C07B8", func_800C083C);
