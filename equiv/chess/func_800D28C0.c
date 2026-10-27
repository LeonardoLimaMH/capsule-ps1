#include "common.h"

#include "ghidra.h"
#define DAT_80063948 (*(s32 *)0x80063948)
#define DAT_800859f4 (*(u16 *)0x800859F4)
#define DAT_80118c22 (*(u8 *)0x80118C22)
#define DAT_80118faa (*(s32 *)0x80118FAA)
#define D_80118C18 (*(s32 *)0x80118C18)
int func_800D28C0(uint param_1,uint param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;

  uVar5 = (param_1 & 0xff) >> 7;
  pbVar8 = (byte *)((int)&DAT_80118faa +
                   (param_1 & 0x7f) * 7 + 9 + uVar5 * 0x2a + (uint)DAT_80118c22 * 0x10e);
  pbVar7 = (byte *)((int)&DAT_80118faa +
                   (param_2 & 0x7f) * 7 + 9 +
                   ((param_2 & 0xff) >> 7) * 0x2a + (uint)DAT_80118c22 * 0x10e);
  pbVar4 = (byte *)(uVar5 * 0x2e8 + -0x7ff7a66c + (param_1 & 0x7f) * 0x7c);
  if (*pbVar4 == 99) {
    sVar1 = *(short *)(*(int *)(pbVar4 + 0x70) + 100);
    uVar5 = 2;
    if (((sVar1 != -1) && (uVar5 = 1, sVar1 < 0)) && (sVar1 == -2)) {
      uVar5 = 0;
    }
  }
  else {
    uVar5 = *(uint *)(&DAT_80063948 + (uint)*pbVar4 * 0x3c) >> 0xc & 3;
  }
  pbVar4 = (byte *)(((param_2 & 0xff) >> 7) * 0x2e8 + -0x7ff7a66c + (param_2 & 0x7f) * 0x7c);
  if (*pbVar4 == 99) {
    sVar1 = *(short *)(*(int *)(pbVar4 + 0x70) + 100);
    uVar2 = 2;
    if (((sVar1 != -1) && (uVar2 = 1, sVar1 < 0)) && (uVar2 = 1, sVar1 == -2)) {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = *(uint *)(&DAT_80063948 + (uint)*pbVar4 * 0x3c) >> 0xc & 3;
  }
  switch(uVar5 - uVar2) {
  default:
    iVar6 = 100;
    break;
  case 0xfffffffe:
  case 1:
    iVar6 = 0x7d;
    break;
  case 0xffffffff:
  case 2:
    iVar6 = 0x4b;
  }
  iVar3 = (*(uint *)((uint)pbVar8[1] * 4 + (uint)*pbVar8 * 0x34 + D_80118C18) >> 0x13 & 7) -
          (*(uint *)((uint)pbVar7[1] * 4 + (uint)*pbVar7 * 0x34 + D_80118C18) >> 0x13 & 7);
  if (4 < iVar3 + 2U) {
    return 0;
  }
  iVar6 = (int)((((uint)pbVar8[3] * iVar6) / 100 -
                (int)((uint)pbVar7[4] * (iVar3 * -10 + 100)) / 100) + 0x28) / 2 + 10;
  uVar2 = (DAT_800859f4 & 0x7000) >> 0xc;
  uVar5 = (param_1 & 0xff) >> 7;
  if (uVar2 == 0) {
    if (uVar5 == 0) {
LAB_800d2c30:
      iVar6 = iVar6 + iVar6 / 5;
      goto LAB_800d2c70;
    }
  }
  else {
    if (uVar2 != 2) goto LAB_800d2c70;
    if (uVar5 == 1) goto LAB_800d2c30;
  }
  iVar6 = iVar6 - iVar6 / 5;
LAB_800d2c70:
  if (iVar6 < 1) {
    iVar3 = 1;
  }
  else {
    iVar3 = 0xff;
    if (iVar6 < 0x100) {
      iVar3 = iVar6;
    }
  }
  return (int)(short)iVar3;
}
