#include "common.h"

/* rand-u16: 0x8006AF80 1 0,1,2,3,5,9 */
extern u8 D_80091618[];
extern u16 D_8006AF80;
extern s32 func_800A9D6C(s32);

s32 func_8009DEF8(void) {
    if (*(u16 *)(D_80091618 + D_8006AF80 * 0x1A8 + 0x10) == 0xFFFF) return -1;
    if (func_800A9D6C(1) == 0) return 0;
    *(u16 *)(D_80091618 + D_8006AF80 * 0x1A8 + 0x10) = 0xFFFF;
    return -1;
}
