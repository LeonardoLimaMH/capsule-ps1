#include "common.h"

void func_80033764(s16 arg0) {
    extern M2C_UNK D_800922F0[];
    if (M2C_FIELD(D_800922F0, u8 *, 2) != arg0) {
        M2C_FIELD(D_800922F0, u8 *, 2) = (u8) arg0;
        if (arg0 == 0) {
            func_8003C878(arg0);
        } else {
            func_8003C884(arg0);
        }
        func_800371A4(M2C_FIELD(D_800922F0, s16 *, 0x144));
    }
}
