#include "common.h"

#include "ghidra.h"
undefined4 StopRCnt(uint param_1)

{
    extern void * D_80078B3C[];
    extern M2C_UNK D_80078B44[];
  *(uint *)((*D_80078B3C) + 4) =
       *(uint *)((*D_80078B3C) + 4) & ~*(uint *)((*D_80078B44) + (param_1 & 0xffff) * 4);
  return 1;
}
