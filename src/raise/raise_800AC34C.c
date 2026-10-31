#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800AC34C);

void func_800AC9E8(s32 arg0) {
    extern s32 D_800EEBB4[];
    if ((*D_800EEBB4) != arg0) {
        func_800B7FA8();
    }
}

#include "common.h"

void func_800ACA14(s16 arg0) {
    extern s16 D_800EEA80[];
    extern M2C_UNK D_800EEB9C[];
    extern u16 D_800F2DA8[];
    extern s16 D_800F2DAA[];
    if (M2C_GFIELD(D_800EEB9C, s32, 0x18) == 1) {
        if (M2C_GFIELD(D_800EEB9C, s32, 0x24) == 5) {
            if (arg0 < 2) {
                if (arg0 >= 0) {
                    func_800B4944(arg0, D_800EEB9C);
                }
            }
        } else {
            goto block_6;
        }
    } else {
block_6:
        if (M2C_GFIELD(D_800EEB9C, s32, 0x14) == 1) {
            (*D_800F2DAA) = 7;
            (*D_800F2DA8) = (u16) M2C_GFIELD(D_800EEB9C, s32, 0x24);
            func_800AEB5C(2, 0, D_800EEB9C);
            (*D_800F2DA8) = func_800AC1A4((s16) (*D_800F2DA8), (*D_800F2DAA), D_800EEA80[arg0]);
            func_800AEB5C(1, 0);
        }
    }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800ACB08);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800ACC64);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800ACDE0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800ACE80);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800ACFFC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800AD0FC);

void func_800AEA04(void) {

}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800AEA0C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800AEB5C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800AEBA8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800AEBDC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800AEC94);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800AECC8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800AED5C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800AEDC4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800AEEDC);

#include "common.h"

s32 func_800AEF38(u32 arg0)
{
  extern s32 D_800EEA8C[];
  if (arg0 < 8U)
  {
    return func_800AF018();
  }
  if (((u32) (arg0 - 8)) < 7U)
  {
    return func_800AF148();
  }
  if (((u32) (arg0 - 0xF)) < 5U)
  {
    return func_800AF278();
  }
  if (((u32) (arg0 - 0x14)) < 2U)
  {
    return func_800AF280();
  }
  if (((u32) (arg0 - 0x16)) < 4U)
  {
    return func_800AF288();
  }
  if (arg0 == 0x1A)
  {
    return func_800AF290(0x1A);
  }
  if (((u32) (arg0 - 0x1B)) >= 2U)
  {
    return *D_800EEA8C;
  }
  if (arg0)
  {
    return func_800AF298();
  }
  else
  {
    return func_800AF298();
  }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800AF018);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800AF148);

s32 func_800AF278(void) {
    return 0;
}

s32 func_800AF280(void) {
    return 0;
}

s32 func_800AF288(void) {
    return 0;
}

s32 func_800AF290(void) {
    return 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800AF298);

void func_800AF2B0(void) {
    func_800AF380();
    func_800AF760();
    func_800AF98C();
    if (func_800AFEB8() == 0) {
        func_800B026C();
    }
}

s32 func_800AF2F8(void) {
    return 0;
}

void func_800AF300(void) {

}

#include "common.h"

#include "ghidra.h"
void func_800AF308(undefined4 param_1)

{
    extern s32 D_8006AF84[];
  func_800B0A8C(param_1,((*D_8006AF84) % 0x7080) / 0x4b0);
  return;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800AF380);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800AF468);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800AF760);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800AF98C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800AFAC0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800AFEB8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800B026C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800B0440);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800B065C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C", func_800B0740);

void func_800B0A8C(void) {

}
