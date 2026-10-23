#include "common.h"

#include "ghidra.h"
undefined4 func_800E31BC(undefined4 param_1,int param_2,int param_3,int param_4)

{
    extern M2C_UNK D_8008ED68[];
    extern u16 D_8008EE54[];
    extern s32 D_80119714[];
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_3 + 0x70);
  iVar6 = *(int *)(param_4 + 0x70);
  iVar4 = *(int *)(param_3 + 0x78);
  if ((*D_8008EE54) != 1) {
    if (1 < (*D_8008EE54)) {
      if ((*D_8008EE54) == 2) {
        if ((*D_80119714) == 6) {
          func_800DD230(0x8010);
        }
        if (*(int *)(iVar4 + 0x1c) != 0) {
          return 0;
        }
      }
      else if ((*D_8008EE54) != 99) {
        return 0;
      }
      *(undefined1 *)(param_2 + 0x60d) = 2;
      return 1;
    }
    if ((*D_8008EE54) != 0) {
      return 0;
    }
    *(undefined1 *)(param_3 + 0x17) = 0x88;
    *(undefined1 *)(param_3 + 0x23) = 1;
    *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) | 0x8000;
    uVar3 = func_800DD230(param_3);
    switch(uVar3) {
    case 0:
      uVar1 = 0x45;
      break;
    case 1:
    case 2:
    case 3:
      uVar1 = 0x46;
      break;
    case 4:
      uVar1 = 0x47;
      break;
    case 5:
    case 6:
    case 7:
      uVar1 = 0x48;
      break;
    default:
      goto L800E329C;
    }
    *(undefined1 *)(param_3 + 0x24) = uVar1;
L800E329C:
    (*D_8008EE54) = (*D_8008EE54) + 1;
    (*D_80119714) = 0;
    return 0;
  }
  *(undefined4 *)(iVar4 + 0x84) = 1;
  *(uint *)(iVar4 + 0x38) = *(uint *)(iVar4 + 0x38) & 0xffffffcf | 0x50;
  uVar3 = func_80034AB0(param_3);
  switch(uVar3) {
  case 0:
  case 2:
  case 4:
  case 6:
    *(undefined2 *)(iVar4 + 0x54) = 0;
    goto L800E333C;
  case 1:
    *(undefined2 *)(iVar4 + 0x6a) = 0x14;
    uVar2 = 0xfed4;
    break;
  case 5:
    uVar2 = 0xfed4;
    break;
  case 7:
    *(undefined2 *)(iVar4 + 0x6a) = 0xffec;
  case 3:
    uVar2 = 300;
    break;
  default:
    goto L800E333C;
  }
  *(undefined2 *)(iVar4 + 0x54) = uVar2;
L800E333C:
  uVar2 = *(undefined2 *)(iVar5 + 0x50);
  *(undefined2 *)(iVar4 + 0x52) = uVar2;
  *(undefined2 *)(iVar4 + 0x50) = uVar2;
  *(short *)(iVar4 + 0x6e) =
       (short)(((int)*(short *)(iVar6 + 0x4a) - (int)*(short *)(iVar5 + 0x4a)) / 2);
  *(short *)(iVar4 + 0x72) = (*(short *)(iVar6 + 0x4e) - *(short *)(iVar5 + 0x4e)) + -2;
  (*D_80119714) = 0;
  (*D_8008EE54) = (*D_8008EE54) + 1;
  return 0;
}
