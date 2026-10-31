#include "common.h"

extern u8 D_800EE5F0[];
extern u8 D_800EFF58[];
extern u8 D_800EE5F0[];
extern u8 D_800EFF58[];
extern u8 D_800EE5F0[];
extern u8 D_800EFF58[];
extern u8 D_800F05E8[];
extern s32 func_8001F1A8(s32, s32, s32, s32, s32, void *, s32, s32, s32);

#include "common.h"

s32 func_800BE61C(void)
{
  extern M2C_UNK D_800EEB9C[];
  extern u16 D_800F0610[];
  extern u16 D_80100D44[];
  M2C_UNK *new_var;
  extern s16 D_80100D46[];
  new_var = D_800EEB9C;
  *((u16 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x764)))) + 0x4A)) = (u16) ((*((u16 *) (((s8 *) (*((void **) (((s8 *) new_var) + 0x764)))) + 0x4A))) + 0x20);
  *D_80100D46 = 2;
  new_var = ((s8 *) D_800EEB9C) + 0x764;
  *((s32 *) (((s8 *) (*((void **) new_var))) + 0x38)) = (s32) ((*((s32 *) (((s8 *) (*((void **) (((s8 *) D_800EEB9C) + 0x764)))) + 0x38))) & (~1));
  *D_80100D44 = *D_800F0610;
  return 0;
}
