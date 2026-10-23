#include "common.h"

#include "ghidra.h"
void func_800CE380(undefined4 param_1,int param_2)

{
    extern s16 D_80069BBE[];
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_800ED8F0[];
    extern M2C_UNK D_80100F38[];
    extern s32 D_80101104[];
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = func_800B1260();
  iVar4 = (int)(*D_80069BBE);
  uVar1 = *(ushort *)((*D_80091618) + (uVar2 & 0xffff) * 0x1a8);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0x1ff;
  }
  iVar3 = (int)*(short *)(D_80101104 + (uVar2 & 0xffff) * 0x79c + 0x15a) + (iVar4 >> 9);
  iVar4 = iVar3;
  if (iVar3 < 0) {
    iVar4 = iVar3 + 7;
  }
  iVar3 = iVar3 + (iVar4 >> 3) * -8 + 9;
  uVar2 = func_800A8CB4((uint)uVar1);
  iVar4 = func_80019F30(uVar2 | 0x70000,*(int *)((uint)uVar1 * 0x20 + -0x7ff126f8) + iVar3);
  if (iVar4 != 0) {
    func_80015CD0(param_2 + 0x14,iVar4,0);
    *(int *)(param_2 + 0x7c) = iVar3;
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffe07 | 0x50;
  }
  return;
}
