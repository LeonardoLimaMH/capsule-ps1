#include "common.h"

#include "ghidra.h"
void func_80013A68(void)

{
    extern void * D_80078B7C[];
    extern s32 D_8008ED9C[];
  int iVar1;
  int iVar2;
  
  if (((*D_8008ED9C) == 0) &&
     (iVar1 = *(int *)((*D_80078B7C) + 0xc578),
     *(int *)(*(int *)((*D_80078B7C) + 0xc578) + 0x10) != 0)) {
    while (iVar1 != 0) {
      (**(code **)(iVar1 + 0x10))(iVar1);
      if (*(int *)(iVar1 + 0x10) == 0) {
        iVar2 = *(int *)(iVar1 + 8);
        func_80013928(iVar1);
        iVar1 = iVar2;
      }
      else {
        iVar1 = *(int *)(iVar1 + 8);
      }
    }
  }
  iVar1 = *(int *)((*D_80078B7C) + 0xc578);
  if (*(int *)(*(int *)((*D_80078B7C) + 0xc578) + 0x10) != 0) {
    while (iVar1 != 0) {
      (**(code **)(iVar1 + 0xc))(iVar1);
      if (*(int *)(iVar1 + 0x10) == 0) {
        iVar2 = *(int *)(iVar1 + 8);
        func_80013928(iVar1);
        iVar1 = iVar2;
      }
      else {
        iVar1 = *(int *)(iVar1 + 8);
      }
    }
  }
  return;
}
