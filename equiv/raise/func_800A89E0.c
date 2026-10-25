#include "common.h"

#include "ghidra.h"
void func_800A89E0(uint param_1,short param_2)

{
    extern u8 D_800916E8[];
    extern u8 D_800ECB84[];
  short sVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)(D_800916E8 + (param_1 & 0xffff) * 0x1a8);
  iVar3 = 1;
  do {
    sVar1 = (short)iVar3;
    sVar2 = *psVar4 + *(short *)(D_800ECB84 + sVar1 * 2 + param_2 * 0x22);
    if (1 < sVar1) {
      if (sVar2 < 0) {
        sVar2 = 0;
      }
      else if (0xff < sVar2) {
        sVar2 = 0xff;
      }
    }
    if (0xc < sVar1) {
      if (sVar2 < 0) {
        sVar2 = 0;
      }
      else if (100 < sVar2) {
        sVar2 = 100;
      }
    }
    *psVar4 = sVar2;
    iVar3 = iVar3 + 1;
    psVar4 = psVar4 + 1;
  } while (iVar3 * 0x10000 >> 0x10 < 0x11);
  return;
}
