#include "common.h"

#include "ghidra.h"
void func_80099B48(int param_1)

{
    extern u8 D_80063940[];
    extern u8 D_80100C48[];
    extern u8 D_80100C68[];
    extern u8 D_801010B0[];
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  
  iVar10 = 0;
  iVar3 = *(int *)((*D_801010B0) + (uint)*(byte *)(param_1 + 0x5d9) * 0x34);
  do {
    iVar9 = 0xc;
    iVar2 = iVar3 + 0x30;
    do {
      *(undefined1 *)(iVar2 + 3) = 0;
      iVar9 = iVar9 + -1;
      iVar2 = iVar2 + -4;
    } while (-1 < iVar9);
    iVar10 = iVar10 + 1;
    iVar3 = iVar3 + 0x34;
  } while (iVar10 < 0xd);
  iVar3 = 0;
  puVar11 = D_80100C68;
  iVar10 = 0x18;
  do {
    iVar2 = 0;
    pbVar8 = (byte *)(param_1 + 0x5d0 + iVar10);
    do {
      iVar9 = func_80020304(0x1d);
      iVar6 = 0;
      *pbVar8 = (D_80100C48)[iVar9];
      pbVar4 = pbVar8;
      do {
        iVar9 = iVar6 + iVar2 * 8;
        iVar6 = iVar6 + 1;
        pbVar4[1] = puVar11[iVar9];
        pbVar4 = pbVar8 + iVar6;
      } while (iVar6 < 8);
      iVar9 = 0;
      do {
        pbVar8[iVar9 + 9] = *(byte *)((uint)*pbVar8 * 0x3c + iVar9 + -0x7ff9c6b2);
        iVar6 = iVar9 + 1;
        pbVar8[iVar9 + 0xe] = *(byte *)((uint)*pbVar8 * 0x3c + iVar9 + -0x7ff9c6b2);
        iVar9 = iVar6;
      } while (iVar6 < 5);
      bVar1 = pbVar8[0xe];
      iVar9 = func_80020304(100);
      uVar7 = ((uint)bVar1 * iVar9) / 100;
      if (uVar7 == 0) {
        uVar5 = 1;
      }
      else {
        uVar5 = 0xff;
        if (uVar7 < 0x100) {
          uVar5 = uVar7;
        }
      }
      pbVar8[0xe] = (byte)uVar5;
      bVar1 = func_800CA408(pbVar8);
      pbVar8[0x13] = bVar1;
      iVar2 = iVar2 + 1;
      pbVar8 = pbVar8 + 0x7c;
    } while (iVar2 < 6);
    puVar11 = puVar11 + 0x30;
    iVar3 = iVar3 + 1;
    iVar10 = iVar10 + 0x2e8;
  } while (iVar3 < 2);
  return;
}
