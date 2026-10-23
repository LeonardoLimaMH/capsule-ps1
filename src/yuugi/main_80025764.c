#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80025764);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80025C48);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80025CEC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80025DA8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80025E54);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80025EF8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80025FC0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80026020);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80026078);

void func_800260C8(s32 arg0, s32 arg1) {
    func_80025C48(1, arg0 & 0xFF, arg1 & 0xFF);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_800260F4);

void func_800264BC(void *arg0)
{
  int new_var;
  extern s32 D_80078D14;
  s32 temp_v1;
  s32 var_a1;
  var_a1 = 0;
  D_80078D14 = arg0 + 0x323;
  new_var = 0xFF;
  *((s8 *) (((s8 *) arg0) + 0x323)) = 0;
  do
  {
    *((s8 *) (((s8 *) (D_80078D14 + var_a1)) + 1)) = new_var;
    temp_v1 = var_a1 * 2;
    *((s8 *) (((s8 *) (D_80078D14 + temp_v1)) + 4)) = new_var;
    var_a1 += 1;
    *((s8 *) (((s8 *) (D_80078D14 + temp_v1)) + 5)) = new_var;
  }
  while (var_a1 < 3);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80026514);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_800267F0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80026930);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_800270D4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_800278C8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_800279D4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80027A88);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80027B34);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80027C14);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80027E04);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80027EAC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80028084);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80025764", func_80028200);
