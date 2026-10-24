#include "common.h"

extern u16 D_8008EE44;
extern s32 D_800B3C20;
extern u8 D_80091618[];

s32 func_800A8758(u8 *arg0) {
    u8 *t = D_80091618 + D_800B3C20 * 0x1A8;
    u16 id = *(u16 *)(t + *(s32 *)(arg0 + 0x84) * 2 + 0x14);
    s32 flags = *(s32 *)(arg0 + 0x38) | 1;

    *(s32 *)(arg0 + 0x38) = flags;
    if (D_8008EE44 != 7) {
        return 7;
    }
    if (*(u16 *)(t + 0x10) == 0xFFFF || id == 0xFFFF) {
        return 0xFFFF;
    }
    *(s32 *)(arg0 + 0x38) = flags & ~1;
    return *(s32 *)(arg0 + 0x18) = func_80019F30(0x6000C, id + 0x36, flags);
}
