#include "common.h"

#include "ghidra.h"
int func_800CF418(undefined4 param_1,int param_2)

{
    extern M2C_UNK D_80100F38[];
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = func_800B1260();
  iVar5 = 7;
  iVar4 = (uVar2 & 0xffff) * 0x79c;
  iVar3 = iVar4 + -0x7feff0ba;
  do {
    *(undefined2 *)(iVar3 + 0x346) = 0xff;
    iVar5 = iVar5 + -1;
    iVar3 = iVar3 + -2;
  } while (-1 < iVar5);
  uVar1 = func_800CFF9C(param_1,param_2,0);
  *(undefined2 *)(param_2 * 2 + iVar4 + -0x7fefed82) = uVar1;
  return param_2;
}
