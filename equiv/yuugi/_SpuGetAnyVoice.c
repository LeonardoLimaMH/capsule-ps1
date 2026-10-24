#include "common.h"

#include "ghidra.h"
uint _SpuGetAnyVoice(int param_1,int param_2)

{
    extern s32 D_80071598[];
  return (uint)*(ushort *)(param_1 * 2 + (*D_80071598)) |
         (*(ushort *)(param_2 * 2 + (*D_80071598)) & 0xff) << 0x10;
}
