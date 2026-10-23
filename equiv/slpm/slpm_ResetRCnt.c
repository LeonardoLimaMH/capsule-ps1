#include "common.h"

#include "ghidra.h"
bool slpm_ResetRCnt(uint param_1)

{
    extern s32 D_80120898[];
  param_1 = param_1 & 0xffff;
  if (param_1 < 3) {
    *(undefined2 *)(param_1 * 0x10 + (*D_80120898)) = 0;
  }
  return param_1 < 3;
}
