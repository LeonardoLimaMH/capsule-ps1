#include "common.h"

#include "ghidra.h"
void func_800FE0B4(uint param_1,short *param_2)

{
    extern M2C_UNK D_80085428[];
    extern s32 D_80118C18[];
  byte bVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = ((param_1 & 0x7f) - 1) * 0x7c + ((param_1 & 0xff) >> 7) * 0x2e8;
  bVar1 = *(byte *)(iVar3 + -0x7ff7a5db);
  bVar2 = *(byte *)(iVar3 + -0x7ff7a5da);
  *param_2 = (ushort)bVar1 * 100 + -0x226;
  param_2[2] = ((ushort)bVar2 * 0x10 + (ushort)bVar2 * 8) * 4 + (ushort)bVar2 * 4 + -0x226;
  param_2[1] = ((ushort)((uint)*(undefined4 *)
                                ((uint)bVar2 * 4 + (uint)bVar1 * 0x34 + (*D_80118C18)) >>
                        0x13) & 7) * -0x32;
  return;
}
