#include "common.h"

extern u8 D_80091618[];
extern s16 D_80069AB4[];
extern s32 func_800B1260(void);

s32 func_800293E8(void) {
    u32 r = func_800B1260() & 0xFFFF;
    u8 *ent;
    u16 i;
    if (r == 0xFFFF) return 0;
    ent = D_80091618 + r * 0x1A8;
    for (i = 0; i < *(u16 *)(ent + 0x12); i++)
        if (D_80069AB4[*(u16 *)(ent + 0x14 + i * 2)] >= 2) return 1;
    return 0;
}
