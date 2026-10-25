#include "common.h"

#include "ghidra.h"
undefined4 func_800BB670(undefined4 param_1,int param_2,int param_3,int param_4)

{
    extern u16 D_8008EE54[];
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar2 = *(int *)(param_4 + 0x74);
  iVar3 = *(int *)(param_3 + 0x70);
  iVar4 = *(int *)(param_3 + 0x78);
  uVar5 = 0;
  switch((*D_8008EE54)) {
  case 0:
    uVar5 = 0;
    if (*(char *)(param_3 + 0x22) == *(char *)(param_3 + 0x17)) {
      func_80012668();
      uVar5 = 0;
    }
    break;
  case 1:
    *(undefined1 *)(param_3 + 0x24) = 0x45;
    *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) | 0x10000;
    func_80012668();
    uVar5 = 0;
    break;
  case 2:
    *(undefined4 *)(iVar4 + 0x84) = 1;
    *(undefined4 *)(iVar4 + 0x88) = 3;
    *(undefined2 *)(iVar4 + 0x6a) = *(undefined2 *)(iVar2 + 0x46);
    *(short *)(iVar4 + 0x6e) = *(short *)(iVar2 + 0x4a) + -0x1e;
    uVar1 = *(uint *)(iVar3 + 0x8c);
    if ((uVar1 < 2) || (uVar1 == 7)) {
      *(undefined2 *)(iVar4 + 0x72) = *(undefined2 *)(iVar2 + 0x4e);
    }
    else {
      *(short *)(iVar4 + 0x72) = *(short *)(iVar2 + 0x4e) + -7;
    }
    *(undefined2 *)(iVar4 + 0x74) = *(undefined2 *)(iVar2 + 0x50);
    *(undefined2 *)(iVar4 + 0x76) = *(undefined2 *)(iVar2 + 0x52);
    func_80012668();
    uVar5 = 0;
    break;
  case 3:
    uVar5 = 0;
    if ((*(short *)(iVar4 + 0x24) == 0) && (uVar5 = 0, *(int *)(iVar4 + 0x20) == 2)) {
      if (*(short *)(param_2 + 0x710) == 0) {
        if ((*(uint *)(param_4 + 0x1c) & 0x20000) != 0) {
          func_800B91F0(param_2,param_4);
        }
      }
      else {
        *(uint *)(param_4 + 0x18) = *(uint *)(param_4 + 0x18) | 2;
      }
      uVar5 = 0;
      if (*(short *)(iVar4 + 0x26) != 0) {
        *(uint *)(param_4 + 0x1c) = *(uint *)(param_4 + 0x1c) | 8;
        func_80012668();
        uVar5 = 0;
      }
    }
    break;
  case 4:
    uVar5 = 0;
    if (((*(short *)(iVar4 + 0x24) == 0) && (uVar5 = 0, *(int *)(iVar4 + 0x20) == 7)) &&
       (uVar5 = 0, *(short *)(iVar4 + 0x26) == 1)) {
      *(undefined4 *)(iVar4 + 0x84) = 2;
      uVar5 = 1;
    }
  }
  return uVar5;
}
