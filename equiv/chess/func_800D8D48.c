#include "common.h"

#include "ghidra.h"
#define D_80085A10 (*(s32 *)0x80085A10)
#define _D_80118C18 (*(s32 *)0x80118C18)
extern s32 func_800202A4();
undefined4 func_800D8D48(uint param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;

  iVar3 = ((param_1 & 0x7f) - 1) * 0x7c + ((param_1 & 0xff) >> 7) * 0x2e8;
  if (((&D_80085A10)[iVar3] != '\x03') ||
     (uVar2 = 0,
     (*(uint *)((uint)*(byte *)(iVar3 + -0x7ff7a5da) * 4 +
               (uint)*(byte *)(iVar3 + -0x7ff7a5db) * 0x34 + _D_80118C18) >> 6 & 0x1fff
     ) == 2)) {
    sVar1 = *(short *)((*(uint *)((uint)(byte)(&D_80085A10)
                                              [((param_1 & 0x7f) - 1) * 0x7c +
                                               ((param_1 & 0xff) >> 7) * 0x2e8] * 0x3c + -0x7ff9c6b8
                                 ) >> 0x11 & 0x7f) * 0x58 + -0x7ff94d48);
    iVar3 = func_800202A4(100);
    uVar2 = 1;
    if (sVar1 <= iVar3) {
      uVar2 = 0;
    }
  }
  return uVar2;
}
