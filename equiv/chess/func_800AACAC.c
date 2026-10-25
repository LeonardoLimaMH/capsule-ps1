#include "common.h"

#include "ghidra.h"
int func_800AACAC(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
    extern int func_800AADE0();
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_2 + 0x7c);
  iVar4 = *(int *)(param_2 + 0x80);
  iVar1 = func_80015B3C(param_6,func_800AADE0,4);
  func_80015EF8(iVar1);
  *(int *)(iVar1 + 0x40) = param_2;
  *(uint *)(iVar1 + 0x30) = *(uint *)(iVar1 + 0x30) & 0xfffffe0f | 0x50;
  *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 1;
  *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  uVar2 = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(iVar1 + 0x84) = 0;
  *(undefined4 *)(iVar1 + 0x80) = uVar2;
  uVar2 = func_80019F30(*(byte *)(param_1 + iVar4 * 0x7c + iVar3 * 0x2e8 + 0x5e8) + 0x10d |
                          0x70000,param_3);
  func_80015CD0(iVar1 + 0x14,uVar2,param_4);
  func_800A81D8(param_1,iVar1,iVar3,iVar4);
  return iVar1;
}
