#include "common.h"

#include "ghidra.h"
extern s32 func_800A8E84();
extern s32 func_800D7CFC();
extern s32 func_800D7E94();
extern s32 func_800D7F64();
extern s32 func_800D80F8();
undefined1 func_800C202C(undefined4 param_1,undefined1 param_2,undefined1 param_3)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;

  iVar2 = func_800A8E84();
  uVar3 = *(uint *)(iVar2 + 0x10) >> 2 & 0x1f;
  if (uVar3 == 6) {
    uVar1 = func_800D80F8(param_2,param_3);
  }
  else {
    if (uVar3 < 7) {
      if (uVar3 == 1) {
        uVar1 = func_800D7CFC(param_2,param_3);
        return uVar1;
      }
    }
    else if (uVar3 == 0x13) {
      uVar1 = func_800D7F64(param_2,param_3);
      return uVar1;
    }
    uVar1 = func_800D7E94(param_2,param_3);
  }
  return uVar1;
}
