#include "common.h"

s32 func_800AEF38(u32 arg0) {
    extern s32 D_800EEA8C[];
    if (arg0 < 8U) {
        return func_800AF018();
    }
    if ((u32) (arg0 - 8) < 7U) {
        return func_800AF148();
    }
    if ((u32) (arg0 - 0xF) < 5U) {
        return func_800AF278();
    }
    if ((u32) (arg0 - 0x14) < 2U) {
        return func_800AF280();
    }
    if ((u32) (arg0 - 0x16) < 4U) {
        return func_800AF288();
    }
    if (arg0 == 0x1A) {
        return func_800AF290(0x1A);
    }
    if ((u32) (arg0 - 0x1B) >= 2U) {
        return (*D_800EEA8C);
    }
    return func_800AF298();
}
