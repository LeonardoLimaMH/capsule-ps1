#include "common.h"

#include "ghidra.h"
#define DAT_8008ee70 (*(s32 *)0x8008EE70)
#define DAT_8008ee74 (*(s32 *)0x8008EE74)
#define DAT_800eff80 (*(s32 *)0x800EFF80)
#define D_800ED878 (*(s16 *)0x800ED878)
#define D_800EFF74 (*(s32 *)0x800EFF74)
#define D_800EFFB8 (*(s32 *)0x800EFFB8)
void func_800BB310(int param_1,int param_2)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  int iVar4;

  bVar1 = false;
  iVar3 = (int)D_800ED878;
  param_1 = param_1 / iVar3;
  iVar4 = 0;
  if (D_800EFF74 == 0) {
    if (iVar3 < 1) {
      if (param_1 == 6) {
        iVar4 = -1;
      }
      else if (param_1 == 0) {
        iVar4 = 0;
      }
      else {
        if (param_1 != 1) {
          iVar3 = 2;
LAB_800bb570:
          if (param_1 != iVar3) goto LAB_800bb580;
          goto LAB_800bb578;
        }
        iVar4 = 1;
      }
    }
    else if (param_1 != 5) {
      if (param_1 == 6) {
        iVar4 = 1;
      }
      else if (param_1 == 0) {
LAB_800bb578:
        iVar4 = 2;
      }
      else {
        if (param_1 != 1) goto LAB_800bb580;
        iVar4 = 3;
      }
    }
  }
  else if (D_800EFF74 == 1) {
    if (iVar3 < 1) {
      if (param_1 == 0) {
        iVar4 = -1;
      }
      else if (param_1 != 1) {
        iVar3 = 3;
        if (param_1 != 2) goto LAB_800bb570;
        iVar4 = 1;
      }
    }
    else if (param_1 != 6) {
      if (param_1 == 0) {
        iVar4 = 1;
      }
      else {
        if (param_1 == 1) goto LAB_800bb578;
        if (param_1 != 2) goto LAB_800bb580;
        iVar4 = 3;
      }
    }
  }
  else if (D_800EFF74 == 5) {
    if (iVar3 < 1) {
      if (param_1 == 4) {
        iVar4 = -1;
      }
      else if (param_1 != 5) {
        if (param_1 == 6) {
          iVar4 = 1;
        }
        else {
          if (param_1 != 0) goto LAB_800bb580;
          iVar4 = 2;
        }
      }
    }
    else if (param_1 != 3) {
      if (param_1 == 4) {
        iVar4 = 1;
      }
      else {
        if (param_1 == 5) goto LAB_800bb578;
        if (param_1 != 6) goto LAB_800bb580;
        iVar4 = 3;
      }
    }
  }
  else if (D_800EFF74 == 6) {
    if (iVar3 < 1) {
      if (param_1 == 5) {
        iVar4 = -1;
      }
      else if (param_1 != 6) {
        if (param_1 == 0) {
          iVar4 = 1;
        }
        else {
          if (param_1 != 1) goto LAB_800bb580;
          iVar4 = 2;
        }
      }
    }
    else if (param_1 != 4) {
      if (param_1 == 5) {
        iVar4 = 1;
      }
      else {
        if (param_1 == 6) goto LAB_800bb578;
        if (param_1 != 0) goto LAB_800bb580;
        iVar4 = 3;
      }
    }
  }
  else if (iVar3 < 1) {
    if (param_1 == D_800EFF74 + -1) {
      iVar4 = -1;
    }
    else if (param_1 != D_800EFF74) {
      iVar3 = D_800EFF74 + 2;
      if (param_1 != D_800EFF74 + 1) goto LAB_800bb570;
      iVar4 = 1;
    }
  }
  else if (param_1 != D_800EFF74 + -2) {
    if (param_1 == D_800EFF74 + -1) {
      iVar4 = 1;
    }
    else {
      if (param_1 == D_800EFF74) goto LAB_800bb578;
      if (param_1 != D_800EFF74 + 1) goto LAB_800bb580;
      iVar4 = 3;
    }
  }
  bVar1 = true;
LAB_800bb580:
  if (bVar1) {
    *(short *)((&DAT_800eff80)[param_1] + 0x46) =
         (short)iVar4 * 0x60 - ((short)(DAT_8008ee70 / 2) + -0x18);
    *(short *)((&DAT_800eff80)[param_1] + 0x4a) = 0x50 - (short)(DAT_8008ee74 / 2);
    *(uint *)((&DAT_800eff80)[param_1] + 0x38) =
         *(uint *)((&DAT_800eff80)[param_1] + 0x38) & 0xfffffffe;
    if (param_2 == 0) {
      return;
    }
    if (iVar4 - 1U < 3) {
      if (D_800EFFB8 == 0) {
        *(short *)((&DAT_800eff80)[param_1] + 0x46) =
             *(short *)((&DAT_800eff80)[param_1] + 0x46) + -0x180;
      }
      sVar2 = -0x60;
      if (D_800ED878 < 1) {
        sVar2 = 0x60;
      }
      *(short *)((&DAT_800eff80)[param_1] + 0x46) =
           *(short *)((&DAT_800eff80)[param_1] + 0x46) + sVar2;
      return;
    }
    iVar3 = (&DAT_800eff80)[param_1];
  }
  else {
    iVar3 = (&DAT_800eff80)[param_1];
  }
  *(uint *)(iVar3 + 0x38) = *(uint *)(iVar3 + 0x38) | 1;
  return;
}
