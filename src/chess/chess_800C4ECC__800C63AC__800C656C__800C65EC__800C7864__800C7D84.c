#include "common.h"

extern u16 D_8008EE54[];
s32 func_800C7D84(s32 a0, s32 a1, u8 *a2) {
    register s32 r asm("a1") = 0;
    if (D_8008EE54[0] == 0) {
        if (a2[0x22] == a2[0x17]) {
            register u32 mask asm("a0") = 0x40040;
            u32 flags;
            register s32 value asm("v1");
            r = 1;
            flags = *(u32 *)(a2 + 0x18);
            value = r;
            a2[0x17] = value;
            *(u32 *)(a2 + 0x18) = flags | mask | 0x1000000;
        }
    }
    return r;
}

