#include "common.h"
#include "yuugi.h"

#include "ghidra.h"
void SpuSetReverbVoice(undefined4 param_1,undefined4 param_2)

{
  _SpuSetAnyVoice(param_1,param_2,0xcc,0xcd);
  return;
}
