#include "common.h"

#include "ghidra.h"
void func_800FBBF4(int param_1)

{
    extern void * D_8008ED68[];
  undefined1 uVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  undefined2 uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  
  sVar2 = *(short *)(param_1 + 0x2a);
  sVar3 = *(short *)(param_1 + 0x2e);
  iVar11 = rcos(*(undefined2 *)(param_1 + 0x48));
  uVar13 = (uint)*(ushort *)(param_1 + 0x40) * iVar11;
  if ((int)uVar13 < 0) {
    uVar13 = uVar13 + 0xfff;
  }
  iVar11 = rsin(*(undefined2 *)(param_1 + 0x48));
  uVar14 = (uint)*(ushort *)(param_1 + 0x40) * iVar11;
  if ((int)uVar14 < 0) {
    uVar14 = uVar14 + 0xfff;
  }
  iVar11 = rcos(*(undefined2 *)(param_1 + 0x48));
  uVar4 = *(ushort *)(param_1 + 0x40);
  iVar12 = rsin(*(undefined2 *)(param_1 + 0x48));
  uVar5 = *(ushort *)(param_1 + 0x40);
  iVar16 = *(int *)((*D_8008ED68) + 0x1090);
  uVar15 = 0;
  if ((iVar16 != 0) && (iVar16 + 0x24U <= (*D_8008ED68) + 0x4594U)) {
    uVar15 = iVar16 + 0x24U;
  }
  *(uint *)((*D_8008ED68) + 0x1090) = uVar15;
  SetPolyG4(iVar16);
  *(undefined1 *)(iVar16 + 4) = 1;
  *(undefined1 *)(iVar16 + 5) = 1;
  *(undefined1 *)(iVar16 + 6) = 1;
  *(undefined1 *)(iVar16 + 0xc) = *(undefined1 *)(param_1 + 0x44);
  *(undefined1 *)(iVar16 + 0xd) = *(undefined1 *)(param_1 + 0x45);
  *(undefined1 *)(iVar16 + 0xe) = *(undefined1 *)(param_1 + 0x46);
  *(undefined1 *)(iVar16 + 0x14) = *(undefined1 *)(param_1 + 0x44);
  *(undefined1 *)(iVar16 + 0x15) = *(undefined1 *)(param_1 + 0x45);
  uVar1 = *(undefined1 *)(param_1 + 0x46);
  *(undefined1 *)(iVar16 + 0x1c) = 1;
  *(undefined1 *)(iVar16 + 0x1d) = 1;
  *(undefined1 *)(iVar16 + 0x1e) = 1;
  *(undefined1 *)(iVar16 + 0x16) = uVar1;
  SetSemiTrans(iVar16,1);
  sVar6 = (short)(uVar13 >> 0xc);
  *(short *)(iVar16 + 8) = sVar6 + sVar2;
  sVar7 = (short)(uVar14 >> 0xc);
  *(short *)(iVar16 + 10) = sVar7 + sVar3;
  sVar8 = (short)((int)((uint)uVar4 * iVar11) / 0xf000);
  *(short *)(iVar16 + 0x10) = sVar8 + sVar2;
  sVar9 = (short)((int)((uint)uVar5 * iVar12) / 0xf000);
  *(short *)(iVar16 + 0x12) = sVar3 - sVar9;
  *(short *)(iVar16 + 0x18) = sVar2 - sVar8;
  *(short *)(iVar16 + 0x1a) = sVar9 + sVar3;
  *(short *)(iVar16 + 0x20) = sVar2 - sVar6;
  *(short *)(iVar16 + 0x22) = sVar3 - sVar7;
  AddPrim((*D_8008ED68) + *(short *)(param_1 + 0x32) * 4 + 0x70,iVar16);
  iVar11 = *(int *)((*D_8008ED68) + 0x1090);
  uVar13 = 0;
  if ((iVar11 != 0) && (iVar11 + 0x24U <= (*D_8008ED68) + 0x4594U)) {
    uVar13 = iVar11 + 0x24U;
  }
  *(uint *)((*D_8008ED68) + 0x1090) = uVar13;
  SetPolyG4(iVar11);
  *(undefined1 *)(iVar11 + 4) = 1;
  *(undefined1 *)(iVar11 + 5) = 1;
  *(undefined1 *)(iVar11 + 6) = 1;
  *(undefined1 *)(iVar11 + 0xc) = *(undefined1 *)(param_1 + 0x44);
  *(undefined1 *)(iVar11 + 0xd) = *(undefined1 *)(param_1 + 0x45);
  *(undefined1 *)(iVar11 + 0xe) = *(undefined1 *)(param_1 + 0x46);
  *(undefined1 *)(iVar11 + 0x14) = *(undefined1 *)(param_1 + 0x44);
  *(undefined1 *)(iVar11 + 0x15) = *(undefined1 *)(param_1 + 0x45);
  uVar1 = *(undefined1 *)(param_1 + 0x46);
  *(undefined1 *)(iVar11 + 0x1c) = 1;
  *(undefined1 *)(iVar11 + 0x1d) = 1;
  *(undefined1 *)(iVar11 + 0x1e) = 1;
  *(undefined1 *)(iVar11 + 0x16) = uVar1;
  SetSemiTrans(iVar11,1);
  *(short *)(iVar11 + 8) = sVar2 - sVar7;
  *(short *)(iVar11 + 10) = sVar6 + sVar3;
  *(short *)(iVar11 + 0x10) = sVar2 - sVar9;
  *(short *)(iVar11 + 0x12) = sVar3 - sVar8;
  *(short *)(iVar11 + 0x18) = sVar9 + sVar2;
  *(short *)(iVar11 + 0x1a) = sVar8 + sVar3;
  *(short *)(iVar11 + 0x20) = sVar7 + sVar2;
  *(short *)(iVar11 + 0x22) = sVar3 - sVar6;
  AddPrim((*D_8008ED68) + *(short *)(param_1 + 0x32) * 4 + 0x70,iVar11);
  uVar10 = GetTPage(0,1,0,0);
  func_80018610(uVar10,(int)*(short *)(param_1 + 0x32));
  return;
}
