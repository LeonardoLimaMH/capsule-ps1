#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DCD44", func_800DCD44);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DCD44", func_800DCE54);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DCD44", func_800DCFB4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DCD44", func_800DD110);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DCD44", func_800DD2B8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DCD44", func_800DD3B0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DCD44", func_800DD45C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DCD44", func_800DD528);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DCD44", func_800DD5B8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DCD44", func_800DD64C);

#include "common.h"

extern u8 D_80100F38[];

void func_800DD870(u8 *obj, s32 ctx) {
    u8 *rec = D_80100F38 + (func_800B1260(ctx) & 0xFFFF) * 0x79C;
    s16 v = func_800DD8E8(ctx, rec + 0x1CC, &obj);

    *(s16 *)(obj + 0x4E) = v;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DCD44", func_800DD8E8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DCD44", func_800DD9F0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DCD44", func_800DDB60);

void func_800DDBE4(void) {

}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DCD44", func_800DDBEC);

void func_800DDCF4(void) {

}
