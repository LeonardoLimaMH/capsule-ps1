#include "common.h"
#include "ghidra.h"

typedef struct { u8 pad[0x15]; u8 x; u8 y; } Pos800C;
typedef struct { u8 pad0[0x10]; u32 w10; u32 w14; u8 pad1[0x28]; } Ent63940;
typedef struct { u8 pad[0x30]; u16 h; u8 pad1[2]; } Ent1010B0;

s32 func_800C94DC(s32 unused_arg0, s32 arg1) {
    extern s16 D_80069BBE[];
    s32 temp_a1;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;

    arg1 += 8;

    temp_v1 = (*D_80069BBE) + 0x100;
    var_v0_2 = temp_v1;
    if (temp_v1 < 0) {
        var_v0_2 = (*D_80069BBE) + 0x10FF;
    }
    var_v0_3 = temp_v1 - (s32) ((u32) (var_v0_2 >> 0xC) << 0xC);
    if (var_v0_3 < 0) {
        var_v0_3 += 0x1FF;
    }
    temp_a1 = arg1 - (var_v0_3 >> 9);
    var_v0 = temp_a1;
    if (temp_a1 < 0) {
        var_v0 = temp_a1 + 7;
    }
    return temp_a1 - ((var_v0 >> 3) * 8);
}

void func_800C9534(s32 unused,u8 *o,s32 v) {
     s32 s = (v << 12) / *(s16 *)(o + 0x4E);
     *(u16 *)(o+0x52)=s;
     *(u16 *)(o+0x50)=s;
     s &= -0x10;
     *(u16 *)(o+0x52)=s;
     *(u16 *)(o+0x50)=s;

}

void func_800C9560(u8 *p, u8 *o, s32 idx, s32 flag) {
    extern Ent63940 D_80063940[];
    extern Ent1010B0 D_801010B0[];
    s32 d;
    s32 s;
    if (p[0xBEA] < 5) {
        d = *(s16 *)(o + 0x4E);
        if (d <= 0) {
            return;
        }
        if (flag == 0) {
            s = 0x140000 / d;
            *(u16 *)(o + 0x52) = s;
            *(u16 *)(o + 0x50) = s;
            s &= -0x10;
        } else {
            Ent63940 *q = &D_80063940[idx];
            s = (s32)((((((q->w14 & 3) << 2) | (q->w10 >> 30)) * 8 + 0x100) * 0x1000)) / d;
            *(u16 *)(o + 0x52) = s;
            *(u16 *)(o + 0x50) = s;
            s &= -0x10;
        }
    } else {
        s = 0xC00000 / D_801010B0[p[0x5D9]].h;
    }
    *(u16 *)(o + 0x52) = s;
    *(u16 *)(o + 0x50) = s;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C94DC", func_800C9648);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C94DC", func_800C9A34);

s32 func_800C9B78(Pos800C *first, Pos800C *second) {
    s32 x = first->x - second->x;
    s32 y, squared;
    if (x < 0) x = -x;
    squared = func_8001AA44(x * 100, 2);
    y = first->y - second->y;
    if (y < 0) y = -y;
    squared += func_8001AA44(y * 100, 2);
    return (s32)sqrt((double)squared);
}

extern s32 func_8001AA44(s32, s32);
extern double sqrt(double);
s32 func_800C9C38(Pos800C *a, Pos800C *b) {
    s32 d = a->x - b->x;
    if (d < 0) d = -d;
    if (d < 2) {
        d = a->y - b->y;
        if (d < 0) d = -d;
        return d < 2;
    }
    return 0;
}

s32 func_800C9C90(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0x5CC) & 0x40;
}

s32 func_800C9C9C(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0x5CC) & 0x80;
}

s32 func_800C9CA8(s32 a, s32 b, s32 c, s32 d) {
    if (b < d) {
        if (a < c) return 2;
        if (c < a) return 8;
        return 1;
    }
    if (d < b) {
        if (a < c) return 4;
        if (c < a) return 6;
        return 5;
    }
    if (a < c) return 3;
    if (c < a) return 7;
    return 0;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C94DC", func_800C9D18);

void func_800C9F98(void) {
    extern int func_800161C4();
    extern int func_800C9D18();
    void *temp_v0;

    temp_v0 = func_80015B3C(&func_800C9D18, &func_800161C4, 5);
    func_80015EF8(temp_v0);
    M2C_FIELD(temp_v0, s32 *, 0x18) = func_80019F30(0x60012, 0x3A);
    M2C_FIELD(temp_v0, s16 *, 0x4A) = -0x6C;
    M2C_FIELD(temp_v0, s16 *, 0x4E) = 4;
    M2C_FIELD(temp_v0, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x38) | 0x40);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C94DC", func_800CA00C);

#include "ghidra.h"
void func_800CA268(short param_1,short param_2,short param_3,short param_4,short param_5,
                  undefined4 param_6)

{
  func_800CA00C
            (0,(int)param_1,(int)param_2,(int)param_3,(int)param_4,(int)param_5,param_6,0);
  return;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C94DC", func_800CA2C8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C94DC", func_800CA35C);

s32 func_800CA3DC(s32 arg0) {
    s32 var_v1;

    var_v1 = 8;
loop_1:
    if (M2C_FIELD((var_v1 + arg0), u8 *, -1) == 0) {
        var_v1 -= 1;
        if (var_v1 > 0) {
            goto loop_1;
        }
    }
    return var_v1;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C94DC", func_800CA408);

s32 func_800CA474(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x5D9) + 0x29;
}

s32 func_800CA480(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x5D9) + 0x34;
}

