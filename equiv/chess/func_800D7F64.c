#include "common.h"

#include "ghidra.h"
uint func_800D7F64(uint param_1,uint param_2)

{
    extern M2C_UNK D_80085428[];
    extern s32 D_80118C18[];
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = (param_1 & 0xff) >> 7;
  iVar4 = ((param_1 & 0x7f) - 1) * 0x7c + uVar5 * 0x2e8;
  bVar1 = *(byte *)(iVar4 + -0x7ff7a5db);
  bVar2 = *(byte *)(iVar4 + -0x7ff7a5da);
  uVar3 = func_800D7B80(param_1 & 0xff,*(undefined1 *)(iVar4 + -0x7ff7a5e1));
  if ((*(uint *)((uint)bVar2 * 4 + (uint)bVar1 * 0x34 + (*D_80118C18)) >> 6 & 0x1fff) ==
      2) {
    uVar5 = func_800D23F0(uVar5,uVar3,
                          *(undefined1 *)
                           (((param_2 & 0x7f) - 1) * 0x7c + ((param_2 & 0xff) >> 7) * 0x2e8 +
                           -0x7ff7a5e0));
  }
  else {
    iVar4 = func_800D23F0(uVar5,uVar3,
                          *(undefined1 *)
                           (((param_2 & 0x7f) - 1) * 0x7c + ((param_2 & 0xff) >> 7) * 0x2e8 +
                           -0x7ff7a5e0));
    uVar5 = (uint)(((iVar4 << 0x10) >> 0x10) - ((iVar4 << 0x10) >> 0x1f)) >> 1;
  }
  return uVar5 & 0xff;
}
