#include "common.h"

typedef struct {
    u8 pad[4];
    s16 unk4;
    s16 unk6;
    s16 unk8;
    u16 unkA;
    u16 unkC;
    u16 unkE;
    u16 unk10;
} Struct_800AF000;

void func_80099B18(u8 *arg0) {
    extern u16 D_8008EE44[];
    extern u8 D_80085428[];
    extern s16 D_800B3ACC[];
    extern void func_80015CD0(void *, s32, s32);
    u8 *q = D_80085428;
    s32 a2 = *(s32 *)(arg0 + 0x7C);
    if (*D_8008EE44 < 7U && q[0x5CB] == 4) {
        register s32 m asm("a1") = ~1;
        register u32 f asm("v0") = *(u32 *)(arg0 + 0x38);
        s32 v = *D_800B3ACC;
        s32 w = *(s32 *)(arg0 + 0x80);
        f &= m;
        *(u32 *)(arg0 + 0x38) = f;
        if (w == v) {
            arg0[0x5A] = 0x80;
            arg0[0x59] = 0x80;
            arg0[0x58] = 0x80;
            if (*(s32 *)(arg0 + 0x1C) == 0) {
                *(s32 *)(arg0 + 0x18) = 0;
                func_80015CD0(arg0 + 0x14, func_80019F30(0x70009, *(s32 *)(arg0 + 0x80) + 1), 0);
            }
        } else {
            arg0[0x5A] = 0x50;
            arg0[0x59] = 0x50;
            arg0[0x58] = 0x50;
            *(s32 *)(arg0 + 0x18) = func_80019F30(0x60009, a2);
            *(s32 *)(arg0 + 0x1C) = 0;
        }
    } else {
        *(u32 *)(arg0 + 0x38) |= 1;
    }
}

extern u16 D_8008EE44[];
extern void (*D_800AEFDC[])(void);

void func_80099C08(void) {
    D_800AEFDC[(*D_8008EE44)]();
}

void func_80099C48(void) {
    extern int func_80012508();
    func_80019F30(8, func_80012508);
    func_80012508();
}

extern s32 D_800B3AD0[];
extern s32 func_80019F30(s32, s32);
extern void func_80012A20(s32, s32, s32, s32);
extern u8 *func_80032DB0(s32, s32, s32, s32, s32, void (*)(void));
extern void func_8009A160();
extern void func_8001ADCC(s32);
extern s32 func_80012508(void);

s32 func_80099C78(void) {
    s32 i;
    for (i = 0; i < 2; i++) func_80012A20(func_80019F30(0x20008, i + 2), 1, 0, 0);
    func_80012A20(func_80019F30(0x50008, 0), 1, 0, 0);
    func_80032DB0(0, 0, 3, 8, 0, func_8009A160);
    (*D_800B3AD0) = 0xB4;
    func_8001ADCC(8);
    return func_80012508();
}

void func_80099D34(void) {
    extern u8 D_8008ED68[];
    extern u8 D_80086228[];
    extern void func_8001ADA0(s32);
    extern void func_8001AD48(s32);
    extern void func_80012578(void);
    extern s32 func_80012508(void);
    u8 *d = D_8008ED68;
    register u8 *p asm("v0");
    register s32 val asm("v1");

    switch (*(u16 *)(d + 0xE0)) {
    case 0:
        if (*(s32 *)(d + 0xA68) == 0) {
            register s32 three asm("v0") = 3;
            register s32 val_dc asm("v1") = *(u16 *)(d + 0xDC);
            register s32 arg asm("a0") = 8;
            if (val_dc == three) {
                p = D_80086228;
                val = 0xE0;
                p[0x19] = val;
                p[0x1A] = val;
                p[0x1B] = val;
                p += 0x4594;
                p[0x19] = val;
                p[0x1A] = val;
                p[0x1B] = val;
            } else {
                p = D_80086228;
                p[0x19] = 0;
                p[0x1A] = 0;
                p[0x1B] = 0;
                p += 0x4594;
                p[0x19] = 0;
                p[0x1A] = 0;
                p[0x1B] = 0;
            }
            func_8001ADA0(arg);
            func_80012578();
        }
        break;
    case 1:
        if (*(s32 *)(d + 0xA68) == 0) {
            if (*(u16 *)(d + 0xDC) != 3) {
                func_8001AD48(6);
            }
            func_80012508();
        }
        break;
    }
}

