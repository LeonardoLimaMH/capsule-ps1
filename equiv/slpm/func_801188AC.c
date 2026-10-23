#include "common.h"

void func_801188AC(void) {
    extern M2C_UNK (*D_80131D1C)(u8, M2C_UNK *);
    extern M2C_UNK (*D_80131D20)(u8, M2C_UNK *);
    extern u8 * D_80131FE4[];
    extern M2C_UNK D_80131FFD[];
    extern M2C_UNK D_80134ED8[];
    extern M2C_UNK D_80134EE0[];
    s32 temp_v0;
    s32 var_v0;
    u8 temp_s2;

    temp_s2 = *(*D_80131FE4) & 3;
loop_1:
    temp_v0 = func_80117224();
    if (temp_v0 != 0) {
        var_v0 = temp_v0 & 2;
        if (temp_v0 & 4) {
            if (D_80131D20 != NULL) {
                D_80131D20(M2C_FIELD((*D_80131FFD), u8 *, 0), (*D_80134EE0));
            }
            var_v0 = temp_v0 & 2;
        }
        if ((var_v0 != 0) && (D_80131D1C != NULL)) {
            D_80131D1C(M2C_FIELD((*D_80131FFD), u8 *, -1), (*D_80134ED8));
        }
        goto loop_1;
    }
    *(*D_80131FE4) = temp_s2;
}
