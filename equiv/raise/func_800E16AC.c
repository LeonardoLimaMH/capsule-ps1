#include "common.h"

#include "ghidra.h"
bool func_800E16AC(uint param_1)

{
    extern M2C_UNK D_80091618[];
  return *(short *)((param_1 & 0xffff) * 0x1a8 + -0x7ff6e848) == 1;
}
