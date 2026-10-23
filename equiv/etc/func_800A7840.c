#include "common.h"

#include "ghidra.h"
void func_800A7840(int param_1)

{
    extern M2C_UNK D_80063940[];
    extern s32 D_800B3C1C[];
  if (param_1 == 0) {
    (*D_800B3C1C) = ((*D_800B3C1C) + 1) % 0x67;
  }
  else {
    (*D_800B3C1C) = (*D_800B3C1C) + -1;
    if ((*D_800B3C1C) < 0) {
      (*D_800B3C1C) = 0x66;
    }
  }
  if ((*(uint *)((*D_800B3C1C) * 0x3c + -0x7ff9c6ac) >> 5 & 1) == 0) {
    func_800A7840(param_1);
  }
  return;
}
