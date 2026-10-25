#include "common.h"

extern s32 D_80094BF8;
extern u8 D_80094B78[];

void func_80043A90(s32 a0, s32 a1, s32 a2) {
    *(s32 *)(D_80094B78 + D_80094BF8 * 16) = a0;
    D_80094B78[D_80094BF8 * 16 + 4] = a1;
    func_800458A0(D_80094B78 + 5 + D_80094BF8 * 16, a2);
    if (++D_80094BF8 >= 8) {
        D_80094BF8 = 0;
    }
}
