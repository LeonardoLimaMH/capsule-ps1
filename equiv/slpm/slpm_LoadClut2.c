#include "common.h"

#include "ghidra.h"
undefined2 slpm_LoadClut2(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  
  uStack_14 = 0x10;
  uStack_18 = (undefined2)param_2;
  uStack_16 = (undefined2)param_3;
  uStack_12 = 1;
  slpm_LoadImage(&uStack_18,param_1);
  uVar1 = slpm_GetClut(param_2,param_3);
  return uVar1;
}
