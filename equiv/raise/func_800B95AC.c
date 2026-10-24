#include "common.h"

extern u8 D_800900C0[];

s32 func_800B95AC(void) {
    s32 i;

    if (*(s32 *)(D_800900C0 + 0x268) == -0x320) {
        func_800AEDC4(3, D_800900C0);
        return 1;
    }
    for (i = 0; i < 3; i++) {
        *(s32 *)(D_800900C0 + 0x234 + i * 0xBC + 0x34) += 0x14;
    }
    return 0;
}
