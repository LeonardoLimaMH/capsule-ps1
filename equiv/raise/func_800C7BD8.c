#include "common.h"

#include "ghidra.h"
undefined4 func_800C7BD8(int param_1,undefined4 param_2)

{
    extern M2C_UNK D_80063940[];
    extern M2C_UNK D_80091618[];
    extern s16 D_800F07C0[];
    extern M2C_UNK D_80100F38[];
    extern s32 D_80101104[];
  ushort uVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  
  uVar3 = func_800B1260(param_2);
  uVar7 = uVar3 & 0xffff;
  if (uVar7 == 0xffff) {
    return 0;
  }
  iVar4 = uVar7 * 0x79c;
  sVar2 = *(short *)(iVar4 + -0x7fefed84);
  if (sVar2 != 1) {
    if (sVar2 < 2) {
      if (sVar2 == 0) {
        *(undefined2 *)(iVar4 + -0x7fefed84) = 1;
        goto L800C7F94;
      }
    }
    else if (sVar2 == 2) goto L800C7CE8;
    iVar5 = *(int *)((u8 *)D_80101104 + iVar4 + 0xf0);
    *(undefined2 *)(iVar4 + -0x7fefed84) = 0;
    *(int *)((u8 *)D_80101104 + iVar4 + 0xf0) = iVar5 + 1;
    goto L800C7F94;
  }
  sVar2 = func_800B12D8(param_2);
  if (sVar2 == -1) {
    *(undefined2 *)(iVar4 + -0x7fefed84) = 3;
  }
  iVar5 = func_800B21F0(uVar7);
  if (iVar5 != -1) {
    *(short *)((u8 *)D_80101104 + iVar4 + 0x15a) = (short)iVar5;
  }
  iVar5 = func_800CE128((int)*(short *)((u8 *)D_80101104 + iVar4 + 0x15a));
  func_800CE4B8(param_2,param_1,(*D_800F07C0) + iVar5,3);
  *(undefined2 *)(iVar4 + -0x7fefed84) = 2;
L800C7CE8:
  iVar5 = func_80015E60(param_1);
  if (iVar5 == 1) {
    uVar3 = func_800B12D8(param_2);
    *(undefined2 *)(iVar4 + -0x7fefed84) = 3;
    if (*(short *)(iVar4 + -0x7fefed52) != 1) {
      iVar5 = (uVar3 & 0xffff) * 0x1a8;
      *(char *)(*(int *)(iVar5 + -0x7ff6e870) + 0x58) =
           *(char *)(*(int *)(iVar5 + -0x7ff6e870) + 0x58) + -0xc;
      *(char *)(*(int *)(iVar5 + -0x7ff6e870) + 0x59) =
           *(char *)(*(int *)(iVar5 + -0x7ff6e870) + 0x59) + -0xc;
      *(char *)(*(int *)(iVar5 + -0x7ff6e870) + 0x5a) =
           *(char *)(*(int *)(iVar5 + -0x7ff6e870) + 0x5a) + -0xc;
    }
    goto L800C7F94;
  }
  uVar3 = (uint)*(ushort *)((*D_80091618) + (uVar3 & 0xffff) * 0x1a8);
  if (((uVar3 == 0x52) || (uVar3 == 0x56)) || (uVar3 == 0x62)) {
    if (uVar3 < 0x53) {
      if (*(short *)(param_1 + 0x20) != 0) goto L800C7F94;
    }
    else {
      uVar1 = *(ushort *)(param_1 + 0x20);
      uVar3 = 1;
L800C7F1C:
      if (uVar1 != uVar3) goto L800C7F94;
    }
    if (*(short *)(param_1 + 0x24) != 0) goto L800C7F94;
    uVar3 = func_800B12D8(param_2);
    puVar6 = (*D_80091618) + (uVar3 & 0xffff) * 0x1a8;
  }
  else if ((*(uint *)(uVar3 * 0x3c + -0x7ff9c6a0) >> 7 & 0xf) == 1) {
    if (((uint)*(ushort *)(param_1 + 0x24) != *(uint *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 4))
       || (*(int *)(param_1 + 0x20) != 0)) goto L800C7F94;
    uVar3 = func_800B12D8(param_2);
    puVar6 = (*D_80091618) + (uVar3 & 0xffff) * 0x1a8;
  }
  else {
    if (((*(short *)(param_1 + 0x20) != 6) || (*(short *)(param_1 + 0x24) != 0)) || (uVar3 != 0x4c))
    {
      uVar1 = *(ushort *)(param_1 + 0x20);
      uVar3 = (*(uint *)(uVar3 * 0x3c + -0x7ff9c6a0) >> 7 & 0xf) - 2;
      goto L800C7F1C;
    }
    uVar3 = func_800B12D8(param_2);
    puVar6 = (*D_80091618) + (uVar3 & 0xffff) * 0x1a8;
  }
  func_80098EAC(*(undefined4 *)(puVar6 + 0x178));
  func_80034AB0(0x65);
L800C7F94:
  return *(undefined4 *)((u8 *)D_80101104 + iVar4 + 0xf0);
}
