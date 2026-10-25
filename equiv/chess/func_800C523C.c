#include "common.h"

#include "ghidra.h"
void func_800C523C(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
    extern int func_800AADE0();
    extern int func_800C4FC4();
  int iVar1;
  
  iVar1 = func_80015B3C(func_800C4FC4,func_800AADE0,5);
  func_80015EF8(iVar1);
  *(undefined4 *)(iVar1 + 0x7c) = param_3;
  *(undefined4 *)(iVar1 + 0x80) = param_4;
  *(undefined4 *)(iVar1 + 0x84) = 0;
  *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 1;
  func_8001AA70(iVar1 + 0x14,param_2 + 0x14,0x20);
  *(int *)(iVar1 + 0x40) = param_2;
  *(uint *)(iVar1 + 0x34) = *(uint *)(iVar1 + 0x34) & 0xffffff80 | 1;
  *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) & 0xffffffcf | 0x50;
  return;
}
