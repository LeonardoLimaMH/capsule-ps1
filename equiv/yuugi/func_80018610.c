#include "common.h"

#include "ghidra.h"
void func_80018610(undefined4 param_1,int param_2)

{
    extern void * D_8008ED68[];
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar3 = *(uint **)((*D_8008ED68) + 0x1090);
  puVar2 = (uint *)0x0;
  if ((puVar3 != (uint *)0x0) && (puVar3 + 3 <= (uint *)((*D_8008ED68) + 0x4594U))) {
    puVar2 = puVar3 + 3;
  }
  *(uint **)((*D_8008ED68) + 0x1090) = puVar2;
  SetDrawMode(puVar3,0,0,param_1,0);
  *puVar3 = *puVar3 & 0xff000000 | *(uint *)(param_2 * 4 + (*D_8008ED68) + 0x70) & 0xffffff;
  iVar1 = param_2 * 4 + (*D_8008ED68);
  *(uint *)(iVar1 + 0x70) = *(uint *)(iVar1 + 0x70) & 0xff000000 | (uint)puVar3 & 0xffffff;
  return;
}
