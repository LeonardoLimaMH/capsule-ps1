#include "common.h"

#include "ghidra.h"
#define D_80091618 (*(s32 *)0x80091618)
#define D_800EE9B8 (*(s32 *)0x800EE9B8)
#define D_8010126A (*(s32 *)0x8010126A)
#define _D_8006AF80 (*(u16 *)0x8006AF80)
extern s32 func_800B1260();
extern s32 func_800D091C();
extern s32 func_800D0A8C();
short func_800CFF9C(int param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  uint uVar9;
  
  sVar1 = 0xff;
  uVar9 = (uint)(param_1 != 1);
  uVar2 = func_800B1260();
  iVar3 = (uVar2 & 0xffff) * 0x79c;
  psVar4 = (short *)(&D_8010126A + iVar3);
  psVar5 = (short *)(iVar3 + -0x7fefed94);
  switch(param_2) {
  case 0:
    if (*psVar4 == 8) {
      return 0xff;
    }
    uVar7 = 1;
    uVar6 = 0;
    break;
  case 1:
    if (*psVar4 == 8) {
      return 0xff;
    }
    if (*psVar5 == 1) {
      if (*(short *)((uint)_D_8006AF80 * 0x1a8 + -0x7ff6e95e) == -1) {
        return 0xff;
      }
      if (param_1 == 1) {
        iVar3 = (uVar2 & 0xffff) * 0x1a8;
        puVar8 = &D_80091618 + iVar3;
        if (*(short *)(iVar3 + -0x7ff6e958) != 0) {
          return 0xff;
        }
        uVar6 = 1;
L800D02A8:
        sVar1 = func_800D091C(1,uVar6,0xffffffff);
        if (sVar1 == 0xff) {
          return 0xff;
        }
        if (param_3 != 0) {
          *(short *)(puVar8 + 0x90) = (short)param_1;
          *(undefined4 *)(&D_800EE9B8 + uVar9 * 4) = 0xffffffff;
          return sVar1;
        }
        return sVar1;
      }
      iVar3 = (uVar2 & 0xffff) * 0x1a8;
      puVar8 = &D_80091618 + iVar3;
      if (*(short *)(iVar3 + -0x7ff6e958) == 0) {
        return 0xff;
      }
      uVar6 = 1;
L800D031C:
      sVar1 = func_800D091C(param_1,uVar6,0xffffffff);
      if (sVar1 == 0xff) {
        return 0xff;
      }
      if (param_3 != 0) {
        *(undefined2 *)(puVar8 + 0x90) = 0;
        *(undefined4 *)(&D_800EE9B8 + uVar9 * 4) = 0xffffffff;
        return sVar1;
      }
      return sVar1;
    }
    uVar7 = 1;
    uVar6 = 0xffffffff;
    break;
  case 2:
    if (*psVar5 == 1) {
      if (*(short *)((uint)_D_8006AF80 * 0x1a8 + -0x7ff6e95e) == -1) {
        return 0xff;
      }
      if (param_1 == 1) {
        iVar3 = (uVar2 & 0xffff) * 0x1a8;
        puVar8 = &D_80091618 + iVar3;
        if (*(short *)(iVar3 + -0x7ff6e958) != 0) {
          return 0xff;
        }
        uVar6 = 0;
        goto L800D02A8;
      }
      iVar3 = (uVar2 & 0xffff) * 0x1a8;
      puVar8 = &D_80091618 + iVar3;
      if (*(short *)(iVar3 + -0x7ff6e958) == 0) {
        return 0xff;
      }
      uVar6 = 0;
      goto L800D031C;
    }
    uVar7 = 0;
    uVar6 = 0xffffffff;
    break;
  case 3:
    if (*psVar4 == 1) {
      return 0xff;
    }
    if (*psVar5 == 1) {
      if (*(short *)((uint)_D_8006AF80 * 0x1a8 + -0x7ff6e95e) == -1) {
        return 0xff;
      }
      if (param_1 == 1) {
        iVar3 = (uVar2 & 0xffff) * 0x1a8;
        puVar8 = &D_80091618 + iVar3;
        if (*(short *)(iVar3 + -0x7ff6e958) != 0) {
          return 0xff;
        }
        uVar6 = 0xffffffff;
        goto L800D02A8;
      }
      iVar3 = (uVar2 & 0xffff) * 0x1a8;
      puVar8 = &D_80091618 + iVar3;
      if (*(short *)(iVar3 + -0x7ff6e958) == 0) {
        return 0xff;
      }
      uVar6 = 0xffffffff;
      goto L800D031C;
    }
    uVar7 = 0xffffffff;
    uVar6 = uVar7;
    break;
  case 4:
    if (*psVar4 == 1) {
      return 0xff;
    }
    uVar7 = 0xffffffff;
    uVar6 = 0;
    break;
  case 5:
    if (*psVar4 == 1) {
      return 0xff;
    }
    if (*psVar5 == 8) {
      if (*(short *)((uint)_D_8006AF80 * 0x1a8 + -0x7ff6e95e) == -1) {
        return 0xff;
      }
      if (param_1 == 1) {
        iVar3 = (uVar2 & 0xffff) * 0x1a8;
        puVar8 = &D_80091618 + iVar3;
        if (*(short *)(iVar3 + -0x7ff6e958) == 0) {
          return 0xff;
        }
        uVar6 = 0xffffffff;
L800D05DC:
        sVar1 = func_800D091C(1,uVar6,1);
        if (sVar1 == 0xff) {
          return 0xff;
        }
        if (param_3 == 0) {
          return sVar1;
        }
        *(undefined2 *)(puVar8 + 0x90) = 0;
        *(int *)(&D_800EE9B8 + uVar9 * 4) = param_1;
        return sVar1;
      }
      iVar3 = (uVar2 & 0xffff) * 0x1a8;
      puVar8 = &D_80091618 + iVar3;
      if (*(short *)(iVar3 + -0x7ff6e958) != 0) {
        return 0xff;
      }
      uVar6 = 0xffffffff;
L800D0650:
      sVar1 = func_800D091C(param_1,uVar6,1);
      if (sVar1 == 0xff) {
        return 0xff;
      }
      if (param_3 == 0) {
        return sVar1;
      }
      *(undefined2 *)(puVar8 + 0x90) = 1;
      *(undefined4 *)(&D_800EE9B8 + uVar9 * 4) = 1;
      return sVar1;
    }
    uVar7 = 0xffffffff;
    uVar6 = 1;
    break;
  case 6:
    if (*psVar5 == 8) {
      if (*(short *)((uint)_D_8006AF80 * 0x1a8 + -0x7ff6e95e) == -1) {
        return 0xff;
      }
      if (param_1 == 1) {
        iVar3 = (uVar2 & 0xffff) * 0x1a8;
        puVar8 = &D_80091618 + iVar3;
        if (*(short *)(iVar3 + -0x7ff6e958) == 0) {
          return 0xff;
        }
        uVar6 = 0;
        goto L800D05DC;
      }
      iVar3 = (uVar2 & 0xffff) * 0x1a8;
      puVar8 = &D_80091618 + iVar3;
      if (*(short *)(iVar3 + -0x7ff6e958) != 0) {
        return 0xff;
      }
      uVar6 = 0;
      goto L800D0650;
    }
    uVar7 = 0;
    uVar6 = 1;
    break;
  case 7:
    if (*psVar4 == 8) {
      return 0xff;
    }
    if (*psVar5 == 8) {
      if (*(short *)((uint)_D_8006AF80 * 0x1a8 + -0x7ff6e95e) == -1) {
        return 0xff;
      }
      if (param_1 == 1) {
        iVar3 = (uVar2 & 0xffff) * 0x1a8;
        puVar8 = &D_80091618 + iVar3;
        if (*(short *)(iVar3 + -0x7ff6e958) == 0) {
          return 0xff;
        }
        uVar6 = 1;
        goto L800D05DC;
      }
      iVar3 = (uVar2 & 0xffff) * 0x1a8;
      puVar8 = &D_80091618 + iVar3;
      if (*(short *)(iVar3 + -0x7ff6e958) != 0) {
        return 0xff;
      }
      uVar6 = 1;
      goto L800D0650;
    }
    uVar7 = 1;
    uVar6 = uVar7;
    break;
  default:
    goto L800D06A8;
  }
  sVar1 = func_800D0A8C(param_1,uVar7,uVar6);
L800D06A8:
  return sVar1;
}
