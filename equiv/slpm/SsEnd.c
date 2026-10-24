#include "common.h"

void SsEnd(void) {
    extern M2C_UNK D_80133338[];
    extern s8 D_80133346[];
    if (M2C_FIELD(D_80133338, s32 *, 0) == 0) {
        M2C_FIELD(D_80133338, s8 *, 0xD) = 0;
        if (M2C_FIELD(D_80133338, s8 *, 0xE) != 0x7F) {
            func_80112014();
            if (M2C_FIELD(D_80133338, s8 *, 0xC) != 0) {
                slpm_VSyncCallback(0);
                M2C_FIELD(D_80133338, s8 *, 0xC) = 0;
            } else if (M2C_FIELD(D_80133338, s8 *, 0xE) == 0) {
                slpm_InterruptCallback(0, M2C_FIELD(D_80133338, s32 *, 8));
                M2C_FIELD(D_80133338, s32 *, 8) = 0;
            } else {
                slpm_InterruptCallback(6, 0);
            }
            func_80112024();
            (*D_80133346) = 0x7F;
        }
    }
}
