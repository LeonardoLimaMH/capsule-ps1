#include "common.h"

void func_80012684(s16 arg0) {
    extern M2C_UNK D_8008ED68[];
    M2C_FIELD(D_8008ED68, s16 *, 0xEC) = arg0;
    M2C_FIELD(D_8008ED68, s16 *, 0xEE) = 0;
}
