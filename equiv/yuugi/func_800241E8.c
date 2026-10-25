#include "common.h"

extern s32 D_80078C10, D_80078C0C;

void func_800241E8(u8 *p) {
    u8 *t = p;
    u8 *q;
    s32 k;

    for (k = 0; k < 2; k++, t += 4) {
        switch (*(s32 *)(p + 8)) {
        case 0:
            q = *(u8 **)(t + 0xA4) + D_80078C10 * 24;
            q[4] = 0xFF;
            q[5] = 0;
            q[6] = D_80078C10 % 256;
            break;
        case 1:
            q = *(u8 **)(t + 0xA4) + D_80078C10 * 40;
            q[4] = 0xFF;
            q[5] = 0;
            q[6] = D_80078C10 % 256;
            break;
        case 2:
            q = *(u8 **)(t + 0xA4) + D_80078C10 * 36;
            q[4] = 0xFF;
            q[5] = 0;
            q[6] = D_80078C10 % 256;
            q[0xC] = 0xFF;
            q[0xD] = 0;
            q[0xE] = D_80078C10 % 256;
            q[0x14] = 0xFF;
            q[0x15] = 0;
            q[0x16] = D_80078C10 % 256;
            q[0x1C] = 0xFF;
            q[0x1D] = 0;
            q[0x1E] = D_80078C10 % 256;
            break;
        case 3:
            q = *(u8 **)(t + 0xA4) + D_80078C10 * 52;
            q[4] = 0xFF;
            q[5] = 0;
            q[6] = D_80078C10 % 256;
            q[0x10] = 0xFF;
            q[0x11] = 0;
            q[0x12] = D_80078C10 % 256;
            q[0x1C] = 0xFF;
            q[0x1D] = 0;
            q[0x1E] = D_80078C10 % 256;
            q[0x28] = 0xFF;
            q[0x29] = 0;
            q[0x2A] = D_80078C10 % 256;
            break;
        }
    }
    D_80078C10 = D_80078C10 == *(s32 *)(p + 0xC) - 1 ? 0 : D_80078C10 + 1;
    D_80078C0C = 0x10;
}
