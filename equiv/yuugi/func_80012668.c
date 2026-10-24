#include "common.h"

void func_80012668(void) {
    extern M2C_UNK D_8008ED68[];
    M2C_FIELD(D_8008ED68, s16 *, 0xEE) = 0;
    M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
}
