#include "common.h"

#include "ghidra.h"
void func_800FE21C(int param_1,int param_2,short *param_3)

{
    extern s32 D_80118C18[];
  *param_3 = (short)param_1 * 100 + -0x226;
  param_3[2] = (short)param_2 * 100 + -0x226;
  if ((param_1 < 0xd) && (param_2 < 0xd)) {
    param_3[1] = ((ushort)((uint)*(undefined4 *)
                                  (param_2 * 4 + param_1 * 0x34 + (*D_80118C18)) >> 0x13)
                 & 7) * -0x32;
  }
  else {
    param_3[1] = 0;
  }
  return;
}
