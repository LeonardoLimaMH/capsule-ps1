#include "common.h"

#include "ghidra.h"
void func_8001B100(int param_1)

{
    extern M2C_UNK D_8008ED68;
    extern s32 D_8008F7D0;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
  if (*(int *)(param_1 + 0x34) == 1) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if ((*(int *)(param_1 + 0x2c) == 0) || (D_8008F7D0 == 1)) {
    func_80013920();
  }
  return;
}
