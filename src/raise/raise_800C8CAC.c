#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C8CAC", func_800C8CAC);

typedef struct {
    u8 _p0[0x112];
    s16 last;
    u16 cnt[8];
    u16 run[0x40];
} Raise_80091618;
extern Raise_80091618 D_80091618[];
extern u32 func_800B1260(s32);

s32 func_800C922C(void) {
    return 0;
}

#include "common.h"

void func_800C9234(void *arg0, s32 arg1, void *arg2)
{
  int new_var;
  func_80015CD0(arg2 + 0x14, func_80019F30((*((s32 *) (((s8 *) arg0) + 0))) | 0x70000, (*((s32 *) (((s8 *) arg0) + 0x18))) + arg1), 0);
  *((s16 *) (((s8 *) arg2) + 0x66)) = 0;
  *((s32 *) (((s8 *) arg2) + 0x7C)) = arg1;
  new_var = (*((s32 *) (((s8 *) arg2) + 0x30))) & (~0x1C0);
  *((s32 *) (((s8 *) arg2) + 0x30)) = (s32) ((new_var & (~0x30)) | 0x10);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C8CAC", func_800C92B0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C8CAC", func_800C9478);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C8CAC", func_800C9590);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C8CAC", func_800C9780);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C8CAC", func_800C9C5C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C8CAC", func_800CA818);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C8CAC", func_800CA944);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C8CAC", func_800CAB94);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C8CAC", func_800CAF40);

void func_800CB29C(void) {

}

void func_800CB2A4(void) {

}

s32 func_800CB2AC(void) {
    return 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C8CAC", func_800CB2B4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C8CAC", func_800CB370);
