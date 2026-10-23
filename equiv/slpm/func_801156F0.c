#include "common.h"

#include "ghidra.h"
undefined4 func_801156F0(undefined4 *param_1,undefined4 *param_2)

{
    extern s16 D_80131B38;
    extern s16 D_80131B3A;
    extern s32 * D_80131C38;
    extern s32 * D_80131C3C;
    extern s32 ** D_80131C40;
    extern s32 * D_80131C44;
    extern s32 * D_80131C48;
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  
  func_80116220();
  if (*(short *)(param_1 + 1) < 0) {
    sVar5 = 0;
  }
  else {
    sVar5 = *(short *)(param_1 + 1);
    if (D_80131B38 < *(short *)(param_1 + 1)) {
      sVar5 = D_80131B38;
    }
  }
  sVar6 = *(short *)((int)param_1 + 6);
  *(short *)(param_1 + 1) = sVar5;
  if (*(short *)((int)param_1 + 6) < 0) {
    sVar5 = 0;
  }
  else {
    sVar5 = D_80131B3A;
    if (*(short *)((int)param_1 + 6) <= D_80131B3A) goto L80115790;
  }
  sVar6 = sVar5;
L80115790:
  *(short *)((int)param_1 + 6) = sVar6;
  iVar4 = (int)*(short *)(param_1 + 1) * (int)sVar6 + 1;
  iVar7 = iVar4 - (iVar4 >> 0x1f) >> 5;
  if (iVar4 / 2 < 1) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar4 = iVar4 / 2 + iVar7 * -0x10;
    uVar2 = *D_80131C3C;
    while ((uVar2 & 0x4000000) == 0) {
      iVar3 = func_80116254();
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      uVar2 = *D_80131C3C;
    }
    *D_80131C3C = 0x4000000;
    *D_80131C38 = 0x1000000;
    *D_80131C38 = 0xc0000000;
    *D_80131C38 = *param_1;
    *D_80131C38 = param_1[1];
    uVar2 = *D_80131C3C;
    while ((uVar2 & 0x8000000) == 0) {
      iVar3 = func_80116254();
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      uVar2 = *D_80131C3C;
    }
    while (iVar4 = iVar4 + -1, iVar4 != -1) {
      *param_2 = *D_80131C38;
      param_2 = param_2 + 1;
    }
    if (iVar7 != 0) {
      *D_80131C3C = 0x4000003;
      *D_80131C40 = (int)param_2;
      *D_80131C44 = iVar7 << 0x10 | 0x10;
      *D_80131C48 = 0x1000200;
    }
    uVar1 = 0;
  }
  return uVar1;
}
