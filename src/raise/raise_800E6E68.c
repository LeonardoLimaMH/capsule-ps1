#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E6E68", func_800E6E68);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E6E68", func_800E733C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E6E68", func_800E73D8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E6E68", func_800E7934);

#include "common.h"

typedef struct {
    u8 _p00[0x92];
    u16 unk92;
    u8 _p94[0x42];
    s16 unkD6[8];
    u8 _pE6[8];
    u16 unkEE;
    u8 _pF0[0xB4];
    u16 unk1A4;
    u8 _p1A6[2];
} S_91618;
extern S_91618 D_80091618[];
extern u8 D_80085428[];
extern s16 D_800F21C0[];
extern s32 func_800202A4(s32);

extern u8 D_800859F2[];
extern u8 D_800F2C68[];

s32 func_800E79C0(s32 value) {
    return value * *(s32 *)(D_800F2C68 + ((*D_800859F2) & 7) * 4);
}

s32 func_800E79F4(s32 arg0)
{
  int new_var;
  int new_var2;
  extern u8 D_800859F2[];
  extern M2C_UNK D_800F2C7C[];
  new_var = (*D_800859F2) & 7;
  new_var2 = new_var;
  new_var = new_var * 4;
  return arg0 * (*(new_var2 + D_800F2C7C));
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E6E68", func_800E7A28);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E6E68", func_800E7AA0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E6E68", func_800E7B18);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E6E68", func_800E7B80);
