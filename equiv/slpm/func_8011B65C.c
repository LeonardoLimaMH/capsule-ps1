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
