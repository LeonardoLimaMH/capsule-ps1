#include "common.h"

#include "ghidra.h"
#define DAT_8006b2b4 (*(s32 *)0x8006B2B4)
#define DAT_80085a25 (*(u8 *)0x80085A25)
#define DAT_80085a26 (*(u8 *)0x80085A26)
#define DAT_8011970a (*(u8 *)0x8011970A)
#define DAT_8011970b (*(u8 *)0x8011970B)
#define D_80119660 (*(u8 *)0x80119660)
#define func_800202A4 ((s32 (*)())0x800202A4)
#define func_800D741C ((s32 (*)())0x800D741C)
#define func_800D90C0 ((s32 (*)())0x800D90C0)
#define func_800D943C ((s32 (*)())0x800D943C)
undefined4 func_800DA0C8(uint param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  byte bVar11;

  bVar11 = 0;
  uVar5 = (param_1 & 0xff) >> 7;
  bVar1 = 1 - (s8)uVar5;
  iVar9 = 0;
  uVar10 = 0xffffffff;
  bVar3 = 0;
  pbVar8 = (byte *)(uVar5 * 0x2e8 + -0x7ff7a66c + (param_1 & 0x7f) * 0x7c);
  *(uint *)(((u8 *)0x8006B2B4) + (uint)*pbVar8 * 0x58) =
       *(uint *)(((u8 *)0x8006B2B4) + (uint)*pbVar8 * 0x58) | 0x18000;
  do {
    if ((*pbVar8 != 0x13) || ((bVar3 & 1) == 1)) {
      bVar2 = func_800D741C(param_1 & 0xff,&D_80119660,bVar3);
      bVar7 = 0;
      iVar6 = 0;
      if (bVar2 != 0) {
        uVar5 = 0;
        do {
          if ((byte)(&D_80119660)[uVar5] >> 7 == bVar1) {
            iVar6 = iVar6 + 1;
          }
          else {
            iVar6 = iVar6 + -1;
          }
          bVar7 = bVar7 + 1;
          uVar5 = (uint)bVar7;
        } while (bVar7 < bVar2);
      }
      if (iVar9 < iVar6) {
        uVar10 = (uint)bVar3;
        iVar9 = iVar6;
      }
    }
    bVar3 = bVar3 + 1;
  } while (bVar3 < 8);
  *(uint *)(((u8 *)0x8006B2B4) + (uint)*pbVar8 * 0x58) =
       *(uint *)(((u8 *)0x8006B2B4) + (uint)*pbVar8 * 0x58) & 0xfffe7fff | 0x10000;
  if ((uVar10 == 0xffffffff) || ((iVar9 == 1 && (iVar9 = func_800202A4(100), 0x13 < iVar9)))) {
    uVar4 = 0;
  }
  else {
    func_800D90C0(param_1 & 0xff);
    bVar2 = 0;
    *(uint *)(((u8 *)0x8006B2B4) + (uint)*pbVar8 * 0x58) =
         *(uint *)(((u8 *)0x8006B2B4) + (uint)*pbVar8 * 0x58) | 0x18000;
    bVar3 = func_800D741C(param_1 & 0xff,&D_80119660,uVar10);
    *(uint *)(((u8 *)0x8006B2B4) + (uint)*pbVar8 * 0x58) =
         *(uint *)(((u8 *)0x8006B2B4) + (uint)*pbVar8 * 0x58) & 0xfffe7fff | 0x10000;
    if (bVar3 != 0) {
      uVar5 = 0;
      do {
        func_800D943C(param_1 & 0xff,(&D_80119660)[uVar5]);
        if ((byte)(&D_80119660)[uVar5] >> 7 == bVar1) {
          bVar11 = bVar2;
        }
        bVar2 = bVar2 + 1;
        uVar5 = (uint)bVar2;
      } while (bVar2 < bVar3);
    }
    bVar1 = (&D_80119660)[bVar11];
    DAT_8011970a = (&DAT_80085a25)[((bVar1 & 0x7f) - 1) * 0x7c + (uint)(bVar1 >> 7) * 0x2e8];
    bVar11 = (&D_80119660)[bVar11];
    uVar4 = 1;
    DAT_8011970b = (&DAT_80085a26)[((bVar11 & 0x7f) - 1) * 0x7c + (uint)(bVar11 >> 7) * 0x2e8];
  }
  return uVar4;
}
