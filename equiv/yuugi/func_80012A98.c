#include "common.h"

#include "ghidra.h"
void func_80012A98(void)

{
    extern M2C_UNK D_8008ED68[];
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = (int *)0x8008eec0;
  iVar5 = 0;
  puVar3 = (ushort *)0x8008eec6;
  do {
    uVar2 = (uint)*puVar3;
    if (uVar2 - 1 < 3) {
      uVar1 = puVar3[-1];
      if (uVar1 == 1) {
        if (uVar2 == 2) {
          *(ushort *)(*piVar4 + 4) = puVar3[1];
          *(ushort *)(*piVar4 + 6) = puVar3[2];
        }
        if (*puVar3 == 3) {
          func_80012C7C(*piVar4,(int)(short)puVar3[1],(int)(short)puVar3[2]);
          *puVar3 = 0;
        }
        else {
          func_80012D70(*piVar4);
          *puVar3 = 0;
        }
      }
      else if (uVar1 < 2) {
        if (uVar1 == 0) {
          if (uVar2 == 2) {
            *(ushort *)(*piVar4 + 4) = puVar3[1];
            *(ushort *)(*piVar4 + 6) = puVar3[2];
          }
          if (*puVar3 == 3) {
            func_80012E54(*piVar4,(int)(short)puVar3[1],(int)(short)puVar3[2]);
            *puVar3 = 0;
          }
          else {
            func_80012EB8(*piVar4);
            *puVar3 = 0;
          }
        }
        else {
          *puVar3 = 0;
        }
      }
      else if (uVar1 == 0x10) {
        func_80012F0C(*piVar4);
        *puVar3 = 0;
      }
      else {
        *puVar3 = 0;
      }
    }
    iVar5 = iVar5 + 1;
    puVar3 = puVar3 + 6;
    piVar4 = piVar4 + 3;
  } while (iVar5 < 0x50);
  return;
}
