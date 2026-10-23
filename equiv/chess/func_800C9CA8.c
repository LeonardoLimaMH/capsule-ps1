#include "common.h"

#include "ghidra.h"
undefined4 func_800C9CA8(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_2 < param_4) {
    uVar1 = 2;
    if ((param_3 <= param_1) && (uVar1 = 8, param_1 <= param_3)) {
      uVar1 = 1;
    }
  }
  else if (param_4 < param_2) {
    uVar1 = 4;
    if ((param_3 <= param_1) && (uVar1 = 6, param_1 <= param_3)) {
      uVar1 = 5;
    }
  }
  else {
    uVar1 = 3;
    if ((param_3 <= param_1) && (uVar1 = 7, param_1 <= param_3)) {
      uVar1 = 0;
    }
  }
  return uVar1;
}
