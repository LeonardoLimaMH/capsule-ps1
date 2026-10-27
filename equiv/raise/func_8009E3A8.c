#include "common.h"

extern u8 D_800EFF58[];
extern s16 D_800ED878, D_800ED87A, D_800ED87C, D_800ED87E;
extern void func_800BB310(s32, s32);
extern s32 func_80034AB0(s32);

s32 func_8009E3A8(s32 a0) {
    s32 i;
    if (a0 == 0) {
        D_800ED878 = 1;
        D_800ED87A = 1;
        D_800ED87C = 12;
        D_800ED87E = 8;
        *(s32 *)(D_800EFF58 + 0x1C) = (*(s32 *)(D_800EFF58 + 0x1C) + 1) % 7;
        for (i = 0; i < 7; i++) func_800BB310(i, 0);
    } else if (a0 == 1) {
        D_800ED878 = -1;
        D_800ED87A = a0;
        D_800ED87C = 12;
        D_800ED87E = 8;
        *(s32 *)(D_800EFF58 + 0x1C) = (*(s32 *)(D_800EFF58 + 0x1C) + 6) % 7;
        for (i = 0; i < 7; i++) func_800BB310(-i, 0);
    }
    return func_80034AB0(0x84);
}
