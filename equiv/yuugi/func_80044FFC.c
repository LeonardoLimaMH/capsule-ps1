#include "common.h"

s32 func_80044FFC(void) {
    extern M2C_UNK D_80072F6C[];
    extern M2C_UNK D_80072F74[];
    s32 var_v1;

    CD_flush();
    M2C_FIELD(D_80072F6C, s32 *, 0) = (s32) (M2C_FIELD(D_80072F6C, s32 *, 0) + 1);
    var_v1 = 0x1E;
    if (*(D_80072F74 + (M2C_FIELD(D_80072F6C, u8 *, -0x44) * 4)) != 0) {
        var_v1 = 0x3C0;
    }
    M2C_FIELD(D_80072F6C, s32 *, -4) = var_v1;
    CD_cw(M2C_FIELD(D_80072F6C, u8 *, -0x44), M2C_FIELD(D_80072F6C, s32 *, -0x3C), 0, 1);
    return 0;
}
