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

void func_8009DAAC(void) {
    typedef struct {
        s32 f0;
        s32 f4;
        s32 f8;
        s32 fC;
    } Ent;
    typedef struct {
        u8 _p0[0x18];
        s32 f18;
        s32 f1C;
        u8 _p20[0x10];
        u32 f30_0 : 3;
        u32 f30_3 : 1;
        u32 f30_4 : 2;
        u32 f30_6 : 3;
        u32 f30_9 : 23;
        s32 f34;
        u32 f38_0 : 1;
        u32 f38_1 : 31;
        u8 _p3C[0xA];
        s16 f46;
        s16 f48;
        s16 f4A;
        s16 f4C;
        s16 f4E;
        u8 _p50[0x16];
        s16 f66;
    } Obj;
    extern s32 D_800EBDE4[];
    extern Ent *D_800EBDE8[];
    extern s32 D_800EBFF4[];
    extern void func_8001611C(s32);
    extern s32 func_80019F30(s32, s32);
    extern void func_80013B84(s32);
    extern Obj *func_80015B3C(void *, void *, s32);
    extern void func_80015EF8(Obj *);
    extern void func_80012A20(s32, s32, s32, s32);
    extern void func_8009D6A4();
    extern void func_800161C4();

    Obj *o;
    Ent *e;
    s32 a1;
    s32 arg1;
    s32 idx;

    func_8001611C(0x1000);
    func_80013B84(func_80019F30(D_800EBDE8[*D_800EBDE4]->f0 | 0x10000, D_800EBDE8[*D_800EBDE4]->f4));
    o = func_80015B3C(func_8009D6A4, func_800161C4, 1);
    if (o != NULL) {
        func_80015EF8(o);
        if (*D_800EBDE4 == 7) {
            func_80012A20(func_80019F30(0x2000E, *D_800EBFF4 / 2 + 0x20), 1, 0, 0);
        }
        e = D_800EBDE8[*D_800EBDE4];
        arg1 = e->fC + *D_800EBFF4;
        a1 = func_80019F30(e->f0 | 0x60000, arg1);
        o->f66 = 0;
        idx = *D_800EBDE4;
        o->f30_6 = 1;
        if (idx < 4) {
            o->f30_4 = 2;
        } else if (idx >= 8) {
            if (idx < 10) {
                o->f30_4 = 2;
            } else if (idx < 0x1A) {
                o->f30_4 = 2;
            } else {
                o->f30_4 = 1;
            }
        } else {
            o->f30_4 = 1;
        }
        o->f4E = 5;
        o->f1C = 0;
        o->f18 = a1;
        o->f46 = 0;
        o->f4A = 0;
        o->f30_3 = 0;
        o->f38_0 = 0;
    }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009D568", func_8009DC78);

void func_8009DDB4(void) {
    func_800BAF7C();
    func_800BAD64(1);
}

extern s32 D_8008F7D0[];
extern s32 D_800EFFB8[];
extern s32 func_8009DFAC(void);
s32 func_8009DDDC(void) {
    struct P8 { u8 b[8]; };
    struct T5B { u8 _p0[0x5b]; u8 f5b; struct P8 f5c; };
    extern struct P8 D_80097C8C[];
    extern u8 D_800EFF58[];
    struct P8 tmp;
    s32 i;
    s32 one;
    u8 *base;
    u8 *b;
    struct T5B *q;
    if (*D_8008F7D0 == 0) {
        if (func_8009DFAC() == -1) {
            one = 1;
            i = 0;
            base = D_800EFF58;
            *(s32 *)(*(u8 **)(base + 0x7c) + 0x38) &= ~1;
            b = base;
            tmp = *D_80097C8C;
            tmp = *(struct P8 *)(base + 0x64);
            for (i = 0; i < 7; i++) {
                q = *(struct T5B **)(b + 0x28);
                q->f5b = one;
                q->f5c = tmp;
                b += 4;
            }
            *D_800EFFB8 = one;
            return -1;
        }
    }
    return 0;
}

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
