#include "common.h"

#include "ghidra.h"
bool func_800B9C3C(void)

{
    extern u16 D_8006AF80[];
    extern M2C_UNK D_80091618[];
  int iVar1;
  
  if ((*D_8006AF80) != 0xffff) {
    if (*(short *)((uint)(*D_8006AF80) * 0x1a8 + -0x7ff6e9d8) == -1) {
      return false;
    }
    if (*(short *)((uint)(*D_8006AF80) * 0x1a8 + -0x7ff6e95e) != -1) {
      return false;
    }
    iVar1 = func_800E16AC();
    if (iVar1 != 0) {
      return false;
    }
    iVar1 = func_800ACDE0();
    if (iVar1 != 1) {
      iVar1 = func_800E0DF8();
      return iVar1 != 1;
    }
  }
  return false;
}
