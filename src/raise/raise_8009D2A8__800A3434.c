#include "common.h"

void func_800A3434(void) {
    extern s8 D_800F2CD0[];
    extern s16 D_800F2CD2[];
    (*D_800F2CD0) = 0;
    (*D_800F2CD2) = 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A3434", func_800A3448);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A3434", func_800A366C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A3434", func_800A4320);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A3434", func_800A4984);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A3434", func_800A4BF8);

s32 func_800A510C(s32 a0, s32 a1, s32 a2)
{
  typedef struct 
  {
    s32 x;
    s32 y;
    s32 unk8;
  } Unk1C;
  typedef struct 
  {
    u8 pad0[0x10];
    u16 unk10;
    u16 unk12;
    u16 unk14[4];
    Unk1C unk1C[4];
    u8 pad4C[0x1A8 - 0x4C];
  } Unk91618;
  extern Unk91618 D_80091618[];
  extern u8 D_800EF364[][8][8];
  extern s16 D_80069AB4[];
  extern s32 func_800A9658(s16);
  extern s32 func_800A4320(u16, u16, u16, u16);
  u16 k = a0;
  u16 fp;
  u16 i;
  u16 x1;
  s32 y1;

  fp = (D_80091618 + k)->unk10;
  x1 = a1;
  y1 = a2;
  if (D_800EF364[fp][x1 - 1][(u16)y1 - 1] == 0xFF)
  {
    return 0;
  }
  for (i = 0; i < D_80091618[k].unk12; i++)
  {
    s32 s0 = D_80069AB4[D_80091618[k].unk14[i]];
    s32 x = D_80091618[k].unk1C[i].x;
    s32 y = D_80091618[k].unk1C[i].y;
    s32 n = (s16) func_800A9658(s0 - 1);
    s32 j;
    for (j = 0; j < n; j++)
    {
      if (((x - (j / (s16)s0)) == x1) && ((y - (j % (s16)s0)) == (u16)y1))
      {
        return 0;
      }
    }
  }

  return func_800A4320(fp, k, x1, (u16)y1) == 0;
}

void func_800A52C4(void) {
    extern s32 D_800ED8D8[];
    (*D_800ED8D8) = 0;
    func_800BD57C();
    func_800BD66C(1);
}

s32 func_800A52F0(void) {
    extern struct { u8 _p[0x420]; s32 a; s32 b; } D_800EFF58;
    s32 r = 0;
    register s32 a asm("a0") = D_800EFF58.a;
    if (a != 0) {
        if (a >= 0) {
            register s32 c asm("v0") = a < 3;
            if (c) {
                if (D_800EFF58.b > 0) {
                    D_800EFF58.b--;
                    func_800BD684();
                } else {
                    D_800EFF58.a = 0;
                }
            }
        }
    } else if (D_800EFF58.b == 0) {
        r = -1;
    }
    return r;
}
