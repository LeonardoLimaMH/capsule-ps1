#include "common.h"

#include "ghidra.h"
void func_800B5BA0(int param_1)

{
    extern M2C_UNK D_80100F38[];
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 1;
  uVar3 = (uint)(param_1 != 1);
  do {
    uVar1 = func_800B1260(iVar4);
    if ((uVar1 & 0xffff) != 0xffff) {
      iVar2 = (uVar1 & 0xffff) * 0x79c;
      *(uint *)(*(int *)(iVar2 + -0x7fefef38) + 0x38) =
           *(uint *)(*(int *)(iVar2 + -0x7fefef38) + 0x38) & 0xfffffffe | uVar3;
      *(uint *)(*(int *)(iVar2 + -0x7fefef34) + 0x38) =
           *(uint *)(*(int *)(iVar2 + -0x7fefef34) + 0x38) & 0xfffffffe | uVar3;
      *(uint *)(*(int *)(iVar2 + -0x7fefef30) + 0x38) =
           *(uint *)(*(int *)(iVar2 + -0x7fefef30) + 0x38) & 0xfffffffe | uVar3;
      *(uint *)(*(int *)(iVar2 + -0x7fefef2c) + 0x38) =
           *(uint *)(*(int *)(iVar2 + -0x7fefef2c) + 0x38) & 0xfffffffe | uVar3;
      *(uint *)(*(int *)(iVar2 + -0x7fefef28) + 0x38) =
           *(uint *)(*(int *)(iVar2 + -0x7fefef28) + 0x38) & 0xfffffffe | uVar3;
      *(uint *)(*(int *)(iVar2 + -0x7fefef24) + 0x38) =
           *(uint *)(*(int *)(iVar2 + -0x7fefef24) + 0x38) & 0xfffffffe | uVar3;
      *(uint *)(*(int *)(iVar2 + -0x7fefef20) + 0x38) =
           *(uint *)(*(int *)(iVar2 + -0x7fefef20) + 0x38) & 0xfffffffe | uVar3;
    }
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  return;
}
