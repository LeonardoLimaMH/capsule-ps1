#include "common.h"

#include "ghidra.h"

void func_800ACCA8(void *arg0) {
    extern u8 D_8008ED68[];
    extern u16 D_8008EE44[];
    u8 *d = D_8008ED68;
    s16 var_a2;
    register s32 var_v0 asm("v0");

    if (*(u16 *)(d + 0xDC) == 6) {
        var_a2 = -0x90;
        if (*(u16 *)(d + 0xE0) != 0) {
            *(s32 *)((s8 *)arg0 + 0x38) &= ~1;
            if (*(s32 *)((s8 *)arg0 + 0x84) != 0) {
                var_a2 = 0x10;
            }
            *(s16 *)((s8 *)arg0 + 0x4A) = 0x10;
            *(s16 *)((s8 *)arg0 + 0x46) = var_a2;
            *(s16 *)((s8 *)arg0 + 0x4E) = 3;
            return;
        }
    }
    if (*D_8008EE44 == 8) {
        register s32 mask asm("v1") = -2;
        var_v0 = *(s32 *)((s8 *)arg0 + 0x38);
        var_v0 &= mask;
    } else {
        var_v0 = *(s32 *)((s8 *)arg0 + 0x38) | 1;
    }
    *(s32 *)((s8 *)arg0 + 0x38) = var_v0;
}
