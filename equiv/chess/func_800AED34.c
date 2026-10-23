#include "common.h"

void func_800AED34(void) {
    extern M2C_UNK D_8008ED68[];
    M2C_FIELD(D_8008ED68, u16 *, 0xE8) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xE8) + 1);
}
