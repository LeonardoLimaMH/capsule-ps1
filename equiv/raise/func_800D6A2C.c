#include "common.h"

#include "ghidra.h"
#define DAT_8008ed68 (*(s32 *)0x8008ED68)
#define DAT_800900c0 (*(s32 *)0x800900C0)
#define DAT_80101058 (*(u16 *)0x80101058)
#define DAT_8010105a (*(u16 *)0x8010105A)
#define DAT_8010105c (*(u16 *)0x8010105C)
#define DAT_80101060 (*(u16 *)0x80101060)
#define DAT_80101062 (*(u16 *)0x80101062)
#define DAT_80101064 (*(u16 *)0x80101064)
#define DAT_80101068 (*(u16 *)0x80101068)
#define DAT_8010106a (*(u16 *)0x8010106A)
#define DAT_8010106c (*(u16 *)0x8010106C)
#define DAT_80101070 (*(u16 *)0x80101070)
#define DAT_80101072 (*(u16 *)0x80101072)
#define DAT_80101074 (*(u16 *)0x80101074)
#define DAT_801052fa (*(s16 *)0x801052FA)
#define D_8006AF80 (*(u16 *)0x8006AF80)
#define D_801052F8 (*(s16 *)0x801052F8)
#define D_80105300 (*(u8 *)0x80105300)
extern s32 AddPrim();
extern s32 GetTPage();
extern s32 PopMatrix();
extern s32 PushMatrix();
extern s32 RotTransPers4();
extern s32 SetPolyG4();
extern s32 SetSemiTrans();
#define func_80018610 ((s32 (*)())0x80018610)
#define func_8002CEC0 ((s32 (*)())0x8002CEC0)
#define func_80034AB0 ((s32 (*)())0x80034AB0)
#define func_800E36E4 ((s32 (*)())0x800E36E4)
extern s32 rand();
undefined4
func_800D6A2C(uint param_1,short param_2,ushort param_3,short param_4,byte param_5,ushort param_6)

