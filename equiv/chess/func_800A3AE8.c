#include "common.h"

#include "ghidra.h"
#define D_801010B0 (*(s32 *)0x801010B0)
#define func_800A3C5C ((s32 (*)())0x800A3C5C)
#define func_800A4678 ((s32 (*)())0x800A4678)
void func_800A3AE8(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  undefined1 uVar8;
  undefined1 uVar9;

  uVar9 = 0;
  uVar8 = 0;
  iVar6 = 0;
  puVar7 = *(uint **)(((u8 *)0x801010B0) + (uint)*(byte *)(param_1 + 0x5d9) * 0x34);
  do {
    iVar4 = 0;
    puVar5 = puVar7;
    do {
      uVar2 = *puVar5 >> 0x16 & 3;
      if (uVar2 == *(byte *)(param_1 + 0x5de)) {
        iVar1 = func_800A4678(func_800A3C5C);
        *(undefined1 *)(iVar1 + 0x58) = uVar9;
        uVar9 = 1;
LAB_800a3bb0:
        uVar3 = 0;
      }
      else {
        iVar1 = 0;
        if (uVar2 != *(byte *)(param_1 + 0x5df)) goto LAB_800a3bb0;
        iVar1 = func_800A4678(func_800A3C5C);
        *(undefined1 *)(iVar1 + 0x58) = uVar8;
        uVar8 = 1;
        uVar3 = 1;
      }
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x5c) = uVar3;
        *(int *)(iVar1 + 0x60) = iVar6;
        *(int *)(iVar1 + 100) = iVar4;
        *(uint *)(iVar1 + 0x50) = *(uint *)(iVar1 + 0x50) | 0x71;
      }
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar4 < 0xd);
    iVar6 = iVar6 + 1;
    puVar7 = puVar7 + 0xd;
    if (0xc < iVar6) {
      return;
    }
  } while( true );
}
