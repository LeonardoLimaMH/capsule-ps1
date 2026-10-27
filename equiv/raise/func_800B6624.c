#include "common.h"

#include "ghidra.h"
#define DAT_80063958 (*(s32 *)0x80063958)
#define DAT_80063960 (*(s32 *)0x80063960)
#define DAT_8006b002 (*(u16 *)0x8006B002)
#define DAT_8008ee44 (*(u16 *)0x8008EE44)
#define DAT_80091618 (*(u16 *)0x80091618)
#define DAT_80091790 (*(s32 *)0x80091790)
#define DAT_800f07d7 (*(u8 *)0x800F07D7)
#define DAT_800f1a6a (*(s16 *)0x800F1A6A)
#define DAT_800f1a6c (*(u16 *)0x800F1A6C)
#define DAT_801010c4 (*(s32 *)0x801010C4)
#define DAT_80101154 (*(s32 *)0x80101154)
#define DAT_80101160 (*(s16 *)0x80101160)
#define D_8006B004 (*(u16 *)0x8006B004)
#define D_80078C20 (*(s16 *)0x80078C20)
#define D_80078C28 (*(s16 *)0x80078C28)
#define D_800F1A68 (*(s16 *)0x800F1A68)
#define func_80013920 ((s32 (*)())0x80013920)
#define func_800B1260 ((s32 (*)())0x800B1260)
#define func_800C5850 ((s32 (*)())0x800C5850)
#define func_800E16EC ((s32 (*)())0x800E16EC)
void func_800B6624(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  short sVar7;
  int iVar8;
  uint uVar9;

  uVar4 = *(uint *)(param_1 + 0x34);
  if ((uVar4 >> 8 & 1) != (int)D_80078C20) {
    uVar4 = func_800B1260(uVar4 >> 9 & 1);
    iVar2 = (uVar4 & 0xffff) * 0x79c;
    func_80013920(param_1);
    if (param_1 != *(int *)(((u8 *)0x801010C4) + iVar2)) {
      return;
    }
    *(undefined4 *)(((u8 *)0x801010C4) + iVar2) = 0;
    return;
  }
  if (0x40 < DAT_8008ee44) {
    func_80013920(param_1);
    return;
  }
  if (D_80078C28 == 1) {
    if ((*(uint *)(param_1 + 0x38) & 1) == 1) {
      return;
    }
    uVar4 = func_800B1260(uVar4 >> 9 & 1);
    uVar5 = uVar4 & 0xffff;
    uVar9 = (uint)(ushort)(&DAT_80091618)[uVar5 * 0xd4];
    if (param_1 != *(int *)(((u8 *)0x80101154) + uVar5 * 0x79c)) {
      return;
    }
    if ((*(short *)(((u8 *)0x80101160) + uVar5 * 0x79c) == 1) && (iVar2 = func_800E16EC(), iVar2 == 0)) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x34);
    uVar1 = uVar3 >> 10 & 3;
    if (uVar1 == 0) {
      uVar5 = uVar3 >> 0xc & 0xf;
      if ((uVar5 - 4 < 2) || (uVar5 == 8)) {
        uVar5 = *(uint *)(((u8 *)0x80063958) + uVar9 * 0x3c) >> 0x11;
      }
      else {
        uVar5 = *(uint *)(((u8 *)0x80063958) + uVar9 * 0x3c) >> 0xe;
      }
      if ((uVar5 & 7) == 1) {
        sVar7 = -8;
      }
      else {
        sVar7 = 0;
        if ((uVar5 & 7) == 7) {
          sVar7 = 8;
        }
      }
      iVar8 = (int)sVar7;
      iVar2 = -5;
      uVar6 = (&DAT_80091790)[(uVar4 & 0xffff) * 0x6a];
      uVar4 = 0x10;
    }
    else {
      if (uVar1 != 1) goto LAB_800b6994;
      uVar4 = uVar3 >> 0xc & 0xf;
      if (uVar4 - 10 < 3) {
        iVar2 = (*(uint *)(((u8 *)0x80063960) + uVar9 * 0x3c) >> 0xf & 0xf) * 0x12 +
                ((int)((uVar4 - 10) * 0x10000) >> 0x10) * 6;
        iVar8 = (int)*(short *)(((u8 *)0x800F1A68) + iVar2);
        uVar4 = (uint)*(short *)(((u8 *)0x800F1A6A) + iVar2);
        iVar2 = (int)((*(ushort *)(((u8 *)0x800F1A6C) + iVar2) - 5) * 0x10000) >> 0x10;
        uVar6 = (&DAT_80091790)[uVar5 * 0x6a];
      }
      else {
        if (uVar4 != 0xe) goto LAB_800b6994;
        uVar4 = (uint)(byte)(&DAT_800f07d7)
                            [(*(uint *)(((u8 *)0x80063960) + uVar9 * 0x3c) >> 0xf & 0xf) * 5];
        iVar2 = -5;
        uVar6 = (&DAT_80091790)[uVar5 * 0x6a];
        iVar8 = 0;
      }
    }
    func_800C5850(uVar6,param_1,iVar8,uVar4,iVar2);
  }
