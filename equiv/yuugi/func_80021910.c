#include "common.h"

#include "ghidra.h"
int func_80021910(int param_1,int param_2,int param_3,int param_4,int param_5)

{
    extern M2C_UNK D_800638B4[];
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 1;
  uVar3 = 0;
  if (1 < param_4) {
    param_4 = 1;
  }
  if (param_5 < 4) {
    iVar1 = 0;
    if (param_5 != 2) {
      iVar1 = func_800372B4();
    }
  }
  else {
    iVar1 = 0;
  }
  if (iVar1 < 0x17d) {
    if (iVar1 < 1) {
      iVar4 = 0;
    }
    else {
      uVar3 = 0;
    }
  }
  else if ((*(char *)(param_3 + 5) == '\0') || (uVar3 = 1, *(char *)(param_3 + 5) == '\x04')) {
    uVar3 = 2;
  }
  if (iVar4 != 0) {
    if (param_5 == 4) {
      uVar2 = 0x6000a;
      uVar3 = uVar3 | 0xa8;
    }
    else {
      uVar2 = 0x6000e;
      if (param_4 != 0) {
        uVar2 = 0x60013;
      }
      uVar3 = *(ushort *)((*D_800638B4) + param_2 * 2 + param_4 * 0x10) + uVar3;
    }
    uVar2 = func_80019F30(uVar2,uVar3);
    *(undefined4 *)(param_1 + 0x18) = uVar2;
  }
  return iVar4;
}
