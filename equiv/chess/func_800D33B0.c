#include "common.h"

#include "ghidra.h"
int func_800D33B0(uint param_1)

{
    extern M2C_UNK D_80085428[];
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  iVar1 = (param_1 & 0xff) * 0x2e8;
  do {
    if (*(char *)(iVar1 + -0x7ff7a5e2) != '\0') {
      iVar3 = iVar3 + 1;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x7c;
  } while (iVar2 < 5);
  return iVar3;
}
