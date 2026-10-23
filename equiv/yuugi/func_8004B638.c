#include "common.h"

#include "ghidra.h"
undefined4 func_8004B638(undefined4 *param_1,undefined4 *param_2)

{
    extern s16 D_80078920;
    extern s16 D_80078922;
    extern s32 * D_80078A20;
    extern s32 * D_80078A24;
    extern s32 ** D_80078A28;
    extern s32 * D_80078A2C;
    extern s32 * D_80078A30;
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  
  func_8004C168();
  if (*(short *)(param_1 + 1) < 0) {
    sVar5 = 0;
  }
  else {
    sVar5 = *(short *)(param_1 + 1);
    if (D_80078920 < *(short *)(param_1 + 1)) {
      sVar5 = D_80078920;
    }
  }
  sVar6 = *(short *)((int)param_1 + 6);
  *(short *)(param_1 + 1) = sVar5;
  if (*(short *)((int)param_1 + 6) < 0) {
    sVar5 = 0;
  }
  else {
    sVar5 = D_80078922;
    if (*(short *)((int)param_1 + 6) <= D_80078922) goto L8004B6D8;
  }
  sVar6 = sVar5;
L8004B6D8:
  *(short *)((int)param_1 + 6) = sVar6;
  iVar4 = (int)*(short *)(param_1 + 1) * (int)sVar6 + 1;
  iVar7 = iVar4 - (iVar4 >> 0x1f) >> 5;
  if (iVar4 / 2 < 1) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar4 = iVar4 / 2 + iVar7 * -0x10;
    uVar2 = *D_80078A24;
    while ((uVar2 & 0x4000000) == 0) {
      iVar3 = func_8004C19C();
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      uVar2 = *D_80078A24;
    }
    *D_80078A24 = 0x4000000;
    *D_80078A20 = 0x1000000;
    *D_80078A20 = 0xc0000000;
    *D_80078A20 = *param_1;
    *D_80078A20 = param_1[1];
    uVar2 = *D_80078A24;
    while ((uVar2 & 0x8000000) == 0) {
      iVar3 = func_8004C19C();
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      uVar2 = *D_80078A24;
    }
    while (iVar4 = iVar4 + -1, iVar4 != -1) {
      *param_2 = *D_80078A20;
      param_2 = param_2 + 1;
    }
    if (iVar7 != 0) {
      *D_80078A24 = 0x4000003;
      *D_80078A28 = (int)param_2;
      *D_80078A2C = iVar7 << 0x10 | 0x10;
      *D_80078A30 = 0x1000200;
    }
    uVar1 = 0;
  }
  return uVar1;
}
