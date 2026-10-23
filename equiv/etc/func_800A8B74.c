#include "common.h"

#include "ghidra.h"
void func_800A8B74(int param_1)

{
    extern u16 D_8008EE44[];
    extern s32 D_800B3C1C[];
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = *(uint *)(param_1 + 0x38);
  iVar3 = *(int *)(param_1 + 0x84);
  iVar4 = (*D_800B3C1C) + 1;
  *(uint *)(param_1 + 0x38) = uVar2 | 1;
  if ((*D_8008EE44) != 9) {
    return;
  }
  if (iVar3 == 1) {
    if (iVar4 < 10) {
      return;
    }
    *(uint *)(param_1 + 0x38) = uVar2 & 0xfffffffe;
    if (iVar4 < 100) {
      iVar3 = iVar4 / 10 + 0x72;
    }
    else {
      iVar3 = 0x72;
    }
  }
  else {
    if (iVar3 < 2) {
      if (iVar3 != 0) {
        return;
      }
      if (iVar4 < 100) {
        return;
      }
      *(uint *)(param_1 + 0x38) = uVar2 & 0xfffffffe;
      return;
    }
    if (iVar3 != 2) {
      return;
    }
    *(uint *)(param_1 + 0x38) = uVar2 & 0xfffffffe;
    iVar3 = iVar4 % 10 + 0x72;
  }
  uVar1 = func_80019F30(0x6000c,iVar3);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  return;
}
