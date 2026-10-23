#include "common.h"

#include "ghidra.h"
uint func_800D8FC4(int param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  uVar5 = (uint)*(byte *)(param_2 + 0x15);
  uVar8 = (uint)*(byte *)(param_2 + 0x16);
  iVar7 = uVar5 - *(byte *)(param_1 + 0x15);
  iVar6 = uVar8 - *(byte *)(param_1 + 0x16);
  if (iVar7 < 1) {
    if (iVar7 < 0) {
      iVar7 = -1;
    }
  }
  else {
    iVar7 = 1;
  }
  if (iVar6 < 1) {
    if (iVar6 < 0) {
      iVar6 = -1;
    }
  }
  else {
    iVar6 = 1;
  }
  iVar4 = 0;
  if (0 < param_3) {
    do {
      uVar2 = uVar5 + iVar7;
      uVar3 = uVar8 + iVar6;
      cVar1 = func_800D0B4C(uVar2 & 0xff,uVar3 & 0xff);
      if (cVar1 != '\0') break;
      iVar4 = iVar4 + 1;
      uVar5 = uVar2;
      uVar8 = uVar3;
    } while (iVar4 < param_3);
  }
  return uVar5 * 0xd + uVar8 & 0xff;
}
