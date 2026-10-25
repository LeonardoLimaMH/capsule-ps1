#include "common.h"

#include "ghidra.h"
void func_800EE434(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
    extern u8 D_80018600[];
    extern u8 D_80085A10[];
    extern int func_800EE2D4();
  int iVar1;
  int iVar2;
  
  iVar1 = param_3 * 0x2e8 + param_4 * 0x7c;
  iVar2 = func_80015B3C(func_800EE2D4,D_80018600,1);
  *(undefined4 *)(iVar2 + 0x14) = param_2;
  *(char *)(iVar2 + 0x2c) = (char)param_3;
  *(char *)(iVar2 + 0x2d) = (char)param_4;
  (D_80085A10)[iVar1 + 0x20] = 3;
  (D_80085A10)[iVar1 + 0x21] = 4;
  *(uint *)(D_80085A10 + iVar1 + 0x18) = *(uint *)(D_80085A10 + iVar1 + 0x18) | 0x200000;
  func_80034AB0(0x800e);
  return;
}
