#include "common.h"

#include "ghidra.h"
void func_800B3878(int param_1)

{
    extern M2C_UNK D_80069AD4[];
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 0x7a4) = 0x10;
  iVar3 = 0;
  puVar2 = D_80069AD4;
  do {
    puVar1 = (undefined4 *)(puVar2 + 0x44);
    puVar2 = puVar2 + 4;
    iVar3 = iVar3 + 1;
    *(undefined4 *)(param_1 + 0x77c) = *puVar1;
    param_1 = param_1 + 4;
  } while (iVar3 < 3);
  return;
}
