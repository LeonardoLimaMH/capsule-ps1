#include "common.h"

#include "ghidra.h"
undefined4 func_800A0850(int param_1,uint param_2)

{
    extern u8 D_80065310[];
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)*(byte *)(param_1 + param_2 + 0x5e4);
  uVar1 = 0;
  if (uVar2 != 0xff) {
    if (param_2 == *(byte *)(param_1 + 0xbca)) {
      if (uVar2 < 8) {
        iVar3 = param_2 * 0x980 + -0x5580;
      }
      else {
        iVar3 = 0;
      }
      iVar3 = *(int *)(*(int *)(D_80065310 + uVar2 * 4) + iVar3 + 0xac) + iVar3;
    }
    else {
      uVar2 = (uint)*(byte *)(param_1 + param_2 + 0x5e4);
      if (uVar2 < 8) {
        iVar3 = param_2 * 0x980 + -0x5580;
      }
      else {
        iVar3 = 0;
      }
      iVar3 = *(int *)(*(int *)(D_80065310 + uVar2 * 4) + iVar3 + 0xb0) + iVar3;
    }
    *(int *)(param_1 + 0x14) = iVar3;
    uVar1 = 1;
  }
  return uVar1;
}
