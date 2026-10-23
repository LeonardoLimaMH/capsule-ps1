#include "common.h"

#include "ghidra.h"
undefined4 func_800C6E5C(int param_1,undefined4 param_2)

{
    extern M2C_UNK D_80063940[];
    extern M2C_UNK D_80091618[];
    extern s16 D_800F0788[];
    extern M2C_UNK D_80100F38[];
    extern s32 D_80101104[];
  short sVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = func_800B1260(param_2);
  iVar5 = (uVar3 & 0xffff) * 0x79c;
  sVar1 = *(short *)(iVar5 + -0x7fefed84);
  if (sVar1 == 1) {
    func_800CE4B8(param_2,param_1,(int)(short)(*D_800F0788),1);
    *(undefined2 *)(iVar5 + -0x7fefed84) = 2;
L800C6F14:
    iVar4 = func_80015E60(param_1);
    if (iVar4 == 1) {
      *(undefined2 *)(iVar5 + -0x7fefed84) = 3;
    }
    else {
      uVar2 = *(ushort *)((*D_80091618) + (uVar3 & 0xffff) * 0x1a8);
      uVar3 = *(uint *)((uint)uVar2 * 0x3c + -0x7ff9c698) >> 0x12 & 0x1f;
      if (uVar3 == 1) {
        if (((uint)*(ushort *)(param_1 + 0x24) ==
             *(uint *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 4)) &&
           (*(int *)(param_1 + 0x20) == 0)) {
          func_80034AB0(0x83);
          func_800C5670(param_2);
        }
      }
      else if ((uint)*(ushort *)(param_1 + 0x20) == uVar3 - 2) {
        if (*(short *)(param_1 + 0x24) == 1) {
          func_800C5670(param_2);
        }
        if (((uint)*(ushort *)(param_1 + 0x20) ==
             (*(uint *)((uint)uVar2 * 0x3c + -0x7ff9c698) >> 0x12 & 0x1f) - 2) &&
           (*(short *)(param_1 + 0x24) == 0)) {
          func_80034AB0(0x83);
        }
      }
    }
  }
  else {
    if (sVar1 < 2) {
      if (sVar1 == 0) {
        *(undefined2 *)(iVar5 + -0x7fefed84) = 1;
        goto L800C704C;
      }
    }
    else if (sVar1 == 2) goto L800C6F14;
    iVar4 = *(int *)(D_80101104 + iVar5 + 0xf0);
    *(undefined2 *)(iVar5 + -0x7fefed84) = 0;
    *(int *)(D_80101104 + iVar5 + 0xf0) = iVar4 + 1;
  }
L800C704C:
  return *(undefined4 *)(D_80101104 + iVar5 + 0xf0);
}
