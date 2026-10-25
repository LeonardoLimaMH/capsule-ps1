#include "common.h"

#include "ghidra.h"
undefined4 func_800DDB38(int param_1,undefined4 param_2,undefined2 param_3)

{
    extern int func_800DDE7C();
  undefined2 uVar1;
  int iVar2;
  undefined1 uVar3;
  
  iVar2 = func_80020CE4(param_1,func_800DDE7C,5);
  *(undefined2 *)(iVar2 + 100) = *(undefined2 *)(param_1 + 100);
  uVar1 = *(undefined2 *)(param_1 + 0x66);
  *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) & 0xffffffcf | 0x50;
  uVar3 = (undefined1)param_3;
  *(undefined1 *)(iVar2 + 0x5a) = uVar3;
  *(undefined1 *)(iVar2 + 0x59) = uVar3;
  *(undefined1 *)(iVar2 + 0x58) = uVar3;
  *(undefined2 *)(iVar2 + 0x7a) = param_3;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  *(undefined2 *)(iVar2 + 0x66) = uVar1;
  return 0;
}
