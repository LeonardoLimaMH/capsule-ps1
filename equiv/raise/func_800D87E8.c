#include "common.h"

#include "ghidra.h"
void func_800D87E8(int param_1,int param_2,int param_3)

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
  short *psVar11;
  short *psVar12;
  short *psVar13;
  ushort *puVar14;
  ushort *puVar15;
  short *psVar16;
  short *psVar17;
  short *psVar18;
  int iVar19;
  
  psVar18 = (short *)(param_3 + 8);
  iVar19 = 0;
  psVar17 = (short *)(*(int *)(param_1 + 0xb4) + param_2 * 0x20);
  psVar16 = psVar17;
  do {
    iVar7 = rand();
    iVar8 = iVar7;
    if (iVar7 < 0) {
      iVar8 = iVar7 + 0x7ff;
    }
    *psVar16 = (short)iVar7 + (short)(iVar8 >> 0xb) * -0x800 + -0x400;
    iVar7 = rand();
    iVar8 = iVar7;
    if (iVar7 < 0) {
      iVar8 = iVar7 + 0x7ff;
    }
    psVar16[1] = (short)iVar7 + (short)(iVar8 >> 0xb) * -0x800 + -0x400;
    iVar7 = rand();
    iVar8 = iVar7;
    if (iVar7 < 0) {
      iVar8 = iVar7 + 0x3ff;
    }
    psVar16[2] = (short)iVar7 + (short)(iVar8 >> 10) * -0x400;
    iVar19 = iVar19 + 1;
    psVar16 = psVar16 + 4;
  } while (iVar19 < 4);
  psVar16 = (short *)(*(int *)(param_1 + 0xb8) + param_2 * 0x20);
  if ((*D_80069B28) == 1) {
    iVar19 = 0;
    psVar13 = psVar16 + 2;
    psVar12 = psVar17 + 2;
    psVar11 = (short *)(param_3 + 0xc);
    do {
      iVar19 = iVar19 + 1;
      sVar1 = *psVar18;
      psVar18 = psVar18 + 4;
      sVar2 = *psVar17;
      psVar17 = psVar17 + 4;
      *psVar16 = (sVar1 - sVar2) * 2;
      psVar16 = psVar16 + 4;
      psVar13[-1] = (psVar11[-1] - psVar12[-1]) * 2;
      sVar1 = *psVar11;
      psVar11 = psVar11 + 4;
      sVar2 = *psVar12;
      psVar12 = psVar12 + 4;
      *psVar13 = (sVar1 - sVar2) * 2;
      psVar13 = psVar13 + 4;
    } while (iVar19 < 4);
  }
  else if ((1 < (*D_80069B28)) && ((*D_80069B28) == 2)) {
    iVar19 = 0;
    psVar11 = psVar16 + 2;
    puVar15 = (ushort *)(psVar17 + 2);
    puVar14 = (ushort *)(param_3 + 0xc);
    do {
      iVar19 = iVar19 + 1;
      *psVar16 = *psVar17 - *psVar18;
      psVar16 = psVar16 + 4;
      psVar11[-1] = puVar15[-1] - puVar14[-1];
      uVar3 = *puVar14;
      puVar14 = puVar14 + 4;
      uVar4 = *puVar15;
      puVar15 = puVar15 + 4;
      uVar9 = (uint)uVar4 - (uint)uVar3;
      *psVar11 = (short)uVar9;
      uVar5 = (int)psVar18 + 3U & 3;
      uVar10 = (uint)psVar18 & 3;
      uVar9 = (*(int *)(((int)psVar18 + 3U) - uVar5) << (3 - uVar5) * 8 |
              uVar9 & 0xffffffffU >> (uVar5 + 1) * 8) & -1 << (4 - uVar10) * 8 |
              *(uint *)((int)psVar18 - uVar10) >> uVar10 * 8;
      uVar5 = (int)psVar18 + 7U & 3;
      uVar10 = (uint)(psVar18 + 2) & 3;
      uVar10 = (*(int *)(((int)psVar18 + 7U) - uVar5) << (3 - uVar5) * 8 |
               (uint)uVar3 & 0xffffffffU >> (uVar5 + 1) * 8) & -1 << (4 - uVar10) * 8 |
               *(uint *)((int)(psVar18 + 2) - uVar10) >> uVar10 * 8;
      uVar5 = (int)psVar17 + 3U & 3;
      puVar6 = (uint *)(((int)psVar17 + 3U) - uVar5);
      *puVar6 = *puVar6 & -1 << (uVar5 + 1) * 8 | uVar9 >> (3 - uVar5) * 8;
      uVar5 = (uint)psVar17 & 3;
      *(uint *)((int)psVar17 - uVar5) =
           *(uint *)((int)psVar17 - uVar5) & 0xffffffffU >> (4 - uVar5) * 8 | uVar9 << uVar5 * 8;
      uVar5 = (int)psVar17 + 7U & 3;
      puVar6 = (uint *)(((int)psVar17 + 7U) - uVar5);
      *puVar6 = *puVar6 & -1 << (uVar5 + 1) * 8 | uVar10 >> (3 - uVar5) * 8;
      uVar5 = (uint)(psVar17 + 2) & 3;
      puVar6 = (uint *)((int)(psVar17 + 2) - uVar5);
      *puVar6 = *puVar6 & 0xffffffffU >> (4 - uVar5) * 8 | uVar10 << uVar5 * 8;
      psVar18 = psVar18 + 4;
      psVar17 = psVar17 + 4;
      psVar11 = psVar11 + 4;
    } while (iVar19 < 4);
  }
  (*D_80069BB4) = (*D_80069EB0);
  return;
}
