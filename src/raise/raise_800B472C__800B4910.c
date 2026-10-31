#include "common.h"

#include "common.h"

extern u16 D_8006AF80[];
extern u8 D_800EEB9C[];

typedef struct {
    u8 pad[0x44];
    s32 value;
} Entry_800EEB9C;

#include "common.h"

extern s16 D_800EEB90[];
extern u8 D_800EEB94[];

s16 func_800B4910(s32 side, s32 idx)
{
  int new_var;
  u8 *new_var2;
  new_var = side != (*D_800EEB90);
  new_var2 = D_800EEB94;
  return *((s16 *) ((new_var2 + (new_var * 4)) + (idx * 2)));
}
