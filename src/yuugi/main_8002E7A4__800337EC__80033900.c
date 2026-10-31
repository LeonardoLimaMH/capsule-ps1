#include "common.h"
#include "yuugi.h"

extern u16 D_800922F0[];
typedef struct {
    u8 cmd;
    u8 pad[3];
    s32 a;
    s32 b;
    s32 c;
} Msg3;

#include "common.h"

extern u8 D_800922FA[];

void func_80033900(s32 a, s32 b)
{
  unsigned short new_var;
  new_var = a & 0xFFFF;
  if ((*D_800922FA) & 1)
  {
    if (a & 0x8000)
    {
      func_8003742C(new_var, (s16) b);
    }
    else
    {
      if (new_var >= 0x7000)
      {
        a = a - 0x7000;
      }
      new_var = b;
      func_80034DA0((s16) a, (s16) new_var);
    }
  }
}
