#include "common.h"

#include "ghidra.h"
uint func_800E14C4(uint param_1)

{
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_80100F38[];
  uint uVar1;
  
  uVar1 = 1;
  if (*(short *)((param_1 & 0xffff) * 0x1a8 + -0x7ff6e84c) == 0) {
    uVar1 = *(uint *)((param_1 & 0xffff) * 0x79c + -0x7fefe930);
    if ((uVar1 >> 3 & 1) == 1) {
      uVar1 = 1;
    }
    else {
      uVar1 = uVar1 >> 4 & 1;
    }
  }
  return uVar1;
}
