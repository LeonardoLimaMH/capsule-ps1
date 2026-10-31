#include "common.h"
#include "yuugi.h"

#include "common.h"

void func_80019C58(void)
{
  s32 var_s0;
  do
  {
  }
  while (DsControlB(9, 0, 0) == 0);
  do
  {
  }
  while (DsReset() == 0);
  var_s0 = 0;
  do
  {
    VSync(0);
    var_s0 += 1;
  }
  while (var_s0 < 0xC8);
}

#include "common.h"

#include "ghidra.h"
void func_80019CB8(int param_1)
{
  int iVar1;
  int iVar2;
  VSync(3);
  do
  {
    iVar1 = DsControlB(9, 0, 0);
  }
  while (iVar1 == 0);
  do
  {
    iVar1 = DsReset();
  }
  while (iVar1 == 0);
  iVar2 = 0;
  do
  {
    VSync(0);
    iVar2 = iVar2 + 1;
  }
  while (iVar2 < 200);
  *((undefined1 *) (param_1 + 3)) = 0xff;
  *((undefined1 *) (param_1 + 0x408)) = 0;
  *((undefined1 *) (param_1 + 2)) = 0;
  return;
}

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
