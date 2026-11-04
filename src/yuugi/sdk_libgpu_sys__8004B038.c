#include "common.h"
#include "yuugi.h"

s32 func_8004B038(s32 arg0, s32 arg1)
{
  int new_var;
  int new_var2;
  unsigned int new_var3;
  new_var3 = (arg1 & 0x7FF) << 0xB;
  if (1)
  {
    new_var = 0x7FF;
    new_var2 = (arg0 & new_var) | 0xE5000000;
    return new_var3 | new_var2;
  }
}

s32 func_8004B054(s16 *arg0) {
    s32 pat[4];
    if (arg0 != NULL) {
        pat[0] = (u32)(u8)arg0[0] >> 3;
        pat[2] = (-arg0[2] & 0xFF) >> 3;
        pat[1] = (u32)(u8)arg0[1] >> 3;
        pat[3] = (-arg0[3] & 0xFF) >> 3;
        return (pat[1] << 15) | ((pat[0] << 10) | 0xE2000000) | (pat[3] << 5) | pat[2];
    } else {
        return 0;
    }
}

s32 func_8004B0D4(void) {
    extern s32 * D_80078A24[];
    return *(*D_80078A24);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__8004B038", func_8004B0EC);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__8004B038", func_8004B1CC);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__8004B038", func_8004B3FC);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__8004B038", func_8004B638);

#include "common.h"

extern u32 *D_80078A24[];
extern u8 D_80094CB8[];

u32 func_8004B8B8(u32 value) {
    *(*D_80078A24) = value;
    D_80094CB8[value >> 24] = value;
    return value >> 24;
}

#include "common.h"

extern u8 D_80094CB8[];

u8 func_8004B8DC(s32 i) {
    return D_80094CB8[i];
}
