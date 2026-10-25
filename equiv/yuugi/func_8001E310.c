#include "common.h"

extern u8 D_8008ED68[];
extern u8 D_800861B0[];

void func_8001E310(void) {
    u32 i;

    *(s32 *)(D_8008ED68 + 0x968) = 0;
    func_8001F160();
    for (i = 0; i < 5; i++) {
        func_8001A998(D_800861B0 + i * 0x18, 0x18);
    }
    *(s32 *)(D_8008ED68 + 0x990) = 0;
}
