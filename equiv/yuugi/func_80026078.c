#include "common.h"

void func_80026078(s32 arg0, s32 arg1, s8 arg2) {
    extern M2C_UNK D_80069E4C[];
    M2C_FIELD(D_80069E4C, s8 *, 0xD) = (s8) (0xD - arg1);
    M2C_FIELD(D_80069E4C, s8 *, 0xC) = (s8) (0xD - arg0);
    M2C_FIELD(D_80069E4C, s8 *, 0x10) = 7;
    M2C_FIELD(D_80069E4C, s8 *, 0x11) = 7;
    M2C_FIELD(D_80069E4C, s8 *, 0x12) = arg2;
    func_800260C8(7, 7);
}
