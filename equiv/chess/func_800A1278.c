#include "common.h"

#include "ghidra.h"
#define D_80065310 (*(s32 *)0x80065310)
undefined4 func_800A1278(int param_1,uint param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;

  bVar1 = param_3 - 3U < 2;
  if (*(s8 *)(param_1 + param_2 + 0x5e4) == -1) {
    uVar2 = 0;
  }
  else {
    if (param_2 == *(byte *)(param_1 + 0xbca)) {
      iVar5 = 0x1f;
      if (bVar1) {
        iVar5 = 0x1e;
      }
    }
    else {
      iVar5 = 0x21;
      if (bVar1) {
        iVar5 = 0x20;
      }
    }
    uVar4 = (uint)*(byte *)(param_1 + param_2 + 0x5e4);
    if (uVar4 < 8) {
      iVar3 = param_2 * 0x980 + -0x5580;
    }
    else {
      iVar3 = 0;
    }
    uVar2 = 1;
    *(int *)(param_1 + 0x14) =
         *(int *)(iVar5 * 4 + *(int *)(((u8 *)0x80065310) + uVar4 * 4) + iVar3) + iVar3;
  }
  return uVar2;
}
