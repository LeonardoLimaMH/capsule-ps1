#include "common.h"

extern u8 D_8008F703;
extern s32 D_80078C38;
extern u8 D_8006AF80[], D_8006AF90[], D_8006AFCC[];
extern void func_80026514();

void func_800267F0(void) {
    u8 *a1;
    s32 i;

    D_8008F703 = 0;
    D_80078C38 = 0x701B;
    *(u16 *)D_8006AF80 = 0xFFFF;
    *(s32 *)(D_8006AF80 + 4) = 0x20D0;
    for (a1 = D_8006AF90; a1 < D_8006AF90 + 0x3C; a1 += 0x1E) {
        *(s16 *)a1 = 0;
        for (i = 0; i < 3; i++) {
            *(s16 *)(a1 + 2 + i * 2) = -1;
            *(s16 *)(a1 + 8 + i * 4) = -1;
            *(s16 *)(a1 + 0xA + i * 4) = -1;
        }
        *(s16 *)(a1 + 0x14) = 0;
        for (i = 0; i < 2; i++) {
            *(s16 *)(a1 + 0x16 + i * 2) = -1;
            *(s16 *)(a1 + 0x1A + i * 2) = -1;
        }
    }
    for (i = 0; i < 5; i++) {
        ((s32 *)(D_8006AFCC + 8))[i] = -1;
        ((s32 *)(D_8006AFCC + 0x1C))[i] = 0;
    }
    for (i = 0; i < 11; i++) {
        ((s16 *)(D_8006AFCC + 0x30))[i] = 0;
        ((s32 *)(D_8006AFCC + 0x48))[i] = 0;
        ((s16 *)(D_8006AFCC + 0x74))[i] = 0;
    }
    for (i = 0; i < 6; i++) {
        func_80026514(i & 0xFFFF);
    }
}
