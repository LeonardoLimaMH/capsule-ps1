#include "common.h"

#include "ghidra.h"
void func_800DF734(undefined4 param_1,uint param_2,ushort param_3,short param_4,short param_5)

{
    extern u8 D_80092008[];
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(D_80092008 + (param_2 & 0xffff) * 0x44);
  *(ushort *)((int)puVar2 + (*puVar2 >> 10 & 0x7e) + 4) =
       (param_4 - 1U & 0x3f) << 3 | param_3 & 7 | (param_5 - 1U & 0x3f) << 9;
  uVar1 = *puVar2;
  *puVar2 = uVar1 & 0xff8007ff | ((uVar1 >> 0xb & 0x3f) + 1 & 0x3f) << 0xb |
            ((uVar1 >> 0x11 & 0x3f) + 1 & 0x3f) << 0x11;
  return;
}
