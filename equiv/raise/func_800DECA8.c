#include "common.h"

#include "ghidra.h"
void func_800DECA8(uint param_1,uint param_2)

{
    extern u8 D_80091618[];
    extern u8 D_80092008[];
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = (uint *)(D_80092008 + (param_2 & 0xffff) * 0x44);
  *puVar1 = *puVar1 & 0xff800000 | *(ushort *)((param_2 & 0xffff) * 0x1a8 + -0x7ff6e958) & 1 |
            (param_1 & 1) << 1 | (param_2 & 7) << 2;
  do {
    *(undefined2 *)(puVar1 + 1) = 0;
    iVar2 = iVar2 + 1;
    puVar1 = (uint *)((int)puVar1 + 2);
  } while (iVar2 < 0x20);
  return;
}
