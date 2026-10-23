#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A1DC);

#include "ghidra.h"
undefined4 func_8001A25C(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_3 != (undefined4 *)0x0) {
    uVar1 = *param_3;
  }
  return uVar1;
}

#include "ghidra.h"
undefined4 func_8001A270(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = *(undefined4 *)(param_3 + 4);
  }
  return uVar1;
}

#include "ghidra.h"
undefined4 func_8001A284(undefined4 param_1, int param_2, int *param_3)
{
  int iVar1;
  int new_var;
  iVar1 = 0;
  if (param_3 != ((int *) 0x0))
  {
    iVar1 = *param_3;
  }
  new_var = (*((int *) (iVar1 + 0x5c))) + (param_2 * 4);
  return *((undefined4 *) new_var);
}

#include "ghidra.h"
undefined4 func_8001A2AC(undefined4 param_1, int param_2, int *param_3)
{
  undefined4 *new_var;
  int iVar1;
  iVar1 = 0;
  if (param_3 != ((int *) 0x0))
  {
    iVar1 = *param_3;
  }
  return *(new_var = &(*((undefined4 *) ((*((int *) (iVar1 + 0x50))) + (param_2 * 4)))));
}

#include "ghidra.h"
undefined4 func_8001A2D4(undefined4 param_1, int param_2, int *param_3)
{
  int iVar1;
  int new_var;
  iVar1 = 0;
  if (param_3 != ((int *) 0x0))
  {
    iVar1 = *param_3;
  }
  return *((undefined4 *) ((*((int *) (iVar1 + 0x58))) + (new_var = 4 * param_2)));
}

#include "ghidra.h"
undefined4 func_8001A2FC(undefined4 param_1, int param_2, int *param_3)
{
  int iVar1;
  int new_var;
  iVar1 = 0;
  if (param_3 != ((int *) 0x0))
  {
    iVar1 = *param_3;
  }
  return *((undefined4 *) ((*((int *) (iVar1 + 0x60))) + (new_var = param_2 * 4)));
}

#include "ghidra.h"
undefined4 func_8001A324(undefined4 param_1, int param_2, int *param_3)
{
  int iVar1;
  int new_var;
  iVar1 = 0;
  if (param_3 != ((int *) 0x0))
  {
    iVar1 = *param_3;
  }
  return *((undefined4 *) ((*((int *) (iVar1 + 100))) + (new_var = param_2 * 4)));
}

#include "ghidra.h"
undefined4 func_8001A34C(undefined4 param_1, int param_2, int *param_3)
{
  undefined4 *new_var;
  int iVar1;
  iVar1 = 0;
  if (param_3 != ((int *) 0x0))
  {
    iVar1 = *param_3;
  }
  new_var = (undefined4 *) ((*((int *) (iVar1 + 0x68))) + (param_2 * 4));
  return *new_var;
}

#include "ghidra.h"
undefined4 func_8001A374(undefined4 param_1, int param_2, int *param_3)
{
  int iVar1;
  int new_var2;
  int *new_var;
  new_var = (int *) 0x0;
  iVar1 = 0;
 do { if (param_3 != new_var) { iVar1 = *param_3; } return *((undefined4 *) ((*((int *) (iVar1 + 0x6c))) + (param_2 * (new_var2 = 4)))); } while (0);
}

s32 func_8001A39C(s32 arg0) {
    return arg0 & 0xFF;
}

s32 func_8001A3A4(s32 arg0) {
    return arg0 & 0xFF000000;
}

#include "ghidra.h"
undefined4 func_8001A3B0(undefined4 param_1, int param_2, int *param_3)
{
  int iVar1;
  int new_var;
  iVar1 = 0;
  new_var = 4;
  if (param_3 != ((int *) 0x0))
  {
    iVar1 = *param_3;
  }
  return *((undefined4 *) ((*((int *) (iVar1 + 0x70))) + (param_2 * new_var)));
}

#include "ghidra.h"
undefined4 func_8001A3D8(undefined4 param_1, int param_2, int *param_3)
{
  int iVar1;
  int new_var;
  iVar1 = 0;
  if (param_3 != ((int *) 0x0))
  {
    iVar1 = *param_3;
  }
  return *((undefined4 *) ((*((int *) (iVar1 + 0x7c))) + (param_2 * (new_var = 4))));
}

#include "ghidra.h"
undefined4 func_8001A400(undefined4 param_1, int param_2, int *param_3)
{
  undefined4 *new_var;
  int iVar1;
  iVar1 = 0;
  if (param_3 != ((int *) 0x0))
  {
    iVar1 = *param_3;
  }
  new_var = &(*((undefined4 *) ((*((int *) (iVar1 + 0x80))) + (param_2 * 4))));
  return *new_var;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A428);

#include "ghidra.h"
undefined4 func_8001A434(int param_1, int param_2)
{
  undefined4 *new_var;
  new_var = (undefined4 *) ((*((int *) (param_2 + 0x60))) + (param_1 * 4));
  return *new_var;
}

#include "ghidra.h"
undefined4 func_8001A44C(int param_1, int param_2)
{
  int new_var;
  new_var = param_1 * 4;
  return *((undefined4 *) ((*((int *) (param_2 + 100))) + new_var));
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A464);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A480);

#include "ghidra.h"
void func_8001A49C(int param_1)

{
  func_8001A684(param_1,param_1 + 0x50,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x54,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x58,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x5c,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x60,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 100,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x68,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x6c,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x70,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x74,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x78,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x7c,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x80,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x84,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x8c,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x94,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x9c,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0xa4,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0xac,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0xb4,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0xbc,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0xc4,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0xcc,*(undefined4 *)(param_1 + 0x4c));
  func_8001A704(param_1,param_1 + 0x5c,*(undefined4 *)(param_1 + 0x4c));
  func_8001A784(param_1,param_1 + 0x60,*(undefined4 *)(param_1 + 0x4c));
  func_8001A818(param_1,param_1 + 100,*(undefined4 *)(param_1 + 0x4c));
  *(int *)(param_1 + 0x4c) = param_1;
  return;
}

void func_8001A684(s32 arg0, s32 *arg1, s32 arg2) {
    s32 temp_v1;

    temp_v1 = *arg1;
    if (temp_v1 != 0) {
        *arg1 = temp_v1 + (arg0 - arg2);
        func_8001A6B8();
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A6B8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A704);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A784);
