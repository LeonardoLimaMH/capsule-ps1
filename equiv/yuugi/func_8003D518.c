#include "common.h"

#include "ghidra.h"
int func_8003D518(short param_1)

{
    extern M2C_UNK D_800944B8[];
  short sVar1;
  
  if ((*(short *)(param_1 * 0x2ac + -0x7ff6b8be) == 1) && (sVar1 = func_8003C5BC(), sVar1 == 3)) {
    *(undefined2 *)(param_1 * 0x2ac + -0x7ff6b8be) = 3;
  }
  return (int)*(short *)(param_1 * 0x2ac + -0x7ff6b8be);
}
