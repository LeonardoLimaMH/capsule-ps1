#include "common.h"
#include "yuugi.h"

typedef struct {
  u8 *p;
  u16 b;
  u16 t;
  u16 x;
  u16 y;
} Ent12A20;

typedef struct {
  s16 x, y, w, h;
} Rect;

extern s32 LoadImage();

void func_80012A14(void) {
    extern s16 D_8008ED50[];
    (*D_8008ED50) = 0;
}

s32 func_80012A20(u8 *a0, u16 a1, u16 a2, u16 a3)
{
  extern Ent12A20 D_8008ED68[];
  Ent12A20 *e;
  s32 i;
  e = (Ent12A20 *) (((u8 *) D_8008ED68) + 0x158);
  for (i = 0; i < 0x50; i++, e++)
  {
    if (e->t == 0)
    {
      e->p = a0;
      e->t = a1;
      e->b = *a0;
      if ((u16) (a1 - 2) < 2)
      {
        e->x = a2;
        e->y = a3;
      }
      return 1;
    }
  }
  return 0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012A14", func_80012A98);

#include "common.h"

s32 func_80012C38(void)
{
  extern M2C_UNK D_8008ED68[];
  s32 var_a1;
  s32 var_v1;
  void *var_a0;
  int new_var;
  var_a1 = 0;
  new_var = 0x158;
  var_a0 = ((u8 *) D_8008ED68) + new_var;
  var_v1 = 0;
  loop_1:
  if ((*((u16 *) (((s8 *) var_a0) + 6))) != 0)
  {
    var_a1 = 1;
  }
  else
  {
    var_v1 += 1;
    var_a0 += 0xC;
    if (var_v1 < 0x50)
    {
      goto loop_1;
    }
  }

  return var_a1;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012A14", func_80012C7C);
