#include "common.h"

#include "ghidra.h"
void func_80043134(void)

{
    extern s32 D_80072E4C[];
    extern s32 D_80072E2C[];
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = D_80072E2C;
  (*D_80072E4C) = (*D_80072E4C) + 1;
  do {
    if (*(code **)puVar1 != (code *)0x0) {
      (**(code **)puVar1)();
    }
    iVar2 = iVar2 + 1;
    puVar1 = (undefined1 *)((int)puVar1 + 4);
  } while (iVar2 < 8);
  return;
}
