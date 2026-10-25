#include "common.h"

#include "ghidra.h"
void func_800DBAA8(short param_1)

{
    extern u8 D_80063940[];
    extern u8 D_80091618[];
  ushort uVar1;
  uint uVar2;
  
  uVar1 = *(ushort *)(D_80091618 + param_1 * 0x1a8);
  uVar2 = func_800DBB3C();
  *(uint *)((uint)uVar1 * 0x3c + -0x7ff9c6b4) =
       *(uint *)((uint)uVar1 * 0x3c + -0x7ff9c6b4) & 0xffff07ff | (uVar2 & 0x1f) << 0xb;
  return;
}
