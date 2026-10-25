#include "common.h"

extern u8 D_8001118C[], D_80011198[], D_80073368[];
extern u8 D_800730A5, D_800730A4;
extern s32 D_80073088, D_80073084, D_80073098, D_80073094;
extern volatile u8 *D_8007334C, *D_80073358, *D_80073354;
extern volatile u32 *D_8007335C;
extern u8 D_80073364[];
extern void ResetCallback(), InterruptCallback(), func_80047054();
extern s32 CD_cw(), CD_sync();

s32 CD_init(void) {
    puts(D_8001118C);
    printf(D_80011198, D_80073368);
    D_800730A5 = 0;
    D_800730A4 = 0;
    D_80073088 = 0;
    D_80073084 = 0;
    D_80073098 = 0;
    D_80073094 = 0;
    ResetCallback();
    InterruptCallback(2, func_80047054);
    *D_8007334C = 1;
    while (*D_80073358 & 7) {
        *D_8007334C = 1;
        *D_80073358 = 7;
        *D_80073354 = 7;
    }
    D_80073364[2] = 0;
    D_80073364[1] = D_80073364[2];
    D_80073364[0] = 2;
    *D_8007334C = 0;
    *D_80073358 = 0;
    *D_8007335C = 0x1325;
    CD_cw(1, 0, 0, 0);
    if (D_80073094 & 0x10) {
        CD_cw(1, 0, 0, 0);
    }
    if (CD_cw(10, 0, 0, 0) != 0) {
        return -1;
    }
    if (CD_cw(12, 0, 0, 0) != 0) {
        return -1;
    }
    if (CD_sync(0, 0) != 2) {
        return -1;
    }
    return 0;
}
