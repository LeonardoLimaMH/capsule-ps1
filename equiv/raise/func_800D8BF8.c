#include "common.h"

#include "ghidra.h"
undefined4 func_800D8BF8(void)

{
    extern M2C_UNK D_800EE9B8[];
    extern M2C_UNK D_80100F38[];
  uint uVar1;
  int iVar2;
  
  iVar2 = 1;
  while( true ) {
    uVar1 = func_800B1260(iVar2);
    if (((((uVar1 & 0xffff) != 0xffff) &&
         (uVar1 = *(uint *)((uVar1 & 0xffff) * 0x79c + -0x7fefe930), (uVar1 >> 0xe & 0x3f) == 9)) &&
        ((uVar1 >> 0x1a & 0x1f) - 10 < 2)) &&
       (*(int *)((*D_800EE9B8) + (1 - iVar2) * 4) != 0)) break;
    iVar2 = iVar2 + -1;
    if (iVar2 < 0) {
      return 0;
    }
  }
  return 1;
}
