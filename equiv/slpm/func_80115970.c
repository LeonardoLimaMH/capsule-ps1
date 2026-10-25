#include "common.h"

void func_80115970(u32 arg0) {
    extern u32 * D_80131C3C[];
    extern u8 D_80133588[];
    *(*D_80131C3C) = arg0;
    *(D_80133588 + (arg0 >> 0x18)) = (s8) arg0;
}
