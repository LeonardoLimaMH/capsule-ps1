#include "common.h"

void func_800B8184(s32 arg0) {
    extern M2C_UNK D_800EEB9C[];
    if ((arg0 < 3) && (arg0 > 0)) {
        M2C_FIELD(M2C_FIELD(((M2C_FIELD(D_800EEB9C, s32 *, 0x24) * 4) + D_800EEB9C), void **, 0x28), s16 *, 0x66) = (s16) (arg0 == 1);
    }
}
