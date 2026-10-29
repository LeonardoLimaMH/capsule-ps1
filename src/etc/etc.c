#include "common.h"

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_800979BC);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_800979FC);

s32 func_80097AF0(s32 arg0, s32 arg1, s32 arg2)
{
  s8 *new_var;
  new_var = (s8 *) (arg0 + ((arg2 * 0x7C) + (arg1 * 0x2E8)));
  return (*((u8 *) (new_var + 0x5E8))) + 0x10D;
}

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_80097B24);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_80097C6C);

s32 func_80097D8C(s32 arg0, s32 arg1, s32 arg2)
{
  s32 var_a3;
  s32 var_a1;
  u8 *new_var;
  s32 var_a2;
  u8 temp_t0;
  void *temp_v1;
  var_a1 = arg1;
  var_a2 = arg2;
  new_var = (u8 *) (((s8 *) (arg0 + ((var_a2 * 0x7C) + (var_a1 * 0x2E8)))) + 0x5E8);
  temp_t0 = *new_var;
  var_a3 = 0;
  if (var_a1 != 0)
  {
    goto loop_2;
  }
  if (var_a2 == 0)
  {
    goto block_9;
  }
  loop_2:
  if (var_a2 == 0)
  {
    goto block_4;
  }

  block_3:
  var_a2 -= 1;

  goto block_5;
  block_4:
  var_a1 -= 1;

  var_a2 = 4;
  block_5:
  temp_v1 = arg0 + ((var_a2 * 0x7C) + (var_a1 * 0x2E8));

  if (temp_t0 != (*((u8 *) (((s8 *) temp_v1) + 0x5E8))))
  {
    goto block_7;
  }
  var_a3 = (*((u8 *) (((s8 *) temp_v1) + 0x612))) + 1;
  block_7:
  if (var_a1 != 0)
  {
    goto loop_2;
  }

  if (var_a2 != 0)
  {
    goto block_3;
  }
  block_9:
  return var_a3;

}

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_80097E40);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_8009807C);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_800981F0);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_800991AC);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_800992CC);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_80099394);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_800993F8);

#include "common.h"

void func_80099444(void) {
    extern int func_80012508();
    func_80019F30(9, func_80012508);
    func_80012508();
}

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_80099474);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_80099570);

void func_800997D4(void) {
    extern s32 D_8008F7D0[];
    if ((*D_8008F7D0) == 0) {
        func_80012508();
    }
}

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_80099800);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_80099AE4);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_80099B18);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_80099C08);

#include "common.h"

void func_80099C48(void) {
    extern int func_80012508();
    func_80019F30(8, func_80012508);
    func_80012508();
}

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_80099C78);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_80099D34);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_80099E2C);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_80099EA0);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_80099FCC);

#include "common.h"

extern char D_800AEFB4[], D_800AEFC8[], D_800AEFD8[];
extern s32 func_8001F1A8(s32, s32, s32, s32, s32, char *, s32, s32, s32);

s32 func_8009A094(void) {
    func_8001F1A8(-0x98, -0x18, 0, 1, 0, D_800AEFB4, 1, 9, 3);
    func_8001F1A8(-0x80, 8, 0, 1, 0, D_800AEFC8, 1, 8, 3);
    return func_8001F1A8(0x70, 8, 0, 1, 0, D_800AEFD8, 1, 2, 3);
}

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_8009A160);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_8009A1D4);

#include "common.h"

void func_8009A294(void) {
    extern int func_80012508();
    func_80019F30(8, func_80012508);
    func_80012508();
}

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_8009A2C4);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_8009A3E8);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_8009A9B0);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_8009AA0C);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_8009AB30);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_8009ABE4);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_8009AD04);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_8009AEB4);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_8009AF80);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_8009B060);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_8009B1CC);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_8009B500);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_8009B564);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_8009B624);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_8009B6D0);
