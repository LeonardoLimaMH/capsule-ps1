#include "common.h"

extern u8 D_800947E8[];

void func_8003CA90(s16 i) {
    s16 *p = (s16 *)(D_800947E8 + i * 0x1C);

    if (*p != -1) {
        *p = -1;
    }
}
