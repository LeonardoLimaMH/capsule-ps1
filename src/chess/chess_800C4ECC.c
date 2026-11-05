#include "common.h"

extern u16 D_8008EE54[];
extern void func_80012668();
extern void func_800374E8();
extern void func_80034AB0();
extern u8 D_8008ED68[];
typedef struct { u8 pad[0x103]; u8 cnt; } DState;
extern void *func_80015B3C();
extern void func_800C63AC();
extern void func_800C4FC4();
extern void func_800161C4();
extern void func_800AADE0();

void func_800C4ECC(s32 a0, u8 *a1) {
    s32 i;
    u8 *o;
    s32 r;
    for (i = 0; i < 0x18; i++) {
        o = func_80015B3C(func_800C63AC, func_800161C4, 5);
        func_80015EF8(o);
        r = func_800202A4(0x1e);
        if (i & 1) {
            *(s16 *)(o + 0x46) = *(s16 *)(a1 + 0x46) + r;
        } else {
            *(s16 *)(o + 0x46) = *(s16 *)(a1 + 0x46) - r;
        }
        r = func_800202A4(10);
        if (i < 6) {
            *(s16 *)(o + 0x4A) = *(s16 *)(a1 + 0x4A) - 10 + r;
        } else {
            *(s16 *)(o + 0x4A) = *(s16 *)(a1 + 0x4A) - 10 - r;
        }
        *(u32 *)(o + 0x34) = (*(u32 *)(o + 0x34) & ~0x7f) | (i & 0x7f);
        *(s16 *)(o + 0x4E) = *(s16 *)(a1 + 0x4E) - 1;
        *(s16 *)(o + 0x50) = *(s16 *)(a1 + 0x50);
        *(u32 *)(o + 0x38) |= 1;
        *(s16 *)(o + 0x52) = *(s16 *)(a1 + 0x52);
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C4FC4);

void func_800C523C(s32 a0, u8 *a1, s32 a2, s32 a3) {
    u8 *o = func_80015B3C(func_800C4FC4, func_800AADE0, 5);
    u8 *p;
    func_80015EF8(o);
    *(s32 *)(o + 0x7c) = a2;
    *(s32 *)(o + 0x80) = a3;
    *(s32 *)(o + 0x84) = 0;
    *(u32 *)(o + 0x38) |= 1;
    func_8001AA70(o + 0x14, a1 + 0x14, 0x20);
    p = o;
    *(u8 **)(p + 0x40) = a1;
    *(u32 *)(p + 0x34) = (*(u32 *)(p + 0x34) & ~0x7f) | 1;
    *(u32 *)(p + 0x38) = ((*(u32 *)(p + 0x38) | 0x40) & ~0x30) | 0x10;
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

void func_800C6330(void *arg0) {
    u8 *d = D_8008ED68;
    u32 n;
    s32 i;

    n = (d[0x103] < 2) ? 1 : d[0x103];
    i = 0;
    if (n != 0) {
        do {
            *(s32 *)((u8 *)arg0 + 0x84) += 1;
            if (*(s32 *)((u8 *)arg0 + 0x84) >= 7) {
                func_800185F8(arg0);
                return;
            }
            i++;
        } while (i < (s32)n);
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C63AC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C64C8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C656C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C65EC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C6F80);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C71D4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C768C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C77A4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C7864);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C7B30);

extern u16 D_8008EE54[];
extern u8 D_8008ED68[];
s32 func_800C7D84(s32 a0, s32 a1, u8 *a2) {
    a1 = 0;
    if (D_8008EE54[0] == 0) {
        if (a2[0x22] == a2[0x17]) {
            a1 = 1;
            a2[0x17] = a1;
            *(u32 *)(a2 + 0x18) |= 0x40040;
            *(u32 *)(a2 + 0x18) |= 0x1000000;
        }
    }
    return a1;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C7DD8);

void __udivdi3(void)
{
  int new_var3;
  int new_var2;
  int new_var;
  int *new_var4;
 new_var3 = 0; new_var4 = &new_var3; new_var2 = *new_var4; func_800C7DD8(new_var); new_var2 = new_var2; new_var = new_var2;
}
