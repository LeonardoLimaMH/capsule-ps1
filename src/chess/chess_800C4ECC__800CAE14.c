#include "common.h"

void func_800CAE14(void *arg0)
{
  u8 temp_v0;
  void *temp_a0;
  u8 *new_var;
  temp_v0 = *((u8 *) (((s8 *) arg0) + 0xBCA));
  new_var = (u8 *) (((s8 *) (arg0 + temp_v0)) + 0xBCB);
  temp_a0 = (arg0 + ((temp_v0 * 0x2E8) + 0x5E8)) + ((*new_var) * 0x7C);
  if ((*((s8 *) (((s8 *) temp_a0) + 0x13))) > 0)
  {
    *((s8 *) (((s8 *) temp_a0) + 0x13)) = (s8) (((u8) (*((s8 *) (((s8 *) temp_a0) + 0x13)))) - 1);
  }
}

#include "common.h"

s32 func_800CAE6C(void *arg0) {
    u8 temp_v0;

    temp_v0 = M2C_FIELD(arg0, u8 *, 0x624);
    switch (temp_v0) {
    case 5:
        return 3;
    case 6:
        return 4;
    case 7:
        return 2;
    case 3:
    case 4:
        return 1;
    default:
        return 0;
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CAE14", func_800CAECC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CAE14", func_800CAF74);

s32 func_800CB24C(void *arg0, u8 *arg1, s32 arg2);
s32 func_800CB10C(void *arg0, u8 *arg1, s32 arg2)
{
    s32 sc[2];
    s32 ret;
    s32 i;
    s32 j;
    u8 *e;
    s32 d;

    ret = func_800CB24C(arg0, arg1, arg2);
    if (ret != 1) {
        return ret;
    }
    for (i = 0; i < 2; i++) {
        sc[i] = 0;
        for (j = 0; j < 5; j++) {
            e = arg1 + 0x18 + i * 0x2E8 + j * 0x7C;
            if (!(*(u32 *)(e + 0x18) & 0x300)) {
                sc[i] += 0x46;
                sc[i] += e[0xE] * 50 / e[9];
            }
        }
        sc[i] -= (arg1 + i)[0x60A] * 80;
    }
    d = sc[arg2] - sc[1 - arg2];
    if (d > 80) {
        return 2;
    }
    return d >= -80;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CAE14", func_800CB24C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CAE14", func_800CB400);

void func_800CB540(void *arg0) {
    extern u8 D_8008ED68[];
    void *global = (void *)D_8008ED68;
    if (M2C_FIELD(arg0, u16 *, 0x4E) == 0) {
        M2C_FIELD(arg0, u16 *, 0x4E) = 1U;
        return;
    }
    func_800CBAA0(0, arg0, global, 0);
}
