#include "common.h"

extern u8 D_80091618[];

u16 func_800B84BC(u16 a0, s32 a1) {
    return *(u16 *)(D_80091618 + a0 * 0x1A8 + a1 * 2 + 0x134);
}
