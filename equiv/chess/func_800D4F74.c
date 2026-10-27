#include "common.h"

#include "ghidra.h"
#define D_80085A10 (*(s32 *)0x80085A10)
#define D_80119658 (*(u8 *)0x80119658)
#define D_8011965A (*(u8 *)0x8011965A)
#define UNK_80119659 (*(u8 *)0x80119659)
#define _D_80118C18 (*(s32 *)0x80118C18)
byte func_800D4F74(uint param_1,int param_2,uint param_3,byte param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;

  uVar8 = (param_1 & 0xff) >> 7;
  uVar3 = *(uint *)((uint)(byte)(&D_80085A10)[((param_1 & 0x7f) - 1) * 0x7c + uVar8 * 0x2e8] * 0x58
                   + -0x7ff94d4c);
  uVar9 = uVar3 >> 0x11 & 0xf;
  uVar3 = uVar3 >> 0xf & 3;
  if ((0xc < (param_3 & 0xff)) || (0xc < param_4)) {
    return 0xff;
  }
  uVar4 = *(uint *)((uint)param_4 * 4 + (param_3 & 0xff) * 0x34 + _D_80118C18);
  uVar7 = uVar4 >> 6;
  uVar6 = uVar7 & 0xff;
  if (uVar6 == 0) {
    return 0xff;
  }
  if ((uVar4 & 0x3f) < 2) {
    return 0xff;
  }
  if (((byte)(&D_80085A10)[((param_1 & 0x7f) - 1) * 0x7c + uVar8 * 0x2e8] == 0x43) && (uVar6 == 2))
  {
    return 0xff;
  }
  if ((uVar9 == 5) &&
     ((uint)D_8011965A <=
      (*(uint *)((uint)param_4 * 4 + (param_3 & 0xff) * 0x34 + _D_80118C18) >> 0x13 & 7
      ))) {
    return 0;
  }
  if ((uVar9 == 8) &&
     ((*(uint *)((uint)param_4 * 4 + (param_3 & 0xff) * 0x34 + _D_80118C18) >> 0x13 & 7
      ) <= (uint)D_8011965A)) {
    return 0;
  }
  uVar7 = uVar7 & 0xff;
  if (D_80119658 == '\0') {
    *(undefined1 *)(param_2 + (param_3 & 0xff) * 0xd + (uint)param_4) = 1;
  }
  if (2 < uVar7) {
    return 0xff;
  }
  uVar4 = (uint)param_4;
  if ((*(uint *)((uint)(byte)(&D_80085A10)
                             [((param_1 & 0x7f) - 1) * 0x7c + ((param_1 & 0xff) >> 7) * 0x2e8] *
                 0x58 + -0x7ff94d4c) >> 2 & 0x1f) == 0xc) {
    if (D_80119658 == '\0') {
      uVar3 = (param_3 & 0xff) * 0xd + (uint)param_4;
      uVar5 = 2;
    }
    else {
      uVar3 = (uint)UNK_80119659;
      uVar5 = 0xff;
    }
    *(undefined1 *)(param_2 + uVar3) = uVar5;
    UNK_80119659 = UNK_80119659 + 1;
    return 0;
  }
  iVar2 = (param_3 & 0xff) * 0xd;
  bVar1 = *(byte *)(uVar4 * 4 + (param_3 & 0xff) * 0x34 + _D_80118C18 + 3);
  if (uVar9 == 2) {
    if (bVar1 != 0) {
      return 0;
    }
    if (uVar7 != 2) {
      if (D_80119658 == '\0') {
        *(undefined1 *)(param_2 + iVar2 + uVar4) = 2;
      }
      else {
        *(byte *)(param_2 + (uint)UNK_80119659) = param_4 + (char)iVar2;
      }
      UNK_80119659 = UNK_80119659 + 1;
      return 0;
    }
    return 0;
  }
  uVar6 = (uint)(bVar1 >> 7);
  if (bVar1 == 0) {
    if (uVar9 != 0xc) {
      return 0;
    }
    if (uVar7 != 2) {
      return 0;
    }
    return 0xff;
  }
  if ((bVar1 & 0x7f) == 6) {
    if (uVar9 != 9) {
      return bVar1;
    }
    if (uVar3 != 3) {
      if (uVar3 == 1) goto joined_r0x800d5348;
      if (uVar3 != 2) {
        return bVar1;
      }
      if (uVar6 == uVar8) {
        return bVar1;
      }
    }
joined_r0x800d53b4:
    if (D_80119658 == '\0') {
      *(undefined1 *)(param_2 + iVar2 + uVar4) = 2;
      goto L800D541C;
    }
  }
  else {
    if (uVar9 == 9) {
      return 0;
    }
    if ((uVar9 == 1) || (uVar3 == 3)) goto joined_r0x800d53b4;
    if (uVar3 == 1) {
joined_r0x800d5348:
      if (uVar6 != uVar8) {
        return bVar1;
      }
      goto joined_r0x800d53b4;
    }
    if (uVar3 != 2) {
      return bVar1;
    }
    if (uVar6 == uVar8) {
      return bVar1;
    }
    if (D_80119658 == '\0') {
      *(undefined1 *)(param_2 + iVar2 + uVar4) = 2;
      goto L800D541C;
    }
  }
  *(byte *)(param_2 + (uint)UNK_80119659) = bVar1;
L800D541C:
  UNK_80119659 = UNK_80119659 + 1;
  return bVar1;
}
