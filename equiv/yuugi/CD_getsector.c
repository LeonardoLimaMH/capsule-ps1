#include "common.h"

#include "ghidra.h"
undefined4 CD_getsector(undefined4 param_1,uint param_2)

{
    extern u8 * D_8007334C[];
    extern s8 * D_80073358[];
    extern s32 * D_8007335C[];
    extern s32 * D_80073380[];
    extern s32 * D_80073384[];
    extern s32 * D_80073388[];
    extern s32 * D_8007338C[];
    extern s32 * D_80073390[];
  uint uVar1;
  
  *(*D_8007334C) = 0;
  *(*D_80073358) = 0x80;
  *(*D_80073380) = 0x20943;
  *(*D_8007335C) = 0x1323;
  *(*D_80073384) = *(*D_80073384) | 0x8000;
  *(*D_80073388) = param_1;
  *(*D_8007338C) = param_2 | 0x10000;
  do {
  } while ((*(*D_8007334C) & 0x40) == 0);
  *(*D_80073390) = 0x11000000;
  uVar1 = *(*D_80073390);
  while ((uVar1 & 0x1000000) != 0) {
    uVar1 = *(*D_80073390);
  }
  *(*D_8007335C) = 0x1325;
  return 0;
}
