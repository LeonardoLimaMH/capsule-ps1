#include "common.h"

#include "ghidra.h"
undefined4 func_800A04C8(int param_1,int param_2)

{
    extern u8 D_80065310[];
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)*(byte *)(param_1 + param_2 + 0x5e4);
  if (uVar2 == 0xff) {
    uVar1 = 0;
  }
  else {
    if (uVar2 < 8) {
      iVar3 = param_2 * 0x980 + -0x5580;
    }
    else {
      iVar3 = 0;
    }
    uVar1 = 1;
    *(int *)(param_1 + 0x14) = *(int *)(*(int *)(D_80065310 + uVar2 * 4) + iVar3 + 4) + iVar3;
  }
  return uVar1;
}
