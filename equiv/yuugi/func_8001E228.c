#include "common.h"

extern u8 D_800861B0[];

void func_8001E228(void) {
    u32 i;

    for (i = 0; i < 5; i++) {
        func_8001A998(D_800861B0 + i * 0x18, 0x18);
    }
}
