#include "common.h"

#include "ghidra.h"
void func_80023ECC(int param_1,int param_2)

{
    extern u8 D_8008F702[];
  short sVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  
  if ((*D_8008F702) != '\x01') {
    iVar6 = 0;
    psVar4 = (short *)(*(int *)(param_1 + 0xb4) + param_2 * 0x20);
    psVar2 = (short *)(*(int *)(param_1 + 0xb8) + param_2 * 0x20);
    psVar5 = psVar2 + 2;
    psVar3 = psVar4 + 2;
    do {
      iVar6 = iVar6 + 1;
      sVar1 = *psVar2;
      psVar2 = psVar2 + 4;
      *psVar4 = *psVar4 + (sVar1 >> 7);
      psVar4 = psVar4 + 4;
      psVar3[-1] = psVar3[-1] + (psVar5[-1] >> 7);
      sVar1 = *psVar5;
      psVar5 = psVar5 + 4;
      *psVar3 = *psVar3 + (sVar1 >> 7);
      psVar3 = psVar3 + 4;
    } while (iVar6 < 4);
  }
  return;
}
