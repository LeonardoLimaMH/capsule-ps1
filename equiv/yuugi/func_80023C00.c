#include "common.h"

extern u8 D_80069E4C[];
extern s32 D_80069B28;

u8 *func_80023C00(s32 mode, s32 a1, s32 a2) {
    if (mode == 1) {
        *(s32 *)(D_80069E4C + 0x64) = a1;
        *(s32 *)(D_80069E4C + 0x68) = *(s32 *)(D_80069E4C + 0x60);
    } else if (mode == 2) {
        *(s32 *)(D_80069E4C + 0x64) = a1;
        *(s32 *)(D_80069E4C + 0x68) = a2;
        *(s32 *)(D_80069E4C + 0x60) = a1;
    }
    D_80069B28 = mode;
    *(s32 *)(D_80069E4C + 0x6C) = 0;
    *(s32 *)(D_80069E4C + 0x70) = 0x40;
    return D_80069E4C;
}
