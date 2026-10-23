#include "common.h"

void func_800CB540(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    if (M2C_FIELD(arg0, u16 *, 0x4E) == 0) {
        M2C_FIELD(arg0, u16 *, 0x4E) = 1U;
        return;
    }
    func_800CBAA0(0, arg0, (*D_8008ED68), 0);
}
