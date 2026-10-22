#include "common.h"

#include "ghidra.h"
void slpm_SpuSetReverbVoice(undefined4 param_1,undefined4 param_2)

{
  slpm__SpuSetAnyVoice(param_1,param_2,0xcc,0xcd);
  return;
}
