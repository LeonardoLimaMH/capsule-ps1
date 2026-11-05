#include "common.h"

extern u8 D_80100F38[];

void func_800CF2E4(void) {
    func_800B1260();
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CF2E4", func_800CF304);

extern s32 func_800B1260(void);
extern s16 func_800CFF9C(s32, s32, s32);
s32 func_800CF418(s32 arg0, s32 arg1) {
    register s32 b asm("s1") = arg1;
    u8 *rec = D_80100F38 + (func_800B1260() & 0xFFFF) * 0x79C;
    s32 val = 0xFF;
    s32 i;

    for (i = 7; i >= 0; i--) {
        ((s16 *)(rec + 0x346))[i] = val;
    }
    ((s16 *)(rec + 0x346))[b] = func_800CFF9C(arg0, b, 0);
    return b;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CF2E4", func_800CF4BC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CF2E4", func_800CFF9C);

s32 func_800D06D4(s32 a, s32 b) {
    s32 d;
    s32 t;
    if (a == b) {
        return 0;
    }
    d = b - a;
    if (a < b) {
        if (d >= 5) {
            t = a + 8;
            d = b - t;
        }
    } else {
        if (a - b >= 5) {
            d = 8 - a;
            d += b;
        }
    }
    return d;
}

void func_800D0730(void *arg0, s16 arg1, s16 arg2, s16 arg3)
{
  int new_var2;
  s32 new_var;
  s32 temp_t0;
  s32 temp_v1;
  new_var = arg2;
  temp_t0 = arg3 + 4;
  new_var2 = (new_var - temp_t0) * 0x64;
  temp_v1 = (arg3 + 1) * 0x32;
  *((s16 *) (((s8 *) arg0) + 0)) = (s16) (new_var2 + temp_v1);
  *((s16 *) (((s8 *) arg0) + 2)) = 0;
  new_var = temp_t0;
  *((s16 *) (((s8 *) arg0) + 4)) = (s16) (((new_var - arg1) * 0x64) - temp_v1);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CF2E4", func_800D07AC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CF2E4", func_800D091C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CF2E4", func_800D0A8C);
