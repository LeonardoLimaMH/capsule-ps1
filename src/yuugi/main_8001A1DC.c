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
