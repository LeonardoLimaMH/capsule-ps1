#include "common.h"

extern s16 D_800733FC[];
extern s16 D_800723FC[];

s32 sin_1(s32 a) {
    if (a <= 0x800) {
        if (a <= 0x400) {
            return D_800733FC[a];
        }
        return D_800733FC[0x800 - a];
    }
    if (a > 0xC00) {
        return -D_800733FC[0x1000 - a];
    }
    return -D_800723FC[a];
}
