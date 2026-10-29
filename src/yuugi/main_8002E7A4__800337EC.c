#include "common.h"
#include "yuugi.h"

s16 func_800337EC(void) {
    extern s16 D_800922F0[];
    return (*D_800922F0);
}

void func_800337FC(void) {
    func_80036E5C();
    func_80034B80();
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4__800337EC", func_80033824);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4__800337EC", func_80033878);

void func_800338DC(s32 arg0) {
    func_80033900(arg0 & 0xFFFF, 0x80);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8002E7A4__800337EC", func_80033900);

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
