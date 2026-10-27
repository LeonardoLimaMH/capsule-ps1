#include "common.h"

#include "ghidra.h"
extern s32 func_80013920();
extern s32 func_800FF0A0();
extern s32 rcos();
extern s32 rsin();
void func_800EADFC(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sStack_18;
  short sStack_16;
  short sStack_14;

  iVar4 = 0x50;
  iVar3 = *(int *)(param_1 + 0x3c);
  iVar2 = iVar3 + 1;
  uVar1 = (*(uint *)(param_1 + 0x34) & 0xf000) / 7;
  *(int *)(param_1 + 0x3c) = iVar2;
  if (iVar2 < 0xd3) {
    sStack_18 = *(short *)(param_1 + 0x6a);
    sStack_14 = *(short *)(param_1 + 0x72);
    if (iVar2 < 0xb4) {
      sStack_16 = (short)(((0xb4 - iVar2) * 400) / 0xb4);
      iVar2 = (iVar2 * 0x2000) / 0xb4 + uVar1;
    }
    else {
      iVar3 = iVar3 + -0xb3;
      sStack_16 = (short)((iVar3 * 400) / 0x1e);
      iVar2 = uVar1 + 0x2000;
      iVar4 = (iVar3 * 400) / 0x1e + 0x50;
    }
    sStack_16 = (*(short *)(param_1 + 0x6e) + -0x32) - sStack_16;
    iVar3 = rsin(iVar2);
    iVar3 = iVar4 * iVar3;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xfff;
    }
    sStack_18 = sStack_18 + (short)(iVar3 >> 0xc);
    iVar2 = rcos(iVar2);
    iVar4 = iVar4 * iVar2;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xfff;
    }
    sStack_14 = sStack_14 + (short)(iVar4 >> 0xc);
    func_800FF0A0(param_1,&sStack_18,1);
    iVar4 = (int)*(short *)(param_1 + 0x50);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 3;
    }
    iVar2 = (int)*(short *)(param_1 + 0x52);
    *(short *)(param_1 + 0x50) = (short)(iVar4 >> 2);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    *(short *)(param_1 + 0x52) = (short)(iVar2 >> 2);
  }
  else {
    func_80013920(param_1);
  }
  return;
}
