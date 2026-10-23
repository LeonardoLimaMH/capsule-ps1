#include "common.h"

#include "ghidra.h"
bool func_800A8710(int param_1,int param_2,int param_3)

{
    extern M2C_UNK D_80063940[];
  return (*(uint *)((uint)*(byte *)(param_1 + param_3 * 0x7c + param_2 * 0x2e8 + 0x5e8) * 0x3c +
                   -0x7ff9c6b8) >> 8 & 0xf) == 1;
}
