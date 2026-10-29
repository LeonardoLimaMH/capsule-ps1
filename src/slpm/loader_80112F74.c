#include "common.h"

#include "common.h"

#include "ghidra.h"
void func_80112F74(undefined4 *param_1,uint param_2)

{
    extern s32 * D_80120A74[];
    extern s32 * D_80120A78[];
    extern s32 * D_80120A7C[];
    extern s32 * D_80120AA4[];
    extern s32 * D_80120AAC[];
  func_80113090();
  *(*D_80120AAC) = *(*D_80120AAC) | 0x88;
  *(*D_80120A74) = (int)(param_1 + 1);
  *(*D_80120A78) = (param_2 >> 5) << 0x10 | 0x20;
  *(*D_80120AA4) = *param_1;
  *(*D_80120A7C) = 0x1000201;
  return;
}

#include "common.h"

void func_80113004(s32 arg0, u32 arg1) {
    extern s32 * D_80120A80;
    extern s32 * D_80120A84;
    extern s32 * D_80120A88;
    extern s32 * D_80120AAC;
    func_80113124();
    *D_80120AAC |= 0x88;
    *D_80120A88 = 0;
    *D_80120A80 = arg0;
    *D_80120A84 = ((arg1 >> 5) << 0x10) | 0x20;
    *D_80120A88 = 0x01000200;
}
