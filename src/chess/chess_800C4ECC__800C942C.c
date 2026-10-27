#include "common.h"
#include "ghidra.h"

#include "ghidra.h"
int func_800C942C(undefined4 param_1, int param_2)
{
  extern s16 D_80069BBE[];
  int new_var;
  int iVar1;
  int iVar2;
  new_var = (*D_80069BBE) + 0x100;
  iVar2 = new_var;
  iVar1 = iVar2;
  if (iVar2 < 0)
  {
    iVar1 = (*D_80069BBE) + 0x10ff;
  }
  iVar2 = iVar2 + ((iVar1 >> 0xc) * (-0x1000));
  if (iVar2 < 0)
  {
    iVar2 = iVar2 + 0x1ff;
  }
  param_2 = param_2 + (iVar2 >> 9);
  iVar1 = param_2;
  if (param_2 < 0)
  {
    iVar1 = param_2 + 7;
  }
  new_var = param_2 + ((iVar1 >> 3) * (-8));
  return new_var;
}
