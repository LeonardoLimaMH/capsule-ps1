#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_800241E8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_8002453C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_800246E4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_8002475C);

#include "ghidra.h"
void func_800248C8(undefined4 param_1)

{
  func_8002475C(param_1,0);
  return;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_800248E8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_80024990);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_80024A7C);

void func_80025000(void *arg0) {
    extern s32 D_80069C4C[];
    extern s16 D_80078C28;
    extern s16 D_80078C2A;
    extern s16 D_80078C2C;
    register s32 *p asm("v0");
    s32 flags;
    func_800254A0();
    flags = M2C_FIELD(arg0, s32 *, 0x50);
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    D_80078C28 = 0;
    D_80078C2C = 0;
    D_80078C2A = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = flags & ~8;
    p = D_80069C4C;
    *p = 0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_80025050);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_80025448);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_800254A0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_80025514);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_800255FC);
