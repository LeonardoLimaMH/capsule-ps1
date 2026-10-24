#include "common.h"

#include "ghidra.h"
void func_800AECE0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(char *)(param_2 + param_3 + 0x5e0) != '\0') {
    iVar3 = 0;
    iVar1 = param_1 + param_3 * 0x10;
    *(undefined4 *)(iVar1 + 0x88) = 0;
    *(undefined4 *)(iVar1 + 0x80) = 0;
    do {
      iVar1 = 3;
      puVar2 = (undefined4 *)(param_1 + 0xb0);
      do {
        *puVar2 = 0;
        iVar1 = iVar1 + -1;
        puVar2 = puVar2 + -1;
      } while (-1 < iVar1);
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 0x10;
    } while (iVar3 < 2);
  }
  return;
}
