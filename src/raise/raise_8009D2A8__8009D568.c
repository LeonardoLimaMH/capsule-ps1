#include "common.h"

void func_8009D568(void) {

}

#include "common.h"

void func_8009D570(void) {
    extern s32 D_800EBDE4[];
    func_8001A49C(0x80113000);
    func_8001A49C(0x80146A18);
    if ((*D_800EBDE4) >= 0xA) {
        func_8001A49C(0x80146A18);
    } else {
        func_800C0C60();
    }
    func_80013668();
    func_8009DAAC();
    func_80012508();
}

#include "common.h"

extern char D_80097BF0[];
extern char D_80097C04[];
extern char D_80097C24[];
extern char D_80097C44[];
extern char D_80097C64[];
extern char D_80097C78[];
void func_8009D5E8(void) {
    extern s32 D_8008EDF0[];
    extern s32 D_800EBDE4[];
    extern s32 D_800EBFF0[];
    extern s32 D_800EBFF4[];
    if ((*D_8008EDF0) & 0x100) {
        func_80012508();
    }
    func_8001DB8C(D_80097BF0, (*D_800EBDE4));
    func_8001DB8C(D_80097C04);
    func_8001DB8C(D_80097C24);
    func_8001DB8C(D_80097C44);
    func_8001DB8C(D_80097C64, (*D_800EBFF0));
    func_8001DB8C(D_80097C78, (*D_800EBFF4));
}

#include "common.h"

void func_8009D678(void) {
    extern M2C_UNK D_800238FC[];
    func_80013668();
    func_80012200(D_800238FC);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009D568", func_8009D6A4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009D568", func_8009DAAC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009D568", func_8009DC78);

void func_8009DDB4(void) {
    func_800BAF7C();
    func_800BAD64(1);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009D568", func_8009DDDC);

void func_8009DED0(void) {
    func_8009DEF8();
}

void func_8009DEF0(void) {

}

#include "common.h"
typedef struct {
    u8 _p0[0x10];
    u16 f_10;
    u8 _p12[0x196];
} S_80091618;
extern S_80091618 D_80091618[];
extern u16 D_8006AF80[];
extern s32 func_800A9D6C(s32);
s32 func_8009DEF8(void)
{
  int new_var;
  new_var = -1;
  if (D_80091618[*D_8006AF80].f_10 == 0xFFFF)
  {
    return new_var;
  }
  if (func_800A9D6C(1) == 0)
  {
    return 0;
  }
  if (new_var)
  {
    D_80091618[*D_8006AF80].f_10 = 0xFFFF;
    return new_var;
  }
  else
  {
    D_80091618[*D_8006AF80].f_10 = 0xFFFF;
    return new_var;
  }
}

#include "common.h"

s32 func_8009DFAC(void)
{
  extern M2C_UNK D_800EFF58[];
  if (((struct 
  {
    u8 _p[4];
    s32 v;
  } *) D_800EFF58)->v <= 0)
  {
    if (((struct 
    {
      u8 _p[0];
      s32 v;
    } *) D_800EFF58)->v)
    {
      ((struct 
      {
        u8 _p[0];
        s32 v;
      } *) D_800EFF58)->v = 0;
      return -1;
    }
    else
    {
      ((struct 
      {
        u8 _p[0];
        s32 v;
      } *) D_800EFF58)->v = 0;
      return -1;
    }
  }
  ((struct 
  {
    u8 _p[4];
    s32 v;
  } *) D_800EFF58)->v = (s32) (((struct 
  {
    u8 _p[4];
    s32 v;
  } *) D_800EFF58)->v - 1);
  func_800BAD90(((struct 
  {
    u8 _p[0];
    s32 v;
  } *) D_800EFF58)->v);
  return 0;
}
