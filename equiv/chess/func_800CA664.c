#include "common.h"

#include "ghidra.h"
undefined4 func_800CA664(short param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (param_1 != 0) {
    if (param_1 == -2) {
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
      if (param_1 != -1) {
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}
