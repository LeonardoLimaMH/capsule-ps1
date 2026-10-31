#include "common.h"

/* arg2: small */
#include "common.h"

extern u8 D_80100F38[], D_80091618[], D_8008ED68[];
extern s32 func_800B1260(s32);

s32 func_800C59F4(s32 a0, s32 a1, s32 a2)
{
  u16 k = func_800B1260(a0);
  u8 *p = D_80100F38 + (k * 0x79C);
  u8 *e = D_80091618 + (k * 0x1A8);
  u8 **q;
  if (a1 == 1)
  {
    *((s32 *) ((*((u8 **) ((p + 0x230) + (a2 * 4)))) + 0x38)) &= ~1;
    *((s16 *) ((*((u8 **) ((p + 0x230) + (a2 * 4)))) + 0x46)) = -(((struct 
    {
      u8 _p[0x108];
      s32 v;
    } *) D_8008ED68)->v / 2);
    *((s16 *) ((*((u8 **) ((p + 0x230) + (a2 * 4)))) + 0x4A)) = -(((struct 
    {
      u8 _p[0x10C];
      s32 v;
    } *) D_8008ED68)->v / 2);
    *((u16 *) ((*((u8 **) ((p + 0x230) + (a2 * 4)))) + 0x4E)) = *((u16 *) (p + 0x1E0));
    if (a2 == 8)
    {
      *((u16 *) (e + 0x40)) = a2;
    }
    return 8;
  }
  return *((s32 *) ((*((u8 **) ((p + 0x230) + (a2 * 4)))) + 0x38)) |= 1;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C59F4", func_800C5B30);

#include "common.h"

extern u8 D_800EE5D0[];
extern u8 D_800EEB9C[];
typedef struct { u8 pad[0x6E0]; s32 arr[1]; } S_800EEB9C;

s32 func_800C5C30(s32 unused, s32 i) {
    return func_800B6D98(4, 0, 0, 4, 0, D_800EE5D0, ((S_800EEB9C *)D_800EEB9C)->arr[i], 1, 1, 0, 2, 0);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C59F4", func_800C5CA0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C59F4", func_800C5EFC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C59F4", func_800C60E0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C59F4", func_800C62A4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C59F4", func_800C6424);
