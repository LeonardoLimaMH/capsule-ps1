#include "common.h"

#include "ghidra.h"
int func_800DBC98(short param_1,undefined4 param_2)

{
    extern u8 D_80063940[];
    extern s32 D_8006AF84[];
    extern u8 D_80091618[];
    extern u8 D_800ED860[];
    extern s32 D_800F1DAC[];
    extern u8 D_80100F38[];
    extern s32 D_80101104[];
  bool bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  if ((*D_800F1DAC) == 1) {
    return 1;
  }
  switch(param_2) {
  case 1:
    goto L800DC390;
  case 2:
    bVar1 = *(short *)(param_1 * 0x1a8 + -0x7ff6e926) < 100;
    goto L800DC388;
  case 3:
    if (0x32 < *(short *)(param_1 * 0x1a8 + -0x7ff6e926)) {
      return 0;
    }
    goto L800DC390;
  case 4:
    if (*(short *)(param_1 * 0x1a8 + -0x7ff6e928) < 99) {
      return 0;
    }
    iVar7 = 1;
    break;
  case 5:
    if (0x17 < *(short *)(param_1 * 0x1a8 + -0x7ff6e928)) {
      return 0;
    }
    goto L800DC390;
  case 6:
    bVar1 = *(short *)(param_1 * 0x1a8 + -0x7ff6e912) < 0x97;
    goto L800DC388;
  case 7:
    bVar1 = *(short *)(param_1 * 0x1a8 + -0x7ff6e914) < 0x97;
    goto L800DC388;
  case 8:
    bVar1 = *(short *)(param_1 * 0x1a8 + -0x7ff6e912) < 200;
    goto L800DC388;
  case 9:
    if (*(short *)(param_1 * 0x1a8 + -0x7ff6e926) < 0x65) {
      return 0;
    }
    bVar1 = *(short *)(param_1 * 0x1a8 + -0x7ff6e90c) < 0x96;
    goto L800DC388;
  case 10:
    iVar7 = param_1 * 0x1a8;
    if (*(short *)(iVar7 + -0x7ff6e9d8) != 0) {
      iVar6 = 0;
      if (*(short *)(iVar7 + -0x7ff6e9d6) == 0) {
        return 0;
      }
      iVar3 = 0;
      while (iVar6 = iVar6 + 1, *(short *)((iVar3 >> 0xf) + iVar7 + -0x7ff6e9d4) != 0xb) {
        iVar3 = iVar6 * 0x10000;
        if ((int)(uint)*(ushort *)(iVar7 + -0x7ff6e9d6) <= iVar6 * 0x10000 >> 0x10) {
          return 0;
        }
      }
    }
    iVar7 = func_800DC5F8();
    if (iVar7 != 1) {
      return iVar7;
    }
    iVar7 = 2;
    break;
  case 0xb:
  case 0xd:
  case 0x12:
  case 0x18:
L800DC090:
    iVar7 = 0;
    break;
  case 0xc:
    if (((*D_8006AF84) - *(int *)(param_1 * 0x1a8 + -0x7ff6e894)) / 0x4b0 < 0x12) {
      return 0;
    }
    iVar7 = 1;
    break;
  case 0xe:
    uVar4 = *(uint *)(*(short *)(D_80091618 + param_1 * 0x1a8) * 0x3c + -0x7ff9c6b8) >> 0xe & 7;
    if (uVar4 == 4) goto L800DC090;
    if ((*D_8006AF84) % 0x7080 < *(short *)((*D_800ED860) + uVar4 * 4) * 0x4b0) {
      return 0;
    }
    if (*(short *)((*D_800ED860) + uVar4 * 4) * 0x4b0 + 0xe10 <= (*D_8006AF84) % 0x7080) {
      return 0;
    }
    goto L800DC390;
  case 0xf:
    sVar5 = *(short *)((u8 *)D_80101104 + param_1 * 0x79c + 0xec);
    sVar2 = 2;
    goto L800DC5D8;
  case 0x10:
    uVar4 = *(ushort *)((u8 *)D_80101104 + param_1 * 0x79c + 0xec) - 1;
    goto L800DC198;
  case 0x11:
    if (1 < *(ushort *)((u8 *)D_80101104 + param_1 * 0x79c + 0xec) - 1) {
      return 0;
    }
    if (*(short *)(param_1 * 0x79c + -0x7fefed50) != 0) {
      return 0;
    }
    iVar7 = 1;
    break;
  case 0x13:
    if (*(short *)((u8 *)D_80101104 + param_1 * 0x79c + 0xec) != 3) {
      return 0;
    }
    if (*(short *)((u8 *)D_80101104 + param_1 * 0x79c + 0xee) != 0x12) {
      return 0;
    }
    goto L800DC390;
  case 0x14:
    if (*(short *)((u8 *)D_80101104 + param_1 * 0x79c + 0xec) != 3) {
      return 0;
    }
    if (*(short *)((u8 *)D_80101104 + param_1 * 0x79c + 0xee) != 0x10) {
      return 0;
    }
    goto L800DC390;
  case 0x15:
    if (*(short *)((u8 *)D_80101104 + param_1 * 0x79c + 0xec) != 3) {
      return 0;
    }
    goto L800DC390;
  case 0x16:
    iVar7 = param_1 * 0x79c;
    if (*(short *)((u8 *)D_80101104 + iVar7 + 0xec) != 4) {
      return 0;
    }
    if (*(short *)((u8 *)D_80101104 + iVar7 + 0xee) != 0x14) {
      return 0;
    }
    bVar1 = *(short *)(param_1 * 0x1a8 + -0x7ff6e926) < 0x5a;
L800DC388:
    if (bVar1) {
      return 0;
    }
L800DC390:
    iVar7 = func_800DC5F8();
    break;
  case 0x17:
    if (*(short *)((u8 *)D_80101104 + param_1 * 0x79c + 0xec) != 5) {
      return 0;
    }
    sVar5 = *(short *)((u8 *)D_80101104 + param_1 * 0x79c + 0xee);
    sVar2 = 3;
    goto L800DC5D8;
  case 0x19:
    if (*(short *)((u8 *)D_80101104 + param_1 * 0x79c + 0xec) != 5) {
      return 0;
    }
    if (*(short *)((u8 *)D_80101104 + param_1 * 0x79c + 0xee) != 5) {
      return 0;
    }
    iVar7 = 1;
    break;
  case 0x1a:
    if (*(short *)((u8 *)D_80101104 + param_1 * 0x79c + 0xec) != 5) {
      return 0;
    }
    uVar4 = *(ushort *)((u8 *)D_80101104 + param_1 * 0x79c + 0xee) - 7;
L800DC198:
    if (1 < uVar4) {
      return 0;
    }
    iVar7 = 1;
    break;
  case 0x1b:
    if (*(short *)((u8 *)D_80101104 + param_1 * 0x79c + 0xec) != 5) {
      return 0;
    }
    sVar5 = *(short *)((u8 *)D_80101104 + param_1 * 0x79c + 0xee);
    sVar2 = 0xb;
    goto L800DC5D8;
  case 0x1c:
    if (*(short *)((u8 *)D_80101104 + param_1 * 0x79c + 0xec) != 5) {
      return 0;
    }
    sVar5 = *(short *)((u8 *)D_80101104 + param_1 * 0x79c + 0xee);
    sVar2 = 0xc;
    goto L800DC5D8;
  case 0x1d:
    if (*(short *)((u8 *)D_80101104 + param_1 * 0x79c + 0xec) != 5) {
      return 0;
    }
    sVar5 = *(short *)((u8 *)D_80101104 + param_1 * 0x79c + 0xee);
    sVar2 = 0xd;
    if (sVar5 != 5) goto L800DC5D8;
    goto L800DC5E0;
  case 0x1e:
    if (*(short *)((u8 *)D_80101104 + param_1 * 0x79c + 0xec) != 5) {
      return 0;
    }
    sVar5 = *(short *)((u8 *)D_80101104 + param_1 * 0x79c + 0xee);
    if ((sVar5 == 5) || (sVar2 = 8, sVar5 == 7)) goto L800DC5E0;
L800DC5D8:
    if (sVar5 != sVar2) {
      return 0;
    }
L800DC5E0:
    iVar7 = 1;
  }
  return iVar7;
}
