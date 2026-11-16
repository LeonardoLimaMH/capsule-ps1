#include "common.h"

extern u8 D_800EE5D0[];
extern u8 D_800EFF58[];
extern u8 D_800EE5F0[];

/* rand-mem: 0x800EFF74 1 7 */
/* rand-mem: 0x800EFF75 3 1 */
/* rand-ptr: 0x800EFF80 7 */

extern u8 D_800EFF58[], D_8008ED68[], D_800F05E8[], D_800EFA04[];
extern u16 D_800EFA3C[];
extern u16 D_8008EE44;
extern s16 D_800ED878, D_800ED87A, D_800ED87C, D_800ED87E;
extern void func_8001F1A8(s32, s32, s32, s32, s32, void *, s32, s32, s32);
extern void func_80013920(u8 *), func_800B768C(void);

void func_800BB814(u8 *o)
{
  u8 *new_var3;
  int new_var;
  u8 *f = D_800EFF58;
  u8 *new_var4;
  u8 *new_var2;
  u8 *new_var6;
  u8 *w;
  s32 *new_var5;
  int new_var7;
  new_var3 = f + 0x6C;
  if (o == (*((u8 **) new_var3)))
  {
    func_8001F1A8((s16) ((*((u16 *) (o + 0x46))) + 8), (s16) ((*((u16 *) (o + 0x4A))) + 0x20), 0, 1, 0, D_800F05E8, 1, 0xE, 4);
  }
  if (o == (*((u8 **) (f + 0x20))))
  {
    new_var6 = D_8008ED68;
    new_var = 0xDC;
    if ((*((u16 *) (new_var6 + new_var))) != 0x14)
    {
      return;
    }
    new_var5 = (s32 *) (new_var4 = new_var6 + 0x108);
    if (1 == D_800ED87A)
    {
      if (D_800ED87C > 0)
      {
        s32 d;
        s32 i;
        D_800ED87C -= 1;
        d = ((u16) D_800ED878) * ((u16) D_800ED87E);
        for (i = 0; i <= (7 - 1); i++)
        {
          new_var2 = (*((u8 **) ((f + 0x28) + (i * 4)))) + 0x46;
          *((s16 *) new_var2) -= d;
        }

      }
      else
      {
        D_800ED87A = 0;
        D_800ED878 = 1;
      }
    }
    else
    {
      s32 j = *((s32 *) (f + 0x1C));
      new_var7 = 0x92;
      func_8001F1A8((s16) (((2 - D_800EFA3C[j]) * 8) - (((*new_var5) / 2) - new_var7)), (s16) (0x90 - ((*((s32 *) (new_var6 + 0x10C))) / 2)), 0, 1, 0, D_800EFA04 + (j * 8), 1, D_800EFA3C[j], 4);
    }
    return;
  }
  new_var4 = f + 0x14;
  if (o == (*((u8 **) new_var4)))
  {
    if (D_8008EE44 != 0x41)
    {
      func_800B768C();
      return;
    }
  }
  else
    if (((u16) (D_8008EE44 - 0xF)) < 0xE)
  {
    return;
  }
  func_80013920(o);
}
