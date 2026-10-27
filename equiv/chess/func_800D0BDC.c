#include "common.h"

#include "ghidra.h"
#define D_80085A10 (*(s32 *)0x80085A10)
#define D_80118C22 (*(u8 *)0x80118C22)
#define D_80118FAA (*(s32 *)0x80118FAA)
#define _D_80118C18 (*(s32 *)0x80118C18)
undefined4 func_800D0BDC(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;

  uVar8 = (param_1 & 0xff) >> 7;
  iVar10 = 0;
  pbVar4 = &D_80118FAA +
           (param_1 & 0x7f) * 7 + 9 + uVar8 * 0x2a + (uint)(byte)D_80118C22 * 0x10e;
  uVar11 = (uint)*pbVar4;
  uVar14 = (uint)pbVar4[1];
  iVar13 = (param_2 & 0xff) - uVar11;
  uVar5 = *(uint *)(uVar14 * 4 + uVar11 * 0x34 + _D_80118C18);
  iVar12 = (param_3 & 0xff) - uVar14;
  if (iVar13 < 1) {
    iVar1 = 0;
    if (iVar13 < 0) {
      iVar1 = -1;
    }
  }
  else {
    iVar1 = 1;
  }
  if (iVar12 < 1) {
    iVar13 = 0;
    if (iVar12 < 0) {
      iVar13 = -1;
    }
  }
  else {
    iVar13 = 1;
  }
  iVar12 = 1;
  uVar7 = uVar11;
  uVar9 = uVar14;
  do {
    if ((uVar7 == (param_2 & 0xff)) && (uVar9 == (param_3 & 0xff))) {
      return 1;
    }
    uVar7 = uVar11 + iVar1 * iVar12;
    uVar9 = uVar14 + iVar13 * iVar12;
    if (((0xd < uVar7) || (iVar10 = iVar10 + 1, 0xd < uVar9)) || ((int)(uint)pbVar4[5] < iVar10)) {
      return 0;
    }
    uVar6 = *(uint *)(uVar9 * 4 + uVar7 * 0x34 + _D_80118C18);
    uVar2 = uVar6 >> 6 & 0x1fff;
    if (uVar2 == 0) {
      return 0;
    }
    if (2 < uVar2) {
      return 0;
    }
    if ((uVar6 & 0x3f) < 2) {
      return 0;
    }
    if ((&D_80118FAA)[uVar9 + uVar7 * 0xd + (uint)(byte)D_80118C22 * 0x10e + 100] !=
        '\0') {
      return 0;
    }
    switch(*(uint *)((uint)(byte)(&D_80085A10)[((param_1 & 0x7f) - 1) * 0x7c + uVar8 * 0x2e8] * 0x3c
                    + -0x7ff9c6b8) >> 8 & 0xf) {
    case 1:
    case 8:
      if ((*(uint *)(uVar9 * 4 + uVar7 * 0x34 + _D_80118C18) >> 6 & 0x1fff) != 2)
      goto L800D0EF8;
      if (uVar7 == (param_2 & 0xff)) {
        if (uVar9 == (param_3 & 0xff)) {
          return 0;
        }
        goto L800D0EF8;
      }
      break;
    case 2:
    case 4:
    case 6:
    case 7:
      if ((*(uint *)(uVar9 * 4 + uVar7 * 0x34 + _D_80118C18) >> 6 & 0x1fff) == 2) {
        return 0;
      }
    case 0:
      iVar3 = (*(uint *)(uVar9 * 4 + uVar7 * 0x34 + _D_80118C18) >> 0x13 & 7) -
              (uVar5 >> 0x13 & 7);
      if ((0 < iVar3) && (iVar10 = iVar10 + iVar3, (int)(uint)pbVar4[5] < iVar10)) {
        return 0;
      }
      break;
    default:
L800D0EF8:
    }
    uVar5 = *(uint *)(uVar9 * 4 + uVar7 * 0x34 + _D_80118C18);
    iVar12 = iVar12 + 1;
  } while( true );
}
