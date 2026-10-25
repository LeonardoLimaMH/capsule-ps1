#include "common.h"

#include "ghidra.h"
undefined4 func_800A11C0(int param_1,int param_2,int param_3)

{
    extern u8 D_80065310[];
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = (uint)*(byte *)(param_1 + param_2 + 0x5e4);
  if (uVar1 == 0xff) {
    return 0;
  }
  if (param_3 == 0) {
    if (*(char *)(param_1 + 0x5d0) == '\0') {
      return 0;
    }
    iVar3 = 0x22;
  }
  else {
    uVar1 = (uint)*(byte *)(param_1 + param_2 + 0x5e4);
    iVar3 = 0x23;
  }
  if (uVar1 < 8) {
    iVar2 = param_2 * 0x980 + -0x5580;
  }
  else {
    iVar2 = 0;
  }
  *(int *)(param_1 + 0x14) = *(int *)(iVar3 * 4 + *(int *)(D_80065310 + uVar1 * 4) + iVar2) + iVar2
  ;
  return 1;
}
