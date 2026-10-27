#include "common.h"

#include "ghidra.h"
#define DAT_80063948 (*(s32 *)0x80063948)
#define DAT_8006b2b4 (*(s32 *)0x8006B2B4)
#define DAT_80085a10 (*(u8 *)0x80085A10)
#define DAT_80085a25 (*(u8 *)0x80085A25)
#define DAT_80085a26 (*(u8 *)0x80085A26)
#define DAT_80119659 (*(u8 *)0x80119659)
#define D_80119658 (*(s8 *)0x80119658)
#define func_8001A998 ((s32 (*)())0x8001A998)
#define func_800D4F74 ((s32 (*)())0x800D4F74)
undefined1 func_800D741C(uint param_1,undefined4 param_2,undefined4 param_3)

{
  u8 cVar1;
  u8 cVar2;
  byte bVar3;
  uint uVar4;
  u8 cVar5;
  int iVar6;
  u8 cVar7;
  uint uVar8;
  u8 cVar9;
  u8 cVar10;
  u8 cVar11;
  u8 cVar12;
  int iVar13;

  iVar6 = ((param_1 & 0x7f) - 1) * 0x7c + ((param_1 & 0xff) >> 7) * 0x2e8;
  iVar13 = 1;
  uVar4 = *(uint *)(((u8 *)0x80063948) + (uint)(byte)(&DAT_80085a10)[iVar6] * 0x3c) >> 0x11 & 0x7f;
  uVar8 = *(uint *)(((u8 *)0x8006B2B4) + uVar4 * 0x58);
  cVar1 = (&DAT_80085a25)[iVar6];
  cVar2 = (&DAT_80085a26)[iVar6];
  uVar4 = *(uint *)(((u8 *)0x8006B2B4) + uVar4 * 0x58) >> 0x11 & 0xf;
  func_8001A998(param_2,0xc);
  D_80119658 = 1;
  DAT_80119659 = 0;
  cVar9 = cVar1;
  cVar11 = cVar1;
  cVar10 = cVar2;
  cVar12 = cVar2;
  if ((uVar8 >> 0xb & 0xf) != 0) {
    do {
      cVar12 = cVar12 + -1;
      cVar11 = cVar11 + '\x01';
      cVar10 = cVar10 + '\x01';
      cVar9 = cVar9 + -1;
      cVar5 = cVar1;
      cVar7 = cVar2;
      switch(param_3) {
      case 0:
        cVar7 = cVar12;
        break;
      case 1:
        cVar5 = cVar9;
        cVar7 = cVar12;
        break;
      case 2:
        cVar5 = cVar9;
        break;
      case 3:
        cVar5 = cVar9;
        cVar7 = cVar10;
        break;
      case 4:
        cVar7 = cVar10;
        break;
      case 5:
        cVar5 = cVar11;
        cVar7 = cVar10;
        break;
      case 6:
        cVar5 = cVar11;
        break;
      case 7:
        cVar5 = cVar11;
        cVar7 = cVar12;
        break;
      default:
        bVar3 = 0xff;
        goto LAB_800d7638;
      }
      bVar3 = func_800D4F74(param_1 & 0xff,param_2,cVar5,cVar7);
LAB_800d7638:
      if (uVar4 == 0xb) {
        if (bVar3 == 0xff) {
          return DAT_80119659;
        }
        if ((bVar3 & 0x7f) == 6) {
          return DAT_80119659;
        }
      }
      else if ((uVar4 == 0xc) && (bVar3 != 0)) {
        return DAT_80119659;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 <= (int)(uint)((byte)(uVar8 >> 0xb) & 0xf));
  }
  return DAT_80119659;
}
