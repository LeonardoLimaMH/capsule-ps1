#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_800241E8);

extern u16 D_80078C20[];
extern u8 D_80069EC4[];
void func_8002453C(u8 *o, u8 *poly, s32 index, s32 mode, s32 depth)
{
    s32 type;
    s16 side;
    u8 *base;

    type = *(s32 *)(o + 4);
    if (type == 1 || type == 4 || type == 8) {
        if (type == 1 || type == 8) {
            side = D_80078C20[0];
        } else {
            side = 1 - D_80078C20[0];
        }
    } else {
        return;
    }
    base = *(u8 **)(D_80069EC4 + *(s32 *)(o + 4) * 28 + side * 0x2D8 + 0x10);
    switch (mode) {
    case 0:
        *(s16 *)(base + index * 8) = (*(s16 *)(poly + 0xC) + *(s16 *)(poly + 0x10)) >> 1;
        *(s16 *)(base + index * 8 + 2) = (*(s16 *)(poly + 0xE) + *(s16 *)(poly + 0x12)) >> 1;
        break;
    case 1:
        *(s16 *)(base + index * 8) = (*(s16 *)(poly + 0x10) + *(s16 *)(poly + 0x18)) >> 1;
        *(s16 *)(base + index * 8 + 2) = (*(s16 *)(poly + 0x12) + *(s16 *)(poly + 0x1A)) >> 1;
        break;
    case 2:
        *(s16 *)(base + index * 8) = (*(s16 *)(poly + 0x10) + *(s16 *)(poly + 0x18)) >> 1;
        *(s16 *)(base + index * 8 + 2) = (*(s16 *)(poly + 0x12) + *(s16 *)(poly + 0x1A)) >> 1;
        break;
    case 3:
        *(s16 *)(base + index * 8) = (*(s16 *)(poly + 0x14) + *(s16 *)(poly + 0x20)) >> 1;
        *(s16 *)(base + index * 8 + 2) = (*(s16 *)(poly + 0x16) + *(s16 *)(poly + 0x22)) >> 1;
        break;
    }
    *(s16 *)(base + index * 8 + 4) = depth;
}

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

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_80025000);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_80025050);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_80025448);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_800254A0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_80025514);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800241E8", func_800255FC);
