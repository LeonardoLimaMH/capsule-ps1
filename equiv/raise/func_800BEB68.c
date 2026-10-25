/* rand-u16: 0x8006AF80 1 0,1,2,3,5,9 */
#include "common.h"

extern u8 D_80091618[];
extern u16 D_8006AF80;

s32 func_800BEB68(void) {
    *(s32 *)(D_80091618 + D_8006AF80 * 0x1A8 + 0xC4) = 0;
    *(s32 *)(D_80091618 + D_8006AF80 * 0x1A8 + 0xCC) = 0;
    return 0;
}
