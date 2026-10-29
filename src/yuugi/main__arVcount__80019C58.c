#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount__80019C58", func_80019C58);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount__80019C58", func_80019CB8);

void func_80019D38(s32 arg0, s32 arg1, void *arg2) {
    M2C_FIELD(arg2, s32 *, 0) = arg1;
    M2C_FIELD(arg2, s32 *, 4) = (s32) (arg0 & 0xFFFF);
}

#include "ghidra.h"
void func_80019D48(int param_1,undefined4 param_2,undefined4 param_3)

{
  func_80019DB4(param_1,param_1 + 0x7ffU >> 0xb & 0xffff,param_2,param_3);
  return;
}

#include "ghidra.h"
void func_80019D7C(int param_1,undefined4 param_2,undefined4 param_3)

{
  func_80019DB4(0,param_1 + 0x7ffU >> 0xb & 0xffff,param_2,param_3);
  return;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount__80019C58", func_80019DB4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount__80019C58", func_80019E1C);
