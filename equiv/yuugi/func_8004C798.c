#include "common.h"

extern void func_8004BC7C();

s32 func_8004C798(void) {
    return DMACallback(2, func_8004BC7C);
}
