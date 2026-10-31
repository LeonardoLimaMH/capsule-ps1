#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10__80034C7C", func_80034C7C);

void func_80034D78(s16 arg0) {
    func_80034DA0(arg0, 0x80);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10__80034C7C", func_80034DA0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10__80034C7C", func_80034F74);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10__80034C7C", func_80035304);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10__80034C7C", func_80035680);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10__80034C7C", func_8003577C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10__80034C7C", func_80035810);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10__80034C7C", func_80035894);

#include "common.h"

extern u8 D_800922F0[];

/* fila de comandos de 16 bytes; o índice é relido a cada campo, como no original */
#define SLOT (D_800922F0 + M2C_GFIELD(D_800922F0, s16, 0x110) * 16)

s32 func_80036DB0(u8 *s)
{
  long new_var;
  u8 *new_var2;
  if (((struct 
  {
    u8 _p[0x110];
    s16 v;
  } *) D_800922F0)->v >= 16)
  {
    return 0;
  }
  new_var2 = D_800922F0;
  if (s)
  {
    (new_var2 + (((struct 
    {
      u8 _p[0x110];
      s16 v;
    } *) new_var2)->v * 16))[0x10] = s[0];
    (new_var2 + (((struct 
    {
      u8 _p[0x110];
      s16 v;
    } *) new_var2)->v * 16))[0x11] = s[1];
    *((u16 *) ((new_var2 + (((struct 
    {
      u8 _p[0x110];
      s16 v;
    } *) new_var2)->v * 16)) + 0x12)) = *((u16 *) (s + 2));
    new_var = ((struct 
    {
      u8 _p[0x110];
      s16 v;
    } *) new_var2)->v;
    *((s32 *) ((new_var2 + (new_var * 16)) + 0x14)) = *((s32 *) (s + 4));
    *((s32 *) ((new_var2 + (((struct 
    {
      u8 _p[0x110];
      s16 v;
    } *) new_var2)->v * 16)) + 0x18)) = *((s32 *) (s + 8));
    *((s32 *) ((new_var2 + (((struct 
    {
      u8 _p[0x110];
      s16 v;
    } *) new_var2)->v * 16)) + 0x1C)) = *((s32 *) (s + 0xC));
    ((struct 
    {
      u8 _p[0x110];
      u16 v;
    } *) new_var2)->v++;
    return 1;
  }
  else
  {
    (new_var2 + (((struct 
    {
      u8 _p[0x110];
      s16 v;
    } *) new_var2)->v * 16))[0x10] = s[0];
    (new_var2 + (((struct 
    {
      u8 _p[0x110];
      s16 v;
    } *) new_var2)->v * 16))[0x11] = s[1];
    *((u16 *) ((new_var2 + (((struct 
    {
      u8 _p[0x110];
      s16 v;
    } *) new_var2)->v * 16)) + 0x12)) = *((u16 *) (s + 2));
    *((s32 *) ((new_var2 + (((struct 
    {
      u8 _p[0x110];
      s16 v;
    } *) new_var2)->v * 16)) + 0x14)) = *((s32 *) (s + 4));
    *((s32 *) ((new_var2 + (((struct 
    {
      u8 _p[0x110];
      s16 v;
    } *) new_var2)->v * 16)) + 0x18)) = *((s32 *) (s + 8));
    *((s32 *) ((new_var2 + (8 * (((struct 
    {
      u8 _p[0x110];
      s16 v;
    } *) new_var2)->v * 2))) + 0x1C)) = *((s32 *) (s + 0xC));
    ((struct 
    {
      u8 _p[0x110];
      u16 v;
    } *) new_var2)->v++;
    return 1;
  }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10__80034C7C", func_80036E5C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10__80034C7C", func_80037138);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10__80034C7C", func_800371A4);

s16 func_80037234(void) {
    extern s16 D_80092434[];
    return (*D_80092434);
}
