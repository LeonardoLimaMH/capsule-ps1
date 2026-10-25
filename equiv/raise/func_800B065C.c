#include "common.h"

#include "ghidra.h"
uint func_800B065C(undefined2 param_1,short param_2)

{
    extern u8 D_800EEAA8[];
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = func_800E1820(param_1);
  if (iVar2 != 0) {
    return 0;
  }
  iVar2 = func_800E17F8(param_1);
  if (iVar2 != 0) {
    if (param_2 != -1) {
      iVar2 = func_800E1820(param_2);
      if (iVar2 != 0) {
        return 0;
      }
      iVar2 = func_800E17F8(param_2);
      if (iVar2 == 0) {
        return 0;
      }
    }
    iVar2 = 4;
    puVar3 = (undefined4 *)((*D_800EEAA8) + 0x10);
    do {
      sVar1 = (*(code *)*puVar3)(param_1,param_2);
      if (sVar1 != 0) {
        return iVar2 + 1U & 0xffff;
      }
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < 0xf);
  }
  return 0;
}
