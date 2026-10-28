#include "common.h"

#include "ghidra.h"
#define DAT_8006394e (*(u8 *)0x8006394E)
#define DAT_80100f4f (*(u8 *)0x80100F4F)
#define D_80100F48 (*(u8 *)0x80100F48)
#define D_80100F4C (*(u8 *)0x80100F4C)
#define bRam80100f4b (*(u8 *)0x80100F4B)
#define func_80020304 ((s32 (*)())0x80020304)
void func_800AEDB8(undefined4 param_1,uint param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;

  iVar8 = 0;
  iVar3 = (param_2 & 0xff) * 0x3c;
  bVar1 = param_3[9];
  pbVar9 = param_3;
  do {
    iVar5 = (uint)pbVar9[9] - (uint)(byte)(&DAT_8006394e)[(uint)*param_3 * 0x3c + iVar8];
    if ((iVar8 == 0) && (param_3[9] == 0xff)) {
      iVar5 = iVar5 + 0xf;
    }
    iVar4 = (uint)param_4[iVar8 + 9] - (uint)(byte)(&DAT_8006394e)[(uint)*param_4 * 0x3c + iVar8];
    if ((iVar8 == 0) && (param_4[9] == 0xff)) {
      iVar4 = iVar4 + 0xf;
    }
    if (iVar8 == 3) {
      iVar4 = iVar4 + iVar5;
      if (iVar4 < 1) {
        uVar7 = (iVar4 * 2) / 5;
      }
      else {
        iVar5 = iVar4 * 10;
        if (iVar5 < 0) {
          iVar5 = iVar5 + 0xf;
        }
        uVar6 = (uint)DAT_80100f4f;
        uVar7 = iVar5 >> 4;
        if ((uVar6 < (uint)(iVar5 >> 4)) && (uVar7 = iVar4 / 2, (uint)(iVar4 / 2) < uVar6)) {
          uVar7 = uVar6;
        }
      }
      iVar5 = func_80020304(2);
      iVar4 = func_80020304(2);
      uVar7 = uVar7 + (uint)*(byte *)(iVar3 + -0x7ff9c6af) + iVar5 * iVar4;
      bVar2 = bRam80100f4b;
    }
    else {
      iVar4 = iVar4 + iVar5;
      if (iVar4 < 1) {
        uVar7 = (iVar4 * 2) / 5;
      }
      else {
        iVar5 = iVar4 * 10;
        if (iVar5 < 0) {
          iVar5 = iVar5 + 0xf;
        }
        uVar6 = (uint)(byte)(&D_80100F4C)[iVar8];
        uVar7 = iVar5 >> 4;
        if ((uVar6 < (uint)(iVar5 >> 4)) && (uVar7 = iVar4 / 2, (uint)(iVar4 / 2) < uVar6)) {
          uVar7 = uVar6;
        }
      }
      uVar7 = uVar7 + (byte)(&DAT_8006394e)[iVar3 + iVar8];
      bVar2 = (&D_80100F48)[iVar8];
    }
    uVar6 = (uint)bVar2;
    if (uVar7 <= bVar2) {
      uVar6 = uVar7;
    }
    pbVar9[9] = (byte)uVar6;
    iVar8 = iVar8 + 1;
    pbVar9 = pbVar9 + 1;
  } while (iVar8 < 4);
  iVar3 = 0;
  pbVar9 = param_3;
  if (param_3[0x6a] != 0) {
    do {
      pbVar9[0x32] = 0;
      iVar3 = iVar3 + 1;
      param_3[pbVar9[0x2e] + 0xe] = param_3[pbVar9[0x2e] + 0xe] - pbVar9[0x30];
      pbVar9[0x30] = 0;
      pbVar9[0x31] = 0;
      pbVar9 = pbVar9 + 6;
    } while (iVar3 < (int)(uint)param_3[0x6a]);
  }
  param_3[0x6a] = 0;
  iVar3 = 0;
  pbVar9 = param_4;
  if (param_4[0x6a] != 0) {
    do {
      pbVar9[0x32] = 0;
      iVar3 = iVar3 + 1;
      param_4[pbVar9[0x2e] + 0xe] = param_4[pbVar9[0x2e] + 0xe] - pbVar9[0x30];
      pbVar9[0x30] = 0;
      pbVar9[0x31] = 0;
      pbVar9 = pbVar9 + 6;
    } while (iVar3 < (int)(uint)param_4[0x6a]);
  }
  param_4[0x6a] = 0;
  uVar6 = (uint)param_3[9];
  uVar7 = ((((uint)param_3[0xe] * 100) / (uint)bVar1 + ((uint)param_4[0xe] * 100) / (uint)param_4[9]
           ) * uVar6) / 200;
  if (uVar7 == 0) {
    uVar7 = 1;
  }
  else if (uVar6 < uVar7) {
    uVar7 = uVar6;
  }
  param_3[0xe] = (byte)uVar7;
  iVar3 = 1;
  pbVar9 = param_3 + 1;
  do {
    iVar3 = iVar3 + 1;
    pbVar9[0xe] = pbVar9[9];
    pbVar9 = param_3 + iVar3;
  } while (iVar3 < 4);
  param_4[0x28] = 0;
  param_3[0x28] = 0;
  param_4[0x29] = 0;
  param_3[0x29] = 0;
  *(undefined2 *)(*(int *)(param_4 + 0x70) + 100) = 0;
  *(undefined2 *)(*(int *)(param_3 + 0x70) + 100) = 0;
  return;
}
