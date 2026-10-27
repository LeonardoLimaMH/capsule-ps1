#include "common.h"

#include "ghidra.h"
#define D_801010B0 (*(s32 *)0x801010B0)
#define D_80118710 (*(u8 *)0x80118710)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_80015EF8 ((s32 (*)())0x80015EF8)
#define func_800161C4 ((s32 (*)())0x800161C4)
#define func_800AD7B8 ((s32 (*)())0x800AD7B8)
#define func_800ADBC4 ((s32 (*)())0x800ADBC4)
#define func_800ADBCC ((s32 (*)())0x800ADBCC)
#define func_800ADBD8 ((s32 (*)())0x800ADBD8)
#define func_800CA474 ((s32 (*)())0x800CA474)
void func_800ADBE4(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;

  iVar12 = 0;
  puVar7 = *(uint **)(((u8 *)0x801010B0) + (uint)*(byte *)(param_1 + 0x5d9) * 0x34);
  iVar11 = 0;
  uVar3 = func_800CA474();
  do {
    iVar9 = 0;
    puVar10 = puVar7;
    do {
      uVar8 = *puVar10 >> 6 & 0x1fff;
      if (3 < (*puVar10 >> 6 & 0x1f)) {
        iVar4 = func_800ADBC4(uVar8);
        iVar5 = func_80015B3C(func_800AD7B8,func_800161C4,5);
        func_80015EF8(iVar5);
        *(uint *)(iVar5 + 0x38) = *(uint *)(iVar5 + 0x38) | 1;
        bVar1 = (&D_80118710)[iVar9 + iVar11];
        *(int *)(iVar5 + 0x80) = iVar4 + -4;
        *(uint *)(iVar5 + 0x7c) = (uint)bVar1;
        if (iVar4 + -4 < 3) {
          *(uint *)(iVar5 + 0x30) = *(uint *)(iVar5 + 0x30) & 0xfffffe3f | 0x40;
        }
        uVar2 = func_800ADBD8(uVar8);
        *(undefined2 *)(iVar5 + 0x66) = uVar2;
        *(undefined4 *)(iVar5 + 0x88) = uVar3;
        uVar6 = func_800ADBCC(uVar8);
        *(undefined4 *)(iVar5 + 0x8c) = uVar6;
        *(uint *)(iVar5 + 0x34) = *(uint *)(iVar5 + 0x34) & 0xffffff80;
      }
      iVar9 = iVar9 + 1;
      puVar10 = puVar10 + 1;
    } while (iVar9 < 0xd);
    puVar7 = puVar7 + 0xd;
    iVar12 = iVar12 + 1;
    iVar11 = iVar11 + 0xd;
  } while (iVar12 < 0xd);
  return;
}
