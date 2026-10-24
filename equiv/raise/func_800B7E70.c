#include "common.h"

extern u8 D_800EEB9C[];

s32 func_800B7E70(s32 i) {
    s32 n = *(s32 *)(D_800EEB9C + i * 4 + 0x60);
    s32 *list = (s32 *)(D_800EEB9C + i * 0x24 + 0x3C8);
    s32 k;

    for (k = 0; k < n; k++) {
        if (list[k] == 1) {
            return 1;
        }
    }
    return 0;
}
