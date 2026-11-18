#include "common.h"
#include "yuugi.h"

void GsClearVcount(void) {
    ResetRCnt(0xF2000001);
}

#include "common.h"

void func_80013350(void) {
    extern M2C_UNK D_8008ED68[];
    if (((M2C_GFIELD(D_8008ED68, s32, 0x34) == 0) | (M2C_GFIELD(D_8008ED68, s32, 0x88) == 0x800)) != 0) {
        M2C_GFIELD(D_8008ED68, s32, 0xC4) = GetRCnt(0xF2000001);
    }
}

s32 func_800133A4(void)
{
  extern u8 D_8008ED68[];
  s32 *p = (s32 *)D_8008ED68;
  p[5] = p[5] + 1;
  return 0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800133C4);

#include "common.h"

void func_80013440(int arg0)
{
  extern M2C_UNK D_8008ED68[];
  u16 temp_v0;
  if (((struct 
  {
    u8 _p[0xFE];
    u16 v;
  } *) D_8008ED68)->v != arg0)
  {
    ((struct 
    {
      u8 _p[0xFE];
      u16 v;
    } *) D_8008ED68)->v = arg0;
    ((struct 
    {
      u8 _p[0xFC];
      u16 v;
    } *) D_8008ED68)->v = 0U;
  }
  temp_v0 = ((struct 
  {
    u8 _p[0xFC];
    u16 v;
  } *) D_8008ED68)->v + 1;
  ((struct 
  {
    u8 _p[0xFC];
    u16 v;
  } *) D_8008ED68)->v = temp_v0;
  if (((u32) (temp_v0 & 0xFFFF)) >= 0x41U)
  {
    ((struct 
    {
      u8 _p[0xF4];
      s32 v;
    } *) D_8008ED68)->v = 1;
    ResetRCnt(0xF2000003);
    ((struct 
    {
      u8 _p[0xFC];
      u16 v;
    } *) D_8008ED68)->v = 0U;
    ((struct 
    {
      u8 _p[0xFE];
      u16 v;
    } *) D_8008ED68)->v = 0xFFU;
  }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800134BC);

#include "common.h"

extern u8 D_8008ED68[];
extern s32 D_800508E8[];

void func_800135A8(void) {
    u8 *d = D_8008ED68;

    if (d[0x105] != 0) {
        if (--d[0x106] != 0) {
            return;
        }
        d[0x105] = 0;
        d[0x104] = 0;
        return;
    }
    if (*(s32 *)(d + 0x88) == D_800508E8[d[0x104]]) {
        d[0x104]++;
        d[0x106] = 0x40;
        if (d[0x104] >= 10) {
            d[0x105] = 1;
            d[0x106] = 0;
        }
        return;
    }
    if (*(s32 *)(d + 0x88) != 0) {
        d[0x105] = 0;
        d[0x104] = 0;
        return;
    }
    if (--d[0x106] == 0) {
        d[0x104] = 0;
    }
}

void func_80013668(void) {
    extern s32 D_80078B7C;
    u32 b = 0x90;
    u32 a = 0xC000;
    u8 *p;
    func_80013C14((void *)D_80078B7C, 0xC588);
    p = (u8 *)D_80078B7C;
    *(s32 *)(p + 0xC578) = (s32)p;
    *(s32 *)(p + 0xC57C) = b;
    *(s32 *)(p + 0xC584) = 0;
    *(s32 *)(p + 0xC580) = a / b;
    func_8001611C(0);
}

typedef struct Node_800136C8 {
    u16 size;
    u16 prio;
    struct Node_800136C8 *prev;
    struct Node_800136C8 *next;
    void (*funcC)(struct Node_800136C8 *);
    void (*func10)(struct Node_800136C8 *);
} Node_800136C8;
typedef struct Manager_800136C8 {
    u8 pad_0[0xC000];
    Node_800136C8 *nodes[0x155];
    u32 count;
    Node_800136C8 *heads[8];
    Node_800136C8 *first;
    s32 b;
    s32 c;
    u32 overflow;
} Manager_800136C8;
INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800136C8);

typedef struct Node_80013A68 {
    u16 size;
    u16 prio;
    struct Node_80013A68 *prev;
    struct Node_80013A68 *next;
    void (*funcC)(struct Node_80013A68 *);
    void (*func10)(struct Node_80013A68 *);
} Node_80013A68;

