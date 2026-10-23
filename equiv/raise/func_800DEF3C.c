#include "common.h"

#include "ghidra.h"
undefined4 func_800DEF3C(undefined4 param_1,uint param_2)

{
    extern M2C_UNK D_80092008[];
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  param_2 = param_2 & 0xffff;
  iVar1 = param_2 * 0x44;
  uVar2 = *(uint *)(iVar1 + -0x7ff6dff4);
  iVar5 = (uVar2 >> 9 & 0x3f) + 1;
  uVar4 = uVar2 >> 3 & 0x3f;
  uVar3 = uVar4 + 1;
  if (uVar4 == 0) {
    *(uint *)(iVar1 + -0x7ff6dff4) = uVar2 & 0xfffffff8 | 4;
    func_800DF7EC(param_1,param_2);
    func_800DF734(param_1,param_2,4,0,iVar5);
  }
  else {
    *(uint *)(iVar1 + -0x7ff6dff4) = uVar2 & 0xfffffff8;
    iVar1 = 0;
    do {
      func_800DF7EC(param_1,param_2);
      uVar3 = uVar3 + 1;
      if (9 < (uVar3 & 0xff)) {
        return 1;
      }
      func_800DF734(param_1,param_2,0,uVar3 & 0xff,iVar5);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x20);
  }
  return 1;
}
