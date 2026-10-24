#include "common.h"

void func_800457C4(void) {
    extern M2C_UNK D_80072F24[];
    extern M2C_UNK D_80072F44[];
    M2C_FIELD(D_80072F24, s32 *, 0) = 0;
    CD_flush();
    if ((M2C_FIELD(D_80072F24, s32 *, 0x20) == 2) && ((M2C_FIELD(D_80072F24, s32 *, 0x24) == 0xB) || (M2C_FIELD(D_80072F24, s32 *, 0x24) == 0x11) || (M2C_FIELD(D_80072F24, s32 *, 0x24) == 0x10))) {
        M2C_FIELD(D_80072F44, s32 *, 0) = 1;
        M2C_FIELD(D_80072F44, s32 *, 4) = 0xB;
    }
}
