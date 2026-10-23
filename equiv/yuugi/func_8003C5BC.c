#include "common.h"

#include "ghidra.h"
undefined4 func_8003C5BC(int param_1)

{
    extern M2C_UNK D_800944B8[];
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (*(short *)(param_1 * 0x2ac + -0x7ff6b8a6) != 0) {
    iVar2 = 0;
    do {
      if (*(char *)(iVar2 + param_1 * 0x2ac + -0x7ff6bb28) != '\x01') {
        return 1;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x28;
    } while (iVar1 < (int)(uint)*(ushort *)(param_1 * 0x2ac + -0x7ff6b8a6));
  }
  return 3;
}
