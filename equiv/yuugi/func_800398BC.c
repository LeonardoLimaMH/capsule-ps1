#include "common.h"

#include "ghidra.h"
int func_800398BC(byte *param_1,uint param_2,uint param_3)

{
    extern M2C_UNK D_800944B8[];
    extern M2C_UNK D_800947E8[];
  return *(int *)(*(short *)(((param_3 & 0xff) >> 4) * 0x2ac + -0x7ff6b8c0) * 0x1c + -0x7ff6b814) +
         ((uint)*param_1 * 0x10 + (param_2 & 0xffff)) * 0x20 + 0x820;
}
