#include "common.h"

#include "ghidra.h"
undefined4 func_800B7630(int param_1,uint param_2,uint param_3,int param_4)

{
    extern u8 D_801010B0[];
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;

  iVar3 = param_1 + 0x6e0;
  if (*(s8 *)(param_1 + param_2 + 0xe) == '\x01') {
    uVar4 = param_4 + 1;
  }
  else {
    uVar4 = param_4 - 1;
  }
  iVar1 = func_800B74BC(iVar3,*(undefined4 *)(D_801010B0 + (uint)*(byte *)(param_1 + 9) * 0x34),
                        uVar4,param_3,param_2 & 0xff,0);
  uVar2 = 0;
  if (((iVar1 != 0) && (uVar2 = 0, *(byte *)(param_1 + 0x6e2) == param_3)) &&
     (uVar2 = 0, *(byte *)(param_1 + 0x6e3) == uVar4)) {
    *(s8 *)(iVar3 + (uint)*(byte *)(param_1 + 0x706) * 2 + 8) = (s8)param_3;
    *(s8 *)(iVar3 + (uint)*(byte *)(param_1 + 0x706) * 2 + 9) = (s8)uVar4;
    uVar2 = 1;
    *(s8 *)(param_1 + 0x706) = *(s8 *)(param_1 + 0x706) + '\x01';
  }
  return uVar2;
}
