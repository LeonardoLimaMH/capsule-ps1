#include "common.h"

void func_801159E8(s32 arg0) {
    extern s32 * D_80131C3C[];
    extern s32 * D_80131C40[];
    extern s32 * D_80131C44[];
    extern s32 * D_80131C48[];
    *(*D_80131C3C) = 0x04000002;
    *(*D_80131C40) = arg0;
    *(*D_80131C44) = 0;
    *(*D_80131C48) = 0x01000401;
}

s32 func_80115A30(s32 arg0) {
    extern s32 * D_80131C38[];
    extern s32 * D_80131C3C[];
    *(*D_80131C3C) = arg0 | 0x10000000;
    return *(*D_80131C38) & 0xFFFFFF;
}
