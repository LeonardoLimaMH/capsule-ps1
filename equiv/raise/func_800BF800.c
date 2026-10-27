#include "common.h"

typedef struct { u8 b[4]; } B4;
extern s16 D_800F0680, D_800F0682, D_800F067C, D_800F067E, D_800F0686, D_800F0678, D_800F067A, D_800F066E;
extern u8 D_800F0688[];
extern s32 D_8008ED80;
extern s16 GetTPage(s32, s32, s32, s32);

#define C4(x) (*(B4 *)(D_800F0688 + (x)))

void func_800BF800(s32 a0) {
    u8 *c = D_800F0688;
    s16 i, j, k;
    D_800F0680 = 1;
    D_800F0682 = a0;
    D_800F067C = 2;
    D_800F067E = 0;
    D_800F0686 = 0;
    if (D_8008ED80 & 1) {
        D_800F0678 = 0;
        D_800F067A = 3;
        c[0] = 0xE0; c[1] = 0x40; c[2] = 0x70;
        c[4] = 0xF0; c[5] = 0xF0; c[6] = 0x10;
        c[8] = 0; c[9] = 0; c[0xA] = 0;
        c[0xC] = 0xF0; c[0xD] = 0xF0; c[0xE] = 0xF0;
    } else {
        D_800F0678 = 1;
        D_800F067A = 1;
        c[0] = 0; c[1] = 0; c[2] = 0;
        c[4] = 0; c[5] = 0; c[6] = 0;
        c[8] = 0; c[9] = 0; c[0xA] = 0;
        c[0xC] = 0xF0; c[0xD] = 0xF0; c[0xE] = 0xF0;
    }
    C4(0x10) = C4(8);
    C4(0x14) = C4(0xC);
    C4(0x18) = C4(0);
    C4(0x1C) = C4(4);
    for (i = 0; i < 3; i++)
        for (j = 0; j < 2; j++)
            for (k = 0; k < 4; k++) C4(0x20 + (i * 2 + j) * 16 + k * 4) = C4(j * 16 + k * 4);
    D_800F066E = GetTPage(0, D_800F067A, 0, 0);
}
