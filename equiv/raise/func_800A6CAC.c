#include "common.h"

void func_800A6CAC(void) {
    extern M2C_UNK D_80085428[];
    M2C_FIELD(D_80085428, u16 *, 0xC) = (u16) (M2C_FIELD(D_80085428, u16 *, 0xC) + 1);
    func_80018F90(M2C_FIELD(D_80085428, u16 *, 0xC), 3);
}
