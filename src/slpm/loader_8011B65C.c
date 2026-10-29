#include "common.h"

#include "common.h"

#include "ghidra.h"
void func_8011B65C(void)

{
    extern s32 D_801332A4;
    extern s32 D_80133284;
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = (undefined4 *)&D_80133284;
  D_801332A4 = D_801332A4 + 1;
  do {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 8);
  return;
}

#include "ghidra.h"
void func_8011B6C8(int param_1,int param_2)

{
    extern u8 D_80133284[];
  if (param_2 != *(int *)(D_80133284 + param_1 * 4)) {
    *(int *)(D_80133284 + param_1 * 4) = param_2;
  }
  return;
}

#include "ghidra.h"
void func_8011B6F4(undefined4 *param_1,int param_2)

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
