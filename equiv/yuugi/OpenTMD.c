#include "common.h"

#include "ghidra.h"
void OpenTMD(undefined4 param_1,undefined4 param_2)

{
    extern M2C_UNK D_800965C4[];
    extern M2C_UNK D_800965C8[];
    extern M2C_UNK D_800965CC[];
    extern s32 D_800965D0[];
  (*D_800965D0) = func_8004CC60(param_1,param_2,D_800965CC,D_800965C4,D_800965C8);
  return;
}
