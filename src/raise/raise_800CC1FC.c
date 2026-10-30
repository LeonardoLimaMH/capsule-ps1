#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CC1FC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CC34C);


void func_800CC3E4(void) {
    extern M2C_UNK D_80103CE8[];
    func_8001A998(D_80103CE8, 0x40);
}

#include "common.h"

void func_800CC40C(void) {
    extern M2C_UNK D_800EFFEC[];
    extern M2C_UNK D_80103CE8[];
    func_8001AA70(D_80103CE8, D_800EFFEC, 0x40);
}

#include "common.h"

void func_800CC43C(void) {
    extern M2C_UNK D_800EFFEC[];
    extern M2C_UNK D_80103CE8[];
    func_8001AA70(D_800EFFEC, D_80103CE8, 0x40);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CC46C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CC5D4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CC808);

#include "common.h"

void func_800CC868(void *arg0) {
    extern s16 D_80078C20[];
    extern u16 D_8008EE44[];
    if (((((u32) M2C_FIELD(arg0, u32 *, 0x34) >> 8) & 1) != (*D_80078C20)) || ((*D_8008EE44) == 0x41)) {
        func_80013920();
        return;
    }
    func_800CC5D4();
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CC1FC", func_800CC8C4);

#include "common.h"

extern s16 D_80078C20[];
extern u16 D_8008EE44[];

s32 func_800CC974(u8 *obj) {
    u32 w = *(u32 *)(obj + 0x34);
    s32 b9 = (w >> 9) & 1;
    s32 b10 = (w >> 10) & 3;

    if (((w >> 8) & 1) != (*D_80078C20) || (*D_8008EE44) == 0x41) {
        return func_80013920(obj, b9, b10);
    }
    return func_800CC5D4(obj, b9, b10);
}

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
