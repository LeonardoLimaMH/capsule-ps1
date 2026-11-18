#include "common.h"

/* registro de 0x79C bytes; o campo 0x798 é lido como palavra ou como byte */
typedef struct {
    u8 _p0[0x2BC];
    s32 unk_2BC;
    u8 _p2C0[0x64];
    s16 unk_324;
    u16 unk_326;
    s16 unk_328;
    u8 _p32A[0x1A];
    s16 unk_344;
    u8 _p346[0x452];
    union {
        u32 w;
        u8 b;
    } f_798;
} S_80100F38;

typedef struct {
    u8 pad_0[0x10];
    u16 unk_10;
    u16 unk_12;
    u8 pad_14[0x7C];
    u16 unk_90;
    u8 pad_92[0x116];
} Slot_80091618;
extern S_80100F38 D_80100F38[];

typedef struct {
    u8 pad[0x8B];
    u8 grid[2][8][8];
} S_800EFF58;

typedef struct {
    u8 _p0[0x64];
    s32 f_64;
    s32 f_68;
    s32 f_6C;
    s32 f_70;
} Struct_80069E4C;

typedef struct {
    u8 _p0[0x54];
    s32 f_54;
    u8 _p58[0xE0 - 0x58];
    s32 f_E0;
} Struct_80069AD4;


typedef struct { u8 pad[0x386]; s16 field; u8 tail[0x414]; } Record_800D2894;

u8 *func_800D5C10(s32 idx) {
    u8 *rec = (u8 *)D_80100F38 + (idx & 0xFFFF) * 0x79C;

    *(s16 *)(rec + 0x396) = 0;
    return rec;
}

void func_800D5C44(s32 idx) {
    extern u8 D_8008EE6A[];
    u8 *rec = (u8 *)D_80100F38 + (idx & 0xFFFF) * 0x79C;

    *(s16 *)(rec + 0x39C) = 0;
    *D_8008EE6A = 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894__800D5C10", func_800D5C80);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894__800D5C10", func_800D613C);

s32 func_800D6848(s32 arg0) {
    extern s32 D_800F1D1C[][2];
    s32 val;
    s32 a0 = arg0 & 0x3F;

    if ((u32)a0 <= 0x10) {
        val = D_800F1D1C[a0][1];
    } else if (a0 <= 0x20) {
        val = D_800F1D1C[0x20 - a0][1];
    } else if (a0 <= 0x30) {
        val = -D_800F1D1C[a0 - 0x20][1];
    } else {
        val = -D_800F1D1C[0x40 - a0][1];
    }
    return (s16)val;
}

s32 func_800D68D4(s32 arg0) {
    extern s32 D_800F1D1C[][2];
    s32 val;
    s32 a0 = arg0 & 0x3F;

    if ((u32)a0 <= 0x10) {
        val = D_800F1D1C[a0][0];
    } else if (a0 <= 0x20) {
        val = -D_800F1D1C[0x20 - a0][0];
    } else if (a0 <= 0x30) {
        val = -D_800F1D1C[a0 - 0x20][0];
    } else {
        val = D_800F1D1C[0x40 - a0][0];
    }
    return (s16)val;
}

void func_800D6960(void *arg0, s8 arg1, s8 arg2, s8 arg3) {
    M2C_FIELD(arg0, s8 *, 0) = arg1;
    M2C_FIELD(arg0, s8 *, 1) = arg2;
    M2C_FIELD(arg0, s8 *, 2) = arg3;
    M2C_FIELD(arg0, s8 *, 3) = 0x38;
}
extern void func_800D0730(s16 *, s32, s32, s32);
extern s32 func_800D6A2C(s32, s32, s32, s32, s32, s32);

