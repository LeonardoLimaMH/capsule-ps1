#include "common.h"

#include "ghidra.h"
undefined4 slpm_GetDispEnv(undefined4 param_1)

{
    extern M2C_UNK D_80131BA0[];
  slpm_memcpy(param_1,D_80131BA0,0x14);
  return param_1;
}
