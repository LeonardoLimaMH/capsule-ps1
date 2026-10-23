#include "common.h"

void func_800264BC(void *arg0) {
    extern s32 D_80078D14;
    s32 temp_v1;
    s32 var_a1;

    var_a1 = 0;
    D_80078D14 = arg0 + 0x323;
    M2C_FIELD(arg0, s8 *, 0x323) = 0;
    do {
        M2C_FIELD((D_80078D14 + var_a1), s8 *, 1) = 0xFF;
        temp_v1 = var_a1 * 2;
        M2C_FIELD((D_80078D14 + temp_v1), s8 *, 4) = 0xFF;
        var_a1 += 1;
        M2C_FIELD((D_80078D14 + temp_v1), s8 *, 5) = 0xFF;
    } while (var_a1 < 3);
}
