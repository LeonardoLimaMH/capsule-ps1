#include "common.h"

INCLUDE_ASM("asm/slpm/nonmatchings/loader_8011B028", func_8011B028);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_8011B028", func_8011B100);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_8011B028", func_8011B2D0);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_8011B028", func_8011B418);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_8011B028", func_8011B4B8);

#include "ghidra.h"
void func_8011B530(undefined4 *param_1,int param_2)

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
