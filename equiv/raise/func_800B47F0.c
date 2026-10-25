#include "common.h"

extern u8 D_800EE5D0[];
extern u8 D_800EEB9C[];

s32 func_800B47F0(s32 i) {
    return func_800B6D98(1, -0xB8, 0x18, 8, 0, D_800EE5D0, *(s32 *)(D_800EEB9C + i * 4 + 0x44), 1, 0, 0, 2, 1);
}