s32 func_800D6978(s32 a0, s32 a1, s32 a2) {
    s16 b[4];
    u16 k = a0;
    u8 *p = (u8 *)D_80100F38 + k * 0x79C;
    func_800D0730(b, (s16)(*(u16 *)(p + 0x332) - 1), (s16)(*(u16 *)(p + 0x334) - 1), 0);
    return func_800D6A2C(k, b[0], b[2], 3, (u8)a1, (u16)a2);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894__800D5C10", func_800D6A2C);

void func_800D827C(void) {
    extern s32 D_80069BB4[];
    extern s32 D_80069EAC[];
    extern Slot_80091618 D_80091618[];
    extern u8 D_800EF524[];
    extern u8 D_800900C0[];
    extern s32 func_800B1260(s32);
    extern void func_800CCFA4(s32, s32, s32);
    extern void func_800B11F4(void);
    extern void func_800D8774(s32, s32, s32);
    s32 i, j;
    u32 k;

    i = 1;
    do {
        k = (u16)func_800B1260(i);
        {
        register u32 invalid asm("v0") = 0xFFFF;
        if (k != invalid) {
            u32 one = 1;
            u32 off;
            u32 c;
            u32 q_off;
            u8 *base;
            register u8 *p0 asm("a1");
            j = 0;
            off = 0x234;
            c = D_80091618[k].unk_10;
            base = D_800900C0;
            p0 = base;
            q_off = c * 0x9C;
            do {
                register s32 empty asm("v0") = -1;
                if (*(s32 *)((u8 *)q_off + (u32)D_800EF524) != empty) {
                    if (i == one) {
                        *(s32 *)p0 = i;
                    } else {
                        *(s32 *)(off + (u32)base) = one;
                    }
                }
                off += 0xBC;
                p0 += 0xBC;
                j++;
                q_off += 0x34;
            } while (j < 3);
            invalid = 0xFFFF;
            if (c != invalid && D_80091618[k].unk_12 != 0) {
                for (j = 0; j < D_80091618[k].unk_12; j++) {
                    func_800CCFA4(i, j, 0);
                }
            }
            D_80091618[k].unk_12 = 0;
        }
        }
        i--;
    } while (i >= 0);
    func_800B11F4();
    D_80069EAC[0] = D_80069BB4[0];
    func_800D8774(2, D_80069BB4[0], 0x500);
}

extern s32 D_80069B28[];
extern u8 D_80091618[], D_800EF524[], D_800900C0[];
extern void func_800D8A20(void);
s32 func_800D8440(void) {
    extern s32 D_80069B28[];
    extern u8 D_80091618[];
    extern u8 D_800EF524[];
    extern u8 D_800900C0[];
    s32 i;
    u8 *slots;
    u8 *grid;
    s32 minus_one;

    if (D_80069B28[0] != 0) {
        func_800D8A20();
        return 0;
    }

    i = 1;
    slots = D_80091618;
    grid = D_800EF524;
    minus_one = -1;

    do {
        u16 k = func_800B1260(i);
        if (k != 0xFFFF) {
            register s32 j asm("a2") = 0;
            register u32 off asm("a1") = 0x234;
            u8 *base;
            register u8 *p0 asm("a0");
            u32 unk = *(u16 *)(slots + k * 0x1A8 + 0x10);
            u32 q_off;

            base = D_800900C0;
            p0 = base;
            q_off = unk * 0x9C;

            do {
                if (*(s32 *)((u8 *)q_off + (u32)grid) != minus_one) {
                    register s32 one asm("v0") = 1;
                    if (i == one) {
                        *(s32 *)p0 = minus_one;
                    } else {
                        *(s32 *)(off + (u32)base) = minus_one;
                    }
                }
                off += 0xBC;
                p0 += 0xBC;
                j++;
                q_off += 0x34;
            } while (j < 3);
        }
        i--;
    } while (i >= 0);

    return 1;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894__800D5C10", func_800D8558);

s32 func_800D865C(void) {
    extern s32 D_80069B28[];
    extern u8 D_80091618[];
    extern u8 D_800EF524[];
    extern u8 D_800900C0[];
    s32 i;
    u8 *slots;
    u8 *grid;
    s32 minus_one;

    if (D_80069B28[0] != 0) {
        func_800D8A20();
        return 0;
    }

    i = 1;
    slots = D_80091618;
    grid = D_800EF524;
    minus_one = -1;

    do {
        u16 k = func_800B1260(i);
        if (k != 0xFFFF) {
            register s32 j asm("a2") = 0;
            register u32 off asm("a1") = 0x234;
            u8 *base;
            register u8 *p0 asm("a0");
            u32 unk = *(u16 *)(slots + k * 0x1A8 + 0x10);
            u32 q_off;

            base = D_800900C0;
            p0 = base;
            q_off = unk * 0x9C;

            do {
                if (*(s32 *)((u8 *)q_off + (u32)grid) != minus_one) {
                    register s32 one asm("v0") = 1;
                    if (i == one) {
                        *(s32 *)p0 = minus_one;
                    } else {
                        *(s32 *)(off + (u32)base) = minus_one;
                    }
                }
                off += 0xBC;
                p0 += 0xBC;
                j++;
                q_off += 0x34;
            } while (j < 3);
        }
        i--;
    } while (i >= 0);

    return 1;
}

void func_800D8774(s32 mode, s32 a1, s32 a2) {
    extern u8 D_80069E4C[];
    extern s32 D_80069B28[];

    if (mode == 1) {
        goto case_1;
    }
    if (mode < 2) {
        goto set_b28;
    }
    if (mode == 2) {
        goto case_2;
    }
    *D_80069B28 = mode;
    goto end;

case_1:
    {
        u8 *p = D_80069E4C;
        *(s32 *)(p + 0x64) = a1;
        *(s32 *)(p + 0x68) = *(s32 *)(p + 0x60);
    }
    goto set_b28;

case_2:
    {
        u8 *p = D_80069E4C;
        *(s32 *)(p + 0x64) = a1;
        *(s32 *)(p + 0x68) = a2;
        *(s32 *)(p + 0x60) = a1;
    }

set_b28:
    *D_80069B28 = mode;

end:
    {
        u8 *p = D_80069E4C;
        *(s32 *)(p + 0x6C) = 0;
        *(s32 *)(p + 0x70) = 0x10;
    }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894__800D5C10", func_800D87E8);

void func_800D8A20(void) {
    extern Struct_80069E4C D_80069E4C[];
    extern Struct_80069AD4 D_80069AD4[];

    if (D_80069E4C[0].f_6C == 0) {
        D_80069E4C[0].f_6C = 1;
        D_80069E4C[0].f_70 = 0x10;
        return;
    }

    if (D_80069E4C[0].f_70 >= 9) {
        D_80069AD4[0].f_E0 += (D_80069E4C[0].f_68 - D_80069E4C[0].f_64) / 8;
    } else {
        D_80069AD4[0].f_E0 -= (D_80069E4C[0].f_68 - D_80069E4C[0].f_64) / 8;
    }

    if (--D_80069E4C[0].f_70 == 0) {
        D_80069E4C[0].f_6C = 0;
        D_80069AD4[0].f_54 = 0;
        D_80069AD4[0].f_E0 = D_80069E4C[0].f_64;
    }
}

s32 func_800DBB3C(s16 id);
void func_800D8AF8(u8 *arg0, s32 arg1) {
 extern u8 D_8008F702[];
 extern u8 D_80069E4C[];
 register s32 i asm("t0");
 register s16 *a asm("a2");
 register s16 *b asm("a0");
 register s16 *bp asm("a3");
 register s16 *ap asm("a1");
 u8 *p;
 if(D_8008F702[0]!=1) {
 i=0;
 p=D_80069E4C;
 a=(s16 *)(*(u8 **)(arg0+0xB4)+arg1*32);
 b=(s16 *)(*(u8 **)(arg0+0xB8)+arg1*32);
 bp=b+2;
 ap=a+2;
 do {
 if(*(s32 *)(p+0x70)>=9) {
 a[0]+=b[0]>>7; ap[-1]+=bp[-1]>>7; ap[0]+=bp[0]>>7;
 } else {
 a[0]-=b[0]>>7; ap[-1]-=bp[-1]>>7; ap[0]-=bp[0]>>7;
 }
 i++; ap+=4; a+=4; bp+=4; b+=4;
 } while(i<4);
 }
}

s32 func_800D8BF8(void) {
    extern s32 D_800EE9B8[];
    s32 i;
    for (i = 1; i >= 0; i--) {
        u32 id = (u16)func_800B1260(i);
        if (id != 0xFFFF) {
            u32 w = D_80100F38[id].f_798.w;
            if (((w >> 14) & 0x3F) == 9 && ((w >> 26) & 0x1F) - 10 < 2) {
                if (D_800EE9B8[1 - i] == 0) {
                    continue;
                }
                return 1;
            }
        }
    }
    return 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894__800D5C10", func_800D8CCC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894__800D5C10", func_800D8E90);

void func_800D8FB0(u32 id) {
    extern S_80100F38 D_800F0D40;
    D_80100F38[(u16)id] = D_800F0D40;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894__800D5C10", func_800D9030);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894__800D5C10", func_800D926C);

#include "common.h"
extern s32 func_800B1260(s32);

#define PL(a) ((u8 *)D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s32 D_800F1DA4[];
extern u8 *D_800F1DA8[];
extern u8 *func_800D9030(void);

s32 func_800D9888(s32 a0, s32 a1)
{
  int new_var;
  u8 *p = (u8 *)D_80100F38 + ((func_800B1260(a1) & 0xFFFF) * 0x79C);
  new_var = ~1;
  if (a1 == 1)
  {
    u8 *o;
    *D_800F1DA4 = 0;
    o = func_800D9030();
    *D_800F1DA8 = o;
    *((s32 *) (o + 0x38)) &= new_var;
    *((s32 *) (o + 0x34)) |= 0x200;
  }
  return *((s32 *) (p + 0x2BC)) += 1;
}

#include "common.h"

/* rand-u16: 0x8006AF90 1 0,1,2,3 */
extern u8 D_80091618[];
extern u16 D_8006AF90[];
extern s32 D_800EEB64[];
extern s32 func_800B1260(s32);
extern void func_800D1CC4(s32, s32, s32, s32);

s32 func_800D9930(s32 a0, s32 a1)
{
  s16 *new_var3;
  s16 *new_var2;
  s32 k = func_800B1260(a1);
  u8 *new_var;
  u8 *p = (u8 *)D_80100F38 + ((487 * ((u16) k)) * 4);
  if (a1 == 1)
  {
    *D_800EEB64 = a1;
    new_var3 = (s16 *) D_8006AF90;
    if (((s16 *) D_8006AF90)[10] == 0)
    {
      new_var2 = new_var3;
      func_800D1CC4(D_8006AF90[new_var2[0]], 0x26, 4, 1);
    }
  }
  new_var = D_80091618;
  *((u16 *) ((new_var + (((u16) k) * 0x1A8)) + 0x64)) = 0;
  return *((s32 *) (p + 0x2BC)) += 1;
}

#include "common.h"

extern u8 D_80091618[];
extern s32 D_800EEB6C[];
extern s32 func_800B1260(s32);
extern void func_800D4B7C(s32, s32), func_800D1CC4(s32, s32, s32, s32);
extern s32 func_800D0CFC(s32);

s32 func_800D9A20(s32 a0, s32 a1)
{
  u8 *new_var;
  u16 k = func_800B1260(a1);
  u8 *p;
  new_var = D_80091618;
  *((u16 *) ((new_var + (k * 0x1A8)) + 0x66)) = 0;
  *((u16 *) ((new_var + (k * 0x1A8)) + 0x68)) = 0;
  p = (u8 *)D_80100F38 + (k * 0x79C);
  func_800D4B7C(a1, k);
  if (func_800D0CFC(a1) == 0)
  {
    func_800D1CC4(k, 0x1D, 0, 0);
    *D_800EEB6C = 1;
  }
  return *((s32 *) (p + 0x2BC)) += 1;
}

#include "common.h"

/* stub-ret: mixed */
extern s32 func_800B1260(s32);

#define PL(a) ((u8 *)&D_80100F38[func_800B1260(a) & 0xFFFF])
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s16 D_800F0738[];
extern s32 func_800CE128(s32), func_800B12D8(s32);
extern void func_800CE4B8(s32, s32, s32, s32), func_800D8E90(s32);

#define Q798(a) (D_80100F38[func_800B12D8(a) & 0xFFFF].f_798.w)

s32 func_800D9B00(s32 a0, s32 a1)
{
  u8 *p = (u8 *) (&D_80100F38[func_800B1260(a1) & 0xFFFF]);
  S_80100F38 *new_var;
  switch (*((s16 *) (p + 0x344)))
  {
    case 0:
      *((u16 *) (p + 0x344)) = 1;
      *((s32 *) (p + 0x798)) &= ~0x3000;
      break;

    case 1:
      func_800CE4B8(a1, a0, (*D_800F0738) + func_800CE128(*((s16 *) (p + 0x326))), 0);
      *((u16 *) (p + 0x344)) = 2;
      *((s32 *) (p + 0x798)) = ((*((s32 *) (p + 0x798))) & (~0x3000)) | 0x1000;
      break;

    case 2:
      if ((((*(new_var = &D_80100F38[func_800B12D8(a1) & 0xFFFF])).f_798.w >> 12) & 3) != 0)
    {
      *((u16 *) (p + 0x344)) = 3;
      *((s32 *) (p + 0x798)) = ((*((s32 *) (p + 0x798))) & (~0x3000)) | 0x2000;
    }
      break;

    default:
      if ((((*(new_var = &D_80100F38[func_800B12D8(a1) & 0xFFFF])).f_798.w >> 12) & 3) == 2)
    {
      *((u16 *) (p + 0x344)) = 0;
      *((s32 *) (p + 0x2BC)) += 1;
    }
      break;

  }

  return *((s32 *) (p + 0x2BC));
}

#include "common.h"

/* stub-ret: mixed */
extern s32 func_800B1260(s32);

#define PL(a) ((u8 *)&D_80100F38[func_800B1260(a) & 0xFFFF])
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s16 D_800F0738[];
extern s32 func_800CE128(s32), func_800B12D8(s32);
extern void func_800CE4B8(s32, s32, s32, s32), func_800D8E90(s32);

#define Q798(a) ((q = &D_80100F38[func_800B12D8(a) & 0xFFFF])->f_798.w)

s32 func_800D9CC8(s32 a0, s32 a1) {
    u8 *p = PL(a1);
    S_80100F38 *q;
    switch (PS16(0x344)) {
    case 0:
        P16(0x344) = 1;
        P32(0x798) &= ~0x300;
        break;
    case 1:
        func_800CE4B8(a1, a0, (*D_800F0738) + func_800CE128(PS16(0x326)), 0);
        P16(0x344) = 2;
        P32(0x798) = (P32(0x798) & ~0x300) | 0x100;
        break;
    case 2:
        if (((Q798(a1) >> 8) & 3) != 0) {
            P16(0x344) = 3;
            P32(0x798) = (P32(0x798) & ~0x300) | 0x200;
        }
        break;
    default:
        if (((Q798(a1) >> 8) & 3) == 2) {
            P16(0x344) = 0;
            P32(0x2BC) += 1;
            func_800D8E90(a1);
        }
        break;
    }
    return P32(0x2BC);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894__800D5C10", func_800D9E94);

#include "common.h"

/* stub-ret: mixed */
extern s32 func_800B1260(s32);

#define PL(a) ((u8 *)&D_80100F38[func_800B1260(a) & 0xFFFF])
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s16 D_800F0738[];
extern s32 func_800CE128(s32), func_800B12D8(s32);
extern void func_800CE4B8(s32, s32, s32, s32), func_800D8E90(s32);

#define Q798(a) ((q = &D_80100F38[func_800B12D8(a) & 0xFFFF])->f_798.b)

s32 func_800DA154(s32 a0, s32 a1) {
    u8 *p = PL(a1);
    S_80100F38 *q;
    switch (PS16(0x344)) {
    case 0:
        P16(0x344) = 1;
        P32(0x798) &= ~0xC0;
        break;
    case 1:
        func_800CE4B8(a1, a0, (*D_800F0738) + func_800CE128(PS16(0x326)), 0);
        P16(0x344) = 2;
        P32(0x798) = (P32(0x798) & ~0xC0) | 0x40;
        break;
    case 2:
        if ((Q798(a1) >> 6) != 0) {
            P16(0x344) = 3;
            P32(0x798) = (P32(0x798) & ~0xC0) | 0x80;
        }
        break;
    default:
        if ((Q798(a1) >> 6) == 2) {
            P16(0x344) = 0;
            P32(0x2BC) += 1;
            func_800D8E90(a1);
        }
        break;
    }
    return P32(0x2BC);
}

s32 func_800DA318(s32 a0, s32 a1) {
    extern s16 D_800F0770[], D_800F0778[];
    s32 k = func_800B1260(a1);
    u8 *p = (u8 *)&D_80100F38[(u16)k];
    S_80100F38 *q;
    switch (PS16(0x344)) {
    case 0:
        P16(0x344) = 1;
        P32(0x798) &= ~0xC0;
        break;
    case 1:
        if (func_800D0CFC(a1) == 0) {
            func_800CE4B8(a1, a0, D_800F0770[0], 0);
        } else {
            func_800CE4B8(a1, a0, D_800F0778[0], 0);
        }
        P16(0x344) = 2;
        P32(0x798) = (P32(0x798) & ~0xC0) | 0x40;
        break;
    case 2:
        if ((Q798(a1) >> 6) != 0) {
            P16(0x344) = 3;
            P32(0x798) = (P32(0x798) & ~0xC0) | 0x80;
        }
        break;
    default:
        if ((Q798(a1) >> 6) == 2) {
            P16(0x344) = 0;
            P32(0x2BC) += 1;
            func_800D8E90(a1);
            func_800D4B7C(a1, (u16)k);
        }
        break;
    }
    return P32(0x2BC);
}

s32 func_800DA500(s32 unused, s32 arg1) {
    extern u8 D_80091618[], D_80063940[];
    s32 raw = func_800B1260(arg1);
    register u8 *base asm("a0") = D_80091618;
    u16 k = raw;
    u16 *slot = (u16 *)(base + k * 0x1A8);
    S_80100F38 *p = &D_80100F38[k];
    register u8 *data asm("a1") = D_80063940;
    u16 c = *slot;

    if ((u32)(((*(u32 *)(data + c * 0x3C + 0xC) >> 11) & 0x1F) - 0x19) < 6) {
        u8 *pc = (u8 *)p->unk_2BC;
        if (*pc != 1) {
            register u8 *n asm("v0");
            register u8 *old asm("v1");
            do {
                n = pc + 1;
                old = pc;
                p->unk_2BC = (s32)n;
                pc = n;
            } while (old[1] != 1);
        }
    } else {
        p->unk_2BC++;
    }
    return p->unk_2BC;
}

s32 func_800DA5FC(s32 arg0, s32 arg1) {
    extern u8 D_80063940[];
    extern s32 D_8008ED80[];
    extern u8 D_80091618[];
    extern s16 D_800F07D0[];
    s32 id = (u16)func_800B1260(arg1);
    register u8 *slots asm("v1") = D_80091618;
    u8 *slot = id * 0x1A8 + slots;
    S_80100F38 *p = &D_80100F38[id];
    u32 kind = *(u16 *)slot;
    s32 val;
    u8 *q;
    switch (p->unk_344) {
    case 0:
        p->unk_324 = p->unk_326;
        {
            register u8 *base asm("v1") = D_80063940;
            q = kind * 0x3C + base;
        }
        val = (*(u32 *)(q + 0x1C) >> 8) & 7;
        p->unk_326 = val;
        p->unk_328 = func_800D06D4(p->unk_324, val);
        p->unk_344 = 1;
        break;
    case 1:
        if ((D_8008ED80[0] & 3) == 3) {
            if (p->unk_328 == 0) {
                func_800CE4B8(arg1, arg0, D_800F07D0[0], 1);
                p->unk_344 = 2;
            } else {
                func_800CE164(arg1);
                func_800CE204(arg1, arg0);
            }
        }
        break;
    case 2:
        if (func_80015E60(arg0) == 1) {
            p->unk_344 = 3;
        } else {
            func_80098FEC(arg0, arg1, id);
        }
        break;
    default:
        p->unk_344 = 0;
        p->unk_2BC++;
        break;
    }
    return p->unk_2BC;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894__800D5C10", func_800DA7C4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894__800D5C10", func_800DA9D0);

s32 func_800DAC08(s32 arg0, s32 arg1) {
    extern u8 D_80063940[];
    extern s32 D_8008ED80[];
    extern u8 D_80091618[];
    extern s16 D_800F07D0[];
    s32 id = (u16)func_800B1260(arg1);
    S_80100F38 *p = &D_80100F38[id];
    u8 *q;
    s32 val;
    switch (p->unk_344) {
    case 0:
        {
            register u8 *slots asm("v1") = D_80091618;
            u8 *slot = id * 0x1A8 + slots;
            register u8 *base asm("v1") = D_80063940;
            register u32 kind asm("a0") = *(u16 *)slot;
            q = kind * 0x3C + base;
        }
        if (((*(u32 *)(q + 0xC) >> 11) & 0x1F) != 0x12) {
            p->unk_2BC++;
        } else if (func_800E14C4(id) == 1) {
            p->unk_2BC++;
        } else {
            p->unk_324 = p->unk_326;
            val = (*(u32 *)(q + 0x1C) >> 8) & 7;
            p->unk_326 = val;
            p->unk_328 = func_800D06D4(p->unk_324, val);
            p->unk_344 = 1;
        }
        break;
    case 1:
        if ((D_8008ED80[0] & 3) == 3) {
            if (p->unk_328 == 0) {
                func_800CE4B8(arg1, arg0, D_800F07D0[0], 1);
                p->unk_344 = 2;
            } else {
                func_800CE164(arg1);
                func_800CE204(arg1, arg0);
            }
        }
        break;
    case 2:
        if (func_80015E60(arg0) == 1) {
            p->unk_344 = 3;
        } else {
            func_80098FEC(arg0, arg1, id);
        }
        break;
    default:
        p->unk_344 = 0;
        p->unk_2BC++;
        break;
    }
    return p->unk_2BC;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894__800D5C10", func_800DAE14);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894__800D5C10", func_800DB074);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894__800D5C10", func_800DB2C0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894__800D5C10", func_800DB530);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018__800D1B98__800D2894__800D5C10", func_800DB798);

void func_800DBAA8(s16 arg0) {
    extern u8 D_80091618[], D_80063940[];
    u8 *src = D_80091618;
    u8 *base;
    u32 idx;
    u32 v;
    u32 *q;
    idx = *(u16 *)(src + arg0 * 0x1A8);
    v = func_800DBB3C(arg0);
    base = D_80063940;
    q = (u32 *)(idx * 0x3C + base);
    q[3] = (q[3] & ~0xF800) | ((v & 0x1F) << 11);
}
