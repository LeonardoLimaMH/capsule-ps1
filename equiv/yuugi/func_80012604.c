#include "common.h"

void func_80012604(s16 arg0) {
    extern M2C_UNK D_8008ED68[];
    M2C_FIELD(D_8008ED68, s16 *, 0xE4) = arg0;
    M2C_FIELD(D_8008ED68, s16 *, 0xE6) = 0;
    M2C_FIELD(D_8008ED68, s16 *, 0xE8) = 0;
    M2C_FIELD(D_8008ED68, s16 *, 0xEA) = 0;
    M2C_FIELD(D_8008ED68, s16 *, 0xEC) = 0;
    M2C_FIELD(D_8008ED68, s16 *, 0xEE) = 0;
}
