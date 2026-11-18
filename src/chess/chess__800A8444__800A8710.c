#include "ghidra.h"
#include "matching.h"
#include "common.h"

s32 func_800A8710(s32 arg0, s32 arg1, s32 arg2) {
    extern u32 D_80063940[][15];
    u32 (*table)[15] = D_80063940;
    u8 b;

    arg0 += (arg2 * 0x7C) + (arg1 * 0x2E8);
    b = *(u8 *)(arg0 + 0x5E8);
    return ((table[b][2] >> 8) & 0xF) == 1;
}

extern u8 D_8006B2A4[];

extern s32 rsin(s32);

u32 func_800A8770(s32 arg0, s32 arg1, s32 arg2) {
    extern u32 D_80063940[][15];
    u32 (*table)[15] = D_80063940;
    u8 b;

    arg0 += (arg2 * 0x7C) + (arg1 * 0x2E8);
    b = *(u8 *)(arg0 + 0x5E8);
    return (table[b][2] >> 8) & 0xF;
}

extern s32 rsin(s32);

void func_800A87C8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    register s32 base asm("t0") = arg0;
    register s32 off asm("a0");
    if (arg2 != 5) {
        off = arg2 * 0x7C;
        off += arg1 * 0x2E8;
        off = base + off;
        func_80028200(*(u8 *)(off + 0x5E8), arg3 & 0xFFFF);
    } else {
        func_80034AB0(0x48);
    }
}

extern s32 rsin(s32);

u32 func_800A8830(s32 arg0, s32 arg1, s32 arg2) {
    extern u32 D_80063940[][15];
    register s32 off asm("a3");
    u32 result;

    off = arg2 * 0x7C;
    off += arg1 * 0x2E8;
    arg0 += off;
    if (*(u8 *)(arg0 + 0x5E8) == 0x63) {
        result = func_800CA664(*(s16 *)(*(s32 *)(arg0 + 0x658) + 0x64));
    } else {
        result = (D_80063940[*(u8 *)(arg0 + 0x5E8)][2] >> 12) & 3;
    }
    return result;
}

extern s32 rsin(s32);

s16 func_800A88C4(s16 a) {
     return 0x4020 / a;

}

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

s16 func_800A88E8(u8 c, s16 d) {
    typedef struct {
        u8 pad0[0x10];
        u32 f10_0 : 24;
        u32 f10_24 : 6;
        u32 f10_30 : 4 __attribute__((packed));
        u32 f14_2 : 30;
        u8 pad18[0x24];
    } S_800A88E8;
    extern S_800A88E8 D_80063940[];
    return (s32)(D_80063940[c].f10_24 * (D_80063940[c].f10_30 * 8 + 0x100)) / d;
}

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

