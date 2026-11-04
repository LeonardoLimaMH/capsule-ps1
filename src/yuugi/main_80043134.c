#include "common.h"
#include "yuugi.h"

void func_80043134(void) {
    extern s32 D_80072E4C;
    extern s32 D_80072E2C[];
    u32 *p;
    s32 i;

    i = 0;
    p = (u32 *)D_80072E2C;
    D_80072E4C = D_80072E4C + 1;
    do {
        if ((s32 (*)())*p != 0) {
            ((s32 (*)())*p)();
        }
        i++;
        p++;
    } while (i < 8);
}

extern s32 D_80072E2C[];

#include "ghidra.h"

s32 func_800431A0(s32 i, s32 value) {
    s32 old = D_80072E2C[i];

    if (value != old) {
        D_80072E2C[i] = value;
    }
    return old;
}

void func_800431CC(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + -1;
  if (param_2 != 0) {
    do {
      *param_1 = 0;
      iVar1 = iVar1 + -1;
      param_1 = param_1 + 1;
    } while (iVar1 != -1);
  }
  return;
}
