#include "common.h"

#include "ghidra.h"
void func_80013C44(void)

{
    extern M2C_UNK D_8008FC10[];
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 2;
  puVar1 = (undefined4 *)0x8008fc58;
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -9;
  } while (-1 < iVar2);
  return;
}
