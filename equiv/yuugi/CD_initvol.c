#include "common.h"

#include "ghidra.h"
undefined4 CD_initvol(void)

{
    extern s8 * D_8007334C[];
    extern s8 * D_80073350[];
    extern u8 * D_80073354[];
    extern u8 * D_80073358[];
    extern void * D_80073360[];
  int iVar1;
  
  iVar1 = (*D_80073360);
  if ((*(short *)((*D_80073360) + 0x1b8) == 0) &&
     (*(short *)((*D_80073360) + 0x1ba) == 0)) {
    *(undefined2 *)((*D_80073360) + 0x180) = 0x3fff;
    *(undefined2 *)(iVar1 + 0x182) = 0x3fff;
  }
  iVar1 = (*D_80073360);
  *(undefined2 *)((*D_80073360) + 0x1b0) = 0x3fff;
  *(undefined2 *)(iVar1 + 0x1b2) = 0x3fff;
  *(undefined2 *)(iVar1 + 0x1aa) = 0xc001;
  *(*D_8007334C) = 2;
  *(*D_80073354) = 0x80;
  *(*D_80073358) = 0;
  *(*D_8007334C) = 3;
  *(*D_80073350) = 0x80;
  *(*D_80073354) = 0;
  *(*D_80073358) = 0x20;
  return 0;
}
