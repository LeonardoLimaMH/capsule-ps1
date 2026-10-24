#include "common.h"

void func_800B81C4(s32 arg0) {
    extern M2C_UNK D_800EEB9C[];
    if ((arg0 < 3) && (arg0 > 0) && (M2C_FIELD(D_800EEB9C, s32 *, 0x24) != 5)) {
        M2C_FIELD(M2C_FIELD(((M2C_FIELD(D_800EEB9C, s32 *, 0x24) * 0x24) + D_800EEB9C + (M2C_FIELD(D_800EEB9C, s32 *, 0xD0) * 4)), void **, 0xD4), s16 *, 0x66) = (s16) (arg0 == 1);
    }
}
