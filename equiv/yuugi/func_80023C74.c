#include "common.h"

#include "ghidra.h"
void func_80023C74(int param_1,int param_2,int param_3)

{
    extern s32 D_80069B28[];
    extern s32 D_80069BB4[];
    extern s32 D_80069EB0[];
  short sVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  short *psVar12;
  short *psVar13;
  short *psVar14;
  ushort *puVar15;
  ushort *puVar16;
  short *psVar17;
  short *psVar18;
  short *psVar19;
  
  iVar11 = *(int *)(param_1 + 8);
  if ((iVar11 == 1) || ((psVar19 = (short *)(param_3 + 0x20), iVar11 < 2 && (iVar11 == 0)))) {
    psVar19 = (short *)(param_3 + 8);
  }
  iVar11 = 0;
  psVar18 = (short *)(*(int *)(param_1 + 0xb4) + param_2 * 0x20);
  psVar17 = psVar18;
  do {
    iVar7 = rand();
    iVar8 = iVar7;
    if (iVar7 < 0) {
      iVar8 = iVar7 + 0x7ff;
    }
    *psVar17 = (short)iVar7 + (short)(iVar8 >> 0xb) * -0x800 + -0x400;
    iVar7 = rand();
    iVar8 = iVar7;
    if (iVar7 < 0) {
      iVar8 = iVar7 + 0x7ff;
    }
    psVar17[1] = (short)iVar7 + (short)(iVar8 >> 0xb) * -0x800 + -0x400;
    iVar7 = rand();
    iVar8 = iVar7;
    if (iVar7 < 0) {
      iVar8 = iVar7 + 0x3ff;
    }
    psVar17[2] = (short)iVar7 + (short)(iVar8 >> 10) * -0x400;
    iVar11 = iVar11 + 1;
    psVar17 = psVar17 + 4;
  } while (iVar11 < 4);
  psVar17 = (short *)(*(int *)(param_1 + 0xb8) + param_2 * 0x20);
  if ((*D_80069B28) == 1) {
    iVar11 = 0;
    psVar14 = psVar17 + 2;
    psVar13 = psVar18 + 2;
    psVar12 = psVar19 + 2;
    do {
      iVar11 = iVar11 + 1;
      sVar1 = *psVar19;
      psVar19 = psVar19 + 4;
      sVar2 = *psVar18;
      psVar18 = psVar18 + 4;
      *psVar17 = (sVar1 - sVar2) * 2;
      psVar17 = psVar17 + 4;
      psVar14[-1] = (psVar12[-1] - psVar13[-1]) * 2;
      sVar1 = *psVar12;
      psVar12 = psVar12 + 4;
      sVar2 = *psVar13;
      psVar13 = psVar13 + 4;
      *psVar14 = (sVar1 - sVar2) * 2;
      psVar14 = psVar14 + 4;
    } while (iVar11 < 4);
  }
  else if ((1 < (*D_80069B28)) && ((*D_80069B28) == 2)) {
    iVar11 = 0;
    psVar12 = psVar17 + 2;
    puVar16 = (ushort *)(psVar18 + 2);
    puVar15 = (ushort *)(psVar19 + 2);
    do {
      iVar11 = iVar11 + 1;
      *psVar17 = *psVar18 - *psVar19;
      psVar17 = psVar17 + 4;
      psVar12[-1] = puVar16[-1] - puVar15[-1];
      uVar3 = *puVar15;
      puVar15 = puVar15 + 4;
      uVar4 = *puVar16;
      puVar16 = puVar16 + 4;
      uVar9 = (uint)uVar4 - (uint)uVar3;
      *psVar12 = (short)uVar9;
      uVar5 = (int)psVar19 + 3U & 3;
      uVar10 = (uint)psVar19 & 3;
      uVar9 = (*(int *)(((int)psVar19 + 3U) - uVar5) << (3 - uVar5) * 8 |
              uVar9 & 0xffffffffU >> (uVar5 + 1) * 8) & -1 << (4 - uVar10) * 8 |
              *(uint *)((int)psVar19 - uVar10) >> uVar10 * 8;
      uVar5 = (int)psVar19 + 7U & 3;
      uVar10 = (uint)(psVar19 + 2) & 3;
      uVar10 = (*(int *)(((int)psVar19 + 7U) - uVar5) << (3 - uVar5) * 8 |
               (uint)uVar3 & 0xffffffffU >> (uVar5 + 1) * 8) & -1 << (4 - uVar10) * 8 |
               *(uint *)((int)(psVar19 + 2) - uVar10) >> uVar10 * 8;
      uVar5 = (int)psVar18 + 3U & 3;
      puVar6 = (uint *)(((int)psVar18 + 3U) - uVar5);
      *puVar6 = *puVar6 & -1 << (uVar5 + 1) * 8 | uVar9 >> (3 - uVar5) * 8;
      uVar5 = (uint)psVar18 & 3;
      *(uint *)((int)psVar18 - uVar5) =
           *(uint *)((int)psVar18 - uVar5) & 0xffffffffU >> (4 - uVar5) * 8 | uVar9 << uVar5 * 8;
      uVar5 = (int)psVar18 + 7U & 3;
      puVar6 = (uint *)(((int)psVar18 + 7U) - uVar5);
      *puVar6 = *puVar6 & -1 << (uVar5 + 1) * 8 | uVar10 >> (3 - uVar5) * 8;
      uVar5 = (uint)(psVar18 + 2) & 3;
      puVar6 = (uint *)((int)(psVar18 + 2) - uVar5);
      *puVar6 = *puVar6 & 0xffffffffU >> (4 - uVar5) * 8 | uVar10 << uVar5 * 8;
      psVar19 = psVar19 + 4;
      psVar18 = psVar18 + 4;
      psVar12 = psVar12 + 4;
    } while (iVar11 < 4);
  }
  (*D_80069BB4) = (undefined4)(*D_80069EB0);
  return;
}
