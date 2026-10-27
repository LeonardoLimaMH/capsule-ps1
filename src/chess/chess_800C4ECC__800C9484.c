#include "common.h"
#include "ghidra.h"

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C9484", func_800C9484);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C9484", func_800C94DC);

void func_800C9534(s32 unused,u8 *o,s32 v) {
     s32 s = (v << 12) / *(s16 *)(o + 0x4E);
     *(u16 *)(o+0x52)=s;
     *(u16 *)(o+0x50)=s;
     s &= -0x10;
     *(u16 *)(o+0x52)=s;
     *(u16 *)(o+0x50)=s;

}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C9484", func_800C9560);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C9484", func_800C9648);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C9484", func_800C9A34);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C9484", func_800C9B78);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C9484", func_800C9C38);

s32 func_800C9C90(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0x5CC) & 0x40;
}

s32 func_800C9C9C(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0x5CC) & 0x80;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C9484", func_800C9CA8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C9484", func_800C9D18);

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

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C9484", func_800CA00C);

#include "ghidra.h"
void func_800CA268(short param_1,short param_2,short param_3,short param_4,short param_5,
                  undefined4 param_6)

{
  func_800CA00C
            (0,(int)param_1,(int)param_2,(int)param_3,(int)param_4,(int)param_5,param_6,0);
  return;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C9484", func_800CA2C8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C9484", func_800CA35C);

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

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C9484", func_800CA408);

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

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C9484", func_800CA4CC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C9484", func_800CA574);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C9484", func_800CA664);

u32 func_800CA69C(void *arg0) {
    return (u32) (M2C_FIELD(arg0, u8 *, 0xBE1) & 6) >> 1;
}

s32 func_800CA6B0(void) {
    return 0;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C9484", func_800CA6B8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C9484", func_800CA730);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C9484", func_800CA7B0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C9484", func_800CA87C);

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

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C9484", func_800CAABC);

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

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800C9484", func_800CACC4);

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
