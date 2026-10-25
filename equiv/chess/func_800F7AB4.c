#include "common.h"

#include "ghidra.h"
void func_800F7AB4(int param_1)

{
    extern void * D_8008ED68[];
  undefined1 uVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  
  uVar4 = *(ushort *)(param_1 + 0x42);
  sVar2 = *(short *)(param_1 + 0x2a);
  sVar3 = *(short *)(param_1 + 0x2e);
  if ((ushort)*(byte *)(param_1 + 0x4d) < uVar4 >> 1) {
    uVar5 = *(ushort *)(param_1 + 0x40);
    iVar7 = (uint)*(byte *)(param_1 + 0x4d) << 1;
  }
  else {
    uVar5 = *(ushort *)(param_1 + 0x40);
    iVar7 = ((uint)uVar4 - (uint)*(byte *)(param_1 + 0x4d)) * 2;
  }
  sVar6 = (short)((int)((uint)uVar5 * iVar7) / (int)(uint)uVar4) + 2;
  iVar7 = *(int *)((*D_8008ED68) + 0x1090);
  uVar8 = 0;
  if ((iVar7 != 0) && (iVar7 + 0x18U <= (*D_8008ED68) + 0x4594U)) {
    uVar8 = iVar7 + 0x18U;
  }
  *(uint *)((*D_8008ED68) + 0x1090) = uVar8;
  SetPolyF4(iVar7);
  *(undefined1 *)(iVar7 + 4) = *(undefined1 *)(param_1 + 0x44);
  *(undefined1 *)(iVar7 + 5) = *(undefined1 *)(param_1 + 0x45);
  uVar1 = *(undefined1 *)(param_1 + 0x46);
  *(short *)(iVar7 + 10) = sVar3 - sVar6;
  *(short *)(iVar7 + 0xc) = sVar2 + 2;
  *(short *)(iVar7 + 0x10) = sVar2 + -2;
  *(short *)(iVar7 + 8) = sVar2;
  *(short *)(iVar7 + 0xe) = sVar3;
  *(short *)(iVar7 + 0x12) = sVar3;
  *(short *)(iVar7 + 0x14) = sVar2;
  *(short *)(iVar7 + 0x16) = sVar6 + sVar3;
  *(undefined1 *)(iVar7 + 6) = uVar1;
  AddPrim((*D_8008ED68) + *(short *)(param_1 + 0x32) * 4 + 0x70,iVar7);
  iVar7 = *(int *)((*D_8008ED68) + 0x1090);
  uVar8 = 0;
  if ((iVar7 != 0) && (iVar7 + 0x18U <= (*D_8008ED68) + 0x4594U)) {
    uVar8 = iVar7 + 0x18U;
  }
  *(uint *)((*D_8008ED68) + 0x1090) = uVar8;
  SetPolyF4(iVar7);
  *(undefined1 *)(iVar7 + 4) = *(undefined1 *)(param_1 + 0x44);
  *(undefined1 *)(iVar7 + 5) = *(undefined1 *)(param_1 + 0x45);
  uVar1 = *(undefined1 *)(param_1 + 0x46);
  *(short *)(iVar7 + 10) = sVar3 + -2;
  *(short *)(iVar7 + 0xc) = sVar6 + sVar2;
  *(short *)(iVar7 + 0x10) = sVar2 - sVar6;
  *(short *)(iVar7 + 8) = sVar2;
  *(short *)(iVar7 + 0xe) = sVar3;
  *(short *)(iVar7 + 0x12) = sVar3;
  *(short *)(iVar7 + 0x14) = sVar2;
  *(short *)(iVar7 + 0x16) = sVar3 + 2;
  *(undefined1 *)(iVar7 + 6) = uVar1;
  AddPrim((*D_8008ED68) + *(short *)(param_1 + 0x32) * 4 + 0x70,iVar7);
  *(char *)(param_1 + 0x4d) = *(char *)(param_1 + 0x4d) + '\x01';
  if (*(ushort *)(param_1 + 0x42) <= (ushort)*(byte *)(param_1 + 0x4d)) {
    if (*(char *)(param_1 + 0x4c) == '\0') {
      *(char *)(param_1 + 0x4d) =
           (char)((ushort)*(byte *)(param_1 + 0x4d) % *(ushort *)(param_1 + 0x42));
    }
    else {
      func_80013920(param_1);
    }
  }
  return;
}
