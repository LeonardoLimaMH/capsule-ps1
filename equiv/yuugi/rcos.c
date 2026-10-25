#include "common.h"

extern s16 D_800733FC[];
extern s16 D_80072BFC[];
extern s16 D_80071BFC[];

s32 rcos(s32 a) {
    if (a < 0) {
        a = -a;
    }
    a &= 0xFFF;
    if (a <= 0x800) {
        if (a <= 0x400) {
            return D_800733FC[0x400 - a];
        }
        return -D_80072BFC[a];
    }
    if (a > 0xC00) {
        return D_80071BFC[a];
    }
    return -D_800733FC[0xC00 - a];
}
