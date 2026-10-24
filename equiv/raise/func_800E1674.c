#include "common.h"

#include "ghidra.h"
ushort func_800E1674(uint param_1)

{
    extern M2C_UNK D_80100F38[];
  return *(ushort *)((param_1 & 0xffff) * 0x79c + -0x7fefed40) & 1;
}
