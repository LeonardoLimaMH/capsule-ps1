#include "common.h"

#include "ghidra.h"
undefined4 func_800E102C(void)

{
    extern M2C_UNK D_8006AFCC[];
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = D_8006AFCC;
  do {
    if (*(short *)(puVar1 + 0x30) == 1) {
      return 1;
    }
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 2;
  } while (iVar2 < 0xb);
  return 0;
}
