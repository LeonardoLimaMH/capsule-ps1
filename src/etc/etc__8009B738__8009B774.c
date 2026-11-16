#include "common.h"

void func_8009B774(u8 *arg0) {
    extern u16 D_8008ED68[];
    s32 count;

    if (D_8008ED68[0xDC / 2] == 9 && D_8008ED68[0xE0 / 2] == 0) {
        count = *(s32 *)(arg0 + 0x84) - 1;
        *(s32 *)(arg0 + 0x84) = count;
        if (count <= 0) {
            *(s32 *)(arg0 + 0x84) = 100;
        }
        if (*(s32 *)(arg0 + 0x84) >= 15) {
            *(s32 *)(arg0 + 0x38) &= ~1;
        } else {
            *(s32 *)(arg0 + 0x38) |= 1;
        }
    } else {
        *(s32 *)(arg0 + 0x38) |= 1;
    }
}
