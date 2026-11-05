#include "common.h"
#include "yuugi.h"

#include "common.h"

typedef struct {
    u8 cmd;
    u8 arg;
    u8 pad[6];
    s32 value;
} Msg;

void func_80037244(s16 value, s8 arg)
{
  Msg m;
  m.cmd = 0x29;
  m.value = value;
  m.arg = arg;
  func_80036DB0(&m);
}

#include "common.h"


void func_8003727C(s16 value, s8 arg)
{
  Msg m;
  m.cmd = 0x2A;
  m.value = value;
  m.arg = arg;
  func_80036DB0(&m);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10__80037244", func_800372B4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10__80037244", func_800373A0);
