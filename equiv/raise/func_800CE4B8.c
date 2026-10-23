#include "common.h"

#include "ghidra.h"
void func_800CE4B8(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_800ED8F0[];
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = func_800B1260();
  uVar1 = *(ushort *)((*D_80091618) + (uVar2 & 0xffff) * 0x1a8);
  uVar2 = func_800A8CB4((uint)uVar1);
  iVar3 = func_80019F30(uVar2 | 0x70000,*(int *)((uint)uVar1 * 0x20 + -0x7ff126f8) + param_3);
  if (iVar3 != 0) {
    func_80015CD0(param_2 + 0x14,iVar3,param_4);
    *(int *)(param_2 + 0x7c) = param_3;
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffe07 | 0x50;
  }
  return;
}
