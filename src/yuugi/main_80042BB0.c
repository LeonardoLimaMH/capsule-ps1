#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80042BB0", func_80042BB0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80042BB0", func_80042C88);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80042BB0", func_80042E58);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80042BB0", func_80042FA0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80042BB0", func_80043040);

#include "ghidra.h"
void func_800430B8(undefined4 *param_1,int param_2)

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
