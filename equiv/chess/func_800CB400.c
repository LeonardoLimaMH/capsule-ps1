#include "common.h"

#include "ghidra.h"
undefined4 func_800CB400(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int aiStack_30 [2];
  
  iVar5 = 0;
  piVar6 = aiStack_30;
  iVar7 = 0x5e8;
  do {
    *piVar6 = 0;
    iVar4 = 0;
    iVar3 = param_1 + iVar7;
    do {
      iVar1 = func_800A8E34(param_1 + 0x5d0,iVar5,iVar4);
      if ((iVar1 == 0) &&
         (*(char *)((uint)*(byte *)(iVar3 + 0x15) * 0xd + param_1 + (uint)*(byte *)(iVar3 + 0x16) +
                   0xc00) == '\x02')) {
        *piVar6 = *piVar6 + 1;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x7c;
    } while (iVar4 < 6);
    piVar6 = piVar6 + 1;
    iVar5 = iVar5 + 1;
    iVar7 = iVar7 + 0x2e8;
  } while (iVar5 < 2);
  uVar2 = 0;
  if ((aiStack_30[param_2] <= aiStack_30[1 - param_2]) &&
     (uVar2 = 2, aiStack_30[1 - param_2] <= aiStack_30[param_2])) {
    uVar2 = 1;
  }
  return uVar2;
}
