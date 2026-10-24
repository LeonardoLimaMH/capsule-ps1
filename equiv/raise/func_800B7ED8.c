#include "common.h"

extern u8 D_800EEB9C[];

void func_800B7ED8(s32 flag) {
    s32 bit = flag & 1;
    u8 *obj = *(u8 **)(D_800EEB9C + 0x1C);
    s32 k;

    *(s32 *)(D_800EEB9C + 0x10) = flag;
    *(s32 *)(obj + 0x38) = (*(s32 *)(obj + 0x38) & ~1) | bit;
    for (k = 0; k < 7; k++) {
        u8 *o = *(u8 **)(D_800EEB9C + 0x28 + k * 4);

        *(s32 *)(o + 0x38) = (*(s32 *)(o + 0x38) & ~1) | bit;
    }
}
