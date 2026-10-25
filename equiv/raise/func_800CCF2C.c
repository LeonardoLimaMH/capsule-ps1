#include "common.h"

extern u8 D_800F19C8[];

void func_800CCF2C(s32 ctx, s32 slot, s32 flag) {
    u8 *obj = *(u8 **)(D_800F19C8 + (func_800B1260(ctx) & 0xFFFF) * 0xC + slot * 4);

    *(s32 *)(obj + 0x38) = (*(s32 *)(obj + 0x38) & ~0x40) | ((flag & 1) << 6);
}
