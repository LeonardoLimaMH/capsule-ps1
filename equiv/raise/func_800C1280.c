#include "common.h"

#include "ghidra.h"
void func_800C1280(undefined4 param_1,undefined4 param_2)

{
    extern M2C_UNK D_800F170C[];
    extern M2C_UNK D_80100F38[];
    extern s32 D_80101104[];
  uint uVar1;
  
  uVar1 = func_800B1260(param_2);
  (*(code *)(D_800F170C)[**(byte **)(D_80101104 + (uVar1 & 0xffff) * 0x79c + 0xf8)])
            (param_1,param_2);
  return;
}
