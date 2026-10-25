#include "common.h"

extern s32 D_80069B28;
extern u8 D_80069E4C[];

void func_800D8774(s32 mode, s32 a, s32 b) {
    if (mode == 1) {
        s32 v = *(s32 *)(D_80069E4C + 0x60);

        *(s32 *)(D_80069E4C + 0x64) = a;
        *(s32 *)(D_80069E4C + 0x68) = v;
    } else if (mode == 2) {
        *(s32 *)(D_80069E4C + 0x64) = a;
        *(s32 *)(D_80069E4C + 0x68) = b;
        *(s32 *)(D_80069E4C + 0x60) = a;
    }
    D_80069B28 = mode;
    *(s32 *)(D_80069E4C + 0x6C) = 0;
    *(s32 *)(D_80069E4C + 0x70) = 0x10;
}
