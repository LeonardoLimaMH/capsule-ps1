#include "common.h"

#include "ghidra.h"
bool func_800AEC94(int param_1,int param_2)

{
    extern M2C_UNK D_800EEB9C[];
  return *(int *)(param_1 * 0x24 + param_2 * 4 + -0x7ff1109c) == 1;
}
