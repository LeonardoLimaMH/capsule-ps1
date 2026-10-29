#include "ghidra.h"
#include "common.h"
#include "ghidra.h"

void func_800B91F0(undefined4 param_1,char *param_2)

{
  undefined4 uVar1;

  if (*param_2 == 'P') {
    uVar1 = 0x76;
  }
  else {
    uVar1 = 0x3a;
    if (*param_2 != '^') {
      return;
    }
    param_2[0x17] = -0x78;
    param_2[0x23] = '\x01';
    *(undefined4 *)(*(int *)(param_2 + 0x70) + 0x88) = 0;
  }
  func_80034AB0(uVar1);
  return;
}

#include "ghidra.h"
