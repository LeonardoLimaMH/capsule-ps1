#include "common.h"

#include "ghidra.h"
undefined4 slpm_CD_initvol(void)

{
    extern s8 * D_80131FE4[];
    extern s8 * D_80131FE8[];
    extern u8 * D_80131FEC[];
    extern u8 * D_80131FF0[];
    extern void * D_80131FF8[];
  int iVar1;
  
  iVar1 = (*D_80131FF8);
  if ((*(short *)((*D_80131FF8) + 0x1b8) == 0) &&
     (*(short *)((*D_80131FF8) + 0x1ba) == 0)) {
    *(undefined2 *)((*D_80131FF8) + 0x180) = 0x3fff;
    *(undefined2 *)(iVar1 + 0x182) = 0x3fff;
  }
  iVar1 = (*D_80131FF8);
  *(undefined2 *)((*D_80131FF8) + 0x1b0) = 0x3fff;
  *(undefined2 *)(iVar1 + 0x1b2) = 0x3fff;
  *(undefined2 *)(iVar1 + 0x1aa) = 0xc001;
  *(*D_80131FE4) = 2;
  *(*D_80131FEC) = 0x80;
  *(*D_80131FF0) = 0;
  *(*D_80131FE4) = 3;
  *(*D_80131FE8) = 0x80;
  *(*D_80131FEC) = 0;
  *(*D_80131FF0) = 0x20;
  return 0;
}
