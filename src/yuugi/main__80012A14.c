#include "common.h"
#include "yuugi.h"

typedef struct {
  u8 *p;
  u16 b;
  u16 t;
  u16 x;
  u16 y;
} Ent12A20;

void func_80012A14(void) {
    extern s16 D_8008ED50[];
    (*D_8008ED50) = 0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012A14", func_80012A20);

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