void func_80099E2C(void) {
    extern M2C_UNK D_8008ED68[];
    extern s32 D_800B3AD0[];
    s32 temp_v0;

    temp_v0 = (*D_800B3AD0) - 1;
    (*D_800B3AD0) = temp_v0;
    if ((temp_v0 < 0) || (M2C_GFIELD(D_8008ED68, s32, 0x88) & 0x8F0) || (M2C_GFIELD(D_8008ED68, s32, 0x98) & 0x8F0)) {
        func_8001ADCC(8);
        (*D_800B3AD0) = 0x168;
        func_80012508();
    }
}

void func_80099EA0(void) {
    extern M2C_UNK D_8008ED68[];
    extern void func_8009A1D4(void);
    if ((u16) M2C_GFIELD(D_8008ED68, u16, 0xDC) < 7U) {
        func_8009A094();
        func_80020688(-8, -0x18, 0x80, 0x30, 0x3A0, 0, 0x3F0, 0x164, 0x80, 0x80, 0x80, 0, 0, 3);
        if (M2C_GFIELD(D_8008ED68, s32, 0xA68) == 0) {
            func_80012508();
        }
    } else {
        if (M2C_GFIELD(D_8008ED68, s32, 0xA68) == 0) {
            func_80012200(func_8009A1D4);
            return;
        }
        func_8009A094();
        func_80020688(-8, -0x18, 0x80, 0x30, 0x3A0, 0, 0x3F0, 0x164, 0x80, 0x80, 0x80, 0, 0, 3);
    }
}

void func_80099FCC(void) {
    extern M2C_UNK D_8008ED68[];
    extern s32 D_800B3AD0[];
    s32 temp_v0;

    func_8009A094();
    func_80020688(-8, -0x18, 0x80, 0x30, 0x3A0, 0, 0x3F0, 0x164, 0x80, 0x80, 0x80, 0, 0, 3);
    temp_v0 = (*D_800B3AD0) - 1;
    (*D_800B3AD0) = temp_v0;
    if ((temp_v0 < 0) || (M2C_GFIELD(D_8008ED68, s32, 0x88) & 0x830) || (M2C_GFIELD(D_8008ED68, s32, 0x98) & 0x830)) {
        func_8001AD74(6);
        func_80012508();
    }
}

extern char D_800AEFB4[], D_800AEFC8[], D_800AEFD8[];
extern s32 func_8001F1A8(s32, s32, s32, s32, s32, char *, s32, s32, s32);

s32 func_8009A094(void) {
    func_8001F1A8(-0x98, -0x18, 0, 1, 0, D_800AEFB4, 1, 9, 3);
    func_8001F1A8(-0x80, 8, 0, 1, 0, D_800AEFC8, 1, 8, 3);
    return func_8001F1A8(0x70, 8, 0, 1, 0, D_800AEFD8, 1, 2, 3);
}

void func_8009A160(u8 *arg0) {
    extern M2C_UNK D_8008ED68[];
    u16 a = M2C_GFIELD(D_8008ED68, u16, 0xDC);
    if ((a == 3 && M2C_GFIELD(D_8008ED68, u16, 0xE0) != 0) || a == 4 || (a == 5 && M2C_GFIELD(D_8008ED68, u16, 0xE0) == 0)) {
        *(u32 *)(arg0 + 0x38) &= ~1;
    } else {
        *(u32 *)(arg0 + 0x38) |= 1;
    }
}

void func_8009A1D4(void) {
    extern u8 D_8008ED68[];
    extern u16 D_8008EE44[];
    extern void (*D_800AF1B8[])(void);
    extern void (*D_800AF1E4[])(void);
    extern s32 D_800B3AE0[];
    u8 *d = D_8008ED68;

    if ((u16)(*(u16 *)(d + 0xDC) - 5) < 3) {
        if (*D_800B3AE0 != 0) {
            D_800AF1E4[0]();
            goto call_tbl;
        }
        if ((*(s32 *)(d + 0x88) & 0x8F0) != 0 || (*(s32 *)(d + 0x98) & 0x8F0) != 0) {
            *D_800B3AE0 = 1;
        }
    }
    if (*D_800B3AE0 != 0) {
        D_800AF1E4[0]();
    }
call_tbl:
    D_800AF1B8[*D_8008EE44]();
}

void func_8009A294(void) {
    extern int func_80012508();
    func_80019F30(8, func_80012508);
    func_80012508();
}

