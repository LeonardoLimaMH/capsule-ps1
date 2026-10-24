#include "common.h"

#include "ghidra.h"
undefined4 CD_getsector2(undefined4 param_1,uint param_2)

{
    extern u8 * D_8007334C[];
    extern s8 * D_80073358[];
    extern s32 * D_8007335C[];
    extern s32 * D_80073380[];
    extern s32 * D_80073384[];
    extern s32 * D_80073388[];
    extern s32 * D_8007338C[];
    extern s32 * D_80073390[];
  byte bVar1;
  
  *(*D_8007334C) = 0;
  *(*D_80073358) = 0x80;
  *(*D_80073380) = 0x21020843;
  *(*D_8007335C) = 0x1325;
  *(*D_80073384) = *(*D_80073384) | 0x8000;
  *(*D_80073388) = param_1;
  *(*D_8007338C) = param_2 | 0x10000;
  bVar1 = *(*D_8007334C);
  while ((bVar1 & 0x40) == 0) {
    bVar1 = *(*D_8007334C);
  }
  *(*D_80073390) = 0x11400100;
  return 0;
}
