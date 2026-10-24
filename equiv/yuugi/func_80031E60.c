#include "common.h"

void func_80031E60(void) {
    extern u16 D_80085430[];
    extern s8 D_800859F3[];
    extern M2C_UNK D_8008ED68[];
    extern s32 D_8008F78C[];
    extern M2C_UNK D_800922D0[];
    extern s32 D_800922D8[];
    M2C_FIELD(D_800922D0, s16 *, 0) = 0;
    if ((M2C_FIELD(D_800922D0, s16 *, 0xC) != 2) && ((*D_8008F78C) != 1)) {
        func_800338DC((*D_80085430));
    }
    if (M2C_FIELD(D_8008ED68, s32 *, 0xA20) != 0) {
        M2C_FIELD(D_8008ED68, s32 *, 0xA20) = 0;
        (*D_800859F3) = 4;
        (*D_800922D8) = 4;
        return;
    }
    M2C_FIELD(D_8008ED68, s16 *, 0xF0) = 3;
    func_8001CB80();
}
