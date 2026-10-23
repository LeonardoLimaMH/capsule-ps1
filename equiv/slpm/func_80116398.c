#include "common.h"

s32 func_80116398(s32 arg0) {
    extern s32 * D_80131C38;
    extern s32 * D_80131C3C;
    *D_80131C3C = 0x10000007;
    if ((*D_80131C38 & 0xFFFFFF) != 2) {
        *D_80131C38 = (*D_80131C3C & 0x3FFF) | 0xE1001000;
        return 0;
    }
    if (arg0 & 8) {
        *D_80131C3C = 0x09000001;
        return 2;
    }
    return 1;
}
