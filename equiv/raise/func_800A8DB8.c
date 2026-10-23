#include "common.h"

#include "ghidra.h"
int func_800A8DB8(short param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  if (0 < param_1) {
    do {
      iVar1 = iVar2 << 0x10;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + (uint)*(ushort *)((iVar1 >> 0xf) + param_2);
    } while (iVar2 * 0x10000 >> 0x10 < (int)param_1);
  }
  return (int)(((uint)*(ushort *)(((iVar2 << 0x10) >> 0xf) + param_2) + iVar3 + -1) * 0x10000) >>
         0x10;
}
