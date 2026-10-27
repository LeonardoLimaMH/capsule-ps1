#include "common.h"

#include "ghidra.h"
#define _D_8008EE50 (*(u16 *)0x8008EE50)
extern s32 func_80012628();
extern s32 func_800ADD70();
void func_800AE35C(undefined4 param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;

  if (_D_8008EE50 == 1) {
    sVar1 = *(short *)(param_2 + 0x5f8);
    *(short *)(param_2 + 0x5f8) = sVar1 + 1;
    iVar3 = param_2 + param_3 * 2;
    if (((int)sVar1 % 0xe & 0xffffU) == 0) {
      iVar2 = param_2 + (uint)*(byte *)(param_2 + param_3 * 6 + 0x5ec) * 0x7c + param_3 * 0x2e8;
      iVar3 = func_800ADD70(param_2,param_3,*(undefined1 *)(iVar3 + 0x601),
                            *(undefined1 *)(iVar3 + 0x602),*(undefined1 *)(iVar2 + 0x2d),
                            *(undefined1 *)(iVar2 + 0x2e));
      *(int *)(param_3 * 0x10 + -0x7ff71210) = iVar3;
      if (iVar3 == 0) {
        func_80012628();
      }
    }
  }
  else if (_D_8008EE50 < 2) {
    if (_D_8008EE50 == 0) {
      *(undefined2 *)(param_2 + 0x5f8) = 0;
      func_80012628();
    }
  }
  else if (_D_8008EE50 == 2) {
    sVar1 = *(short *)(param_2 + 0x5f8);
    *(short *)(param_2 + 0x5f8) = sVar1 + 1;
    if (((int)sVar1 % 0xe & 0xffffU) == 0) {
      *(undefined4 *)(param_3 * 0x10 + -0x7ff71210) = 0x20;
    }
  }
  return;
}
