#include "common.h"

#include "ghidra.h"
void func_8001B16C(void)

{
    extern M2C_UNK D_80085428[];
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = 0;
  puVar2 = D_80085428;
  do {
    *(undefined1 *)(iVar1 + -0x7ff7aba4) = 0;
    puVar2[0x38] = 0;
    puVar2[0x39] = 0;
    *(undefined4 *)(puVar2 + 0x3c) = 0;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 8;
  } while (iVar1 < 3);
  return;
}
