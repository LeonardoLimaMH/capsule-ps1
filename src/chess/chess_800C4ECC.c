#include "common.h"

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C4ECC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C4FC4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C523C);

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
