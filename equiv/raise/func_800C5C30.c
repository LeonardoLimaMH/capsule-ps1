#include "common.h"

extern u8 D_800EE5D0[];
extern u8 D_800EEB9C[];

s32 func_800C5C30(s32 unused, s32 i) {
    return func_800B6D98(4, 0, 0, 4, 0, D_800EE5D0, *(s32 *)(D_800EEB9C + i * 4 + 0x6E0), 1, 1, 0, 2, 0);
}
