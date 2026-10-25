#include "common.h"

extern s32 D_800733CC[];
extern void func_80047A78();
extern void func_80047D54();
extern s32 DsReadyCallback();
extern s32 DsStartCallback();

s32 DsStartReadySystem(s32 a0, s32 a1) {
    if (D_800733CC[8] == 1) {
        return 0;
    }
    D_800733CC[0] = -1;
    D_800733CC[1] = 0;
    D_800733CC[3] = 0;
    D_800733CC[2] = a0;
    D_800733CC[4] = a1;
    D_800733CC[5] = DsReadyCallback(func_80047A78);
    D_800733CC[6] = DsStartCallback(func_80047D54);
    D_800733CC[8] = 1;
    return 1;
}