LAB_800b6994:
  if ((DAT_8006b002 == 1) || (D_8006B004 == 1)) {
    uVar4 = func_800B1260(*(uint *)(param_1 + 0x34) >> 9 & 1);
    uVar5 = uVar4 & 0xffff;
    uVar9 = (uint)(ushort)(&DAT_80091618)[uVar5 * 0xd4];
    if (param_1 == *(int *)(((u8 *)0x80101154) + uVar5 * 0x79c)) {
      uVar3 = *(uint *)(param_1 + 0x34);
      uVar1 = uVar3 >> 10 & 3;
      if (uVar1 == 0) {
        uVar5 = uVar3 >> 0xc & 0xf;
        if ((uVar5 - 4 < 2) || (uVar5 == 8)) {
          uVar5 = *(uint *)(((u8 *)0x80063958) + uVar9 * 0x3c) >> 0x11;
        }
        else {
          uVar5 = *(uint *)(((u8 *)0x80063958) + uVar9 * 0x3c) >> 0xe;
        }
        if ((uVar5 & 7) == 1) {
          sVar7 = -8;
        }
        else {
          sVar7 = 0;
          if ((uVar5 & 7) == 7) {
            sVar7 = 8;
          }
        }
        iVar8 = (int)sVar7;
        iVar2 = -5;
        uVar6 = (&DAT_80091790)[(uVar4 & 0xffff) * 0x6a];
        uVar4 = 0x10;
      }
      else {
        if (uVar1 != 1) {
          return;
        }
        uVar4 = uVar3 >> 0xc & 0xf;
        if (uVar4 - 10 < 3) {
          iVar2 = (*(uint *)(((u8 *)0x80063960) + uVar9 * 0x3c) >> 0xf & 0xf) * 0x12 +
                  ((int)((uVar4 - 10) * 0x10000) >> 0x10) * 6;
          iVar8 = (int)*(short *)(((u8 *)0x800F1A68) + iVar2);
          uVar4 = (uint)*(short *)(((u8 *)0x800F1A6A) + iVar2);
          iVar2 = (int)((*(ushort *)(((u8 *)0x800F1A6C) + iVar2) - 5) * 0x10000) >> 0x10;
          uVar6 = (&DAT_80091790)[uVar5 * 0x6a];
        }
        else {
          if (uVar4 != 0xe) {
            return;
          }
          uVar4 = (uint)(byte)(&DAT_800f07d7)
                              [(*(uint *)(((u8 *)0x80063960) + uVar9 * 0x3c) >> 0xf & 0xf) * 5];
          iVar2 = -5;
          uVar6 = (&DAT_80091790)[uVar5 * 0x6a];
          iVar8 = 0;
        }
      }
      func_800C5850(uVar6,param_1,iVar8,uVar4,iVar2);
    }
  }
  return;
}
