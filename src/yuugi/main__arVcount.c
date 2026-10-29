#include "common.h"
#include "yuugi.h"

void GsClearVcount(void) {
    ResetRCnt(0xF2000001);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80013350);

s32 func_800133A4(void)
{
  extern u8 D_8008ED68[];
  s8 *new_var;
  new_var = (s8 *) D_8008ED68;
 do { } while (0);
  *((s32 *) (new_var + 0x14)) = (s32) ((*((s32 *) (((s8 *) D_8008ED68) + 0x14))) + 1);
  return 0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800133C4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80013440);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800134BC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800135A8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80013668);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800136C8);

void func_80013920(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80013928);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80013A68);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80013B84);

#include "ghidra.h"
void func_80013C14(undefined4 *param_1,int param_2)

{
  if (param_2 < 0) {
    param_2 = param_2 + 3;
  }
  for (param_2 = param_2 >> 2; 0 < param_2; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80013C44);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80013C6C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80013DFC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800142E4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80014728);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80014C4C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80014D30);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80014DD8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80014EE0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800152C8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800154C4);
