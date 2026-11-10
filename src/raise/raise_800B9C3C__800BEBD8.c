#include "common.h"

/* objeto apontado por D_800EEB9C+0x764 (usado por func_800BED10) */
struct RaiseObjetoBED10 {
    u8 _pad0[0x38];
    s32 unk_0x38;
    u8 _pad3C[0x40];
    s32 unk_0x7C;
};

/* estado global em D_800EEB9C */
struct RaiseEstadoBED10 {
    u8 _pad0[0x764];
    struct RaiseObjetoBED10 *unk_0x764;
};

s32 func_800BEBD8(void) {
    extern s16 D_800F062A[];
    (*D_800F062A) = 0x10;
    return 0;
}

#include "common.h"

s32 func_800BEBEC(void)
{
  extern M2C_UNK D_800EEB9C[];
  s8 *new_var;
  extern u16 D_800F062A[];
  extern void *D_800FAE10[];
  extern void *D_800FDE08[];
  u8 var_v1;
  u8 var_v1_2;
  u8 var_v1_3;
  if ((*D_800F062A) != 0)
  {
    new_var = (s8 *) D_800EEB9C;
    *D_800F062A -= 1;
    *((u8 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x764)))) + 0x58)) = (u8) ((*((u8 *) (((s8 *) (*((void **) (new_var + 0x764)))) + 0x58))) + 8);
    var_v1 = *((u8 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x764)))) + 0x58));
    if (((u32) (var_v1 & 0xFF)) < 0x80U)
    {
      var_v1 = 0x80;
    }
    *((u8 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x764)))) + 0x58)) = var_v1;
    *((u8 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x764)))) + 0x59)) = (u8) ((*((u8 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x764)))) + 0x59))) + 8);
    var_v1_2 = *((u8 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x764)))) + 0x59));
    if (((u32) (var_v1_2 & 0xFF)) < 0x80U)
    {
      var_v1_2 = 0x80;
    }
    *((u8 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x764)))) + 0x59)) = var_v1_2;
    *((u8 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x764)))) + 0x5A)) = (u8) ((*((u8 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x764)))) + 0x5A))) + 8);
    var_v1_3 = *((u8 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x764)))) + 0x5A));
    if (((u32) (var_v1_3 & 0xFF)) < 0x80U)
    {
      var_v1_3 = 0x80;
    }
    *((u8 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x764)))) + 0x5A)) = var_v1_3;
    return 0;
  }
  *((s32 *) (((s8 *) (*D_800FDE08)) + 0x38)) = (s32) ((*((s32 *) (((s8 *) (*D_800FDE08)) + 0x38))) & (~8));
  *((s32 *) (((s8 *) (*D_800FAE10)) + 0x38)) = (s32) ((*((s32 *) (((s8 *) (*D_800FAE10)) + 0x38))) & (~8));
  return 1;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BEBD8", func_800BED10);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B9C3C__800BEBD8", func_800BEDA8);
