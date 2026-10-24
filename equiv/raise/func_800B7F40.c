#include "common.h"

extern u8 D_800EEB9C[];

void func_800B7F40(s32 mode) {
    u8 *obj = *(u8 **)(D_800EEB9C + 0x1C);

    *(s32 *)(D_800EEB9C + 0x14) = mode;
    *(s32 *)(obj + 0x38) = (*(s32 *)(obj + 0x38) & ~0x40) | ((mode != 1) << 6);
}
