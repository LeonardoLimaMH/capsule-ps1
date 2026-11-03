#include "common.h"

/* entrada de 0x1A8 bytes da tabela D_80091618 */
typedef struct {
    u16 unk0;
    u8 pad2[0xE];
    u16 unk10;
    u8 pad12[0x1A8 - 0x12];
} S_80091618;

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

extern S_80091618 D_80091618[];
extern u16 (*D_800EEAA8[])(u16, u16);
extern s32 func_800D1548(s32, s32);
extern s32 func_800202A4(s32);
extern s32 func_800B1260(s32);
extern s32 func_800E1820(u16), func_800E17F8(u16), func_800E16AC(u16), func_800E1674(u16), func_800E14C4(u16);
extern s32 func_800E1140(u16), func_800E1388(u16), func_800E1594(u16), func_800E1624(u16);
extern void func_800B0740(u16, u16, u16, u16);
INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C__800AF2B0", func_800B0440);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C__800AF2B0", func_800B065C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C__800AF2B0", func_800B0740);

void func_800B0A8C(void) {

}
