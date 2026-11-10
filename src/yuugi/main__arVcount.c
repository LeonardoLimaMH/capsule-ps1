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

void func_800133C4(void) {
    extern u8 D_8008ED68[];
    u8 *d = D_8008ED68;
    func_8004FEDC();
    func_8004FE3C(0xF2000003, 2, 0x1000, func_800133A4);
    func_8004FE7C(*(s32 *)(d + 0x10));
    SetRCnt(0xF2000003, 1, 0x1000);
    StartRCnt(0xF2000003);
    func_8004FEEC();
}

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

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800136C8);

void func_80013920(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80013928);

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

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80013C6C);

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

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800152C8);

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
