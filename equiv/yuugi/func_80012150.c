#include "common.h"

void func_80012150(void) {
    extern M2C_UNK D_8008ED68[];
    if ((M2C_FIELD(D_8008ED68, M2C_UNK (**)(), 0xC8) == NULL) || (M2C_FIELD(D_8008ED68, s32 *, 0xD4) = 0, M2C_FIELD(D_8008ED68, M2C_UNK (**)(), 0xC8)(), (M2C_FIELD(D_8008ED68, M2C_UNK (**)(), 0xC8) == NULL))) {
        M2C_FIELD(D_8008ED68, s32 *, 0xD4) = 1;
        M2C_FIELD(D_8008ED68, M2C_UNK (**)(), 0xC8) = (M2C_UNK (*)()) M2C_FIELD(D_8008ED68, M2C_UNK (**)(), 0xCC);
        M2C_FIELD(D_8008ED68, M2C_UNK (**)(), 0xCC)();
    }
}
