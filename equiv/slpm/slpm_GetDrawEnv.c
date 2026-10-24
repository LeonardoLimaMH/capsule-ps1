#include "common.h"

#include "ghidra.h"
undefined4 slpm_GetDrawEnv(undefined4 param_1)

{
    extern M2C_UNK D_80131B44[];
  slpm_memcpy(param_1,D_80131B44,0x5c);
  return param_1;
}
