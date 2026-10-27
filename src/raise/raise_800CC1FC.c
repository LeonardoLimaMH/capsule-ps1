#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CC1FC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CC34C);


void func_800CC3E4(void) {
    extern M2C_UNK D_80103CE8[];
    func_8001A998(D_80103CE8, 0x40);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CC40C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CC43C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CC46C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CC5D4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CC808);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CC868);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CC8C4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CC974);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CC9E4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CCAA8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CCF2C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CCFA4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CD1A0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CD288);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CD418);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CD530);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CD654);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CD6E0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CD9F4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CDFDC);

#include "ghidra.h"
int func_800CE128(int param_1)

{
    extern s16 D_80069BBE[];
  int iVar1;
  
  iVar1 = (int)(*D_80069BBE);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0x1ff;
  }
  param_1 = param_1 + (iVar1 >> 9);
  iVar1 = param_1;
  if (param_1 < 0) {
    iVar1 = param_1 + 7;
  }
  return param_1 + (iVar1 >> 3) * -8;
}
