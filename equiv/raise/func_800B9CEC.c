#include "common.h"

#include "ghidra.h"
undefined4 func_800B9CEC(void)

{
    extern u16 D_8006AF80[];
    extern M2C_UNK D_80091618[];
  int iVar1;
  uint uVar2;
  ushort uVar3;
  
  if ((*D_8006AF80) != 0xffff) {
    iVar1 = (uint)(*D_8006AF80) * 0x1a8;
    if (*(short *)(iVar1 + -0x7ff6e9d8) == -1) {
      return 0;
    }
    if (*(short *)(iVar1 + -0x7ff6e95e) != -1) {
      return 0;
    }
    if (2 < *(ushort *)(iVar1 + -0x7ff6e964)) {
      return 0;
    }
    iVar1 = func_800ACDE0();
    if (iVar1 == 1) {
      return 0;
    }
    iVar1 = func_800E0DF8();
    uVar3 = 0;
    if (iVar1 == 1) {
      return 0;
    }
    uVar2 = 0;
    do {
      if ((((uVar2 != (*D_8006AF80)) && (iVar1 = uVar2 * 0x1a8, *(short *)(iVar1 + -0x7ff6e9d8) != -1)
           ) && (*(short *)(iVar1 + -0x7ff6e95e) == -1)) && (*(ushort *)(iVar1 + -0x7ff6e964) < 3))
      {
        return 1;
      }
      uVar3 = uVar3 + 1;
      uVar2 = (uint)uVar3;
    } while (uVar3 < 6);
  }
  return 0;
}
