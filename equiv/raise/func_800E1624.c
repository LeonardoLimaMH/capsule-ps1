#include "common.h"

s32 func_800E1624(s32 arg0) {
    extern M2C_UNK D_80100F38[];
    s16 temp_v1;

    temp_v1 = M2C_FIELD((((arg0 & 0xFFFF) * 0x79C) + (*D_80100F38)), s16 *, 0x37E);
    if (temp_v1 != 1) {
        return temp_v1 == 2;
    }
    return 1;
}
