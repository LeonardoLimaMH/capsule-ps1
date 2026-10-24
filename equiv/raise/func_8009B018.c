#include "common.h"

#include "ghidra.h"
bool func_8009B018(uint param_1)

{
    extern u16 D_8006AF80[];
    extern M2C_UNK D_80091618[];
  int iVar1;
  
  iVar1 = param_1 * 0x1a8;
  if (*(short *)(iVar1 + -0x7ff6e9d8) != -1) {
    if (param_1 == (*D_8006AF80)) {
      return false;
    }
    if (*(short *)(iVar1 + -0x7ff6e95e) == -1) {
      return *(ushort *)(iVar1 + -0x7ff6e964) < 3;
    }
  }
  return false;
}
