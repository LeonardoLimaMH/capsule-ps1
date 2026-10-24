#include "common.h"

extern u8 D_800900C0[];

s32 func_800B98AC(void) {
    s32 i;

    if (*(s32 *)(D_800900C0 + 0x268) == -0x640) {
        return 1;
    }
    for (i = 3; i < 6; i++) {
        *(s32 *)(D_800900C0 + i * 0xBC + 0x34) -= 0x14;
    }
    return 0;
}
