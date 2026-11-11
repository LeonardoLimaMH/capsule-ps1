#include "common.h"

/* objeto de func_80015B3C: flags em bitfields nos words 0x34/0x38 */
struct Obj_800C523C {
    u8 pad[0x34];
    u32 f34_0 : 7;
    u32 f34_7 : 25;
    u32 f38_0 : 1;
    u32 f38_1 : 3;
    u32 f38_4 : 2;
    u32 f38_6 : 1;
    u32 f38_7 : 25;
    u8 *f3C;
    u8 *f40;
};

void func_800C63AC();
void func_800161C4();
s32 func_800202A4(s32);
void func_800C4ECC(s32 a0, void *arg1) {
    struct Obj {
        u8 pad[0x34];
        u32 f34_0 : 7;
        u32 f34_7 : 25;
        u32 f38_0 : 1;
        u32 f38_1 : 3;
        u32 f38_4 : 2;
        u32 f38_6 : 1;
        u32 f38_7 : 25;
        u8 *f3C;
        u8 *f40;
        s16 f44;
        s16 f46;
        s16 f48;
        s16 f4A;
        s16 f4C;
        s16 f4E;
        s16 f50;
        s16 f52;
    } *a1 = arg1, *o;
    s32 i;
    s32 r;
    s32 x;

    for (i = 0; i < 0x18; i++) {
        o = func_80015B3C(func_800C63AC, func_800161C4, 5);
        func_80015EF8(o);
        r = func_800202A4(0x1e);
        x = a1->f46;
        if ((i & 1) == 0) {
            o->f46 = x - r;
        } else {
            o->f46 = x + r;
        }
        r = func_800202A4(10);
        x = a1->f4A - 10;
        if (i >= 6) {
            o->f4A = x - r;
        } else {
            o->f4A = x + r;
        }
        o->f4E = a1->f4E - 1;
        o->f34_0 = i;
        o->f50 = a1->f50;
        o->f52 = a1->f52;
        o->f38_0 = 1;
    }
}

void func_800C4FC4();
void func_800AADE0();
void *func_80015B3C();

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C4FC4);

void func_800C4FC4();
void func_800AADE0();
void *func_80015B3C();
u8 *func_800C523C(s32 a0, u8 *a1, s32 a2, s32 a3) {
    struct Obj_800C523C *o = func_80015B3C(func_800C4FC4, func_800AADE0, 5);
    func_80015EF8(o);
    *(s32 *)((u8 *)o + 0x7c) = a2;
    *(s32 *)((u8 *)o + 0x80) = a3;
    *(s32 *)((u8 *)o + 0x84) = 0;
    o->f38_0 = 1;
    func_8001AA70((u8 *)o + 0x14, a1 + 0x14, 0x20);
    o->f40 = a1;
    o->f34_0 = 1;
    o->f38_6 = 1;
    o->f38_4 = 1;
    return (u8 *)o;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C5300);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C553C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C5748);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C5928);

void func_800C5A74(void *arg0) {
    s32 temp_a1;
    u16 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u16 *, 0x7A);
    temp_a1 = M2C_FIELD(arg0, s32 *, 0x40);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (M2C_FIELD(arg0, s32 *, 0x84) == 1) {
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
            M2C_FIELD(arg0, u16 *, 0x7A) = (u16) (M2C_FIELD(arg0, u16 *, 0x7A) + 1);
        case 1:
            if (M2C_FIELD(arg0, s16 *, 0x24) < 0) {
                func_800185F8(arg0, temp_a1, arg0);
                return;
            }
            func_800C5C34(arg0, temp_a1, arg0);
        } else {
            return;
        }
        break;
    }
}

void func_800C5B00(void *arg0) {
    s32 temp_a1;
    s32 temp_s1;
    u16 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u16 *, 0x7A);
    temp_s1 = M2C_FIELD(arg0, s32 *, 0x40);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (M2C_FIELD(arg0, s32 *, 0x84) == 1) {
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
            M2C_FIELD(arg0, u16 *, 0x7A) = (u16) (M2C_FIELD(arg0, u16 *, 0x7A) + 1);
        case 1:
            if (M2C_FIELD(arg0, s32 *, 0x84) == 2) {
                func_800185F8(arg0);
                return;
            }
            if (M2C_FIELD(arg0, s16 *, 0x24) < 0) {
                temp_a1 = M2C_FIELD(arg0, s32 *, 0x8C);
                if (temp_a1 != 0) {
                    func_80015CD0(arg0 + 0x14, temp_a1, 0);
                    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
                }
            }
            func_800C5C34(arg0, temp_s1);
        } else {
            return;
        }
        break;
    }
}

s32 func_800C5BCC(void *arg0)
{
  s32 var_v0;
  u32 temp_v0;
  u32 temp_v1;
  temp_v0 = *((u32 *) (((s8 *) arg0) + 0x3C));
  temp_v1 = 1 + temp_v0;
  *((u32 *) (((s8 *) arg0) + 0x3C)) = temp_v1;
  if (temp_v1 >= 0x51U)
  {
    return 1;
  }
  if (((temp_v0 + 1) / 5) & 1)
  {
    temp_v1 = ~1;
    var_v0 = (*((s32 *) (((s8 *) arg0) + 0x38))) & temp_v1;
  }
  else
  {
    var_v0 = (*((s32 *) (((s8 *) arg0) + 0x38))) | 1;
  }
  *((s32 *) (((s8 *) arg0) + 0x38)) = var_v0;
  return 0;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C5C34);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C5DE8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C5FA0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C61F4);
