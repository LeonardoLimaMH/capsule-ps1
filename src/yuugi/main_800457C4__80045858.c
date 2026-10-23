#include "common.h"
#include "yuugi.h"

void func_80045858(u8 *arg0, u8 *arg1)
{
  s32 var_v1;
  u8 *var_a0;
  u8 *var_a1;
  u8 temp_v0;
  if (temp_v0)
  {
    var_a0 = arg0;
    var_a1 = arg1;
  }
  else
  {
    var_a0 = arg0;
    var_a1 = arg1;
  }
  if (var_a1 != ((void *) 0))
  {
    var_v1 = 0;
    if (var_a0 != ((void *) 0))
    {
      do
      {
        temp_v0 = *var_a1;
        var_a1 += 1;
        var_v1 += 1;
        *var_a0 = temp_v0;
        var_a0 += 1;
      }
      while (var_v1 < 4);
    }
  }
  else
    if (var_a0 != ((void *) 0))
  {
    *var_a0 = 0;
  }
}

void func_800458A0(u8 *arg0, u8 *arg1)
{
  int new_var;
  s32 var_v1;
  u8 *var_a0;
  u8 *new_var2;
  u8 *var_a1;
  u8 temp_v0;
  if (new_var)
  {
    var_a0 = arg0;
    var_a1 = arg1;
  }
  else
  {
    var_a0 = arg0;
    var_a1 = arg1;
  }
  if (var_a1 != ((void *) 0))
  {
    var_v1 = 0;
    if (var_a0 != ((void *) 0))
    {
      do
      {
        temp_v0 = *var_a1;
        new_var = 1;
        var_a1 += new_var;
        var_v1 += 1;
        *var_a0 = temp_v0;
        var_a0 += 1;
      }
      while (var_v1 < 8);
    }
  }
  else
  {
    new_var2 = var_a0;
    if (new_var2 != ((void *) 0))
    {
      *new_var2 = 0;
    }
  }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800457C4__80045858", func_800458E8);
