#include "common.h"

#include "ghidra.h"
void func_800FE188(int param_1,short *param_2)

{
    extern s32 D_80118C18[];
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)(param_1 + 0x15);
  bVar2 = *(byte *)(param_1 + 0x16);
  *param_2 = (ushort)bVar1 * 100 + -0x226;
  param_2[2] = ((ushort)bVar2 * 0x10 + (ushort)bVar2 * 8) * 4 + (ushort)bVar2 * 4 + -0x226;
  param_2[1] = ((ushort)((uint)*(undefined4 *)
                                ((uint)bVar2 * 4 + (uint)bVar1 * 0x34 + (*D_80118C18)) >>
                        0x13) & 7) * -0x32;
  return;
}
