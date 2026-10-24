#include "common.h"

#include "ghidra.h"
void func_800E3260(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
    extern M2C_UNK D_80091618[];
  uint uVar1;
  int iVar2;
  
  uVar1 = func_800B1260();
  iVar2 = (uVar1 & 0xffff) * 0x1a8;
  *(undefined4 *)(iVar2 + -0x7ff6e944) = param_2;
  *(undefined4 *)(iVar2 + -0x7ff6e940) = param_3;
  *(undefined4 *)(iVar2 + -0x7ff6e93c) = 5;
  return;
}