s32 func_800A8954(s32 arg0) {
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

s32 func_800A8994(s32 arg0, s32 arg1, s32 arg2)
{
  u8 *new_var;
  new_var = (u8 *) (((s8 *) (arg0 + ((arg2 * 0x7C) + (arg1 * 0x2E8)))) + 0x5E8);
  return (*new_var) + 0x10D;
}

s32 func_800A89C8(s32 arg0, s32 arg1, s32 arg2)
{
  s32 var_a1;
  s32 var_a2;
  s32 var_a3;
  u8 temp_t0;
  unsigned int new_var;
  void *temp_v1;
  var_a1 = arg1;
  var_a2 = arg2;
  new_var = arg0 + ((var_a2 * 0x7C) + (var_a1 * 0x2E8));
  temp_t0 = *((u8 *) (((s8 *) new_var) + 0x5E8));
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

s32 func_800A8A7C(s32 arg0, s32 arg1, s32 arg2) {
    register s32 var_a0 asm("a0");
    register s32 var_a3 asm("a3");
    s32 var_t0;
    s32 var_t1;
    u8 temp_t2;
    unsigned int new_var;
    register void *temp_v1 asm("v1");

    new_var = arg0 + ((arg2 * 0x7C) + (arg1 * 0x2E8));
    temp_t2 = *((u8 *)((s8 *)new_var + 0x5E8));
    var_t0 = 0;
    var_t1 = 0;
loop_1:
    var_a0 = 0;
    var_a3 = var_t1;
loop_2:
    temp_v1 = (void *)(arg0 + var_a3);
    if (((var_t0 != arg1) || (var_a0 != arg2)) &&
        (*(u8 *)((s8 *)temp_v1 + 0x5E8) == temp_t2)) {
        return *(u8 *)((s8 *)temp_v1 + 0x612) + 1;
    }
    var_a0 += 1;
    var_a3 += 0x7C;
    if (var_a0 >= 5) {
        var_t0 += 1;
        var_t1 += 0x2E8;
        if (var_t0 >= 2) {
            return 0;
        }
        goto loop_1;
    }
    goto loop_2;
}

extern s32 rsin(s32);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444__800A8710", func_800A8B14);

s32 func_800A8D08(s32 arg0, s32 arg1, s32 arg2)
{
  int new_var;
  new_var = arg0 + ((arg2 * 0x7C) + (arg1 * 0x2E8));
  return (((u32) (*((u32 *) (((s8 *) new_var) + 0x30)))) >> 0x19) & 3;
}

s32 func_800A8D44(s32 arg0, s32 arg1, s32 arg2)
{
  s32 *new_var;
  new_var = (s32 *) (((s8 *) (arg0 + ((arg2 * 0x7C) + (arg1 * 0x2E8)))) + 0x30);
  return (*new_var) & 0x08000000;
}

s32 func_800A8D7C(s32 arg0, s32 arg1, s32 arg2)
{
  s8 *new_var;
  new_var = ((s8 *) (arg0 + ((arg2 * 0x7C) + ((long) (arg1 * 0x2E8))))) + 0x30;
  return (*((s32 *) new_var)) & 0x10000000;
}

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

s32 func_800A8DB4(s32 arg0, s32 arg1, s32 arg2)
{
    s32 p;
    s32 v;
    p = arg2 * 0x7C;
    p += arg1 * 0x2E8;
    v = *(s32 *) (arg0 + p + 0x30);
    if (v & 0x2000000) {
        return 1;
    }
    return (v & 0x20000000) > 0;
}

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444__800A8710", func_800A8E08);

s32 func_800A8E34(s32 arg0, s32 arg1, s32 arg2)
{
    s32 p;
    s32 v;
    p = arg2 * 0x7C;
    p += arg1 * 0x2E8;
    v = *(s32 *) (arg0 + p + 0x30);
    if (v & 0x100) {
        return 2;
    }
    return (v & 0x200) > 0;
}

extern s32 rsin(s32);

u8 *func_800A8E84(s32 arg0)
{
  u8 a = *((u8 *) (arg0 + 0x5FA));
  s32 p = arg0 + ((*((u8 *) (arg0 + a + 0x5FB)) * 0x7C) + (a * 0x2E8));
  return D_8006B2A4 + *((u8 *) (p + 0x18)) * 0x58;
}

u8 *func_800A8EE8(s32 arg0, s32 arg1, s32 arg2)
{
  s32 p = arg0 + ((arg2 * 0x7C) + (arg1 * 0x2E8));
  return D_8006B2A4 + *((u8 *) (p + 0x18)) * 0x58;
}

u8 *func_800A8F3C(s32 arg0) {
    extern u8 D_8006B2A4[];
    s32 a = *(u8 *) (arg0 + 0x70C);
    s32 b = *(u8 *) (arg0 + 0x5FA);
    s32 p = arg0 + ((a * 0x7C) + ((1 - b) * 0x2E8));
    return D_8006B2A4 + *((u8 *) (p + 0x18)) * 0x58;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444__800A8710", func_800A8FA0);

void *func_800A8FFC(void *arg0)
{
  u8 temp_v0;
  s8 *new_var;
  temp_v0 = *((u8 *) (((s8 *) arg0) + 0x5FA));
  new_var = (s8 *) (arg0 + temp_v0);
  return (arg0 + ((temp_v0 * 0x2E8) + 0x18)) + ((*((u8 *) (new_var + 0x5FB))) * 0x7C);
}

void func_800A903C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 p;
    if (arg3 != 5) {
        func_80028200(*(u8 *) (arg0 + (arg2 * 0x2E8 + arg3 * 0x7C) + 0x5E8), 2);
    } else {
        func_80034AB0(0x48);
    }
    p = arg1 + (arg3 * 0x7C + arg2 * 0x2E8);
    *(u32 *) (p + 0x30) |= 0x100;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444__800A8710", func_800A9100);

extern u8 D_8006B2A4[];

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

void func_800A924C(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3) {
    extern struct {
        u8 pad[0x108];
        s32 x;
        s32 y;
    } D_8008ED68[];
    extern s32 func_800A46B8(u8 *, u32, u32, s16 *);
    extern s16 func_800CD950(s16 *, u8 *);
    s16 buf3[4];
    s16 buf1[4];
    s16 buf2[4];

    func_800A46B8(arg0, arg0[0xCB4], arg0[0xCB5], buf1);
    func_800A46B8(arg0, arg0[0xCB6], arg0[0xCB7], buf2);

    switch (arg3) {
    case 0:
    case 1:
        func_800A93DC(buf2, buf1, buf3, 0x1C, arg0[0xCD9], 100);
        break;
    case 2:
        func_800A93DC(buf2, buf1, buf3, 0x3C, arg0[0xCD9], 300);
        break;
    case 3:
        func_800A954C(buf2, buf1, buf3, 8, arg0[0xCD9]);
        break;
    case 4:
        func_800A954C(buf2, buf1, buf3, 8, arg0[0xCD9]);
        if (arg2 == 1) {
            buf3[1] -= 0x32;
        }
        break;
    }

    *(s16 *)(arg1 + 0x4E) = func_800CD950(buf3, arg1);
    *(s16 *)(arg1 + 0x46) -= D_8008ED68[0].x / 2;
    *(s16 *)(arg1 + 0x4A) -= D_8008ED68[0].y / 2;
}

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);
void func_800A93DC(void *arg0, void *arg1, void *arg2, s32 arg3, s32 arg4, s32 arg5) {
    register s32 t1 asm("t1") = arg4;
    register s32 a2 asm("a2");
    register s32 a1 asm("a1");
    register s32 t0 asm("t0");
    register s32 v1 asm("v1");
    s32 half;
    s32 mid;
    s32 s0;
    s32 diff;

    M2C_FIELD(arg2, s16 *, 0) = (s16) ((u16) M2C_FIELD(arg1, s16 *, 0) - ((s32) ((M2C_FIELD(arg1, s16 *, 0) - M2C_FIELD(arg0, s16 *, 0)) * t1) / arg3));
    M2C_FIELD(arg2, s16 *, 4) = (s16) ((u16) M2C_FIELD(arg1, s16 *, 4) - ((s32) ((M2C_FIELD(arg1, s16 *, 4) - M2C_FIELD(arg0, s16 *, 4)) * t1) / arg3));

    half = arg3 / 2;
    a2 = M2C_FIELD(arg0, s16 *, 2);
    a1 = M2C_FIELD(arg1, s16 *, 2);
    t0 = arg5;
    if (a1 < a2) {
        s0 = a1 - t0;
    } else {
        s0 = a2 - t0;
    }
    mid = arg3 / 2;
    if (mid < t1) {
        s0 = M2C_FIELD(arg0, s16 *, 2) - s0;
        diff = arg3 - t1;
        v1 = (s0 * rsin((diff << 10) / half)) / 4096;
        M2C_FIELD(arg2, s16 *, 2) = (s16) ((u16) M2C_FIELD(arg0, u16 *, 2) - v1);
    } else {
        s0 = M2C_FIELD(arg1, s16 *, 2) - s0;
        diff = mid - t1;
        v1 = (s0 * rsin(((diff << 10) / half) + 0x400)) / 4096;
        M2C_FIELD(arg2, s16 *, 2) = (s16) ((u16) M2C_FIELD(arg1, u16 *, 2) - v1);
    }
}

void func_800A954C(void *arg0, void *arg1, void *arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg2, s16 *, 0) = (s16) ((u16) M2C_FIELD(arg1, s16 *, 0) - ((s32) ((M2C_FIELD(arg1, s16 *, 0) - M2C_FIELD(arg0, s16 *, 0)) * arg4) / arg3));
    M2C_FIELD(arg2, s16 *, 4) = (s16) ((u16) M2C_FIELD(arg1, s16 *, 4) - ((s32) ((M2C_FIELD(arg1, s16 *, 4) - M2C_FIELD(arg0, s16 *, 4)) * arg4) / arg3));
    if ((arg3 / 2) < arg4) {
        M2C_FIELD(arg2, u16 *, 2) = (u16) M2C_FIELD(arg0, u16 *, 2);
        return;
    }
    M2C_FIELD(arg2, u16 *, 2) = (u16) M2C_FIELD(arg1, u16 *, 2);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444__800A8710", func_800A95F8);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444__800A8710", func_800A9810);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444__800A8710", func_800A9A78);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444__800A8710", func_800A9C9C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444__800A8710", func_800AA15C);

void func_800AAAA0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    extern s16 D_80100F38[];
    extern s32 D_80100F3C[];
    s16 temp_s0;

    temp_s0 = arg3 + 0x1D;
    func_8001F35C((s16) (arg2 + 0x40), temp_s0, (*D_80100F38), 0, 0, 5 - M2C_FIELD((arg0 + arg1), u8 *, 0xBDA), 1, (*D_80100F3C));
    func_800188F0((s16) (arg2 + 0x2D), temp_s0, 3, 0, (*D_80100F3C));
    func_800A9810(arg0, arg1, arg2, arg3, 0);
}

