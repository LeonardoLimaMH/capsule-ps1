#include "common.h"

#include "ghidra.h"
int func_8003CFBC(short param_1,short param_2,int param_3,short param_4,short param_5,short param_6,
                 short param_7,short param_8)

{
    extern M2C_UNK D_8007142C[];
    extern s32 D_80078C78[];
    extern s32 D_80078C84[];
    extern M2C_UNK D_80093D68[];
    extern M2C_UNK D_800947E8[];
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 uStack_88;
  undefined2 uStack_86;
  undefined2 uStack_84;
  undefined2 uStack_82;
  undefined2 uStack_7c;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined2 uStack_56;
  undefined2 uStack_54;
  short sStack_50;
  short sStack_48;
  short sStack_40;
  short sStack_38;
  short sStack_30;
  
  iVar9 = (int)param_1;
  sStack_38 = param_7;
  (*D_80078C84) = 1;
  sStack_48 = param_5;
  sStack_40 = param_6;
  sStack_30 = param_8;
  if ((*D_80078C78) + -1 < iVar9) {
    iVar9 = -1;
  }
  if (iVar9 != -1) {
    iVar3 = (param_3 << 0x10) >> 0xc;
    iVar10 = *(int *)(param_2 * 0x1c + -0x7ff6b814);
    iVar11 = iVar10 + iVar3 + 0x20;
    iVar8 = (int)param_5;
    iVar3 = iVar10 + (iVar3 + param_4) * 0x20 + 0x820;
    if ((iVar8 < (int)(uint)*(byte *)(iVar3 + 6)) || ((int)(uint)*(byte *)(iVar3 + 7) < iVar8)) {
      iVar9 = -1;
    }
    else {
      sStack_50 = param_4;
      func_80038A60(iVar9);
      do {
        SpuSetKey(0,*(undefined4 *)((u8 *)D_8007142C + iVar9 * 4));
        iVar2 = SpuGetKeyStatus(*(undefined4 *)((u8 *)D_8007142C + iVar9 * 4));
        iVar7 = 0;
        if (iVar2 == 2) break;
      } while (iVar2 != 0);
      iVar2 = 0;
      puVar4 = (ushort *)
               (*(int *)(param_2 * 0x1c + -0x7ff6b814) + (uint)*(ushort *)(iVar10 + 0x12) * 0x200 +
               0x820);
      if (0 < *(short *)(iVar3 + 0x16)) {
        do {
          iVar7 = iVar7 + 1;
          iVar2 = iVar2 + (uint)*puVar4;
          puVar4 = puVar4 + 1;
        } while (iVar7 < *(short *)(iVar3 + 0x16));
      }
      uStack_8c = 0x7019f;
      uStack_84 = 0;
      uStack_82 = 0;
      uStack_90 = *(undefined4 *)((u8 *)D_8007142C + iVar9 * 4);
      iStack_74 = *(int *)(param_2 * 0x1c + -0x7ff6b808) + iVar2 * 8;
      uStack_56 = *(undefined2 *)(iVar3 + 0x10);
      *(undefined2 *)(iVar9 * 0x4e + -0x7ff6c258) = uStack_56;
      uStack_54 = *(undefined2 *)(iVar3 + 0x12);
      *(undefined2 *)(iVar9 * 0x4e + -0x7ff6c256) = uStack_54;
      uStack_6c = 5;
      if ((*(ushort *)(iVar3 + 0x10) & 0x80) == 0) {
        uStack_6c = 1;
      }
      iVar10 = iVar9 * 0x4e;
      *(undefined1 *)(iVar10 + -0x7ff6c27a) = *(undefined1 *)(iVar3 + 4);
      *(undefined1 *)(iVar10 + -0x7ff6c279) = *(undefined1 *)(iVar3 + 5);
      *(undefined1 *)(iVar10 + -0x7ff6c27b) = *(undefined1 *)(iVar3 + 0xc);
      uVar1 = *(undefined1 *)(iVar3 + 0xd);
      (D_80093D68)[iVar10] = (char)iVar9;
      *(char *)(iVar10 + -0x7ff6c296) = (char)param_3;
      *(short *)(iVar10 + -0x7ff6c294) = sStack_50;
      *(short *)(iVar10 + -0x7ff6c292) = (short)((uint)(iVar8 * 0x100 + (int)param_6) >> 8);
      *(undefined1 *)(iVar10 + -0x7ff6c295) = 0x10;
      *(undefined2 *)(iVar10 + -0x7ff6c282) = 1;
      *(undefined1 *)(iVar10 + -0x7ff6c27c) = uVar1;
      *(undefined1 *)(iVar10 + -0x7ff6c288) = *(undefined1 *)(iVar11 + 1);
      *(undefined1 *)(iVar10 + -0x7ff6c286) = *(undefined1 *)(iVar11 + 4);
      *(undefined1 *)(iVar10 + -0x7ff6c287) = *(undefined1 *)(iVar3 + 2);
      uVar1 = *(undefined1 *)(iVar3 + 3);
      *(char *)(iVar10 + -0x7ff6c24c) = (char)param_2;
      *(undefined1 *)(iVar10 + -0x7ff6c285) = uVar1;
      uVar5 = ((uint)*(byte *)(param_2 * 0x1c + -0x7ff6b7fd) + (uint)*(byte *)(iVar10 + -0x7ff6c286)
              + (uint)*(byte *)(iVar10 + -0x7ff6c285)) - 0x80;
      uVar6 = uVar5;
      if ((int)uVar5 < 0) {
        uVar6 = 0;
      }
      if (0x7f < (int)uVar5) {
        uVar6 = 0x7f;
      }
      *(short *)(iVar10 + -0x7ff6c284) = (short)uVar6;
      iVar8 = (int)((uint)*(byte *)(param_2 * 0x1c + -0x7ff6b800) *
                    (uint)*(byte *)(iVar10 + -0x7ff6c288) * (uint)*(byte *)(iVar10 + -0x7ff6c287))
              >> 7;
      if ((int)uVar6 < 0x40) {
        iVar11 = (int)(uVar6 * iVar8 * 2) >> 7;
        iVar10 = iVar8;
      }
      else {
        iVar10 = (int)((0x40 - (uVar6 & 0x3f)) * iVar8 * 2) >> 7;
        iVar11 = iVar8;
      }
      uVar6 = (uint)*(byte *)(param_2 * 0x1c + -0x7ff6b800);
      iVar8 = iVar9 * 0x4e;
      uStack_88 = (undefined2)(((int)(iVar10 * uVar6) >> 7) * (int)sStack_38 >> 7);
      *(undefined2 *)(iVar8 + -0x7ff6c28c) = uStack_88;
      *(short *)(iVar8 + -0x7ff6c28a) = (short)(((int)(iVar11 * uVar6) >> 7) * (int)sStack_30 >> 7);
      uStack_86 = *(undefined2 *)(iVar8 + -0x7ff6c28a);
      iStack_70 = iStack_74;
      uStack_7c = func_800375C0
                            ((int)sStack_48,(int)sStack_40,*(undefined1 *)(iVar3 + 4),
                             *(undefined1 *)(iVar3 + 5));
      do {
        SpuSetKeyOnWithAttr(&uStack_90);
        iVar8 = SpuGetKeyStatus(*(int *)((u8 *)D_8007142C + iVar9 * 4) == 1);
      } while (iVar8 == 0);
      if ((*(byte *)(iVar3 + 1) & 4) == 0) {
        SpuSetReverbVoice(0,*(undefined4 *)((u8 *)D_8007142C + iVar9 * 4));
      }
      else {
        SpuSetReverbVoice(1,*(undefined4 *)((u8 *)D_8007142C + iVar9 * 4));
      }
    }
  }
  (*D_80078C84) = 0;
  return iVar9;
}
