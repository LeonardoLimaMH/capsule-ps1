#include "common.h"

#include "ghidra.h"
#define DAT_80069bb0 (*(s32 *)0x80069BB0)
#define DAT_80069bbe (*(u16 *)0x80069BBE)
#define DAT_8008ee6b (*(u8 *)0x8008EE6B)
#define DAT_8008f7ce (*(u8 *)0x8008F7CE)
#define DAT_801187ea (*(s16 *)0x801187EA)
#define D_80069AD4 (*(s32 *)0x80069AD4)
#define D_80069BB4 (*(s32 *)0x80069BB4)
#define D_801187E8 (*(u8 *)0x801187E8)
#define D_801187EC (*(s32 *)0x801187EC)
#define func_8002CC74 ((s32 (*)())0x8002CC74)
#define func_8002CD50 ((s32 (*)())0x8002CD50)
#define func_800B0F48 ((s32 (*)())0x800B0F48)
#define func_800B360C ((s32 (*)())0x800B360C)
int func_800B2ABC(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  s8 cVar7;
  byte bVar8;
  short sVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint local_30;

  iVar15 = param_1 + 0x5d0;
  local_30 = 1;
  uVar18 = (uint)*(byte *)(param_1 + 0xbca);
  iVar16 = 0;
  if (DAT_8008ee6b != 0) {
    local_30 = (uint)DAT_8008ee6b;
  }
  iVar17 = 0;
  if (local_30 != 0) {
    do {
      if (param_2 == 0) {
        if (D_80069BB4 == 0x660) {
          bVar8 = *(byte *)(param_4 + 0x15);
          bVar4 = *(byte *)(param_3 + 0x15);
          bVar5 = *(byte *)(param_4 + 0x16);
          bVar6 = *(byte *)(param_3 + 0x16);
          *(undefined1 *)(param_1 + 0xd74) = 0;
          iVar12 = func_800B0F48(param_1,param_3,param_4,(uint)bVar8 - (uint)bVar4,
                                 (uint)bVar5 - (uint)bVar6);
          DAT_801187ea = (short)(iVar12 << 9);
          iVar12 = iVar12 - (*(byte *)(iVar15 + uVar18 + 0x605) - 8);
          iVar14 = iVar12;
          if (iVar12 < 0) {
            iVar14 = iVar12 + 7;
          }
          iVar12 = iVar12 + (iVar14 >> 3) * -8;
          D_801187EC = 1;
          if (3 < iVar12 * 0x10000 >> 0x10) {
            D_801187EC = -1;
          }
          sVar9 = (short)iVar12;
          D_801187E8 = (ushort)((int)sVar9 << 4);
          if (3 < sVar9) {
            D_801187E8 = (8 - sVar9) * 0x10;
          }
          if (D_801187E8 < 0x10) {
            D_801187E8 = 0x10;
          }
          iVar12 = 0;
          iVar14 = iVar15;
          puVar10 = &D_80069AD4;
          do {
            puVar1 = puVar10 + 0x11;
            puVar10 = puVar10 + 1;
            iVar12 = iVar12 + 1;
            *(undefined4 *)(iVar14 + 0x78c) = *puVar1;
            iVar14 = iVar14 + 4;
          } while (iVar12 < 3);
          func_800B360C(iVar15,param_3,param_4);
        }
        bVar8 = *(s8 *)(param_1 + 0xd74) + 1;
        *(byte *)(param_1 + 0xd74) = bVar8;
        if (bVar8 == D_801187E8) {
          iVar16 = 1;
        }
      }
      else {
        iVar12 = 0;
        iVar14 = iVar15;
        puVar10 = &D_80069AD4;
        if (D_80069BB4 == 0x300) {
          do {
            iVar12 = iVar12 + 1;
            *(undefined4 *)(iVar14 + 0x77c) = puVar10[0x11];
            iVar14 = iVar14 + 4;
            puVar10 = puVar10 + 1;
          } while (iVar12 < 3);
          *(undefined1 *)(param_1 + 0xd74) = (undefined1)D_801187E8;
        }
        cVar7 = *(s8 *)(param_1 + 0xd74) + -1;
        *(s8 *)(param_1 + 0xd74) = cVar7;
        if (cVar7 == '\0') {
          iVar16 = 2;
        }
      }
      uVar11 = (uint)D_801187E8;
      DAT_80069bb0 = -((int)((uint)*(byte *)(param_1 + 0xd74) * -0x32) / (int)uVar11);
      iVar12 = 0;
      D_80069BB4 = 0x660 - ((uint)*(byte *)(param_1 + 0xd74) * 0x360) / uVar11;
      iVar14 = iVar15;
      puVar10 = &D_80069AD4;
      do {
        piVar2 = (int *)(iVar14 + 0x77c);
        piVar3 = (int *)(iVar14 + 0x78c);
        iVar14 = iVar14 + 4;
        iVar12 = iVar12 + 1;
        puVar10[0x11] =
             *piVar3 + (int)((*piVar2 - *piVar3) * (uint)*(byte *)(param_1 + 0xd74)) / (int)uVar11;
        puVar10 = puVar10 + 1;
      } while (iVar12 < 3);
      if (D_801187EC == 1) {
        iVar13 = (uint)*(byte *)(iVar15 + uVar18 + 0x605) * 0x200;
        iVar12 = (int)DAT_801187ea - (iVar13 + -0x1000);
        iVar14 = iVar12;
        if (iVar12 < 0) {
          iVar14 = iVar12 + 0xfff;
        }
        sVar9 = (short)iVar13 +
                (short)((int)((iVar12 + (iVar14 >> 0xc) * -0x1000) *
                             (uint)*(byte *)(param_1 + 0xd74)) / (int)(uint)D_801187E8);
      }
      else {
        iVar12 = (uint)*(byte *)(iVar15 + uVar18 + 0x605) * 0x200;
        iVar13 = iVar12 - (DAT_801187ea + -0x1000);
        iVar14 = iVar13;
        if (iVar13 < 0) {
          iVar14 = iVar13 + 0xfff;
        }
        sVar9 = (short)iVar12 +
                (short)((int)-((iVar13 + (iVar14 >> 0xc) * -0x1000) *
                              (uint)*(byte *)(param_1 + 0xd74)) / (int)(uint)D_801187E8);
      }
      iVar14 = DAT_80069bb0;
      if (DAT_80069bb0 < 0) {
        iVar14 = DAT_80069bb0 + 0xfff;
      }
      DAT_80069bb0 = DAT_80069bb0 + (iVar14 >> 0xc) * -0x1000;
      iVar14 = D_80069BB4;
      if (D_80069BB4 < 0) {
        iVar14 = D_80069BB4 + 0xfff;
      }
      D_80069BB4 = D_80069BB4 + (iVar14 >> 0xc) * -0x1000;
      iVar14 = (int)(short)(sVar9 + 0x1000);
      if (iVar14 < 0) {
        iVar14 = iVar14 + 0xfff;
      }
      DAT_80069bbe = sVar9 + 0x1000 + (short)(iVar14 >> 0xc) * -0x1000;
    } while ((iVar16 == 0) && (iVar17 = iVar17 + 1, iVar17 < (int)local_30));
  }
  DAT_8008f7ce = 1;
  func_8002CC74();
  func_8002CD50();
  return iVar16;
}
