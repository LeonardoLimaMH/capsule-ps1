#include "common.h"

#include "ghidra.h"
#define DAT_80063948 (*(s32 *)0x80063948)
#define DAT_8006b2b4 (*(s32 *)0x8006B2B4)
#define DAT_80085a10 (*(u8 *)0x80085A10)
#define DAT_80085a25 (*(u8 *)0x80085A25)
#define DAT_80085a26 (*(u8 *)0x80085A26)
#define func_800D4F74 ((s32 (*)())0x800D4F74)
void func_800D595C(uint param_1,undefined4 param_2)

{
  bool bVar1;
  s8 cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;

  uVar6 = param_1 & 0xff;
  iVar5 = ((param_1 & 0x7f) - 1) * 0x7c + (uVar6 >> 7) * 0x2e8;
  uVar10 = (uint)(byte)(&DAT_80085a25)[iVar5];
  uVar9 = (uint)(byte)(&DAT_80085a26)[iVar5];
  uVar11 = *(uint *)(((u8 *)0x8006B2B4) +
                    (*(uint *)(((u8 *)0x80063948) + (uint)(byte)(&DAT_80085a10)[iVar5] * 0x3c) >> 0x11 &
                    0x7f) * 0x58) >> 0xb & 0xf;
  uVar4 = *(uint *)(((u8 *)0x8006B2B4) +
                   (*(uint *)(((u8 *)0x80063948) + (uint)(byte)(&DAT_80085a10)[iVar5] * 0x3c) >> 0x11 &
                   0x7f) * 0x58) >> 0x11 & 0xf;
  iVar5 = 1;
  if ((uVar4 == 4) || (uVar4 == 0xc)) {
    if (uVar11 != 0) {
      do {
        cVar2 = func_800D4F74(param_1 & 0xff,param_2,uVar10 - iVar5 & 0xff,uVar9 - iVar5 & 0xff);
        iVar5 = iVar5 + 1;
        if (cVar2 != '\0') break;
      } while (iVar5 <= (int)uVar11);
    }
    iVar5 = 1;
    if (uVar11 != 0) {
      do {
        cVar2 = func_800D4F74(param_1 & 0xff,param_2,uVar10 - iVar5 & 0xff,uVar9 + iVar5 & 0xff);
        iVar5 = iVar5 + 1;
        if (cVar2 != '\0') break;
      } while (iVar5 <= (int)uVar11);
    }
    iVar5 = 1;
    if (uVar11 != 0) {
      do {
        cVar2 = func_800D4F74(param_1 & 0xff,param_2,uVar10 + iVar5 & 0xff,uVar9 - iVar5 & 0xff);
        iVar5 = iVar5 + 1;
        if (cVar2 != '\0') break;
      } while (iVar5 <= (int)uVar11);
    }
    iVar5 = 1;
    if (uVar11 != 0) {
      do {
        cVar2 = func_800D4F74(param_1 & 0xff,param_2,uVar10 + iVar5 & 0xff,uVar9 + iVar5 & 0xff);
        iVar5 = iVar5 + 1;
        if (cVar2 != '\0') {
          return;
        }
      } while (iVar5 <= (int)uVar11);
    }
  }
  else if (uVar4 == 0xb) {
    if (uVar11 != 0) {
      do {
        bVar3 = func_800D4F74(param_1 & 0xff,param_2,uVar10 - iVar5 & 0xff,uVar9 - iVar5 & 0xff);
        if ((bVar3 == 0xff) || (iVar5 = iVar5 + 1, (bVar3 & 0x7f) == 6)) break;
      } while (iVar5 <= (int)uVar11);
    }
    iVar5 = 1;
    if (uVar11 != 0) {
      do {
        bVar3 = func_800D4F74(param_1 & 0xff,param_2,uVar10 - iVar5 & 0xff,uVar9 + iVar5 & 0xff);
        if ((bVar3 == 0xff) || (iVar5 = iVar5 + 1, (bVar3 & 0x7f) == 6)) break;
      } while (iVar5 <= (int)uVar11);
    }
    iVar5 = 1;
    if (uVar11 != 0) {
      do {
        bVar3 = func_800D4F74(param_1 & 0xff,param_2,uVar10 + iVar5 & 0xff,uVar9 - iVar5 & 0xff);
        if ((bVar3 == 0xff) || (iVar5 = iVar5 + 1, (bVar3 & 0x7f) == 6)) break;
      } while (iVar5 <= (int)uVar11);
    }
    iVar5 = 1;
    if (uVar11 != 0) {
      do {
        bVar3 = func_800D4F74(param_1 & 0xff,param_2,uVar10 + iVar5 & 0xff,uVar9 + iVar5 & 0xff);
        if (bVar3 == 0xff) {
          return;
        }
        iVar5 = iVar5 + 1;
        if ((bVar3 & 0x7f) == 6) {
          return;
        }
      } while (iVar5 <= (int)uVar11);
    }
  }
  else {
    bVar1 = uVar11 == 0;
    if (uVar4 == 10) {
      iVar5 = 2;
      bVar1 = uVar11 < 2;
    }
    if (!bVar1) {
      do {
        uVar4 = uVar10 - iVar5 & 0xff;
        uVar8 = uVar9 - iVar5 & 0xff;
        func_800D4F74(uVar6,param_2,uVar4,uVar8);
        uVar7 = uVar9 + iVar5 & 0xff;
        func_800D4F74(uVar6,param_2,uVar4,uVar7);
        uVar4 = uVar10 + iVar5 & 0xff;
        func_800D4F74(uVar6,param_2,uVar4,uVar8);
        func_800D4F74(uVar6,param_2,uVar4,uVar7);
        iVar5 = iVar5 + 1;
      } while (iVar5 <= (int)uVar11);
    }
  }
  return;
}
