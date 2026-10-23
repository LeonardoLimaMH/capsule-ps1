#include "common.h"

void func_80099E2C(void) {
    extern M2C_UNK D_8008ED68[];
    extern s32 D_800B3AD0[];
    s32 temp_v0;

    temp_v0 = (*D_800B3AD0) - 1;
    (*D_800B3AD0) = temp_v0;
    if ((temp_v0 < 0) || (M2C_FIELD((*D_8008ED68), s32 *, 0x88) & 0x8F0) || (M2C_FIELD((*D_8008ED68), s32 *, 0x98) & 0x8F0)) {
        func_8001ADCC(8);
        (*D_800B3AD0) = 0x168;
        func_80012508();
    }
}
