#include "common.h"

#include "ghidra.h"
void func_800C07B8(undefined4 param_1, undefined2 param_2)
{
  s16 *new_var;
  extern s16 D_800F0710[];
  s16 *new_var2;
  new_var2 = D_800F0710;
  ;
  func_800C0BC8(param_1, 2, param_2);
 do { } while (0);
  *new_var2 = 1;
  return;
}

#include "ghidra.h"
void func_800C07E4(undefined4 param_1, undefined2 param_2)
{
  int new_var3;
  int new_var;
  s16 (*new_var2)[];
  extern s16 D_800F0710[];
  new_var = 0;
  func_800C0BC8(param_1, new_var, (0, param_2));
  new_var2 = &D_800F0710;
  {
 do { } while (0);
    new_var3 = 1;
    *(*new_var2) = new_var3;
  }
  return;
}

#include "ghidra.h"
void func_800C0810(undefined4 param_1, undefined2 param_2)
{
  s16 *new_var;
  extern s16 D_800F0710[];
  func_800C0BC8(param_1, 1, param_2);
  new_var = D_800F0710;
 do { } while (0);
  *new_var = 1;
  return;
}

extern s16 D_80100E60[];
void func_800C083C(void)
{
  s32 i;
  u8 *b;
  D_80100E60[0] = 0;
  b = (u8 *)D_80100E60;
  *(s16 *)(b + 2) = 0;
  *(s16 *)(b + 4) = 0;
  *(s16 *)(b + 6) = 0;
  *(s16 *)(b + 8) = -1;
  for (i = 0; i < 0x20; i++) {
    *(s16 *)(b + i * 2 + 0xa) = -1;
    *(s16 *)(b + i * 2 + 0x4a) = -1;
    *(s16 *)(b + i * 2 + 0x8a) = -1;
  }
}
