#include "common.h"

#include "ghidra.h"
undefined4 func_800E13C8(uint param_1,uint param_2)

{
    extern M2C_UNK D_80091618[];
  undefined4 uVar1;
  
  if (*(short *)((param_1 & 0xffff) * 0x1a8 + -0x7ff6e8d8) == 1) {
    uVar1 = 0;
  }
  else if (((param_2 & 0xffff) == 0xffff) ||
          (uVar1 = 0, *(short *)((param_2 & 0xffff) * 0x1a8 + -0x7ff6e8d8) != 1)) {
    uVar1 = 1;
  }
  return uVar1;
}
