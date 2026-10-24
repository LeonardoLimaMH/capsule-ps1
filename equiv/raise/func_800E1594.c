#include "common.h"

#include "ghidra.h"
uint func_800E1594(uint param_1)

{
    extern M2C_UNK D_80100F38[];
  return *(uint *)(*(int *)((param_1 & 0xffff) * 0x79c + -0x7fefef3c) + 0x38) & 1 ^ 1;
}
