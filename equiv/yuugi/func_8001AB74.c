#include "common.h"

#include "ghidra.h"
uint func_8001AB74(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 1;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1;
    if (1 < param_1) {
      do {
        uVar2 = uVar2 << 1;
        uVar1 = uVar1 >> 1;
      } while (uVar2 < uVar1);
    }
    do {
      uVar1 = uVar2;
      uVar2 = param_1 / uVar1 + uVar1 >> 1;
    } while (uVar2 < uVar1);
  }
  return uVar1;
}
