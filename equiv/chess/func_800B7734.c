#include "common.h"

#include "ghidra.h"
undefined4 func_800B7734(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (uint)*(byte *)(param_3 + 0x15) - (uint)*(byte *)(param_4 + 0x15);
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  uVar2 = 0;
  if (iVar1 < 2) {
    iVar1 = (uint)*(byte *)(param_3 + 0x16) - (uint)*(byte *)(param_4 + 0x16);
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    uVar2 = 1;
    if (1 < iVar1) {
      uVar2 = 0;
    }
  }
  return uVar2;
}
