#include "common.h"

extern u8 D_800EE5D0[];
extern s32 D_800EF2F4;

u8 *func_800B617C(void) {
    u8 *obj = (u8 *)func_800B6D98(0x1A, 0x1E4, 0x35, 3, 0, D_800EE5D0, D_800EF2F4, 1, 0, 0, 2, 1);

    *(s16 *)(obj + 0x52) = 0xCCC;
    return obj;
}
