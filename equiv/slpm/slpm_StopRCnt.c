#include "common.h"

#include "ghidra.h"
undefined4 slpm_StopRCnt(uint param_1)

{
    extern void * D_80120894[];
    extern M2C_UNK D_8012089C[];
  *(uint *)((*D_80120894) + 4) =
       *(uint *)((*D_80120894) + 4) & ~*(uint *)((*D_8012089C) + (param_1 & 0xffff) * 4);
  return 1;
}
