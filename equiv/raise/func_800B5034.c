#include "common.h"

#include "ghidra.h"
#define DAT_80063948 (*(s32 *)0x80063948)
#define DAT_8006af84 (*(s32 *)0x8006AF84)
#define DAT_80091618 (*(u16 *)0x80091618)
#define DAT_800916b6 (*(u16 *)0x800916B6)
#define DAT_800916d8 (*(s16 *)0x800916D8)
#define DAT_800916da (*(u16 *)0x800916DA)
#define DAT_800916dc (*(s32 *)0x800916DC)
#define DAT_800916ea (*(u16 *)0x800916EA)
#define DAT_800916ec (*(s16 *)0x800916EC)
#define DAT_800916ee (*(u16 *)0x800916EE)
#define DAT_800916f2 (*(u16 *)0x800916F2)
#define DAT_800916f4 (*(u16 *)0x800916F4)
#define DAT_800916f6 (*(u16 *)0x800916F6)
#define DAT_800916fe (*(s16 *)0x800916FE)
#define DAT_800917b4 (*(s16 *)0x800917B4)
#define DAT_800917b6 (*(s16 *)0x800917B6)
#define DAT_800ed862 (*(s16 *)0x800ED862)
#define D_800ED860 (*(s16 *)0x800ED860)
#define func_800E16AC ((s32 (*)())0x800E16AC)
int func_800B5034(undefined4 param_1,uint param_2,ushort param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  ushort uVar5;
  uint uVar6;

  iVar2 = param_2 * 0x1a8;
  uVar1 = (&DAT_80091618)[param_2 * 0xd4];
  uVar6 = 0;
  uVar5 = 0;
  if (param_3 == 4) {
    sVar4 = (short)((*(short *)(((u8 *)0x800916FE) + iVar2) * 200) /
                   ((int)((uint)(ushort)(&DAT_800916b6)[param_2 * 0xd4] * 3) >> 1));
    if (sVar4 < 0x17) {
LAB_800b51c0:
      uVar6 = 5;
    }
    else if (0x2c < sVar4) {
      if (sVar4 < 0x43) {
LAB_800b5350:
        uVar6 = 1;
      }
      else {
        uVar6 = 2;
        if (((99 < sVar4) && (uVar6 = 3, 0x84 < sVar4)) && (uVar6 = 6, sVar4 < 0x9c))
        goto LAB_800b5100;
      }
    }
  }
  else if (param_3 == 5) {
    sVar4 = *(short *)(((u8 *)0x800916EC) + iVar2);
    if (*(short *)(((u8 *)0x800916EC) + iVar2) < *(short *)(((u8 *)0x800916EE) + iVar2)) {
      sVar4 = *(short *)(((u8 *)0x800916EE) + iVar2);
    }
    (&DAT_800916da)[param_2 * 0xd4] = 0xff - sVar4;
    if (sVar4 < 0x33) {
LAB_800b5100:
      uVar6 = 4;
    }
    else {
      uVar6 = 3;
      if ((100 < sVar4) && (uVar6 = 2, 0x96 < sVar4)) {
        uVar6 = (uint)(sVar4 < 200);
      }
    }
  }
  else if (param_3 == 6) {
    uVar6 = (int)(&DAT_800916dc)[param_2 * 0x6a] / 0x7080 + 1;
  }
  else if (param_3 == 7) {
    iVar2 = func_800E16AC(param_2 & 0xffff);
    if (iVar2 == 1) goto LAB_800b51c0;
    uVar6 = 4;
    if ((((&DAT_800917b6)[param_2 * 0xd4] != 1) && (uVar6 = 3, (&DAT_800917b4)[param_2 * 0xd4] == 0)
        ) && (uVar6 = 1, 0x21 < (short)(&DAT_800916d8)[param_2 * 0xd4])) {
      iVar2 = (DAT_8006af84 % 0x7080) / 0x4b0;
      uVar3 = *(uint *)(((u8 *)0x80063948) + (uint)uVar1 * 0x3c) >> 0xc & 0x1c;
      if (*(short *)(((u8 *)0x800ED862) + uVar3) == -1) {
        uVar6 = 0;
        if (*(short *)(((u8 *)0x800ED860) + uVar3) != -1) {
          if (iVar2 == *(short *)(((u8 *)0x800ED860) + uVar3)) {
            return 2;
          }
          iVar2 = 0;
          goto LAB_800b53b8;
        }
      }
      else {
        uVar6 = 0;
        if (*(short *)(((u8 *)0x800ED862) + uVar3) - iVar2 == 1) {
          return 2;
        }
      }
    }
  }
  else {
    if (param_3 == 1) {
      uVar5 = *(ushort *)(((u8 *)0x800916F4) + iVar2);
      iVar2 = (uint)uVar5 << 0x10;
LAB_800b5330:
      iVar2 = iVar2 >> 0x10;
    }
    else {
      if (1 < (short)param_3) {
        if (param_3 == 2) {
          uVar5 = *(ushort *)(((u8 *)0x800916F6) + iVar2);
          iVar2 = (uint)uVar5 << 0x10;
        }
        else {
          if (param_3 != 3) {
            iVar2 = 0;
            goto LAB_800b5334;
          }
          uVar5 = *(ushort *)(((u8 *)0x800916EA) + iVar2);
          iVar2 = (uint)uVar5 << 0x10;
        }
        goto LAB_800b5330;
      }
      if (param_3 == 0) {
        uVar5 = *(ushort *)(((u8 *)0x800916F2) + iVar2);
        iVar2 = (uint)uVar5 << 0x10;
        goto LAB_800b5330;
      }
      iVar2 = 0;
    }
LAB_800b5334:
    if (iVar2 < 0x41) {
      uVar6 = 0;
    }
    else {
      if (iVar2 < 0x6b) goto LAB_800b5350;
      if ((iVar2 < 0x8e) || ((iVar2 < 0x96 && (param_3 < 2)))) {
        uVar6 = 2;
      }
      else {
        uVar6 = 3;
        if ((0xbb < (short)uVar5) && (uVar6 = 4, (short)uVar5 < 200)) {
          iVar2 = 0x40000;
          if (1 < (ushort)(param_3 - 1)) goto LAB_800b53b8;
          uVar6 = 3;
        }
      }
    }
  }
  iVar2 = uVar6 << 0x10;
LAB_800b53b8:
  return iVar2 >> 0x10;
}
