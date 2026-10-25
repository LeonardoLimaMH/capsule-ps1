#include "common.h"

#include "ghidra.h"
void func_800DFB80(undefined4 param_1,uint param_2)

{
    extern u8 D_80092008[];
  undefined2 uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  
  puVar7 = (uint *)(D_80092008 + (param_2 & 0xffff) * 0x44);
  iVar6 = 0;
  uVar5 = (uint)(short)((ushort)(*puVar7 >> 0xb) & 0x3f);
  *puVar7 = *puVar7 & 0xff81f81f | uVar5 << 0x11;
  if (uVar5 >> 1 != 0) {
    iVar3 = 0;
    do {
      iVar3 = iVar3 >> 0x10;
      iVar4 = uVar5 - (iVar3 + 1);
      uVar1 = *(undefined2 *)((int)puVar7 + iVar3 * 2 + 4);
      *(undefined2 *)((int)puVar7 + iVar3 * 2 + 4) = *(undefined2 *)((int)puVar7 + iVar4 * 2 + 4);
      *(undefined2 *)((int)puVar7 + iVar4 * 2 + 4) = uVar1;
      uVar2 = *(ushort *)((int)puVar7 + iVar3 * 2 + 4);
      *(ushort *)((int)puVar7 + iVar3 * 2 + 4) = uVar2 & 0xfff8 | (uVar2 & 7) + 4 & 7;
      uVar2 = *(ushort *)((int)puVar7 + iVar4 * 2 + 4);
      *(ushort *)((int)puVar7 + iVar4 * 2 + 4) = uVar2 & 0xfff8 | (uVar2 & 7) + 4 & 7;
      iVar6 = iVar6 + 1;
      iVar3 = iVar6 * 0x10000;
    } while (iVar6 * 0x10000 >> 0x10 < (int)(uVar5 >> 1));
  }
  return;
}
