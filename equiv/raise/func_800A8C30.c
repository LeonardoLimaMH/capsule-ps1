#include "common.h"

extern u8 D_80063940[];
extern u8 D_80091618[];

s32 func_800A8C30(s32 idx) {
    u16 kind = *(u16 *)(D_80091618 + (idx & 0xFFFF) * 0x1A8);

    return (*(u32 *)(D_80063940 + kind * 0x3C + 8) >> 14) & 7;
}
