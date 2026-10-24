#include "common.h"

void func_8009A1D4(void) {
    extern u8 D_8008ED68[];
    extern u16 D_8008EE44[];
    extern u8 D_800AF1B8[];
    extern M2C_UNK (*D_800AF1E4)(s32 *);
    extern s32 D_800B3AE0[];
    if ((u32) (M2C_FIELD(D_8008ED68, u16 *, 0xDC) - 5) < 3U) {
        if ((*D_800B3AE0) == 0) {
            if ((M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x8F0) || (M2C_FIELD(D_8008ED68, s32 *, 0x98) & 0x8F0)) {
                (*D_800B3AE0) = 1;
            }
            goto block_5;
        }
        goto block_6;
    }
block_5:
    if ((*D_800B3AE0) != 0) {
block_6:
        D_800AF1E4(D_800B3AE0);
    }
    (*(void (**)())(((*D_8008EE44) * 4) + D_800AF1B8))();
}
