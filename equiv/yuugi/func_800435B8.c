#include "common.h"

extern u8 D_80094B70[];

u8 *func_800435B8(void) {
    s32 n = *(s32 *)D_80094B70;

    if (n >= 8) {
        return 0;
    }
    n += *(s32 *)(D_80094B70 - 8);
    if (n >= 8) {
        n -= 8;
    }
    return D_80094B70 - 0xC8 + n * 24;
}
