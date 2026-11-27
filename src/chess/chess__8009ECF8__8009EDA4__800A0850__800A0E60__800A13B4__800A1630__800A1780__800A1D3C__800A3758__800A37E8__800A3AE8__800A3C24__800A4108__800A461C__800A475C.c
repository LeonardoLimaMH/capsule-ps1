#include "ghidra.h"
#include "matching.h"
#include "common.h"

extern s32 func_80020304(s32);

extern u8 D_801010B0[];

extern s32 func_80020304(s32);

void func_800A475C(u8 *base, s32 x, s32 y, s16 *out)
{
  u32 board = *((u32 *) (D_801010B0 + (base[0x5D9] * 0x34)));
  u32 cell;
  int new_var;
  new_var = 600;
  out[0] = (x * 100) + (func_80020304(100) - new_var);
  cell = *((u32 *) ((y * 4) + ((x * 0x34) + board)));
  out[1] = -(((s32) ((cell >> 19) & 7)) * 50);
  out[2] = (y * 100) + (func_80020304(100) - new_var);
}

s32 func_800A4858(s32 unused_arg0, s32 arg1, s32 arg2, void *arg3) {
    s16 temp_a0;
    s16 temp_a3;

    temp_a0 = M2C_FIELD(arg3, s16 *, 0);
    if ((temp_a0 >= ((arg1 * 0x64) - 0x258)) && ((((arg1 + 1) * 0x64) - 0x258) >= temp_a0)) {
        temp_a3 = M2C_FIELD(arg3, s16 *, 4);
        if (temp_a3 >= ((arg2 * 0x64) - 0x258)) {
            return ((((arg2 + 1) * 0x64) - 0x258) < temp_a3) ^ 1;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
