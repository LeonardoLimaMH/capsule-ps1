#include "common.h"

u8 func_800D72CC(s32 arg0, M2C_UNK arg1) {
    extern s8 D_80119658[];
    extern u8 D_80119659[];
    func_8001A998(arg1, 0xA9);
    (*D_80119658) = 0;
    (*D_80119659) = 0;
    func_800D6DA4(arg0 & 0xFF, arg1);
    return (*D_80119659);
}
