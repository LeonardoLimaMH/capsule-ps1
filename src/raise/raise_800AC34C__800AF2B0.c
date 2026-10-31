#include "common.h"

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

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C__800AF2B0", func_800AF380);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C__800AF2B0", func_800AF468);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C__800AF2B0", func_800AF760);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C__800AF2B0", func_800AF98C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C__800AF2B0", func_800AFAC0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C__800AF2B0", func_800AFEB8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C__800AF2B0", func_800B026C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C__800AF2B0", func_800B0440);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C__800AF2B0", func_800B065C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C__800AF2B0", func_800B0740);

void func_800B0A8C(void) {

}
