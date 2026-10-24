#include "common.h"

#include "ghidra.h"
bool func_800D28D0(undefined4 param_1)

{
    extern M2C_UNK D_80091618[];
  uint uVar1;
  
  uVar1 = func_800B1260();
  if (*(short *)((uVar1 & 0xffff) * 0x1a8 + -0x7ff6e958) != 0) {
    uVar1 = func_800B12D8(param_1);
  }
  return *(short *)((uVar1 & 0xffff) * 0x1a8 + -0x7ff6e9d8) == 0;
}
