#include "common.h"

s32 func_800979BC(s32 arg0) {
    register s32 a asm("v0");
    register s32 b asm("v1");

    if (arg0 >= 10) {
        a = 0x80124000;
        arg0 -= 10;
        b = arg0 * 0xE000;
    } else {
        a = arg0 * 0xE000;
        b = 0x80140000;
    }
    return a + b;
}


extern u8 D_8008ED68[];
extern void (*D_800AEF98[])(void);

void func_800979FC(void) {
    extern u8 D_80085428[];
    register u8 *p asm("a1") = D_80085428;
    register s32 v1 asm("v1");
    register s32 s0 asm("s0");
    register s32 s1 asm("s1");
    s32 off1;
    s32 off2;
    s32 a0;

    off1 = p[0xD78] * 0x7C;
    off2 = p[0xD77] * 0x2E8;
    off1 += off2;
    off1 += (s32)p;
    a0 = *(u8 *)(off1 + 0x612);

    v1 = a0;
    if (a0 < 10) {
        s32 t = a0 * 0xE000;
        a0 = t + (s32)0x80140000;
    } else {
        a0 = 0x80124000;
        a0 = (v1 - 10) * 0xE000 + a0;
    }

    s0 = 0;
    func_8001A49C(a0, p);
    s1 = 0x03C00000;
    do {
        register s32 step asm("v0");
        func_80012A20(func_80019F30(0x20174, s0), 3, (s16)(s1 >> 16), 0x180);
        step = 0x00200000;
        s1 += step;
        s0++;
    } while (s0 < 2);
}


extern u8 D_8008ED68[];
extern void (*D_800AEF98[])(void);

s32 func_80097AF0(s32 arg0, s32 arg1, s32 arg2)
{
  s8 *new_var;
  new_var = (s8 *) (arg0 + ((arg2 * 0x7C) + (arg1 * 0x2E8)));
  return (*((u8 *) (new_var + 0x5E8))) + 0x10D;
}

void func_80097B24(u8 *base, s32 side, s32 slot) {
    typedef struct {
        s16 x, y, w, h;
    } RECT;
    extern u8 D_800AD55C[];
    extern s32 func_80019F30(s32, s32);
    extern void func_80012A20(s32, s32, s32, s32);
    extern void MoveImage(RECT *, s32, s32);

    register s32 r_slot asm("s2") = slot;
    register s32 r_side asm("s1");
    register s32 s0 asm("s0");
    RECT r;
    s32 c;
    s32 off1;

    off1 = r_slot * 124;
    r_side = side * 3;
    base += off1 + r_side * 248;
    c = base[0x5E8];

    if (c != 0x5C) {
        s32 ret;
        s0 = 0;
        ret = func_80019F30((c + 0x10D) | 0x10000, s0);
        r_slot = (s32)(D_800AD55C + r_slot * 4 + r_side * 8);
        r_side = ret;
        do {
            s32 a = *(s32 *)(r_side + 0xC);
            r_side += 4;
            func_80012A20(a, 3, (s16)(*(u16 *)r_slot + (s0++ << 5)), *(s16 *)(r_slot + 2));
        } while (s0 < 2);
    } else {
        s0 = 0;
        r_slot = (s32)(D_800AD55C + r_slot * 4 + r_side * 8);
        r_side = 0x3C0;
        do {
            register s32 v0 asm("v0");
            r.x = r_side;
            r_side += 0x20;
            v0 = s0++ << 5;
            r.y = 0x180;
            r.w = 0x20;
            r.h = 0x80;
            MoveImage(&r, *(s16 *)r_slot + v0, *(s16 *)(r_slot + 2));
        } while (s0 < 2);
    }
}

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_80097C6C);

s32 func_80097D8C(s32 arg0, s32 arg1, s32 arg2)
{
  s32 var_a3;
  s32 var_a1;
  u8 *new_var;
  s32 var_a2;
  u8 temp_t0;
  void *temp_v1;
  var_a1 = arg1;
  var_a2 = arg2;
  new_var = (u8 *) (((s8 *) (arg0 + ((var_a2 * 0x7C) + (var_a1 * 0x2E8)))) + 0x5E8);
  temp_t0 = *new_var;
  var_a3 = 0;
  if (var_a1 != 0)
  {
    goto loop_2;
  }
  if (var_a2 == 0)
  {
    goto block_9;
  }
  loop_2:
  if (var_a2 == 0)
  {
    goto block_4;
  }

  block_3:
  var_a2 -= 1;

  goto block_5;
  block_4:
  var_a1 -= 1;

  var_a2 = 4;
  block_5:
  temp_v1 = arg0 + ((var_a2 * 0x7C) + (var_a1 * 0x2E8));

  if (temp_t0 != (*((u8 *) (((s8 *) temp_v1) + 0x5E8))))
  {
    goto block_7;
  }
  var_a3 = (*((u8 *) (((s8 *) temp_v1) + 0x612))) + 1;
  block_7:
  if (var_a1 != 0)
  {
    goto loop_2;
  }

  if (var_a2 != 0)
  {
    goto block_3;
  }
  block_9:
  return var_a3;

}

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_80097E40);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_8009807C);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_800981F0);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_800991AC);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_800992CC);

#include "common.h"

extern u8 D_8008ED68[];
extern void (*D_800AEF98[])(void);

void func_80099394(void) {
    if (M2C_GFIELD(D_8008ED68, u16, 0xDC) == 2) {
        func_8001FD98(4);
    }
    D_800AEF98[M2C_GFIELD(D_8008ED68, u16, 0xDC)]();
}

#include "common.h"

void func_800993F8(void) {
    extern M2C_UNK D_80085428[];
    extern s16 D_800B3ACC[];
    func_80013668();
    (*D_800B3ACC) = 0;
    M2C_GFIELD(D_80085428, s8, 0x5CB) = 4;
    M2C_GFIELD(D_80085428, s8, 0) = 3;
    M2C_GFIELD(D_80085428, s8, 0x5D0) = 1;
    func_80012508(D_80085428);
}

#include "common.h"

void func_80099444(void) {
    extern int func_80012508();
    func_80019F30(9, func_80012508);
    func_80012508();
}

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_80099474);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_80099570);

void func_800997D4(void) {
    extern s32 D_8008F7D0[];
    if ((*D_8008F7D0) == 0) {
        func_80012508();
    }
}

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_80099800);