void func_8009A2C4(void)
{
  extern u8 D_8008ED68[];
  extern u8 D_800859F0[];
  int new_var4;
  extern s32 D_800B3AD8[];
  extern void func_8009C324(s32, s32, s32);
  extern s32 func_80019654(void);
  u8 *new_var2;
  int new_var3;
  extern void func_80012578(void);
  extern void func_800338DC(s32);
  u8 *new_var;
  u8 *new_var5;
  extern s32 func_800337EC(void);
  extern s32 func_80012508(void);
  u8 *s0 = D_8008ED68;
  register s32 m asm("v1");
  if (*((u16 *)(s0 + 0xDC)) == 8) {
    func_8009C324(0, -0x18, 5);
  }
  new_var4 = 0xDC;
  switch (*((u16 *)(s0 + 0xE0))) {
    case 0:
      m = *((u16 *)(s0 + new_var4));
      do { } while (0);
      new_var5 = s0 + 0xA18;
      new_var2 = new_var5;
      D_800B3AD8[0] = 0;
      if ((m == 2) && (*((s32 *)new_var2) == 1)) {
        func_80012508();
        return;
      }
      func_80012578();
      return;
    case 1:
      if (func_80019654() != 0) {
        func_80012578();
      }
      return;
    case 2:
      func_800338DC((*((u16 *)(s0 + new_var4)) == 2) ? 0x701D : 0x701E);
      func_80012578();
      return;
    case 3:
      new_var = D_800859F0;
      if (!(*new_var & 4)) {
        func_80012508();
        return;
      }
      do {
        new_var3 = func_800337EC() & 0x80;
        if (new_var3) {
          func_80012508();
        }
      } while (0);
      return;
  }
}

