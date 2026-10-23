#include "common.h"

#include "ghidra.h"
int func_800D2748(undefined4 param_1,int param_2)

{
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_80100F38[];
  undefined2 uVar1;
  int iVar2;
  
  uVar1 = func_800B5034(param_1,param_2,7);
  *(undefined2 *)(param_2 * 0x79c + -0x7fefed64) = uVar1;
  switch(uVar1) {
  case 0:
  case 2:
    iVar2 = (uint)(*(short *)(param_2 * 0x1a8 + -0x7ff6e926) < 0x32) << 2;
    break;
  case 1:
    iVar2 = 1;
    break;
  default:
    iVar2 = 0;
    break;
  case 4:
    iVar2 = 3;
  }
  return iVar2;
}
