#include "common.h"

#include "ghidra.h"
#define DAT_80085a01 (*(u8 *)0x80085A01)
#define DAT_80085ff2 (*(u8 *)0x80085FF2)
#define DAT_80085ff9 (*(u8 *)0x80085FF9)
#define DAT_80085ffa (*(u8 *)0x80085FFA)
#define D_801010A8 (*(s8 *)0x801010A8)
#define D_801010B0 (*(s32 *)0x801010B0)
#define func_8001A998 ((s32 (*)())0x8001A998)
int func_800CAF74(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  uint *puVar9;
  s8 *pcVar10;
  int iVar11;
  int iVar12;
  int iVar13;

  iVar12 = 0;
  iVar13 = *(int *)(&D_801010B0 + (uint)DAT_80085a01 * 0x34);
  func_8001A998(param_1,0xa9);
  iVar11 = 0;
  pcVar10 = &D_801010A8;
  bVar1 = (&DAT_80085ffa)[(uint)DAT_80085ff2 * 2];
  bVar2 = (&DAT_80085ff9)[(uint)DAT_80085ff2 * 2];
  do {
    uVar6 = (uint)bVar2 + (int)*pcVar10;
    iVar7 = (uint)bVar1 + (int)pcVar10[1];
    if (((uVar6 < 0xd) && (-1 < iVar7)) && (iVar7 < 0xd)) {
      puVar9 = (uint *)(iVar7 * 4 + uVar6 * 0x34 + iVar13);
      uVar5 = *puVar9;
      if (1 < (uVar5 & 0x3f)) {
        iVar4 = (uVar5 >> 0x13 & 7) -
                (*(uint *)((uint)bVar1 * 4 + (uint)bVar2 * 0x34 + iVar13) >> 0x13 & 7);
        if (iVar4 < 0) {
          iVar4 = -iVar4;
        }
        if (iVar4 < 3) {
          puVar8 = (undefined1 *)(uVar6 * 0xd + param_1 + iVar7);
          *puVar8 = 1;
          bVar3 = *(byte *)((int)puVar9 + 3);
          if (((uint)DAT_80085ff2 == 1 - (bVar3 >> 7)) && ((bVar3 & 0x7f) != 0)) {
            *puVar8 = 2;
            iVar12 = iVar12 + 1;
          }
        }
      }
    }
    iVar11 = iVar11 + 1;
    pcVar10 = pcVar10 + 2;
  } while (iVar11 < 4);
  return iVar12;
}
