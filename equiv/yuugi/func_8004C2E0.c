#include "common.h"

s32 func_8004C2E0(s32 arg0) {
    extern s32 * D_80078A20;
    extern s32 * D_80078A24;
    *D_80078A24 = 0x10000007;
    if ((*D_80078A20 & 0xFFFFFF) != 2) {
        *D_80078A20 = (*D_80078A24 & 0x3FFF) | 0xE1001000;
        return 0;
    }
    if (arg0 & 8) {
        *D_80078A24 = 0x09000001;
        return 2;
    }
    return 1;
}
