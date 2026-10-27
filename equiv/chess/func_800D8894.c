#include "common.h"

#include "ghidra.h"
#define DAT_80063948 (*(s32 *)0x80063948)
#define DAT_8006b2b4 (*(s32 *)0x8006B2B4)
#define DAT_8006b2b8 (*(s32 *)0x8006B2B8)
#define DAT_80085a10 (*(u8 *)0x80085A10)
#define D_80118C18 (*(s32 *)0x80118C18)
#define func_800202A4 ((s32 (*)())0x800202A4)
#define func_800D24B4 ((s32 (*)())0x800D24B4)
#define func_800D7B80 ((s32 (*)())0x800D7B80)
undefined1 func_800D8894(uint param_1,uint param_2)

{
  short sVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;

  uVar3 = param_1 & 0x7f;
  iVar4 = ((param_1 & 0xff) >> 7) * 0x2e8;
  if ((&DAT_80085a10)[(uVar3 - 1) * 0x7c + iVar4] == '\t') {
    iVar4 = iVar4 + -0x7ff7a66c + uVar3 * 0x7c;
    if ((*(uint *)((uint)*(byte *)(iVar4 + 0x16) * 4 +
                  (uint)*(byte *)(iVar4 + 0x15) * 0x34 + D_80118C18) >> 6 & 0x1fff) != 2) {
      return 0;
    }
  }
  else if (((&DAT_80085a10)[(uVar3 - 1) * 0x7c + iVar4] == 'I') &&
          (iVar5 = iVar4 + -0x7ff7a66c + uVar3 * 0x7c,
          iVar4 = ((param_2 & 0xff) >> 7) * 0x2e8 + -0x7ff7a66c + (param_2 & 0x7f) * 0x7c,
          (*(uint *)((uint)*(byte *)(iVar4 + 0x16) * 4 +
                    (uint)*(byte *)(iVar4 + 0x15) * 0x34 + D_80118C18) >> 0x13 & 7) <=
          (*(uint *)((uint)*(byte *)(iVar5 + 0x16) * 4 +
                    (uint)*(byte *)(iVar5 + 0x15) * 0x34 + D_80118C18) >> 0x13 & 7))) {
    return 0;
  }
  uVar3 = param_1 & 0xff;
  iVar4 = (*(uint *)(((u8 *)0x80063948) +
                    (uint)(byte)(&DAT_80085a10)
                                [((param_1 & 0x7f) - 1) * 0x7c + (uVar3 >> 7) * 0x2e8] * 0x3c) >>
           0x11 & 0x7f) * 0x58;
  if (*(uint *)(((u8 *)0x8006B2B4) + iVar4) >> 0x1d == 3) {
    uVar2 = func_800D24B4(uVar3,param_2 & 0xff);
    uVar2 = func_800D7B80(uVar3,uVar2);
  }
  else if (*(uint *)(((u8 *)0x8006B2B4) + iVar4) >> 0x1d == 4) {
    sVar1 = *(short *)(((u8 *)0x8006B2B8) + iVar4);
    iVar4 = func_800202A4(100);
    if (iVar4 < sVar1) {
      uVar2 = func_800D24B4(param_1 & 0xff,param_2 & 0xff);
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