s32 func_8009A3E8(void)
{
  u8 *new_var;
  typedef struct 
  {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    u8 pad[10];
  } ItemAF000;
  typedef struct 
  {
    s16 unk0;
    u8 pad[10];
  } ItemAF0B4;
  extern u8 D_8008ED68[];
  extern u8 D_80085428[];
  extern ItemAF000 D_800AF000[];
  extern ItemAF0B4 D_800AF0B4[];
  extern u16 D_800AF168[];
  extern u16 D_800AF174[];
  extern s16 D_800AF1A0[];
  extern s32 D_800B3AF8[];
  extern s32 D_800B3AE4[];
  extern s32 D_800B3AEC[];
  extern s32 D_800B3B20[];
  extern s32 D_800B3AE0[];
  extern s32 func_80019F30(s32, s32);
  extern void func_80012A20(s32, s32, s32, s32);
  extern u8 *func_80032E78(s32, s32, s32, s32, s32, void *);
  extern void func_8009B060();
  extern void func_8009B1CC();
  extern void func_8009B624();
  extern void func_8009B500();
  extern void func_8009B564();
  extern void func_8009B6D0();
  extern void func_8009B738();
  extern void func_8009B774();
  extern void func_8009B7EC();
  extern void func_8009B864();
  extern void func_8009BBD0();
  extern void func_8009BD30();
  extern s32 func_80012544(s32);
  extern s32 func_80012508(void);
  extern void func_8001AD48(s32);
  s32 k;
  s32 i;
  s32 alt;
  u8 *o;
  s32 ret;
  for (i = 0; i < 0x11; i++)
  {
    func_80012A20(func_80019F30(0x20008, i + 4), 1, 0, 0);
  }

  for (i = 0; i < 6; i++)
  {
    func_80012A20(func_80019F30(0x50008, i + 1), 1, 0, 0);
  }

  o = func_80032DB0(0, -0x18, 4, 8, 2, func_8009B060);
  *((s16 *) (o + 0x52)) = 0;
  *((s16 *) (o + 0x50)) = 0;
  *((s16 *) (o + 0x76)) = 0;
  *((s16 *) (o + 0x74)) = 0;
  *((s32 *) (o + 0x3C)) = 0;
  new_var = D_80085428;
  for (i = 0; i < 0xA; i++)
  {
    s32 v;
    o = func_80032DB0(D_800AF000[i].unk0, D_800AF000[i].unk2, 4, 8, (D_800AF000[i].unk4 * 2) + 7, func_8009B1CC);
    v = D_800AF000[i].unk6;
    *((s32 *) (o + 0x84)) = i;
    *((s32 *) (o + 0x80)) = (s16) (v % 50);
    for (k = 0; k < 5; k++)
    {
      u16 a;
      u16 b;
      o = func_80032DB0(D_800AF000[i].unk0, D_800AF000[i].unk2, 4, 8, k + 0x2E, func_8009B624);
      a = D_800AF168[k];
      *((s16 *) (o + 0x6A)) = a;
      b = D_800AF174[k];
      *((s32 *) (o + 0x88)) = k;
      *((u32 *) (o + 0x38)) &= ~8;
      *((s32 *) (o + 0x84)) = i;
      *((s16 *) (o + 0x6E)) = b;
    }

    o = func_80032DB0(D_800AF000[i].unk0, D_800AF000[i].unk2, 4, 8, 8, func_8009B500);
    *((s32 *) (o + 0x84)) = i;
    D_800B3AF8[i] = 0;
  }

  for (i = 0; i < 5; i++)
  {
    s32 x = D_800AF1A0[i];
    s32 y = 0x50;
    if (i >= 2)
    {
      y = 0x40;
    }
    o = func_80032E78(x, y, 2, 8, 0x12, func_8009B564);
    *((s32 *) (o + 0x84)) = i;
  }

  o = func_80032DB0(0, 0x150, 4, 8, 0x61, func_8009B6D0);
  *((s16 *) (o + 0x6E)) = -2;
  *((u32 *) (o + 0x38)) &= ~8;
  func_80032DB0(-3, 0x50, 3, 8, 1, func_8009B738);
  o = func_80032DB0(0, 0x44, 3, 8, 3, func_8009B774);
  *((s32 *) (o + 0x84)) = 0x64;
  for (i = 0; i < 2; i++)
  {
    o = func_80032DB0((-0x40) + (i * 0x80), 0x44, 3, 8, i + 0x63, func_8009B7EC);
    *((s32 *) (o + 0x84)) = i;
  }

  alt = 0;
  for (i = 0; i < 6; i++, alt ^= 1)
  {
    for (k = 0; k < 8; k++)
    {
      o = func_80032DB0((-0xA0) + (k * 0x28), (i / 3) ? (((i - 3) * 40) + 0x78) : ((i * 40) - 0xF0), 3, 8, (alt) ? (0x4F) : (0x50), func_8009B864);
      *((s32 *) (o + 0x80)) = k;
      *((s32 *) (o + 0x84)) = i;
      *((s16 *) (o + 0x6E)) = (i / 3) ? (-4) : (4);
      alt ^= 1;
      *((u32 *) (o + 0x38)) &= ~8;
    }

  }

  for (i = 0; i < 0xF; i++)
  {
    o = func_80032DB0(0, 0xA0, 4, 8, i + 0x51, func_8009BBD0);
    *((s32 *) (o + 0x80)) = i;
    *((s32 *) (o + 0x84)) = D_800AF0B4[i].unk0;
    *((s32 *) (o + 0x88)) = 0;
    *((s32 *) (o + 0x3C)) = 0;
    *((u32 *) (o + 0x38)) &= ~8;
  }

  for (i = 0; i < 4; i++)
  {
    for (k = 0; k < 3; k++)
    {
      o = func_80032DB0((i * 128) - 0x100, (-0xC0) + (k * 0x80), 5, 8, 0x60, func_8009BD30);
      o[0x5A] = 0x70;
      o[0x59] = 0x70;
      o[0x58] = 0x70;
      *((u32 *) (o + 0x38)) &= ~8;
    }

  }

  {
    typedef struct 
    {
      u8 pad[0xA18];
      s32 unkA18;
    } StructED68;
    StructED68 *d = (StructED68 *) D_8008ED68;
    register u8 *d5428 = new_var;
    s32 *ae0 = D_800B3AE0;
    d5428[0xF] = 0;
    d5428[0xE] = 0;
    d5428[1] = 0;
    *D_800B3AE4 = 0;
    *ae0 = 0;
    *D_800B3AEC = 0;
    *D_800B3B20 = 0;
    if (d->unkA18 == 1)
    {
      d->unkA18 = 0;
      *ae0 = 1;
      ret = func_80012544(0xB);
    }
    else
    {
      func_8001AD48(3);
      ret = func_80012508();
    }
  }
  return ret;
}

void func_8009A9B0(void) {
    extern M2C_UNK D_8008ED68[];
    extern s32 D_800B3ADC[];
    extern void func_80012578(void);
    if (M2C_GFIELD(D_8008ED68, u16, 0xE0) == 0) {
        if (M2C_GFIELD(D_8008ED68, s32, 0xA68) == 0) {
            func_80012578();
        }
    } else {
        *D_800B3ADC = 0x20;
        func_80012508();
    }
}
