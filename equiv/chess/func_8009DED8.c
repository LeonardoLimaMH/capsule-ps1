#include "common.h"

#include "ghidra.h"
undefined4 func_8009DED8(int param_1,int param_2,undefined4 param_3)

{
    extern M2C_UNK D_8008ED68[];
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  
  uVar3 = *(uint *)(param_2 * 0x10 + -0x7ff71218);
  bVar1 = *(byte *)(param_1 + 0x628);
  bVar5 = bVar1;
  if ((uVar3 & 0x1000) == 0) {
    if ((uVar3 & 0x4000) == 0) {
      if ((*(uint *)(param_2 * 0x10 + -0x7ff71210) & 0x40) != 0) {
        func_800A8E34(0x5d);
        return 1;
      }
      goto L8009DFCC;
    }
    do {
      bVar6 = bVar5 + 1;
      bVar4 = bVar1;
      if (4 < bVar5) break;
      iVar2 = func_800A8E34(param_1,param_3,bVar6);
      bVar5 = bVar6;
      bVar4 = bVar6;
    } while (iVar2 != 0);
  }
  else {
    do {
      bVar6 = bVar5 - 1;
      bVar4 = bVar1;
      if (bVar5 == 0) break;
      iVar2 = func_80034AB0(param_1,param_3,bVar6);
      bVar5 = bVar6;
      bVar4 = bVar6;
    } while (iVar2 != 0);
  }
  *(byte *)(param_1 + 0x628) = bVar4;
L8009DFCC:
  if (*(byte *)(param_1 + 0x628) != bVar1) {
    func_80034AB0(0x84);
    func_8009DB7C(param_1,*(byte *)(param_1 + 0x624) - 5);
  }
  return 0;
}
