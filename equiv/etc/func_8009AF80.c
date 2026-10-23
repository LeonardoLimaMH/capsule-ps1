#include "common.h"

void func_8009AF80(void) {
    extern M2C_UNK D_8008ED68[];
    extern s32 D_800B3ADC[];
    extern s32 D_800B3AE0[];
    extern s32 D_800B3AE4[];
    extern s32 D_800B3AE8[];
    extern s32 D_800B3B24[];
    extern s32 D_800B3B28[];
    switch ((*D_800B3AE4)) {                           /* irregular */
    case 0:
        func_8001ADCC(8);
block_9:
        (*D_800B3AE4) += 1;
        return;
    case 1:
        if (M2C_FIELD((*D_8008ED68), s32 *, 0xA68) == 0) {
            (*D_800B3AE8) = 0;
            (*D_800B3ADC) = 0;
            (*D_800B3B28) = 0;
            (*D_800B3B24) = 0;
            func_80012544(8);
            func_8001ADA0(8);
            goto block_9;
        }
        return;
    case 2:
        if (M2C_FIELD((*D_8008ED68), s32 *, 0xA68) == 0) {
            (*D_800B3AE4) = 0;
            (*D_800B3AE0) = 0;
        }
        break;
    }
}
