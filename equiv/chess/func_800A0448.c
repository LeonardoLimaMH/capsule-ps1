#include "common.h"

#include "ghidra.h"
undefined4 func_800A0448(int param_1)

{
    extern u8 D_80065310[];
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)*(byte *)(param_1 + (uint)*(byte *)(param_1 + 0xbca) + 0x5e4);
  if (uVar2 == 0xff) {
    uVar1 = 0;
  }
  else {
    if (uVar2 < 8) {
      iVar3 = (uint)*(byte *)(param_1 + 0xbca) * 0x980 + -0x5580;
    }
    else {
      iVar3 = 0;
    }
    uVar1 = 1;
    *(int *)(param_1 + 0x14) = *(int *)(*(int *)(D_80065310 + uVar2 * 4) + iVar3) + iVar3;
  }
  return uVar1;
}
