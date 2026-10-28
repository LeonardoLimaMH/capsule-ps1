#include "common.h"

#include "ghidra.h"
#define DAT_8008edf0 (*(s32 *)0x8008EDF0)
#define D_801010B0 (*(s32 *)0x801010B0)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800A835C ((s32 (*)())0x800A835C)
#define func_800A87C8 ((s32 (*)())0x800A87C8)
undefined4 func_800A1924(int param_1,int param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;

  iVar12 = param_1 + 0x5d0;
  bVar1 = *param_3;
  bVar2 = param_3[1];
  iVar13 = *(int *)(((u8 *)0x801010B0) + (uint)*(byte *)(param_1 + 0x5d9) * 0x34);
  if (((&DAT_8008edf0)[param_2 * 4] & 0x20) == 0) {
    uVar5 = 0;
    if (((&DAT_8008edf0)[param_2 * 4] & 0x40) != 0) {
      func_80034AB0(0x5d);
      uVar5 = 0xffffffff;
    }
  }
  else {
    puVar10 = (uint *)((uint)bVar2 * 4 + (uint)bVar1 * 0x34 + iVar13);
    uVar8 = *puVar10;
    if ((((uVar8 >> 0x16 & 3) == (uint)*(byte *)(iVar12 + param_2 + 0xe)) &&
        ((uVar8 >> 6 & 0xff) == 1)) && (iVar11 = 0, *(s8 *)((int)puVar10 + 3) == '\0')) {
      bVar3 = *(byte *)(iVar12 + param_2 + 0x6db);
      uVar8 = (uint)bVar3;
      iVar9 = iVar12 + uVar8 * 0x7c + param_2 * 0x2e8;
      iVar7 = iVar9;
      do {
        puVar6 = (undefined1 *)(param_2 * 2 + iVar12 + 0x601 + iVar11);
        iVar11 = iVar11 + 1;
        *(undefined1 *)(iVar7 + 0x2d) = *puVar6;
        iVar7 = iVar9 + iVar11;
      } while (iVar11 < 2);
      iVar11 = iVar12 + uVar8 * 0x7c + param_2 * 0x2e8;
      *(undefined1 *)(iVar11 + 0x2f) = 1;
      uVar4 = func_800A835C(param_1,param_2);
      *(undefined1 *)(iVar11 + 0x3d) = uVar4;
      iVar13 = (uint)bVar2 * 4 + (uint)bVar1 * 0x34 + iVar13;
      *(byte *)(iVar13 + 3) = bVar3 + 1 & 0x7f;
      if (param_2 != 0) {
        *(byte *)(iVar13 + 3) = *(byte *)(iVar13 + 3) | 0x80;
      }
      iVar13 = iVar12 + param_2;
      do {
        *(s8 *)(iVar13 + 0x6db) = *(s8 *)(iVar13 + 0x6db) + '\x01';
        *(byte *)(iVar13 + 0x6db) = *(byte *)(iVar13 + 0x6db) % 6;
      } while (((int)(uint)*(byte *)(iVar13 + 0x6dd) >> (*(byte *)(iVar13 + 0x6db) & 0x1f) & 1U) !=
               0);
      iVar12 = iVar12 + param_2;
      *(s8 *)(iVar12 + 0x6d9) = *(s8 *)(iVar12 + 0x6d9) + '\x01';
      *(byte *)(iVar12 + 0x6dd) = *(byte *)(iVar12 + 0x6dd) | (byte)(1 << (uVar8 & 0x1f));
      func_800A87C8(param_1,param_2,uVar8,0);
      uVar5 = 1;
    }
    else {
      func_80034AB0(0x4c);
      uVar5 = 0;
    }
  }
  return uVar5;
}
