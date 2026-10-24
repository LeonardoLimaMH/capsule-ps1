#include "common.h"

#include "ghidra.h"
bool func_800BAD3C(undefined4 param_1,int param_2,int param_3,int param_4)

{
    extern u16 D_8008EE54[];
  bool bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_3 + 0x70);
  iVar3 = *(int *)(param_3 + 0x78);
  if ((*D_8008EE54) == 1) {
    *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) | 0x10000;
    *(char *)(param_3 + 0x24) = *(char *)(iVar4 + 0x8c) + 'I';
    func_80012668();
    bVar1 = false;
  }
  else if ((*D_8008EE54) < 2) {
    bVar1 = false;
    if (((*D_8008EE54) == 0) &&
       (bVar1 = false, *(char *)(param_3 + 0x22) == *(char *)(param_3 + 0x17))) {
      func_80012668();
      bVar1 = false;
    }
  }
  else if ((*D_8008EE54) == 2) {
    *(undefined4 *)(iVar3 + 0x84) = 1;
    *(undefined4 *)(iVar3 + 0x88) = 3;
    *(undefined2 *)(iVar3 + 0x6a) = *(undefined2 *)(iVar4 + 0x46);
    *(undefined2 *)(iVar3 + 0x6e) = *(undefined2 *)(iVar4 + 0x4a);
    if (*(int *)(iVar4 + 0x8c) == 4) {
      sVar2 = *(short *)(iVar4 + 0x4e) + 2;
    }
    else {
      sVar2 = *(short *)(iVar4 + 0x4e) + -2;
    }
    *(short *)(iVar3 + 0x72) = sVar2;
    *(undefined2 *)(iVar3 + 0x74) = *(undefined2 *)(iVar4 + 0x50);
    *(undefined2 *)(iVar3 + 0x76) = *(undefined2 *)(iVar4 + 0x52);
    func_80012668();
    bVar1 = false;
  }
  else {
    bVar1 = false;
    if ((*D_8008EE54) == 3) {
      if (*(int *)(iVar3 + 0x20) == 0) {
        if (*(short *)(iVar3 + 0x24) != 0) {
          return false;
        }
        if (*(short *)(param_2 + 0x710) == 0) {
          if ((*(uint *)(param_4 + 0x1c) & 0x20000) != 0) {
            func_800B91F0(param_2,param_4);
          }
        }
        else {
          *(uint *)(param_4 + 0x18) = *(uint *)(param_4 + 0x18) | 2;
        }
        if (*(short *)(iVar4 + 0x26) == 1) {
          *(uint *)(param_4 + 0x1c) = *(uint *)(param_4 + 0x1c) | 8;
        }
      }
      bVar1 = false;
      if (((*(short *)(iVar3 + 0x24) == 0) && (bVar1 = false, *(int *)(iVar3 + 0x20) == 2)) &&
         (bVar1 = *(short *)(iVar3 + 0x26) == 1, bVar1)) {
        *(undefined4 *)(iVar3 + 0x84) = 2;
      }
    }
  }
  return bVar1;
}
