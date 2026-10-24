#include "common.h"

extern u8 D_800F1EB4[];

void func_800DEAE8(void) {
    s32 i;

    *(s16 *)(D_800F1EB4 + 0) = 0;
    *(s16 *)(D_800F1EB4 + 2) = 0;
    *(s16 *)(D_800F1EB4 + 4) = 0;
    for (i = 0; i < 6; i++) {
        *(s16 *)(D_800F1EB4 + i * 4 + 6) = -1;
        *(s16 *)(D_800F1EB4 + i * 4 + 8) = -1;
    }
}
