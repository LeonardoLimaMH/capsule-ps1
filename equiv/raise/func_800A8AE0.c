#include "common.h"

#include "ghidra.h"
void func_800A8AE0(uint param_1,uint param_2,short param_3)

{
    extern u8 D_800916E8[];
    extern u8 D_800ECBEC[];
  short sVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  short *psVar5;
  
  iVar2 = (param_1 & 0xffff) * 0x1a8;
  psVar5 = (short *)(D_800916E8 + iVar2);
  iVar4 = 1;
  do {
    sVar3 = *psVar5;
    sVar1 = (short)iVar4;
    if ((sVar1 != 0x10) || (*(short *)(iVar2 + -0x7ff6e8fa) != 0)) {
      sVar3 = sVar3 + *(short *)(D_800ECBEC + sVar1 * 2 + (param_2 & 0xffff) * 0x22) *
                      param_3;
    }
    if (1 < sVar1) {
      if (sVar3 < 0) {
        sVar3 = 0;
      }
      else if (0xff < sVar3) {
        sVar3 = 0xff;
      }
    }
    if (0xc < sVar1) {
      if (sVar3 < 0) {
        sVar3 = 0;
      }
      else if (100 < sVar3) {
        sVar3 = 100;
      }
    }
    *psVar5 = sVar3;
    iVar4 = iVar4 + 1;
    psVar5 = psVar5 + 1;
  } while (iVar4 * 0x10000 >> 0x10 < 0x11);
  return;
}
