#include "common.h"

#include "ghidra.h"
void func_800DF914(undefined4 param_1,uint param_2)

{
    extern u8 D_80092008[];
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  ushort uVar10;
  
  uVar10 = 0;
  puVar9 = (uint *)(D_80092008 + (param_2 & 0xffff) * 0x44);
  iVar8 = 0;
  uVar7 = *puVar9 >> 5 & 0x3f;
  if ((*puVar9 >> 0x11 & 0x3f) != 0) {
    iVar5 = 0;
    do {
      sVar1 = *(short *)((int)puVar9 + (iVar5 >> 0xf) + 4);
      if (sVar1 < 0) {
        *(short *)((int)puVar9 + ((int)(uVar7 << 0x10) >> 0xf) + 4) = sVar1;
        uVar7 = uVar7 + 1;
        uVar10 = uVar10 + 1;
      }
      iVar8 = iVar8 + 1;
      iVar5 = iVar8 * 0x10000;
    } while (iVar8 * 0x10000 >> 0x10 < (int)(*puVar9 >> 0x11 & 0x3f));
  }
  uVar7 = (uint)(short)uVar10;
  *puVar9 = *puVar9 & 0xff8007ff | (uVar7 & 0x3f) << 0x11 | (uVar7 & 0x3f) << 0xb;
  uVar4 = *(ushort *)((int)puVar9 + uVar7 * 2 + 2);
  *(ushort *)((int)puVar9 + uVar7 * 2 + 4) = uVar4;
  uVar2 = *(ushort *)((int)puVar9 + (uVar7 - 1) * 2 + 4);
  uVar3 = uVar2 >> 9;
  uVar2 = uVar2 >> 3;
  if ((uVar2 & 0x3f) == 0) {
    uVar4 = uVar4 | 0x1f8;
L800DFA4C:
    *(ushort *)((int)puVar9 + uVar7 * 2 + 4) = uVar4;
  }
  else if ((uVar2 & 0x3f) == 7) {
    uVar4 = uVar4 & 0xfe07 | 0x40;
    goto L800DFA4C;
  }
  if ((uVar3 & 0x3f) == 0) {
    puVar6 = (undefined1 *)((int)puVar9 + ((int)((uint)uVar10 << 0x10) >> 0xf));
    uVar4 = *(ushort *)(puVar6 + 4) | 0x7e00;
  }
  else {
    if ((uVar3 & 0x3f) != 7) goto L800DFAA8;
    puVar6 = (undefined1 *)((int)puVar9 + ((int)((uint)uVar10 << 0x10) >> 0xf));
    uVar4 = *(ushort *)(puVar6 + 4) & 0x81ff | 0x1000;
  }
  *(ushort *)(puVar6 + 4) = uVar4;
L800DFAA8:
  iVar8 = (int)((uint)uVar10 << 0x10) >> 0xf;
  *(ushort *)((int)puVar9 + iVar8 + 4) = *(ushort *)((int)puVar9 + iVar8 + 4) | 0x8000;
  uVar7 = *puVar9;
  *puVar9 = uVar7 & 0xff8007ff | ((uVar7 >> 0x11 & 0x3f) + 1 & 0x3f) << 0x11 |
            (((uVar7 & 0x1f800) >> 0xb) + 1 & 0x3f) << 0xb;
  return;
}
