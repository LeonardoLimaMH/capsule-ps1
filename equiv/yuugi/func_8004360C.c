#include "common.h"

#include "ghidra.h"
void func_8004360C(undefined1 param_1,undefined4 param_2)

{
    extern M2C_UNK D_80094AA8[];
    extern M2C_UNK D_80094AB8[];
    extern M2C_UNK D_80094B68[];
    extern s32 D_80094B6C[];
    extern s32 D_80094B70[];
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int aiStack_70 [2];
  int aiStack_68 [16];
  
  iVar6 = 0;
  piVar2 = aiStack_68;
  do {
    *piVar2 = 0;
    piVar2[1] = 0;
    iVar6 = iVar6 + 1;
    piVar2 = piVar2 + 2;
  } while (iVar6 < 8);
  iVar6 = 0;
  iVar10 = -1;
  iVar7 = 0;
  if (0 < (*D_80094B70)) {
    iVar8 = (*D_80094B68) * 0x18;
    piVar2 = aiStack_70;
    iVar9 = (*D_80094B68);
    do {
      iVar5 = *(int *)((u8 *)D_80094AA8 + iVar8);
      if (iVar5 != iVar6) {
        func_80043A90(iVar5,param_1,param_2);
        iVar6 = iVar5;
      }
      iVar3 = *(int *)((u8 *)D_80094AB8 + iVar8);
      if (iVar3 != 0) {
        if (iVar10 == -1) {
          iVar10 = 0;
          aiStack_68[0] = iVar5;
          piVar2 = aiStack_68;
        }
        else {
          if (*piVar2 == iVar5) goto L8004370C;
          piVar2 = piVar2 + 2;
          iVar10 = iVar10 + 1;
          *piVar2 = iVar5;
        }
        piVar2[1] = iVar3;
      }
L8004370C:
      iVar9 = iVar9 + 1;
      iVar8 = iVar8 + 0x18;
      if (7 < iVar9) {
        iVar8 = 0;
        iVar9 = 0;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (*D_80094B70));
  }
  iVar6 = 0;
  puVar4 = (undefined4 *)D_80094AA8;
  (*D_80094B70) = 0;
  (*D_80094B6C) = 0;
  (*D_80094B68) = 0;
  do {
    iVar9 = 3;
    iVar7 = (int)puVar4 + 3;
    *puVar4 = 0;
    *(undefined1 *)(puVar4 + 1) = 0;
    do {
      *(undefined1 *)(iVar7 + 5) = 0;
      iVar9 = iVar9 + -1;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar9);
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    iVar6 = iVar6 + 1;
    puVar4 = puVar4 + 6;
  } while (iVar6 < 8);
  iVar6 = 0;
  if (-1 < iVar10) {
    piVar2 = aiStack_68;
    do {
      piVar1 = piVar2 + 1;
      piVar2 = piVar2 + 2;
      iVar6 = iVar6 + 1;
      (*(code *)*piVar1)(param_1,param_2);
    } while (iVar6 <= iVar10);
  }
  return;
}
