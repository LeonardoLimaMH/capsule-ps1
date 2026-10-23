#include "common.h"

#include "ghidra.h"
undefined4 func_800A8E08(undefined4 param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((param_2 >> 0x1e != 0) && (uVar1 = 1, param_3 == 0)) && (uVar1 = 0, param_2 >> 0x1e != 1)) {
    uVar1 = 1;
  }
  return uVar1;
}
