#include "common.h"

#include "ghidra.h"
#define DAT_80063948 (*(s32 *)0x80063948)
#define DAT_800859f4 (*(u16 *)0x800859F4)
#define DAT_80085a1f (*(u8 *)0x80085A1F)
#define DAT_80085a20 (*(u8 *)0x80085A20)
#define DAT_80085a25 (*(u8 *)0x80085A25)
#define DAT_80085a26 (*(u8 *)0x80085A26)
#define D_80118C18 (*(s32 *)0x80118C18)
int func_800D24B4(uint param_1,uint param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;

  iVar6 = ((param_1 & 0xff) >> 7) * 0x2e8;
  pbVar7 = (byte *)(iVar6 + -0x7ff7a66c + (param_1 & 0x7f) * 0x7c);
  if (*pbVar7 == 99) {
    sVar1 = *(short *)(*(int *)(pbVar7 + 0x70) + 100);
    uVar5 = 2;
    if (((sVar1 != -1) && (uVar5 = 1, sVar1 < 0)) && (sVar1 == -2)) {
      uVar5 = 0;
    }
  }
  else {
    uVar5 = *(uint *)(((u8 *)0x80063948) + (uint)*pbVar7 * 0x3c) >> 0xc & 3;
  }
  pbVar7 = (byte *)(((param_2 & 0xff) >> 7) * 0x2e8 + -0x7ff7a66c + (param_2 & 0x7f) * 0x7c);
  if (*pbVar7 == 99) {
    sVar1 = *(short *)(*(int *)(pbVar7 + 0x70) + 100);
    uVar2 = 2;
    if (((sVar1 != -1) && (uVar2 = 1, sVar1 < 0)) && (uVar2 = 1, sVar1 == -2)) {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = *(uint *)(((u8 *)0x80063948) + (uint)*pbVar7 * 0x3c) >> 0xc & 3;
  }
  switch(uVar5 - uVar2) {
  default:
    iVar8 = 100;
    break;
  case 0xfffffffe:
  case 1:
    iVar8 = 0x7d;
    break;
  case 0xffffffff:
  case 2:
    iVar8 = 0x4b;
  }
  uVar5 = (param_1 & 0xff) >> 7;
  iVar3 = ((param_1 & 0x7f) - 1) * 0x7c + uVar5 * 0x2e8;
  iVar4 = ((param_2 & 0x7f) - 1) * 0x7c + ((param_2 & 0xff) >> 7) * 0x2e8;
  iVar3 = (*(uint *)((uint)(byte)(&DAT_80085a26)[iVar3] * 4 +
                    (uint)(byte)(&DAT_80085a25)[iVar3] * 0x34 + D_80118C18) >> 0x13 & 7) -
          (*(uint *)((uint)(byte)(&DAT_80085a26)[iVar4] * 4 +
                    (uint)(byte)(&DAT_80085a25)[iVar4] * 0x34 + D_80118C18) >> 0x13 & 7);
  if (4 < iVar3 + 2U) {
    return 0;
  }
  uVar2 = (DAT_800859f4 & 0x7000) >> 0xc;
  iVar6 = (int)((((uint)(byte)(&DAT_80085a1f)[((param_1 & 0x7f) - 1) * 0x7c + iVar6] * iVar8) / 100
                - (int)((uint)(byte)(&DAT_80085a20)
                                    [((param_2 & 0x7f) - 1) * 0x7c + ((param_2 & 0xff) >> 7) * 0x2e8
                                    ] * (iVar3 * -10 + 100)) / 100) + 0x28) / 2 + 10;
  if (uVar2 == 0) {
    if (uVar5 == 0) {
LAB_800d2854:
      iVar6 = iVar6 + iVar6 / 5;
      goto LAB_800d2894;
    }
  }
  else {
    if (uVar2 != 2) goto LAB_800d2894;
    if (uVar5 == 1) goto LAB_800d2854;
  }
  iVar6 = iVar6 - iVar6 / 5;
LAB_800d2894:
  if (iVar6 < 1) {
    iVar8 = 1;
  }
  else {
    iVar8 = 0xff;
    if (iVar6 < 0x100) {
      iVar8 = iVar6;
    }
  }
  return (int)(short)iVar8;
}