typedef struct Manager_80013928 {
    u8 pad_0[0xC000];
    Node_80013A68 *nodes[0x155];
    u32 count;
    Node_80013A68 *heads[8];
    Node_80013A68 *first;
    s32 b;
    s32 c;
    u32 overflow;
} Manager_80013928;

void func_80013920(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80013928);

extern void func_80013928(Node_80013A68 *);
INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80013A68);

void func_80013B84(void *arg0) {
    struct { s32 f0; s32 f4; u32 n; s32 a[1]; } *s = arg0;
    u32 i;

    if (s->f4 != 0) {
        func_80012A20(s->f4, 1, 0, 0);
    }
    for (i = 0; i < s->n; i++) {
        func_80012A20(s->a[i], 1, 0, 0);
    }
}

#include "ghidra.h"
void func_80013C14(undefined4 *param_1,int param_2)

{
  if (param_2 < 0) {
    param_2 = param_2 + 3;
  }
  for (param_2 = param_2 >> 2; 0 < param_2; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}

extern s32 D_8008FC10[];
extern s32 D_80078B7C;
void func_80013C44(void) {
    extern s32 D_8008FC10[];
    s32 i = 2;
    s32 *p = D_8008FC10;
    p += 18;
    do {
        *p = 0;
        i--;
        p -= 9;
    } while (i >= 0);
}

extern u8 *func_80015B3C();
extern void func_80015EF8(), func_80015B00(), func_800161C4();
extern s32 func_80020304(), func_80019F30();
typedef struct S_80013C6C {
    u8 pad00[0x18];
    s32 unk18;
    u8 pad1C[0x18];
    u32 b34_0 : 7;
    u32 b34_7 : 25;
    u32 b38_0 : 1;
    u32 b38_1 : 2;
    u32 b38_3 : 1;
    u32 b38_4 : 2;
    u32 b38_6 : 1;
    u32 b38_7 : 25;
    u8 pad3C[0xA];
    s16 unk46;
    u8 pad48[2];
    s16 unk4A;
    u8 pad4C[2];
    s16 unk4E;
    u8 pad50[0x18];
    s32 unk68;
} S_80013C6C;
void *func_80013C6C(s32 a0) {
    struct Obj {
        u8 pad00[0x18];
        s32 unk18;
        u8 pad1C[0x18];
        u32 unk34;
        u32 unk38;
        u8 pad3C[0xA];
        s16 unk46;
        u8 pad48[2];
        s16 unk4A;
        u8 pad4C[2];
        s16 unk4E;
        u8 pad50[0x18];
        s32 unk68;
    } *o, *q;
    register s32 r asm("v0");
    register u32 v asm("a1");
    register u32 flags asm("a0");
    register u32 mask asm("v1");
    u32 f, t;
    u16 h46, h4A;

    o = (struct Obj *)func_80015B3C(func_80015B00, func_800161C4, 4);
    func_80015EF8(o);
    o->unk38 &= ~1;
    r = func_80020304(2);
    flags = o->unk34;
    mask = ~0x7F;
    v = flags & mask;
    v |= r & 0x7F;
    o->unk34 = v;
    if (a0 == 0) {
        o->unk18 = func_80019F30(0x6000E, (v & 0x7F) + 0x256);
    } else {
        o->unk18 = func_80019F30(0x6000E, (v & 0x7F) + 0x237);
    }
    o->unk46 = 0xE0;
    o->unk4A = -0x3C - func_80020304(0x3C);
    o->unk4E = a0 == 0 ? 0xA : 0x401;
    f = o->unk38;
    o->unk68 = -0x3000;
    o->unk38 = f | 8;
    if (a0 == 0) {
        o->unk38 = (f | 0x48) & ~0x30;
        q = (struct Obj *)func_80015B3C(func_80015B00, func_800161C4, 4);
        func_80015EF8(q);
        q->unk38 &= ~1;
        q->unk18 = func_80019F30(0x6000E, (o->unk34 & 0x7F) + 0x237);
        h46 = o->unk46;
        t = q->unk38;
        q->unk46 = h46;
        h4A = o->unk4A;
        q->unk4E = 0x401;
        q->unk68 = -0x3000;
        q->unk38 = t | 8;
        q->unk4A = h4A;
    }
    return o;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80013DFC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800142E4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80014728);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80014C4C);