extern s32 rsin(s32);

void func_800AAB8C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    extern s32 D_80100F40[];
    s16 temp_s0;

    arg2 += 5;
    arg3 += 7;
    func_8001F1A8((s16) arg2, (s16) arg3, 0, 0, 0, D_80100F40, 0, 7, 3);
    temp_s0 = arg3 + 0xE;
    func_800188F0((s16) (arg2 + 4), temp_s0, 3, 0, 3);
    func_8001F35C((s16) (arg2 + 0x1A), temp_s0, 0, 0, 0, 5 - M2C_FIELD((arg0 + arg1), u8 *, 0xBDA), 1, 3);
    func_800A9810(arg0, arg1, arg2, arg3, 2);
}

extern s32 rsin(s32);

u8 *func_800AACAC(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4, void *arg5) {
    extern void func_800AADE0();
    extern u8 *func_80015B3C();
    extern void func_80015EF8();
    extern s32 func_80019F30();
    extern void func_80015CD0();
    extern void func_800A81D8();
    s32 s2;
    s32 s3;
    u8 *s0;

    s2 = *(s32 *)(arg1 + 0x7C);
    s3 = *(s32 *)(arg1 + 0x80);
    s0 = func_80015B3C(arg5, func_800AADE0, 4);
    func_80015EF8(s0);
    *(u8 **)(s0 + 0x40) = arg1;
    *(u32 *)(s0 + 0x30) = (*(u32 *)(s0 + 0x30) & ~0x30) | 0x10;
    *(u32 *)(s0 + 0x30) = (*(u32 *)(s0 + 0x30) & ~0x1C0) | 0x40;
    *(u32 *)(s0 + 0x38) |= 1;
    *(s32 *)(s0 + 0x7C) = *(s32 *)(arg1 + 0x7C);
    *(s32 *)(s0 + 0x80) = *(s32 *)(arg1 + 0x80);
    *(s32 *)(s0 + 0x84) = 0;
    func_80015CD0(s0 + 0x14, func_80019F30((*(u8 *)(arg0 + (s2 * 0x2E8 + s3 * 0x7C) + 0x5E8) + 0x10D) | 0x70000, arg2), arg3);
    func_800A81D8(arg0, s0, s2, s3);
    return s0;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444__800A8710", func_800AADE0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444__800A8710", func_800ABD9C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444__800A8710", func_800ACD58);

void func_800ACF04(u8 *arg0) {
    extern u8 *func_80015B3C();
    extern s32 func_80019F30();
    extern void func_800ACD58();
    extern void func_800161C4();
    u32 i = arg0[0xBCA];
    u8 *o = func_80015B3C(func_800ACD58, func_800161C4, 5);
    u8 *q;
    s32 r;
    func_80015EF8(o);
    q = arg0 + i;
    if (q[0x5E0] == 0) {
        r = func_80019F30(0x60013, i + 6);
    } else {
        r = func_80019F30(0x60013, 0xB);
    }
    *(s32 *) (o + 0x18) = r;
    *(s16 *) (o + 0x50) = 0x1000;
    *(s16 *) (o + 0x4E) = 2;
    *(u32 *) (o + 0x7C) = i;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444__800A8710", func_800ACFA8);

extern s32 rsin(s32);

void func_800AD06C(u8 *arg0) {
    extern u16 D_8008EE50[];
    extern void func_800161C4();
    extern void func_800ACD58();
    extern u8 *func_80015B3C();
    extern s32 func_80019F30();
    s32 temp_v0;
    register s32 var_v0 asm("v0");
    u16 var_v1;
    u8 temp_s0;
    u32 temp_s1;
    u8 *o;
    s32 r;
    u8 *q;

    switch (*D_8008EE50) {
    case 0:
        temp_s0 = arg0[0x5D0];
        if (temp_s0 == 1) {
            if (arg0[1] == 0) {
                temp_v0 = func_800CB24C(arg0, arg0 + 0x5D0, 1);
                if (arg0[0xBED] != temp_v0) {
                    if (temp_v0 == temp_s0) {
                        var_v1 = 0x7014;
                    } else if (temp_v0 == 2) {
                        var_v1 = 0x7013;
                        if (arg0[0x5E1] != 0) var_v1 = 0x7012;
                    } else {
                        var_v1 = 0x7012;
                        if (arg0[0x5E1] != 0) var_v1 = 0x7013;
                    }
                    *(u16 *)(arg0 + 8) = var_v1;
                    func_80034BD8(-3, 0);
                    var_v0 = 1;
                } else {
                    var_v0 = 0;
                }
            } else {
                var_v0 = 0;
            }
        } else {
            var_v0 = 0;
        }
        if (var_v0 != 0) {
            func_80012628();
            return;
        }
        func_8001264C(2);
        return;
    case 1:
        if (func_80019654() != 0) {
            func_800338DC(*(u16 *)(arg0 + 8));
            func_80012628();
            return;
        }
        return;
    case 2:
        temp_s1 = arg0[0xBCA];
        o = func_80015B3C(func_800ACD58, func_800161C4, 5);
        func_80015EF8(o);
        q = arg0 + temp_s1;
        if (q[0x5E0] == 0) {
            r = func_80019F30(0x60013, temp_s1 + 6);
        } else {
            r = func_80019F30(0x60013, 0xB);
        }
        *(s32 *)(o + 0x18) = r;
        *(s16 *)(o + 0x50) = 0x1000;
        *(s16 *)(o + 0x4E) = 2;
        *(u32 *)(o + 0x7C) = temp_s1;
        arg0[0xD77] = 0;
        func_800125D8();
        break;
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444__800A8710", func_800AD240);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444__800A8710", func_800AD408);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444__800A8710", func_800AD4D8);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444__800A8710", func_800AD7B8);

extern s32 rsin(s32);

u8 *func_800ADAA4(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4)
{
  extern u8 D_80118710[][13];
  extern u8 *func_80015B3C();
  extern void func_80015EF8();
  extern void func_800161C4();
  extern void func_800AD7B8();
  extern s32 func_800ADBC4();
  s32 new_var;
  extern s32 func_800ADBCC();
  extern s32 func_800ADBD8();
  s32 s0;
  u8 *o;
  u32 val;
  new_var = func_800ADBC4(a2);
  s0 = new_var;
  o = func_80015B3C((void *) func_800AD7B8, (void *) func_800161C4, 5);
  func_80015EF8(o);
  *((u32 *) (o + 0x38)) |= 1;
  val = D_80118710[a0][a1];
  s0 -= 4;
  *((s32 *) (o + 0x80)) = s0;
  *((s32 *) (o + 0x7C)) = val;
  if (s0 < 3)
  {
    *((u32 *) (o + 0x30)) = ((*((u32 *) (o + 0x30))) & (~0x1C0)) | 0x40;
  }
  *((s16 *) (o + 0x66)) = func_800ADBD8(a2);
  *((s32 *) (o + 0x88)) = a3;
  *((s32 *) (o + 0x8C)) = func_800ADBCC(a2);
  *((u32 *) (o + 0x34)) = ((*((u32 *) (o + 0x34))) & (~0x7F)) | (a4 & 0x7F);
  return o;
}

s32 func_800ADBC4(s32 arg0) {
    return arg0 & 0x1F;
}

s32 func_800ADBCC(s32 arg0) {
    return (arg0 >> 5) & 7;
}

s32 func_800ADBD8(s32 arg0) {
    return (arg0 >> 8) & 0x1F;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444__800A8710", func_800ADBE4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444__800A8710", func_800ADD70);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444__800A8710", func_800ADF5C);

extern s32 rsin(s32);

void func_800AE03C(u8 *arg0, s32 arg1) {
    extern u8 D_8008ED68[];
    u8 *base = D_8008ED68;
    register s16 val asm("v0");
    s32 ret;

    switch (*(u16 *)(base + 0xE8)) {
    case 0:
        *(u16 *)(arg0 + 0x5F8) = 0;
        func_80012628();
        break;
    case 1:
        val = *(u16 *)(arg0 + 0x5F8);
        *(u16 *)(arg0 + 0x5F8) = val + 1;
        if ((s16)(val % 14) == 0) {
            u8 *p1 = arg0 + arg1 * 2;
            u8 *p2 = arg0 + arg1 * 6;
            u8 a2 = p1[0x601];
            u8 a3 = p1[0x602];
            u8 sp10 = p2[0x5EE];
            u8 sp14 = p2[0x5EF];
            ret = func_800ADD70(arg0, arg1, a2, a3, sp10, sp14);
            *(s32 *)(base + arg1 * 16 + 0x88) = ret;
            if (ret == 0) {
                func_80012628();
            }
        }
        break;
    case 2:
        val = *(u16 *)(arg0 + 0x5F8);
        *(u16 *)(arg0 + 0x5F8) = val + 1;
        if ((s16)(val % 14) == 0) {
            *(s32 *)(base + arg1 * 16 + 0x88) = 0x20;
        }
        break;
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444__800A8710", func_800AE1BC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444__800A8710", func_800AE35C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444__800A8710", func_800AE504);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444__800A8710", func_800AE728);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444__800A8710", func_800AE8AC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444__800A8710", func_800AEA4C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444__800A8710", func_800AEBD0);
