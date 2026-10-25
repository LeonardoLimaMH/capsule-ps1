#include "common.h"

s32 func_800D0884(s32 arg0) {
    extern u8 D_80118C18[];
    s32 var_a0;
    s32 var_a2;
    s32 var_a3;

    var_a3 = 0;
    var_a2 = 0;
    var_a0 = (arg0 & 0xFF) * 0x2A;
    do {
        if (M2C_FIELD(((M2C_FIELD(D_80118C18, u8 *, 0xA) * 0x10E) + (D_80118C18 + 0x392) + var_a0), u8 *, 0x12) != 0) {
            var_a3 += 1;
        }
        var_a2 += 1;
        var_a0 += 7;
    } while (var_a2 < 5);
    return var_a3 & 0xFF;
}
