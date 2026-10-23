#include "common.h"

#include "ghidra.h"
undefined4 func_800B6E24(int param_1,int *param_2,byte *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  undefined1 uStack_28;
  undefined1 uStack_27;
  char cStack_26;
  byte bStack_25;
  
  bVar6 = param_3[2];
  if (bVar6 == 1) {
    iVar8 = param_3[1] + 1;
    iVar7 = *param_3 - 1;
  }
  else if (bVar6 < 2) {
    if (bVar6 != 0) {
      return 0;
    }
    iVar8 = param_3[1] - 1;
    iVar7 = *param_3 - 1;
  }
  else {
    if (bVar6 == 2) {
      bVar6 = *param_3;
      iVar8 = param_3[1] + 1;
    }
    else {
      if (bVar6 != 3) {
        return 0;
      }
      bVar6 = *param_3;
      iVar8 = param_3[1] - 1;
    }
    iVar7 = bVar6 + 1;
  }
  iVar1 = func_800B74BC(param_1 + 0x6e0,param_2[1],iVar8,iVar7,*(undefined1 *)(param_1 + 0x5fa),0);
  if (iVar1 == 0) {
L800B6FFC:
    uVar2 = 0;
  }
  else {
    iVar1 = (*(uint *)(iVar8 * 4 + iVar7 * 0x34 + param_2[1]) >> 0x13 & 7) -
            (*(uint *)((uint)param_3[1] * 4 + (uint)*param_3 * 0x34 + param_2[1]) >> 0x13 & 7);
    if ((0 < iVar1) && (param_3[3] = param_3[3] + (char)iVar1, param_2[4] <= (int)(uint)param_3[3]))
    {
      return 0;
    }
    bVar6 = param_3[3] + 1;
    param_3[3] = bVar6;
    pbVar4 = (byte *)(iVar7 * 0xd + *param_2 + iVar8);
    if (*pbVar4 == 0) {
      *pbVar4 = bVar6;
      param_2[5] = param_2[5] + 1;
    }
    else {
      if (*pbVar4 <= bVar6) goto L800B6FFC;
      *pbVar4 = bVar6;
    }
    iVar1 = func_800B75C4(param_1 + 0x6e0,iVar8,iVar7,param_3[3],0);
    if (iVar1 == 0) {
      if (((int)(uint)param_3[3] < param_2[4]) &&
         (*(char *)(iVar8 * 4 + iVar7 * 0x34 + param_2[1] + 3) == '\0')) {
        iVar1 = 0;
        do {
          uStack_28 = (undefined1)iVar7;
          uStack_27 = (undefined1)iVar8;
          bStack_25 = param_3[3];
          iVar5 = (uint)param_3[2] + iVar1 + 3;
          iVar3 = iVar5;
          if (iVar5 < 0) {
            iVar3 = (uint)param_3[2] + iVar1 + 6;
          }
          cStack_26 = (char)iVar5 + (char)(iVar3 >> 2) * -4;
          iVar3 = func_800B6E24(param_1,param_2,&uStack_28);
          iVar1 = iVar1 + 1;
          if (iVar3 != 0) goto L800B7028;
        } while (iVar1 < 3);
      }
      uVar2 = 0;
      *(char *)(param_1 + 0x706) = *(char *)(param_1 + 0x706) + -1;
    }
    else {
L800B7028:
      uVar2 = 1;
    }
  }
  return uVar2;
}
