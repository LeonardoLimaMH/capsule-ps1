#include "common.h"

#include "ghidra.h"
void func_800BBB54(int param_1)

{
    extern s32 D_8008F7A8[];
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined1 uVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x20) == 5) {
    *(undefined4 *)(param_1 + 0x20) = 2;
  }
  uVar4 = *(uint *)(param_1 + 0x3c);
  uVar1 = uVar4 * 3 >> 1;
  uVar5 = (undefined1)(((uVar4 - *(ushort *)(param_1 + 0x7a)) * 0xff) / uVar4);
  *(undefined1 *)(param_1 + 0x58) = uVar5;
  *(undefined1 *)(param_1 + 0x5a) = uVar5;
  *(undefined1 *)(param_1 + 0x59) = uVar5;
  uVar3 = (undefined2)(((uVar1 - *(ushort *)(param_1 + 0x7a)) * 0x1000) / uVar1);
  *(undefined2 *)(param_1 + 0x52) = uVar3;
  *(undefined2 *)(param_1 + 0x50) = uVar3;
  if (*(byte *)(param_1 + 0x58) < 10) {
    func_80013920(param_1);
  }
  iVar2 = rcos((int)((*(int *)(param_1 + 0x84) + (uint)*(ushort *)(param_1 + 0x7a)) *
                               0x1000) / 200);
  iVar6 = *(int *)(param_1 + 0x80) * *(int *)(param_1 + 0x7c) * 3;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 3;
  }
  iVar2 = (iVar6 >> 2) * iVar2;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xfff;
  }
  *(short *)(param_1 + 0x46) = (short)(iVar2 >> 0xc);
  iVar2 = rsin((int)((*(int *)(param_1 + 0x84) + (uint)*(ushort *)(param_1 + 0x7a)) *
                               0x1000) / 200);
  iVar2 = ((*(int *)(param_1 + 0x80) * *(int *)(param_1 + 0x7c) * 2) / 5) * iVar2;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xfff;
  }
  *(short *)(param_1 + 0x4a) = (short)(iVar2 >> 0xc);
  iVar2 = *(int *)(param_1 + 0x7c);
  *(short *)(param_1 + 0x7a) = *(short *)(param_1 + 0x7a) + 1;
  *(int *)(param_1 + 0x7c) = iVar2 + 1;
  if ((*D_8008F7A8) != 0) {
    *(int *)(param_1 + 0x7c) = iVar2 + 3;
  }
  return;
}