s32 func_800CA48C(s32 arg0, s32 arg1) {
    s32 var_a2;
    u8 temp_v1;

    temp_v1 = M2C_FIELD((arg0 + arg1), u8 *, 0x5E4);
    var_a2 = -1;
    if (temp_v1 != 0xFF) {
        var_a2 = temp_v1 + 0x10;
    }
    return var_a2;
}

s32 func_800CA4AC(s32 arg0, s32 arg1) {
    s32 var_a2;
    u8 temp_v1;

    temp_v1 = M2C_FIELD((arg0 + arg1), u8 *, 0x5E4);
    var_a2 = -1;
    if (temp_v1 != 0xFF) {
        var_a2 = temp_v1 + 0x18;
    }
    return var_a2;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C94DC", func_800CA4CC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C94DC", func_800CA574);

s32 func_800CA664(s16 arg0) {
    if (arg0 == 0) return 1;
    if (arg0 == -2) return 0;
    if (arg0 == -1) return 2;
    return 1;
}

u32 func_800CA69C(void *arg0) {
    return (u32) (M2C_FIELD(arg0, u8 *, 0xBE1) & 6) >> 1;
}

s32 func_800CA6B0(void) {
    return 0;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C94DC", func_800CA6B8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C94DC", func_800CA730);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C94DC", func_800CA7B0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C94DC", func_800CA87C);

#include "ghidra.h"
void func_800CAA44(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;

  iVar2 = 0;
  do {
    iVar1 = param_2 + iVar2;
    iVar2 = iVar2 + 1;
    *(undefined1 *)(iVar1 + 0x6b) = *(undefined1 *)(iVar1 + 0xe);
  } while (iVar2 < 5);
  return;
}

s16 func_800CAA6C(void *arg0, s32 arg1)
{
  s16 var_a2;
  s32 var_v1;
  u8 temp_v0;
  void *var_a0;
  var_a0 = arg0;
  var_a2 = 0;
  temp_v0 = *((u8 *) (((s8 *) var_a0) + 0x6A));
  var_v1 = 0;
  if (temp_v0 != 0)
  {
    do
    {
      if ((*((u8 *) (((s8 *) var_a0) + 0x2E))) == arg1)
      {
        var_a2 += *((u16 *) (((s8 *) var_a0) + 0x30));
      }
      if (arg1)
      {
        var_v1 += 1;
        var_a0 += 6;
      }
      else
      {
        var_v1 += 1;
        var_a0 += 6;
      }
    }
    while (var_v1 < ((s32) temp_v0));
  }
  return var_a2;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C94DC", func_800CAABC);

void func_800CABDC(void *arg0, s32 arg1, s32 arg2) {
    extern u8 D_80018600[];
    extern int func_800CAABC();
    void *temp_v0;

    temp_v0 = func_80015B3C(&func_800CAABC, D_80018600, 0);
    func_80015EF8(temp_v0);
    M2C_FIELD(temp_v0, s32 *, 0x7C) = arg1;
    M2C_FIELD(temp_v0, s32 *, 0x80) = arg2;
    M2C_FIELD(arg0, s8 *, 0xCF0) = 0;
}

void func_800CAC50(void *arg0, s32 arg1, s32 arg2) {
    extern u8 D_80018600[];
    extern int func_800CBA14();
    void *temp_v0;

    temp_v0 = func_80015B3C(&func_800CBA14, D_80018600, 0);
    func_80015EF8(temp_v0);
    M2C_FIELD(temp_v0, s32 *, 0x7C) = arg1;
    M2C_FIELD(temp_v0, s32 *, 0x80) = arg2;
    M2C_FIELD(arg0, s8 *, 0xCF0) = 0;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C94DC", func_800CACC4);

void func_800CAD74(s32 arg0) {
    s32 temp_s4;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    u8 temp_v0;
    void *var_s0;

    temp_s4 = arg0 + 0x5D0;
    var_s2 = 0;
    var_s3 = 0x18;
    do {
        var_s1 = 0;
        var_s0 = temp_s4 + var_s3;
loop_2:
        if (func_800A8E34(temp_s4, var_s2, var_s1) == 0) {
            temp_v0 = M2C_FIELD(var_s0, u8 *, 0x28);
            if (temp_v0 != 0) {
                M2C_FIELD(var_s0, u8 *, 0x28) = (u8) (temp_v0 - 1);
            }
        }
        var_s1 += 1;
        var_s0 += 0x7C;
        if (var_s1 < 6) {
            goto loop_2;
        }
        var_s2 += 1;
        var_s3 += 0x2E8;
    } while (var_s2 < 2);
}
