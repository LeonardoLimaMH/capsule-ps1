#include "common.h"

#include "ghidra.h"
undefined4 func_800203DC(uint param_1)

{
    extern M2C_UNK D_80063940[];
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((param_1 & 0xff) * 0x3c + -0x7ff9c6b4) >> 4 & 3;
  if (uVar2 == 1) {
    uVar1 = 0x8c;
  }
  else if (uVar2 < 2) {
    uVar1 = 0x8c;
    if (uVar2 == 0) {
      uVar1 = 0x7d;
    }
  }
  else {
    uVar1 = 0x8c;
    if (uVar2 == 2) {
      uVar1 = 0x1c;
    }
  }
  return uVar1;
}
