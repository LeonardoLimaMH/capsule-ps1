#include "common.h"

extern u8 D_80091618[];
extern u8 D_800EF364[];
extern s32 func_800B1260(void);

s32 func_800296C0(s32 a0, s32 a1) {
    u32 r = func_800B1260() & 0xFFFF;
    u16 t;
    if (r == 0xFFFF) return 0;
    t = *(u16 *)(D_80091618 + r * 0x1A8 + 0x10);
    if (t == 0xFFFF) return 0;
    if (t != 1 && t != 5 && t != 3) return 0;
    return D_800EF364[(t << 6) + a1] == 0xFF;
}
