#include "common.h"

void func_800993F8(void) {
    extern M2C_UNK D_80085428[];
    extern s16 D_800B3ACC[];
    func_80013668();
    (*D_800B3ACC) = 0;
    M2C_FIELD(D_80085428, s8 *, 0x5CB) = 4;
    M2C_FIELD(D_80085428, s8 *, 0) = 3;
    M2C_FIELD(D_80085428, s8 *, 0x5D0) = 1;
    func_80012508(D_80085428);
}
