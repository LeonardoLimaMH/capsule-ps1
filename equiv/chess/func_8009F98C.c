#include "common.h"

#include "ghidra.h"
void func_8009F98C(int param_1,int param_2)

{
    extern u8 D_8006D688[];
    extern u8 D_80101A70[];
    extern u8 D_80101A76[];
    extern u8 D_80101A90[];
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  int iVar11;
  short *psVar12;
  int iVar13;
  undefined2 *puVar14;
  short *psVar15;
  undefined2 *puVar16;
  int iVar17;
  int aiStack_40 [4];
  int aiStack_30 [4];
  
  iVar8 = 0;
  piVar6 = aiStack_40;
  do {
    *piVar6 = 0;
    piVar6[4] = 0;
    iVar8 = iVar8 + 1;
    piVar6 = piVar6 + 1;
  } while (iVar8 < 3);
  iVar11 = 0;
  iVar8 = param_2;
  if (*(char *)(param_2 + 0x6a) != '\0') {
    do {
      iVar13 = *(byte *)(iVar8 + 0x2e) - 1;
      aiStack_40[iVar13] = aiStack_40[iVar13] + (int)*(short *)(iVar8 + 0x30);
      iVar4 = (int)(*(byte *)(iVar8 + 0x32) + 1) >> 1;
      if (aiStack_30[iVar13] < iVar4) {
        aiStack_30[iVar13] = iVar4;
      }
      iVar11 = iVar11 + 1;
      iVar8 = iVar8 + 6;
    } while (iVar11 < (int)(uint)*(byte *)(param_2 + 0x6a));
  }
  iVar8 = 0;
  iVar4 = 0;
  piVar6 = aiStack_40;
  iVar17 = 0;
  iVar11 = 0;
  puVar14 = (undefined2 *)((*D_80101A76) + 0x18);
  puVar16 = (undefined2 *)((*D_80101A76) + 0x14);
  psVar12 = (short *)((*D_80101A76) + 0x12);
  psVar15 = (short *)((*D_80101A76) + 0xe);
  iVar13 = 0;
  do {
    if (piVar6[4] != 0) {
      iVar9 = 0;
      puVar10 = (undefined2 *)(D_8006D688 + iVar17);
      do {
        iVar7 = iVar13 + iVar9;
        iVar9 = iVar9 + 1;
        *(undefined2 *)((*D_80101A76) + iVar7 * 2) = *puVar10;
        puVar10 = puVar10 + 1;
      } while (iVar9 < 7);
      iVar9 = *piVar6;
      if (iVar9 < 0) {
        iVar9 = -iVar9;
      }
      sVar2 = (short)iVar9;
      if (iVar9 < 100) {
        if (iVar9 < 10) {
          *psVar15 = 0;
          *(undefined2 *)((*D_80101A76) + iVar11 + 0x10) = 0;
          sVar2 = sVar2 + 0xc2;
        }
        else {
          *psVar15 = 0;
          sVar1 = (short)(iVar9 / 10);
          *(short *)((*D_80101A76) + iVar11 + 0x10) = sVar1 + 0xc2;
          sVar2 = sVar2 + sVar1 * -10 + 0xc2;
        }
      }
      else {
        iVar7 = iVar9 / 10 + 0xc2;
        *psVar15 = (short)(iVar9 / 100) + 0xc2;
        sVar2 = sVar2 + (short)(iVar9 / 10) * -10 + 0xc2;
        *(short *)((*D_80101A76) + iVar11 + 0x10) = (short)iVar7 + (short)(iVar7 / 10) * -10;
      }
      *psVar12 = sVar2;
      if (*piVar6 < 1) {
        *puVar16 = 0x71;
        *(undefined2 *)((*D_80101A76) + iVar11 + 0x16) = 0x57;
        uVar3 = 0xa2;
      }
      else {
        *puVar16 = 0x53;
        *(undefined2 *)((*D_80101A76) + iVar11 + 0x16) = 0x74;
        uVar3 = 0x88;
      }
      *puVar14 = uVar3;
      *(undefined2 *)(D_80101A90 + iVar11) = 0x2a3;
      *(undefined2 *)(iVar11 + -0x7fefe56e) = 0xd2;
      *(undefined2 *)(iVar11 + -0x7fefe56c) = 2;
      *(undefined2 *)(iVar11 + -0x7fefe56a) = 0x28;
      *(short *)(iVar11 + -0x7fefe568) = (short)piVar6[4] + 0xc2;
      *(undefined2 *)(iVar11 + -0x7fefe566) = 0x70;
      *(undefined2 *)(iVar11 + -0x7fefe564) = 0xa6;
      *(undefined2 *)(iVar11 + -0x7fefe562) = 0xa2;
      if (iVar8 < 2) {
        *(undefined2 *)(iVar11 + -0x7fefe560) = 0xfff0;
      }
      iVar11 = iVar11 + 0x2c;
      puVar14 = puVar14 + 0x16;
      puVar16 = puVar16 + 0x16;
      psVar12 = psVar12 + 0x16;
      psVar15 = psVar15 + 0x16;
      iVar13 = iVar13 + 0x16;
      iVar8 = iVar8 + 1;
    }
    piVar6 = piVar6 + 1;
    iVar4 = iVar4 + 1;
    iVar17 = iVar17 + 0xe;
  } while (iVar4 < 3);
  if (iVar8 < 3) {
    iVar11 = iVar8 * 0x16;
    do {
      iVar13 = 3;
      iVar4 = iVar11 + 3;
      do {
        *(undefined2 *)((int)D_80101A70 + iVar4 * 2) = 0;
        iVar13 = iVar13 + 1;
        iVar4 = iVar11 + iVar13;
      } while (iVar13 < 0x18);
      iVar8 = iVar8 + 1;
      iVar11 = iVar11 + 0x16;
    } while (iVar8 < 3);
  }
  uVar5 = func_8001F8B0(0x19,7);
  *(undefined4 *)(param_1 + 0x14) = uVar5;
  return;
}
