#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C8CAC", func_800C8CAC);

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
