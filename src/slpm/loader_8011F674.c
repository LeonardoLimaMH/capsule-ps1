#include "common.h"

#include "ghidra.h"
void SpuSetNoiseVoice(undefined4 param_1,undefined4 param_2)

{
  slpm__SpuSetAnyVoice(param_1,param_2,0xca,0xcb);
  return;
}
