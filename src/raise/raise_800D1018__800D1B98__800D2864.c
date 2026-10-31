#include "common.h"

#include "common.h"

extern u8 D_80100F38[];

void func_800D2864(s32 unused, s32 idx)
{
  u8 *new_var;
  new_var = D_80100F38 + (idx * 0x79C);
  *((s16 *) (new_var + 0x384)) = 0;
}

#include "common.h"
