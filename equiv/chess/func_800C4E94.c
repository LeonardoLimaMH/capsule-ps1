#include "common.h"

#include "ghidra.h"
void func_800C4E94(undefined4 param_1,undefined4 param_2)

{
    extern int func_800C6330();
  int iVar1;
  
  iVar1 = func_80020CE4(param_2,func_800C6330,5);
  *(undefined4 *)(iVar1 + 0x84) = 0;
  *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 0x40;
  return;
}
