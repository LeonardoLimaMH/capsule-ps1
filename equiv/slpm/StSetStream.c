#include "common.h"

#include "ghidra.h"
void StSetStream(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
    extern s32 D_80134E90[];
    extern s16 D_80134E94[];
    extern s32 D_80134E98[];
    extern s32 D_80134EA0[];
    extern s32 D_80134EA8[];
    extern s32 D_80134EC0[];
    extern s32 D_80137320[];
    extern s32 D_80137324[];
  func_8011A0B4(1);
  (*D_80134EC0) = 0;
  (*D_80137320) = param_4;
  (*D_80134E98) = param_1 & 1;
  (*D_80134EA8) = 0;
  (*D_80134EA0) = 0;
  (*D_80134E94) = 0;
  (*D_80134E90) = 0;
  (*D_80137324) = param_5;
  return;
}
