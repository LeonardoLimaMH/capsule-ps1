#include "common.h"

#include "ghidra.h"
void func_800F7484(int param_1)

{
    extern void * D_8008ED68[];
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined2 uStack_48;
  undefined2 uStack_44;
  undefined2 uStack_40;
  undefined2 uStack_3c;
  undefined2 uStack_38;
  undefined2 uStack_34;
  
  iVar8 = 0;
  sVar1 = *(short *)(param_1 + 0x28);
  sVar2 = *(short *)(param_1 + 0x2a);
  iVar10 = (int)*(short *)(param_1 + 0x36);
  iVar9 = (int)*(short *)(param_1 + 0x38);
  sVar3 = GetTPage(0,*(undefined1 *)(param_1 + 0x3c),0,0);
  uVar5 = (uint)*(byte *)(param_1 + 0x3a);
  if (uVar5 != 0) {
    iVar4 = 0;
    do {
      iVar6 = iVar4 / (int)uVar5 + (int)*(short *)(param_1 + 0x3e);
      iVar7 = iVar6 + 0x1000 / uVar5;
      iVar4 = rcos(iVar6);
      iVar4 = iVar10 * iVar4;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xfff;
      }
      uStack_48 = sVar1 + (short)(iVar4 >> 0xc);
      iVar4 = rsin(iVar6);
      iVar4 = iVar10 * iVar4;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xfff;
      }
      uStack_44 = sVar2 + (short)(iVar4 >> 0xc);
      iVar4 = rcos(iVar7);
      iVar4 = iVar10 * iVar4;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xfff;
      }
      uStack_40 = sVar1 + (short)(iVar4 >> 0xc);
      iVar4 = rsin(iVar7);
      iVar4 = iVar10 * iVar4;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xfff;
      }
      uStack_3c = sVar2 + (short)(iVar4 >> 0xc);
      iVar4 = rcos(iVar6);
      iVar4 = iVar9 * iVar4;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xfff;
      }
      uStack_38 = sVar1 + (short)(iVar4 >> 0xc);
      iVar4 = rsin(iVar6);
      iVar4 = iVar9 * iVar4;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xfff;
      }
      uStack_34 = sVar2 + (short)(iVar4 >> 0xc);
      iVar4 = rcos(iVar7);
      iVar4 = iVar9 * iVar4;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xfff;
      }
      iVar6 = rsin(iVar7);
      iVar6 = iVar9 * iVar6;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 0xfff;
      }
      iVar7 = *(int *)((*D_8008ED68) + 0x1090);
      uVar5 = 0;
      if ((iVar7 != 0) && (iVar7 + 0x24U <= (*D_8008ED68) + 0x4594U)) {
        uVar5 = iVar7 + 0x24U;
      }
      *(uint *)((*D_8008ED68) + 0x1090) = uVar5;
      SetPolyG4(iVar7);
      *(undefined1 *)(iVar7 + 4) = *(undefined1 *)(param_1 + 0x2e);
      *(undefined1 *)(iVar7 + 5) = *(undefined1 *)(param_1 + 0x2f);
      *(undefined1 *)(iVar7 + 6) = *(undefined1 *)(param_1 + 0x30);
      *(undefined1 *)(iVar7 + 0xc) = *(undefined1 *)(param_1 + 0x2e);
      *(undefined1 *)(iVar7 + 0xd) = *(undefined1 *)(param_1 + 0x2f);
      *(undefined1 *)(iVar7 + 0xe) = *(undefined1 *)(param_1 + 0x30);
      *(undefined1 *)(iVar7 + 0x14) = *(undefined1 *)(param_1 + 0x32);
      *(undefined1 *)(iVar7 + 0x15) = *(undefined1 *)(param_1 + 0x33);
      *(undefined1 *)(iVar7 + 0x16) = *(undefined1 *)(param_1 + 0x34);
      *(undefined1 *)(iVar7 + 0x1c) = *(undefined1 *)(param_1 + 0x32);
      *(undefined1 *)(iVar7 + 0x1d) = *(undefined1 *)(param_1 + 0x33);
      *(undefined1 *)(iVar7 + 0x1e) = *(undefined1 *)(param_1 + 0x34);
      SetSemiTrans(iVar7,*(undefined1 *)(param_1 + 0x3b));
      *(short *)(iVar7 + 8) = uStack_48;
      *(short *)(iVar7 + 10) = uStack_44;
      *(short *)(iVar7 + 0x10) = uStack_40;
      *(short *)(iVar7 + 0x12) = uStack_3c;
      *(short *)(iVar7 + 0x18) = uStack_38;
      *(short *)(iVar7 + 0x20) = sVar1 + (short)(iVar4 >> 0xc);
      *(short *)(iVar7 + 0x22) = sVar2 + (short)(iVar6 >> 0xc);
      *(short *)(iVar7 + 0x1a) = uStack_34;
      AddPrim((*D_8008ED68) + *(short *)(param_1 + 0x2c) * 4 + 0x70,iVar7);
      uVar5 = (uint)*(byte *)(param_1 + 0x3a);
      iVar8 = iVar8 + 1;
      iVar4 = iVar8 * 0x1000;
    } while (iVar8 < (int)uVar5);
  }
  func_80018610((int)sVar3,(int)*(short *)(param_1 + 0x2c));
  return;
}
