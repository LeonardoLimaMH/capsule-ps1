#include "common.h"

void func_80047D54(s32 arg0, M2C_UNK arg1) {
    extern M2C_UNK D_800733E8[];
    s32 temp_s1;

    if ((M2C_FIELD(D_800733E8, s32 *, 0) != 0) && (temp_s1 = arg0 & 0xFF, (M2C_FIELD(D_800733E8, s32 *, 4) != 0))) {
        if (temp_s1 == 2) {
            if (DsQueueLen() == 0) {
                func_80047E0C();
            }
        } else {
            DsReadyCallback(M2C_FIELD(D_800733E8, s32 *, -8));
            DsStartCallback(M2C_FIELD(D_800733E8, s32 *, -4));
            M2C_FIELD(D_800733E8, s32 *, 4) = 0;
            if (M2C_FIELD(D_800733E8, M2C_UNK (**)(s32, M2C_UNK, M2C_UNK), -0x14) != NULL) {
                M2C_FIELD(D_800733E8, M2C_UNK (**)(s32, M2C_UNK, M2C_UNK), -0x14)(temp_s1, arg1, 0);
            }
        }
    }
}