{
  bool bVar1;
  short sVar2;
  ushort uVar3;
  undefined1 uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  short *psVar15;
  int iVar16;
  uint uVar17;
  short *psVar18;
  undefined2 local_90;
  undefined2 local_8e;
  undefined2 local_8c;
  undefined2 local_8a;
  undefined2 local_88;
  undefined2 local_86;
  undefined2 local_84;
  undefined2 local_82;
  undefined1 auStack_80 [4];
  undefined1 auStack_7c [4];
  short local_78;
  ushort local_70;
  short local_68;
  byte local_60;
  undefined2 local_58;
  short local_50;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;

  local_60 = param_5;
  if (param_5 != 0) {
    local_78 = param_2;
    local_70 = param_3;
    local_68 = param_4;
    if (param_6 == 0) {
      func_80034AB0(7);
    }
    iVar8 = (param_1 & 0xffff) * 0x79c;
    iVar9 = func_800E36E4((param_1 & 0xffff) == (uint)D_8006AF80);
    PushMatrix();
    func_8002CEC0(&DAT_800900c0 + iVar9 * 0x2f);
    uVar3 = local_70;
    sVar5 = local_78;
    if (param_6 < 10) {
      local_50 = param_6 * 0x32 + -500;
    }
    else {
      local_50 = -100;
    }
    iVar9 = 0;
    if ((local_60 & 0x10) == 0) {
      if (local_60 < 5) {
        if (param_6 == 0) {
          iVar9 = 0;
          psVar15 = &D_801052F8;
          do {
            iVar9 = iVar9 + 1;
            iVar10 = rand();
            iVar10 = iVar10 * 0xd + 7;
            *psVar15 = ((short)iVar10 + (short)(iVar10 / 0x15) * -0x15 + -10) * 100;
            psVar15 = psVar15 + 1;
          } while (iVar9 < 4);
        }
        iVar10 = (int)local_78;
        iVar9 = (int)(short)local_70;
        psVar15 = &D_801052F8;
        psVar18 = &DAT_801052fa;
        do {
          sVar5 = 0x32;
          if (*psVar18 < 0) {
            sVar5 = -0x32;
          }
          *(short *)(&DAT_80101058 + iVar8) = *psVar15 + sVar5;
          *(short *)(&DAT_8010105a + iVar8) = local_68 + -1000;
          sVar5 = -0x32;
          if (*psVar15 < 0) {
            sVar5 = 0x32;
          }
          *(short *)(&DAT_8010105c + iVar8) = *psVar18 + sVar5;
          sVar5 = -0x32;
          if (*psVar18 < 0) {
            sVar5 = 0x32;
          }
          *(short *)(&DAT_80101060 + iVar8) = *psVar15 + sVar5;
          *(short *)(&DAT_80101062 + iVar8) = local_68 + -1000;
          sVar5 = *psVar18 + 0x32;
          if (*psVar15 < 0) {
            sVar5 = *psVar18 + -0x32;
          }
          iVar14 = local_50 + 0x32;
          *(short *)(&DAT_80101064 + iVar8) = sVar5;
          *(short *)(&DAT_8010106a + iVar8) = local_68 + local_50;
          *(short *)(&DAT_80101072 + iVar8) = local_68 + local_50;
          *(short *)(&DAT_80101068 + iVar8) =
               local_78 - (short)((iVar14 * (*(short *)(&DAT_80101058 + iVar8) - iVar10)) / 900);
          *(ushort *)(&DAT_8010106c + iVar8) =
               local_70 - (short)((iVar14 * (*(short *)(&DAT_8010105c + iVar8) - iVar9)) / 900);
          *(short *)(&DAT_80101070 + iVar8) =
               local_78 - (short)((iVar14 * (*(short *)(&DAT_80101060 + iVar8) - iVar10)) / 900);
          *(ushort *)(&DAT_80101074 + iVar8) =
               local_70 - (short)((iVar14 * (*(short *)(&DAT_80101064 + iVar8) - iVar9)) / 900);
          iVar14 = RotTransPers4(&DAT_80101058 + iVar8,&DAT_80101060 + iVar8,&DAT_80101068 + iVar8,
                                 &DAT_80101070 + iVar8,&local_90,&local_8c,&local_88,&local_84,
                                 auStack_80,auStack_7c);
          iVar16 = *(int *)(DAT_8008ed68 + 0x1090);
          uVar17 = 0;
          if ((iVar16 != 0) && (iVar16 + 0x24U <= DAT_8008ed68 + 0x4594U)) {
            uVar17 = iVar16 + 0x24U;
          }
          *(uint *)(DAT_8008ed68 + 0x1090) = uVar17;
          SetPolyG4(iVar16);
          SetSemiTrans(iVar16,1);
          local_58 = GetTPage(0,1,0,0);
          if (local_60 == 2) {
            uVar4 = 0x40;
            *(undefined1 *)(iVar16 + 4) = 0;
            *(undefined1 *)(iVar16 + 5) = 0;
            *(undefined1 *)(iVar16 + 6) = 0;
            *(undefined1 *)(iVar16 + 0xc) = 0;
            *(undefined1 *)(iVar16 + 0xd) = 0;
            *(undefined1 *)(iVar16 + 0xe) = 0;
            *(undefined1 *)(iVar16 + 0x14) = 0x40;
            *(undefined1 *)(iVar16 + 0x15) = 0xff;
            *(undefined1 *)(iVar16 + 0x16) = 0x40;
            *(undefined1 *)(iVar16 + 0x1c) = 0x40;
            *(undefined1 *)(iVar16 + 0x1d) = 0xff;
LAB_800d6f58:
            *(undefined1 *)(iVar16 + 0x1e) = uVar4;
          }
          else if (local_60 < 3) {
            if (local_60 == 1) {
              uVar4 = 0x40;
              *(undefined1 *)(iVar16 + 4) = 0;
              *(undefined1 *)(iVar16 + 5) = 0;
              *(undefined1 *)(iVar16 + 6) = 0;
              *(undefined1 *)(iVar16 + 0xc) = 0;
              *(undefined1 *)(iVar16 + 0xd) = 0;
              *(undefined1 *)(iVar16 + 0xe) = 0;
              *(undefined1 *)(iVar16 + 0x14) = 0xff;
              *(undefined1 *)(iVar16 + 0x15) = 0x40;
              *(undefined1 *)(iVar16 + 0x16) = 0x40;
              *(undefined1 *)(iVar16 + 0x1c) = 0xff;
LAB_800d6f54:
              *(undefined1 *)(iVar16 + 0x1d) = uVar4;
              goto LAB_800d6f58;
            }
          }
          else if (local_60 == 3) {
            *(undefined1 *)(iVar16 + 4) = 0;
            *(undefined1 *)(iVar16 + 5) = 0;
            *(undefined1 *)(iVar16 + 6) = 0;
            *(undefined1 *)(iVar16 + 0xc) = 0;
            *(undefined1 *)(iVar16 + 0xd) = 0;
            *(undefined1 *)(iVar16 + 0xe) = 0;
            *(undefined1 *)(iVar16 + 0x14) = 0x40;
            *(undefined1 *)(iVar16 + 0x15) = 0x40;
            *(undefined1 *)(iVar16 + 0x16) = 0xff;
            *(undefined1 *)(iVar16 + 0x1c) = 0x40;
            *(undefined1 *)(iVar16 + 0x1d) = 0x40;
            *(undefined1 *)(iVar16 + 0x1e) = 0xff;
          }
          else {
            uVar4 = 0x80;
            if (local_60 == 4) {
              *(undefined1 *)(iVar16 + 4) = 0;
              *(undefined1 *)(iVar16 + 5) = 0;
              *(undefined1 *)(iVar16 + 6) = 0;
              *(undefined1 *)(iVar16 + 0xc) = 0;
              *(undefined1 *)(iVar16 + 0xd) = 0;
              *(undefined1 *)(iVar16 + 0xe) = 0;
              *(undefined1 *)(iVar16 + 0x14) = 0x80;
              *(undefined1 *)(iVar16 + 0x15) = 0x80;
              *(undefined1 *)(iVar16 + 0x16) = 0x80;
              *(undefined1 *)(iVar16 + 0x1c) = 0x80;
              goto LAB_800d6f54;
            }
          }
          *(undefined2 *)(iVar16 + 8) = local_90;
          *(undefined2 *)(iVar16 + 10) = local_8e;
          *(undefined2 *)(iVar16 + 0x10) = local_8c;
          psVar15 = psVar15 + 2;
          *(undefined2 *)(iVar16 + 0x12) = local_8a;
          psVar18 = psVar18 + 2;
          *(undefined2 *)(iVar16 + 0x18) = local_88;
          *(undefined2 *)(iVar16 + 0x1a) = local_86;
          *(undefined2 *)(iVar16 + 0x20) = local_84;
          *(undefined2 *)(iVar16 + 0x22) = local_82;
          AddPrim(DAT_8008ed68 + iVar14 * 4 + 0x70);
          func_80018610(local_58,iVar14);
        } while ((int)psVar15 < -0x7fefad00);
      }
      else if (local_60 < 9) {
        uVar17 = 0;
        if (param_6 == 0) {
          D_80105300 = (s8)(D_80105300 + 1) +
                       (s8)((ulonglong)((longlong)(int)(D_80105300 + 1) * 0x55555556) >> 0x20) *
                       -3;
        }
        iVar10 = (int)local_78;
        iVar9 = (int)(short)local_70;
        local_48 = iVar9 << 1;
        do {
          if (D_80105300 == 0) {
            sVar7 = 1000;
            if ((uVar17 & 1) == 0) {
              sVar7 = 200;
            }
            sVar11 = -sVar7;
            if (uVar17 == ((int)uVar17 / 3) * 3) {
              sVar11 = sVar7;
            }
            *(short *)(&DAT_80101058 + iVar8) = sVar5 + sVar11;
            sVar7 = 200;
            if ((uVar17 & 1) == 0) {
              sVar7 = 1000;
            }
            if (1 < (int)uVar17) {
              sVar7 = -sVar7;
            }
            *(ushort *)(&DAT_8010105c + iVar8) = uVar3 + sVar7;
            sVar7 = 1000;
            if ((uVar17 & 1) == 0) {
              sVar7 = 200;
            }
            sVar11 = -sVar7;
            if (1 < (int)uVar17) {
              sVar11 = sVar7;
            }
            *(short *)(&DAT_80101060 + iVar8) = sVar5 + sVar11;
            sVar7 = 200;
            if ((uVar17 & 1) == 0) {
              sVar7 = 1000;
            }
            if (uVar17 == ((int)uVar17 / 3) * 3) {
              *(ushort *)(&DAT_80101064 + iVar8) = uVar3 + sVar7;
            }
            else {
              *(ushort *)(&DAT_80101064 + iVar8) = uVar3 - sVar7;
            }
          }
          else {
            sVar7 = 0x146;
            if ((uVar17 & 1) == 0) {
              sVar7 = 0x3c6;
            }
            sVar11 = -sVar7;
            if (uVar17 == ((int)uVar17 / 3) * 3) {
              sVar11 = sVar7;
            }
            *(short *)(&DAT_80101058 + iVar8) = sVar5 + sVar11;
            sVar7 = 0x3c6;
            if ((uVar17 & 1) == 0) {
              sVar7 = 0x146;
            }
            if (1 < (int)uVar17) {
              sVar7 = -sVar7;
            }
            *(ushort *)(&DAT_8010105c + iVar8) = uVar3 + sVar7;
            sVar7 = 0x2a2;
            if ((uVar17 & 1) == 0) {
              sVar7 = 0x2fe;
            }
            sVar11 = -sVar7;
            if (uVar17 == ((int)uVar17 / 3) * 3) {
              sVar11 = sVar7;
            }
            *(short *)(&DAT_80101060 + iVar8) = sVar5 + sVar11;
            sVar7 = 0x2fe;
            if ((uVar17 & 1) == 0) {
              sVar7 = 0x2a2;
            }
            if (1 < (int)uVar17) {
              sVar7 = -sVar7;
            }
            *(ushort *)(&DAT_80101064 + iVar8) = uVar3 + sVar7;
            if (D_80105300 == 2) {
              *(short *)(&DAT_8010105c + iVar8) =
                   (short)local_48 - *(short *)(&DAT_8010105c + iVar8);
              *(short *)(&DAT_80101064 + iVar8) =
                   (short)local_48 - *(short *)(&DAT_80101064 + iVar8);
            }
          }
          iVar14 = local_50 + 0x32;
          *(short *)(&DAT_8010105a + iVar8) = local_68 + -1000;
          *(short *)(&DAT_80101062 + iVar8) = local_68 + -1000;
          *(short *)(&DAT_8010106a + iVar8) = local_68 + local_50;
          *(short *)(&DAT_80101072 + iVar8) = local_68 + local_50;
          *(short *)(&DAT_80101068 + iVar8) =
               local_78 - (short)((iVar14 * (*(short *)(&DAT_80101058 + iVar8) - iVar10)) / 900);
          *(ushort *)(&DAT_8010106c + iVar8) =
               local_70 - (short)((iVar14 * (*(short *)(&DAT_8010105c + iVar8) - iVar9)) / 900);
          *(short *)(&DAT_80101070 + iVar8) =
               local_78 - (short)((iVar14 * (*(short *)(&DAT_80101060 + iVar8) - iVar10)) / 900);
          *(ushort *)(&DAT_80101074 + iVar8) =
               local_70 - (short)((iVar14 * (*(short *)(&DAT_80101064 + iVar8) - iVar9)) / 900);
          iVar14 = RotTransPers4(&DAT_80101058 + iVar8,&DAT_80101060 + iVar8,&DAT_80101068 + iVar8,
                                 &DAT_80101070 + iVar8,&local_90,&local_8c,&local_88,&local_84,
                                 auStack_80,auStack_7c);
          iVar16 = *(int *)(DAT_8008ed68 + 0x1090);
          uVar12 = 0;
          if ((iVar16 != 0) && (iVar16 + 0x24U <= DAT_8008ed68 + 0x4594U)) {
            uVar12 = iVar16 + 0x24U;
          }
          *(uint *)(DAT_8008ed68 + 0x1090) = uVar12;
          SetPolyG4(iVar16);
          SetSemiTrans(iVar16,1);
          local_58 = GetTPage(0,1,0,0);
          if (local_60 == 6) {
            *(undefined1 *)(iVar16 + 4) = 0;
            *(undefined1 *)(iVar16 + 5) = 0;
            *(undefined1 *)(iVar16 + 6) = 0;
            *(undefined1 *)(iVar16 + 0xc) = 0;
            *(undefined1 *)(iVar16 + 0xd) = 0;
            *(undefined1 *)(iVar16 + 0xe) = 0;
            *(undefined1 *)(iVar16 + 0x14) = 0x40;
            *(undefined1 *)(iVar16 + 0x15) = 0xff;
            *(undefined1 *)(iVar16 + 0x16) = 0x40;
            *(undefined1 *)(iVar16 + 0x1c) = 0x40;
            *(undefined1 *)(iVar16 + 0x1d) = 0xff;
            *(undefined1 *)(iVar16 + 0x1e) = 0x40;
          }
          else if (local_60 < 7) {
            if (local_60 == 5) {
              *(undefined1 *)(iVar16 + 4) = 0;
              *(undefined1 *)(iVar16 + 5) = 0;
              *(undefined1 *)(iVar16 + 6) = 0;
              *(undefined1 *)(iVar16 + 0xc) = 0;
              *(undefined1 *)(iVar16 + 0xd) = 0;
              *(undefined1 *)(iVar16 + 0xe) = 0;
              *(undefined1 *)(iVar16 + 0x14) = 0xff;
              *(undefined1 *)(iVar16 + 0x15) = 0x40;
              *(undefined1 *)(iVar16 + 0x16) = 0x40;
              *(undefined1 *)(iVar16 + 0x1c) = 0xff;
              *(undefined1 *)(iVar16 + 0x1d) = 0x40;
              *(undefined1 *)(iVar16 + 0x1e) = 0x40;
            }
          }
          else if (local_60 == 7) {
            *(undefined1 *)(iVar16 + 4) = 0;
            *(undefined1 *)(iVar16 + 5) = 0;
            *(undefined1 *)(iVar16 + 6) = 0;
            *(undefined1 *)(iVar16 + 0xc) = 0;
            *(undefined1 *)(iVar16 + 0xd) = 0;
            *(undefined1 *)(iVar16 + 0xe) = 0;
            *(undefined1 *)(iVar16 + 0x14) = 0x40;
            *(undefined1 *)(iVar16 + 0x15) = 0x40;
            *(undefined1 *)(iVar16 + 0x16) = 0xff;
            *(undefined1 *)(iVar16 + 0x1c) = 0x40;
            *(undefined1 *)(iVar16 + 0x1d) = 0x40;
            *(undefined1 *)(iVar16 + 0x1e) = 0xff;
          }
          else if (local_60 == 8) {
            *(undefined1 *)(iVar16 + 4) = 0;
            *(undefined1 *)(iVar16 + 5) = 0;
            *(undefined1 *)(iVar16 + 6) = 0;
            *(undefined1 *)(iVar16 + 0xc) = 0;
            *(undefined1 *)(iVar16 + 0xd) = 0;
            *(undefined1 *)(iVar16 + 0xe) = 0;
            *(undefined1 *)(iVar16 + 0x14) = 0x80;
            *(undefined1 *)(iVar16 + 0x15) = 0x80;
            *(undefined1 *)(iVar16 + 0x16) = 0x80;
            *(undefined1 *)(iVar16 + 0x1c) = 0x80;
            *(undefined1 *)(iVar16 + 0x1d) = 0x80;
            *(undefined1 *)(iVar16 + 0x1e) = 0x80;
          }
          *(undefined2 *)(iVar16 + 8) = local_90;
          *(undefined2 *)(iVar16 + 10) = local_8e;
          *(undefined2 *)(iVar16 + 0x10) = local_8c;
          *(undefined2 *)(iVar16 + 0x12) = local_8a;
          uVar17 = uVar17 + 1;
          *(undefined2 *)(iVar16 + 0x18) = local_88;
          *(undefined2 *)(iVar16 + 0x1a) = local_86;
          *(undefined2 *)(iVar16 + 0x20) = local_84;
          *(undefined2 *)(iVar16 + 0x22) = local_82;
          AddPrim(DAT_8008ed68 + iVar14 * 4 + 0x70);
          func_80018610(local_58,iVar14);
        } while ((int)uVar17 < 4);
      }
      else if (local_60 < 0xd) {
        iVar9 = local_50 + 0x32;
        sVar5 = (short)(iVar9 / 6);
        uVar17 = 0;
        do {
          *(short *)(&DAT_80101058 + iVar8) = local_78;
          *(short *)(&DAT_8010105a + iVar8) = local_68 + -1000;
          *(ushort *)(&DAT_8010105c + iVar8) = local_70;
          *(undefined4 *)(&DAT_80101060 + iVar8) = *(undefined4 *)(&DAT_80101058 + iVar8);
          *(undefined4 *)(&DAT_80101064 + iVar8) = *(undefined4 *)(&DAT_8010105c + iVar8);
          sVar7 = sVar5;
          if ((uVar17 & 1) == 0) {
            sVar7 = (short)((iVar9 * -0x96) / 900);
          }
          sVar11 = sVar5;
          if ((int)uVar17 < 2) {
            sVar11 = (short)((iVar9 * -0x96) / 900);
          }
          sVar6 = (local_78 - sVar7) + -0x96;
          if ((uVar17 & 1) == 0) {
            sVar6 = (local_78 - sVar7) + 0x96;
          }
          *(short *)(&DAT_80101068 + iVar8) = sVar6;
          *(short *)(&DAT_8010106a + iVar8) = local_68 + local_50;
          sVar7 = (local_70 - sVar11) + 0x96;
          if (1 < (int)uVar17) {
            sVar7 = (local_70 - sVar11) + -0x96;
          }
          *(short *)(&DAT_8010106c + iVar8) = sVar7;
          sVar7 = sVar5;
          if (1 < (int)uVar17) {
            sVar7 = (short)((iVar9 * -0x96) / 900);
          }
          sVar11 = sVar5;
          if ((uVar17 & 1) == 0) {
            sVar11 = (short)((iVar9 * -0x96) / 900);
          }
          sVar6 = (local_78 - sVar7) + -0x96;
          if (1 < (int)uVar17) {
            sVar6 = (local_78 - sVar7) + 0x96;
          }
          *(short *)(&DAT_80101070 + iVar8) = sVar6;
          *(short *)(&DAT_80101072 + iVar8) = local_68 + local_50;
          sVar7 = (local_70 - sVar11) + -0x96;
          if ((uVar17 & 1) == 0) {
            sVar7 = (local_70 - sVar11) + 0x96;
          }
          *(short *)(&DAT_80101074 + iVar8) = sVar7;
          iVar10 = RotTransPers4(&DAT_80101058 + iVar8,&DAT_80101060 + iVar8,&DAT_80101068 + iVar8,
                                 &DAT_80101070 + iVar8,&local_90,&local_8c,&local_88,&local_84,
                                 auStack_80,auStack_7c);
          iVar14 = *(int *)(DAT_8008ed68 + 0x1090);
          uVar12 = 0;
          if ((iVar14 != 0) && (iVar14 + 0x24U <= DAT_8008ed68 + 0x4594U)) {
            uVar12 = iVar14 + 0x24U;
          }
          *(uint *)(DAT_8008ed68 + 0x1090) = uVar12;
          SetPolyG4(iVar14);
          SetSemiTrans(iVar14,1);
          local_58 = GetTPage(0,3,0,0);
          if (local_60 == 9) {
            uVar4 = 0x40;
            *(undefined1 *)(iVar14 + 4) = 0;
            *(undefined1 *)(iVar14 + 5) = 0;
            *(undefined1 *)(iVar14 + 6) = 0;
            *(undefined1 *)(iVar14 + 0xc) = 0;
            *(undefined1 *)(iVar14 + 0xd) = 0;
            *(undefined1 *)(iVar14 + 0xe) = 0;
            *(undefined1 *)(iVar14 + 0x14) = 0xff;
            *(undefined1 *)(iVar14 + 0x15) = 0x40;
            *(undefined1 *)(iVar14 + 0x16) = 0x40;
            *(undefined1 *)(iVar14 + 0x1c) = 0xff;
LAB_800d79a0:
            *(undefined1 *)(iVar14 + 0x1d) = uVar4;
LAB_800d79a4:
            *(undefined1 *)(iVar14 + 0x1e) = uVar4;
          }
          else if (8 < local_60) {
            if (local_60 == 10) {
              uVar4 = 0x40;
              *(undefined1 *)(iVar14 + 4) = 0;
              *(undefined1 *)(iVar14 + 5) = 0;
              *(undefined1 *)(iVar14 + 6) = 0;
              *(undefined1 *)(iVar14 + 0xc) = 0;
              *(undefined1 *)(iVar14 + 0xd) = 0;
              *(undefined1 *)(iVar14 + 0xe) = 0;
              *(undefined1 *)(iVar14 + 0x14) = 0x40;
              *(undefined1 *)(iVar14 + 0x15) = 0xff;
              *(undefined1 *)(iVar14 + 0x16) = 0x40;
              *(undefined1 *)(iVar14 + 0x1c) = 0x40;
              *(undefined1 *)(iVar14 + 0x1d) = 0xff;
              goto LAB_800d79a4;
            }
            if (local_60 == 0xb) {
              *(undefined1 *)(iVar14 + 4) = 0;
              *(undefined1 *)(iVar14 + 5) = 0;
              *(undefined1 *)(iVar14 + 6) = 0;
              *(undefined1 *)(iVar14 + 0xc) = 0;
              *(undefined1 *)(iVar14 + 0xd) = 0;
              *(undefined1 *)(iVar14 + 0xe) = 0;
              *(undefined1 *)(iVar14 + 0x14) = 0x40;
              *(undefined1 *)(iVar14 + 0x15) = 0x40;
              *(undefined1 *)(iVar14 + 0x16) = 0xff;
              *(undefined1 *)(iVar14 + 0x1c) = 0x40;
              *(undefined1 *)(iVar14 + 0x1d) = 0x40;
              *(undefined1 *)(iVar14 + 0x1e) = 0xff;
            }
            else {
              uVar4 = 0x80;
              if (local_60 == 0xc) {
                *(undefined1 *)(iVar14 + 4) = 0;
                *(undefined1 *)(iVar14 + 5) = 0;
                *(undefined1 *)(iVar14 + 6) = 0;
                *(undefined1 *)(iVar14 + 0xc) = 0;
                *(undefined1 *)(iVar14 + 0xd) = 0;
                *(undefined1 *)(iVar14 + 0xe) = 0;
                *(undefined1 *)(iVar14 + 0x14) = 0x80;
                *(undefined1 *)(iVar14 + 0x15) = 0x80;
                *(undefined1 *)(iVar14 + 0x16) = 0x80;
                *(undefined1 *)(iVar14 + 0x1c) = 0x80;
                goto LAB_800d79a0;
              }
            }
          }
          *(undefined2 *)(iVar14 + 8) = local_90;
          *(undefined2 *)(iVar14 + 10) = local_8e;
          *(undefined2 *)(iVar14 + 0x10) = local_8c;
          *(undefined2 *)(iVar14 + 0x12) = local_8a;
          uVar17 = uVar17 + 1;
          *(undefined2 *)(iVar14 + 0x18) = local_88;
          *(undefined2 *)(iVar14 + 0x1a) = local_86;
          *(undefined2 *)(iVar14 + 0x20) = local_84;
          *(undefined2 *)(iVar14 + 0x22) = local_82;
          AddPrim(DAT_8008ed68 + iVar10 * 4 + 0x70);
          func_80018610(local_58,iVar10);
        } while ((int)uVar17 < 4);
      }
    }
    else {
      sVar7 = local_68 + local_50;
      local_44 = (uint)local_70 << 0x10;
      local_40 = (local_44 >> 0x10) + 100;
      local_30 = (int)local_78;
      local_3c = local_30 << 1;
      local_38 = (local_44 >> 0x10) << 1;
      local_34 = local_30 + -0x3a;
      local_30 = local_30 + 0x3a;
      bVar1 = true;
      do {
        iVar14 = iVar9 >> 0x1f;
        iVar10 = iVar9 / 3 + iVar14;
        sVar11 = (short)((uint)local_44 >> 0x10);
        if (bVar1) {
          iVar10 = iVar9 + (iVar10 - iVar14) * -3;
          sVar6 = 0x3a;
          if (iVar10 == 2) {
            sVar6 = 0x74;
          }
          sVar2 = -sVar6;
          if (iVar10 == 1) {
            sVar2 = sVar6;
          }
          *(short *)(&DAT_80101058 + iVar8) = sVar5 + sVar2;
          *(short *)(&DAT_8010105a + iVar8) = sVar7;
          iVar10 = iVar9 % 3;
          sVar6 = sVar11;
          if (iVar10 != 2) {
            sVar6 = sVar11 + 100;
          }
          *(short *)(&DAT_8010105c + iVar8) = sVar6;
          sVar6 = 0x3a;
          if (iVar10 == 1) {
            sVar6 = 0x74;
          }
          if (iVar10 == 2) {
            sVar6 = -sVar6;
          }
          *(short *)(&DAT_80101060 + iVar8) = sVar5 + sVar6;
          *(short *)(&DAT_80101062 + iVar8) = sVar7;
          iVar10 = iVar9 % 3;
          if (iVar10 != 1) {
            sVar11 = sVar11 + 100;
          }
          *(short *)(&DAT_80101064 + iVar8) = sVar11;
          sVar11 = 0;
          if (iVar10 != 0) {
            sVar11 = 0xae;
          }
          if (iVar10 == 2) {
            sVar11 = -sVar11;
          }
          *(short *)(&DAT_80101068 + iVar8) = sVar5 + sVar11;
          *(short *)(&DAT_8010106a + iVar8) = sVar7;
          if (iVar9 == (iVar9 / 3) * 3) {
            *(ushort *)(&DAT_8010106c + iVar8) = uVar3 + 200;
          }
          else {
            *(undefined2 *)(&DAT_8010106c + iVar8) = (undefined2)local_40;
          }
          *(undefined4 *)(&DAT_80101070 + iVar8) = *(undefined4 *)(&DAT_80101068 + iVar8);
          *(undefined4 *)(&DAT_80101074 + iVar8) = *(undefined4 *)(&DAT_8010106c + iVar8);
          if (iVar9 < 3) {
            sVar11 = (short)local_3c;
            *(short *)(&DAT_80101058 + iVar8) = sVar11 - *(short *)(&DAT_80101058 + iVar8);
            sVar6 = (short)local_38;
            *(short *)(&DAT_8010105c + iVar8) = sVar6 - *(short *)(&DAT_8010105c + iVar8);
            *(short *)(&DAT_80101060 + iVar8) = sVar11 - *(short *)(&DAT_80101060 + iVar8);
            *(short *)(&DAT_80101064 + iVar8) = sVar6 - *(short *)(&DAT_80101064 + iVar8);
            *(short *)(&DAT_80101068 + iVar8) = sVar11 - *(short *)(&DAT_80101068 + iVar8);
            *(short *)(&DAT_8010106c + iVar8) = sVar6 - *(short *)(&DAT_8010106c + iVar8);
            *(short *)(&DAT_80101070 + iVar8) = sVar11 - *(short *)(&DAT_80101070 + iVar8);
            *(short *)(&DAT_80101074 + iVar8) = sVar6 - *(short *)(&DAT_80101074 + iVar8);
          }
        }
        else if (iVar9 < 9) {
          if (iVar9 + (iVar10 - iVar14) * -3 == 1) {
            *(short *)(&DAT_80101058 + iVar8) = sVar5 + 0x74;
          }
          else {
            *(undefined2 *)(&DAT_80101058 + iVar8) = (undefined2)local_34;
          }
          *(short *)(&DAT_8010105a + iVar8) = sVar7;
          sVar11 = 0;
          if (iVar9 % 3 != 1) {
            sVar11 = 100;
          }
          if (iVar9 % 3 == 2) {
            sVar11 = -sVar11;
          }
          *(ushort *)(&DAT_8010105c + iVar8) = uVar3 + sVar11;
          iVar10 = iVar9 / 3 + iVar14;
          if (iVar9 + (iVar10 - iVar14) * -3 == 2) {
            *(short *)(&DAT_80101060 + iVar8) = sVar5 + -0x74;
          }
          else {
            *(undefined2 *)(&DAT_80101060 + iVar8) = (undefined2)local_30;
            iVar10 = iVar9 / 3 + iVar14;
          }
          *(short *)(&DAT_80101062 + iVar8) = sVar7;
          iVar10 = iVar9 + (iVar10 - iVar14) * -3;
          sVar11 = 0;
          if (iVar10 != 2) {
            sVar11 = 100;
          }
          if (iVar10 == 1) {
            sVar11 = -sVar11;
          }
          *(ushort *)(&DAT_80101064 + iVar8) = uVar3 + sVar11;
          iVar10 = iVar9 / 3 + iVar14;
          *(short *)(&DAT_8010106a + iVar8) = sVar7;
          *(short *)(&DAT_80101068 + iVar8) = local_78;
          *(ushort *)(&DAT_8010106c + iVar8) = local_70;
          if (iVar9 == (iVar10 - iVar14) * 3) {
            *(short *)(&DAT_80101070 + iVar8) = sVar5 + 0x74;
          }
          else {
            *(undefined2 *)(&DAT_80101070 + iVar8) = (undefined2)local_34;
            iVar10 = iVar9 / 3 + iVar14;
          }
          *(short *)(&DAT_80101072 + iVar8) = sVar7;
          iVar10 = iVar9 + (iVar10 - iVar14) * -3;
          sVar11 = 0;
          if (iVar10 != 0) {
            sVar11 = 100;
          }
          if (iVar10 == 1) {
            *(ushort *)(&DAT_80101074 + iVar8) = uVar3 - sVar11;
          }
          else {
            *(ushort *)(&DAT_80101074 + iVar8) = uVar3 + sVar11;
          }
        }
        else {
          sVar6 = 0x3a;
          if (iVar9 % 3 == 0) {
            sVar6 = 0x74;
          }
          if (iVar9 % 3 == 2) {
            sVar6 = -sVar6;
          }
          *(short *)(&DAT_80101058 + iVar8) = sVar5 + sVar6;
          *(short *)(&DAT_8010105a + iVar8) = local_68 + -1000;
          iVar10 = iVar9 % 3;
          sVar6 = sVar11;
          if (iVar10 != 0) {
            sVar6 = sVar11 + 100;
          }
          *(short *)(&DAT_8010105c + iVar8) = sVar6;
          sVar6 = 0x3a;
          if (iVar10 == 2) {
            sVar6 = 0x74;
          }
          if (iVar10 != 0) {
            sVar6 = -sVar6;
          }
          *(short *)(&DAT_80101060 + iVar8) = sVar5 + sVar6;
          *(short *)(&DAT_80101062 + iVar8) = local_68 + -1000;
          sVar6 = sVar11;
          if (iVar9 % 3 != 2) {
            sVar6 = sVar11 + 100;
          }
          *(short *)(&DAT_80101064 + iVar8) = sVar6;
          if (iVar9 < 0xc) {
            *(short *)(&DAT_8010105c + iVar8) = sVar11 * 2 - *(short *)(&DAT_8010105a + iVar8);
            *(short *)(&DAT_80101064 + iVar8) = sVar11 * 2 - *(short *)(&DAT_80101062 + iVar8);
          }
          *(short *)(&DAT_8010106a + iVar8) = sVar7;
          *(short *)(&DAT_80101072 + iVar8) = sVar7;
          *(undefined2 *)(&DAT_80101068 + iVar8) = *(undefined2 *)(&DAT_80101058 + iVar8);
          *(undefined2 *)(&DAT_8010106c + iVar8) = *(undefined2 *)(&DAT_8010105c + iVar8);
          *(undefined2 *)(&DAT_80101070 + iVar8) = *(undefined2 *)(&DAT_80101060 + iVar8);
          *(undefined2 *)(&DAT_80101074 + iVar8) = *(undefined2 *)(&DAT_80101064 + iVar8);
        }
        iVar10 = RotTransPers4(&DAT_80101058 + iVar8,&DAT_80101060 + iVar8,&DAT_80101068 + iVar8,
                               &DAT_80101070 + iVar8,&local_90,&local_8c,&local_88,&local_84,
                               auStack_80,auStack_7c);
        iVar14 = *(int *)(DAT_8008ed68 + 0x1090);
        uVar17 = 0;
        if ((iVar14 != 0) && (iVar14 + 0x24U <= DAT_8008ed68 + 0x4594U)) {
          uVar17 = iVar14 + 0x24U;
        }
        *(uint *)(DAT_8008ed68 + 0x1090) = uVar17;
        SetPolyG4(iVar14);
        SetSemiTrans(iVar14,1);
        uVar13 = 3;
        if (8 >= iVar9) {
          uVar13 = 1;
        }
        local_58 = GetTPage(0,uVar13,0,0);
        if (iVar9 < 6) {
          iVar16 = iVar9 % 3;
          if (iVar16 == 1) {
            *(undefined1 *)(iVar14 + 4) = 0;
            *(undefined1 *)(iVar14 + 5) = 0;
            *(undefined1 *)(iVar14 + 6) = 0;
            *(undefined1 *)(iVar14 + 0xc) = 0;
            *(undefined1 *)(iVar14 + 0xd) = 0;
            *(undefined1 *)(iVar14 + 0xe) = 0;
            *(undefined1 *)(iVar14 + 0x14) = 0x40;
            *(undefined1 *)(iVar14 + 0x15) = 0xff;
            *(undefined1 *)(iVar14 + 0x16) = 0x40;
            *(undefined1 *)(iVar14 + 0x1c) = 0x40;
            *(undefined1 *)(iVar14 + 0x1d) = 0xff;
            *(undefined1 *)(iVar14 + 0x1e) = 0x40;
            *(undefined1 *)(iVar14 + 4) = 0x40;
            *(undefined1 *)(iVar14 + 5) = 0xff;
            *(undefined1 *)(iVar14 + 6) = 0x40;
            *(undefined1 *)(iVar14 + 0xc) = 0x40;
            *(undefined1 *)(iVar14 + 0xd) = 0xff;
            *(undefined1 *)(iVar14 + 0xe) = 0x40;
          }
          else if (iVar16 < 2) {
            if (iVar16 == 0) {
              *(undefined1 *)(iVar14 + 4) = 0;
              *(undefined1 *)(iVar14 + 5) = 0;
              *(undefined1 *)(iVar14 + 6) = 0;
              *(undefined1 *)(iVar14 + 0xc) = 0;
              *(undefined1 *)(iVar14 + 0xd) = 0;
              *(undefined1 *)(iVar14 + 0xe) = 0;
              *(undefined1 *)(iVar14 + 0x14) = 0xff;
              *(undefined1 *)(iVar14 + 0x15) = 0x40;
              *(undefined1 *)(iVar14 + 0x16) = 0x40;
              *(undefined1 *)(iVar14 + 0x1c) = 0xff;
              *(undefined1 *)(iVar14 + 0x1d) = 0x40;
              *(undefined1 *)(iVar14 + 0x1e) = 0x40;
              *(undefined1 *)(iVar14 + 4) = 0xff;
              *(undefined1 *)(iVar14 + 5) = 0x40;
              *(undefined1 *)(iVar14 + 6) = 0x40;
              *(undefined1 *)(iVar14 + 0xc) = 0xff;
              *(undefined1 *)(iVar14 + 0xd) = 0x40;
              *(undefined1 *)(iVar14 + 0xe) = 0x40;
            }
          }
          else if (iVar16 == 2) {
            *(undefined1 *)(iVar14 + 4) = 0;
            *(undefined1 *)(iVar14 + 5) = 0;
            *(undefined1 *)(iVar14 + 6) = 0;
            *(undefined1 *)(iVar14 + 0xc) = 0;
            *(undefined1 *)(iVar14 + 0xd) = 0;
            *(undefined1 *)(iVar14 + 0xe) = 0;
            *(undefined1 *)(iVar14 + 0x14) = 0x40;
            *(undefined1 *)(iVar14 + 0x15) = 0x40;
            *(undefined1 *)(iVar14 + 0x16) = 0xff;
            *(undefined1 *)(iVar14 + 0x1c) = 0x40;
            *(undefined1 *)(iVar14 + 0x1d) = 0x40;
            *(undefined1 *)(iVar14 + 0x1e) = 0xff;
            *(undefined1 *)(iVar14 + 4) = 0x40;
            *(undefined1 *)(iVar14 + 5) = 0x40;
            *(undefined1 *)(iVar14 + 6) = 0xff;
            *(undefined1 *)(iVar14 + 0xc) = 0x40;
            *(undefined1 *)(iVar14 + 0xd) = 0x40;
            *(undefined1 *)(iVar14 + 0xe) = 0xff;
          }
        }
        else if (8 < iVar9) {
          *(undefined1 *)(iVar14 + 4) = 0xff;
          *(undefined1 *)(iVar14 + 5) = 0xff;
          *(undefined1 *)(iVar14 + 6) = 0xff;
          *(undefined1 *)(iVar14 + 0xc) = 0xff;
          *(undefined1 *)(iVar14 + 0xd) = 0xff;
          *(undefined1 *)(iVar14 + 0xe) = 0xff;
          *(undefined1 *)(iVar14 + 0x14) = 0;
          *(undefined1 *)(iVar14 + 0x15) = 0;
          *(undefined1 *)(iVar14 + 0x16) = 0;
          *(undefined1 *)(iVar14 + 0x1c) = 0;
          *(undefined1 *)(iVar14 + 0x1d) = 0;
          *(undefined1 *)(iVar14 + 0x1e) = 0;
        }
        else {
          *(undefined1 *)(iVar14 + 4) = 0xff;
          *(undefined1 *)(iVar14 + 5) = 0xff;
          *(undefined1 *)(iVar14 + 6) = 0xff;
          *(undefined1 *)(iVar14 + 0xc) = 0xff;
          *(undefined1 *)(iVar14 + 0xd) = 0xff;
          *(undefined1 *)(iVar14 + 0xe) = 0xff;
          *(undefined1 *)(iVar14 + 0x14) = 0;
          *(undefined1 *)(iVar14 + 0x15) = 0;
          *(undefined1 *)(iVar14 + 0x16) = 0;
          *(undefined1 *)(iVar14 + 0x1c) = 0xff;
          *(undefined1 *)(iVar14 + 0x1d) = 0xff;
          *(undefined1 *)(iVar14 + 0x1e) = 0xff;
        }
        *(undefined2 *)(iVar14 + 8) = local_90;
        *(undefined2 *)(iVar14 + 10) = local_8e;
        *(undefined2 *)(iVar14 + 0x10) = local_8c;
        *(undefined2 *)(iVar14 + 0x12) = local_8a;
        iVar9 = iVar9 + 1;
        *(undefined2 *)(iVar14 + 0x18) = local_88;
        *(undefined2 *)(iVar14 + 0x1a) = local_86;
        *(undefined2 *)(iVar14 + 0x20) = local_84;
        *(undefined2 *)(iVar14 + 0x22) = local_82;
        AddPrim(DAT_8008ed68 + iVar10 * 4 + 0x70);
        func_80018610(local_58,iVar10);
        bVar1 = iVar9 < 6;
      } while (iVar9 < 0xf);
    }
    PopMatrix();
  }
  return 0;
}
