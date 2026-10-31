#include "common.h"
#include "yuugi.h"

#include "common.h"

typedef struct {
    u8 cmd;
    u8 arg;
    u8 pad[6];
    s32 value;
} Msg;

void func_80034BA0(s16 value, s8 arg)
{
  Msg m;
  m.cmd = 0x44;
  m.value = value;
  m.arg = arg & 0xFFFFFFFFFFFFFFFFu;
  func_80036DB0(&m);
}

#include "common.h"


void func_80034BD8(s16 value, s8 arg)
{
  Msg m;
  m.cmd = 0x45;
  m.value = value;
  m.arg = arg;
  func_80036DB0(&m);
}

#include "common.h"

extern u16 D_800922F0[];

void func_80034C10(s32 x)
{
  s32 b[4];
  s32 a[4];
  if ((*D_800922F0) & 0x80)
  {
    ((u8 *) a)[0] = 0x45;
    a[2] = (s16) x;
    ((u8 *) a)[1] = 0;
    func_80036DB0(a);
    ((u8 *) b)[0] = 0x49;
    func_80036DB0(b);
  }
  ((u8 *) b)[0] = 0x47;
  func_80036DB0(b);
}
