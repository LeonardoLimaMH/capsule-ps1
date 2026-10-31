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

void func_80033974(s32 arg0) {
    func_80033998(arg0 & 0xFFFF, -0x80);
}

void func_80033998(s32 arg0, s16 arg1)
{
  int new_var;
  s32 temp_a0;
  temp_a0 = arg0 & 0x8000;
  new_var = temp_a0 != 0;
  if (new_var)
  {
    func_800373A0(temp_a0);
    return;
  }
 temp_a0 = arg1; do { } while (0);
  func_80034DA0(-1, temp_a0);
}

#include "common.h"

#include "ghidra.h"
void func_800339D8(short param_1,undefined1 param_2)

{
    extern u16 D_800922F0[];
  if (((*D_800922F0) & 0x80) != 0) {
    func_80034BD8((int)param_1,param_2);
  }
  if (((*D_800922F0) & 0xc) != 0) {
    func_8003727C((int)param_1,param_2);
  }
  return;
}

#include "common.h"

#include "ghidra.h"
void func_80033A50(short param_1,undefined1 param_2)

{
    extern u16 D_800922F0[];
  if (((*D_800922F0) & 0x80) != 0) {
    func_80034BA0((int)param_1,param_2);
  }
  if (((*D_800922F0) & 0xc) != 0) {
    func_80037244((int)param_1,param_2);
  }
  return;
}
