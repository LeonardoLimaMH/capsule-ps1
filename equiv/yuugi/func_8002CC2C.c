#include "common.h"

extern u8 D_80069BAC[];

void func_8002CC2C(void) {
    *(s32 *)(D_80069BAC + 0) = 0;
    *(s32 *)(D_80069BAC + 8) = 0x800;
    *(s16 *)(D_80069BAC + 0x10) = 0x200;
    *(s32 *)(D_80069BAC + 4) = 0;
    *(s16 *)(D_80069BAC + 0x12) = 0;
    *(s16 *)(D_80069BAC + 0x14) = 0;
    *(s16 *)(D_80069BAC - 0x28) = -0x800;
    *(s16 *)(D_80069BAC - 0x26) = -0x60;
    *(s16 *)(D_80069BAC - 0x24) = 0;
}