void func_80014D30(s32 a0, s32 a1, s32 a2) {
    extern u8 D_8008ED68[];
    s32 i;
    u8 *d = D_8008ED68;
    *(s32 *)(d + 0x20) = 0;
    d[0x24] = a0;
    d[0x28] = 0;
    if (a0 != 0) {
        d[0x25] = 4;
        d[0x26] = 0x60;
    } else {
        d[0x25] = a2;
        d[0x26] = 0x60;
    }
    if (a1 != 0) {
        d[0x27] = 1;
        d[0x26] = 0x20;
        for (i = 0; i < 4; i++) {
            func_80014C4C(i);
        }
        d[0x29] = 0;
    } else {
        d[0x27] = 0;
        d[0x29] = 0;
    }
    d[0x2A] = 0;
    d[0x2B] = 0;
    *(s32 *)(d + 0x2C) = 0;
}

void func_80014DD8(void) {
    u8 *d = D_8008ED68;
    s32 state;
    s32 i;
    u8 count;
    register s32 next asm("a1");
    if (d[0x99A] != 1 && (state = d[0x28]) != 0) {
        if (state == 1) {
            count = d[0x26] - 1;
            d[0x26] = count;
            i = 0;
            if (count == 0) {
                d[0x28] = 2;
                d[0x27] = state;
                *(s32 *)(d + 0x20) = 0;
                do {
                    func_80014C4C(i);
                    i++;
                } while (i < 4);
            }
        } else if (state == 2) {
            d[0x28] = 0;
        } else if (state == 3) {
            next = 4;
            {
                register s32 mode asm("v0") = next;
                d[0x26] = 0;
                d[0x28] = mode;
            }
            if (d[0x24] == 0) next = d[0x25];
            d[0x25] = next;
            d[0x27] = 0;
            *(s32 *)(d + 0x20) = 0;
        } else if (state == 4) {
            count = d[0x26] + 1;
            d[0x26] = count;
            if (count >= 0x60U) d[0x28] = 0;
        }
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80014EE0);

void func_800152C8(void) {
    extern u8 D_8008ED68[];
    extern void func_80013DFC(void);
    extern void func_800142E4(void);
    extern void func_80014728(void);
    extern void func_80014EE0(void);
    u8 *d = D_8008ED68;
    u32 t;
    s32 n;
    s32 i;
    u8 tmp;

    func_80014DD8();
    if (d[0x27] == 0) {
        u8 mode = d[0x24];
        if (mode == 0) {
            func_80013DFC();
        } else if (mode == 1) {
            func_800142E4();
        } else if (mode == 2) {
            func_80014728();
        }
    }
    if (d[0x99A] != 1) {
        *(s32 *)(d + 0x20) += d[0x103] ? d[0x103] : 1;
    }
    if (d[0x27] != 0) {
        func_80014EE0();
    }
    if (d[0x99A] != 1 && d[0x29] != 0) {
        t = *(u32 *)(d + 0x2C);
        if (t % 720 == 0) {
            if (t % 1440 == 0) {
                *(u8 **)(d + 0x9BC) = func_80013C6C(0);
            } else {
                func_80013C6C(1);
            }
        }
        *(u32 *)(d + 0x2C) += d[0x103] ? d[0x103] : 1;
    }
    n = d[0x103] ? d[0x103] : 1;
    for (i = 0; i < n; i++) {
        if (d[0x2B] == 1) {
            tmp = d[0x2A] + 1;
            d[0x2A] = tmp;
            if (tmp >= 0x20) {
                d[0x2B] = 0;
            }
        } else if (d[0x2B] == 2) {
            tmp = d[0x2A] - 1;
            d[0x2A] = tmp;
            if (tmp == 0) {
                d[0x2B] = 0;
            }
        }
    }
}

#include "common.h"

void func_800154C4(void)
{
  M2C_UNK *new_var;
  extern u8 D_8008ED68[];
  new_var = (M2C_UNK *) D_8008ED68;
  func_80012A20(func_80019F30(0x2000E, 0x29), 1, 0, 0);
  ((struct 
  {
    u8 _p[0x29];
    s8 v;
  } *) new_var)->v = 1;
  ((struct 
  {
    u8 _p[0x2C];
    s32 v;
  } *) new_var)->v = 0;
  ((struct 
  {
    u8 _p[0x2A];
    s8 v;
  } *) new_var)->v = 0;
  ((struct 
  {
    u8 _p[0x2B];
    s8 v;
  } *) new_var)->v = 1;
}
