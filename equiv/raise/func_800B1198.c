#include "common.h"

#include "ghidra.h"
undefined4 func_800B1198(void)

{
    extern M2C_UNK D_8006AFCC[];
    extern M2C_UNK D_800EEB58[];
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = 0;
  puVar2 = D_8006AFCC;
  do {
    if (((D_800EEB58)[iVar1] != '\0') && (*(short *)(puVar2 + 0x30) == 1)) {
      uVar3 = 1;
    }
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 2;
  } while (iVar1 < 10);
  return uVar3;
}
