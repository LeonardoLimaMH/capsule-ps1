#include "common.h"
#include "yuugi.h"

#include "common.h"

void func_8002E75C(void) {
    extern s8 D_800859F3[];
    extern M2C_UNK D_8008ED68[];
    extern M2C_UNK D_800922D0[];
    M2C_GFIELD(D_800922D0, s16, 2) = 0;
    (*D_800859F3) = 0;
    M2C_GFIELD(D_800922D0, s32, 8) = 0;
    func_800322F4();
    M2C_GFIELD(D_8008ED68, u16, 0xF0) = (u16) (M2C_GFIELD(D_8008ED68, u16, 0xF0) + 1);
}
