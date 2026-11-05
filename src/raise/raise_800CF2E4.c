#include "common.h"

extern u8 D_80100F38[];

void func_800CF2E4(void) {
    func_800B1260();
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CF2E4", func_800CF304);

s32 func_800CF418(s32 arg0, s32 arg1) {
    s32 i;
    u8 *rec;
    s16 *arr;
    rec = D_80100F38 + (func_800B1260() & 0xFFFF) * 0x79C;
    arr = (s16 *)(rec + 0x346);
    for (i = 7; i >= 0; i--) {
        arr[i] = 0xFF;
    }
    arr[arg1] = func_800CFF9C(arg0, arg1, 0);
    return arg1;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CF2E4", func_800CF4BC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CF2E4", func_800CFF9C);

s32 func_800D06D4(s32 a, s32 b) {
    s32 d;
    s32 t;
    if (a == b) {
        return 0;
    }
    if (a < b) {
        d = b - a;
        if (d >= 5) {
            t = a + 8;
            d = b - t;
        }
    } else {
        d = b - a;
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
