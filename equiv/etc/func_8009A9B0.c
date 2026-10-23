#include "common.h"

void func_8009A9B0(void) {
    extern M2C_UNK D_8008ED68[];
    extern s32 D_800B3ADC[];
    if (M2C_FIELD((*D_8008ED68), u16 *, 0xE0) == 0) {
        if (M2C_FIELD((*D_8008ED68), s32 *, 0xA68) == 0) {
            func_80012578();
        }
    } else {
        (*D_800B3ADC) = 0x20;
        func_80012508();
    }
}
