#include "common.h"

extern u8 D_800EEB9C[];

u8 *func_800B786C(s32 seconds) {
    u8 *obj;

    obj = *(u8 **)(D_800EEB9C + 0x75C);
    *(s32 *)(obj + 0x38) &= ~8;
    obj = *(u8 **)(D_800EEB9C + 0x75C);
    *(s16 *)(obj + 0x54) = (seconds << 12) / 60;
    obj = *(u8 **)(D_800EEB9C + 0x75C);
    *(s16 *)(obj + 0x78) = 0;
    return obj;
}
