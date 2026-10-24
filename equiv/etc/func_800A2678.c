#include "common.h"

#include "ghidra.h"
void func_800A2678(int param_1)

{
    extern u8 D_8006B1FC[];
    extern u8 D_8006B2A4[];
    extern u8 D_8006DB34[];
    extern u8 D_8006DDD4[];
    extern u8 D_800B3B38[];
    extern u8 D_800B3B70[];
  byte bVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  byte bVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  
  pcVar10 = (char *)(param_1 + 0x5d0);
  iVar13 = 0;
  iVar18 = 0x26c;
  iVar17 = 0x50;
  iVar15 = 0;
  iVar16 = 0;
  puVar12 = D_800B3B38;
  do {
    iVar9 = 0;
    iVar14 = 0;
    iVar11 = iVar16;
    do {
      if ((iVar13 == 0) || (cVar3 = *pcVar10, cVar3 == '\x02')) {
        if (pcVar10[iVar13 + 0xc] == '\0') {
          if (iVar9 == 5) {
            iVar7 = (int)*(short *)(puVar12 + 1);
          }
          else {
            iVar7 = iVar9;
            if (*(short *)(puVar12 + 1) <= iVar9) {
              iVar7 = iVar9 + 1;
            }
          }
          pcVar8 = D_8006B1FC + iVar7 * 0xe;
          iVar7 = iVar11;
          goto L800A2898;
        }
        if (iVar9 == 5) {
          pcVar8 = (char *)(param_1 + iVar17 +
                           *(short *)(D_800B3B70 +
                                     *(short *)(puVar12 + 1) * 2 + iVar15) * 0xe);
          pcVar10[iVar18 + 0x44] =
               (char)*(short *)(D_800B3B70 + *(short *)(puVar12 + 1) * 2 + iVar15);
        }
        else {
          iVar7 = iVar9;
          if (*(short *)(puVar12 + 1) <= iVar9) {
            iVar7 = iVar9 + 1;
          }
          pcVar8 = (char *)(param_1 + iVar17 +
                           *(short *)(D_800B3B70 + iVar7 * 2 + iVar15) * 0xe);
          pcVar10[iVar11 + 0x44] = (char)*(short *)(D_800B3B70 + iVar7 * 2 + iVar15);
        }
      }
      else {
        pcVar8 = D_8006DB34 + (uint)*(byte *)(param_1 + 0x5e5) * 0x54 + iVar14;
        if (cVar3 == '\0') {
          iVar7 = iVar9 << 5;
          if (((*(byte *)(param_1 + 0x5e5) == 7) && (iVar7 = iVar9 << 5, iVar9 == 1)) &&
             (iVar7 = 0x20, (uint)*(byte *)(param_1 + 0x5d8) % 3 == 2)) {
L800A2880:
            pcVar8 = D_8006DDD4;
            iVar7 = iVar9 << 5;
          }
L800A2888:
          iVar7 = iVar7 - iVar9;
        }
        else {
          iVar7 = iVar9 << 5;
          if ((cVar3 != '\x01') || (iVar7 = iVar9 * 0x20, *(char *)(param_1 + 0x5d9) != '\n'))
          goto L800A2888;
          iVar7 = iVar9 * 0x1f;
          if (iVar9 == 1) goto L800A2880;
        }
        iVar7 = iVar7 * 4 + iVar16;
L800A2898:
        pcVar10[iVar7 + 0x44] = '\0';
      }
      iVar7 = 0;
      pcVar4 = pcVar10 + iVar11;
      pcVar4[0x18] = *pcVar8;
      pcVar6 = pcVar4;
      do {
        iVar2 = iVar7 + 1;
        iVar7 = iVar7 + 1;
        pcVar6[0x19] = pcVar8[iVar2];
        pcVar6 = pcVar4 + iVar7;
      } while (iVar7 < 8);
      iVar7 = 0;
      pcVar6 = pcVar8;
      do {
        iVar2 = iVar7 + iVar11;
        pcVar10[iVar2 + 0x21] = pcVar6[9];
        iVar7 = iVar7 + 1;
        pcVar10[iVar2 + 0x26] = pcVar6[9];
        pcVar6 = pcVar8 + iVar7;
      } while (iVar7 < 5);
      bVar1 = *(byte *)((uint)(byte)pcVar10[iVar11 + 0x18] * 0x58 + -0x7ff94d49);
      bVar5 = bVar1 & 3;
      if (bVar5 == 1) {
        pcVar10[iVar11 + 0x2b] = '\x01';
      }
      else if (bVar5 < 2) {
        cVar3 = -1;
        if ((bVar1 & 3) == 0) {
code_r0x800a2978:
          pcVar10[iVar11 + 0x2b] = cVar3;
        }
      }
      else if (bVar5 == 2) {
        cVar3 = pcVar10[iVar11 + 0x25];
        goto code_r0x800a2978;
      }
      iVar11 = iVar11 + 0x7c;
      iVar9 = iVar9 + 1;
      iVar14 = iVar14 + 0xe;
    } while (iVar9 < 6);
    iVar18 = iVar18 + 0x2e8;
    iVar17 = iVar17 + 700;
    iVar15 = iVar15 + 0xc;
    iVar16 = iVar16 + 0x2e8;
    iVar13 = iVar13 + 1;
    puVar12 = (undefined4 *)((int)puVar12 + 2);
    if (1 < iVar13) {
      return;
    }
  } while( true );
}
