#include "common.h"

#include "ghidra.h"
void func_800CD9F4(int param_1,int param_2)

{
    extern u8 D_80063940[];
    extern u8 D_80069EC4[];
    extern s16 D_80078C20[];
    extern u8 D_80091618[];
    extern u8 D_800EF364[];
    extern u8 D_800F07D4[];
    extern u8 D_800F1A64[];
    extern u8 D_800F1A68[];
    extern u8 D_80100F38[];
    extern s32 D_80101104[];
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  
  if (param_1 == 1) {
    iVar10 = (int)(*D_80078C20);
  }
  else {
    iVar10 = 1 - (*D_80078C20);
  }
  iVar12 = 4;
  if (param_1 == 1) {
    iVar12 = 1;
  }
  uVar3 = func_800B1260(param_1);
  uVar3 = uVar3 & 0xffff;
  iVar4 = uVar3 * 0x1a8;
  iVar5 = uVar3 * 0x79c;
  uVar9 = (uint)*(ushort *)(iVar4 + -0x7ff6e9d8);
  uVar11 = (uint)*(ushort *)(D_80091618 + iVar4);
  if (param_2 == 0) {
    iVar6 = *(int *)(iVar4 + -0x7ff6e9a4);
    iVar4 = *(int *)(iVar4 + -0x7ff6e9a0);
  }
  else {
    if (param_2 != 1) {
      return;
    }
    iVar6 = *(int *)(iVar4 + -0x7ff6e994);
    iVar4 = *(int *)(iVar4 + -0x7ff6e990);
  }
  if (*(short *)(uVar3 * 0x1a8 + -0x7ff6e958) != 0) {
    uVar3 = func_800B12D8(param_1);
    uVar9 = (uint)*(ushort *)((uVar3 & 0xffff) * 0x1a8 + -0x7ff6e9d8);
    if (param_1 == 1) {
      iVar10 = 1 - (*D_80078C20);
    }
    else {
      iVar10 = (int)(*D_80078C20);
    }
    iVar12 = 1;
    if (param_1 == 1) {
      iVar12 = 4;
    }
  }
  *(undefined2 *)(D_80101104 + iVar5 + 0x14) = 0x20;
  *(undefined2 *)(D_80101104 + iVar5 + 0x10) = 0;
  *(undefined2 *)(D_80101104 + iVar5 + 0x12) = 0;
  puVar7 = (undefined2 *)
           (*(int *)(iVar12 * 0x1c + iVar10 * 0x2d8 + -0x7ff9612c) +
           (uint)*(byte *)((iVar6 + -1) * 8 + uVar9 * 0x40 + iVar4 + -0x7ff10c9d) * 8);
  *(undefined2 *)(D_80101104 + iVar5 + 0x18) = *puVar7;
  *(undefined2 *)(D_80101104 + iVar5 + 0x1a) = puVar7[1];
  uVar1 = *(ushort *)(D_80101104 + iVar5 + 0xf6);
  uVar3 = (uint)uVar1;
  *(short *)(D_80101104 + iVar5 + 0x1c) = puVar7[2] + -5;
  if (param_2 == 0) {
    if (uVar3 - 4 < 2) {
      uVar9 = *(uint *)(uVar11 * 0x3c + -0x7ff9c6a8) >> 0x11;
    }
    else {
      uVar9 = *(uint *)(uVar11 * 0x3c + -0x7ff9c6a8) >> 0xe;
    }
    if ((uVar9 & 7) == 1) {
      sVar8 = -8;
    }
    else {
      sVar8 = 0;
      if ((uVar9 & 7) == 7) {
        sVar8 = 8;
      }
    }
    *(short *)(D_80101104 + iVar5 + 0x18) = *(short *)(D_80101104 + iVar5 + 0x18) + sVar8;
    *(short *)(D_80101104 + iVar5 + 0x1a) = *(short *)(D_80101104 + iVar5 + 0x1a) + 0x10;
  }
  else if (param_2 == 1) {
    if (uVar3 - 10 < 3) {
      iVar10 = (*(uint *)(uVar11 * 0x3c + -0x7ff9c6a0) >> 0xf & 0xf) * 0x12 +
               ((short)uVar1 + -10) * 6;
      *(short *)(D_80101104 + iVar5 + 0x18) =
           *(short *)(D_80101104 + iVar5 + 0x18) + *(short *)(D_800F1A68 + iVar10);
      *(short *)(D_80101104 + iVar5 + 0x1a) =
           *(short *)(D_80101104 + iVar5 + 0x1a) + *(short *)(iVar10 + -0x7ff0e596);
      *(short *)(D_80101104 + iVar5 + 0x1c) =
           *(short *)(D_80101104 + iVar5 + 0x1c) + *(short *)(iVar10 + -0x7ff0e594);
    }
    else if (uVar1 == 0xe) {
      *(ushort *)(D_80101104 + iVar5 + 0x1a) =
           *(short *)(D_80101104 + iVar5 + 0x1a) +
           (ushort)*(byte *)((*(uint *)(uVar11 * 0x3c + -0x7ff9c6a0) >> 0xf & 0xf) * 5 + -0x7ff0f829
                            );
    }
    if (uVar3 - 9 < 2) {
      *(short *)(D_80101104 + iVar5 + 0x1a) = *(short *)(D_80101104 + iVar5 + 0x1a) + 2;
    }
  }
  iVar10 = ((int)*(short *)(D_80101104 + iVar5 + 0x18) + (int)*(short *)(D_80101104 + iVar5 + 0x10))
           * ((int)*(short *)(D_80101104 + iVar5 + 0x18) -
             (int)*(short *)(D_80101104 + iVar5 + 0x10));
  *(undefined2 *)(D_80101104 + iVar5 + 0x5e) = 0;
  *(int *)(D_80101104 + iVar5 + 0x60) = iVar10;
  *(int *)(D_80101104 + iVar5 + 0x60) =
       iVar10 / ((int)*(short *)(D_80101104 + iVar5 + 0x1a) -
                (int)*(short *)(D_80101104 + iVar5 + 0x12));
  if (param_2 != 0) {
    if (param_2 != 1) {
      return;
    }
    switch((int)((uVar3 - 8) * 0x10000) >> 0x10) {
    case 0:
    case 1:
    case 3:
    case 5:
    case 6:
      uVar9 = *(uint *)(iVar5 + -0x7fefe930) | 0x20;
      goto L800CDE8C;
    }
  }
  uVar9 = *(uint *)(iVar5 + -0x7fefe930) & 0xffffffdf;
L800CDE8C:
  *(uint *)(iVar5 + -0x7fefe930) = uVar9;
  *(short *)(D_80101104 + iVar5 + 0x58) =
       (short)((uint)*(ushort *)(D_80101104 + iVar5 + 0x1a) -
              (uint)*(ushort *)(D_80101104 + iVar5 + 0x12));
  iVar10 = ((uint)*(ushort *)(D_80101104 + iVar5 + 0x1a) -
           (uint)*(ushort *)(D_80101104 + iVar5 + 0x12)) * 0x10000;
  iVar12 = iVar10 >> 0x10;
  if (iVar12 < 0) {
    sVar8 = -(short)((uint)iVar10 >> 0x10);
    *(short *)(D_80101104 + iVar5 + 0x58) = sVar8;
    uVar2 = 1;
    if ((0x20 < sVar8) && (uVar2 = 2, 0x80 < sVar8)) {
      uVar2 = 3;
    }
    *(undefined2 *)(D_80101104 + iVar5 + 0x5a) = uVar2;
    sVar8 = *(short *)(D_80101104 + iVar5 + 0x5a);
    *(short *)(D_80101104 + iVar5 + 0x5a) = -*(short *)(D_80101104 + iVar5 + 0x5a);
    *(short *)(D_80101104 + iVar5 + 0x58) = *(short *)(D_80101104 + iVar5 + 0x58) / sVar8;
  }
  else {
    uVar2 = 1;
    if ((0x20 < iVar12) && (uVar2 = 2, 0x80 < iVar12)) {
      uVar2 = 3;
    }
    *(undefined2 *)(D_80101104 + iVar5 + 0x5a) = uVar2;
    *(short *)(D_80101104 + iVar5 + 0x58) =
         *(short *)(D_80101104 + iVar5 + 0x58) / *(short *)(D_80101104 + iVar5 + 0x5a);
  }
  *(undefined2 *)((int)D_800F1A64 + (1 - param_1) * 2) = *(undefined2 *)(D_80101104 + iVar5 + 0x58)
  ;
  if (param_2 == 0) {
    *(undefined4 *)(D_80101104 + iVar5 + 0x50) =
         *(undefined4 *)(D_80100F38 + ((int)(uVar3 << 0x10) >> 0xe) + iVar5 + 0x230);
  }
  else if (param_2 == 1) {
    *(undefined4 *)(D_80101104 + iVar5 + 0x50) =
         *(undefined4 *)(D_80100F38 + ((int)(uVar3 << 0x10) >> 0xe) + iVar5 + 600);
  }
  return;
}
