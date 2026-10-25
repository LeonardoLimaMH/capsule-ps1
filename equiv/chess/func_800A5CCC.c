#include "common.h"

#include "ghidra.h"
void func_800A5CCC(int param_1,undefined4 param_2)

{
    extern int func_800A60F8();
    extern int func_800AADE0();
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  iVar6 = 0;
  do {
    iVar3 = 0;
    iVar4 = iVar6;
    do {
      iVar1 = func_80015B3C(func_800A60F8,func_800AADE0,param_2);
      func_80015EF8(iVar1);
      iVar2 = param_1 + iVar4;
      iVar4 = iVar4 + 0x7c;
      *(int *)(iVar1 + 0x80) = iVar3;
      iVar3 = iVar3 + 1;
      *(int *)(iVar1 + 0x7c) = iVar5;
      *(uint *)(iVar1 + 0x30) = *(uint *)(iVar1 + 0x30) & 0xfffffe0f | 0x50;
      *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 1;
      *(int *)(iVar2 + 0x658) = iVar1;
    } while (iVar3 < 5);
    *(undefined4 *)(param_1 + iVar3 * 0x7c + iVar6 + 0x658) = 0;
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + 0x2e8;
  } while (iVar5 < 2);
  return;
}
