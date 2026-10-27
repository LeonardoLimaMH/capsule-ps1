#include "common.h"

#include "ghidra.h"
#define DAT_800916a2 (*(u16 *)0x800916A2)
#define DAT_800916a8 (*(u16 *)0x800916A8)
#define DAT_8010126a (*(u16 *)0x8010126A)
#define DAT_8010126c (*(s16 *)0x8010126C)
#define DAT_8010126e (*(u16 *)0x8010126E)
#define DAT_80101270 (*(u16 *)0x80101270)
#define D_8006AF80 (*(u16 *)0x8006AF80)
#define D_800EE9B8 (*(u32 *)0x800EE9B8)
#define func_800B1260 ((s32 (*)())0x800B1260)
#define func_800D07AC ((s32 (*)())0x800D07AC)
#define func_800D0A8C ((s32 (*)())0x800D0A8C)
short func_800CF4BC(int param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  short *psVar8;
  short *psVar9;
  short *psVar10;

  sVar3 = 0xff;
  bVar1 = param_1 != 1;
  uVar4 = func_800B1260();
  uVar5 = uVar4 & 0xffff;
  psVar8 = &DAT_8010126a + uVar5 * 0x3ce;
  psVar7 = &DAT_8010126c + uVar5 * 0x3ce;
  psVar10 = &DAT_8010126e + uVar5 * 0x3ce;
  psVar9 = &DAT_80101270 + uVar5 * 0x3ce;
  switch(param_2) {
  case 0:
    if (*psVar8 != 8) {
      sVar3 = func_800D0A8C(param_1,1,0);
      if (sVar3 == 0xff) {
        return 0xff;
      }
      if (param_3 != 0) {
        *psVar10 = *psVar8 + 1;
        return sVar3;
      }
      return sVar3;
    }
    break;
  case 1:
    if (*psVar8 != 8) {
      if (*psVar7 != 1) {
        sVar3 = func_800D0A8C(param_1,1,0xffffffff);
        if (sVar3 == 0xff) {
          return 0xff;
        }
        if (param_3 == 0) {
          return sVar3;
        }
        *psVar10 = *psVar8 + 1;
        sVar2 = *psVar7 + -1;
        goto LAB_800cff60;
      }
      if ((&DAT_800916a2)[(uint)D_8006AF80 * 0xd4] == -1) {
        return 0xff;
      }
      uVar4 = uVar4 & 0xffff;
      if (param_1 == 1) {
        iVar6 = uVar4 * 0x1a8;
        if ((&DAT_800916a8)[uVar4 * 0xd4] != 0) {
          return 0xff;
        }
        sVar3 = func_800D07AC(1,1,0xffffffff);
        if (sVar3 == 0xff) {
          return 0xff;
        }
        if (param_3 == 0) {
          return sVar3;
        }
        *psVar10 = *psVar8 + 1;
        *psVar9 = 8;
        goto LAB_800cf9b0;
      }
      iVar6 = uVar4 * 0x1a8;
      if ((&DAT_800916a8)[uVar4 * 0xd4] != 0) {
        sVar3 = func_800D07AC(param_1,1,0xffffffff);
        if (sVar3 == 0xff) {
          return 0xff;
        }
        if (param_3 == 0) {
          return sVar3;
        }
        *psVar10 = *psVar8 + 1;
        *psVar9 = 8;
        goto LAB_800cfa3c;
      }
    }
    break;
  case 2:
    if (*psVar7 != 1) {
      sVar3 = func_800D0A8C(param_1,0,0xffffffff);
      if (sVar3 == 0xff) {
        return 0xff;
      }
      if (param_3 == 0) {
        return sVar3;
      }
      sVar2 = *psVar7 + -1;
      goto LAB_800cff60;
    }
    if ((&DAT_800916a2)[(uint)D_8006AF80 * 0xd4] == -1) {
      return 0xff;
    }
    uVar4 = uVar4 & 0xffff;
    if (param_1 == 1) {
      iVar6 = uVar4 * 0x1a8;
      if ((&DAT_800916a8)[uVar4 * 0xd4] != 0) {
        return 0xff;
      }
      sVar3 = func_800D07AC(1,0,0xffffffff);
      if (sVar3 == 0xff) {
        return 0xff;
      }
      if (param_3 == 0) {
        return sVar3;
      }
      *psVar9 = 8;
LAB_800cf9b0:
      *(short *)((int)&DAT_800916a8 + iVar6) = (short)param_1;
      (&D_800EE9B8)[bVar1] = 0xffffffff;
      return sVar3;
    }
    iVar6 = uVar4 * 0x1a8;
    if ((&DAT_800916a8)[uVar4 * 0xd4] != 0) {
      sVar3 = func_800D07AC(param_1,0,0xffffffff);
      if (sVar3 == 0xff) {
        return 0xff;
      }
      if (param_3 == 0) {
        return sVar3;
      }
      *psVar9 = 8;
LAB_800cfa3c:
      *(undefined2 *)((int)&DAT_800916a8 + iVar6) = 0;
      (&D_800EE9B8)[bVar1] = 0xffffffff;
      return sVar3;
    }
    break;
  case 3:
    if (*psVar8 == 1) {
      return 0xff;
    }
    if (*psVar7 != 1) {
      sVar3 = func_800D0A8C(param_1,0xffffffff,0xffffffff);
      if (sVar3 == 0xff) {
        return 0xff;
      }
      if (param_3 == 0) {
        return sVar3;
      }
      *psVar10 = *psVar8 + -1;
      sVar2 = *psVar7 + -1;
      goto LAB_800cff60;
    }
    if ((&DAT_800916a2)[(uint)D_8006AF80 * 0xd4] == -1) {
      return 0xff;
    }
    uVar4 = uVar4 & 0xffff;
    if (param_1 == 1) {
      iVar6 = uVar4 * 0x1a8;
      if ((&DAT_800916a8)[uVar4 * 0xd4] != 0) {
        return 0xff;
      }
      sVar3 = func_800D07AC(1,0xffffffff,0xffffffff);
      if (sVar3 == 0xff) {
        return 0xff;
      }
      if (param_3 == 0) {
        return sVar3;
      }
      *psVar10 = *psVar8 + -1;
      *psVar9 = 8;
      goto LAB_800cf9b0;
    }
    iVar6 = uVar4 * 0x1a8;
    if ((&DAT_800916a8)[uVar4 * 0xd4] != 0) {
      sVar3 = func_800D07AC(param_1,0xffffffff,0xffffffff);
      if (sVar3 == 0xff) {
        return 0xff;
      }
      if (param_3 == 0) {
        return sVar3;
      }
      *psVar10 = *psVar8 + -1;
      *psVar9 = 8;
      goto LAB_800cfa3c;
    }
    break;
  case 4:
    if (*psVar8 != 1) {
      sVar3 = func_800D0A8C(param_1,0xffffffff,0);
      if (sVar3 == 0xff) {
        return 0xff;
      }
      if (param_3 != 0) {
        *psVar10 = *psVar8 + -1;
        return sVar3;
      }
      return sVar3;
    }
    break;
  case 5:
    if (*psVar8 != 1) {
      if (*psVar7 != 8) {
        sVar3 = func_800D0A8C(param_1,0xffffffff,1);
        if (sVar3 == 0xff) {
          return 0xff;
        }
        if (param_3 == 0) {
          return sVar3;
        }
        sVar2 = *psVar8 + -1;
        goto LAB_800cff50;
      }
      if ((&DAT_800916a2)[(uint)D_8006AF80 * 0xd4] == -1) {
        return 0xff;
      }
      if (param_1 != 1) {
        if ((&DAT_800916a8)[(uVar4 & 0xffff) * 0xd4] != 0) {
          return 0xff;
        }
        sVar3 = func_800D07AC(param_1,0xffffffff,1);
        if (sVar3 == 0xff) {
          return 0xff;
        }
        if (param_3 == 0) {
          return sVar3;
        }
        sVar2 = *psVar8 + -1;
        goto LAB_800cfef8;
      }
      if ((&DAT_800916a8)[(uVar4 & 0xffff) * 0xd4] == 0) {
        return 0xff;
      }
      sVar3 = func_800D07AC(1,0xffffffff,1);
      if (sVar3 == 0xff) {
        return 0xff;
      }
      if (param_3 == 0) {
        return sVar3;
      }
      sVar2 = *psVar8 + -1;
      goto LAB_800cfe74;
    }
    break;
  case 6:
    if (*psVar7 != 8) {
      sVar3 = func_800D0A8C(param_1,0,1);
      if (sVar3 == 0xff) {
        return 0xff;
      }
      if (param_3 == 0) {
        return sVar3;
      }
LAB_800cff54:
      sVar2 = *psVar7 + 1;
LAB_800cff60:
      *psVar9 = sVar2;
      return sVar3;
    }
    if ((&DAT_800916a2)[(uint)D_8006AF80 * 0xd4] == -1) break;
    uVar5 = uVar4 & 0xffff;
    if (param_1 != 1) {
      if ((&DAT_800916a8)[uVar5 * 0xd4] != 0) {
        return 0xff;
      }
      sVar3 = func_800D07AC(param_1,0,1);
      if (sVar3 != 0xff) {
        if (param_3 != 0) {
          *psVar9 = 1;
          (&DAT_800916a8)[uVar5 * 0xd4] = 1;
          (&D_800EE9B8)[bVar1] = 1;
          return sVar3;
        }
        return sVar3;
      }
      return 0xff;
    }
    if ((&DAT_800916a8)[uVar5 * 0xd4] == 0) break;
    sVar3 = func_800D07AC(1,0,1);
    if (sVar3 == 0xff) {
      return 0xff;
    }
    if (param_3 == 0) {
      return sVar3;
    }
    goto LAB_800cfe78;
  case 7:
    if (*psVar8 == 8) {
      return 0xff;
    }
    if (*psVar7 != 8) {
      sVar3 = func_800D0A8C(param_1,1,1);
      if (sVar3 == 0xff) {
        return 0xff;
      }
      if (param_3 == 0) {
        return sVar3;
      }
      sVar2 = *psVar8 + 1;
LAB_800cff50:
      *psVar10 = sVar2;
      goto LAB_800cff54;
    }
    if ((&DAT_800916a2)[(uint)D_8006AF80 * 0xd4] == -1) {
      return 0xff;
    }
    if (param_1 != 1) {
      if ((&DAT_800916a8)[(uVar4 & 0xffff) * 0xd4] != 0) {
        return 0xff;
      }
      sVar3 = func_800D07AC(param_1,1,1);
      if (sVar3 == 0xff) {
        return 0xff;
      }
      if (param_3 == 0) {
        return sVar3;
      }
      sVar2 = *psVar8 + 1;
LAB_800cfef8:
      *psVar10 = sVar2;
      *psVar9 = 1;
      (&DAT_800916a8)[(uVar4 & 0xffff) * 0xd4] = 1;
      (&D_800EE9B8)[bVar1] = 1;
      return sVar3;
    }
    if ((&DAT_800916a8)[(uVar4 & 0xffff) * 0xd4] == 0) {
      return 0xff;
    }
    sVar3 = func_800D07AC(1,1,1);
    if (sVar3 == 0xff) {
      return 0xff;
    }
    if (param_3 == 0) {
      return sVar3;
    }
    sVar2 = *psVar8 + 1;
LAB_800cfe74:
    *psVar10 = sVar2;
LAB_800cfe78:
    *psVar9 = (short)param_1;
    (&DAT_800916a8)[(uVar4 & 0xffff) * 0xd4] = 0;
    (&D_800EE9B8)[bVar1] = param_1;
  default:
    goto switchD_800cf564_default;
  }
  sVar3 = 0xff;
switchD_800cf564_default:
  return sVar3;
}
