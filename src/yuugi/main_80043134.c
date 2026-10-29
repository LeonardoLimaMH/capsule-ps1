#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80043134", func_80043134);

#include "common.h"

extern s32 D_80072E2C[];

s32 func_800431A0(s32 i, s32 value) {
    s32 old = D_80072E2C[i];

    if (value != old) {
        D_80072E2C[i] = value;
    }
    return old;
}

#include "ghidra.h"
void func_800431CC(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + -1;
  if (param_2 != 0) {
    do {
      *param_1 = 0;
      iVar1 = iVar1 + -1;
      param_1 = param_1 + 1;
    } while (iVar1 != -1);
  }
  return;
}
