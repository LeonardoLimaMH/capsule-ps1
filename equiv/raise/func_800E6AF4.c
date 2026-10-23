#include "common.h"

#include "ghidra.h"
void func_800E6AF4(uint param_1,uint param_2)

{
    extern M2C_UNK D_800916E8[];
    extern M2C_UNK D_800ECBEC[];
  short sVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  int iVar5;
  
  iVar2 = (param_1 & 0xffff) * 0x1a8;
  psVar3 = (short *)(iVar2 + -0x7ff6e916);
  iVar5 = 2;
  psVar4 = (short *)((param_2 & 0xffff) * 0x22 + -0x7ff13410);
  do {
    if ((iVar5 != 0x10) || (*(short *)(iVar2 + -0x7ff6e8fa) != 0)) {
      *psVar3 = *psVar3 + *psVar4;
    }
    sVar1 = *psVar3;
    if (sVar1 < 0) {
      *psVar3 = 0;
    }
    else if (iVar5 < 0xd) {
      if (0xff < sVar1) {
        *psVar3 = 0xff;
      }
    }
    else if (100 < sVar1) {
      *psVar3 = 100;
    }
    psVar4 = psVar4 + 1;
    iVar5 = iVar5 + 1;
    psVar3 = psVar3 + 1;
  } while (iVar5 < 0x11);
  return;
}
