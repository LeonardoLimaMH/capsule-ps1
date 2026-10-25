#include "common.h"

#include "ghidra.h"
uint func_800CB10C(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int aiStack_18 [2];
  
  uVar1 = func_800CB24C();
  if (uVar1 == 1) {
    iVar6 = 0;
    piVar5 = aiStack_18;
    iVar7 = 0x18;
    do {
      *piVar5 = 0;
      iVar4 = 0;
      iVar3 = param_2 + iVar7;
      do {
        if ((*(uint *)(iVar3 + 0x18) & 0x300) == 0) {
          iVar2 = *piVar5;
          *piVar5 = iVar2 + 0x46;
          *piVar5 = iVar2 + 0x46 +
                    ((uint)*(byte *)(iVar3 + 0xe) * 0x32) / (uint)*(byte *)(iVar3 + 9);
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x7c;
      } while (iVar4 < 5);
      iVar7 = iVar7 + 0x2e8;
      iVar3 = param_2 + iVar6;
      iVar6 = iVar6 + 1;
      *piVar5 = *piVar5 + (uint)*(byte *)(iVar3 + 0x60a) * -0x50;
      piVar5 = piVar5 + 1;
    } while (iVar6 < 2);
    if (aiStack_18[param_3] - aiStack_18[1 - param_3] < 0x51) {
      uVar1 = aiStack_18[param_3] - aiStack_18[1 - param_3] < -0x50 ^ 1;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1;
}
